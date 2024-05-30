Lights1 warp_pipe_mat_dokan_a_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Lights1 warp_pipe_mat_dokan_b_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Gfx warp_pipe_dokan_a_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_dokan_a_rgba16[] = {
	#include "actors/warp_pipe/dokan_a.rgba16.inc.c"
};

Gfx warp_pipe_dokan_b_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_dokan_b_rgba16[] = {
	#include "actors/warp_pipe/dokan_b.rgba16.inc.c"
};

Vtx warp_pipe_000_displaylist_mesh_layer_1_vtx_0[32] = {
	{{{-98, 0, -98}, 0, {240, 4080}, {0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-98, 134, -98}, 0, {240, 2598}, {0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 0, -139}, 0, {-16, 4080}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 134, -139}, 0, {-16, 2598}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{-139, 0, 0}, 0, {240, 4080}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{-139, 134, 0}, 0, {240, 2598}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{-98, 0, -98}, 0, {-16, 4080}, {0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-98, 134, -98}, 0, {-16, 2598}, {0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 0, -139}, 0, {240, 4080}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 134, -139}, 0, {240, 2598}, {0x0, 0x0, 0x81, 0xFF}}},
	{{{98, 0, -98}, 0, {-16, 4080}, {0x5A, 0x0, 0xA6, 0xFF}}},
	{{{98, 134, -98}, 0, {-16, 2598}, {0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-98, 0, 98}, 0, {240, 4080}, {0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-98, 134, 98}, 0, {240, 2598}, {0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-139, 0, 0}, 0, {-16, 4080}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{-139, 134, 0}, 0, {-16, 2598}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 0, 139}, 0, {240, 4080}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 134, 139}, 0, {240, 2598}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-98, 0, 98}, 0, {-16, 4080}, {0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-98, 134, 98}, 0, {-16, 2598}, {0xA6, 0x0, 0x5A, 0xFF}}},
	{{{98, 0, 98}, 0, {240, 4080}, {0x5A, 0x0, 0x5A, 0xFF}}},
	{{{98, 134, 98}, 0, {240, 2598}, {0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 0, 139}, 0, {-16, 4080}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, 134, 139}, 0, {-16, 2598}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{98, 0, -98}, 0, {240, 4080}, {0x5A, 0x0, 0xA6, 0xFF}}},
	{{{98, 134, -98}, 0, {240, 2598}, {0x5A, 0x0, 0xA6, 0xFF}}},
	{{{139, 0, 0}, 0, {-16, 4080}, {0x7F, 0x0, 0x0, 0xFF}}},
	{{{139, 134, 0}, 0, {-16, 2598}, {0x7F, 0x0, 0x0, 0xFF}}},
	{{{139, 0, 0}, 0, {240, 4080}, {0x7F, 0x0, 0x0, 0xFF}}},
	{{{139, 134, 0}, 0, {240, 2598}, {0x7F, 0x0, 0x0, 0xFF}}},
	{{{98, 0, 98}, 0, {-16, 4080}, {0x5A, 0x0, 0x5A, 0xFF}}},
	{{{98, 134, 98}, 0, {-16, 2598}, {0x5A, 0x0, 0x5A, 0xFF}}},
};

