#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlExp
// Address: 0x1a7b30 - 0x1a7c04
void nlExp_0x1a7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlExp");


    ctx->pc = 0x1a7b30u;

    // 0x1a7b30: 0x3c023f31
    ctx->pc = 0x1a7b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16177 << 16));
    // 0x1a7b34: 0x34427218
    ctx->pc = 0x1a7b34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29208));
    // 0x1a7b38: 0x44820800
    ctx->pc = 0x1a7b38u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a7b3c: 0x44800000
    ctx->pc = 0x1a7b3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7b40: 0x0
    ctx->pc = 0x1a7b40u;
    // NOP
    // 0x1a7b44: 0x46016043
    ctx->pc = 0x1a7b44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[1] = ctx->f[12] / ctx->f[1];
    // 0x1a7b48: 0x0
    ctx->pc = 0x1a7b48u;
    // NOP
    // 0x1a7b4c: 0x0
    ctx->pc = 0x1a7b4cu;
    // NOP
    // 0x1a7b50: 0x46006034
    ctx->pc = 0x1a7b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7b54: 0x0
    ctx->pc = 0x1a7b54u;
    // NOP
    // 0x1a7b58: 0x45010005
    ctx->pc = 0x1A7B58u;
    {
        const bool branch_taken_0x1a7b58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7B5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
        if (branch_taken_0x1a7b58) {
            ctx->pc = 0x1A7B70u;
            goto label_1a7b70;
        }
    }
    ctx->pc = 0x1A7B60u;
    // 0x1a7b60: 0x3c023f00
    ctx->pc = 0x1a7b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1a7b64: 0x44820000
    ctx->pc = 0x1a7b64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7b68: 0x10000003
    ctx->pc = 0x1A7B68u;
    {
        const bool branch_taken_0x1a7b68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7B6Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1a7b68) {
            ctx->pc = 0x1A7B78u;
            goto label_1a7b78;
        }
    }
    ctx->pc = 0x1A7B70u;
label_1a7b70:
    // 0x1a7b70: 0x44820000
    ctx->pc = 0x1a7b70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7b74: 0x46000800
    ctx->pc = 0x1a7b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a7b78:
    // 0x1a7b78: 0x3c023f31
    ctx->pc = 0x1a7b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16177 << 16));
    // 0x1a7b7c: 0x34437218
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 29208));
    // 0x1a7b80: 0x3c024160
    ctx->pc = 0x1a7b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16736 << 16));
    // 0x1a7b84: 0x46000064
    ctx->pc = 0x1a7b84u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a7b88: 0x2405000a
    ctx->pc = 0x1a7b88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a7b8c: 0x44040800
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x1a7b90: 0x44831000
    ctx->pc = 0x1a7b90u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1a7b94: 0x46800860
    ctx->pc = 0x1a7b94u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1a7b98: 0x46011042
    ctx->pc = 0x1a7b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a7b9c: 0x46016301
    ctx->pc = 0x1a7b9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1a7ba0: 0x460c6042
    ctx->pc = 0x1a7ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a7ba4: 0x44820000
    ctx->pc = 0x1a7ba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7ba8: 0x0
    ctx->pc = 0x1a7ba8u;
    // NOP
    // 0x1a7bac: 0x46000883
    ctx->pc = 0x1a7bacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1a7bb0:
    // 0x1a7bb0: 0x44850000
    ctx->pc = 0x1a7bb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1a7bb4: 0x0
    ctx->pc = 0x1a7bb4u;
    // NOP
    // 0x1a7bb8: 0x46800020
    ctx->pc = 0x1a7bb8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a7bbc: 0x24a5fffc
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1a7bc0: 0x46001000
    ctx->pc = 0x1a7bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a7bc4: 0x46000883
    ctx->pc = 0x1a7bc4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1a7bc8: 0x0
    ctx->pc = 0x1a7bc8u;
    // NOP
    // 0x1a7bcc: 0x0
    ctx->pc = 0x1a7bccu;
    // NOP
    // 0x1a7bd0: 0x28a10006
    ctx->pc = 0x1a7bd0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 6));
    // 0x1a7bd4: 0x1020fff6
    ctx->pc = 0x1A7BD4u;
    {
        const bool branch_taken_0x1a7bd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7BD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1a7bd4) {
            ctx->pc = 0x1A7BB0u;
            goto label_1a7bb0;
        }
    }
    ctx->pc = 0x1A7BDCu;
    // 0x1a7bdc: 0x44820000
    ctx->pc = 0x1a7bdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7be0: 0x0
    ctx->pc = 0x1a7be0u;
    // NOP
    // 0x1a7be4: 0x46020000
    ctx->pc = 0x1a7be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a7be8: 0x460c0040
    ctx->pc = 0x1a7be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1a7bec: 0x460c0001
    ctx->pc = 0x1a7becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1a7bf0: 0x46000b03
    ctx->pc = 0x1a7bf0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1a7bf4: 0x0
    ctx->pc = 0x1a7bf4u;
    // NOP
    // 0x1a7bf8: 0x0
    ctx->pc = 0x1a7bf8u;
    // NOP
    // 0x1a7bfc: 0x8069f40
    ctx->pc = 0x1A7BFCu;
    ctx->pc = 0x1A7D00u;
    nlLdexpf_0x1a7d00(rdram, ctx, runtime); return;
    ctx->pc = 0x1A7C04u;
}
