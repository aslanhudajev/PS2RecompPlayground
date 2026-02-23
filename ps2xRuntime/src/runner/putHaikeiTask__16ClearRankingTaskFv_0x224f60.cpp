#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putHaikeiTask__16ClearRankingTaskFv
// Address: 0x224f60 - 0x225100
void putHaikeiTask__16ClearRankingTaskFv_0x224f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putHaikeiTask__16ClearRankingTaskFv");


    ctx->pc = 0x224f60u;

    // 0x224f60: 0x27bdff70
    ctx->pc = 0x224f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x224f64: 0x7fbf0030
    ctx->pc = 0x224f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x224f68: 0x7fb20020
    ctx->pc = 0x224f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x224f6c: 0x7fb10010
    ctx->pc = 0x224f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224f70: 0x7fb00000
    ctx->pc = 0x224f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224f74: 0x8c820040
    ctx->pc = 0x224f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x224f78: 0x2841001e
    ctx->pc = 0x224f78u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 30));
    // 0x224f7c: 0x1020000c
    ctx->pc = 0x224F7Cu;
    {
        const bool branch_taken_0x224f7c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x224F80u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224f7c) {
            ctx->pc = 0x224FB0u;
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224F84u;
    // 0x224f84: 0x44820000
    ctx->pc = 0x224f84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224f88: 0x0
    ctx->pc = 0x224f88u;
    // NOP
    // 0x224f8c: 0x46800060
    ctx->pc = 0x224f8cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x224f90: 0x3c0241f0
    ctx->pc = 0x224f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x224f94: 0x44820000
    ctx->pc = 0x224f94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224f98: 0x0
    ctx->pc = 0x224f98u;
    // NOP
    // 0x224f9c: 0x46000803
    ctx->pc = 0x224f9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x224fa0: 0x0
    ctx->pc = 0x224fa0u;
    // NOP
    // 0x224fa4: 0x0
    ctx->pc = 0x224fa4u;
    // NOP
    // 0x224fa8: 0x1000002c
    ctx->pc = 0x224FA8u;
    {
        const bool branch_taken_0x224fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224FACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        if (branch_taken_0x224fa8) {
            ctx->pc = 0x22505Cu;
            goto label_22505c;
        }
    }
    ctx->pc = 0x224FB0u;
label_224fb0:
    // 0x224fb0: 0x2841003c
    ctx->pc = 0x224fb0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 60));
    // 0x224fb4: 0x10200004
    ctx->pc = 0x224FB4u;
    {
        const bool branch_taken_0x224fb4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x224FB8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 90));
        if (branch_taken_0x224fb4) {
            ctx->pc = 0x224FC8u;
            goto label_224fc8;
        }
    }
    ctx->pc = 0x224FBCu;
    // 0x224fbc: 0x3c023f80
    ctx->pc = 0x224fbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x224fc0: 0x10000026
    ctx->pc = 0x224FC0u;
    {
        const bool branch_taken_0x224fc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224FC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x224fc0) {
            ctx->pc = 0x22505Cu;
            goto label_22505c;
        }
    }
    ctx->pc = 0x224FC8u;
label_224fc8:
    // 0x224fc8: 0x10200012
    ctx->pc = 0x224FC8u;
    {
        const bool branch_taken_0x224fc8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x224FCCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 661));
        if (branch_taken_0x224fc8) {
            ctx->pc = 0x225014u;
            goto label_225014;
        }
    }
    ctx->pc = 0x224FD0u;
    // 0x224fd0: 0x2442ffc4
    ctx->pc = 0x224fd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x224fd4: 0x44820000
    ctx->pc = 0x224fd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224fd8: 0x3c033f00
    ctx->pc = 0x224fd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x224fdc: 0x468000a0
    ctx->pc = 0x224fdcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x224fe0: 0x3c023d08
    ctx->pc = 0x224fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15624 << 16));
    // 0x224fe4: 0x34448889
    ctx->pc = 0x224fe4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 34953));
    // 0x224fe8: 0x3c023f80
    ctx->pc = 0x224fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x224fec: 0x44840800
    ctx->pc = 0x224fecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x224ff0: 0x44830000
    ctx->pc = 0x224ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x224ff4: 0x0
    ctx->pc = 0x224ff4u;
    // NOP
    // 0x224ff8: 0x46020842
    ctx->pc = 0x224ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x224ffc: 0x46010042
    ctx->pc = 0x224ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225000: 0x44820000
    ctx->pc = 0x225000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225004: 0x0
    ctx->pc = 0x225004u;
    // NOP
    // 0x225008: 0x46010001
    ctx->pc = 0x225008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22500c: 0x10000013
    ctx->pc = 0x22500Cu;
    {
        const bool branch_taken_0x22500c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225010u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        if (branch_taken_0x22500c) {
            ctx->pc = 0x22505Cu;
            goto label_22505c;
        }
    }
    ctx->pc = 0x225014u;
