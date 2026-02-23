#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlArcTan
// Address: 0x1a7880 - 0x1a7994
void nlArcTan_0x1a7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlArcTan");


    ctx->pc = 0x1a7880u;

    // 0x1a7880: 0x3c023f80
    ctx->pc = 0x1a7880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a7884: 0x44821000
    ctx->pc = 0x1a7884u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1a7888: 0x46006005
    ctx->pc = 0x1a7888u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x1a788c: 0x46020036
    ctx->pc = 0x1a788cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7890: 0x44800800
    ctx->pc = 0x1a7890u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1a7894: 0x45000003
    ctx->pc = 0x1A7894u;
    {
        const bool branch_taken_0x1a7894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7898u;
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1a7894) {
            ctx->pc = 0x1A78A4u;
            goto label_1a78a4;
        }
    }
    ctx->pc = 0x1A789Cu;
    // 0x1a789c: 0x10000005
    ctx->pc = 0x1A789Cu;
    {
        const bool branch_taken_0x1a789c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A78A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1a789c) {
            ctx->pc = 0x1A78B4u;
            goto label_1a78b4;
        }
    }
    ctx->pc = 0x1A78A4u;
label_1a78a4:
    // 0x1a78a4: 0x0
    ctx->pc = 0x1a78a4u;
    // NOP
    // 0x1a78a8: 0x0
    ctx->pc = 0x1a78a8u;
    // NOP
    // 0x1a78ac: 0x460c1103
    ctx->pc = 0x1a78acu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[12];
    // 0x1a78b0: 0x2403000d
    ctx->pc = 0x1a78b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1a78b4:
    // 0x1a78b4: 0x2404001a
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1a78b8: 0x3c023f80
    ctx->pc = 0x1a78b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a78bc: 0x44821000
    ctx->pc = 0x1a78bcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1a78c0:
    // 0x1a78c0: 0x44830000
    ctx->pc = 0x1a78c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a78c4: 0x0
    ctx->pc = 0x1a78c4u;
    // NOP
    // 0x1a78c8: 0x46011040
    ctx->pc = 0x1a78c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a78cc: 0x2463ffff
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a78d0: 0x468000e0
    ctx->pc = 0x1a78d0u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a78d4: 0x46041802
    ctx->pc = 0x1a78d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a78d8: 0x46001802
    ctx->pc = 0x1a78d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a78dc: 0x460020c2
    ctx->pc = 0x1a78dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a78e0: 0x44840000
    ctx->pc = 0x1a78e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a78e4: 0x0
    ctx->pc = 0x1a78e4u;
    // NOP
    // 0x1a78e8: 0x46800020
    ctx->pc = 0x1a78e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a78ec: 0x2484fffe
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1a78f0: 0x46000800
    ctx->pc = 0x1a78f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a78f4: 0x46001843
    ctx->pc = 0x1a78f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[0];
    // 0x1a78f8: 0x0
    ctx->pc = 0x1a78f8u;
    // NOP
    // 0x1a78fc: 0x0
    ctx->pc = 0x1a78fcu;
    // NOP
    // 0x1a7900: 0x1c60ffef
    ctx->pc = 0x1A7900u;
    {
        const bool branch_taken_0x1a7900 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a7900) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A7908u;
    // 0x1a7908: 0x46011000
    ctx->pc = 0x1a7908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a790c: 0x3c024622
    ctx->pc = 0x1a790cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17954 << 16));
    // 0x1a7910: 0x3444f983
    ctx->pc = 0x1a7910u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 63875));
    // 0x1a7914: 0x3c0240c9
    ctx->pc = 0x1a7914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16585 << 16));
    // 0x1a7918: 0x46002103
    ctx->pc = 0x1a7918u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x1a791c: 0x34430fdb
    ctx->pc = 0x1a791cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 4059));
    // 0x1a7920: 0x3c023f00
    ctx->pc = 0x1a7920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1a7924: 0x44830800
    ctx->pc = 0x1a7924u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a7928: 0x46026036
    ctx->pc = 0x1a7928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a792c: 0x46040840
    ctx->pc = 0x1a792cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1a7930: 0x44841000
    ctx->pc = 0x1a7930u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x1a7934: 0x44820000
    ctx->pc = 0x1a7934u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7938: 0x0
    ctx->pc = 0x1a7938u;
    // NOP
    // 0x1a793c: 0x46011042
    ctx->pc = 0x1a793cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a7940: 0x46010000
    ctx->pc = 0x1a7940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7944: 0x46000024
    ctx->pc = 0x1a7944u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a7948: 0x44020000
    ctx->pc = 0x1a7948u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a794c: 0x45010005
    ctx->pc = 0x1A794Cu;
    {
        const bool branch_taken_0x1a794c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7950u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1a794c) {
            ctx->pc = 0x1A7964u;
            goto label_1a7964;
        }
    }
    ctx->pc = 0x1A7954u;
    // 0x1a7954: 0x24034000
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a7958: 0x621023
    ctx->pc = 0x1a7958u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a795c: 0x1000000b
    ctx->pc = 0x1A795Cu;
    {
        const bool branch_taken_0x1a795c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7960u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1a795c) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A7964u;
label_1a7964:
    // 0x1a7964: 0x3c03bf80
    ctx->pc = 0x1a7964u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x1a7968: 0x44830000
    ctx->pc = 0x1a7968u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a796c: 0x0
    ctx->pc = 0x1a796cu;
    // NOP
    // 0x1a7970: 0x46006034
    ctx->pc = 0x1a7970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7974: 0x0
    ctx->pc = 0x1a7974u;
    // NOP
    // 0x1a7978: 0x45000004
    ctx->pc = 0x1A7978u;
    {
        const bool branch_taken_0x1a7978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A797Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 49152));
        if (branch_taken_0x1a7978) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A7980u;
    // 0x1a7980: 0x621023
    ctx->pc = 0x1a7980u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7984: 0x10000001
    ctx->pc = 0x1A7984u;
    {
        const bool branch_taken_0x1a7984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7988u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1a7984) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A798Cu;
label_1a798c:
    // 0x1a798c: 0x3e00008
    ctx->pc = 0x1A798Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A78A4u: goto label_1a78a4;
            case 0x1A78B4u: goto label_1a78b4;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A7964u: goto label_1a7964;
            case 0x1A798Cu: goto label_1a798c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7994u;
}
