#include "src/game/envfx_snow.h"

const GeoLayout black_bobomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, -18, 0, bobomb_skl_root_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 0, 0, bobomb_body_bill_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 62, -30, NULL),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_foot_l1_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 18, 0, 0, bobomb_foot_l1_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_foot_r1_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, -18, 0, 0, bobomb_foot_r1_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bobomb_spring_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout bobomb_buddy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, -18, 0, bobomb_buddy_skl_root_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 0, 0, bobomb_buddy_body_bill_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 62, -30, NULL),
			GEO_ANIMATED_PART(LAYER_ALPHA, 18, 0, 0, bobomb_buddy_foot_l1_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, -18, 0, 0, bobomb_buddy_foot_r1_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_buddy_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
