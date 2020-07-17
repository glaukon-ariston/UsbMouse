/*
UsbMouse
Library written (a lot of copy/paste) by Meir Michanie
based on UsbKeyboard and usbdrv mouse sample code.

*/
#include "UsbMouse.h"


UsbMouseDevice& mouse = UsbMouseDevice::singleton();


void setup() {
  mouse.setup();
}


void loop() {
  mouse.move(random(10)-5, random(10)-5, 0);
  mouse.update();
  mouse.delayMs(random(5)*1000);
}
