UsbMouse
========

Library to set any arduino as a USB mouse.

<img src="images/IMG_20200520_220437.jpg" width="800px" hspace="1em" />

Move mouse pointer by calling method:
 UsbMouse.move(x,y,z) 
where z indicates the wheel.

Set buttons (left,right,middle) by calling method:
 UsbMouse.set_buttons(l,r,m).

Install
=======

Copy directory under your arduino libraries directory.


Usage
=====

In arduino, go to examples -> UsbMouse -> UsbMouseDemo1

Hardware
========

* two resistors of  2.2KOhm 
* one resistor of 68 Ohm
* one zener diode: 3.6V, 0.5W Zener Diodes (1N5227) or 0.25W

<img src="images/IMG_20200520_220155.jpg" width="300px" hspace="1em" /> <img src="images/IMG_20200520_220215.jpg" width="300px" hspace="1em" />
<img src="images/IMG_20200520_220250.jpg" width="300px" hspace="1em" /> <img src="images/IMG_20200520_220358.jpg" width="300px" hspace="1em" />
<img src="images/IMG_20200520_224050.jpg" width="600px" hspace="1em" />

Pinouts
=======
Connect D- to Pin 4 through 68 Ohm resistor.

Connect D- to Pin 5 through 2.2KOhm resistor.

Connect D+ to Pin 2 through 68 Ohm resistor.

View virtual-usb-keyboard-schematic.jpg
