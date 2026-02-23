#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6Henshin1__9FcvEffectFv
// Address: 0x1dcad0 - 0x1dcce4
void initBoss6Henshin1__9FcvEffectFv_0x1dcad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6Henshin1__9FcvEffectFv");


    ctx->pc = 0x1dcad0u;

    // 0x1dcad0: 0x27bdffb0
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dcad4: 0x7fbf0040
    ctx->pc = 0x1dcad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dcad8: 0x7fb30030
    ctx->pc = 0x1dcad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dcadc: 0x7fb20020
    ctx->pc = 0x1dcadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcae0: 0x7fb10010
    ctx->pc = 0x1dcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcae4: 0x7fb00000
    ctx->pc = 0x1dcae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dcae8: 0x24050049
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 73));
    // 0x1dcaec: 0x70809628
    ctx->pc = 0x1dcaecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dcaf0: 0xc0761c4
    ctx->pc = 0x1DCAF0u;
    SET_GPR_U32(ctx, 31, 0x1DCAF8u);
    ctx->pc = 0x1DCAF4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAF8u; }
        else if (ctx->pc != 0x1DCAF8u) { ctx->pc = 0x1DCAF8u; }
    }
    if (ctx->pc != 0x1DCAF8u) { return; }
    ctx->pc = 0x1DCAF8u;
    // 0x1dcaf8: 0xae420058
    ctx->pc = 0x1dcaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1dcafc: 0x3c024396
    ctx->pc = 0x1dcafcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
    // 0x1dcb00: 0xae420028
    ctx->pc = 0x1dcb00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1dcb04: 0x70008628
    ctx->pc = 0x1dcb04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcb08: 0x1000002d
    ctx->pc = 0x1DCB08u;
    {
        const bool branch_taken_0x1dcb08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCB0Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dcb08) {
            ctx->pc = 0x1DCBC0u;
            goto label_1dcbc0;
        }
    }
    ctx->pc = 0x1DCB10u;
label_1dcb10:
    // 0x1dcb10: 0xc07f208
    ctx->pc = 0x1DCB10u;
    SET_GPR_U32(ctx, 31, 0x1DCB18u);
    ctx->pc = 0x1DCB14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB18u; }
        else if (ctx->pc != 0x1DCB18u) { ctx->pc = 0x1DCB18u; }
    }
    if (ctx->pc != 0x1DCB18u) { return; }
    ctx->pc = 0x1DCB18u;
    // 0x1dcb18: 0x2a01000c
    ctx->pc = 0x1dcb18u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 12));
    // 0x1dcb1c: 0x1020000d
    ctx->pc = 0x1DCB1Cu;
    {
        const bool branch_taken_0x1dcb1c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCB20u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dcb1c) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB24u;
    // 0x1dcb24: 0x27848d4c
    ctx->pc = 0x1dcb24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dcb28: 0xc07f208
    ctx->pc = 0x1DCB28u;
    SET_GPR_U32(ctx, 31, 0x1DCB30u);
    ctx->pc = 0x1DCB2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2830));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB30u; }
        else if (ctx->pc != 0x1DCB30u) { ctx->pc = 0x1DCB30u; }
    }
    if (ctx->pc != 0x1DCB30u) { return; }
    ctx->pc = 0x1DCB30u;
    // 0x1dcb30: 0x8e430058
    ctx->pc = 0x1dcb30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dcb34: 0x70403e28
    ctx->pc = 0x1dcb34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcb38: 0x3c020022
    ctx->pc = 0x1dcb38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1dcb3c: 0x72603628
    ctx->pc = 0x1dcb3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcb40: 0x34450258
    ctx->pc = 0x1dcb40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 600));
    // 0x1dcb44: 0xc079e80
    ctx->pc = 0x1DCB44u;
    SET_GPR_U32(ctx, 31, 0x1DCB4Cu);
    ctx->pc = 0x1DCB48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB4Cu; }
        else if (ctx->pc != 0x1DCB4Cu) { ctx->pc = 0x1DCB4Cu; }
    }
    if (ctx->pc != 0x1DCB4Cu) { return; }
    ctx->pc = 0x1DCB4Cu;
    // 0x1dcb4c: 0x1000001b
    ctx->pc = 0x1DCB4Cu;
    {
        const bool branch_taken_0x1dcb4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCB50u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dcb4c) {
            ctx->pc = 0x1DCBBCu;
            goto label_1dcbbc;
        }
    }
    ctx->pc = 0x1DCB54u;
