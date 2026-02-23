#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B0834
// Address: 0x1b0834 - 0x1b084c
void sub_001B0834_0x1b0834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B0834");


    ctx->pc = 0x1b0834u;

    // 0x1b0834: 0x4bff033c
    ctx->pc = 0x1b0834u;
    ctx->vu0_vf[31] = ctx->vu0_vf[0];
    // 0x1b0838: 0x4bfefb3d
    ctx->pc = 0x1b0838u;
    ctx->vu0_vf[30] = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,1));
    // 0x1b083c: 0x4bfdf33d
    ctx->pc = 0x1b083cu;
    ctx->vu0_vf[29] = _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0840: 0x4bfceb3d
    ctx->pc = 0x1b0840u;
    ctx->vu0_vf[28] = _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0844: 0x3e00008
    ctx->pc = 0x1B0844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B084Cu;
}
