#include <intuition/intuition.h>

/* Image palette, RGB4 format (OCS/ECS machines) */
UWORD font_palRGB4[4] = {
	0x444,0xfff,0x0,0xf0f
};

/* Ensure that this data is within chip memory or you'll see nothing !!! */
UWORD font_data[320] = {
	/* Bitplane #0 */
	0x8080,0x8080,0x8080,0x8080,0x8202,0x202,0x202,0x202,0x202,0x202,0x202,0x202,0x202,0x410,0x2040,0x8102,0x408,0x1110,0x4104,0x4000,
	0x1c3c,0x3e3c,0x3e3e,0x3e22,0x3808,0xb880,0x8818,0xf8f8,0xf8f0,0xf8f8,0x8888,0x8888,0x88f8,0xf047,0x8f12,0x3c78,0xf1e3,0xc406,0xc00,0x0,
	0x1424,0x2026,0x2020,0x2022,0x1008,0xa080,0xf8f8,0x8888,0x8890,0x8020,0x8888,0x88f8,0x8810,0x91c0,0x8112,0x2040,0x1122,0x4401,0x1000,0x0,
	0x3e3e,0x2022,0x3c3c,0x263e,0x1008,0xf880,0x8888,0x88f8,0x88f8,0xf820,0x8888,0xa870,0xf820,0x9047,0x8f1e,0x3c78,0x11e3,0xc401,0x1000,0x0,
	0x2222,0x2022,0x2020,0x2222,0x1088,0x8880,0x8888,0x8880,0xa888,0x820,0x8888,0xa8f8,0x840,0x9044,0x102,0x448,0x1120,0x4441,0x1070,0x0,
	0x2222,0x2022,0x2020,0x2222,0x1088,0x8880,0x8888,0x8880,0x9088,0x820,0x88f8,0xa888,0x880,0x9044,0x102,0x448,0x1120,0x4001,0x1001,0x0,
	0x223e,0x3e3e,0x3e20,0x3e22,0x38f8,0x88f8,0x8888,0xf880,0xe888,0xf820,0xf870,0xf888,0xf8f8,0xf047,0x8f02,0x3c78,0x11e3,0xc446,0xc00,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,

	/* Bitplane #1 */
	0xbefe,0xffff,0xffff,0xfff7,0xfe1f,0xffc3,0xdfbf,0xffff,0xfffb,0xffff,0xdfdf,0xdfdf,0xdfff,0xfcff,0xffff,0xffff,0xffff,0xff1f,0x5f04,0x4000,
	0x2242,0x4143,0x4141,0x4155,0x4415,0x4541,0x75e5,0x505,0x509,0x505,0x5555,0x5575,0x5505,0xba8,0x50ad,0x4285,0xa14,0x2a09,0xb200,0x0,
	0x6b5b,0x5f59,0x5f5f,0x5f5d,0x6c15,0x5d41,0x505,0x7575,0x756d,0x7ddd,0x5555,0x7505,0x75ed,0x6a2f,0x5ead,0x5ebd,0xead5,0xaa0e,0xae00,0x0,
	0x4141,0x505d,0x4242,0x5941,0x29d5,0x541,0x7575,0x5505,0x7505,0x451,0x5555,0x558d,0x4d9,0x6ba8,0x50a1,0x4284,0x2a14,0x2ae2,0xa8f8,0x0,
	0x5d5d,0x5055,0x5e5e,0x5d5d,0x2955,0x7541,0x5555,0x557d,0x5575,0xf451,0x5575,0x5505,0xf5b1,0x68ab,0xdebd,0x7ab4,0x2ad7,0xaaa2,0xa88b,0x8000,
	0x555d,0x5f5d,0x5f50,0x5d55,0x6d75,0x557d,0x5555,0x7541,0x6d55,0xf451,0x7505,0x5575,0xf57d,0x68ab,0xde85,0x7ab4,0x2ad7,0xaeee,0xaefa,0x8000,
	0x5541,0x4141,0x4150,0x4155,0x4505,0x5505,0x5555,0x541,0x1555,0x451,0x58d,0x555,0x505,0x8a8,0x5085,0x4284,0x2a14,0x2aa9,0xb203,0x8000,
	0x777f,0x7f7f,0x7f70,0x7f77,0x7dfd,0xddfd,0xdddd,0xfdc1,0xfddd,0xfc71,0xfcf9,0xfddd,0xfdfd,0xf8ef,0xdf87,0x7efc,0x3bf7,0xeeef,0x1e00,0x0
};

struct Image font_bitmap = {
	0, 0, 308, 8, 2, font_data,
	255, 0, NULL
};