label_1dcb54:
    // 0x1dcb54: 0x2a010048
    ctx->pc = 0x1dcb54u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 72));
    // 0x1dcb58: 0x1020000e
    ctx->pc = 0x1DCB58u;
    {
        const bool branch_taken_0x1dcb58 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCB5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1dcb58) {
            ctx->pc = 0x1DCB94u;
            goto label_1dcb94;
        }
    }
    ctx->pc = 0x1DCB60u;
    // 0x1dcb60: 0x27848d4c
    ctx->pc = 0x1dcb60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dcb64: 0xc07f208
    ctx->pc = 0x1DCB64u;
    SET_GPR_U32(ctx, 31, 0x1DCB6Cu);
    ctx->pc = 0x1DCB68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2831));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB6Cu; }
        else if (ctx->pc != 0x1DCB6Cu) { ctx->pc = 0x1DCB6Cu; }
    }
    if (ctx->pc != 0x1DCB6Cu) { return; }
    ctx->pc = 0x1DCB6Cu;
    // 0x1dcb6c: 0x8e430058
    ctx->pc = 0x1dcb6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dcb70: 0x70403e28
    ctx->pc = 0x1dcb70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcb74: 0x3c020022
    ctx->pc = 0x1dcb74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1dcb78: 0x72603628
    ctx->pc = 0x1dcb78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcb7c: 0x34450266
    ctx->pc = 0x1dcb7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 614));
    // 0x1dcb80: 0xc079e80
    ctx->pc = 0x1DCB80u;
    SET_GPR_U32(ctx, 31, 0x1DCB88u);
    ctx->pc = 0x1DCB84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB88u; }
        else if (ctx->pc != 0x1DCB88u) { ctx->pc = 0x1DCB88u; }
    }
    if (ctx->pc != 0x1DCB88u) { return; }
    ctx->pc = 0x1DCB88u;
    // 0x1dcb88: 0x1000000b
    ctx->pc = 0x1DCB88u;
    {
        const bool branch_taken_0x1dcb88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcb88) {
            ctx->pc = 0x1DCBB8u;
            goto label_1dcbb8;
        }
    }
    ctx->pc = 0x1DCB90u;
    // 0x1dcb90: 0x27848d4c
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1dcb94:
    // 0x1dcb94: 0xc07f208
    ctx->pc = 0x1DCB94u;
    SET_GPR_U32(ctx, 31, 0x1DCB9Cu);
    ctx->pc = 0x1DCB98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2829));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB9Cu; }
        else if (ctx->pc != 0x1DCB9Cu) { ctx->pc = 0x1DCB9Cu; }
    }
    if (ctx->pc != 0x1DCB9Cu) { return; }
    ctx->pc = 0x1DCB9Cu;
    // 0x1dcb9c: 0x8e430058
    ctx->pc = 0x1dcb9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dcba0: 0x70403e28
    ctx->pc = 0x1dcba0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcba4: 0x3c020022
    ctx->pc = 0x1dcba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1dcba8: 0x72603628
    ctx->pc = 0x1dcba8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcbac: 0x34450260
    ctx->pc = 0x1dcbacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 608));
    // 0x1dcbb0: 0xc079e80
    ctx->pc = 0x1DCBB0u;
    SET_GPR_U32(ctx, 31, 0x1DCBB8u);
    ctx->pc = 0x1DCBB4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBB8u; }
        else if (ctx->pc != 0x1DCBB8u) { ctx->pc = 0x1DCBB8u; }
    }
    if (ctx->pc != 0x1DCBB8u) { return; }
    ctx->pc = 0x1DCBB8u;
label_1dcbb8:
    // 0x1dcbb8: 0x263100f0
    ctx->pc = 0x1dcbb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dcbbc:
    // 0x1dcbbc: 0x26100001
    ctx->pc = 0x1dcbbcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dcbc0:
    // 0x1dcbc0: 0x8e420004
    ctx->pc = 0x1dcbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dcbc4: 0x202102a
    ctx->pc = 0x1dcbc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1dcbc8: 0x1440ffd1
    ctx->pc = 0x1DCBC8u;
    {
        const bool branch_taken_0x1dcbc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCBCCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2756));
        if (branch_taken_0x1dcbc8) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCBD0u;
    // 0x1dcbd0: 0x2405001a
    ctx->pc = 0x1dcbd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1dcbd4: 0xae450008
    ctx->pc = 0x1dcbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x1dcbd8: 0xc0761c4
    ctx->pc = 0x1DCBD8u;
    SET_GPR_U32(ctx, 31, 0x1DCBE0u);
    ctx->pc = 0x1DCBDCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBE0u; }
        else if (ctx->pc != 0x1DCBE0u) { ctx->pc = 0x1DCBE0u; }
    }
    if (ctx->pc != 0x1DCBE0u) { return; }
    ctx->pc = 0x1DCBE0u;
    // 0x1dcbe0: 0xae42005c
    ctx->pc = 0x1dcbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1dcbe4: 0x70008628
    ctx->pc = 0x1dcbe4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcbe8: 0x1000002b
    ctx->pc = 0x1DCBE8u;
    {
        const bool branch_taken_0x1dcbe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCBECu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dcbe8) {
            ctx->pc = 0x1DCC98u;
            goto label_1dcc98;
        }
    }
    ctx->pc = 0x1DCBF0u;
