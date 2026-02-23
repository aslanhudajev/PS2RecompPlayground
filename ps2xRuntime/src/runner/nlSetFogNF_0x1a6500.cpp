#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetFogNF
// Address: 0x1a6500 - 0x1a653c
void nlSetFogNF_0x1a6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetFogNF");


    ctx->pc = 0x1a6500u;

    // 0x1a6500: 0x460d6032
    ctx->pc = 0x1a6500u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6504: 0x0
    ctx->pc = 0x1a6504u;
    // NOP
    // 0x1a6508: 0x45000004
    ctx->pc = 0x1A6508u;
    {
        const bool branch_taken_0x1a6508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A650Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        if (branch_taken_0x1a6508) {
            ctx->pc = 0x1A651Cu;
            goto label_1a651c;
        }
    }
    ctx->pc = 0x1A6510u;
    // 0x1a6510: 0x44806800
    ctx->pc = 0x1a6510u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1a6514: 0x10000007
    ctx->pc = 0x1A6514u;
    {
        const bool branch_taken_0x1a6514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6518u;
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1a6514) {
            ctx->pc = 0x1A6534u;
            goto label_1a6534;
        }
    }
    ctx->pc = 0x1A651Cu;
label_1a651c:
    // 0x1a651c: 0x3c023f80
    ctx->pc = 0x1a651cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a6520: 0x44820000
    ctx->pc = 0x1a6520u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a6524: 0x0
    ctx->pc = 0x1a6524u;
    // NOP
    // 0x1a6528: 0x46010043
    ctx->pc = 0x1a6528u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1a652c: 0x46016002
    ctx->pc = 0x1a652cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1a6530: 0x46000347
    ctx->pc = 0x1a6530u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_1a6534:
    // 0x1a6534: 0x8069960
    ctx->pc = 0x1A6534u;
    ctx->pc = 0x1A6538u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x1A6580u;
    nlSetFog_0x1a6580(rdram, ctx, runtime); return;
    ctx->pc = 0x1A653Cu;
}
