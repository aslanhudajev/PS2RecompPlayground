#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Disp2in1Msg__FPiiffff
// Address: 0x1ecba0 - 0x1ecd30
void Disp2in1Msg__FPiiffff_0x1ecba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Disp2in1Msg__FPiiffff");


    ctx->pc = 0x1ecba0u;

    // 0x1ecba0: 0x27bdff10
    ctx->pc = 0x1ecba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ecba4: 0x7fbf0040
    ctx->pc = 0x1ecba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ecba8: 0x7fb20030
    ctx->pc = 0x1ecba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ecbac: 0x7fb10020
    ctx->pc = 0x1ecbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ecbb0: 0x7fb00010
    ctx->pc = 0x1ecbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ecbb4: 0xe7b60008
    ctx->pc = 0x1ecbb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ecbb8: 0xe7b50004
    ctx->pc = 0x1ecbb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ecbbc: 0xe7b40000
    ctx->pc = 0x1ecbbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ecbc0: 0x46006d86
    ctx->pc = 0x1ecbc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1ecbc4: 0x46007546
    ctx->pc = 0x1ecbc4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1ecbc8: 0x46007d06
    ctx->pc = 0x1ecbc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x1ecbcc: 0x70809628
    ctx->pc = 0x1ecbccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ecbd0: 0xc053146
    ctx->pc = 0x1ECBD0u;
    SET_GPR_U32(ctx, 31, 0x1ECBD8u);
    ctx->pc = 0x1ECBD4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBD8u; }
        else if (ctx->pc != 0x1ECBD8u) { ctx->pc = 0x1ECBD8u; }
    }
    if (ctx->pc != 0x1ECBD8u) { return; }
    ctx->pc = 0x1ECBD8u;
    // 0x1ecbd8: 0xc06aafc
    ctx->pc = 0x1ECBD8u;
    SET_GPR_U32(ctx, 31, 0x1ECBE0u);
    ctx->pc = 0x1ECBDCu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBE0u; }
        else if (ctx->pc != 0x1ECBE0u) { ctx->pc = 0x1ECBE0u; }
    }
    if (ctx->pc != 0x1ECBE0u) { return; }
    ctx->pc = 0x1ECBE0u;
    // 0x1ecbe0: 0x16000005
    ctx->pc = 0x1ECBE0u;
    {
        const bool branch_taken_0x1ecbe0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ECBE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1ecbe0) {
            ctx->pc = 0x1ECBF8u;
            goto label_1ecbf8;
        }
    }
    ctx->pc = 0x1ECBE8u;
    // 0x1ecbe8: 0x44806800
    ctx->pc = 0x1ecbe8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1ecbec: 0x44826000
    ctx->pc = 0x1ecbecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1ecbf0: 0x10000005
    ctx->pc = 0x1ECBF0u;
    {
        const bool branch_taken_0x1ecbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ECBF4u;
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1ecbf0) {
            ctx->pc = 0x1ECC08u;
            goto label_1ecc08;
        }
    }
    ctx->pc = 0x1ECBF8u;
label_1ecbf8:
    // 0x1ecbf8: 0x44806000
    ctx->pc = 0x1ecbf8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1ecbfc: 0x3c023f80
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ecc00: 0x44827000
    ctx->pc = 0x1ecc00u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1ecc04: 0x46006346
    ctx->pc = 0x1ecc04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ecc08:
    // 0x1ecc08: 0xc06aa80
    ctx->pc = 0x1ECC08u;
    SET_GPR_U32(ctx, 31, 0x1ECC10u);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC10u; }
        else if (ctx->pc != 0x1ECC10u) { ctx->pc = 0x1ECC10u; }
    }
    if (ctx->pc != 0x1ECC10u) { return; }
    ctx->pc = 0x1ECC10u;
    // 0x1ecc10: 0x8e420004
    ctx->pc = 0x1ecc10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ecc14: 0x18400026
    ctx->pc = 0x1ECC14u;
    {
        const bool branch_taken_0x1ecc14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ECC18u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ecc14) {
            ctx->pc = 0x1ECCB0u;
            goto label_1eccb0;
        }
    }
    ctx->pc = 0x1ECC1Cu;
label_1ecc1c:
    // 0x1ecc1c: 0x8e420000
    ctx->pc = 0x1ecc1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ecc20: 0x18400017
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECC80u;
            goto label_1ecc80;
        }
    }
    ctx->pc = 0x1ECC28u;
    // 0x1ecc28: 0x44910000
    ctx->pc = 0x1ecc28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x1ecc2c: 0xafa20098
    ctx->pc = 0x1ecc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1ecc30: 0x46800020
    ctx->pc = 0x1ecc30u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ecc34: 0x3c053f80
    ctx->pc = 0x1ecc34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ecc38: 0x2403ffff
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecc3c: 0x24022005
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8197));
    // 0x1ecc40: 0x27a40050
    ctx->pc = 0x1ecc40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ecc44: 0xe7a0005c
    ctx->pc = 0x1ecc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ecc48: 0xe7b60060
    ctx->pc = 0x1ecc48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ecc4c: 0xe7b50064
    ctx->pc = 0x1ecc4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1ecc50: 0xafa50068
    ctx->pc = 0x1ecc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x1ecc54: 0xafa5006c
    ctx->pc = 0x1ecc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
    // 0x1ecc58: 0xafa00074
    ctx->pc = 0x1ecc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1ecc5c: 0xafa00070
    ctx->pc = 0x1ecc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1ecc60: 0xafa5007c
    ctx->pc = 0x1ecc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x1ecc64: 0xafa50078
    ctx->pc = 0x1ecc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x1ecc68: 0xafa00080
    ctx->pc = 0x1ecc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1ecc6c: 0xafa50084
    ctx->pc = 0x1ecc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
    // 0x1ecc70: 0xafa30088
    ctx->pc = 0x1ecc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x1ecc74: 0xc085bd8
    ctx->pc = 0x1ECC74u;
    SET_GPR_U32(ctx, 31, 0x1ECC7Cu);
    ctx->pc = 0x1ECC78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC7Cu; }
        else if (ctx->pc != 0x1ECC7Cu) { ctx->pc = 0x1ECC7Cu; }
    }
    if (ctx->pc != 0x1ECC7Cu) { return; }
    ctx->pc = 0x1ECC7Cu;
    // 0x1ecc7c: 0x0
    ctx->pc = 0x1ecc7cu;
    // NOP
