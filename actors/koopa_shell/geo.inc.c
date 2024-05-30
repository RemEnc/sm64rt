#include "src/game/envfx_snow.h"

const GeoLayout koopa_shell_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 65536),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_000_displaylist_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout koopa_shell2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 65536),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_000_displaylist_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout koopa_shell3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 65536),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_000_displaylist_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, koopa_shell_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
