#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ipuSetMPEG1
// Address: 0x122788 - 0x1227b0
void _ipuSetMPEG1_0x122788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122788u;

    // 0x122788: 0x3c051000
    ctx->pc = 0x122788u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x12278c: 0x3c03ff7f
    ctx->pc = 0x12278cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65407 << 16));
    // 0x122790: 0x34a52010
    ctx->pc = 0x122790u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x122794: 0x3463ffff
    ctx->pc = 0x122794u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x122798: 0x8ca20000
    ctx->pc = 0x122798u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x12279c: 0x425c0
    ctx->pc = 0x12279cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x1227a0: 0x431024
    ctx->pc = 0x1227a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1227a4: 0x441025
    ctx->pc = 0x1227a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1227a8: 0x3e00008
    ctx->pc = 0x1227A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1227ACu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1227B0u;
}
