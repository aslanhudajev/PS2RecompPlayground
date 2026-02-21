#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexFadeSub
// Address: 0x210c08 - 0x210c90
void DoTexFadeSub_0x210c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210c08u;

    // 0x210c08: 0x84a2004e
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 78)));
    // 0x210c0c: 0xc23023
    ctx->pc = 0x210c0cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x210c10: 0x44861000
    ctx->pc = 0x210c10u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 6);
    // 0x210c14: 0x468010a0
    ctx->pc = 0x210c14u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x210c18: 0x84a2004c
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x210c1c: 0x44820000
    ctx->pc = 0x210c1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x210c20: 0x46800020
    ctx->pc = 0x210c20u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x210c24: 0x44800800
    ctx->pc = 0x210c24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x210c28: 0x46011036
    ctx->pc = 0x210c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210c2c: 0x4501000c
    ctx->pc = 0x210C2Cu;
    {
        const bool branch_taken_0x210c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210c2c) {
            ctx->pc = 0x210C60u;
            goto label_210c60;
        }
    }
    ctx->pc = 0x210C34u;
    // 0x210c34: 0x46010036
    ctx->pc = 0x210c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210c38: 0x45010009
    ctx->pc = 0x210C38u;
    {
        const bool branch_taken_0x210c38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210c38) {
            ctx->pc = 0x210C60u;
            goto label_210c60;
        }
    }
    ctx->pc = 0x210C40u;
    // 0x210c40: 0x46020036
    ctx->pc = 0x210c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210c44: 0x3c013f80
    ctx->pc = 0x210c44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210c48: 0x44810800
    ctx->pc = 0x210c48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x210c4c: 0x45010004
    ctx->pc = 0x210C4Cu;
    {
        const bool branch_taken_0x210c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210c4c) {
            ctx->pc = 0x210C60u;
            goto label_210c60;
        }
    }
    ctx->pc = 0x210C54u;
    // 0x210c54: 0x0
    ctx->pc = 0x210c54u;
    // NOP
    // 0x210c58: 0x0
    ctx->pc = 0x210c58u;
    // NOP
    // 0x210c5c: 0x46001043
    ctx->pc = 0x210c5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_210c60:
    // 0x210c60: 0x15000004
    ctx->pc = 0x210C60u;
    {
        const bool branch_taken_0x210c60 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x210c60) {
            ctx->pc = 0x210C74u;
            goto label_210c74;
        }
    }
    ctx->pc = 0x210C68u;
    // 0x210c68: 0x3c013f80
    ctx->pc = 0x210c68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210c6c: 0x44810000
    ctx->pc = 0x210c6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x210c70: 0x46010041
    ctx->pc = 0x210c70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_210c74:
    // 0x210c74: 0x3c01437f
    ctx->pc = 0x210c74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x210c78: 0x44810000
    ctx->pc = 0x210c78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x210c7c: 0x46000842
    ctx->pc = 0x210c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210c80: 0x46000824
    ctx->pc = 0x210c80u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x210c84: 0x44050000
    ctx->pc = 0x210c84u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x210c88: 0x80b40c0
    ctx->pc = 0x210C88u;
    ctx->pc = 0x210C8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime); return;
    ctx->pc = 0x210C90u;
}
