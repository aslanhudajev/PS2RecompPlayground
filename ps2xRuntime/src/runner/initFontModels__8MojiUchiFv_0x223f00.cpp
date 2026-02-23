#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initFontModels__8MojiUchiFv
// Address: 0x223f00 - 0x224060
void initFontModels__8MojiUchiFv_0x223f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initFontModels__8MojiUchiFv");


    ctx->pc = 0x223f00u;

    // 0x223f00: 0x27bdffa0
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223f04: 0x7fbf0050
    ctx->pc = 0x223f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x223f08: 0x7fb40040
    ctx->pc = 0x223f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x223f0c: 0x7fb30030
    ctx->pc = 0x223f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x223f10: 0x7fb20020
    ctx->pc = 0x223f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223f14: 0x7fb10010
    ctx->pc = 0x223f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223f18: 0x7fb00000
    ctx->pc = 0x223f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223f1c: 0x70809e28
    ctx->pc = 0x223f1cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x223f20: 0x3c030029
    ctx->pc = 0x223f20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x223f24: 0x70008628
    ctx->pc = 0x223f24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223f28: 0x2471c390
    ctx->pc = 0x223f28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294951824));
    // 0x223f2c: 0x10000040
    ctx->pc = 0x223F2Cu;
    {
        const bool branch_taken_0x223f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223F30u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223f2c) {
            ctx->pc = 0x224030u;
            goto label_224030;
        }
    }
    ctx->pc = 0x223F34u;
label_223f34:
    // 0x223f34: 0x8e240004
    ctx->pc = 0x223f34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x223f38: 0x3c020050
    ctx->pc = 0x223f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x223f3c: 0x2442ea20
    ctx->pc = 0x223f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x223f40: 0x41c03
    ctx->pc = 0x223f40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x223f44: 0x3063ffff
    ctx->pc = 0x223f44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x223f48: 0x31900
    ctx->pc = 0x223f48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x223f4c: 0x431021
    ctx->pc = 0x223f4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223f50: 0x8c420004
    ctx->pc = 0x223f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223f54: 0x3084ffff
    ctx->pc = 0x223f54u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x223f58: 0x41840
    ctx->pc = 0x223f58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x223f5c: 0x641821
    ctx->pc = 0x223f5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x223f60: 0x31880
    ctx->pc = 0x223f60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x223f64: 0x431021
    ctx->pc = 0x223f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223f68: 0x8c540000
    ctx->pc = 0x223f68u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223f6c: 0xc06ab94
    ctx->pc = 0x223F6Cu;
    SET_GPR_U32(ctx, 31, 0x223F74u);
    ctx->pc = 0x223F70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F74u; }
        else if (ctx->pc != 0x223F74u) { ctx->pc = 0x223F74u; }
    }
    if (ctx->pc != 0x223F74u) { return; }
    ctx->pc = 0x223F74u;
    // 0x223f74: 0xc06878c
    ctx->pc = 0x223F74u;
    SET_GPR_U32(ctx, 31, 0x223F7Cu);
    ctx->pc = 0x223F78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F7Cu; }
        else if (ctx->pc != 0x223F7Cu) { ctx->pc = 0x223F7Cu; }
    }
    if (ctx->pc != 0x223F7Cu) { return; }
    ctx->pc = 0x223F7Cu;
    // 0x223f7c: 0xae420014
    ctx->pc = 0x223f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x223f80: 0x8e440014
    ctx->pc = 0x223f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x223f84: 0xc06ab98
    ctx->pc = 0x223F84u;
    SET_GPR_U32(ctx, 31, 0x223F8Cu);
    ctx->pc = 0x223F88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F8Cu; }
        else if (ctx->pc != 0x223F8Cu) { ctx->pc = 0x223F8Cu; }
    }
    if (ctx->pc != 0x223F8Cu) { return; }
    ctx->pc = 0x223F8Cu;
    // 0x223f8c: 0x8e240000
    ctx->pc = 0x223f8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x223f90: 0x4810004
    ctx->pc = 0x223F90u;
    {
        const bool branch_taken_0x223f90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x223F94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
        if (branch_taken_0x223f90) {
            ctx->pc = 0x223FA4u;
            goto label_223fa4;
        }
    }
    ctx->pc = 0x223F98u;
    // 0x223f98: 0x10400002
    ctx->pc = 0x223F98u;
    {
        const bool branch_taken_0x223f98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x223f98) {
            ctx->pc = 0x223FA4u;
            goto label_223fa4;
        }
    }
    ctx->pc = 0x223FA0u;
    // 0x223fa0: 0x2442fff0
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
label_223fa4:
    // 0x223fa4: 0x44820000
    ctx->pc = 0x223fa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223fa8: 0x3c010050
    ctx->pc = 0x223fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x223fac: 0x46800060
    ctx->pc = 0x223facu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223fb0: 0x3c033d80
    ctx->pc = 0x223fb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15744 << 16));
    // 0x223fb4: 0x8022fec5
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x223fb8: 0x44830000
    ctx->pc = 0x223fb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x223fbc: 0x1440000c
    ctx->pc = 0x223FBCu;
    {
        const bool branch_taken_0x223fbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223FC0u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x223fbc) {
            ctx->pc = 0x223FF0u;
            goto label_223ff0;
        }
    }
    ctx->pc = 0x223FC4u;
    // 0x223fc4: 0x4810003
    ctx->pc = 0x223FC4u;
    {
        const bool branch_taken_0x223fc4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x223FC8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        if (branch_taken_0x223fc4) {
            ctx->pc = 0x223FD4u;
            goto label_223fd4;
        }
    }
    ctx->pc = 0x223FCCu;
    // 0x223fcc: 0x2482000f
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
    // 0x223fd0: 0x21103
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_223fd4:
    // 0x223fd4: 0x44820000
    ctx->pc = 0x223fd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223fd8: 0x0
    ctx->pc = 0x223fd8u;
    // NOP
    // 0x223fdc: 0x46800060
    ctx->pc = 0x223fdcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223fe0: 0x3c02bd80
    ctx->pc = 0x223fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48512 << 16));
    // 0x223fe4: 0x44820000
    ctx->pc = 0x223fe4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223fe8: 0x1000000c
    ctx->pc = 0x223FE8u;
    {
        const bool branch_taken_0x223fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223FECu;
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x223fe8) {
            ctx->pc = 0x22401Cu;
            goto label_22401c;
        }
    }
    ctx->pc = 0x223FF0u;
