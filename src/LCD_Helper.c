#include "LCD_helper.h"



//below is picture.h file information
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
const char logo[]={													//Logo
0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x7f,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0xe0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0xe0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0x3f,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0xc7,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0xc7,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0xce,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0xec,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0xc0,0x00,
0x00,0x00,0x00,0x18,0x00,0x78,0xc0,0x00,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x01,0xf8,0x7f,0xc0,0x00,0x00,0x00,0x00,0x01,0xf8,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x1e,0x00,0x7f,0xc0,0x00,0x00,0x00,0x00,0x18,0x00,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xc0,0x00,0x00,0x00,0x00,0x07,0x08,0x07,0x00,0x00,
0x00,0x00,0x00,0x0f,0x98,0x1e,0x00,0x00,0x00,0x00,0x00,0x1d,0xf8,0x38,0x00,0x00,
0x00,0x00,0x00,0x18,0xf0,0x78,0x00,0x00,0x00,0x00,0x00,0x18,0xe0,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x18,0xc0,0x7f,0xc0,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xf8,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x19,0x98,0x03,0xc0,0x00,0x00,0x00,0x00,0x19,0x98,0x07,0x80,0x00,
0x00,0x00,0x00,0x19,0x98,0x0e,0x00,0x00,0x00,0x00,0x00,0x19,0x98,0x38,0x00,0x00,
0x00,0x00,0x00,0x19,0x98,0x78,0x00,0x00,0x00,0x00,0x00,0x19,0x98,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x1f,0xf8,0x7f,0xc0,0x00,0x00,0x00,0x00,0x1f,0xf8,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x40,0x00,
0x00,0x00,0x00,0x1e,0x00,0x44,0x40,0x00,0x00,0x00,0x00,0x1f,0x80,0x44,0x40,0x00,
0x00,0x00,0x00,0x07,0xe0,0x44,0x40,0x00,0x00,0x00,0x00,0x00,0xf8,0x44,0x40,0x00,
0x00,0x00,0x00,0x00,0x78,0x44,0x40,0x00,0x00,0x00,0x00,0x00,0x78,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x03,0xf0,0x7f,0xc0,0x00,0x00,0x00,0x00,0x0f,0x80,0x40,0x00,0x00,
0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x1f,0x00,0x00,
0x00,0x00,0x00,0x00,0xf8,0x3f,0x80,0x00,0x00,0x00,0x00,0x03,0xf0,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x0f,0xe0,0x60,0xc0,0x00,0x00,0x00,0x00,0x0c,0x60,0x60,0xc0,0x00,
0x00,0x00,0x00,0x0c,0x60,0x40,0xc0,0x00,0x00,0x00,0x00,0x0f,0xe0,0x40,0xc0,0x00,
0x00,0x00,0x00,0x07,0xe0,0x40,0xc0,0x00,0x00,0x00,0x00,0x00,0xf8,0x7f,0xc0,0x00,
0x00,0x00,0x00,0x00,0x38,0x7f,0xc0,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0x00,0x00,
0x00,0x00,0x00,0x00,0x0f,0xff,0x80,0x00,0x00,0x00,0x00,0x00,0x1f,0x87,0x80,0x00,
0x00,0x00,0x00,0x00,0x7e,0x01,0xc0,0x00,0x00,0x00,0x00,0x01,0xf8,0x01,0xc0,0x00,
0x00,0x00,0x00,0x03,0xe0,0x71,0xc0,0x00,0x00,0x00,0x00,0x0f,0xc1,0xf1,0xc0,0x00,
0x00,0x00,0x00,0x3f,0x03,0xf1,0xc0,0x00,0x00,0x00,0x00,0xfc,0x0f,0xc1,0xc0,0x00,
0x00,0x00,0x01,0xf0,0x3f,0x03,0xc0,0x00,0x00,0x00,0x07,0xe0,0xfe,0x07,0xc0,0x00,
0x00,0x00,0x1f,0x81,0xf8,0x1f,0xc0,0x00,0x00,0x00,0x7e,0x07,0xe0,0x7f,0xc0,0x00,
0x00,0x00,0xf8,0x1f,0xc1,0xfd,0xc0,0x00,0x00,0x03,0xf0,0x7f,0x03,0xf9,0xc0,0x00,
0x00,0x0f,0xc0,0xfc,0x0f,0xf1,0xc0,0x00,0x00,0x3f,0xe3,0xf0,0x3f,0x71,0xc0,0x00,
0x00,0x7f,0xff,0xe0,0xfe,0x71,0xc0,0x00,0x00,0x78,0xff,0x81,0xfe,0x71,0xc0,0x00,
0x00,0xf0,0x3f,0x87,0xfe,0x71,0xc0,0x00,0x00,0xe0,0x0f,0xdf,0x8e,0x71,0xc0,0x00,
0x01,0xc3,0x03,0xfe,0x0e,0x71,0xc0,0x00,0x01,0xc7,0xc0,0xfc,0x0e,0x71,0xc0,0x00,
0x01,0xc3,0xe0,0x7e,0x0e,0x71,0xc0,0x00,0x00,0xe1,0xf8,0x1f,0x8e,0x71,0xc0,0x00,
0x00,0xe0,0x7e,0x07,0xfe,0x71,0xc0,0x00,0x00,0xf8,0x3f,0x83,0xfe,0x71,0xc0,0x00,
0x00,0x7c,0x0f,0xc0,0xfe,0x71,0xc0,0x00,0x00,0x3f,0x03,0xf0,0x3e,0x71,0xc0,0x00,
0x00,0x0f,0xc0,0xfc,0x1e,0x71,0xc0,0x00,0x00,0x03,0xf0,0x7f,0x0e,0x71,0xc0,0x00,
0x00,0x01,0xf8,0x1f,0x8e,0x71,0xc0,0x00,0x00,0x00,0x7e,0x07,0xfe,0x71,0xc0,0x00,
0x00,0x00,0x1f,0x83,0xfe,0x71,0xc0,0x00,0x00,0x00,0x0f,0xe0,0xfe,0x71,0xc0,0x00,
0x00,0x00,0x03,0xf0,0x3e,0x71,0xc0,0x00,0x00,0x00,0x00,0xfc,0x1e,0x71,0xc0,0x00,
0x00,0x00,0x00,0x3f,0x0e,0x71,0xc0,0x00,0x00,0x00,0x00,0x1f,0x8e,0x71,0xc0,0x00,
0x00,0x00,0x00,0x07,0xfe,0x31,0xc0,0x00,0x00,0x00,0x00,0x01,0xfe,0x01,0xc0,0x00,
0x00,0x00,0x00,0x00,0x7e,0x01,0xc0,0x00,0x00,0x00,0x00,0x00,0x3f,0x3f,0x3f,0x3f,
0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,

};

