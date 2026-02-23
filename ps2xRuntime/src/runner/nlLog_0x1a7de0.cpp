#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLog
// Address: 0x1a7de0 - 0x1a7ee0
void nlLog_0x1a7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLog");


    ctx->pc = 0x1a7de0u;

    // 0x1a7de0: 0x44800000
    ctx->pc = 0x1a7de0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7de4: 0x0
    ctx->pc = 0x1a7de4u;
    // NOP
    // 0x1a7de8: 0x46006034
    ctx->pc = 0x1a7de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7dec: 0x0
    ctx->pc = 0x1a7decu;
    // NOP
    // 0x1a7df0: 0x45000003
    ctx->pc = 0x1A7DF0u;
    {
        const bool branch_taken_0x1a7df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7DF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a7df0) {
            ctx->pc = 0x1A7E00u;
            goto label_1a7e00;
        }
    }
    ctx->pc = 0x1A7DF8u;
    // 0x1a7df8: 0x10000037
    ctx->pc = 0x1A7DF8u;
    {
        const bool branch_taken_0x1a7df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7df8) {
            ctx->pc = 0x1A7ED8u;
            goto label_1a7ed8;
        }
    }
    ctx->pc = 0x1A7E00u;
label_1a7e00:
    // 0x1a7e00: 0x460c0032
    ctx->pc = 0x1a7e00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7e04: 0x0
    ctx->pc = 0x1a7e04u;
    // NOP
    // 0x1a7e08: 0x4500000c
    ctx->pc = 0x1A7E08u;
    {
        const bool branch_taken_0x1a7e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7E0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1a7e08) {
            ctx->pc = 0x1A7E3Cu;
            goto label_1a7e3c;
        }
    }
    ctx->pc = 0x1A7E10u;
    // 0x1a7e10: 0x10000031
    ctx->pc = 0x1A7E10u;
    {
        const bool branch_taken_0x1a7e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7e10) {
            ctx->pc = 0x1A7ED8u;
            goto label_1a7ed8;
        }
    }
    ctx->pc = 0x1A7E18u;
label_1a7e18:
    // 0x1a7e18: 0x44820800
    ctx->pc = 0x1a7e18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a7e1c: 0x0
    ctx->pc = 0x1a7e1cu;
    // NOP
    // 0x1a7e20: 0x46016303
    ctx->pc = 0x1a7e20u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1a7e24: 0x3c023f31
    ctx->pc = 0x1a7e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16177 << 16));
    // 0x1a7e28: 0x34427218
    ctx->pc = 0x1a7e28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29208));
    // 0x1a7e2c: 0x44820800
    ctx->pc = 0x1a7e2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a7e30: 0x0
    ctx->pc = 0x1a7e30u;
    // NOP
    // 0x1a7e34: 0x46010000
    ctx->pc = 0x1a7e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7e38: 0x3c024000
    ctx->pc = 0x1a7e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_1a7e3c:
    // 0x1a7e3c: 0x44821000
    ctx->pc = 0x1a7e3cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1a7e40: 0x0
    ctx->pc = 0x1a7e40u;
    // NOP
    // 0x1a7e44: 0x46026034
    ctx->pc = 0x1a7e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7e48: 0x0
    ctx->pc = 0x1a7e48u;
    // NOP
    // 0x1a7e4c: 0x4500fff2
    ctx->pc = 0x1A7E4Cu;
    {
        const bool branch_taken_0x1a7e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7E50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1a7e4c) {
            ctx->pc = 0x1A7E18u;
            goto label_1a7e18;
        }
    }
    ctx->pc = 0x1A7E54u;
    // 0x1a7e54: 0x3c023f31
    ctx->pc = 0x1a7e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16177 << 16));
    // 0x1a7e58: 0x34427218
    ctx->pc = 0x1a7e58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29208));
    // 0x1a7e5c: 0x44820800
    ctx->pc = 0x1a7e5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a7e60: 0x3c023f80
    ctx->pc = 0x1a7e60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a7e64: 0x44821800
    ctx->pc = 0x1a7e64u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1a7e68: 0x10000003
    ctx->pc = 0x1A7E68u;
    {
        const bool branch_taken_0x1a7e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7e68) {
            ctx->pc = 0x1A7E78u;
            goto label_1a7e78;
        }
    }
    ctx->pc = 0x1A7E70u;
label_1a7e70:
    // 0x1a7e70: 0x46026302
    ctx->pc = 0x1a7e70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1a7e74: 0x46010001
    ctx->pc = 0x1a7e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a7e78:
    // 0x1a7e78: 0x46036034
    ctx->pc = 0x1a7e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7e7c: 0x0
    ctx->pc = 0x1a7e7cu;
    // NOP
    // 0x1a7e80: 0x0
    ctx->pc = 0x1a7e80u;
    // NOP
    // 0x1a7e84: 0x4501fffa
    ctx->pc = 0x1A7E84u;
    {
        const bool branch_taken_0x1a7e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7e84) {
            ctx->pc = 0x1A7E70u;
            goto label_1a7e70;
        }
    }
    ctx->pc = 0x1A7E8Cu;
    // 0x1a7e8c: 0x46036081
    ctx->pc = 0x1a7e8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1a7e90: 0x3c024000
    ctx->pc = 0x1a7e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a7e94: 0x460c1840
    ctx->pc = 0x1a7e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x1a7e98: 0x46011303
    ctx->pc = 0x1a7e98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[1];
    // 0x1a7e9c: 0x44820800
    ctx->pc = 0x1a7e9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a7ea0: 0x0
    ctx->pc = 0x1a7ea0u;
    // NOP
    // 0x1a7ea4: 0x460c0882
    ctx->pc = 0x1a7ea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a7ea8: 0x460c6302
    ctx->pc = 0x1a7ea8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1a7eac:
    // 0x1a7eac: 0x44830800
    ctx->pc = 0x1a7eacu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a7eb0: 0x0
    ctx->pc = 0x1a7eb0u;
    // NOP
    // 0x1a7eb4: 0x460000c6
    ctx->pc = 0x1a7eb4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7eb8: 0x46800860
    ctx->pc = 0x1a7eb8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1a7ebc: 0x24630002
    ctx->pc = 0x1a7ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a7ec0: 0x46011043
    ctx->pc = 0x1a7ec0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1a7ec4: 0x46010000
    ctx->pc = 0x1a7ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7ec8: 0x46030032
    ctx->pc = 0x1a7ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7ecc: 0x0
    ctx->pc = 0x1a7eccu;
    // NOP
    // 0x1a7ed0: 0x4500fff6
    ctx->pc = 0x1A7ED0u;
    {
        const bool branch_taken_0x1a7ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7ED4u;
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
        if (branch_taken_0x1a7ed0) {
            ctx->pc = 0x1A7EACu;
            goto label_1a7eac;
        }
    }
    ctx->pc = 0x1A7ED8u;
label_1a7ed8:
    // 0x1a7ed8: 0x3e00008
    ctx->pc = 0x1A7ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7E00u: goto label_1a7e00;
            case 0x1A7E18u: goto label_1a7e18;
            case 0x1A7E3Cu: goto label_1a7e3c;
            case 0x1A7E70u: goto label_1a7e70;
            case 0x1A7E78u: goto label_1a7e78;
            case 0x1A7EACu: goto label_1a7eac;
            case 0x1A7ED8u: goto label_1a7ed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7EE0u;
}
