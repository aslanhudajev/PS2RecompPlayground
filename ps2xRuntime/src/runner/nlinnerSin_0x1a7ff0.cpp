#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlinnerSin
// Address: 0x1a7ff0 - 0x1a80bc
void nlinnerSin_0x1a7ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlinnerSin");


    ctx->pc = 0x1a7ff0u;

    // 0x1a7ff0: 0x44800000
    ctx->pc = 0x1a7ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7ff4: 0x0
    ctx->pc = 0x1a7ff4u;
    // NOP
    // 0x1a7ff8: 0x46006034
    ctx->pc = 0x1a7ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7ffc: 0x0
    ctx->pc = 0x1a7ffcu;
    // NOP
    // 0x1a8000: 0x45010005
    ctx->pc = 0x1A8000u;
    {
        const bool branch_taken_0x1a8000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
        if (branch_taken_0x1a8000) {
            ctx->pc = 0x1A8018u;
            goto label_1a8018;
        }
    }
    ctx->pc = 0x1A8008u;
    // 0x1a8008: 0x3c023f00
    ctx->pc = 0x1a8008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1a800c: 0x44820800
    ctx->pc = 0x1a800cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a8010: 0x10000003
    ctx->pc = 0x1A8010u;
    {
        const bool branch_taken_0x1a8010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8014u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16329 << 16));
        if (branch_taken_0x1a8010) {
            ctx->pc = 0x1A8020u;
            goto label_1a8020;
        }
    }
    ctx->pc = 0x1A8018u;
label_1a8018:
    // 0x1a8018: 0x44820800
    ctx->pc = 0x1a8018u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a801c: 0x3c023fc9
    ctx->pc = 0x1a801cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16329 << 16));
label_1a8020:
    // 0x1a8020: 0x34430fdb
    ctx->pc = 0x1a8020u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 4059));
    // 0x1a8024: 0x44830000
    ctx->pc = 0x1a8024u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a8028: 0x34421000
    ctx->pc = 0x1a8028u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
    // 0x1a802c: 0x46006003
    ctx->pc = 0x1a802cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x1a8030: 0x3c033695
    ctx->pc = 0x1a8030u;
    SET_GPR_U32(ctx, 3, ((uint32_t)13973 << 16));
    // 0x1a8034: 0x3463777a
    ctx->pc = 0x1a8034u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 30586));
    // 0x1a8038: 0x2405000b
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a803c: 0x46010000
    ctx->pc = 0x1a803cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a8040: 0x460000a4
    ctx->pc = 0x1a8040u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a8044: 0x44820000
    ctx->pc = 0x1a8044u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a8048: 0x44830800
    ctx->pc = 0x1a8048u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a804c: 0x44021000
    ctx->pc = 0x1a804cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x1a8050: 0x468010a0
    ctx->pc = 0x1a8050u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1a8054: 0xac820000
    ctx->pc = 0x1a8054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a8058: 0x46020002
    ctx->pc = 0x1a8058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a805c: 0x46020842
    ctx->pc = 0x1a805cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a8060: 0x46006001
    ctx->pc = 0x1a8060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1a8064: 0x46000b00
    ctx->pc = 0x1a8064u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8068: 0x460c6042
    ctx->pc = 0x1a8068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a806c: 0x44801000
    ctx->pc = 0x1a806cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1a8070:
    // 0x1a8070: 0x44850000
    ctx->pc = 0x1a8070u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1a8074: 0x0
    ctx->pc = 0x1a8074u;
    // NOP
    // 0x1a8078: 0x46800020
    ctx->pc = 0x1a8078u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a807c: 0x24a5fffe
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1a8080: 0x46020001
    ctx->pc = 0x1a8080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a8084: 0x46000883
    ctx->pc = 0x1a8084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1a8088: 0x0
    ctx->pc = 0x1a8088u;
    // NOP
    // 0x1a808c: 0x0
    ctx->pc = 0x1a808cu;
    // NOP
    // 0x1a8090: 0x28a10003
    ctx->pc = 0x1a8090u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 3));
    // 0x1a8094: 0x1020fff6
    ctx->pc = 0x1A8094u;
    {
        const bool branch_taken_0x1a8094 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8098u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1a8094) {
            ctx->pc = 0x1A8070u;
            goto label_1a8070;
        }
    }
    ctx->pc = 0x1A809Cu;
    // 0x1a809c: 0x44820000
    ctx->pc = 0x1a809cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a80a0: 0x0
    ctx->pc = 0x1a80a0u;
    // NOP
    // 0x1a80a4: 0x46020001
    ctx->pc = 0x1a80a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a80a8: 0x46006003
    ctx->pc = 0x1a80a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x1a80ac: 0x0
    ctx->pc = 0x1a80acu;
    // NOP
    // 0x1a80b0: 0x0
    ctx->pc = 0x1a80b0u;
    // NOP
    // 0x1a80b4: 0x3e00008
    ctx->pc = 0x1A80B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8018u: goto label_1a8018;
            case 0x1A8020u: goto label_1a8020;
            case 0x1A8070u: goto label_1a8070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A80BCu;
}
