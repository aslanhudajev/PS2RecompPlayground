#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeGetAlpha
// Address: 0x2d03e0 - 0x2d03f0
void MBTreeGetAlpha_0x2d03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d03e0u;

    // 0x2d03e0: 0x90830053
    ctx->pc = 0x2d03e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 83)));
    // 0x2d03e4: 0x240200ff
    ctx->pc = 0x2d03e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d03e8: 0x3e00008
    ctx->pc = 0x2D03E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03ECu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D03F0u;
}
