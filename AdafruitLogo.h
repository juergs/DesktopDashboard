// AdafruitLogo.h

#ifndef _ADAFRUITLOGO_h
#define _ADAFRUITLOGO_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

const uint8_t AdaFruitLogo[] PROGMEM = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xff, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xfe, 0x0, 0x0, 0x7, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xfe, 0x0, 0x0, 0x1, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xfe, 0x0, 0x0, 0x0, 0x80, 0x0, 0x7, 0xff, 0xff, 0xff, 0xc0,
0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0,
0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xc0,
0xff, 0x80, 0x0, 0x0, 0x0, 0x60, 0x18, 0x3, 0xff, 0xff, 0xc0,
0xff, 0xc0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x3f, 0xff, 0xc0,
0xff, 0xc0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x7, 0xff, 0xc0,
0xff, 0xe0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x0, 0xff, 0xc0,
0xff, 0xf0, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x0, 0x0, 0x1f, 0xc0,
0xff, 0xf0, 0x0, 0x0, 0x1, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xc0,
0xff, 0xf8, 0x0, 0xf, 0x0, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xc0,
0xff, 0xfc, 0x0, 0x7, 0xc0, 0xc0, 0x0, 0x0, 0x0, 0xf, 0xc0,
0xff, 0xfe, 0x0, 0x7, 0xf0, 0x80, 0x0, 0x0, 0x0, 0xf, 0xc0,
0xff, 0xfe, 0x0, 0x1, 0xf0, 0x1, 0xf0, 0x0, 0x0, 0x1f, 0xc0,
0xff, 0xff, 0x0, 0x0, 0xf8, 0x7, 0xf8, 0x0, 0x0, 0x3f, 0xc0,
0xff, 0xff, 0x80, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xff, 0xc0,
0xff, 0xff, 0xe0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x1, 0xff, 0xc0,
0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xc0,
0xff, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xc0,
0xff, 0xff, 0xff, 0x0, 0x1c, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xc0,
0xff, 0xff, 0xfc, 0x0, 0x3c, 0x70, 0x0, 0x0, 0x7f, 0xff, 0xc0,
0xff, 0xff, 0xf8, 0x0, 0xf8, 0x70, 0x0, 0x0, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xf0, 0x0, 0xf0, 0x78, 0x0, 0x3, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xe0, 0x1, 0xe0, 0x3c, 0x2, 0x1f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xe0, 0x1, 0xc0, 0x3c, 0x1, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xc0, 0x1, 0x80, 0x1c, 0x0, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xc0, 0x0, 0x0, 0x1c, 0x0, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x80, 0x0, 0x0, 0xc, 0x0, 0x7f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0x0, 0x0, 0x4, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfe, 0x0, 0x0, 0x4, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfe, 0x0, 0x0, 0xc, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfe, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfc, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfc, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfc, 0x0, 0x1, 0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xf8, 0x0, 0xf, 0xff, 0x80, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xf8, 0x0, 0x7f, 0xff, 0xc0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xf8, 0x3, 0xff, 0xff, 0xe0, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xfc, 0x1f, 0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};
#endif