const char graphic1[]={												//large text
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,
0x00,0x07,0xc0,0x3f,0xf8,0x00,0x00,0x00,0x00,0x3f,0xf8,0xff,0xfe,0x00,0x00,0x00,
0x00,0x7f,0xfc,0xff,0xff,0x00,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,
0x01,0xff,0xff,0xff,0xff,0xc0,0x00,0x00,0x01,0xfc,0x3f,0xf0,0x3f,0xc0,0x04,0xc0,
0x01,0xf8,0x0f,0xe0,0x0f,0xc0,0x09,0x20,0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x09,0x20,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x06,0x40,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x06,0xc0,
0x01,0xfc,0x3f,0xe0,0x1f,0xc0,0x09,0x20,0x01,0xff,0xff,0xf0,0x3f,0xc0,0x09,0x20,
0x00,0xff,0xfd,0xff,0xff,0x80,0x09,0x20,0x00,0x7f,0xfc,0xff,0xff,0x80,0x0f,0xe0,
0x00,0x7f,0xfc,0xff,0xff,0x00,0x00,0x00,0x00,0x1f,0xf0,0x3f,0xfe,0x00,0x00,0x00,
0x00,0x07,0xc0,0x1f,0xf8,0x00,0x00,0x20,0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xe0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,
0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,
0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,
0x00,0x00,0x00,0x00,0x1f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x07,0xc0,0x3f,0xf8,0x00,0x00,0x00,
0x00,0x3f,0xf8,0xff,0xfe,0x00,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x00,0x05,0xc0,
0x00,0x7f,0xfc,0xff,0xff,0x80,0x09,0x20,0x01,0xff,0xff,0xff,0xff,0xc0,0x08,0x20,
0x01,0xfc,0x3f,0xf0,0x3f,0xc0,0x08,0x20,0x01,0xf8,0x0f,0xe0,0x0f,0xc0,0x07,0xc0,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x08,0x60,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x05,0x80,
0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x02,0x00,0x01,0xfc,0x3f,0xe0,0x1f,0xc0,0x01,0x00,
0x01,0xff,0xff,0xf0,0x3f,0xc0,0x0f,0xe0,0x00,0xff,0xfd,0xff,0xff,0x80,0x00,0x00,
0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x00,0x00,0x00,
0x00,0x1f,0xf0,0x3f,0xfe,0x00,0x00,0x00,0x00,0x07,0xc0,0x1f,0xf8,0x00,0x00,0x00,
0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,
0x00,0x07,0xc0,0x3f,0xf8,0x00,0x00,0x00,0x00,0x3f,0xf8,0xff,0xfe,0x00,0x00,0x00,
0x00,0x7f,0xfc,0xff,0xff,0x00,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,
0x01,0xff,0xff,0xff,0xff,0xc0,0x00,0x00,0x01,0xfc,0x3f,0xf0,0x3f,0xc0,0x00,0x00,
0x01,0xf8,0x0f,0xe0,0x0f,0xc0,0x00,0x00,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x00,0x00,0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xfc,0x3f,0xe0,0x1f,0xc0,0x00,0x00,0x01,0xff,0xff,0xff,0xff,0xc0,0x00,0x00,
0x00,0xff,0xfd,0xff,0xff,0x80,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,
0x00,0x3f,0xf8,0x7f,0xfe,0x00,0x00,0x00,0x00,0x1f,0xf0,0x3f,0xfe,0x00,0x00,0x00,
0x00,0x07,0xc0,0x1f,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0f,0xe0,0x00,0x00,0x00,0x00,0x07,0xc0,0x3f,0xf8,0x00,0x00,0x00,
0x00,0x3f,0xf8,0xff,0xfe,0x00,0x00,0x00,0x00,0x7f,0xfc,0xff,0xff,0x00,0x00,0x00,
0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,0x01,0xff,0xff,0xff,0xff,0xc0,0x12,0x40,
0x01,0xfc,0x3f,0xf0,0x3f,0xc0,0x12,0x40,0x01,0xf8,0x0f,0xe0,0x0f,0xc0,0x12,0x40,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x1f,0xc0,0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,
0x01,0xf0,0x0f,0xc0,0x07,0xe0,0x00,0x00,0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x0f,0x80,
0x01,0xf8,0x0f,0xc0,0x07,0xe0,0x10,0x40,0x01,0xfc,0x3f,0xe0,0x1f,0xc0,0x10,0x40,
0x01,0xff,0xff,0xff,0xff,0xc0,0x10,0x40,0x00,0xff,0xfd,0xff,0xff,0x80,0x1f,0xc0,
0x00,0x7f,0xfc,0xff,0xff,0x80,0x00,0x00,0x00,0x3f,0xf8,0x7f,0xfe,0x00,0x00,0x00,
0x00,0x1f,0xf0,0x3f,0xfe,0x00,0x0f,0x80,0x00,0x07,0xc0,0x1f,0xf8,0x00,0x10,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x1f,0xc0,
0x00,0x00,0x00,0x3f,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x01,0xc0,
0x00,0x00,0x00,0x3f,0x00,0x00,0x0e,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x1f,0xc0,
0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};


const char graphic2[]={													//eagle
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0x77,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbb,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xc8,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xc4,0x7f,0xff,0xff,0xff,0xff,0xff,
0xff,0x20,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x07,0xff,0xff,0xff,0xff,0xff,
0xf9,0xc0,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x01,0x7f,0xff,0xff,0xef,0xff,
0xff,0x80,0x00,0x3f,0xff,0xff,0xe7,0xff,0xff,0xc0,0x00,0x1f,0xff,0xff,0xeb,0xff,
0xff,0xa0,0x00,0x1f,0xff,0xff,0xfa,0xff,0xff,0xc0,0x00,0x07,0xff,0xff,0xfd,0xff,
0xff,0xf0,0x00,0x01,0xff,0xff,0xf5,0x7f,0xff,0xf0,0x00,0x01,0xff,0xff,0xfe,0xff,
0xff,0xf8,0x00,0x40,0xff,0xff,0xf7,0x9f,0xff,0xfc,0x00,0x00,0x3f,0xff,0xff,0x3f,
0xff,0xfc,0x00,0x00,0x1f,0xff,0xfc,0xff,0xff,0xfe,0x00,0x00,0x1f,0xff,0x7f,0xff,
0xff,0xff,0x00,0x04,0x07,0xfe,0xff,0xef,0xff,0xff,0x40,0x00,0x03,0xfe,0x0f,0xef,
0xff,0xff,0x82,0x00,0x41,0xfc,0x63,0xcf,0xff,0xff,0xc0,0x00,0x00,0x7c,0x43,0xef,
0xff,0xff,0xc0,0x81,0x20,0x30,0xc1,0x3f,0xff,0xff,0xf0,0x00,0x00,0x00,0x89,0xef,
0xff,0xff,0xe0,0x00,0x00,0x00,0x11,0xef,0xff,0xff,0xf0,0x00,0x00,0x00,0x18,0x4f,
0xff,0xff,0xfc,0x00,0x01,0x00,0x31,0xff,0xff,0xff,0xfe,0x00,0x00,0x20,0x33,0xff,
0xff,0xff,0xff,0x80,0x00,0xe8,0x27,0xe7,0xff,0xff,0xff,0xc0,0x00,0x60,0x0a,0xef,
0xff,0xff,0xff,0xc0,0x00,0x22,0x0e,0xff,0xff,0xff,0xff,0xc0,0x00,0x20,0x0b,0xff,
0xff,0xff,0xff,0xe0,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,0xf0,0x01,0x00,0x3f,0xff,
0xff,0xff,0xff,0xf8,0x00,0x20,0x3f,0xff,0xff,0xff,0xff,0xf8,0x00,0x80,0x3f,0xff,
0xff,0xff,0xff,0xfc,0x00,0x00,0x3f,0xff,0xff,0xff,0xff,0xfe,0x00,0x20,0x3f,0xff,
0xff,0xff,0xff,0xfd,0xc0,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xc0,0x00,0x7f,0xff,
0xff,0xff,0xff,0xff,0xe0,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0x3f,0xff,
0xff,0xff,0xff,0xff,0xf0,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xf8,0x00,0x7f,0xff,
0xff,0xff,0xff,0xff,0xf0,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xf8,0x00,0x3f,0xff,
0xff,0xff,0xff,0xfd,0xf8,0x00,0x7f,0xff,0xff,0xff,0xff,0xfd,0xf8,0x00,0x3f,0xff,
0xff,0xff,0xff,0xff,0xf8,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xb8,0x02,0x7f,0xff,
0xff,0xff,0xff,0xff,0x70,0x00,0x3f,0xff,0xff,0xff,0xff,0xf9,0x60,0x01,0x3f,0xff,
0xff,0xff,0xff,0xff,0x70,0x00,0x3f,0xff,0xff,0xff,0xff,0xfd,0xf8,0x00,0x3f,0xff,
0xff,0xff,0xff,0xfe,0x78,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x1f,0xff,
0xff,0xff,0xff,0xff,0xfc,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xfc,0x00,0x3f,0xff,
0xff,0xff,0xff,0xff,0xfe,0x02,0x1f,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x1f,0xff,
0xff,0xff,0xff,0xff,0xfe,0x02,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x1f,0xff,
0xff,0xff,0xff,0xff,0xfe,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x1f,0xff,
0xff,0xff,0xff,0xff,0xff,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x1f,0xff,
0xff,0xff,0xff,0xff,0xfe,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xfe,0x01,0x5f,0xff,
0xff,0xff,0xff,0xff,0xfe,0x00,0x0f,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x0f,0xff,
0xff,0xff,0xff,0xff,0xff,0x80,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0x88,0x0f,0xff,
0xff,0xff,0xff,0xff,0xff,0x80,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x47,0xff,
0xff,0xff,0xff,0xff,0xff,0x80,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x0f,0xff,
0xff,0xff,0xff,0xff,0xff,0x80,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x07,0xff,
0xff,0xff,0xff,0xff,0xff,0x80,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0x47,0xff,
0xff,0xff,0xff,0xff,0xff,0xc0,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xc4,0x07,0xff,
0xff,0xff,0xff,0xff,0xff,0xc0,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x07,0xff,
0xff,0xff,0xff,0xff,0xff,0xe0,0x23,0xff,0xff,0xff,0xff,0xff,0xff,0xe2,0x07,0xff,
0xff,0xff,0xff,0xff,0xff,0xe0,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x07,0xff,
0xff,0xff,0xff,0xff,0xff,0xf0,0x1b,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x0b,0xff,
0xff,0xff,0xff,0xff,0xff,0xf8,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0x27,0xff,
0xff,0xff,0xff,0xff,0xff,0xf8,0x27,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x27,0xff,
0xff,0xff,0xff,0xff,0xff,0xfc,0x13,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x5b,0xff,
0xff,0xff,0xff,0xff,0xff,0xfc,0x5b,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0x5b,0xff,
0xff,0xff,0xff,0xff,0xff,0xfd,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0x5f,0xff,
0xff,0xff,0xff,0xff,0xff,0xf9,0x6f,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0x6f,0xff,
0xff,0xff,0xff,0xff,0xff,0xfd,0x6f,0xff,0xff,0xff,0xff,0xff,0xff,0xf5,0x7f,0xff,
0xff,0xff,0xff,0xff,0xff,0xed,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xed,0x7f,0xff,
0xff,0xff,0xff,0xff,0xff,0xfd,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,

};


// /CS1 = PB0
// /RST = PB1
// A0   = PE4
// SCL  = PE5
// SI   = PB4

void comm_out(unsigned char j) //Command Output Serial Interface
{
	unsigned int n;
	unsigned char scratch;
	
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_0,0x00);   //CS = 0;
	GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_4,0x00);   //A0 = 0;
	
	for(n=8; n>0; --n)
	{
		scratch = (j>>n)&0x01; 
		
		GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_5,0x00) ; //SCL = 0;
		
		if (scratch == 1)		
			GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_4,0xFF) ; //SCL = 0;
		else
			GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_4,0x00) ; //SCL = 0;
		
		__nop();			// delay(2); ?
		__nop();
		__nop();
		__nop();
		
		GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_5,0xFF);  //SCL = 1;
	}
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_0,0xFF);    // CS = 1;
}


void data_out(unsigned char j) //Data Output Serial Interface
{
	unsigned int n;
	unsigned char scratch;
	
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_0,0x00);   //CS = 0;
	GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_4,0xFF);   //A0 = 0;
	
	for(n=8; n>0; --n)
	{
		scratch = (j>>n)&0x01; 
		
		GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_5,0x00) ; //SCL = 0;
		
		if (scratch == 1)		
			GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_4,0xFF) ; //SCL = 0;
		else
			GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_4,0x00) ; //SCL = 0;
		
		__nop();			// delay(2); ?
		__nop();
		__nop();
		__nop();
		
		GPIOPinWrite(GPIO_PORTE_BASE, GPIO_PIN_5,0xFF);  //SCL = 1;
	}
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_0,0xFF);    // CS = 1;}
}

void delay(unsigned int n)
{
	unsigned int i,j;
	for (i=0;i<n;i++)
  		for (j=0;j<3500;j++)
  			{;}
}

void SetupLCD()
{
	
	//reset LCD.
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_1,0x00);  //RST = 0;
		
	delay(10);						//wait for hardware reset, at least 2ms
		
	GPIOPinWrite(GPIO_PORTB_BASE, GPIO_PIN_1,0xFF);  //RST = 0;
	
	
	//initalize LCD screen
	comm_out(0xA0);						//RAM->SEG output = normal
	comm_out(0xAE);						//Display OFF
	comm_out(0xC0);						//COM scan direction = normal
	comm_out(0xA2);						//1/9 bias
	comm_out(0x2F);						//power control set
	comm_out(0x21);						//resistor ratio set
	comm_out(0x81);						//Electronic volume command (set contrast)
	comm_out(0x2F);						//Electronic volume value (contrast value)
	
	dispPic((unsigned char *)logo);					//show image
	//delay(1000);					//wait 1s
	dispPic((unsigned char *)graphic1);
	//delay(1000);					//wait 1s
	dispPic((unsigned char *)graphic2);	
	//delay(1000);
}


/*****************************************************/
void dispPic(unsigned char *lcd_string)
{
	unsigned int i,j;
	unsigned char page = 0xB0;			//Page Address + 0xB0
	comm_out(0xAE);					//Display OFF
	comm_out(0x40);					//Display start address + 0x40
	for(i=0;i<4;i++){				//32pixel display / 8 pixels per page = 4 pages
		comm_out(page);				//send page address
		comm_out(0x10);				//column address upper 4 bits + 0x10
		comm_out(0x00);				//column address lower 4 bits + 0x00
		for(j=0;j<128;j++){			//128 columns wide
			data_out(*lcd_string);		//send picture data
			lcd_string++;			//point to next picture data
			}
		page++;					//after 128 columns, go to next page
   		}
	comm_out(0xAF);					//Display ON
			
	delay(1000);

}
