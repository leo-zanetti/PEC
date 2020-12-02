#define puc_width 128
#define puc_height 64
static unsigned char puc_bits[] = {
   0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xe0, 0xff, 0xe0,
   0x1f, 0x00, 0xf0, 0x07, 0x00, 0x20, 0x3e, 0x02, 0x00, 0x00, 0xf0, 0xe1,
   0x03, 0x00, 0x1f, 0x00, 0x02, 0x00, 0x1c, 0x58, 0x00, 0x70, 0x00, 0x07,
   0x00, 0x00, 0xf0, 0x80, 0x07, 0x00, 0x1f, 0x00, 0x02, 0x00, 0x06, 0x70,
   0x00, 0xf8, 0x34, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x1f, 0x00,
   0x02, 0x00, 0x07, 0x60, 0x00, 0xd8, 0xc1, 0x09, 0x00, 0x00, 0xf0, 0x00,
   0x1f, 0x00, 0x1f, 0x00, 0x02, 0x00, 0x03, 0x60, 0x00, 0xc0, 0x94, 0x01,
   0x00, 0x00, 0xf0, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x02, 0x80, 0x03, 0x40,
   0x00, 0xc0, 0xe7, 0x01, 0x00, 0x00, 0xf0, 0x00, 0x3e, 0x00, 0x1f, 0x00,
   0x02, 0xc0, 0x03, 0x40, 0x00, 0xc0, 0x20, 0x01, 0x00, 0x00, 0xf0, 0x00,
   0x3e, 0x00, 0x1f, 0x00, 0x02, 0xc0, 0x03, 0x40, 0x00, 0x60, 0x7e, 0x03,
   0x00, 0x00, 0xf0, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x02, 0xc0, 0x03, 0x00,
   0x00, 0x40, 0x7e, 0x03, 0x00, 0x00, 0xf0, 0x00, 0x3e, 0x00, 0x1f, 0x00,
   0x02, 0xe0, 0x03, 0x00, 0x00, 0x40, 0x7e, 0x01, 0x00, 0x00, 0xf0, 0x00,
   0x3e, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x03, 0x00, 0x00, 0xa0, 0x22, 0x02,
   0x00, 0x00, 0xf0, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00,
   0x00, 0x60, 0x36, 0x03, 0x00, 0x00, 0xf0, 0x00, 0x1f, 0x00, 0x1f, 0x00,
   0x02, 0xe0, 0x01, 0x00, 0x00, 0xc0, 0x67, 0x03, 0x00, 0x00, 0xf0, 0x00,
   0x0f, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00, 0x00, 0xc0, 0xe7, 0x01,
   0x00, 0x00, 0xf0, 0x80, 0x0f, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00,
   0x00, 0xc0, 0xc3, 0x01, 0x00, 0x00, 0xf0, 0xc0, 0x03, 0x00, 0x1f, 0x00,
   0x02, 0xe0, 0x01, 0x00, 0x00, 0xff, 0xff, 0x7f, 0x00, 0x00, 0xf0, 0x7f,
   0x00, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00, 0x00, 0x11, 0x08, 0x40,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00,
   0x00, 0x7d, 0x1c, 0x46, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00,
   0x02, 0xe0, 0x01, 0x00, 0x00, 0x85, 0x14, 0x44, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00, 0x00, 0x81, 0x94, 0x64,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x02, 0xe0, 0x01, 0x00,
   0x00, 0x83, 0xb6, 0x7f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00,
   0x02, 0xe0, 0x03, 0x00, 0x00, 0x83, 0xbe, 0x7f, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x1f, 0x00, 0x02, 0xc0, 0x03, 0x80, 0x00, 0x85, 0x3e, 0x44,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x02, 0xc0, 0x03, 0x80,
   0x00, 0xcd, 0x77, 0x44, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x00,
   0x00, 0xc0, 0x03, 0x80, 0x02, 0x31, 0x7f, 0x4e, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x01, 0x80, 0x03, 0xc0, 0x02, 0x81, 0x7f, 0x40,
   0x30, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x01, 0x80, 0x03, 0xc0,
   0x18, 0x81, 0xff, 0x40, 0x2c, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x01, 0x00, 0x07, 0xe0, 0x00, 0x81, 0xe3, 0x40, 0x12, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x3c, 0x80, 0x00, 0x00, 0x06, 0xf0, 0x00, 0xc1, 0xc5, 0x41,
   0x11, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x78, 0x40, 0x00, 0x00, 0x0c, 0xd8,
   0x22, 0xc1, 0xde, 0x41, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00, 0xf0, 0x3f,
   0x00, 0x00, 0x38, 0x8e, 0x34, 0xc1, 0xde, 0x41, 0x02, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0xc0, 0x01, 0x39, 0xe1, 0xfc, 0x43,
   0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x60, 0xe1, 0xdd, 0x43, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x40, 0xf1, 0xfd, 0x43, 0x05, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xf1, 0xcf, 0xc7,
   0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xf1, 0xe7, 0xc7, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0xf8, 0xef, 0x47, 0x04, 0x00, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0xf9, 0xef, 0x4f,
   0x04, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0x18, 0xf9, 0xff, 0x4f, 0x04, 0x00, 0x3f, 0xfc, 0xfc, 0x3c, 0x1e, 0xbe,
   0xe7, 0xfc, 0xfc, 0xe1, 0x18, 0xfd, 0xdf, 0x5f, 0x0c, 0x00, 0x1f, 0x7c,
   0xfc, 0x38, 0x1e, 0x9c, 0xc7, 0xfc, 0xfc, 0xe0, 0x18, 0xfd, 0xdf, 0x5f,
   0x0c, 0x00, 0xcf, 0x7f, 0xf8, 0x38, 0xde, 0x9c, 0xc7, 0x7c, 0xf8, 0xfc,
   0x08, 0xfd, 0xdf, 0x5f, 0x0c, 0x00, 0xcf, 0x7f, 0xf9, 0x18, 0xde, 0x9c,
   0x87, 0x7c, 0xf8, 0xfc, 0x18, 0xff, 0xbf, 0x7f, 0x0c, 0x00, 0xef, 0x3f,
   0xf9, 0x5a, 0x9e, 0x9c, 0xa7, 0x7c, 0xfb, 0xf0, 0x10, 0xff, 0x5f, 0x7f,
   0x04, 0x00, 0xef, 0x3f, 0xfb, 0x52, 0x1e, 0x9e, 0x27, 0x3c, 0xf3, 0xe3,
   0x00, 0xff, 0x5f, 0x7f, 0x00, 0x00, 0xcf, 0x3f, 0xf0, 0x42, 0xde, 0x9f,
   0x27, 0x3c, 0xf0, 0xe7, 0x00, 0xff, 0x5f, 0x7c, 0x00, 0x00, 0xcf, 0x1f,
   0xf0, 0x46, 0xde, 0x9f, 0x67, 0x3c, 0xf0, 0xe7, 0x38, 0xff, 0xbf, 0x38,
   0x06, 0x00, 0x1f, 0x9c, 0xf7, 0x66, 0xde, 0x9f, 0x67, 0x9c, 0xe7, 0xe0,
   0x38, 0xfe, 0xff, 0x3f, 0x0f, 0x00, 0x3f, 0xdc, 0xe7, 0x66, 0xde, 0xbf,
   0xe7, 0x9c, 0xe7, 0xf0, 0x3c, 0x00, 0x1c, 0x00, 0x1f, 0x00, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x00, 0x08, 0x80,
   0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xdf, 0x00, 0x08, 0x80, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xbf, 0x01, 0x00, 0xc0, 0x3e, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x03, 0x00, 0x60,
   0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xe2, 0x0f, 0x00, 0xf8, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xc0, 0x3d, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff, 0x7f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xde, 0xff, 0x3b, 0x00, 0x00, 0x5b, 0x25, 0x52, 0x28, 0x9b, 0xd5,
   0xb4, 0x98, 0x3a, 0x4a, 0x00, 0xf8, 0xbd, 0x0f, 0x00, 0x00, 0xe5, 0x25,
   0x12, 0x28, 0xb1, 0x15, 0xd6, 0xc9, 0x2a, 0x04, 0x00, 0xe0, 0xff, 0x03,
   0x00, 0x00, 0x49, 0x25, 0xf2, 0x48, 0x95, 0x99, 0x96, 0xc8, 0x2a, 0x66,
   0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x04, 0x24, 0x44,
   0x00, 0x11, 0x90, 0x08 };
