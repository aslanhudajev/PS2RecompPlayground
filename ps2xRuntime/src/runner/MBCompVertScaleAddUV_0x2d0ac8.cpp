#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCompVertScaleAddUV
// Address: 0x2d0ac8 - 0x2d0ad0
void MBCompVertScaleAddUV_0x2d0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0ac8u;

    // 0x2d0ac8: 0x3e00008
    ctx->pc = 0x2D0AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0AD0u;
}
