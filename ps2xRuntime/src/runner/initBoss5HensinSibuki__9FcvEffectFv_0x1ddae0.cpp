#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5HensinSibuki__9FcvEffectFv
// Address: 0x1ddae0 - 0x1ddc54
void initBoss5HensinSibuki__9FcvEffectFv_0x1ddae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5HensinSibuki__9FcvEffectFv");


    ctx->pc = 0x1ddae0u;

    // 0x1ddae0: 0x27bdffb0
    ctx->pc = 0x1ddae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ddae4: 0x7fbf0040
    ctx->pc = 0x1ddae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ddae8: 0x7fb30030
    ctx->pc = 0x1ddae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ddaec: 0x7fb20020
    ctx->pc = 0x1ddaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ddaf0: 0x7fb10010
    ctx->pc = 0x1ddaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddaf4: 0x70809628
    ctx->pc = 0x1ddaf4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ddaf8: 0x24050047
    ctx->pc = 0x1ddaf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ddafc: 0xc0761c4
    ctx->pc = 0x1DDAFCu;
    SET_GPR_U32(ctx, 31, 0x1DDB04u);
    ctx->pc = 0x1DDB00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB04u; }
        else if (ctx->pc != 0x1DDB04u) { ctx->pc = 0x1DDB04u; }
    }
    if (ctx->pc != 0x1DDB04u) { return; }
    ctx->pc = 0x1DDB04u;
    // 0x1ddb04: 0xae420054
    ctx->pc = 0x1ddb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1ddb08: 0x3c034396
    ctx->pc = 0x1ddb08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17302 << 16));
    // 0x1ddb0c: 0xae430028
    ctx->pc = 0x1ddb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1ddb10: 0x70008628
    ctx->pc = 0x1ddb10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddb14: 0x1000003c
    ctx->pc = 0x1DDB14u;
    {
        const bool branch_taken_0x1ddb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDB18u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ddb14) {
            ctx->pc = 0x1DDC08u;
            goto label_1ddc08;
        }
    }
    ctx->pc = 0x1DDB1Cu;
label_1ddb1c:
    // 0x1ddb1c: 0xc07f208
    ctx->pc = 0x1DDB1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB24u);
    ctx->pc = 0x1DDB20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB24u; }
        else if (ctx->pc != 0x1DDB24u) { ctx->pc = 0x1DDB24u; }
    }
    if (ctx->pc != 0x1DDB24u) { return; }
    ctx->pc = 0x1DDB24u;
    // 0x1ddb24: 0x2a01003b
    ctx->pc = 0x1ddb24u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 59));
    // 0x1ddb28: 0x1020000d
    ctx->pc = 0x1DDB28u;
    {
        const bool branch_taken_0x1ddb28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDB2Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ddb28) {
            ctx->pc = 0x1DDB60u;
            goto label_1ddb60;
        }
    }
    ctx->pc = 0x1DDB30u;
    // 0x1ddb30: 0x27848d4c
    ctx->pc = 0x1ddb30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddb34: 0xc07f208
    ctx->pc = 0x1DDB34u;
    SET_GPR_U32(ctx, 31, 0x1DDB3Cu);
    ctx->pc = 0x1DDB38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2622));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB3Cu; }
        else if (ctx->pc != 0x1DDB3Cu) { ctx->pc = 0x1DDB3Cu; }
    }
    if (ctx->pc != 0x1DDB3Cu) { return; }
    ctx->pc = 0x1DDB3Cu;
    // 0x1ddb3c: 0x8e440054
    ctx->pc = 0x1ddb3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddb40: 0x3c030021
    ctx->pc = 0x1ddb40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddb44: 0x72603628
    ctx->pc = 0x1ddb44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ddb48: 0x34650010
    ctx->pc = 0x1ddb48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 16));
    // 0x1ddb4c: 0x70403e28
    ctx->pc = 0x1ddb4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddb50: 0xc079e80
    ctx->pc = 0x1DDB50u;
    SET_GPR_U32(ctx, 31, 0x1DDB58u);
    ctx->pc = 0x1DDB54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB58u; }
        else if (ctx->pc != 0x1DDB58u) { ctx->pc = 0x1DDB58u; }
    }
    if (ctx->pc != 0x1DDB58u) { return; }
    ctx->pc = 0x1DDB58u;
    // 0x1ddb58: 0x1000002a
    ctx->pc = 0x1DDB58u;
    {
        const bool branch_taken_0x1ddb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDB5Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1ddb58) {
            ctx->pc = 0x1DDC04u;
            goto label_1ddc04;
        }
    }
    ctx->pc = 0x1DDB60u;
