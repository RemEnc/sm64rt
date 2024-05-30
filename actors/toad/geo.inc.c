#include "src/game/envfx_snow.h"

const GeoLayout toad_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 26, 0, toad_skl_root_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_ALPHA, 8, -16, 0, toad_foot_l_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, -8, -16, 0, toad_foot_r_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, toad_hand_l_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 13, 14, -3, toad_hand_l_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, toad_hand_r_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, -13, 14, -3, toad_hand_r_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 17, 0, toad_head_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, toad_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
