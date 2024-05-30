Lights1 coin_coin_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Gfx coin_coin_yellow01_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 coin_coin_yellow01_rgba16[] = {
	#include "actors/coin/coin_yellow01.rgba16.inc.c"
};

u8 coin_coin_redstar01_rgba16[] = {
	#include "actors/coin/coin_redstar01.rgba16.inc.c"
};

u8 coin_coin_bluestar01_rgba16[] = {
	#include "actors/coin/coin_bluestar01.rgba16.inc.c"
};

Vtx coin_000_displaylist_mesh_layer_1_vtx_0[46] = {
	{{{41, 41, -6}, 0, {1052, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 41, -6}, 0, {492, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{29, 70, -6}, 0, {888, 192}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 82, -6}, 0, {492, -134}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-29, 70, -6}, 0, {100, 192}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-41, 41, -6}, 0, {-64, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 41, -6}, 0, {492, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{41, 41, -6}, 0, {1052, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{29, 12, -6}, 0, {888, 1772}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 0, -6}, 0, {492, 2098}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-29, 12, -6}, 0, {100, 1772}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-41, 41, -6}, 0, {-64, 982}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-41, 41, 6}, 0, {-64, 982}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-29, 12, 6}, 0, {100, 1772}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 41, 6}, 0, {492, 982}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-29, 70, 6}, 0, {100, 192}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-29, 70, 6}, 0, {100, 192}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 41, 6}, 0, {492, 982}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 82, 6}, 0, {492, -134}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{29, 70, 6}, 0, {888, 192}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{41, 41, 6}, 0, {1052, 982}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{29, 12, 6}, 0, {888, 1772}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 0, 6}, 0, {492, 2098}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 41, 6}, 0, {492, 982}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-29, 12, 6}, 0, {100, 1772}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{29, 12, 6}, 0, {888, 1772}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 82, -6}, 0, {492, -134}, {0x0, 0x63, 0xB0, 0xFF}}},
	{{{29, 70, 6}, 0, {888, 192}, {0x46, 0x46, 0x50, 0xFF}}},
	{{{29, 70, -6}, 0, {888, 192}, {0x46, 0x46, 0xB0, 0xFF}}},
	{{{0, 82, 6}, 0, {492, -134}, {0x0, 0x63, 0x50, 0xFF}}},
	{{{-29, 70, -6}, 0, {100, 192}, {0xBA, 0x46, 0xB0, 0xFF}}},
	{{{-29, 70, 6}, 0, {100, 192}, {0xBA, 0x46, 0x50, 0xFF}}},
	{{{-41, 41, -6}, 0, {-64, 982}, {0x9D, 0x0, 0xB0, 0xFF}}},
	{{{-29, 70, 6}, 0, {100, 192}, {0xBA, 0x46, 0x50, 0xFF}}},
	{{{-29, 70, -6}, 0, {100, 192}, {0xBA, 0x46, 0xB0, 0xFF}}},
	{{{-41, 41, 6}, 0, {-64, 982}, {0x9D, 0x0, 0x50, 0xFF}}},
	{{{-29, 12, -6}, 0, {100, 1772}, {0xBA, 0xBA, 0xB0, 0xFF}}},
	{{{-29, 12, 6}, 0, {100, 1772}, {0xBA, 0xBA, 0x50, 0xFF}}},
	{{{0, 0, -6}, 0, {492, 2098}, {0x0, 0x9D, 0xB0, 0xFF}}},
	{{{0, 0, 6}, 0, {492, 2098}, {0x0, 0x9D, 0x50, 0xFF}}},
	{{{29, 12, -6}, 0, {888, 1772}, {0x46, 0xBA, 0xB0, 0xFF}}},
	{{{29, 12, 6}, 0, {888, 1772}, {0x46, 0xBA, 0x50, 0xFF}}},
	{{{41, 41, -6}, 0, {1052, 982}, {0x63, 0x0, 0xB0, 0xFF}}},
	{{{41, 41, 6}, 0, {1052, 982}, {0x63, 0x0, 0x50, 0xFF}}},
	{{{29, 70, -6}, 0, {888, 192}, {0x46, 0x46, 0xB0, 0xFF}}},
	{{{29, 70, 6}, 0, {888, 192}, {0x46, 0x46, 0x50, 0xFF}}},
};

Gfx coin_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(9, 10, 6, 0),
	gsSP1Triangle(11, 6, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 6, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 10, 13, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(coin_000_displaylist_mesh_layer_1_vtx_0 + 32, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPEndDisplayList(),
};


Gfx mat_coin_coin_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, coin_coin_yellow01_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 252),
	gsSPSetLights1(coin_coin_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_coin_coin_red_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, coin_coin_redstar01_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 252),
	gsSPSetLights1(coin_coin_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_coin_coin_blue_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, coin_coin_bluestar01_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 252),
	gsSPSetLights1(coin_coin_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx coin_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_coin_coin_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_001_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_coin_coin_red_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_002_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_coin_coin_blue_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx coin_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx coin_seg3_dl_03007990[] = {
	gsSPDisplayList(mat_coin_coin_red_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(coin_material_revert_render_settings),
	gsSPEndDisplayList(),
};

Gfx coin_seg3_dl_03007968[] = {
	gsSPDisplayList(mat_coin_coin_red_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(coin_material_revert_render_settings),
	gsSPEndDisplayList(),
};
Gfx coin_seg3_dl_03007940[] = {
	gsSPDisplayList(mat_coin_coin_red_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(coin_material_revert_render_settings),
	gsSPEndDisplayList(),
};
Gfx coin_seg3_dl_030079B8[] = {
	gsSPDisplayList(mat_coin_coin_red_f3d),
	gsSPDisplayList(coin_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(coin_material_revert_render_settings),
	gsSPEndDisplayList(),
};