label_225014:
    // 0x225014: 0x54200010
    ctx->pc = 0x225014u;
    {
        const bool branch_taken_0x225014 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x225014) {
            ctx->pc = 0x225018u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x22501Cu;
    // 0x22501c: 0x2442fd6c
    ctx->pc = 0x22501cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966636));
    // 0x225020: 0x44820000
    ctx->pc = 0x225020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225024: 0x0
    ctx->pc = 0x225024u;
    // NOP
    // 0x225028: 0x46800060
    ctx->pc = 0x225028u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22502c: 0x3c023f00
    ctx->pc = 0x22502cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x225030: 0x44821000
    ctx->pc = 0x225030u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x225034: 0x3c023d08
    ctx->pc = 0x225034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15624 << 16));
    // 0x225038: 0x34428889
    ctx->pc = 0x225038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x22503c: 0x44820000
    ctx->pc = 0x22503cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225040: 0x0
    ctx->pc = 0x225040u;
    // NOP
    // 0x225044: 0x46010002
    ctx->pc = 0x225044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225048: 0x46001002
    ctx->pc = 0x225048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22504c: 0x46001001
    ctx->pc = 0x22504cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x225050: 0x10000002
    ctx->pc = 0x225050u;
    {
        const bool branch_taken_0x225050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225054u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        if (branch_taken_0x225050) {
            ctx->pc = 0x22505Cu;
            goto label_22505c;
        }
    }
    ctx->pc = 0x225058u;
label_225058:
    // 0x225058: 0xafa20074
    ctx->pc = 0x225058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_22505c:
    // 0x22505c: 0xafa00050
    ctx->pc = 0x22505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x225060: 0x3c023f80
    ctx->pc = 0x225060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x225064: 0xafa20054
    ctx->pc = 0x225064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x225068: 0xafa2005c
    ctx->pc = 0x225068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x22506c: 0xafa20058
    ctx->pc = 0x22506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x225070: 0xafa00064
    ctx->pc = 0x225070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x225074: 0xafa00060
    ctx->pc = 0x225074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x225078: 0xafa2006c
    ctx->pc = 0x225078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x22507c: 0xafa20068
    ctx->pc = 0x22507cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x225080: 0xafa00070
    ctx->pc = 0x225080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x225084: 0x2402ffff
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225088: 0xafa20078
    ctx->pc = 0x225088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x22508c: 0x24022200
    ctx->pc = 0x22508cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8704));
    // 0x225090: 0xafa2007c
    ctx->pc = 0x225090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x225094: 0x70008e28
    ctx->pc = 0x225094u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225098: 0x70009628
    ctx->pc = 0x225098u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22509c:
    // 0x22509c: 0x44920000
    ctx->pc = 0x22509cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x2250a0: 0x26220d9c
    ctx->pc = 0x2250a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 3484));
    // 0x2250a4: 0x46800020
    ctx->pc = 0x2250a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2250a8: 0xafa20088
    ctx->pc = 0x2250a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2250ac: 0x27a40040
    ctx->pc = 0x2250acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2250b0: 0xc085bd8
    ctx->pc = 0x2250B0u;
    SET_GPR_U32(ctx, 31, 0x2250B8u);
    ctx->pc = 0x2250B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250B8u; }
        else if (ctx->pc != 0x2250B8u) { ctx->pc = 0x2250B8u; }
    }
    if (ctx->pc != 0x2250B8u) { return; }
    ctx->pc = 0x2250B8u;
    // 0x2250b8: 0x26310001
    ctx->pc = 0x2250b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2250bc: 0x2a220005
    ctx->pc = 0x2250bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 5));
    // 0x2250c0: 0x1440fff6
    ctx->pc = 0x2250C0u;
    {
        const bool branch_taken_0x2250c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2250C4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x2250c0) {
            ctx->pc = 0x22509Cu;
            goto label_22509c;
        }
    }
    ctx->pc = 0x2250C8u;
    // 0x2250c8: 0x3c020050
    ctx->pc = 0x2250c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2250cc: 0xc07ce18
    ctx->pc = 0x2250CCu;
    SET_GPR_U32(ctx, 31, 0x2250D4u);
    ctx->pc = 0x2250D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2250D4u; }
        else if (ctx->pc != 0x2250D4u) { ctx->pc = 0x2250D4u; }
    }
    if (ctx->pc != 0x2250D4u) { return; }
    ctx->pc = 0x2250D4u;
    // 0x2250d4: 0x1c400004
    ctx->pc = 0x2250D4u;
    {
        const bool branch_taken_0x2250d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2250d4) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250DCu;
    // 0x2250dc: 0x8e030040
    ctx->pc = 0x2250dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2250e0: 0x24630001
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2250e4: 0xae030040
    ctx->pc = 0x2250e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_2250e8:
    // 0x2250e8: 0x7bbf0030
    ctx->pc = 0x2250e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2250ec: 0x7bb20020
    ctx->pc = 0x2250ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2250f0: 0x7bb10010
    ctx->pc = 0x2250f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2250f4: 0x7bb00000
    ctx->pc = 0x2250f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2250f8: 0x3e00008
    ctx->pc = 0x2250F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2250FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224FB0u: goto label_224fb0;
            case 0x224FC8u: goto label_224fc8;
            case 0x225014u: goto label_225014;
            case 0x225058u: goto label_225058;
            case 0x22505Cu: goto label_22505c;
            case 0x22509Cu: goto label_22509c;
            case 0x2250E8u: goto label_2250e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225100u;
}
