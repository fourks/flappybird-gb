//Exported by png2gb 


#define bg_map_width 20
#define bg_map_height 15

#define ground_map_width 1
#define ground_map_height 3

#define flappybird_map_width 12
#define flappybird_map_height 3

#define background_tileset_size 133

const unsigned char background_tileset[] = {
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0xf0,0xe0,0xc0,0x80,0x80,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x0f,0x07,0x03,0x01,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xe0,0xc0,0x80,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x1f,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x1c,0x0c,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xe0,0xc0,0x80,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x1f,0x0f,0x07,0x03,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0xf0,0xf0,0xe0,0xc0,0xc0,0x00,0x80,
	0xff,0xff,0xff,0xff,0x87,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x3f,0x1f,0x1f,0x1f,0x0e,0x0c,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x87,0x03,0x01,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xe0,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0xf0,0x70,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc3,0x81,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x1f,0x1f,0x0f,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x7f,0x3f,0x3f,0x1f,0x1f,0x1f,0x1f,0x0f,0x07,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xc3,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xfe,0xfe,0xfc,0xfc,0xf8,0xf8,0xf0,0xe0,0x70,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0f,0x07,0x07,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xf8,0xf0,0xe0,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x7f,0x3f,0x3f,0x1e,0x0c,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xc0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x0f,0x07,0x07,0x03,0x03,0x03,0x03,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xc0,0x20,0x00,0xfe,
	0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x07,0x00,0x0f,0x00,0x1f,0x00,0x1f,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0xf0,0x00,0xc0,0x3f,0xdf,0x20,0xd7,0x28,
	0x00,0x00,0x1c,0x03,0x1d,0x02,0x01,0x3e,0x1f,0x20,0x15,0xaa,0x15,0xaa,0x1f,0xa0,
	0x00,0x00,0x00,0xe0,0xc0,0x20,0x40,0xa0,0xc0,0x20,0x40,0xbc,0x58,0xa4,0xc0,0x3f,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x07,0x00,0x07,0xc0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x00,0xfc,0x00,0xf0,0x0f,0xf7,0x08,0xf5,0x0a,
	0x00,0x00,0x07,0x00,0x07,0x00,0x00,0x0f,0x07,0x08,0x05,0xea,0xc5,0x2a,0xc7,0x28,
	0x00,0x00,0x00,0xf8,0x70,0x88,0x50,0xa8,0xf0,0x08,0x50,0xaf,0x56,0xa9,0xf0,0x0f,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x3f,0x00,0x7e,0x01,0xfe,0x01,0xfe,0x01,
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x80,0x01,0x00,0xfd,0xf8,0x05,0xb8,0x45,
	0x00,0x00,0xe0,0x1f,0xee,0x11,0x0a,0xf5,0xfe,0x01,0xaa,0x55,0xaa,0x55,0xfe,0x01,
	0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x0f,0x00,0x1f,0x00,0x3f,0x00,0x3f,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0xe0,0x00,0x80,0x7f,0xbe,0x41,0xae,0x51,
	0x00,0x00,0x38,0x07,0x3b,0x04,0x02,0x7d,0x3f,0x40,0x2a,0x55,0x2a,0x55,0x3f,0x40,
	0x00,0x00,0x00,0xc0,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x7c,0xb8,0x44,0x80,0x7f,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x03,0xc0,
	0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x00,0xfe,0x00,0xf8,0x07,0xfb,0x04,0xfb,0x04,
	0xfd,0x02,0xfd,0x02,0xd5,0x2a,0xd5,0x2a,0xfd,0x02,0xd5,0x2a,0xd5,0x2a,0xfd,0x02,
	0xde,0x01,0xde,0x01,0xde,0x01,0xde,0x01,0xde,0x01,0xde,0x01,0xfe,0x01,0xfe,0x01,
	0x00,0xff,0xff,0x00,0x54,0xab,0x57,0xa8,0xf8,0x07,0x53,0xac,0x52,0xad,0xfa,0x05,
	0x15,0xaa,0x55,0xaa,0x5f,0xa0,0x1f,0xe0,0x15,0xea,0xd5,0x2a,0x9f,0x60,0x95,0x6a,
	0x5f,0xa0,0x5f,0xa0,0xda,0x25,0xda,0x25,0x5f,0xa0,0x5a,0xa5,0xca,0x35,0x4f,0xb0,
	0xb7,0x40,0xb7,0x40,0xb7,0x40,0xb7,0x40,0xb7,0x40,0xb7,0x40,0xbf,0x40,0xbf,0x40,
	0x80,0x7f,0xbf,0x40,0x95,0x6a,0x95,0x6a,0xbe,0x41,0x94,0x6b,0x94,0x6b,0xbe,0x41,
	0x15,0xea,0xd5,0x2a,0x17,0xe8,0xd7,0x28,0x05,0xfa,0xf5,0x0a,0xa7,0x58,0xa5,0x5a,
	0x57,0xa8,0x57,0xa8,0xf6,0x09,0xf6,0x09,0x57,0xa8,0x56,0xa9,0xf6,0x09,0x57,0xa8,
	0xee,0x10,0xee,0x10,0xae,0x50,0xae,0x50,0xee,0x10,0xae,0x50,0xaf,0x50,0xef,0x10,
	0xf0,0x0f,0xf7,0x08,0xf2,0x0d,0xf2,0x0d,0xf7,0x08,0xf2,0x0d,0xf2,0x0d,0xf7,0x08,
	0x00,0xfd,0xfa,0x05,0xa2,0x5d,0xba,0x45,0xc0,0x3f,0x9e,0x61,0x94,0x6b,0xd4,0x2b,
	0xaa,0x55,0xaa,0x55,0xfe,0x01,0xfe,0x01,0xaa,0x55,0xaa,0x55,0xfe,0x01,0xaa,0x55,
	0xfd,0x02,0xfd,0x02,0xd5,0x2a,0xd5,0x2a,0xfd,0x02,0xd5,0x2a,0x55,0xaa,0x7d,0x82,
	0xbc,0x03,0xbd,0x02,0xbc,0x03,0xbc,0x03,0xbd,0x02,0xbc,0x03,0xfc,0x03,0xfd,0x02,
	0x00,0xff,0xfe,0x01,0xa8,0x57,0xae,0x51,0xf0,0x0f,0xa7,0x58,0xa5,0x5a,0xf5,0x0a,
	0x2a,0x55,0xaa,0x55,0xbf,0x40,0xbf,0x40,0x2a,0xd5,0xaa,0x55,0x3f,0xc0,0x2a,0xd5,
	0xbf,0x40,0xbf,0x40,0xba,0x45,0xba,0x45,0xbf,0x40,0xba,0x45,0xba,0x45,0xbf,0x40,
	0xbb,0x40,0xbb,0x40,0xbb,0x40,0xbb,0x40,0xbb,0x40,0xbb,0x40,0xbf,0x40,0xbf,0x40,
	0xc0,0x3f,0xdf,0x20,0xca,0x35,0xca,0x35,0xdf,0x20,0xca,0x35,0xca,0x35,0xdf,0x20,
	0x55,0xaa,0x55,0xab,0x7e,0x87,0xf8,0xef,0x18,0xff,0x06,0xff,0x01,0xff,0x06,0xff,
	0xfe,0x79,0x86,0xff,0x01,0xff,0x01,0xff,0x01,0xff,0x7a,0xff,0x86,0xff,0x01,0xff,
	0x53,0xac,0x53,0xaf,0xfe,0x9f,0xe1,0xff,0x80,0xff,0x00,0xff,0x00,0xff,0x80,0xff,
	0xf5,0xfa,0x0f,0xfc,0x03,0xff,0x80,0xff,0x60,0xff,0x11,0xff,0x16,0xff,0x18,0xff,
	0x7e,0xbd,0xc3,0xff,0x00,0xff,0x8f,0xff,0xb0,0xff,0xe1,0xff,0x19,0xff,0x06,0xff,
	0xbf,0x40,0xbf,0x41,0xdf,0xef,0x30,0xff,0xc0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0xfc,0x7b,0x87,0xff,0x01,0xff,0xc0,0xff,0x30,0xff,0x08,0xff,0x09,0xff,0x06,0xff,
	0xfd,0x7a,0x87,0xfe,0x81,0xff,0x43,0xff,0x4c,0xff,0x78,0xff,0x86,0xff,0x01,0xff,
	0x56,0xa9,0xf2,0x0d,0xdb,0xbc,0xe7,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x80,0xff,
	0xaf,0x53,0xac,0x5f,0xf0,0x3f,0xc0,0x7f,0xc0,0xff,0x33,0xff,0x0c,0xff,0x30,0xff,
	0xf2,0xcd,0x32,0xfd,0x0f,0xfc,0x03,0xff,0x0c,0xff,0xd0,0xff,0x30,0xff,0x0c,0xff,
	0x9f,0x67,0x98,0x7f,0xf0,0xff,0x0c,0xff,0x03,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0xab,0xd5,0x7e,0xe7,0x18,0xff,0x04,0xff,0x05,0xff,0x8f,0xff,0xb0,0xff,0xc0,0xff,
	0xf5,0xea,0x1d,0xfa,0x06,0xff,0x79,0xff,0x86,0xff,0x08,0xff,0xc8,0xff,0x30,0xff,
	0xff,0x03,0xfc,0x0f,0xf8,0x7f,0x86,0xff,0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0xe7,0xdb,0x3c,0xff,0x0c,0xff,0x02,0xff,0x82,0xff,0x43,0xff,0x4c,0xff,0x30,0xff,
	0xea,0xd5,0x3f,0xf0,0x0e,0xfd,0x1f,0xff,0x6c,0xff,0xd0,0xff,0x30,0xff,0x0c,0xff,
	0x8a,0x75,0x8a,0x75,0xef,0xf0,0x1f,0xfd,0x03,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0xbf,0x4f,0xb0,0x7f,0xc0,0xff,0x00,0xff,0x00,0xff,0xcf,0xff,0x30,0xff,0xc0,0xff,
	0xca,0x35,0xca,0xf5,0x3f,0xf3,0x3c,0xff,0x30,0xff,0x40,0xff,0xc0,0xff,0x30,0xff,
	0x08,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x40,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x20,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x02,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x04,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x10,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0xff,0xff,0x00,0x00,0x07,0x00,0x0e,0x00,0x1c,0x00,0x38,0x00,0x70,0x00,0xe0,0x00,
	0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xfe,0xff,0xfc,0xfe,0xf8,0xfc,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,
	0x00,0xff,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x7c,0x00,0x04,0x00,0x04,
	0x1f,0xff,0x1f,0x3f,0x1f,0x3f,0x1f,0x3f,0x1f,0x3f,0x18,0x3f,0x10,0x38,0x00,0x30,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0x08,0x00,0x08,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1c,0xff,0x04,0x1e,0x00,0x06,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0x01,0x07,0x00,0x01,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0x84,0x00,0x84,0x00,0x84,
	0xc0,0xff,0xc0,0xe0,0xc0,0xe0,0xc0,0xe0,0x00,0xe0,0x00,0x21,0x00,0x21,0x00,0x20,
	0x3f,0xff,0x1f,0x3f,0x0f,0x1f,0x07,0x0f,0x00,0x0f,0x00,0x08,0x00,0x08,0x00,0x08,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0x30,0x7f,0x20,0x70,0x00,0x60,
	0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0x18,0xff,0x10,0x38,0x00,0x30,
	0x07,0xff,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,
	0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xf8,
	0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x7c,0x00,0x7c,0x38,0x7c,0x38,0x7c,0x38,0x7c,
	0x00,0x20,0x00,0x20,0x00,0x21,0x00,0x21,0x00,0x21,0x00,0x21,0x00,0x20,0x00,0x20,
	0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,
	0x00,0x02,0x00,0x02,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0x42,0x00,0x02,0x00,0x02,
	0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x00,
	0x00,0x84,0x00,0x84,0x00,0x84,0x00,0x84,0x00,0x80,0x00,0x80,0x00,0xc0,0x00,0xe0,
	0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x21,0x00,0x21,0x00,0x20,0x00,0x20,
	0x00,0x08,0x00,0x0f,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,
	0x00,0x40,0x00,0xc0,0x00,0x41,0x00,0x43,0x00,0x43,0x01,0x43,0x01,0x43,0x01,0x43,
	0x00,0x20,0x00,0x20,0x00,0xe1,0x00,0xe1,0xc0,0xe1,0xc0,0xe1,0xc0,0xe0,0xc0,0xe0,
	0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x0f,
	0xf0,0xf8,0xf0,0xf8,0xf0,0xff,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x38,0x7c,0x38,0x7c,0x38,0xff,0x38,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0x30,0x00,0x38,0x10,0xff,0x18,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0x08,0x00,0x08,0x00,0xf8,0x00,0xf8,0xf0,0xf8,0xf0,0xf8,0xf0,0xff,0xf0,0xff,
	0x00,0x06,0x00,0x0e,0x04,0x7e,0x0c,0x7e,0x3c,0x7e,0x3c,0x7e,0x3c,0xff,0x3c,0xff,
	0x00,0x01,0x00,0x03,0x01,0x1f,0x03,0x1f,0x0f,0x1f,0x0f,0x1f,0x0f,0xff,0x0f,0xff,
	0x40,0xfc,0xe0,0xfc,0xe0,0xf0,0xe0,0xf0,0xe0,0xf0,0xe0,0xf0,0xe0,0xff,0xe0,0xff,
	0x00,0x20,0x00,0x20,0x00,0x3f,0x00,0x3f,0x1f,0x7f,0x3f,0xff,0x7f,0xff,0xff,0xff,
	0x00,0x18,0x00,0x38,0x10,0xff,0x30,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x01,0x43,0x01,0x43,0x01,0xff,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xc0,0xf0,0xe0,0xf8,0xf0,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x07,0x0f,0x07,0x0f,0x07,0xff,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const unsigned char bg_map[] = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x01,0x02,0x03,0x00,0x00,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x00,0x0e,0x0f,0x10,0x11,
	0x12,0x12,0x13,0x14,0x15,0x12,0x16,0x17,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x18,0x19,0x1a,0x12,0x1b,
	0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x1c,0x29,0x2a,0x2b,0x2c,0x2d,0x2e,
	0x2f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x40,0x41,0x42,
	0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,0x50,0x51,0x52,0x53,0x54,0x55,0x56,
	0x57,0x58,0x59,0x5a,0x5b,0x58,0x5c,0x58,0x59,0x59,0x5b,0x5d,0x58,0x5e,0x58,0x5a,0x5b,0x5d,0x58,0x57,
	0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58
};


const unsigned char ground_map[] = {
	0x5f,
	0x60,
	0x12
};


const unsigned char flappybird_map[] = {
	0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x6b,0x6c,
	0x6d,0x6e,0x6f,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,
	0x79,0x7a,0x7b,0x7c,0x7d,0x7e,0x7f,0x80,0x81,0x82,0x83,0x84
};


