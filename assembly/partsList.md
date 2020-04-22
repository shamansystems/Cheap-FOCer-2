# Parts List
## Required Parts
1. **Completed PCB**
    * [Cheap FOCer V2 fully assembled PCB](../orderingGuide/readme.md)
    * 1 per FOCer
3. **Heat sink**: [aliexpress](https://www.aliexpress.com/item/32951112852.html)
    * 60mm x 100mm ( x 10mm) flat surface [Heat sink](./images/heatSink.jpeg) 
    * 1 per FOCer
    * Any [generic heat sink](./images/heatSink.jpeg) with a flat surface of at least 60mm x 100mm can be used
4. **Thermal pad**: [aliexpress](https://www.aliexpress.com/item/32810504639.html)
    * 60mm x 60mm x 1mm non conductive [Thermal pad](./images/thermalPad.jpeg)
    * 1 per FOCer
    * This electrically insulates the MOSFET tabs from the heatsink (very important).
    * 0.5mm thick thermal pad **will NOT be sufficient** to fill the gap between MOSFET tabs and heat sink surface.
5. **Screws**: [aliexpress](https://www.aliexpress.com/item/32810872544.html)
    * m3 x 12mm hex socket [screws](./images/screws.jpeg)
    * 5 per FOCer
1. **Spacers**: [aliexpress](https://www.aliexpress.com/item/33047891996.html),  [ebay](https://www.ebay.com/itm/OD7-5mm-Nylon-Round-Spacer-Standoff-For-M3-thread-Screw-Blot-QTY50/183743008473) [thingiverse](https://www.thingiverse.com/thing:2876367)
    * M3/M4 5mm nylon [spacers](./images/spacers.jpeg)
    * 5 per FOCer
    * Spacers to prevent over-tightening of screws, which cause warping/damage to the PCB.
1. **Washers**: [aliexpress](https://www.aliexpress.com/item/33021883302.html)
    * M3 x 6mm x 1 mm Nylon [Washers](./images/washers.jpeg) 
    * 5 per FOCer
1. **Nuts? are we drilling and tapping the Heat sink? WHAT IS THE PLANNNNNN????**

### Optional Parts
1. **Pin headers**:  [aliexpress](https://www.aliexpress.com/item/4000909558952.html)
    * [Pin headers](pinHeaders.png)
    * a bunch per FOCer
1. **Power switch**: [aliexpress](https://www.aliexpress.com/item/4000358463924.html)
    * 2 position switch
    * 1 per FOCer
    * just need to open/close the circuit
1. **Fan**: [aliexpress](https://www.aliexpress.com/item/32571979071.html)
    * 60 MM 5v [Fan](./images/fan.jpeg)
    * 1 per FOCer
    * Can be mounted to Heat Sink Fins to provide additional cooling potential. 
5. **Case**:
    * 1 per FOCer
    * link to 3d printable one

## Wires, cables and connectors
1. **Battery & Motor Phase Wire**: [aliexpress](https://www.aliexpress.com/item/33057076463.html)
    * 100mm of 12AWG or 10AWG Silicone Stranded Wire
    * 1 red & 4 black(500mm total) per FOCer
    * [the shorter the better on the battery side](https://www.youtube.com/watch?v=54bb9zpDdZU)
2. **Battery connector**: [aliexpress](https://www.aliexpress.com/item/32546847748.html)
    * XT60 or XT90 [male](./images/xt90MvF.jpg) **Amass** connector
    * 1 per FOCer
3. **motor connectors**: [aliexpress](https://www.aliexpress.com/item/32926203705.html)
    * 4mm bullet connectors 
    * 3 per FOCer
     * Other options: 4.5mm/5mm/5.5mm/etc. bullet connectors, MT60
1. **JST PH 2.0 Pigtails**: [aliexpress](https://www.aliexpress.com/item/32733307616.html)
    * 2x2pin per FOCer
    * 1x3pin per FOCer
    * 1x6pin per FOCer
    * 1x7pin per FOCer
    * Used for quick setup and configuration of external accessories
1. **Heat shrink**
    * For the PCB- [ali express](https://a.aliexpress.com/_dUNLfKc)
        - 70mm diameter for PCs with heat sink 
    * For other wires(motor bullet connectors)- [ali express](https://www.aliexpress.com/item/33008449230.html)

## Consumables
1. **Solder**(required): [ali express](https://www.aliexpress.com/item/32946643268.html) [Amazon No Clean Flux Core (EASY TO USE)](https://www.amazon.com/MG-Chemicals-Leaded-Solder-Pocket/dp/B072JQ1N4G)
    * 0.5mm to 1mm
    * if you can, get 0.5
    * rosin core is for electronics
1. **Solder wick**
    * Braided copper solder wick
    * 1 roll for the rest of your life, if you dont fuck up too much
    * To remove solder
3. **Flux**: [aliexpress](https://www.aliexpress.com/item/32828595199.html)
    * One tube should do
    * Makes soldering work better 

## Tools List
1. **M3 socket**(required): [aliexpress](https://www.aliexpress.com/item/32676647238.html)
1. **Soldering iron**(required): [aliexpress](https://www.aliexpress.com/item/4000019437594.html)
    * [amazon](https://www.amazon.com/X-Tronic-3020-XTS-Digital-Display-Soldering/dp/B01DGZFSNE)
    * [How to solder tiny things](https://www.overclockers.com/how-to-solder-tiny-things/) [youtube](https://youtu.be/b9FC9fAlfQE)
1. **helping hands**- highly recommended: [amazon](https://www.amazon.com/gp/product/B078N9DPQ5)
1.  **reflow station with soldering iron**- Mandatory for the IMU(BMI160): [amazon](https://www.amazon.com/Flexzion-Digital-Soldering-Station-Desoldering/dp/B0154G4A28)
1. **Solder sucker** 
    * To remove solder
    * Easier to use than solder wick, not consumable
1. **multimeter**
1. **magnifier/microscope**
1. **Tweezers**- to place small parts: [ali express](https://aliexpress.com/item/33019151832.html)

## Accessories (This should probably be another file)
1. **bluetooth module**- [ali express](https://www.aliexpress.com/item/32833817130.html)
    * https://www.youtube.com/watch?v=PFFiVxFHDM4&feature=emb_title
    * https://vesc-project.com/node/234
    * I was able to get a [HM-10 Bluetooth 4.0](https://www.aliexpress.com/item/32888733000.html) working with [ackmaniac's](http://esk8.news/how-to-ackmaniac-esc-tool/) firmware on my vesc at 9600 baud rate
1. **remote**- recommendations:
