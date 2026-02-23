#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlTan
// Address: 0x1a80c0 - 0x1a81f8
void nlTan_0x1a80c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlTan");


    ctx->pc = 0x1a80c0u;

    // 0x1a80c0: 0x30837fff
    ctx->pc = 0x1a80c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32767));
    // 0x1a80c4: 0x24024000
    ctx->pc = 0x1a80c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a80c8: 0x14620006
    ctx->pc = 0x1A80C8u;
    {
        const bool branch_taken_0x1a80c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A80CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x1a80c8) {
            ctx->pc = 0x1A80E4u;
            goto label_1a80e4;
        }
    }
    ctx->pc = 0x1A80D0u;
    // 0x1a80d0: 0x3c027f7f
    ctx->pc = 0x1a80d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x1a80d4: 0x3442ffff
    ctx->pc = 0x1a80d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a80d8: 0x44820000
    ctx->pc = 0x1a80d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a80dc: 0x10000044
    ctx->pc = 0x1A80DCu;
    {
        const bool branch_taken_0x1a80dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a80dc) {
            ctx->pc = 0x1A81F0u;
            goto label_1a81f0;
        }
    }
    ctx->pc = 0x1A80E4u;
label_1a80e4:
    // 0x1a80e4: 0x4400004
    ctx->pc = 0x1A80E4u;
    {
        const bool branch_taken_0x1a80e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A80E8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1a80e4) {
            ctx->pc = 0x1A80F8u;
            goto label_1a80f8;
        }
    }
    ctx->pc = 0x1A80ECu;
    // 0x1a80ec: 0x44820000
    ctx->pc = 0x1a80ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a80f0: 0x10000007
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A80F4u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A8110u;
            goto label_1a8110;
        }
    }
    ctx->pc = 0x1A80F8u;
label_1a80f8:
    // 0x1a80f8: 0x30420001
    ctx->pc = 0x1a80f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1a80fc: 0x621825
    ctx->pc = 0x1a80fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a8100: 0x44830000
    ctx->pc = 0x1a8100u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a8104: 0x0
    ctx->pc = 0x1a8104u;
    // NOP
    // 0x1a8108: 0x46800060
    ctx->pc = 0x1a8108u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a810c: 0x46010840
    ctx->pc = 0x1a810cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a8110:
    // 0x1a8110: 0x3c0238c9
    ctx->pc = 0x1a8110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14537 << 16));
    // 0x1a8114: 0x34420fdb
    ctx->pc = 0x1a8114u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4059));
    // 0x1a8118: 0x44820000
    ctx->pc = 0x1a8118u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a811c: 0x2404000d
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8120: 0x46010082
    ctx->pc = 0x1a8120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a8124: 0x3c023fc9
    ctx->pc = 0x1a8124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16329 << 16));
    // 0x1a8128: 0x34430fdb
    ctx->pc = 0x1a8128u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 4059));
    // 0x1a812c: 0x3c023f00
    ctx->pc = 0x1a812cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1a8130: 0x44831800
    ctx->pc = 0x1a8130u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x1a8134: 0x44820000
    ctx->pc = 0x1a8134u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a8138: 0x46031043
    ctx->pc = 0x1a8138u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x1a813c: 0x46010000
    ctx->pc = 0x1a813cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a8140: 0x46000024
    ctx->pc = 0x1a8140u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a8144: 0x44020000
    ctx->pc = 0x1a8144u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a8148: 0x46800020
    ctx->pc = 0x1a8148u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a814c: 0x46001802
    ctx->pc = 0x1a814cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a8150: 0x46001081
    ctx->pc = 0x1a8150u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a8154: 0x46021042
    ctx->pc = 0x1a8154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a8158: 0x44801800
    ctx->pc = 0x1a8158u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_1a815c:
    // 0x1a815c: 0x44840000
    ctx->pc = 0x1a815cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a8160: 0x0
    ctx->pc = 0x1a8160u;
    // NOP
    // 0x1a8164: 0x46800020
    ctx->pc = 0x1a8164u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a8168: 0x2484fffe
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1a816c: 0x46030001
    ctx->pc = 0x1a816cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a8170: 0x460008c3
    ctx->pc = 0x1a8170u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x1a8174: 0x0
    ctx->pc = 0x1a8174u;
    // NOP
    // 0x1a8178: 0x0
    ctx->pc = 0x1a8178u;
    // NOP
    // 0x1a817c: 0x28810003
    ctx->pc = 0x1a817cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 3));
    // 0x1a8180: 0x1020fff6
    ctx->pc = 0x1A8180u;
    {
        const bool branch_taken_0x1a8180 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8184u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1a8180) {
            ctx->pc = 0x1A815Cu;
            goto label_1a815c;
        }
    }
    ctx->pc = 0x1A8188u;
    // 0x1a8188: 0x44830000
    ctx->pc = 0x1a8188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a818c: 0x30420001
    ctx->pc = 0x1a818cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1a8190: 0x46030001
    ctx->pc = 0x1a8190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a8194: 0x46001003
    ctx->pc = 0x1a8194u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x1a8198: 0x0
    ctx->pc = 0x1a8198u;
    // NOP
    // 0x1a819c: 0x0
    ctx->pc = 0x1a819cu;
    // NOP
    // 0x1a81a0: 0x14400003
    ctx->pc = 0x1A81A0u;
    {
        const bool branch_taken_0x1a81a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a81a0) {
            ctx->pc = 0x1A81B0u;
            goto label_1a81b0;
        }
    }
    ctx->pc = 0x1A81A8u;
    // 0x1a81a8: 0x10000011
    ctx->pc = 0x1A81A8u;
    {
        const bool branch_taken_0x1a81a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a81a8) {
            ctx->pc = 0x1A81F0u;
            goto label_1a81f0;
        }
    }
    ctx->pc = 0x1A81B0u;
