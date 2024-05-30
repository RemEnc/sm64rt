Lights1 bobomb_mat_bombhei_f3d_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Lights1 bobomb_mat_bombhei_bill_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Gfx bobomb_bombhei_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bobomb_bombhei_rgba16[] = {
	#include "actors/bobomb/bombhei.rgba16.inc.c"
};

Vtx bobomb_skl_root_mesh_layer_4_vtx_0[34] = {
	{{{0, 58, -6}, 0, {1168, 304}, {0x0, 0x76, 0xD0, 0xFF}}},
	{{{13, 56, -11}, 0, {1104, 240}, {0x0, 0x76, 0xD0, 0xFF}}},
	{{{-13, 56, -11}, 0, {1104, 400}, {0x0, 0x76, 0xD0, 0xFF}}},
	{{{-19, 51, -23}, 0, {1008, 400}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-13, 56, -11}, 0, {1104, 400}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{13, 56, -11}, 0, {1104, 240}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{19, 51, -23}, 0, {1008, 240}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-13, 46, -35}, 0, {912, 400}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{13, 46, -35}, 0, {912, 240}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{0, 44, -40}, 0, {848, 304}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-13, 56, -11}, 0, {752, 176}, {0xBA, 0x64, 0x22, 0xFF}}},
	{{{0, 44, 0}, 0, {1006, 464}, {0x0, 0x2F, 0x76, 0xFF}}},
	{{{0, 58, -6}, 0, {1006, 176}, {0x0, 0x70, 0x3D, 0xFF}}},
	{{{-13, 42, -5}, 0, {752, 464}, {0xA6, 0x20, 0x54, 0xFF}}},
	{{{-19, 51, -23}, 0, {528, 176}, {0x9D, 0x49, 0xE2, 0xFF}}},
	{{{-18, 37, -17}, 0, {528, 464}, {0x81, 0xFF, 0x0, 0xFF}}},
	{{{-13, 46, -35}, 0, {752, 176}, {0xBA, 0x2E, 0xA1, 0xFF}}},
	{{{-18, 37, -17}, 0, {528, 464}, {0x81, 0xFF, 0x0, 0xFF}}},
	{{{-19, 51, -23}, 0, {528, 176}, {0x9D, 0x49, 0xE2, 0xFF}}},
	{{{-13, 32, -29}, 0, {752, 464}, {0xA6, 0xDC, 0xAE, 0xFF}}},
	{{{0, 44, -40}, 0, {1006, 176}, {0x0, 0x23, 0x86, 0xFF}}},
	{{{0, 30, -34}, 0, {1006, 464}, {0x0, 0xCE, 0x8B, 0xFF}}},
	{{{13, 46, -35}, 0, {1264, 176}, {0x46, 0x2E, 0xA1, 0xFF}}},
	{{{13, 32, -29}, 0, {1264, 464}, {0x5B, 0xDB, 0xAF, 0xFF}}},
	{{{19, 51, -23}, 0, {1488, 176}, {0x65, 0x48, 0xE3, 0xFF}}},
	{{{18, 37, -17}, 0, {1488, 464}, {0x7F, 0xFC, 0x3, 0xFF}}},
	{{{13, 56, -11}, 0, {1264, 176}, {0x47, 0x64, 0x22, 0xFF}}},
	{{{13, 42, -5}, 0, {1264, 464}, {0x5C, 0x20, 0x52, 0xFF}}},
	{{{0, 58, -6}, 0, {1006, 176}, {0x0, 0x70, 0x3D, 0xFF}}},
	{{{0, 44, 0}, 0, {1006, 464}, {0x0, 0x2F, 0x76, 0xFF}}},
	{{{-4, 59, -31}, 0, {1008, 304}, {0x8B, 0xD6, 0xE6, 0xFF}}},
	{{{4, 59, -31}, 0, {1008, 304}, {0x75, 0xD6, 0xE6, 0xFF}}},
	{{{0, 38, -15}, 0, {1008, 304}, {0x0, 0x95, 0x44, 0xFF}}},
	{{{0, 63, -27}, 0, {1008, 304}, {0x0, 0x34, 0x74, 0xFF}}},
};

