#include "src/game/envfx_snow.h"

const GeoLayout chain_chomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, chain_chomp_skl_root_mesh_layer_4),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, chain_chomp_jaw_lower1_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, chain_chomp_jaw_lower1_mesh_layer_4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, chain_chomp_jaw_upper1_skinned_mesh_layer_4),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, chain_chomp_jaw_upper1_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, chain_chomp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