label_1dcbf0:
    // 0x1dcbf0: 0xc07f208
    ctx->pc = 0x1DCBF0u;
    SET_GPR_U32(ctx, 31, 0x1DCBF8u);
    ctx->pc = 0x1DCBF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBF8u; }
        else if (ctx->pc != 0x1DCBF8u) { ctx->pc = 0x1DCBF8u; }
    }
    if (ctx->pc != 0x1DCBF8u) { return; }
    ctx->pc = 0x1DCBF8u;
    // 0x1dcbf8: 0x2a010018
    ctx->pc = 0x1dcbf8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 24));
    // 0x1dcbfc: 0x1020000a
    ctx->pc = 0x1DCBFCu;
    {
        const bool branch_taken_0x1dcbfc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCC00u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dcbfc) {
            ctx->pc = 0x1DCC28u;
            goto label_1dcc28;
        }
    }
    ctx->pc = 0x1DCC04u;
    // 0x1dcc04: 0x8e43005c
    ctx->pc = 0x1dcc04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1dcc08: 0x3c020022
    ctx->pc = 0x1dcc08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1dcc0c: 0x72603628
    ctx->pc = 0x1dcc0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcc10: 0x34450190
    ctx->pc = 0x1dcc10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 400));
    // 0x1dcc14: 0x70003e28
    ctx->pc = 0x1dcc14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcc18: 0xc079e80
    ctx->pc = 0x1DCC18u;
    SET_GPR_U32(ctx, 31, 0x1DCC20u);
    ctx->pc = 0x1DCC1Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC20u; }
        else if (ctx->pc != 0x1DCC20u) { ctx->pc = 0x1DCC20u; }
    }
    if (ctx->pc != 0x1DCC20u) { return; }
    ctx->pc = 0x1DCC20u;
    // 0x1dcc20: 0x1000001c
    ctx->pc = 0x1DCC20u;
    {
        const bool branch_taken_0x1dcc20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCC24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dcc20) {
            ctx->pc = 0x1DCC94u;
            goto label_1dcc94;
        }
    }
    ctx->pc = 0x1DCC28u;