label_1ddb60:
    // 0x1ddb60: 0x2a010041
    ctx->pc = 0x1ddb60u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 65));
    // 0x1ddb64: 0x1020000e
    ctx->pc = 0x1DDB64u;
    {
        const bool branch_taken_0x1ddb64 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDB68u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 70));
        if (branch_taken_0x1ddb64) {
            ctx->pc = 0x1DDBA0u;
            goto label_1ddba0;
        }
    }
    ctx->pc = 0x1DDB6Cu;
    // 0x1ddb6c: 0x27848d4c
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddb70: 0xc07f208
    ctx->pc = 0x1DDB70u;
    SET_GPR_U32(ctx, 31, 0x1DDB78u);
    ctx->pc = 0x1DDB74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2623));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB78u; }
        else if (ctx->pc != 0x1DDB78u) { ctx->pc = 0x1DDB78u; }
    }
    if (ctx->pc != 0x1DDB78u) { return; }
    ctx->pc = 0x1DDB78u;
    // 0x1ddb78: 0x8e440054
    ctx->pc = 0x1ddb78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddb7c: 0x3c030021
    ctx->pc = 0x1ddb7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddb80: 0x72603628
    ctx->pc = 0x1ddb80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ddb84: 0x34650013
    ctx->pc = 0x1ddb84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
    // 0x1ddb88: 0x70403e28
    ctx->pc = 0x1ddb88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddb8c: 0xc079e80
    ctx->pc = 0x1DDB8Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB94u);
    ctx->pc = 0x1DDB90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB94u; }
        else if (ctx->pc != 0x1DDB94u) { ctx->pc = 0x1DDB94u; }
    }
    if (ctx->pc != 0x1DDB94u) { return; }
    ctx->pc = 0x1DDB94u;
    // 0x1ddb94: 0x1000001a
    ctx->pc = 0x1DDB94u;
    {
        const bool branch_taken_0x1ddb94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ddb94) {
            ctx->pc = 0x1DDC00u;
            goto label_1ddc00;
        }
    }
    ctx->pc = 0x1DDB9Cu;
    // 0x1ddb9c: 0x2a010046
    ctx->pc = 0x1ddb9cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 70));
