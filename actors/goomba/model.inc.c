Lights1 goomba_kuribo_all_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Gfx goomba_kuribo_cmp4_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 goomba_kuribo_cmp4_rgba16[] = {
	#include "actors/goomba/kuribo_cmp4.rgba16.inc.c"
};

Vtx goomba_000_offset_002_mesh_layer_1_vtx_0[172] = {
	{{{173, 35, 28}, 0, {444, 60}, {0x6E, 0x33, 0x25, 0xFF}}},
	{{{173, -10, 43}, 0, {446, 62}, {0x6F, 0xED, 0x3B, 0xFF}}},
	{{{182, -3, 0}, 0, {444, 4}, {0x7F, 0xF9, 0x0, 0xFF}}},
	{{{173, 35, 28}, 0, {438, 30}, {0x6E, 0x33, 0x25, 0xFF}}},
	{{{145, 3, 74}, 0, {444, 124}, {0x52, 0x9, 0x61, 0xFF}}},
	{{{173, -10, 43}, 0, {444, 26}, {0x6F, 0xED, 0x3B, 0xFF}}},
	{{{173, 35, -28}, 0, {438, 26}, {0x6E, 0x33, 0xDB, 0xFF}}},
	{{{173, -10, -43}, 0, {444, 26}, {0x6E, 0xEC, 0xC4, 0xFF}}},
	{{{145, 3, -74}, 0, {442, 132}, {0x52, 0x9, 0x9F, 0xFF}}},
	{{{173, 35, 28}, 0, {442, 60}, {0x6E, 0x33, 0x25, 0xFF}}},
	{{{173, 35, -28}, 0, {444, 62}, {0x6E, 0x33, 0xDB, 0xFF}}},
	{{{173, -10, -43}, 0, {446, 62}, {0x6E, 0xEC, 0xC4, 0xFF}}},
	{{{145, 3, -74}, 0, {442, 174}, {0x52, 0x9, 0x9F, 0xFF}}},
	{{{173, -10, -43}, 0, {442, 80}, {0x6E, 0xEC, 0xC4, 0xFF}}},
	{{{112, -47, -88}, 0, {448, 326}, {0x44, 0xCA, 0xA3, 0xFF}}},
	{{{145, -66, -30}, 0, {450, 172}, {0x4F, 0xA3, 0xDB, 0xFF}}},
	{{{112, -47, -88}, 0, {448, 326}, {0x44, 0xCA, 0xA3, 0xFF}}},
	{{{145, -66, -30}, 0, {450, 172}, {0x4F, 0xA3, 0xDB, 0xFF}}},
	{{{72, -101, -47}, 0, {454, 508}, {0x3A, 0x94, 0xDE, 0xFF}}},
	{{{145, -66, 30}, 0, {450, 172}, {0x4F, 0xA3, 0x24, 0xFF}}},
	{{{169, -48, 0}, 0, {448, 68}, {0x6B, 0xBB, 0x0, 0xFF}}},
	{{{173, -10, -43}, 0, {450, 60}, {0x6E, 0xEC, 0xC4, 0xFF}}},
	{{{173, -10, 43}, 0, {450, 60}, {0x6F, 0xED, 0x3B, 0xFF}}},
	{{{145, 3, -74}, 0, {442, 198}, {0x52, 0x9, 0x9F, 0xFF}}},
	{{{72, 28, -116}, 0, {440, 510}, {0x42, 0x1B, 0x97, 0xFF}}},
	{{{72, -55, -108}, 0, {450, 508}, {0x40, 0xCB, 0xA0, 0xFF}}},
	{{{32, -67, -129}, 0, {450, 688}, {0x1B, 0xC1, 0x95, 0xFF}}},
	{{{32, -119, -56}, 0, {458, 688}, {0x14, 0x88, 0xDA, 0xFF}}},
	{{{72, -101, 47}, 0, {454, 508}, {0x39, 0x94, 0x23, 0xFF}}},
	{{{112, -49, 88}, 0, {448, 328}, {0x44, 0xC8, 0x5C, 0xFF}}},
	{{{173, -10, 43}, 0, {442, 80}, {0x6F, 0xED, 0x3B, 0xFF}}},
	{{{145, 3, 74}, 0, {442, 178}, {0x52, 0x9, 0x61, 0xFF}}},
	{{{112, -49, 88}, 0, {448, 328}, {0x44, 0xC8, 0x5C, 0xFF}}},
	{{{72, -55, 108}, 0, {450, 508}, {0x3E, 0xCA, 0x61, 0xFF}}},
	{{{72, -101, 47}, 0, {454, 508}, {0x39, 0x94, 0x23, 0xFF}}},
	{{{72, 28, 116}, 0, {440, 510}, {0x42, 0x1A, 0x6A, 0xFF}}},
	{{{145, 3, 74}, 0, {442, 220}, {0x52, 0x9, 0x61, 0xFF}}},
	{{{32, -67, 129}, 0, {450, 688}, {0x1B, 0xC1, 0x6B, 0xFF}}},
	{{{32, 32, 140}, 0, {438, 688}, {0x1B, 0x1C, 0x79, 0xFF}}},
	{{{-4, 16, 138}, 0, {440, 852}, {0xD1, 0xA, 0x76, 0xFF}}},
	{{{-4, 71, 118}, 0, {434, 854}, {0xD0, 0x40, 0x63, 0xFF}}},
	{{{-28, 8, 118}, 0, {442, 960}, {0x94, 0x1, 0x43, 0xFF}}},
	{{{-34, 68, 84}, 0, {434, 988}, {0x8D, 0x28, 0x24, 0xFF}}},
	{{{-33, -86, 61}, 0, {454, 986}, {0x90, 0xCA, 0x1B, 0xFF}}},
	{{{-34, 68, -84}, 0, {434, 988}, {0x8D, 0x28, 0xDC, 0xFF}}},
	{{{-33, -86, -61}, 0, {454, 986}, {0x90, 0xCA, 0xE5, 0xFF}}},
	{{{-28, 8, -118}, 0, {442, 960}, {0x94, 0x1, 0xBD, 0xFF}}},
	{{{-4, 71, -118}, 0, {434, 854}, {0xD0, 0x40, 0x9D, 0xFF}}},
	{{{-4, 16, -138}, 0, {440, 852}, {0xD1, 0xA, 0x8A, 0xFF}}},
	{{{-28, 8, -118}, 0, {442, 960}, {0x94, 0x1, 0xBD, 0xFF}}},
	{{{-4, 71, -118}, 0, {434, 854}, {0xD0, 0x40, 0x9D, 0xFF}}},
	{{{32, 32, -140}, 0, {438, 688}, {0x1C, 0x1C, 0x87, 0xFF}}},
	{{{32, -67, -129}, 0, {450, 688}, {0x1B, 0xC1, 0x95, 0xFF}}},
	{{{72, -55, -108}, 0, {450, 508}, {0x40, 0xCB, 0xA0, 0xFF}}},
	{{{72, 28, -116}, 0, {440, 510}, {0x42, 0x1B, 0x97, 0xFF}}},
	{{{-4, -63, -127}, 0, {450, 854}, {0xC7, 0xC9, 0x9D, 0xFF}}},
	{{{-4, -111, -63}, 0, {456, 852}, {0xCF, 0x93, 0xD4, 0xFF}}},
	{{{32, -119, -56}, 0, {458, 688}, {0x14, 0x88, 0xDA, 0xFF}}},
	{{{-4, -117, 0}, 0, {456, 854}, {0xCA, 0x8D, 0x0, 0xFF}}},
	{{{32, -119, 56}, 0, {458, 688}, {0x15, 0x89, 0x27, 0xFF}}},
	{{{72, -101, 47}, 0, {454, 508}, {0x39, 0x94, 0x23, 0xFF}}},
	{{{72, -55, 108}, 0, {450, 508}, {0x3E, 0xCA, 0x61, 0xFF}}},
	{{{32, -67, 129}, 0, {450, 688}, {0x1B, 0xC1, 0x6B, 0xFF}}},
	{{{-4, -111, 63}, 0, {456, 852}, {0xCF, 0x93, 0x2C, 0xFF}}},
	{{{32, -67, 129}, 0, {450, 688}, {0x1B, 0xC1, 0x6B, 0xFF}}},
	{{{-4, -63, 127}, 0, {450, 854}, {0xC7, 0xC9, 0x63, 0xFF}}},
	{{{-4, -111, 63}, 0, {456, 852}, {0xCF, 0x93, 0x2C, 0xFF}}},
	{{{-4, 16, 138}, 0, {440, 852}, {0xD1, 0xA, 0x76, 0xFF}}},
	{{{-28, 8, 118}, 0, {442, 960}, {0x94, 0x1, 0x43, 0xFF}}},
	{{{-33, -86, 61}, 0, {454, 986}, {0x90, 0xCA, 0x1B, 0xFF}}},
	{{{-4, -117, 0}, 0, {456, 854}, {0xCA, 0x8D, 0x0, 0xFF}}},
	{{{-33, -86, -61}, 0, {454, 986}, {0x90, 0xCA, 0xE5, 0xFF}}},
	{{{-4, -111, -63}, 0, {456, 852}, {0xCF, 0x93, 0xD4, 0xFF}}},
	{{{-4, -63, -127}, 0, {450, 854}, {0xC7, 0xC9, 0x9D, 0xFF}}},
	{{{-28, 8, -118}, 0, {442, 960}, {0x94, 0x1, 0xBD, 0xFF}}},
	{{{-4, 16, -138}, 0, {440, 852}, {0xD1, 0xA, 0x8A, 0xFF}}},
	{{{32, -119, 56}, 0, {458, 688}, {0x15, 0x89, 0x27, 0xFF}}},
	{{{173, -10, -43}, 0, {442, 50}, {0x6E, 0xEC, 0xC4, 0xFF}}},
	{{{182, -3, 0}, 0, {444, 4}, {0x7F, 0xF9, 0x0, 0xFF}}},
	{{{169, -48, 0}, 0, {448, 68}, {0x6B, 0xBB, 0x0, 0xFF}}},
	{{{173, -10, 43}, 0, {440, 58}, {0x6F, 0xED, 0x3B, 0xFF}}},
	{{{169, -48, 0}, 0, {448, 68}, {0x6B, 0xBB, 0x0, 0xFF}}},
	{{{182, -3, 0}, 0, {444, 4}, {0x7F, 0xF9, 0x0, 0xFF}}},
	{{{161, 55, 54}, 0, {880, 796}, {0x2D, 0x62, 0x43, 0xFF}}},
	{{{104, 95, 11}, 0, {770, 872}, {0x22, 0x6D, 0x38, 0xFF}}},
	{{{148, 54, 63}, 0, {890, 964}, {0x2C, 0x61, 0x45, 0xFF}}},
	{{{151, 34, 83}, 0, {974, 970}, {0x3E, 0x45, 0x57, 0xFF}}},
	{{{163, 26, 81}, 0, {966, 776}, {0x40, 0x42, 0x58, 0xFF}}},
	{{{142, 11, 101}, 0, {1002, 858}, {0x3B, 0x37, 0x62, 0xFF}}},
	{{{161, 55, -54}, 0, {880, 796}, {0x2D, 0x62, 0xBD, 0xFF}}},
	{{{148, 54, -63}, 0, {890, 964}, {0x2C, 0x61, 0xBB, 0xFF}}},
	{{{104, 95, -11}, 0, {770, 872}, {0x22, 0x6D, 0xC8, 0xFF}}},
	{{{151, 34, -83}, 0, {974, 970}, {0x3E, 0x45, 0xA9, 0xFF}}},
	{{{163, 26, -81}, 0, {966, 776}, {0x40, 0x42, 0xA8, 0xFF}}},
	{{{142, 11, -101}, 0, {1002, 858}, {0x3B, 0x37, 0x9E, 0xFF}}},
	{{{-34, 68, -84}, 0, {-254, 984}, {0x8D, 0x28, 0xDC, 0xFF}}},
	{{{-4, 121, -64}, 0, {-296, 878}, {0xC3, 0x6A, 0xDF, 0xFF}}},
	{{{-4, 71, -118}, 0, {-496, 810}, {0xD0, 0x40, 0x9D, 0xFF}}},
	{{{-4, 121, 64}, 0, {264, 878}, {0xC3, 0x6A, 0x21, 0xFF}}},
	{{{-34, 68, 84}, 0, {222, 984}, {0x8D, 0x28, 0x24, 0xFF}}},
	{{{-4, 71, 118}, 0, {464, 810}, {0xD0, 0x40, 0x63, 0xFF}}},
	{{{32, 115, 84}, 0, {332, 678}, {0x17, 0x68, 0x45, 0xFF}}},
	{{{32, 32, 140}, 0, {488, 682}, {0x1B, 0x1C, 0x79, 0xFF}}},
	{{{72, 99, 70}, 0, {274, 486}, {0x40, 0x5D, 0x3A, 0xFF}}},
	{{{72, 28, 116}, 0, {404, 492}, {0x42, 0x1A, 0x6A, 0xFF}}},
	{{{145, 60, 44}, 0, {160, 136}, {0x50, 0x51, 0x38, 0xFF}}},
	{{{145, 3, 74}, 0, {262, 138}, {0x52, 0x9, 0x61, 0xFF}}},
	{{{173, 35, 28}, 0, {102, 6}, {0x6E, 0x33, 0x25, 0xFF}}},
	{{{145, 67, 0}, 0, {-16, 130}, {0x4E, 0x65, 0x0, 0xFF}}},
	{{{173, 35, -28}, 0, {-136, 6}, {0x6E, 0x33, 0xDB, 0xFF}}},
	{{{145, 60, -44}, 0, {-194, 136}, {0x50, 0x51, 0xC8, 0xFF}}},
	{{{145, 3, -74}, 0, {-262, 136}, {0x52, 0x9, 0x9F, 0xFF}}},
	{{{145, 60, -44}, 0, {-194, 136}, {0x50, 0x51, 0xC8, 0xFF}}},
	{{{173, 35, -28}, 0, {-136, 6}, {0x6E, 0x33, 0xDB, 0xFF}}},
	{{{72, 28, -116}, 0, {-436, 492}, {0x42, 0x1B, 0x97, 0xFF}}},
	{{{72, 99, -70}, 0, {-298, 486}, {0x40, 0x5D, 0xC5, 0xFF}}},
	{{{32, 115, -84}, 0, {-364, 678}, {0x18, 0x68, 0xBB, 0xFF}}},
	{{{32, 32, -140}, 0, {-520, 682}, {0x1C, 0x1C, 0x87, 0xFF}}},
	{{{-4, 71, -118}, 0, {-496, 810}, {0xD0, 0x40, 0x9D, 0xFF}}},
	{{{-4, 121, -64}, 0, {-296, 878}, {0xC3, 0x6A, 0xDF, 0xFF}}},
	{{{32, 129, 0}, 0, {-16, 678}, {0x13, 0x7E, 0x0, 0xFF}}},
	{{{-4, 121, 64}, 0, {264, 878}, {0xC3, 0x6A, 0x21, 0xFF}}},
	{{{32, 115, 84}, 0, {332, 678}, {0x17, 0x68, 0x45, 0xFF}}},
	{{{72, 110, 0}, 0, {-16, 486}, {0x3B, 0x71, 0x0, 0xFF}}},
	{{{72, 99, 70}, 0, {274, 486}, {0x40, 0x5D, 0x3A, 0xFF}}},
	{{{145, 67, 0}, 0, {-16, 130}, {0x4E, 0x65, 0x0, 0xFF}}},
	{{{145, 60, 44}, 0, {160, 136}, {0x50, 0x51, 0x38, 0xFF}}},
	{{{-20, 25, -45}, 0, {536, 760}, {0x30, 0x44, 0xA0, 0xFF}}},
	{{{-69, 53, -28}, 0, {554, 894}, {0x2, 0x7A, 0xDB, 0xFF}}},
	{{{-20, 37, 0}, 0, {622, 760}, {0x32, 0x75, 0x0, 0xFF}}},
	{{{-69, 33, -55}, 0, {520, 894}, {0xF6, 0x44, 0x95, 0xFF}}},
	{{{-69, 0, -62}, 0, {506, 894}, {0xFF, 0x0, 0x81, 0xFF}}},
	{{{-20, -25, -45}, 0, {536, 760}, {0x2F, 0xBB, 0xA0, 0xFF}}},
	{{{-69, -32, -55}, 0, {520, 894}, {0xF6, 0xBC, 0x95, 0xFF}}},
	{{{-69, -52, -28}, 0, {554, 894}, {0x1, 0x86, 0xDB, 0xFF}}},
	{{{-20, -37, 0}, 0, {622, 760}, {0x31, 0x8B, 0x0, 0xFF}}},
	{{{-69, -52, 28}, 0, {690, 894}, {0x1, 0x86, 0x25, 0xFF}}},
	{{{-20, -25, 45}, 0, {708, 760}, {0x2F, 0xBB, 0x60, 0xFF}}},
	{{{-69, -32, 55}, 0, {724, 894}, {0xF6, 0xBC, 0x6B, 0xFF}}},
	{{{-69, 1, 62}, 0, {738, 894}, {0xFF, 0x0, 0x7F, 0xFF}}},
	{{{-20, 25, 45}, 0, {708, 760}, {0x30, 0x44, 0x60, 0xFF}}},
	{{{-69, 33, 55}, 0, {724, 894}, {0xF6, 0x44, 0x6B, 0xFF}}},
	{{{-69, 52, 29}, 0, {692, 894}, {0x0, 0x65, 0x4E, 0xFF}}},
	{{{-69, 52, 29}, 0, {692, 894}, {0x0, 0x65, 0x4E, 0xFF}}},
	{{{-20, 25, 45}, 0, {708, 760}, {0x30, 0x44, 0x60, 0xFF}}},
	{{{-69, 53, 28}, 0, {690, 894}, {0x2, 0x79, 0x26, 0xFF}}},
	{{{-20, 37, 0}, 0, {622, 760}, {0x32, 0x75, 0x0, 0xFF}}},
	{{{-69, 53, -28}, 0, {554, 894}, {0x2, 0x7A, 0xDB, 0xFF}}},
	{{{-94, 44, -30}, 0, {556, 960}, {0xA9, 0x53, 0xD7, 0xFF}}},
	{{{-69, 33, -55}, 0, {520, 894}, {0xF6, 0x44, 0x95, 0xFF}}},
	{{{-94, 1, -55}, 0, {528, 960}, {0xA8, 0x0, 0xA4, 0xFF}}},
	{{{-69, 0, -62}, 0, {506, 894}, {0xFF, 0x0, 0x81, 0xFF}}},
	{{{-69, -32, -55}, 0, {520, 894}, {0xF6, 0xBC, 0x95, 0xFF}}},
	{{{-94, -43, -30}, 0, {556, 960}, {0xA9, 0xAD, 0xD7, 0xFF}}},
	{{{-69, -52, -28}, 0, {554, 894}, {0x1, 0x86, 0xDB, 0xFF}}},
	{{{-69, -52, 28}, 0, {690, 894}, {0x1, 0x86, 0x25, 0xFF}}},
	{{{-94, -43, 30}, 0, {688, 960}, {0xA9, 0xAD, 0x29, 0xFF}}},
	{{{-69, -32, 55}, 0, {724, 894}, {0xF6, 0xBC, 0x6B, 0xFF}}},
	{{{-94, 1, 55}, 0, {716, 960}, {0xA8, 0x0, 0x5C, 0xFF}}},
	{{{-94, 1, 55}, 0, {716, 960}, {0xA8, 0x0, 0x5C, 0xFF}}},
	{{{-69, -32, 55}, 0, {724, 894}, {0xF6, 0xBC, 0x6B, 0xFF}}},
	{{{-69, 1, 62}, 0, {738, 894}, {0xFF, 0x0, 0x7F, 0xFF}}},
	{{{-69, 33, 55}, 0, {724, 894}, {0xF6, 0x44, 0x6B, 0xFF}}},
	{{{-94, 44, 30}, 0, {688, 960}, {0xA9, 0x53, 0x29, 0xFF}}},
	{{{-69, 52, 29}, 0, {692, 894}, {0x0, 0x65, 0x4E, 0xFF}}},
	{{{-69, 53, 28}, 0, {690, 894}, {0x2, 0x79, 0x26, 0xFF}}},
	{{{-94, 44, -30}, 0, {556, 960}, {0xA9, 0x53, 0xD7, 0xFF}}},
	{{{-106, 1, 17}, 0, {654, 984}, {0x82, 0x0, 0xF, 0xFF}}},
	{{{-106, 1, -17}, 0, {590, 984}, {0x82, 0x0, 0xF1, 0xFF}}},
	{{{-94, 1, -55}, 0, {528, 960}, {0xA8, 0x0, 0xA4, 0xFF}}},
	{{{-94, -43, -30}, 0, {556, 960}, {0xA9, 0xAD, 0xD7, 0xFF}}},
	{{{-94, -43, 30}, 0, {688, 960}, {0xA9, 0xAD, 0x29, 0xFF}}},
};

