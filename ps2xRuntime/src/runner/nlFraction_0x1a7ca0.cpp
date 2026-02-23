#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlFraction
// Address: 0x1a7ca0 - 0x1a7cf8
void nlFraction_0x1a7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlFraction");


    ctx->pc = 0x1a7ca0u;

    // 0x1a7ca0: 0x3c024b00
    ctx->pc = 0x1a7ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)19200 << 16));
    // 0x1a7ca4: 0x44820000
    ctx->pc = 0x1a7ca4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7ca8: 0x46006045
    ctx->pc = 0x1a7ca8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x1a7cac: 0x46000834
    ctx->pc = 0x1a7cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7cb0: 0x0
    ctx->pc = 0x1a7cb0u;
    // NOP
    // 0x1a7cb4: 0x45010004
    ctx->pc = 0x1A7CB4u;
    {
        const bool branch_taken_0x1a7cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7CB8u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a7cb4) {
            ctx->pc = 0x1A7CC8u;
            goto label_1a7cc8;
        }
    }
    ctx->pc = 0x1A7CBCu;
    // 0x1a7cbc: 0x44800000
    ctx->pc = 0x1a7cbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7cc0: 0x1000000b
    ctx->pc = 0x1A7CC0u;
    {
        const bool branch_taken_0x1a7cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7cc0) {
            ctx->pc = 0x1A7CF0u;
            goto label_1a7cf0;
        }
    }
    ctx->pc = 0x1A7CC8u;
label_1a7cc8:
    // 0x1a7cc8: 0x46800020
    ctx->pc = 0x1a7cc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a7ccc: 0x46000801
    ctx->pc = 0x1a7cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7cd0: 0x44800800
    ctx->pc = 0x1a7cd0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1a7cd4: 0x0
    ctx->pc = 0x1a7cd4u;
    // NOP
    // 0x1a7cd8: 0x46016034
    ctx->pc = 0x1a7cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7cdc: 0x0
    ctx->pc = 0x1a7cdcu;
    // NOP
    // 0x1a7ce0: 0x45000003
    ctx->pc = 0x1A7CE0u;
    {
        const bool branch_taken_0x1a7ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7ce0) {
            ctx->pc = 0x1A7CF0u;
            goto label_1a7cf0;
        }
    }
    ctx->pc = 0x1A7CE8u;
    // 0x1a7ce8: 0x10000001
    ctx->pc = 0x1A7CE8u;
    {
        const bool branch_taken_0x1a7ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7CECu;
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x1a7ce8) {
            ctx->pc = 0x1A7CF0u;
            goto label_1a7cf0;
        }
    }
    ctx->pc = 0x1A7CF0u;
label_1a7cf0:
    // 0x1a7cf0: 0x3e00008
    ctx->pc = 0x1A7CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7CC8u: goto label_1a7cc8;
            case 0x1A7CF0u: goto label_1a7cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7CF8u;
}
