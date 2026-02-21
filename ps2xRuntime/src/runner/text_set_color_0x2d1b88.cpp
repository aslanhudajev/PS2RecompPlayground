#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: text_set_color
// Address: 0x2d1b88 - 0x2d1ba4
void text_set_color_0x2d1b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1b88u;

    // 0x2d1b88: 0x3c06003d
    ctx->pc = 0x2d1b88u;
    SET_GPR_U32(ctx, 6, ((uint32_t)61 << 16));
    // 0x2d1b8c: 0x8cc2224c
    ctx->pc = 0x2d1b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8780)));
    // 0x2d1b90: 0x3c0500ff
    ctx->pc = 0x2d1b90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    // 0x2d1b94: 0x41827
    ctx->pc = 0x2d1b94u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2d1b98: 0xa3200a
    ctx->pc = 0x2d1b98u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x2d1b9c: 0x3e00008
    ctx->pc = 0x2D1B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1BA0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8780), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1BA4u;
}
