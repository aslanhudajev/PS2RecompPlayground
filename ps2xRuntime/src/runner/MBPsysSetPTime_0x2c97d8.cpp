#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPTime
// Address: 0x2c97d8 - 0x2c98c0
void MBPsysSetPTime_0x2c97d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c97d8u;

    // 0x2c97d8: 0x8c840070
    ctx->pc = 0x2c97d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c97dc: 0x90820037
    ctx->pc = 0x2c97dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c97e0: 0x2c420002
    ctx->pc = 0x2c97e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c97e4: 0x14400003
    ctx->pc = 0x2C97E4u;
    {
        const bool branch_taken_0x2c97e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c97e4) {
            ctx->pc = 0x2C97F4u;
            goto label_2c97f4;
        }
    }
    ctx->pc = 0x2C97ECu;
    // 0x2c97ec: 0x80b2558
    ctx->pc = 0x2C97ECu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C97F4u;
label_2c97f4:
    // 0x2c97f4: 0x3c0141f0
    ctx->pc = 0x2c97f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c97f8: 0x44810000
    ctx->pc = 0x2c97f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c97fc: 0x46006002
    ctx->pc = 0x2c97fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9800: 0x3c013f80
    ctx->pc = 0x2c9800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c9804: 0x44810800
    ctx->pc = 0x2c9804u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c9808: 0x46010034
    ctx->pc = 0x2c9808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c980c: 0x0
    ctx->pc = 0x2c980cu;
    // NOP
    // 0x2c9810: 0x4501000f
    ctx->pc = 0x2C9810u;
    {
        const bool branch_taken_0x2c9810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c9810) {
            ctx->pc = 0x2C9850u;
            goto label_2c9850;
        }
    }
    ctx->pc = 0x2C9818u;
    // 0x2c9818: 0x3c0141f0
    ctx->pc = 0x2c9818u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c981c: 0x44810000
    ctx->pc = 0x2c981cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9820: 0x46006002
    ctx->pc = 0x2c9820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9824: 0x3c01437f
    ctx->pc = 0x2c9824u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2c9828: 0x44810800
    ctx->pc = 0x2c9828u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c982c: 0x46000834
    ctx->pc = 0x2c982cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9830: 0x0
    ctx->pc = 0x2c9830u;
    // NOP
    // 0x2c9834: 0x45010006
    ctx->pc = 0x2C9834u;
    {
        const bool branch_taken_0x2c9834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9838u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2c9834) {
            ctx->pc = 0x2C9850u;
            goto label_2c9850;
        }
    }
    ctx->pc = 0x2C983Cu;
    // 0x2c983c: 0x3c0141f0
    ctx->pc = 0x2c983cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9840: 0x44810000
    ctx->pc = 0x2c9840u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9844: 0x46006002
    ctx->pc = 0x2c9844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9848: 0x46000064
    ctx->pc = 0x2c9848u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c984c: 0x44020800
    ctx->pc = 0x2c984cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c9850:
    // 0x2c9850: 0x3c0141f0
    ctx->pc = 0x2c9850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9854: 0x44810000
    ctx->pc = 0x2c9854u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9858: 0x46006802
    ctx->pc = 0x2c9858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c985c: 0x44800800
    ctx->pc = 0x2c985cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2c9860: 0x46010034
    ctx->pc = 0x2c9860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9864: 0x0
    ctx->pc = 0x2c9864u;
    // NOP
    // 0x2c9868: 0x45000003
    ctx->pc = 0x2C9868u;
    {
        const bool branch_taken_0x2c9868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C986Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2c9868) {
            ctx->pc = 0x2C9878u;
            goto label_2c9878;
        }
    }
    ctx->pc = 0x2C9870u;
    // 0x2c9870: 0x3e00008
    ctx->pc = 0x2C9870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9874u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C97F4u: goto label_2c97f4;
            case 0x2C9850u: goto label_2c9850;
            case 0x2C9878u: goto label_2c9878;
            case 0x2C98A4u: goto label_2c98a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9878u;
label_2c9878:
    // 0x2c9878: 0x3c0141f0
    ctx->pc = 0x2c9878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c987c: 0x44810000
    ctx->pc = 0x2c987cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9880: 0x46006802
    ctx->pc = 0x2c9880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c9884: 0x3c01437f
    ctx->pc = 0x2c9884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2c9888: 0x44810800
    ctx->pc = 0x2c9888u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c988c: 0x46000834
    ctx->pc = 0x2c988cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9890: 0x0
    ctx->pc = 0x2c9890u;
    // NOP
    // 0x2c9894: 0x45000003
    ctx->pc = 0x2C9894u;
    {
        const bool branch_taken_0x2c9894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9898u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2c9894) {
            ctx->pc = 0x2C98A4u;
            goto label_2c98a4;
        }
    }
    ctx->pc = 0x2C989Cu;
    // 0x2c989c: 0x3e00008
    ctx->pc = 0x2C989Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C98A0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C97F4u: goto label_2c97f4;
            case 0x2C9850u: goto label_2c9850;
            case 0x2C9878u: goto label_2c9878;
            case 0x2C98A4u: goto label_2c98a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C98A4u;
label_2c98a4:
    // 0x2c98a4: 0x3c0141f0
    ctx->pc = 0x2c98a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c98a8: 0x44810000
    ctx->pc = 0x2c98a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c98ac: 0x46006802
    ctx->pc = 0x2c98acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c98b0: 0x46000064
    ctx->pc = 0x2c98b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c98b4: 0x44020800
    ctx->pc = 0x2c98b4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c98b8: 0x3e00008
    ctx->pc = 0x2C98B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C98BCu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C97F4u: goto label_2c97f4;
            case 0x2C9850u: goto label_2c9850;
            case 0x2C9878u: goto label_2c9878;
            case 0x2C98A4u: goto label_2c98a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C98C0u;
}
