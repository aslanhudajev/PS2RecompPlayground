#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalFix
// Address: 0x2b4890 - 0x2b48c4
void evalFix_0x2b4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4890u;

    // 0x2b4890: 0x44841000
    ctx->pc = 0x2b4890u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x2b4894: 0x468010a0
    ctx->pc = 0x2b4894u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2b4898: 0x24020001
    ctx->pc = 0x2b4898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b489c: 0xa21004
    ctx->pc = 0x2b489cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2b48a0: 0x44820800
    ctx->pc = 0x2b48a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2b48a4: 0x46800860
    ctx->pc = 0x2b48a4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2b48a8: 0x3c013f80
    ctx->pc = 0x2b48a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2b48ac: 0x44810000
    ctx->pc = 0x2b48acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2b48b0: 0x0
    ctx->pc = 0x2b48b0u;
    // NOP
    // 0x2b48b4: 0x0
    ctx->pc = 0x2b48b4u;
    // NOP
    // 0x2b48b8: 0x46010003
    ctx->pc = 0x2b48b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b48bc: 0x3e00008
    ctx->pc = 0x2B48BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B48C0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B48C4u;
}
