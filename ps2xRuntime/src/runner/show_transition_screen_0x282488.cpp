#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_transition_screen
// Address: 0x282488 - 0x282490
void show_transition_screen_0x282488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282488u;

    // 0x282488: 0x8089a32
    ctx->pc = 0x282488u;
    ctx->pc = 0x28248Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2268C8u;
    TransitionBlitShow_0x2268c8(rdram, ctx, runtime); return;
    ctx->pc = 0x282490u;
}
