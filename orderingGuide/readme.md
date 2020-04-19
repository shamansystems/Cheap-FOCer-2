# JLCPCB and LCSC Ordering Guide

1. Clone or [download](https://github.com/shamansystems/Cheap-FOCer-2/archive/master.zip) the Cheap FOCer 2 repository and have the files available

1. [Create an account](https://passport.easyeda.com/register) with [JLCPCB.com](http://JLCPCB.com). This account will also carry over to [LCSC.com](http://LCSC.com) since they are the same company.

1. Go to: [https://cart.jlcpcb.com/quote](https://cart.jlcpcb.com/quote) 

1. Click the `Add your gerber file` button and select the [gerber.zip](../gerber.zip) file from the root directory ![](a33759f1b319649d610ba648f7687170_html_362cf7f7.png)

1. You should now see the CFOC2 front and back in the preview as shown below ![](a33759f1b319649d610ba648f7687170_html_94f708f.png)

1. There are a few properties that you can customize if you want. The PCB quantity (the amount you want made), thickness, color, and surface finish are all I recommend adjusting to preference. Note that certain choices of these options will affect pricing. By default, the cheapest options are already selected. ![](a33759f1b319649d610ba648f7687170_html_c9b46488.png)

1.  Select the toggle button to enable SMT Assembly ![](a33759f1b319649d610ba648f7687170_html_ab889d60.png)

1.  Select the `Assemble top side` option

1.  Select how many boards you want assembled with the `SMT QTY` option

1.  Select the `confirm` button to continue

<a href="](../bom.csv" target="_blank">Download</a>

1.  Add the [bom.csv](../bom.csv) and [cpl.csv](../cpl.csv) files in the root directory ![](a33759f1b319649d610ba648f7687170_html_f09ce745.png)

1.  Click `Next` to continue

1. 
    You will now see the parts selected by JLCPCB based on the BOM that was uploaded. This list of parts includes every possible component available by JLCPCB to be assemble onto the Cheap FOCer 2. 
    
    The `Extended Parts` such as the DRV8301 and the 100v rated components cost more but will be much better if JLCPCB solders it for you.  The DRV8301 chip is one of the hardest things to solder by hand.

    The only parts that you should see as `No part selected` are the (10uF, 100V) caps, the 22uH inductor, the BMI160 IMU, and the (4.7uF, 100V) caps. These components plus the MOSFETs must be acquired and assembled external to JLCPCB. Ordering these remaining components from LCSC.com will be covered [later in this guide](#remaining-components-from-lcsccom).
    ![](noPartsSelected.png)

    If you intend to use your FOCer for balancing applications such as a onewheel or unicycle you will have to solder the BMI160 IMU yourself. This is a leadless component which requires a [reflow station](linkToReflowStation).

    Please note that JLCPCB will often run **out of stock** on certain components. There is a chance you may have to find an alternative component with the same footprint and properties. Post a github issue when a part is out of stock and where you found a new part so that others can see and we can update the docs appropriately.

1. Click `Next` to continue

1. You should now see a preview of the parts placement on the CFOC2. The placement of the DRV8301 and a few other multi-pin components will appear wrongly placed. **This is ok.** JLCPCB will correct this later in what they call a `DFM review`. I have had no issues in letting JLCPCB handle the correction of component placement in all of my many orders. ![](a33759f1b319649d610ba648f7687170_html_a3977b4e.png)

1. 
    Scroll down and you will see a list of `Unselected Parts`. The LCSC BOM file [later in this guide](#remaining-components-from-lcsccom) covers the remaining parts. If you excluded certain parts on your own or if JLCPCB was out of stock of something, then I advise selecting the `Download Unselected Parts List`. This will then be a list of what you still need to acquire external to JLCPCB.
    ![](unselectedParts.png)

    Next click `Save to Cart` and proceed through the checkout process. If you’ve made it this far then congratulations! The hardest part is over and we will now proceed to ordering the remaining components from LCSC.com.

# Remaining Components from [LCSC.com](http://lcsc.com)

1. Go to [LCSC's boom tool](https://lcsc.com/bom.html#/upload)

1. Click `select a file` and upload [5XBomLcsc.csv](../5XBomLcsc.csv)
![](a33759f1b319649d610ba648f7687170_html_9af9f958.png)

1. There should now be a list that has loaded on your screen. You will need to select the column header the `Quantity` and `Manufacture Part Number` columns from the drop-down menus as shown below.
    ![](bomLcscColumnSelection.png)

1. Click `Next` to continue.

1. You should now see a page showing the parts that LCSC has chosen to fit the parts described in the BOM that was uploaded. They should be the same exact parts as described in the BOM unless LCSC happens to be out of stock of a component. Scroll through the list to verify that all parts are present and accounted for. Notice that certain components, like the inductor, have a minimum order quantity of 5.  
![](a33759f1b319649d610ba648f7687170_html_fab8b969.png)


    Quantities of parts in this list are for 5 CFOC2. Please scale up the quantities per amount of CFOC2 PCBs you have ordered from JLCPCB. Note that the CFOC2 only requires 1x 22uH inductor despite the minimum order quantity of 5 seen in the image above.

    **If anything is out of stock, then you will have to find an alternative. This will most likely happen to the MOSFETs at some point. Please choose a MOSFET with similar properties as the one from the BOM. Do the same for any other out of stock component by choosing something with the closest properties of the original component from the BOM.**

    ## Alternative MOSFETs
    1. NCEP60T20
    1. SE80160GA20

    After settling on the quantities you want, please add items to your cart and proceed with the checkout process.

    Next check out the [assembly guide](../assembly/) for suggested tools to assemble