label_1a81b0:
    // 0x1a81b0: 0x44800800
    ctx->pc = 0x1a81b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1a81b4: 0x0
    ctx->pc = 0x1a81b4u;
    // NOP
    // 0x1a81b8: 0x46000832
    ctx->pc = 0x1a81b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a81bc: 0x0
    ctx->pc = 0x1a81bcu;
    // NOP
    // 0x1a81c0: 0x45010009
    ctx->pc = 0x1A81C0u;
    {
        const bool branch_taken_0x1a81c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A81C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
        if (branch_taken_0x1a81c0) {
            ctx->pc = 0x1A81E8u;
            goto label_1a81e8;
        }
    }
    ctx->pc = 0x1A81C8u;
    // 0x1a81c8: 0x3c02bf80
    ctx->pc = 0x1a81c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x1a81cc: 0x44820800
    ctx->pc = 0x1a81ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a81d0: 0x0
    ctx->pc = 0x1a81d0u;
    // NOP
    // 0x1a81d4: 0x46000803
    ctx->pc = 0x1a81d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a81d8: 0x0
    ctx->pc = 0x1a81d8u;
    // NOP
    // 0x1a81dc: 0x0
    ctx->pc = 0x1a81dcu;
    // NOP
    // 0x1a81e0: 0x10000003
    ctx->pc = 0x1A81E0u;
    {
        const bool branch_taken_0x1a81e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a81e0) {
            ctx->pc = 0x1A81F0u;
            goto label_1a81f0;
        }
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x3442ffff
    ctx->pc = 0x1a81e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a81ec: 0x44820000
    ctx->pc = 0x1a81ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1a81f0:
    // 0x1a81f0: 0x3e00008
    ctx->pc = 0x1A81F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A80E4u: goto label_1a80e4;
            case 0x1A80F8u: goto label_1a80f8;
            case 0x1A8110u: goto label_1a8110;
            case 0x1A815Cu: goto label_1a815c;
            case 0x1A81B0u: goto label_1a81b0;
            case 0x1A81E8u: goto label_1a81e8;
            case 0x1A81F0u: goto label_1a81f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A81F8u;
}
