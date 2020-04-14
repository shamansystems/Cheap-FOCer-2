EESchema Schematic File Version 2
LIBS:BLDC_4-rescue
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:crf_1
LIBS:BLDC_4-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 7
Title "BLDC Driver 4.11"
Date "21 aug 2015"
Rev "4.12"
Comp "Benjamin Vedder"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L R-RESCUE-BLDC_4 R1
U 1 1 5426DA2F
P 4400 3400
F 0 "R1" V 4480 3400 40  0000 C CNN
F 1 "NTC 10k" V 4407 3401 40  0000 C CNN
F 2 "CRF1:SMD-0603_r" V 4330 3400 30  0001 C CNN
F 3 "" H 4400 3400 30  0000 C CNN
	1    4400 3400
	1    0    0    -1  
$EndComp
$Comp
L R-RESCUE-BLDC_4 R2
U 1 1 5426DAA6
P 4400 4100
F 0 "R2" V 4480 4100 40  0000 C CNN
F 1 "10k" V 4407 4101 40  0000 C CNN
F 2 "CRF1:SMD-0603_r" V 4330 4100 30  0001 C CNN
F 3 "" H 4400 4100 30  0000 C CNN
	1    4400 4100
	1    0    0    -1  
$EndComp
$Comp
L C-RESCUE-BLDC_4 C41
U 1 1 5426DADD
P 4150 4100
F 0 "C41" H 4150 4200 40  0000 L CNN
F 1 "2.2u" H 4156 4015 40  0000 L CNN
F 2 "CRF1:SMD-0603_c" H 4188 3950 30  0001 C CNN
F 3 "" H 4150 4100 60  0000 C CNN
	1    4150 4100
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR023
U 1 1 5426DB11
P 4400 3050
F 0 "#PWR023" H 4400 3150 30  0001 C CNN
F 1 "VCC" H 4400 3150 30  0000 C CNN
F 2 "" H 4400 3050 60  0000 C CNN
F 3 "" H 4400 3050 60  0000 C CNN
	1    4400 3050
	1    0    0    -1  
$EndComp
$Comp
L GND-RESCUE-BLDC_4 #PWR024
U 1 1 5426DB25
P 4400 4600
F 0 "#PWR024" H 4400 4600 30  0001 C CNN
F 1 "GND" H 4400 4530 30  0001 C CNN
F 2 "" H 4400 4600 60  0000 C CNN
F 3 "" H 4400 4600 60  0000 C CNN
	1    4400 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4400 4350 4400 4600
Wire Wire Line
	4150 4300 4150 4450
Wire Wire Line
	4150 4450 4400 4450
Connection ~ 4400 4450
Wire Wire Line
	4400 3650 4400 3850
Wire Wire Line
	4150 3750 4550 3750
Wire Wire Line
	4150 3750 4150 3900
Connection ~ 4400 3750
Wire Wire Line
	4400 3050 4400 3150
Text HLabel 4550 3750 2    60   Input ~ 0
Temp
$EndSCHEMATC