Gfx bobomb_skl_root_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_skl_root_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(7, 3, 6, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 10, 13, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(bobomb_skl_root_mesh_layer_4_vtx_0 + 16, 14, 0),
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
	gsSPVertex(bobomb_skl_root_mesh_layer_4_vtx_0 + 30, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_skl_root_mesh_layer_4_vtx_1[12] = {
	{{{-5, 24, 37}, 0, {1232, 1552}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-16, 24, 35}, 0, {784, 1552}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-6, -1, 43}, 0, {1232, 2512}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-18, -1, 40}, 0, {784, 2512}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{-6, -1, 43}, 0, {1232, 2512}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{-16, 24, 35}, 0, {784, 1552}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{18, -1, 40}, 0, {784, 2512}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{16, 24, 35}, 0, {784, 1552}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{6, -1, 43}, 0, {1232, 2512}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{5, 24, 37}, 0, {1232, 1552}, {0x1A, 0x1C, 0x79, 0xFF}}},
	{{{6, -1, 43}, 0, {1232, 2512}, {0x1A, 0x1C, 0x79, 0xFF}}},
	{{{16, 24, 35}, 0, {784, 1552}, {0x1A, 0x1C, 0x79, 0xFF}}},
};

Gfx bobomb_skl_root_mesh_layer_4_tri_1[] = {
	gsSPVertex(bobomb_skl_root_mesh_layer_4_vtx_1 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_body_bill_mesh_layer_4_vtx_0[4] = {
	{{{0, 63, 0}, 0, {-752, 528}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-61, 1, 0}, 0, {720, 528}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -60, 0}, 0, {720, 2000}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{61, 1, 0}, 0, {-752, 2000}, {0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx bobomb_body_bill_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_body_bill_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_l1_skinned_mesh_layer_4_vtx_0[1] = {
	{{{18, -18, 0}, 0, {1040, 1392}, {0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bobomb_foot_l1_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_foot_l1_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_l1_mesh_layer_4_vtx_0[3] = {
	{{{0, -46, -8}, 0, {816, 1488}, {0xFB, 0x56, 0xA3, 0xFF}}},
	{{{5, -45, 4}, 0, {784, 1392}, {0x5D, 0x55, 0x11, 0xFF}}},
	{{{-5, -47, 4}, 0, {816, 1296}, {0x9D, 0x4F, 0x9, 0xFF}}},
};

Gfx bobomb_foot_l1_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_foot_l1_mesh_layer_4_vtx_0 + 0, 3, 1),
	gsSP1Triangle(1, 0, 2, 0),
	gsSP1Triangle(0, 1, 3, 0),
	gsSP1Triangle(3, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_l1_mesh_layer_4_vtx_1[24] = {
	{{{0, -53, -15}, 0, {1008, 1232}, {0xFC, 0x40, 0x92, 0xFF}}},
	{{{0, -46, -8}, 0, {1008, 1200}, {0xFB, 0x56, 0xA3, 0xFF}}},
	{{{11, -62, -8}, 0, {784, 1200}, {0x65, 0xC6, 0xCE, 0xFF}}},
	{{{-10, -62, -8}, 0, {1232, 1200}, {0x9B, 0xC3, 0xD1, 0xFF}}},
	{{{-5, -47, 4}, 0, {1136, 1104}, {0x9D, 0x4F, 0x9, 0xFF}}},
	{{{-12, -59, 21}, 0, {1232, 656}, {0x86, 0xF1, 0x20, 0xFF}}},
	{{{-7, -50, 23}, 0, {1136, 720}, {0xC0, 0x60, 0x35, 0xFF}}},
	{{{0, -58, 32}, 0, {1008, 528}, {0x0, 0xF, 0x7E, 0xFF}}},
	{{{7, -50, 23}, 0, {880, 720}, {0x3E, 0x60, 0x38, 0xFF}}},
	{{{12, -59, 21}, 0, {784, 656}, {0x79, 0xF1, 0x23, 0xFF}}},
	{{{5, -45, 4}, 0, {880, 1104}, {0x5D, 0x55, 0x11, 0xFF}}},
	{{{0, -53, -15}, 0, {816, 1200}, {0xFC, 0x40, 0x92, 0xFF}}},
	{{{0, -62, -16}, 0, {816, 1200}, {0xFC, 0xB8, 0x97, 0xFF}}},
	{{{-10, -62, -8}, 0, {816, 1200}, {0x9B, 0xC3, 0xD1, 0xFF}}},
	{{{11, -62, -8}, 0, {816, 1200}, {0x65, 0xC6, 0xCE, 0xFF}}},
	{{{8, -62, 28}, 0, {816, 1200}, {0x4A, 0xC2, 0x53, 0xFF}}},
	{{{8, -62, 28}, 0, {816, 1200}, {0x4A, 0xC2, 0x53, 0xFF}}},
	{{{11, -62, -8}, 0, {816, 1200}, {0x65, 0xC6, 0xCE, 0xFF}}},
	{{{12, -59, 21}, 0, {816, 1200}, {0x79, 0xF1, 0x23, 0xFF}}},
	{{{0, -58, 32}, 0, {816, 1200}, {0x0, 0xF, 0x7E, 0xFF}}},
	{{{-8, -62, 28}, 0, {816, 1200}, {0xB6, 0xC2, 0x52, 0xFF}}},
	{{{-12, -59, 21}, 0, {816, 1200}, {0x86, 0xF1, 0x20, 0xFF}}},
	{{{-10, -62, -8}, 0, {816, 1200}, {0x9B, 0xC3, 0xD1, 0xFF}}},
	{{{0, -62, -16}, 0, {816, 1200}, {0xFC, 0xB8, 0x97, 0xFF}}},
};

Gfx bobomb_foot_l1_mesh_layer_4_tri_1[] = {
	gsSPVertex(bobomb_foot_l1_mesh_layer_4_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(2, 10, 9, 0),
	gsSP1Triangle(10, 2, 1, 0),
	gsSP1Triangle(8, 10, 6, 0),
	gsSP1Triangle(4, 6, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 11, 14, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(bobomb_foot_l1_mesh_layer_4_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 0, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_r1_skinned_mesh_layer_4_vtx_0[1] = {
	{{{-18, -18, 0}, 0, {1040, 1392}, {0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx bobomb_foot_r1_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_foot_r1_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_r1_mesh_layer_4_vtx_0[3] = {
	{{{0, -46, -8}, 0, {816, 1488}, {0x5, 0x56, 0xA3, 0xFF}}},
	{{{5, -47, 4}, 0, {816, 1296}, {0x63, 0x4F, 0x9, 0xFF}}},
	{{{-5, -45, 4}, 0, {784, 1392}, {0xA3, 0x55, 0x11, 0xFF}}},
};

Gfx bobomb_foot_r1_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_foot_r1_mesh_layer_4_vtx_0 + 0, 3, 1),
	gsSP1Triangle(1, 0, 2, 0),
	gsSP1Triangle(0, 1, 3, 0),
	gsSP1Triangle(3, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_foot_r1_mesh_layer_4_vtx_1[24] = {
	{{{0, -53, -15}, 0, {1008, 1232}, {0x4, 0x40, 0x92, 0xFF}}},
	{{{0, -46, -8}, 0, {1008, 1200}, {0x5, 0x56, 0xA3, 0xFF}}},
	{{{10, -62, -8}, 0, {1232, 1200}, {0x65, 0xC3, 0xD1, 0xFF}}},
	{{{-11, -62, -8}, 0, {784, 1200}, {0x9B, 0xC6, 0xCE, 0xFF}}},
	{{{-5, -45, 4}, 0, {880, 1104}, {0xA3, 0x55, 0x11, 0xFF}}},
	{{{-12, -59, 21}, 0, {784, 656}, {0x87, 0xF1, 0x23, 0xFF}}},
	{{{-7, -50, 23}, 0, {880, 720}, {0xC2, 0x60, 0x38, 0xFF}}},
	{{{0, -58, 32}, 0, {1008, 528}, {0x0, 0xF, 0x7E, 0xFF}}},
	{{{7, -50, 23}, 0, {1136, 720}, {0x40, 0x60, 0x35, 0xFF}}},
	{{{12, -59, 21}, 0, {1232, 656}, {0x7A, 0xF1, 0x20, 0xFF}}},
	{{{5, -47, 4}, 0, {1136, 1104}, {0x63, 0x4F, 0x9, 0xFF}}},
	{{{0, -53, -15}, 0, {816, 1200}, {0x4, 0x40, 0x92, 0xFF}}},
	{{{10, -62, -8}, 0, {816, 1200}, {0x65, 0xC3, 0xD1, 0xFF}}},
	{{{0, -62, -16}, 0, {816, 1200}, {0x4, 0xB8, 0x97, 0xFF}}},
	{{{8, -62, 28}, 0, {816, 1200}, {0x4A, 0xC2, 0x52, 0xFF}}},
	{{{12, -59, 21}, 0, {816, 1200}, {0x7A, 0xF1, 0x20, 0xFF}}},
	{{{0, -58, 32}, 0, {816, 1200}, {0x0, 0xF, 0x7E, 0xFF}}},
	{{{8, -62, 28}, 0, {816, 1200}, {0x4A, 0xC2, 0x52, 0xFF}}},
	{{{12, -59, 21}, 0, {816, 1200}, {0x7A, 0xF1, 0x20, 0xFF}}},
	{{{-8, -62, 28}, 0, {816, 1200}, {0xB6, 0xC2, 0x53, 0xFF}}},
	{{{-12, -59, 21}, 0, {816, 1200}, {0x87, 0xF1, 0x23, 0xFF}}},
	{{{-11, -62, -8}, 0, {816, 1200}, {0x9B, 0xC6, 0xCE, 0xFF}}},
	{{{0, -62, -16}, 0, {816, 1200}, {0x4, 0xB8, 0x97, 0xFF}}},
	{{{0, -53, -15}, 0, {816, 1200}, {0x4, 0x40, 0x92, 0xFF}}},
};

Gfx bobomb_foot_r1_mesh_layer_4_tri_1[] = {
	gsSPVertex(bobomb_foot_r1_mesh_layer_4_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(2, 10, 9, 0),
	gsSP1Triangle(10, 2, 1, 0),
	gsSP1Triangle(10, 4, 8, 0),
	gsSP1Triangle(6, 8, 4, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(bobomb_foot_r1_mesh_layer_4_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(6, 1, 3, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_spring_mesh_layer_4_vtx_0[13] = {
	{{{0, 0, -79}, 0, {2512, 464}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 0, -47}, 0, {1552, 464}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 32, -79}, 0, {2512, -496}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 32, -47}, 0, {1552, -496}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 0, -79}, 0, {2512, -496}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -31, -79}, 0, {2512, 464}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 0, -47}, 0, {1552, -496}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, -31, -47}, 0, {1552, 464}, {0x81, 0x0, 0x0, 0xFF}}},
	{{{0, 6, -82}, 0, {528, -144}, {0x0, 0x7F, 0x9, 0xFF}}},
	{{{-6, 0, -82}, 0, {528, -16}, {0x81, 0x0, 0x9, 0xFF}}},
	{{{0, 0, 0}, 0, {1136, -16}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -6, -82}, 0, {528, 112}, {0x0, 0x81, 0x9, 0xFF}}},
	{{{6, 0, -82}, 0, {528, -16}, {0x7F, 0x0, 0x9, 0xFF}}},
};

Gfx bobomb_spring_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_spring_mesh_layer_4_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bobomb_mat_bombhei_f3d_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bobomb_bombhei_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(bobomb_mat_bombhei_f3d_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bobomb_mat_bombhei_f3d_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_bobomb_mat_bombhei_bill[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bobomb_bombhei_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(bobomb_mat_bombhei_bill_lights),
	gsSPEndDisplayList(),
};

Gfx bobomb_skl_root_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_skl_root_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(mat_bobomb_mat_bombhei_bill),
	gsSPDisplayList(bobomb_skl_root_mesh_layer_4_tri_1),
	gsSPEndDisplayList(),
};

Gfx bobomb_body_bill_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_bill),
	gsSPDisplayList(bobomb_body_bill_mesh_layer_4_tri_0),
	gsSPEndDisplayList(),
};

Gfx bobomb_foot_l1_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_foot_l1_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPEndDisplayList(),
};

Gfx bobomb_foot_l1_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_foot_l1_mesh_layer_4_tri_0),
	gsSPDisplayList(bobomb_foot_l1_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPEndDisplayList(),
};

Gfx bobomb_foot_r1_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_foot_r1_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPEndDisplayList(),
};

Gfx bobomb_foot_r1_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_foot_r1_mesh_layer_4_tri_0),
	gsSPDisplayList(bobomb_foot_r1_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPEndDisplayList(),
};

Gfx bobomb_spring_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_mat_bombhei_f3d_001),
	gsSPDisplayList(bobomb_spring_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_bobomb_mat_bombhei_f3d_001),
	gsSPEndDisplayList(),
};

Gfx bobomb_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Lights1 bobomb_buddy_mat_bombhei_buddy_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Lights1 bobomb_buddy_mat_bombhei_bill_buddy_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF,0xFF,0xFF,0x28,0x28,0x28);

Gfx bobomb_buddy_red_bombhei_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bobomb_buddy_red_bombhei_rgba16[] = {
	#include "actors/bobomb/red_bombhei.rgba16.inc.c"
};

Vtx bobomb_buddy_skl_root_mesh_layer_4_vtx_0[32] = {
	{{{0, 33, -36}, 0, {848, 298}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-12, 35, -31}, 0, {912, 394}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{12, 35, -31}, 0, {912, 234}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{17, 40, -20}, 0, {1008, 234}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-17, 40, -20}, 0, {1008, 394}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{12, 44, -9}, 0, {1104, 234}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{-12, 44, -9}, 0, {1104, 394}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{0, 46, -5}, 0, {1168, 298}, {0x0, 0x75, 0xCF, 0xFF}}},
	{{{12, 35, -31}, 0, {1264, 170}, {0x46, 0x2E, 0xA1, 0xFF}}},
	{{{0, 20, -30}, 0, {1006, 458}, {0x0, 0xCE, 0x8B, 0xFF}}},
	{{{0, 33, -36}, 0, {1006, 170}, {0x0, 0x23, 0x86, 0xFF}}},
	{{{12, 22, -26}, 0, {1264, 458}, {0x5B, 0xDB, 0xAF, 0xFF}}},
	{{{17, 40, -20}, 0, {1488, 170}, {0x65, 0x48, 0xE3, 0xFF}}},
	{{{16, 27, -15}, 0, {1488, 458}, {0x7F, 0xFC, 0x3, 0xFF}}},
	{{{12, 44, -9}, 0, {1264, 170}, {0x47, 0x64, 0x22, 0xFF}}},
	{{{12, 31, -4}, 0, {1264, 458}, {0x5C, 0x20, 0x52, 0xFF}}},
	{{{0, 46, -5}, 0, {1006, 170}, {0x0, 0x70, 0x3D, 0xFF}}},
	{{{12, 31, -4}, 0, {1264, 458}, {0x5C, 0x20, 0x52, 0xFF}}},
	{{{12, 44, -9}, 0, {1264, 170}, {0x47, 0x64, 0x22, 0xFF}}},
	{{{0, 33, 0}, 0, {1006, 458}, {0x0, 0x2E, 0x76, 0xFF}}},
	{{{-12, 44, -9}, 0, {752, 170}, {0xBA, 0x64, 0x22, 0xFF}}},
	{{{-12, 31, -4}, 0, {752, 458}, {0xA6, 0x20, 0x54, 0xFF}}},
	{{{-17, 40, -20}, 0, {528, 170}, {0x9D, 0x49, 0xE2, 0xFF}}},
	{{{-16, 27, -15}, 0, {528, 458}, {0x81, 0xFF, 0x0, 0xFF}}},
	{{{-12, 35, -31}, 0, {752, 170}, {0xBA, 0x2E, 0xA1, 0xFF}}},
	{{{-12, 22, -26}, 0, {752, 458}, {0xA6, 0xDC, 0xAE, 0xFF}}},
	{{{0, 33, -36}, 0, {1006, 170}, {0x0, 0x23, 0x86, 0xFF}}},
	{{{0, 20, -30}, 0, {1006, 458}, {0x0, 0xCE, 0x8B, 0xFF}}},
	{{{-4, 47, -28}, 0, {1008, 298}, {0x8B, 0xD6, 0xE6, 0xFF}}},
	{{{4, 47, -28}, 0, {1008, 298}, {0x75, 0xD6, 0xE6, 0xFF}}},
	{{{0, 28, -14}, 0, {1008, 298}, {0x0, 0x95, 0x44, 0xFF}}},
	{{{0, 51, -24}, 0, {1008, 298}, {0x0, 0x34, 0x74, 0xFF}}},
};

Gfx bobomb_buddy_skl_root_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_buddy_skl_root_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(bobomb_buddy_skl_root_mesh_layer_4_vtx_0 + 16, 16, 0),
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
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_buddy_skl_root_mesh_layer_4_vtx_1[12] = {
	{{{-4, 15, 33}, 0, {1232, 1546}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-15, 15, 31}, 0, {784, 1546}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-5, -7, 38}, 0, {1232, 2506}, {0xE6, 0x1C, 0x79, 0xFF}}},
	{{{-16, -7, 36}, 0, {784, 2506}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{-5, -7, 38}, 0, {1232, 2506}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{-15, 15, 31}, 0, {784, 1546}, {0xE3, 0x1B, 0x79, 0xFF}}},
	{{{16, -7, 36}, 0, {784, 2506}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{15, 15, 31}, 0, {784, 1546}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{5, -7, 38}, 0, {1232, 2506}, {0x1D, 0x1B, 0x79, 0xFF}}},
	{{{4, 15, 33}, 0, {1232, 1546}, {0x1A, 0x1C, 0x79, 0xFF}}},
	{{{5, -7, 38}, 0, {1232, 2506}, {0x1A, 0x1C, 0x79, 0xFF}}},
	{{{15, 15, 31}, 0, {784, 1546}, {0x1A, 0x1C, 0x79, 0xFF}}},
};