label_1ecc80:
    // 0x1ecc80: 0x44910000
    ctx->pc = 0x1ecc80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x1ecc84: 0x0
    ctx->pc = 0x1ecc84u;
    // NOP
    // 0x1ecc88: 0x46800020
    ctx->pc = 0x1ecc88u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ecc8c: 0xc053146
    ctx->pc = 0x1ECC8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC94u);
    ctx->pc = 0x1ECC90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC94u; }
        else if (ctx->pc != 0x1ECC94u) { ctx->pc = 0x1ECC94u; }
    }
    if (ctx->pc != 0x1ECC94u) { return; }
    ctx->pc = 0x1ECC94u;
    // 0x1ecc94: 0x70408e28
    ctx->pc = 0x1ecc94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecc98: 0x26100001
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ecc9c: 0x2a020002
    ctx->pc = 0x1ecc9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ecca0: 0x1440ffde
    ctx->pc = 0x1ECCA0u;
    {
        const bool branch_taken_0x1ecca0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ECCA4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x1ecca0) {
            ctx->pc = 0x1ECC1Cu;
            goto label_1ecc1c;
        }
    }
    ctx->pc = 0x1ECCA8u;
    // 0x1ecca8: 0x10000016
    ctx->pc = 0x1ECCA8u;
    {
        const bool branch_taken_0x1ecca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ecca8) {
            ctx->pc = 0x1ECD04u;
            goto label_1ecd04;
        }
    }
    ctx->pc = 0x1ECCB0u;
label_1eccb0:
    // 0x1eccb0: 0x8e470000
    ctx->pc = 0x1eccb0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eccb4: 0x3c0643a0
    ctx->pc = 0x1eccb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17312 << 16));
    // 0x1eccb8: 0x3c053f80
    ctx->pc = 0x1eccb8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1eccbc: 0x2403ffff
    ctx->pc = 0x1eccbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eccc0: 0x24022006
    ctx->pc = 0x1eccc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8198));
    // 0x1eccc4: 0x27a400a0
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1eccc8: 0xafa700e8
    ctx->pc = 0x1eccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x1ecccc: 0xafa600ac
    ctx->pc = 0x1eccccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1eccd0: 0xe7b600b0
    ctx->pc = 0x1eccd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1eccd4: 0xe7b500b4
    ctx->pc = 0x1eccd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1eccd8: 0xafa500b8
    ctx->pc = 0x1eccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x1eccdc: 0xafa500bc
    ctx->pc = 0x1eccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x1ecce0: 0xafa000c4
    ctx->pc = 0x1ecce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1ecce4: 0xafa000c0
    ctx->pc = 0x1ecce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1ecce8: 0xafa500cc
    ctx->pc = 0x1ecce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x1eccec: 0xafa500c8
    ctx->pc = 0x1eccecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x1eccf0: 0xafa000d0
    ctx->pc = 0x1eccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1eccf4: 0xafa500d4
    ctx->pc = 0x1eccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x1eccf8: 0xafa300d8
    ctx->pc = 0x1eccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x1eccfc: 0xc085bd8
    ctx->pc = 0x1ECCFCu;
    SET_GPR_U32(ctx, 31, 0x1ECD04u);
    ctx->pc = 0x1ECD00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD04u; }
        else if (ctx->pc != 0x1ECD04u) { ctx->pc = 0x1ECD04u; }
    }
    if (ctx->pc != 0x1ECD04u) { return; }
    ctx->pc = 0x1ECD04u;
label_1ecd04:
    // 0x1ecd04: 0xc06ab18
    ctx->pc = 0x1ECD04u;
    SET_GPR_U32(ctx, 31, 0x1ECD0Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD0Cu; }
        else if (ctx->pc != 0x1ECD0Cu) { ctx->pc = 0x1ECD0Cu; }
    }
    if (ctx->pc != 0x1ECD0Cu) { return; }
    ctx->pc = 0x1ECD0Cu;
    // 0x1ecd0c: 0x7bbf0040
    ctx->pc = 0x1ecd0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecd10: 0x7bb20030
    ctx->pc = 0x1ecd10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecd14: 0x7bb10020
    ctx->pc = 0x1ecd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecd18: 0x7bb00010
    ctx->pc = 0x1ecd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecd1c: 0xc7b60008
    ctx->pc = 0x1ecd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ecd20: 0xc7b50004
    ctx->pc = 0x1ecd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ecd24: 0xc7b40000
    ctx->pc = 0x1ecd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ecd28: 0x3e00008
    ctx->pc = 0x1ECD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECBF8u: goto label_1ecbf8;
            case 0x1ECC08u: goto label_1ecc08;
            case 0x1ECC1Cu: goto label_1ecc1c;
            case 0x1ECC80u: goto label_1ecc80;
            case 0x1ECCB0u: goto label_1eccb0;
            case 0x1ECD04u: goto label_1ecd04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECD30u;
}
