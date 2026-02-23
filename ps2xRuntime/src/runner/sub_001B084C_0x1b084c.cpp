#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B084C
// Address: 0x1b084c - 0x1b08a4
void sub_001B084C_0x1b084c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B084C");


    ctx->pc = 0x1b084cu;

    // 0x1b084c: 0x27bdfff0
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0850: 0xfbbc0000
    ctx->pc = 0x1b0850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1b0854: 0x8fa8000c
    ctx->pc = 0x1b0854u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b0858: 0xfbbd0000
    ctx->pc = 0x1b0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1b085c: 0x8fa9000c
    ctx->pc = 0x1b085cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b0860: 0xfbbe0000
    ctx->pc = 0x1b0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1b0864: 0x8faa000c
    ctx->pc = 0x1b0864u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b0868: 0x4be1033c
    ctx->pc = 0x1b0868u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1b086c: 0x4be10b3d
    ctx->pc = 0x1b086cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0870: 0xfba10000
    ctx->pc = 0x1b0870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b0874: 0xafaa000c
    ctx->pc = 0x1b0874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x1b0878: 0xdbbe0000
    ctx->pc = 0x1b0878u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b087c: 0x4be10b3d
    ctx->pc = 0x1b087cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0880: 0xfba10000
    ctx->pc = 0x1b0880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b0884: 0xafa9000c
    ctx->pc = 0x1b0884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1b0888: 0xdbbd0000
    ctx->pc = 0x1b0888u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b088c: 0x4be10b3d
    ctx->pc = 0x1b088cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0890: 0xfba10000
    ctx->pc = 0x1b0890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b0894: 0xafa8000c
    ctx->pc = 0x1b0894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1b0898: 0xdbbc0000
    ctx->pc = 0x1b0898u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b089c: 0x3e00008
    ctx->pc = 0x1B089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B08A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B08A4u;
}