Gfx warp_pipe_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(warp_pipe_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pipe_001_displaylist_mesh_layer_1_vtx_0[80] = {
	{{{103, 134, 0}, 0, {-16, 671}, {0x9D, 0x50, 0x0, 0xFF}}},
	{{{73, 134, 73}, 0, {240, 671}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{103, 206, 0}, 0, {-16, 1013}, {0xB4, 0x66, 0x0, 0xFF}}},
	{{{73, 206, 73}, 0, {240, 1013}, {0xCB, 0x66, 0xCB, 0xFF}}},
	{{{73, 134, 73}, 0, {80, 513}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{103, 134, 0}, 0, {22, 513}, {0x9D, 0x50, 0x0, 0xFF}}},
	{{{0, 134, 103}, 0, {176, 513}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{-73, 134, 73}, 0, {240, 513}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{73, 134, -73}, 0, {-16, 513}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{0, 134, -103}, 0, {22, 513}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{-103, 134, 0}, 0, {176, 513}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{-73, 134, -73}, 0, {80, 513}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{73, 134, -73}, 0, {-16, 671}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{103, 134, 0}, 0, {240, 671}, {0x9D, 0x50, 0x0, 0xFF}}},
	{{{73, 206, -73}, 0, {-16, 1013}, {0xCB, 0x66, 0x35, 0xFF}}},
	{{{103, 206, 0}, 0, {240, 1013}, {0xB4, 0x66, 0x0, 0xFF}}},
	{{{0, 134, -103}, 0, {-16, 671}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{73, 134, -73}, 0, {240, 671}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{0, 206, -103}, 0, {-16, 1013}, {0x0, 0x66, 0x4C, 0xFF}}},
	{{{73, 206, -73}, 0, {240, 1013}, {0xCB, 0x66, 0x35, 0xFF}}},
	{{{-73, 134, 73}, 0, {-16, 671}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{-103, 134, 0}, 0, {240, 671}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{-73, 206, 73}, 0, {-16, 1013}, {0x35, 0x66, 0xCB, 0xFF}}},
	{{{-103, 206, 0}, 0, {240, 1013}, {0x4C, 0x66, 0x0, 0xFF}}},
	{{{0, 134, 103}, 0, {-16, 671}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{-73, 134, 73}, 0, {240, 671}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{0, 206, 103}, 0, {-16, 1013}, {0x0, 0x66, 0xB4, 0xFF}}},
	{{{-73, 206, 73}, 0, {240, 1013}, {0x35, 0x66, 0xCB, 0xFF}}},
	{{{-73, 134, -73}, 0, {-16, 671}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{0, 134, -103}, 0, {240, 671}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{-73, 206, -73}, 0, {-16, 1013}, {0x35, 0x66, 0x35, 0xFF}}},
	{{{0, 206, -103}, 0, {240, 1013}, {0x0, 0x66, 0x4C, 0xFF}}},
	{{{-103, 134, 0}, 0, {-16, 671}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{-73, 134, -73}, 0, {240, 671}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{-103, 206, 0}, 0, {-16, 1013}, {0x4C, 0x66, 0x0, 0xFF}}},
	{{{-73, 206, -73}, 0, {240, 1013}, {0x35, 0x66, 0x35, 0xFF}}},
	{{{109, 134, 109}, 0, {166, 2643}, {0x46, 0xB0, 0x46, 0xFF}}},
	{{{0, 134, 155}, 0, {58, 2643}, {0x0, 0xB0, 0x63, 0xFF}}},
	{{{155, 134, 0}, 0, {240, 2643}, {0x63, 0xB0, 0x0, 0xFF}}},
	{{{-109, 134, 109}, 0, {-16, 2643}, {0xBA, 0xB0, 0x46, 0xFF}}},
	{{{109, 134, -109}, 0, {240, 2643}, {0x46, 0xB0, 0xBA, 0xFF}}},
	{{{0, 134, -155}, 0, {166, 2643}, {0x0, 0xB0, 0x9D, 0xFF}}},
	{{{-155, 134, 0}, 0, {-16, 2643}, {0x9D, 0xB0, 0x0, 0xFF}}},
	{{{-109, 134, -109}, 0, {58, 2643}, {0xBA, 0xB0, 0xBA, 0xFF}}},
	{{{109, 134, 109}, 0, {-16, 2019}, {0x46, 0xB0, 0x46, 0xFF}}},
	{{{155, 134, 0}, 0, {240, 2019}, {0x63, 0xB0, 0x0, 0xFF}}},
	{{{109, 206, 109}, 0, {-16, 1551}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{155, 206, 0}, 0, {240, 1551}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{109, 206, 109}, 0, {240, 1551}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{0, 206, 155}, 0, {-16, 1551}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{109, 134, 109}, 0, {240, 2019}, {0x46, 0xB0, 0x46, 0xFF}}},
	{{{0, 134, 155}, 0, {-16, 2019}, {0x0, 0xB0, 0x63, 0xFF}}},
	{{{0, 206, 155}, 0, {240, 1551}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{-109, 206, 109}, 0, {-16, 1551}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{0, 134, 155}, 0, {240, 2019}, {0x0, 0xB0, 0x63, 0xFF}}},
	{{{-109, 134, 109}, 0, {-16, 2019}, {0xBA, 0xB0, 0x46, 0xFF}}},
	{{{155, 134, 0}, 0, {-16, 2019}, {0x63, 0xB0, 0x0, 0xFF}}},
	{{{109, 134, -109}, 0, {240, 2019}, {0x46, 0xB0, 0xBA, 0xFF}}},
	{{{155, 206, 0}, 0, {-16, 1551}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{109, 206, -109}, 0, {240, 1551}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{-109, 206, 109}, 0, {240, 1551}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{-155, 206, 0}, 0, {-16, 1551}, {0x9D, 0x50, 0x0, 0xFF}}},
	{{{-109, 134, 109}, 0, {240, 2019}, {0xBA, 0xB0, 0x46, 0xFF}}},
	{{{-155, 134, 0}, 0, {-16, 2019}, {0x9D, 0xB0, 0x0, 0xFF}}},
	{{{109, 134, -109}, 0, {-16, 2019}, {0x46, 0xB0, 0xBA, 0xFF}}},
	{{{0, 134, -155}, 0, {240, 2019}, {0x0, 0xB0, 0x9D, 0xFF}}},
	{{{109, 206, -109}, 0, {-16, 1551}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{0, 206, -155}, 0, {240, 1551}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{0, 134, -155}, 0, {-16, 2019}, {0x0, 0xB0, 0x9D, 0xFF}}},
	{{{-109, 134, -109}, 0, {240, 2019}, {0xBA, 0xB0, 0xBA, 0xFF}}},
	{{{0, 206, -155}, 0, {-16, 1551}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{-109, 206, -109}, 0, {240, 1551}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{73, 134, 73}, 0, {-16, 671}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{0, 134, 103}, 0, {240, 671}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{73, 206, 73}, 0, {-16, 1013}, {0xCB, 0x66, 0xCB, 0xFF}}},
	{{{0, 206, 103}, 0, {240, 1013}, {0x0, 0x66, 0xB4, 0xFF}}},
	{{{-109, 134, -109}, 0, {-16, 2019}, {0xBA, 0xB0, 0xBA, 0xFF}}},
	{{{-155, 134, 0}, 0, {240, 2019}, {0x9D, 0xB0, 0x0, 0xFF}}},
	{{{-109, 206, -109}, 0, {-16, 1551}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{-155, 206, 0}, 0, {240, 1551}, {0x9D, 0x50, 0x0, 0xFF}}},
};

Gfx warp_pipe_001_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pipe_001_displaylist_mesh_layer_1_vtx_1[16] = {
	{{{73, 206, 73}, 0, {218, -107}, {0xCB, 0x66, 0xCB, 0xFF}}},
	{{{155, 206, 0}, 0, {248, -565}, {0x63, 0x50, 0x0, 0xFF}}},
	{{{103, 206, 0}, 0, {202, -383}, {0xB4, 0x66, 0x0, 0xFF}}},
	{{{109, 206, 109}, 0, {272, -149}, {0x46, 0x50, 0x46, 0xFF}}},
	{{{0, 206, 103}, 0, {172, 221}, {0x0, 0x66, 0xB4, 0xFF}}},
	{{{0, 206, 155}, 0, {202, 341}, {0x0, 0x50, 0x63, 0xFF}}},
	{{{-109, 206, 109}, 0, {80, 619}, {0xBA, 0x50, 0x46, 0xFF}}},
	{{{-73, 206, 73}, 0, {90, 405}, {0x35, 0x66, 0xCB, 0xFF}}},
	{{{-155, 206, 0}, 0, {-24, 523}, {0x9D, 0x50, 0x0, 0xFF}}},
	{{{-103, 206, 0}, 0, {22, 341}, {0x4C, 0x66, 0x0, 0xFF}}},
	{{{-109, 206, -109}, 0, {-48, 107}, {0xBA, 0x50, 0xBA, 0xFF}}},
	{{{-73, 206, -73}, 0, {6, 65}, {0x35, 0x66, 0x35, 0xFF}}},
	{{{0, 206, -155}, 0, {22, -383}, {0x0, 0x50, 0x9D, 0xFF}}},
	{{{0, 206, -103}, 0, {52, -263}, {0x0, 0x66, 0x4C, 0xFF}}},
	{{{109, 206, -109}, 0, {144, -661}, {0x46, 0x50, 0xBA, 0xFF}}},
	{{{73, 206, -73}, 0, {134, -447}, {0xCB, 0x66, 0x35, 0xFF}}},
};

Gfx warp_pipe_001_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(warp_pipe_001_displaylist_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSP1Triangle(1, 14, 15, 0),
	gsSP1Triangle(15, 2, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_mat_dokan_a_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pipe_dokan_a_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 252),
	gsSPSetLights1(warp_pipe_mat_dokan_a_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pipe_mat_dokan_b_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pipe_dokan_b_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 60),
	gsSPSetLights1(warp_pipe_mat_dokan_b_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_warp_pipe_mat_dokan_a_f3d),
	gsSPDisplayList(warp_pipe_000_displaylist_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_001_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_warp_pipe_mat_dokan_a_f3d),
	gsSPDisplayList(warp_pipe_001_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_warp_pipe_mat_dokan_b_f3d),
	gsSPDisplayList(warp_pipe_001_displaylist_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