Gfx bobomb_buddy_skl_root_mesh_layer_4_tri_1[] = {
	gsSPVertex(bobomb_buddy_skl_root_mesh_layer_4_vtx_1 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_buddy_body_bill_mesh_layer_4_vtx_0[4] = {
	{{{0, 50, 0}, 0, {-752, 522}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{-55, -5, 0}, 0, {720, 522}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -60, 0}, 0, {720, 1994}, {0x0, 0x0, 0x7F, 0xFF}}},
	{{{55, -5, 0}, 0, {-752, 1994}, {0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx bobomb_buddy_body_bill_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_buddy_body_bill_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_buddy_foot_l1_mesh_layer_4_vtx_0[31] = {
	{{{-15, -62, 18}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-12, -62, -8}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-10, -62, 28}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-2, -62, -17}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-2, -62, 31}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{7, -62, 27}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{8, -62, -8}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{11, -62, 17}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-12, -62, -8}, 0, {1082, 746}, {0x9A, 0xC6, 0xCF, 0xFF}}},
	{{{-15, -62, 18}, 0, {878, 746}, {0x91, 0xC6, 0x15, 0xFF}}},
	{{{-7, -47, 5}, 0, {1012, 526}, {0xA0, 0x51, 0xE, 0xFF}}},
	{{{-7, -50, 20}, 0, {912, 548}, {0xCB, 0x65, 0x39, 0xFF}}},
	{{{-10, -62, 28}, 0, {826, 746}, {0xB9, 0xCF, 0x5E, 0xFF}}},
	{{{-2, -62, 31}, 0, {842, 746}, {0x6, 0xD0, 0x76, 0xFF}}},
	{{{3, -50, 19}, 0, {962, 546}, {0x37, 0x64, 0x39, 0xFF}}},
	{{{7, -62, 27}, 0, {910, 746}, {0x4E, 0xCD, 0x56, 0xFF}}},
	{{{7, -62, 27}, 0, {910, 746}, {0x4E, 0xCD, 0x56, 0xFF}}},
	{{{11, -62, 17}, 0, {1020, 746}, {0x6E, 0xC4, 0x14, 0xFF}}},
	{{{3, -50, 19}, 0, {962, 546}, {0x37, 0x64, 0x39, 0xFF}}},
	{{{4, -46, 5}, 0, {1072, 522}, {0x60, 0x51, 0x12, 0xFF}}},
	{{{8, -62, -8}, 0, {1178, 746}, {0x65, 0xC4, 0xD0, 0xFF}}},
	{{{-1, -53, -15}, 0, {1182, 590}, {0x1, 0x47, 0x97, 0xFF}}},
	{{{-2, -62, -17}, 0, {1194, 746}, {0x0, 0xBF, 0x93, 0xFF}}},
	{{{-12, -62, -8}, 0, {1082, 746}, {0x9A, 0xC6, 0xCF, 0xFF}}},
	{{{-7, -47, 5}, 0, {1012, 526}, {0xA0, 0x51, 0xE, 0xFF}}},
	{{{-2, -47, -9}, 0, {1136, 522}, {0xF9, 0x51, 0x9E, 0xFF}}},
	{{{-7, -50, 20}, 0, {912, 548}, {0xCB, 0x65, 0x39, 0xFF}}},
	{{{-7, -47, 5}, 0, {912, 778}, {0xA0, 0x51, 0xE, 0xFF}}},
	{{{4, -46, 5}, 0, {848, 778}, {0x60, 0x51, 0x12, 0xFF}}},
	{{{-2, -22, 0}, 0, {848, 1610}, {0x0, 0x7F, 0xFF, 0xFF}}},
	{{{-2, -47, -9}, 0, {784, 778}, {0xF9, 0x51, 0x9E, 0xFF}}},
};

