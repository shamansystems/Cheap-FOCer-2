# Parts

### AliExpress Wishlist

Wishlist for 5 FOCers: [AliExpress](https://my.aliexpress.com/wishlist/shared.htm?groupId=100000021433489)

### **SMD Assembled PCB**

* Follow **[this guide](../Ordering/readme.md)**
* 1 per FOCer

### **Heat Sink**: [AliExpress](https://www.AliExpress.com/item/32951112852.html)

* 60mm x 100mm ( x 10mm) flat surface [Heat sink](images/heatSink.jpeg)
* 1 per FOCer
* Any [generic heat sink](images/heatSink.jpeg) with a flat surface of at least 60mm x 100mm can be used

### **Thermal Pad**: [AliExpress](https://www.AliExpress.com/item/32810504639.html)

* 60mm x 60mm x 1mm non conductive [Thermal pad](images/thermalPad.jpeg)
* 1 per FOCer
* This electrically insulates the MOSFET tabs from the heat sink (very important).
* 0.5mm thick thermal pad **will NOT be sufficient** to fill the gap between MOSFET tabs and heat sink surface.

### **Thermal Paste**: [AliExpress](https://www.aliexpress.com/item/4000082981600.html)

* Any Thermal Paste
* 2 dabs per FOCer
* Yes you need both pads and paste
* Paste is used to help connect a MOSFET to the thermocouple

### **Screws**: [AliExpress](https://www.AliExpress.com/item/32810872544.html)

* m3 x 12mm hex socket [screws](images/screws.jpeg)
* 5 per FOCer

### **Thread Lock**: [AliExpress](https://www.aliexpress.com/item/4000015095892.html)

* To keep screws in while being vibrated

### **Spacers**: [AliExpress](https://www.AliExpress.com/item/33047891996.html),  [ebay](https://www.ebay.com/itm/OD7-5mm-Nylon-Round-Spacer-Standoff-For-M3-thread-Screw-Blot-QTY50/183743008473), [thingiverse](https://www.thingiverse.com/thing:2876367)

* M3/M4 5mm nylon [spacers](images/spacers.jpeg)
* 5 per FOCer
* Spacers to prevent over-tightening of screws, which cause warping/damage to the PCB.
* **If printing**, use PETG or ABS as PLA warps at around 60c

### **Washers**: [AliExpress](https://www.AliExpress.com/item/33021883302.html)

* M3 x 6mm x 1 mm Nylon [Washers](images/washers.jpeg)
* 5 per FOCer

## Optional Parts

### **Pin Headers**:  [AliExpress](https://www.AliExpress.com/item/4000909558952.html)

* [Pin headers](pinHeaders.png)
* A pack of 10 should do for 5 boards
* Used for GPIO and the initial bootloader/firmware flashing

### **Power Switch**: [AliExpress](https://www.AliExpress.com/item/4000358463924.html)

* 2 position switch
* 1 per FOCer
* just need to open/close the circuit

### **Fan**: [AliExpress](https://www.AliExpress.com/item/32571979071.html)

* 60 MM 5v [Fan](images/fan.jpeg)
* 1 per FOCer
* Can be mounted to Heat Sink Fins to provide additional cooling potential.

### **Power Adapter**: [AliExpress](https://www.aliexpress.com/item/32873131460.html)

* Used to test newly assembled FOCer
* 5v minimum
* 100mA/.1 amp so that you can minimize potential damage to improperly assembled FOCer

### **Case**

* 1 per FOCer
* TODO: link to 3d printable one

## Wires, Cables and Connectors

### **Battery & Motor Phase Wire**: [AliExpress](https://www.AliExpress.com/item/33057076463.html)

* 100mm of 12AWG or 10AWG Silicone Stranded Wire
* 1 red & 4 black(500mm total) per FOCer
* [The shorter the better on the battery side](https://www.youtube.com/watch?v=54bb9zpDdZU)

### **Battery Connector**: [AliExpress](https://www.AliExpress.com/item/32546847748.html)

* XT60 or XT90 [male](images/xt90MvF.jpg) **Amass** connector
* 1 per FOCer

### **Motor Connectors**: [AliExpress](https://www.AliExpress.com/item/32926203705.html)

* 4mm female bullet connectors
* 3 per FOCer
* Other options: 4.5mm/5mm/5.5mm/etc. bullet connectors, [MT60](https://www.aliexpress.com/item/32801541697.html)

### **Pigtails**: [AliExpress](https://www.AliExpress.com/item/32733307616.html)

* JST PH 2.0 Pigtails
* 2x2pin per FOCer
* 1x3pin per FOCer
* 1x6pin per FOCer
* 1x7pin per FOCer

### **Heat Shrink**

* For the PCB(instead of an enclosure) - [AliExpress](https://a.AliExpress.com/_dUNLfKc)
* 70mm diameter for PCBs with heat sink
* For other wires(motor bullet connectors)- [AliExpress](https://www.AliExpress.com/item/33008449230.html)

## Consumables

### **Solder**(required): [AliExpress](https://www.AliExpress.com/item/32946643268.html) [Amazon](https://www.amazon.com/MG-Chemicals-Leaded-Solder-Pocket/dp/B072JQ1N4G)

* 0.5 for smaller parts and 1mm for larger wire
* rosin core

### **Cutting Oil**

* For adding threaded holes to the heat sink
* Could use most any oil you have on hand

### **Solder Wick**: [AliExpress](https://www.aliexpress.com/item/32958719300.html)

* Braided copper solder wick
* 1 roll for the rest of your life, if you don't fuck up too much
* Helps with removing bridges and [small chips](https://youtu.be/8yyUlABj29o)

### **Flux**: [AliExpress](https://www.AliExpress.com/item/32828595199.html)

* One tube should do for 5 or more boards
* Makes soldering work better

## Tools List

### **ST-Link V2** (Required)

* ST-Link V2: [AliExpress](https://www.AliExpress.com/item/32792513237.html)
* 5-pin 2.54mm male header for connecting to the VESC:  [AliExpress](https://www.AliExpress.com/item/4000909558952.html).  You should have already ordered this as part of the [5XBomLcsc.csv](../../5XBomLcsc.csv)
* Used to flash the VESC bootloader as part of the initial setup

### **Drill**(required): [AliExpress](https://www.aliexpress.com/item/4000642467959.html)

* Electric Drill
* To drill holes in the heat sink

### **Drill Bit**(required): [AliExpress](https://www.aliexpress.com/item/32483226736.html),[Amazon](https://www.amazon.com/gp/product/B07ZQGXWGL)

* 2.5mm drill bit
* For heat sink connection

### **M3 Allen Key**(required): [AliExpress](https://www.AliExpress.com/item/32676647238.html)

### **Soldering Iron**(required): [AliExpress](https://www.AliExpress.com/item/4000019437594.html), [Amazon](https://www.amazon.com/X-Tronic-3020-XTS-Digital-Display-Soldering/dp/B01DGZFSNE)

* [How to solder tiny things](https://www.overclockers.com/how-to-solder-tiny-things/)
* How to [video style](https://youtu.be/b9FC9fAlfQE)

### **Tap Wrench**: [AliExpress](https://www.aliexpress.com/item/32788074995.html)

* Can also use a socket or vice grips
* Just need something to hold the tap straight

### **Tap**: [AliExpress](https://www.aliexpress.com/item/4000465103162.html)

* M3 Tap
* For heat sink connection
* Can also use one of your steel screws to create threads in the aluminum

### **Reflow Station**- mandatory for the IMU(BMI160): [AliExpress](https://www.aliexpress.com/item/32747661606.html),[Amazon](https://www.amazon.com/Flexzion-Digital-Soldering-Station-Desoldering/dp/B0154G4A28)

### **Helping Hands**- highly recommended: [AliExpress](https://www.aliexpress.com/item/32974107958.html), [Amazon](https://www.amazon.com/gp/product/B078N9DPQ5)

### **Solder Sucker**: [AliExpress](https://www.aliexpress.com/item/32864628837.html)

* To remove solder
* Easier to use than solder wick, not consumable

### **Multimeter**: [AliExpress](https://www.aliexpress.com/item/33046473408.html)

Cant say where or why, but surely you'll need it for something

### **Magnifier/Microscope**: [AliExpress](https://www.aliexpress.com/item/32816285552.html)

Not sure if the AliExpress one is any good.  Don't get the suction mount.

### **Tweezers**: [AliExpress](https://AliExpress.com/item/33019151832.html)

To place small parts

## Accessories

### **Bluetooth Module**- [AliExpress](https://www.AliExpress.com/item/32833817130.html)

* [How to](https://www.youtube.com/watch?v=PFFiVxFHDM4)
* [More info](https://vesc-project.com/node/234)
* I was able to get a [HM-10 Bluetooth 4.0](https://www.AliExpress.com/item/32888733000.html) working with [Ackmaniac's](http://esk8.news/how-to-ackmaniac-esc-tool/) firmware on my vesc at 9600 baud rate

### **Remote**

TODO: Will any remote work?  What should they look for or avoid?