label_1ddba0:
    // 0x1ddba0: 0x1020000e
    ctx->pc = 0x1DDBA0u;
    {
        const bool branch_taken_0x1ddba0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDBA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1ddba0) {
            ctx->pc = 0x1DDBDCu;
            goto label_1ddbdc;
        }
    }
    ctx->pc = 0x1DDBA8u;
    // 0x1ddba8: 0x27848d4c
    ctx->pc = 0x1ddba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddbac: 0xc07f208
    ctx->pc = 0x1DDBACu;
    SET_GPR_U32(ctx, 31, 0x1DDBB4u);
    ctx->pc = 0x1DDBB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2624));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBB4u; }
        else if (ctx->pc != 0x1DDBB4u) { ctx->pc = 0x1DDBB4u; }
    }
    if (ctx->pc != 0x1DDBB4u) { return; }
    ctx->pc = 0x1DDBB4u;
    // 0x1ddbb4: 0x8e440054
    ctx->pc = 0x1ddbb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddbb8: 0x3c030021
    ctx->pc = 0x1ddbb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddbbc: 0x72603628
    ctx->pc = 0x1ddbbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ddbc0: 0x34650012
    ctx->pc = 0x1ddbc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 18));
    // 0x1ddbc4: 0x70403e28
    ctx->pc = 0x1ddbc4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddbc8: 0xc079e80
    ctx->pc = 0x1DDBC8u;
    SET_GPR_U32(ctx, 31, 0x1DDBD0u);
    ctx->pc = 0x1DDBCCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBD0u; }
        else if (ctx->pc != 0x1DDBD0u) { ctx->pc = 0x1DDBD0u; }
    }
    if (ctx->pc != 0x1DDBD0u) { return; }
    ctx->pc = 0x1DDBD0u;
    // 0x1ddbd0: 0x1000000b
    ctx->pc = 0x1DDBD0u;
    {
        const bool branch_taken_0x1ddbd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ddbd0) {
            ctx->pc = 0x1DDC00u;
            goto label_1ddc00;
        }
    }
    ctx->pc = 0x1DDBD8u;
    // 0x1ddbd8: 0x27848d4c
    ctx->pc = 0x1ddbd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1ddbdc:
    // 0x1ddbdc: 0xc07f208
    ctx->pc = 0x1DDBDCu;
    SET_GPR_U32(ctx, 31, 0x1DDBE4u);
    ctx->pc = 0x1DDBE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2624));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBE4u; }
        else if (ctx->pc != 0x1DDBE4u) { ctx->pc = 0x1DDBE4u; }
    }
    if (ctx->pc != 0x1DDBE4u) { return; }
    ctx->pc = 0x1DDBE4u;
    // 0x1ddbe4: 0x8e440054
    ctx->pc = 0x1ddbe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddbe8: 0x3c030021
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddbec: 0x72603628
    ctx->pc = 0x1ddbecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ddbf0: 0x34650011
    ctx->pc = 0x1ddbf0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
    // 0x1ddbf4: 0x70403e28
    ctx->pc = 0x1ddbf4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddbf8: 0xc079e80
    ctx->pc = 0x1DDBF8u;
    SET_GPR_U32(ctx, 31, 0x1DDC00u);
    ctx->pc = 0x1DDBFCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC00u; }
        else if (ctx->pc != 0x1DDC00u) { ctx->pc = 0x1DDC00u; }
    }
    if (ctx->pc != 0x1DDC00u) { return; }
    ctx->pc = 0x1DDC00u;
label_1ddc00:
    // 0x1ddc00: 0x263100f0
    ctx->pc = 0x1ddc00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1ddc04:
    // 0x1ddc04: 0x26100001
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ddc08:
    // 0x1ddc08: 0x8e430000
    ctx->pc = 0x1ddc08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ddc0c: 0x203182a
    ctx->pc = 0x1ddc0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1ddc10: 0x1460ffc2
    ctx->pc = 0x1DDC10u;
    {
        const bool branch_taken_0x1ddc10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DDC14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2551));
        if (branch_taken_0x1ddc10) {
            ctx->pc = 0x1DDB1Cu;
            goto label_1ddb1c;
        }
    }
    ctx->pc = 0x1DDC18u;
    // 0x1ddc18: 0x3c030027
    ctx->pc = 0x1ddc18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1ddc1c: 0x24639708
    ctx->pc = 0x1ddc1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940424));
    // 0x1ddc20: 0xc4620000
    ctx->pc = 0x1ddc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddc24: 0xc4610004
    ctx->pc = 0x1ddc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddc28: 0xc4600008
    ctx->pc = 0x1ddc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddc2c: 0xe6420114
    ctx->pc = 0x1ddc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1ddc30: 0xe6410118
    ctx->pc = 0x1ddc30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1ddc34: 0xe640011c
    ctx->pc = 0x1ddc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1ddc38: 0x7bbf0040
    ctx->pc = 0x1ddc38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ddc3c: 0x7bb30030
    ctx->pc = 0x1ddc3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddc40: 0x7bb20020
    ctx->pc = 0x1ddc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddc44: 0x7bb10010
    ctx->pc = 0x1ddc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc48: 0x7bb00000
    ctx->pc = 0x1ddc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddc4c: 0x3e00008
    ctx->pc = 0x1DDC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDB1Cu: goto label_1ddb1c;
            case 0x1DDB60u: goto label_1ddb60;
            case 0x1DDBA0u: goto label_1ddba0;
            case 0x1DDBDCu: goto label_1ddbdc;
            case 0x1DDC00u: goto label_1ddc00;
            case 0x1DDC04u: goto label_1ddc04;
            case 0x1DDC08u: goto label_1ddc08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDC54u;
}