Gfx bobomb_buddy_foot_l1_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_buddy_foot_l1_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(bobomb_buddy_foot_l1_mesh_layer_4_vtx_0 + 16, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(3, 5, 9, 0),
	gsSP1Triangle(2, 3, 10, 0),
	gsSP1Triangle(8, 10, 3, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSPEndDisplayList(),
};

Vtx bobomb_buddy_foot_r1_mesh_layer_4_vtx_0[31] = {
	{{{-11, -62, 17}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-8, -62, -8}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-7, -62, 27}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{2, -62, -17}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{2, -62, 31}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{10, -62, 28}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{12, -62, -8}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{15, -62, 18}, 0, {1200, 714}, {0x0, 0x81, 0x0, 0xFF}}},
	{{{-8, -62, -8}, 0, {1178, 746}, {0x9B, 0xC4, 0xD0, 0xFF}}},
	{{{-11, -62, 17}, 0, {1020, 746}, {0x92, 0xC4, 0x14, 0xFF}}},
	{{{-4, -46, 5}, 0, {1072, 522}, {0xA0, 0x51, 0x12, 0xFF}}},
	{{{-3, -50, 19}, 0, {962, 546}, {0xC9, 0x64, 0x39, 0xFF}}},
	{{{-7, -62, 27}, 0, {910, 746}, {0xB2, 0xCD, 0x56, 0xFF}}},
	{{{2, -62, 31}, 0, {842, 746}, {0xFA, 0xD0, 0x76, 0xFF}}},
	{{{7, -50, 20}, 0, {912, 548}, {0x35, 0x65, 0x39, 0xFF}}},
	{{{10, -62, 28}, 0, {826, 746}, {0x47, 0xCF, 0x5E, 0xFF}}},
	{{{10, -62, 28}, 0, {826, 746}, {0x47, 0xCF, 0x5E, 0xFF}}},
	{{{15, -62, 18}, 0, {878, 746}, {0x6F, 0xC6, 0x15, 0xFF}}},
	{{{7, -50, 20}, 0, {912, 548}, {0x35, 0x65, 0x39, 0xFF}}},
	{{{7, -47, 5}, 0, {1012, 526}, {0x60, 0x51, 0xE, 0xFF}}},
	{{{12, -62, -8}, 0, {1082, 746}, {0x66, 0xC6, 0xCF, 0xFF}}},
	{{{1, -53, -15}, 0, {1182, 590}, {0xFF, 0x47, 0x97, 0xFF}}},
	{{{2, -62, -17}, 0, {1194, 746}, {0x0, 0xBF, 0x93, 0xFF}}},
	{{{-8, -62, -8}, 0, {1178, 746}, {0x9B, 0xC4, 0xD0, 0xFF}}},
	{{{-4, -46, 5}, 0, {1072, 522}, {0xA0, 0x51, 0x12, 0xFF}}},
	{{{2, -47, -9}, 0, {1136, 522}, {0x7, 0x51, 0x9E, 0xFF}}},
	{{{-3, -50, 19}, 0, {962, 546}, {0xC9, 0x64, 0x39, 0xFF}}},
	{{{-4, -46, 5}, 0, {848, 778}, {0xA0, 0x51, 0x12, 0xFF}}},
	{{{2, -22, 0}, 0, {848, 1610}, {0x0, 0x7F, 0xFF, 0xFF}}},
	{{{2, -47, -9}, 0, {784, 778}, {0x7, 0x51, 0x9E, 0xFF}}},
	{{{7, -47, 5}, 0, {912, 778}, {0x60, 0x51, 0xE, 0xFF}}},
};

