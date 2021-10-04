/*
	Copyright 2019 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "app.h"
#include "ch.h"
#include "hal.h"

// Some useful includes
#include "mc_interface.h"
#include "utils.h"
#include "encoder.h"
#include "terminal.h"
#include "comm_can.h"
#include "hw.h"
#include "commands.h"
#include "timeout.h"

#include <math.h>
#include <string.h>
#include <stdio.h>

// Constants
#define POS_HYSTERESIS 0
#define PROPORTIONAL_MULTIPLIER 0.0065f
#define MAX_ABS_DUTY 0.45f
#define HOMING_DUTY 0.06f
#define BAUDRATE 115200
#define PACKET_HANDLER 1
// Applied as an offset once we zero against the 'hard-right' (fully retracted) endstop.
#define CENTER_POS 420
// Furthest tach counts to right side
#define RIGHT_ENDSTOP_POS 420
// Furthest tach counts to left side
#define LEFT_ENDSTOP_POS -420

// Threads
static THD_FUNCTION(my_thread, arg);
static THD_WORKING_AREA(my_thread_wa, 2048);

// Private functions
static void terminal_test(int argc, const char **argv);

// Private variables
static volatile bool stop_now = true;
static volatile bool is_running = false;
static volatile int target_pos = 0;
static volatile bool has_homed = false;
static SerialConfig uart_cfg = {
	BAUDRATE,
	0,
	USART_CR2_LINEN,
	0};

static void SendUARTData(unsigned char *data, unsigned int len)
{
	sdWrite(&HW_UART_DEV, data, len);
}

// Called when the custom application is started. Start our
// threads here and set up callbacks.
void app_custom_start(void)
{
	stop_now = false;
	chThdCreateStatic(my_thread_wa, sizeof(my_thread_wa),
					  NORMALPRIO, my_thread, NULL);

	// Terminal commands for the VESC Tool terminal can be registered.
	terminal_register_command_callback(
		"pos_go_heres",
		"Do the thing",
		NULL,
		terminal_test);

	sdStart(&HW_UART_DEV, &uart_cfg);
}

// Called when the custom application is stopped. Stop our threads
// and release callbacks.
void app_custom_stop(void)
{
	terminal_unregister_callback(terminal_test);
	sdStop(&HW_UART_DEV);
	stop_now = true;
	while (is_running)
	{
		chThdSleepMilliseconds(1);
	}
	mc_interface_set_duty(0.0f);
}

void app_custom_configure(app_configuration *conf)
{
	(void)conf;
}

static bool shouldExitThread()
{
	return stop_now || chThdShouldTerminateX();
}

// -1000 == hardest left
// 0 == center
// 1000 = hardest right
static void setTargetPos(int input)
{
	utils_truncate_number_int(&input, -1000, 1000);
	target_pos = utils_map_int(input, -1000, 1000, LEFT_ENDSTOP_POS, RIGHT_ENDSTOP_POS);
}

static THD_FUNCTION(my_thread, arg)
{
	(void)arg;

	chRegSetThreadName("App Custom");

	// Setup the stuff needed to receive UART data
	event_listener_t el;
	chEvtRegisterMaskWithFlags(&HW_UART_DEV.event, &el, EVENT_MASK(0), CHN_INPUT_AVAILABLE);

	is_running = true;
	// Main Loop
	while (!shouldExitThread())
	{
		// Home the system if we haven't yet
		if (!has_homed)
		{
			// slowly move towards limit
			mc_interface_set_duty(HOMING_DUTY);
			// Wait till we actuate the limit switch
			while (!shouldExitThread())
			{
				timeout_reset();
				float switchValue = (((float)ADC_Value[ADC_IND_EXT]) / 4095) * V_REG;
				// Have we gone Open circut?
				if (switchValue >= 2.5f)
				{
					// We homed against endstop. Stop moving and zero the tach
					has_homed = true;
					mc_interface_set_duty(0.0f);
					mc_interface_set_tachometer_value(CENTER_POS);
					break;
				}
				chThdSleepMilliseconds(1);
			}
		}
		// System is now homed. We know where we are :)
		timeout_reset();

		float targetDutyCycle = 0.0f;
		int currentTachPos = mc_interface_get_tachometer_value(false);
		if (fabsf(currentTachPos - target_pos) > POS_HYSTERESIS)
		{
			int diff = currentTachPos - target_pos;
			float duty = (float)fabsf(diff) * PROPORTIONAL_MULTIPLIER;
			utils_truncate_number(&duty, 0.00f, MAX_ABS_DUTY);
			targetDutyCycle = (diff > 0) ? duty * -1.0f : duty;
		}
		mc_interface_set_duty(targetDutyCycle);

		// Await for any UART data, or, until 1ms has passed.
		chEvtWaitAnyTimeout(ALL_EVENTS, ST2MS(1));
		// Check for UART data
		
		uint8_t reply[11];
		int reply_ind = 0;

		msg_t res = sdGetTimeout(&HW_UART_DEV, TIME_IMMEDIATE);
		while (res != MSG_TIMEOUT) {
			if (reply_ind < (int)sizeof(reply)) {
				reply[reply_ind++] = res;
			}
			res = sdGetTimeout(&HW_UART_DEV, TIME_IMMEDIATE);
		}

		uint8_t crc = 0;
		for (int i = 0;i < (reply_ind - 1);i++) {
			crc = (reply[i] ^ crc);
		}
	}
	is_running = false;
	// Safety go brr
	mc_interface_set_duty(0.0f);
}

// Callback function for the terminal command with arguments.
static void terminal_test(int argc, const char **argv)
{
	if (argc != 2)
	{
		commands_printf("This command requires the setpoint argument.");
	}
	int input = 0;
	sscanf(argv[1], "%d", &input);
	setTargetPos(input);
	int currentTachPos = mc_interface_get_tachometer_value(false);

	commands_printf("Current Tach pos: %d", currentTachPos);
	commands_printf("New Tach Setpoint: %d", target_pos);
}