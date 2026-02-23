#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCalcSetLayerFogNF
// Address: 0x1a6540 - 0x1a657c
void nlCalcSetLayerFogNF_0x1a6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCalcSetLayerFogNF");


    ctx->pc = 0x1a6540u;

    // 0x1a6540: 0x460d6032
    ctx->pc = 0x1a6540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6544: 0x0
    ctx->pc = 0x1a6544u;
    // NOP
    // 0x1a6548: 0x45000004
    ctx->pc = 0x1A6548u;
    {
        const bool branch_taken_0x1a6548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A654Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        if (branch_taken_0x1a6548) {
            ctx->pc = 0x1A655Cu;
            goto label_1a655c;
        }
    }
    ctx->pc = 0x1A6550u;
    // 0x1a6550: 0x44806800
    ctx->pc = 0x1a6550u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1a6554: 0x10000007
    ctx->pc = 0x1A6554u;
    {
        const bool branch_taken_0x1a6554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6558u;
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1a6554) {
            ctx->pc = 0x1A6574u;
            goto label_1a6574;
        }
    }
    ctx->pc = 0x1A655Cu;
label_1a655c:
    // 0x1a655c: 0x3c023f80
    ctx->pc = 0x1a655cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a6560: 0x44820000
    ctx->pc = 0x1a6560u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a6564: 0x0
    ctx->pc = 0x1a6564u;
    // NOP
    // 0x1a6568: 0x46010043
    ctx->pc = 0x1a6568u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1a656c: 0x46016002
    ctx->pc = 0x1a656cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1a6570: 0x46000347
    ctx->pc = 0x1a6570u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_1a6574:
    // 0x1a6574: 0x8069968
    ctx->pc = 0x1A6574u;
    ctx->pc = 0x1A6578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x1A65A0u;
    nlCalcSetLayerFog_0x1a65a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A657Cu;
}
