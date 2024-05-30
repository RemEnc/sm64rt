Lights1 star_star_body_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Lights1 star_star_eye_f3d_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0,0x0,0x0,0x28,0x28,0x28);

Gfx star_star_body04_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 star_star_body04_rgba16[] = {
	#include "actors/star/star_body04.rgba16.inc.c"
};

Vtx star_star_mesh_layer_1_vtx_0[12] = {
	{{{-39, -53, 0}, 0, {823, 997}, {0xB3, 0x9B, 0x0, 0xFF}}},
	{{{0, 1, 17}, 0, {490, 496}, {0x0, 0x2, 0x7F, 0xFF}}},
	{{{-34, -14, 0}, 0, {738, 629}, {0x85, 0xE1, 0x0, 0xFF}}},
	{{{0, -38, 0}, 0, {490, 746}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 1, -17}, 0, {490, 496}, {0x0, 0x2, 0x81, 0xFF}}},
	{{{-62, 21, 0}, 0, {989, 394}, {0x88, 0x2B, 0x0, 0xFF}}},
	{{{-21, 27, 0}, 0, {655, 310}, {0xBB, 0x6B, 0x0, 0xFF}}},
	{{{0, 66, 0}, 0, {490, -6}, {0x0, 0x7F, 0x0, 0xFF}}},
	{{{21, 27, 0}, 0, {316, 307}, {0x45, 0x6B, 0x0, 0xFF}}},
	{{{62, 21, 0}, 0, {-16, 394}, {0x78, 0x2B, 0x0, 0xFF}}},
	{{{34, -14, 0}, 0, {215, 617}, {0x7B, 0xE1, 0x0, 0xFF}}},
	{{{39, -53, 0}, 0, {157, 997}, {0x4D, 0x9B, 0x0, 0xFF}}},
};

Gfx star_star_mesh_layer_1_tri_0[] = {
	gsSPVertex(star_star_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(2, 4, 0, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(5, 2, 1, 0),
	gsSP1Triangle(6, 5, 1, 0),
	gsSP1Triangle(1, 7, 6, 0),
	gsSP1Triangle(7, 1, 8, 0),
	gsSP1Triangle(9, 8, 1, 0),
	gsSP1Triangle(10, 9, 1, 0),
	gsSP1Triangle(1, 11, 10, 0),
	gsSP1Triangle(11, 1, 3, 0),
	gsSP1Triangle(3, 4, 11, 0),
	gsSP1Triangle(4, 10, 11, 0),
	gsSP1Triangle(10, 4, 9, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx star_star_mesh_layer_1_vtx_1[14] = {
	{{{8, 10, 16}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{8, -4, 16}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{14, 3, 14}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{14, -10, 14}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{19, -4, 13}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{19, 10, 13}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{14, 16, 14}, 0, {1002, 1008}, {0x21, 0x0, 0x7B, 0xFF}}},
	{{{-8, -4, 16}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-8, 10, 16}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-14, 3, 14}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-14, 16, 14}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-19, 10, 13}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-19, -4, 13}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
	{{{-14, -10, 14}, 0, {1002, 1008}, {0xDF, 0x0, 0x7B, 0xFF}}},
};

Gfx star_star_mesh_layer_1_tri_1[] = {
	gsSPVertex(star_star_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 9, 11, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(7, 9, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_star_star_body_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, star_star_body04_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_star_star_body_f3d[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsSPEndDisplayList(),
};

Gfx mat_star_star_eye_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(star_star_eye_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx star_star_mesh_layer_1[] = {
	gsSPDisplayList(mat_star_star_body_f3d),
	gsSPDisplayList(star_star_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_star_star_body_f3d),
	gsSPDisplayList(mat_star_star_eye_f3d),
	gsSPDisplayList(star_star_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx star_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

