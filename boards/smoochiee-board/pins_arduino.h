#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID           0x303A
#define USB_PID           0x1001

// Your Safe Solered Pins 
#define TFT_MOSI          21
#define TFT_SCLK          12
#define TFT_MISO          13
#define TFT_CS            5
#define TFT_DC            16
#define TFT_RST           17
#define TFT_BL            4

// XPT2046 Touch Controller Select Pin
#define TOUCH_CS          38

// Standard Physical Inputs (Disabled)
#define UP_BTN            -1
#define DW_BTN            -1
#define SEL_BTN           -1

#endif /* Pins_Arduino_h */