Gfx goomba_000_offset_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 2, 10, 0),
	gsSP1Triangle(11, 10, 2, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 1, 5, 0),
	gsSP1Triangle(6, 3, 4, 0),
	gsSP1Triangle(7, 0, 8, 0),
	gsSP1Triangle(9, 8, 0, 0),
	gsSP1Triangle(0, 2, 9, 0),
	gsSP1Triangle(9, 2, 10, 0),
	gsSP1Triangle(11, 10, 2, 0),
	gsSP1Triangle(2, 12, 11, 0),
	gsSP1Triangle(12, 2, 3, 0),
	gsSP1Triangle(13, 12, 3, 0),
	gsSP1Triangle(3, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(1, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(4, 7, 0, 0),
	gsSP1Triangle(7, 4, 8, 0),
	gsSP1Triangle(9, 8, 4, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 15, 11, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(5, 2, 1, 0),
	gsSP1Triangle(2, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(6, 12, 2, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 80, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(7, 3, 6, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 9, 12, 0),
	gsSP1Triangle(13, 12, 9, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 95, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 111, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSP1Triangle(14, 1, 12, 0),
	gsSP1Triangle(4, 12, 1, 0),
	gsSP1Triangle(12, 4, 9, 0),
	gsSP1Triangle(5, 9, 4, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 127, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 12, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 143, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 159, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(7, 8, 4, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(9, 11, 8, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(8, 12, 0, 0),
	gsSP1Triangle(0, 4, 8, 0),
	gsSPEndDisplayList(),
};

Vtx goomba_000_offset_003_mesh_layer_1_vtx_0[32] = {
	{{{62, 13, 3}, 0, {1004, 250}, {0x40, 0x6E, 0xFD, 0xFF}}},
	{{{44, 13, -32}, 0, {904, 488}, {0x1D, 0x5E, 0xB0, 0xFF}}},
	{{{44, 13, 46}, 0, {914, 4}, {0x1E, 0x5E, 0x50, 0xFF}}},
	{{{-8, 13, 43}, 0, {568, 20}, {0xCA, 0x53, 0x50, 0xFF}}},
	{{{-8, 13, -29}, 0, {568, 462}, {0xCA, 0x53, 0xB0, 0xFF}}},
	{{{-24, 13, 7}, 0, {484, 240}, {0xA8, 0x5C, 0x0, 0xFF}}},
	{{{62, 13, 3}, 0, {548, 738}, {0x40, 0x6E, 0xFD, 0xFF}}},
	{{{44, 13, 46}, 0, {664, 738}, {0x1E, 0x5E, 0x50, 0xFF}}},
	{{{68, -10, 40}, 0, {564, 642}, {0x62, 0x0, 0x51, 0xFF}}},
	{{{44, -10, 51}, 0, {664, 642}, {0xF, 0xE9, 0x7C, 0xFF}}},
	{{{-8, 13, 43}, 0, {878, 738}, {0xCA, 0x53, 0x50, 0xFF}}},
	{{{-8, -10, 45}, 0, {878, 642}, {0xC3, 0xD5, 0x67, 0xFF}}},
	{{{-30, -10, 7}, 0, {972, 642}, {0x82, 0xF0, 0x0, 0xFF}}},
	{{{-24, 13, 7}, 0, {946, 738}, {0xA8, 0x5C, 0x0, 0xFF}}},
	{{{-8, 13, -29}, 0, {878, 738}, {0xCA, 0x53, 0xB0, 0xFF}}},
	{{{-8, -10, -31}, 0, {878, 642}, {0xC3, 0xD5, 0x99, 0xFF}}},
	{{{-8, -10, -31}, 0, {878, 642}, {0xC3, 0xD5, 0x99, 0xFF}}},
	{{{-8, 13, -29}, 0, {878, 738}, {0xCA, 0x53, 0xB0, 0xFF}}},
	{{{44, -10, -37}, 0, {664, 642}, {0xF, 0xEA, 0x84, 0xFF}}},
	{{{44, 13, -32}, 0, {664, 738}, {0x1D, 0x5E, 0xB0, 0xFF}}},
	{{{68, -10, -26}, 0, {564, 642}, {0x61, 0xFE, 0xAF, 0xFF}}},
	{{{62, 13, 3}, 0, {548, 738}, {0x40, 0x6E, 0xFD, 0xFF}}},
	{{{68, -10, -25}, 0, {562, 642}, {0x76, 0x2, 0xD2, 0xFF}}},
	{{{81, -10, 7}, 0, {508, 642}, {0x7F, 0x4, 0x1, 0xFF}}},
	{{{68, -10, 40}, 0, {564, 642}, {0x62, 0x0, 0x51, 0xFF}}},
	{{{62, -38, 7}, 0, {576, 542}, {0x36, 0x8D, 0x0, 0xFF}}},
	{{{52, -27, 38}, 0, {618, 558}, {0x1B, 0x9E, 0x4C, 0xFF}}},
	{{{44, -10, 51}, 0, {664, 642}, {0xF, 0xE9, 0x7C, 0xFF}}},
	{{{-8, -10, 45}, 0, {878, 642}, {0xC3, 0xD5, 0x67, 0xFF}}},
	{{{-20, -30, 7}, 0, {928, 558}, {0xB6, 0x99, 0x0, 0xFF}}},
	{{{-30, -10, 7}, 0, {972, 642}, {0x82, 0xF0, 0x0, 0xFF}}},
	{{{52, -27, -25}, 0, {618, 558}, {0x1C, 0x9F, 0xB3, 0xFF}}},
};

Gfx goomba_000_offset_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_003_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(goomba_000_offset_003_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 14, 0, 0),
	gsSP1Triangle(0, 15, 13, 0),
	gsSP1Triangle(0, 2, 15, 0),
	gsSP1Triangle(4, 15, 2, 0),
	gsSP1Triangle(15, 4, 9, 0),
	gsSP1Triangle(6, 9, 4, 0),
	gsSP1Triangle(6, 7, 9, 0),
	gsSP1Triangle(9, 13, 15, 0),
	gsSP1Triangle(13, 9, 10, 0),
	gsSPEndDisplayList(),
};

Vtx goomba_000_offset_004_mesh_layer_1_vtx_0[41] = {
	{{{62, 13, -4}, 0, {1004, 250}, {0x40, 0x6E, 0x3, 0xFF}}},
	{{{44, 13, -46}, 0, {914, 4}, {0x1E, 0x5E, 0xB0, 0xFF}}},
	{{{44, 13, 31}, 0, {904, 488}, {0x1D, 0x5E, 0x50, 0xFF}}},
	{{{-8, 13, -43}, 0, {568, 20}, {0xCA, 0x53, 0xB0, 0xFF}}},
	{{{-8, 13, 28}, 0, {568, 462}, {0xCA, 0x53, 0x50, 0xFF}}},
	{{{-24, 13, -8}, 0, {484, 240}, {0xA8, 0x5C, 0x0, 0xFF}}},
	{{{62, 13, -4}, 0, {548, 738}, {0x40, 0x6E, 0x3, 0xFF}}},
	{{{68, -10, -41}, 0, {564, 642}, {0x62, 0x0, 0xAF, 0xFF}}},
	{{{44, 13, -46}, 0, {664, 738}, {0x1E, 0x5E, 0xB0, 0xFF}}},
	{{{81, -10, -8}, 0, {508, 642}, {0x7F, 0x4, 0xFF, 0xFF}}},
	{{{68, -10, 25}, 0, {564, 642}, {0x64, 0xFA, 0x4F, 0xFF}}},
	{{{44, 13, 31}, 0, {664, 738}, {0x1D, 0x5E, 0x50, 0xFF}}},
	{{{44, -10, 36}, 0, {664, 642}, {0xF, 0xEA, 0x7C, 0xFF}}},
	{{{-8, 13, 28}, 0, {878, 738}, {0xCA, 0x53, 0x50, 0xFF}}},
	{{{-8, -10, 30}, 0, {878, 642}, {0xC3, 0xD5, 0x67, 0xFF}}},
	{{{-30, -10, -8}, 0, {972, 642}, {0x82, 0xF0, 0x0, 0xFF}}},
	{{{-8, 13, 28}, 0, {878, 738}, {0xCA, 0x53, 0x50, 0xFF}}},
	{{{-24, 13, -8}, 0, {946, 738}, {0xA8, 0x5C, 0x0, 0xFF}}},
	{{{-30, -10, -8}, 0, {972, 642}, {0x82, 0xF0, 0x0, 0xFF}}},
	{{{-8, 13, -43}, 0, {878, 738}, {0xCA, 0x53, 0xB0, 0xFF}}},
	{{{-8, -10, -46}, 0, {878, 642}, {0xC3, 0xD5, 0x99, 0xFF}}},
	{{{44, -10, -52}, 0, {664, 642}, {0xF, 0xE9, 0x84, 0xFF}}},
	{{{44, 13, -46}, 0, {664, 738}, {0x1E, 0x5E, 0xB0, 0xFF}}},
	{{{68, -10, -41}, 0, {564, 642}, {0x62, 0x0, 0xAF, 0xFF}}},
	{{{52, -27, -39}, 0, {618, 558}, {0x1B, 0x9E, 0xB4, 0xFF}}},
	{{{62, -37, -8}, 0, {576, 542}, {0x36, 0x8D, 0x0, 0xFF}}},
	{{{81, -10, -8}, 0, {508, 642}, {0x7F, 0x4, 0xFF, 0xFF}}},
	{{{68, -10, 25}, 0, {562, 642}, {0x40, 0x96, 0x1C, 0xFF}}},
	{{{68, -10, 25}, 0, {564, 642}, {0x64, 0xFA, 0x4F, 0xFF}}},
	{{{52, -27, 24}, 0, {618, 558}, {0x1C, 0x9F, 0x4D, 0xFF}}},
	{{{44, -10, 36}, 0, {664, 642}, {0xF, 0xEA, 0x7C, 0xFF}}},
	{{{-8, -10, 30}, 0, {878, 642}, {0xC3, 0xD5, 0x67, 0xFF}}},
	{{{52, -27, 24}, 0, {618, 558}, {0x1C, 0x9F, 0x4D, 0xFF}}},
	{{{-8, -10, 30}, 0, {878, 642}, {0xC3, 0xD5, 0x67, 0xFF}}},
	{{{-20, -30, -8}, 0, {928, 558}, {0xB6, 0x99, 0x0, 0xFF}}},
	{{{-30, -10, -8}, 0, {972, 642}, {0x82, 0xF0, 0x0, 0xFF}}},
	{{{-8, -10, -46}, 0, {878, 642}, {0xC3, 0xD5, 0x99, 0xFF}}},
	{{{52, -27, -39}, 0, {618, 558}, {0x1B, 0x9E, 0xB4, 0xFF}}},
	{{{44, -10, -52}, 0, {664, 642}, {0xF, 0xE9, 0x84, 0xFF}}},
	{{{62, -37, -8}, 0, {576, 542}, {0x36, 0x8D, 0x0, 0xFF}}},
	{{{68, -10, 25}, 0, {562, 642}, {0x40, 0x96, 0x1C, 0xFF}}},
};

Gfx goomba_000_offset_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_004_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(goomba_000_offset_004_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(goomba_000_offset_004_mesh_layer_1_vtx_0 + 32, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(2, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(5, 7, 2, 0),
	gsSP1Triangle(0, 2, 7, 0),
	gsSP1Triangle(7, 8, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_goomba_kuribo_all_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, goomba_kuribo_cmp4_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(goomba_kuribo_all_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_002_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_kuribo_all_f3d),
	gsSPDisplayList(goomba_000_offset_002_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_003_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_kuribo_all_f3d),
	gsSPDisplayList(goomba_000_offset_003_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_004_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_kuribo_all_f3d),
	gsSPDisplayList(goomba_000_offset_004_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

