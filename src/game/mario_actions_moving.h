#ifndef MARIO_ACTIONS_MOVING
#define MARIO_ACTIONS_MOVING

#include <PR/ultratypes.h>

#include "types.h"

void play_step_sound(struct MarioState *m, s16 frame1, s16 frame2);
s32 mario_execute_moving_action(struct MarioState *m);
s32 apply_landing_accel(struct MarioState *m, f32 frictionFactor);
s32 apply_slope_decel(struct MarioState *m, f32 decelCoef);
s32 should_begin_sliding(struct MarioState *m);

#endif // MARIO_ACTIONS_MOVING
