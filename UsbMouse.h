/*
 * Based on Obdev's AVRUSB code and under the same license.
 *
 * TODO: Make a proper file header. :-)
 */
#ifndef __UsbMouse_h__
#define __UsbMouse_h__

#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <string.h>

extern "C"{
#include "usbdrv.h"
}

typedef uint8_t byte;


/*
typedef struct{
    uchar   buttonMask;
    char    dx;
    char    dy;
    char    dWheel;
}report_t;

static report_t reportBuffer;
*/


class UsbMouseDevice {
  public:
  UsbMouseDevice ();
  ~UsbMouseDevice ();
  static UsbMouseDevice& singleton();

  void setup();
  /**
  * Define our own delay function so that we don't have to rely on
  * operation of timer0, the interrupt used by the internal delay()
  */
  void delayMs(unsigned int ms);
  void move(char inX, char inY, char inZ);
  void set_buttons(char lb, char mb, char rb);
  void update();
  unsigned char reportBuffer[4];
};


/* ------------------------------------------------------------------------- */

#endif // __UsbMouse_h__