Gfx bobomb_buddy_foot_r1_mesh_layer_4_tri_0[] = {
	gsSPVertex(bobomb_buddy_foot_r1_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(bobomb_buddy_foot_r1_mesh_layer_4_vtx_0 + 16, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(9, 3, 5, 0),
	gsSP1Triangle(8, 2, 3, 0),
	gsSP1Triangle(8, 10, 2, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 11, 14, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bobomb_buddy_mat_bombhei_buddy[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bobomb_buddy_red_bombhei_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(bobomb_buddy_mat_bombhei_buddy_lights),
	gsSPEndDisplayList(),
};

Gfx mat_bobomb_buddy_mat_bombhei_bill_buddy[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bobomb_buddy_red_bombhei_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(bobomb_buddy_mat_bombhei_bill_buddy_lights),
	gsSPEndDisplayList(),
};

Gfx bobomb_buddy_skl_root_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_buddy_mat_bombhei_buddy),
	gsSPDisplayList(bobomb_buddy_skl_root_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_bobomb_buddy_mat_bombhei_bill_buddy),
	gsSPDisplayList(bobomb_buddy_skl_root_mesh_layer_4_tri_1),
	gsSPEndDisplayList(),
};

Gfx bobomb_buddy_body_bill_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_buddy_mat_bombhei_bill_buddy),
	gsSPDisplayList(bobomb_buddy_body_bill_mesh_layer_4_tri_0),
	gsSPEndDisplayList(),
};

Gfx bobomb_buddy_foot_l1_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_buddy_mat_bombhei_buddy),
	gsSPDisplayList(bobomb_buddy_foot_l1_mesh_layer_4_tri_0),
	gsSPEndDisplayList(),
};

Gfx bobomb_buddy_foot_r1_mesh_layer_4[] = {
	gsSPDisplayList(mat_bobomb_buddy_mat_bombhei_buddy),
	gsSPDisplayList(bobomb_buddy_foot_r1_mesh_layer_4_tri_0),
	gsSPEndDisplayList(),
};

Gfx bobomb_buddy_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