label_223ff0:
    // 0x223ff0: 0x4810003
    ctx->pc = 0x223FF0u;
    {
        const bool branch_taken_0x223ff0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x223FF4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        if (branch_taken_0x223ff0) {
            ctx->pc = 0x224000u;
            goto label_224000;
        }
    }
    ctx->pc = 0x223FF8u;
    // 0x223ff8: 0x2482000f
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
    // 0x223ffc: 0x21103
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_224000:
    // 0x224000: 0x44820000
    ctx->pc = 0x224000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224004: 0x0
    ctx->pc = 0x224004u;
    // NOP
    // 0x224008: 0x46800060
    ctx->pc = 0x224008u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22400c: 0x3c02be00
    ctx->pc = 0x22400cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48640 << 16));
    // 0x224010: 0x44820000
    ctx->pc = 0x224010u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224014: 0x0
    ctx->pc = 0x224014u;
    // NOP
    // 0x224018: 0x46010342
    ctx->pc = 0x224018u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22401c:
    // 0x22401c: 0xc24af54
    ctx->pc = 0x22401Cu;
    SET_GPR_U32(ctx, 31, 0x224024u);
    ctx->pc = 0x224020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x92BD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV2__FPiff_0x92bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224024u; }
        else if (ctx->pc != 0x224024u) { ctx->pc = 0x224024u; }
    }
    if (ctx->pc != 0x224024u) { return; }
    ctx->pc = 0x224024u;
    // 0x224024: 0x26310008
    ctx->pc = 0x224024u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    // 0x224028: 0x26520004
    ctx->pc = 0x224028u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x22402c: 0x26100001
    ctx->pc = 0x22402cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_224030:
    // 0x224030: 0x8e631020
    ctx->pc = 0x224030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4128)));
    // 0x224034: 0x203182a
    ctx->pc = 0x224034u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x224038: 0x1460ffbe
    ctx->pc = 0x224038u;
    {
        const bool branch_taken_0x224038 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x224038) {
            ctx->pc = 0x223F34u;
            goto label_223f34;
        }
    }
    ctx->pc = 0x224040u;
    // 0x224040: 0x7bbf0050
    ctx->pc = 0x224040u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224044: 0x7bb40040
    ctx->pc = 0x224044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x224048: 0x7bb30030
    ctx->pc = 0x224048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22404c: 0x7bb20020
    ctx->pc = 0x22404cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224050: 0x7bb10010
    ctx->pc = 0x224050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224054: 0x7bb00000
    ctx->pc = 0x224054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224058: 0x3e00008
    ctx->pc = 0x224058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22405Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223F34u: goto label_223f34;
            case 0x223FA4u: goto label_223fa4;
            case 0x223FD4u: goto label_223fd4;
            case 0x223FF0u: goto label_223ff0;
            case 0x224000u: goto label_224000;
            case 0x22401Cu: goto label_22401c;
            case 0x224030u: goto label_224030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224060u;
}