label_1dcc28:
    // 0x1dcc28: 0x24020018
    ctx->pc = 0x1dcc28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1dcc2c: 0x1602000e
    ctx->pc = 0x1DCC2Cu;
    {
        const bool branch_taken_0x1dcc2c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DCC30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1dcc2c) {
            ctx->pc = 0x1DCC68u;
            goto label_1dcc68;
        }
    }
    ctx->pc = 0x1DCC34u;
    // 0x1dcc34: 0x27848d4c
    ctx->pc = 0x1dcc34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dcc38: 0xc07f208
    ctx->pc = 0x1DCC38u;
    SET_GPR_U32(ctx, 31, 0x1DCC40u);
    ctx->pc = 0x1DCC3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2859));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC40u; }
        else if (ctx->pc != 0x1DCC40u) { ctx->pc = 0x1DCC40u; }
    }
    if (ctx->pc != 0x1DCC40u) { return; }
    ctx->pc = 0x1DCC40u;
    // 0x1dcc40: 0x8e44005c
    ctx->pc = 0x1dcc40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1dcc44: 0x3c030022
    ctx->pc = 0x1dcc44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dcc48: 0x72603628
    ctx->pc = 0x1dcc48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcc4c: 0x34650266
    ctx->pc = 0x1dcc4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 614));
    // 0x1dcc50: 0x70403e28
    ctx->pc = 0x1dcc50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcc54: 0xc079e80
    ctx->pc = 0x1DCC54u;
    SET_GPR_U32(ctx, 31, 0x1DCC5Cu);
    ctx->pc = 0x1DCC58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC5Cu; }
        else if (ctx->pc != 0x1DCC5Cu) { ctx->pc = 0x1DCC5Cu; }
    }
    if (ctx->pc != 0x1DCC5Cu) { return; }
    ctx->pc = 0x1DCC5Cu;
    // 0x1dcc5c: 0x1000000c
    ctx->pc = 0x1DCC5Cu;
    {
        const bool branch_taken_0x1dcc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcc5c) {
            ctx->pc = 0x1DCC90u;
            goto label_1dcc90;
        }
    }
    ctx->pc = 0x1DCC64u;
    // 0x1dcc64: 0x27848d4c
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1dcc68:
    // 0x1dcc68: 0xc07f208
    ctx->pc = 0x1DCC68u;
    SET_GPR_U32(ctx, 31, 0x1DCC70u);
    ctx->pc = 0x1DCC6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2858));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
        else if (ctx->pc != 0x1DCC70u) { ctx->pc = 0x1DCC70u; }
    }
    if (ctx->pc != 0x1DCC70u) { return; }
    ctx->pc = 0x1DCC70u;
    // 0x1dcc70: 0x8e44005c
    ctx->pc = 0x1dcc70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1dcc74: 0x3c030022
    ctx->pc = 0x1dcc74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dcc78: 0x72603628
    ctx->pc = 0x1dcc78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dcc7c: 0x34650260
    ctx->pc = 0x1dcc7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 608));
    // 0x1dcc80: 0x70403e28
    ctx->pc = 0x1dcc80u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcc84: 0xc079e80
    ctx->pc = 0x1DCC84u;
    SET_GPR_U32(ctx, 31, 0x1DCC8Cu);
    ctx->pc = 0x1DCC88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC8Cu; }
        else if (ctx->pc != 0x1DCC8Cu) { ctx->pc = 0x1DCC8Cu; }
    }
    if (ctx->pc != 0x1DCC8Cu) { return; }
    ctx->pc = 0x1DCC8Cu;
    // 0x1dcc8c: 0x0
    ctx->pc = 0x1dcc8cu;
    // NOP
label_1dcc90:
    // 0x1dcc90: 0x263100f0
    ctx->pc = 0x1dcc90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dcc94:
    // 0x1dcc94: 0x26100001
    ctx->pc = 0x1dcc94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dcc98:
    // 0x1dcc98: 0x8e430008
    ctx->pc = 0x1dcc98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dcc9c: 0x203182a
    ctx->pc = 0x1dcc9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dcca0: 0x1460ffd3
    ctx->pc = 0x1DCCA0u;
    {
        const bool branch_taken_0x1dcca0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCCA4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2832));
        if (branch_taken_0x1dcca0) {
            ctx->pc = 0x1DCBF0u;
            goto label_1dcbf0;
        }
    }
    ctx->pc = 0x1DCCA8u;
    // 0x1dcca8: 0x3c030027
    ctx->pc = 0x1dcca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dccac: 0x24638d98
    ctx->pc = 0x1dccacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938008));
    // 0x1dccb0: 0xc4620000
    ctx->pc = 0x1dccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dccb4: 0xc4610004
    ctx->pc = 0x1dccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dccb8: 0xc4600008
    ctx->pc = 0x1dccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccbc: 0xe6420114
    ctx->pc = 0x1dccbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dccc0: 0xe6410118
    ctx->pc = 0x1dccc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dccc4: 0xe640011c
    ctx->pc = 0x1dccc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dccc8: 0x7bbf0040
    ctx->pc = 0x1dccc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcccc: 0x7bb30030
    ctx->pc = 0x1dccccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dccd0: 0x7bb20020
    ctx->pc = 0x1dccd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dccd4: 0x7bb10010
    ctx->pc = 0x1dccd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dccd8: 0x7bb00000
    ctx->pc = 0x1dccd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dccdc: 0x3e00008
    ctx->pc = 0x1DCCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCB10u: goto label_1dcb10;
            case 0x1DCB54u: goto label_1dcb54;
            case 0x1DCB94u: goto label_1dcb94;
            case 0x1DCBB8u: goto label_1dcbb8;
            case 0x1DCBBCu: goto label_1dcbbc;
            case 0x1DCBC0u: goto label_1dcbc0;
            case 0x1DCBF0u: goto label_1dcbf0;
            case 0x1DCC28u: goto label_1dcc28;
            case 0x1DCC68u: goto label_1dcc68;
            case 0x1DCC90u: goto label_1dcc90;
            case 0x1DCC94u: goto label_1dcc94;
            case 0x1DCC98u: goto label_1dcc98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCCE4u;
}
