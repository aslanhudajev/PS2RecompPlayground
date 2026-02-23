#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBos2Hensin__9FcvEffectFv
// Address: 0x1dabe0 - 0x1daddc
void initBos2Hensin__9FcvEffectFv_0x1dabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBos2Hensin__9FcvEffectFv");


    ctx->pc = 0x1dabe0u;

    // 0x1dabe0: 0x27bdff90
    ctx->pc = 0x1dabe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dabe4: 0x7fbf0060
    ctx->pc = 0x1dabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1dabe8: 0x7fb50050
    ctx->pc = 0x1dabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dabec: 0x7fb40040
    ctx->pc = 0x1dabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dabf0: 0x7fb30030
    ctx->pc = 0x1dabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dabf4: 0x7fb20020
    ctx->pc = 0x1dabf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dabf8: 0x7fb10010
    ctx->pc = 0x1dabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dabfc: 0x7fb00000
    ctx->pc = 0x1dabfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dac00: 0x70808628
    ctx->pc = 0x1dac00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dac04: 0xc0761c4
    ctx->pc = 0x1DAC04u;
    SET_GPR_U32(ctx, 31, 0x1DAC0Cu);
    ctx->pc = 0x1DAC08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 65));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC0Cu; }
        else if (ctx->pc != 0x1DAC0Cu) { ctx->pc = 0x1DAC0Cu; }
    }
    if (ctx->pc != 0x1DAC0Cu) { return; }
    ctx->pc = 0x1DAC0Cu;
    // 0x1dac0c: 0xae020058
    ctx->pc = 0x1dac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1dac10: 0x24020041
    ctx->pc = 0x1dac10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1dac14: 0xae020004
    ctx->pc = 0x1dac14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1dac18: 0x72002628
    ctx->pc = 0x1dac18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dac1c: 0xc0761c4
    ctx->pc = 0x1DAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC24u);
    ctx->pc = 0x1DAC20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC24u; }
        else if (ctx->pc != 0x1DAC24u) { ctx->pc = 0x1DAC24u; }
    }
    if (ctx->pc != 0x1DAC24u) { return; }
    ctx->pc = 0x1DAC24u;
    // 0x1dac24: 0xae02005c
    ctx->pc = 0x1dac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1dac28: 0x2402000a
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dac2c: 0xae020008
    ctx->pc = 0x1dac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1dac30: 0x72002628
    ctx->pc = 0x1dac30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dac34: 0xc0761c4
    ctx->pc = 0x1DAC34u;
    SET_GPR_U32(ctx, 31, 0x1DAC3Cu);
    ctx->pc = 0x1DAC38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC3Cu; }
        else if (ctx->pc != 0x1DAC3Cu) { ctx->pc = 0x1DAC3Cu; }
    }
    if (ctx->pc != 0x1DAC3Cu) { return; }
    ctx->pc = 0x1DAC3Cu;
    // 0x1dac3c: 0xae020060
    ctx->pc = 0x1dac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1dac40: 0x24030009
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dac44: 0xae03000c
    ctx->pc = 0x1dac44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1dac48: 0x3c034391
    ctx->pc = 0x1dac48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17297 << 16));
    // 0x1dac4c: 0xae030028
    ctx->pc = 0x1dac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1dac50: 0x70008e28
    ctx->pc = 0x1dac50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dac54: 0x1000001c
    ctx->pc = 0x1DAC54u;
    {
        const bool branch_taken_0x1dac54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAC58u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dac54) {
            ctx->pc = 0x1DACC8u;
            goto label_1dacc8;
        }
    }
    ctx->pc = 0x1DAC5Cu;
label_1dac5c:
    // 0x1dac5c: 0xc07f208
    ctx->pc = 0x1DAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC64u);
    ctx->pc = 0x1DAC60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC64u; }
        else if (ctx->pc != 0x1DAC64u) { ctx->pc = 0x1DAC64u; }
    }
    if (ctx->pc != 0x1DAC64u) { return; }
    ctx->pc = 0x1DAC64u;
    // 0x1dac64: 0x70409e28
    ctx->pc = 0x1dac64u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dac68: 0x2625072e
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1838));
    // 0x1dac6c: 0xc07f208
    ctx->pc = 0x1DAC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC74u);
    ctx->pc = 0x1DAC70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC74u; }
        else if (ctx->pc != 0x1DAC74u) { ctx->pc = 0x1DAC74u; }
    }
    if (ctx->pc != 0x1DAC74u) { return; }
    ctx->pc = 0x1DAC74u;
    // 0x1dac74: 0x24030040
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dac78: 0x1623000a
    ctx->pc = 0x1DAC78u;
    {
        const bool branch_taken_0x1dac78 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dac78) {
            ctx->pc = 0x1DACA4u;
            goto label_1daca4;
        }
    }
    ctx->pc = 0x1DAC80u;
    // 0x1dac80: 0x8e040058
    ctx->pc = 0x1dac80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1dac84: 0x3c03001d
    ctx->pc = 0x1dac84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)29 << 16));
    // 0x1dac88: 0x72603e28
    ctx->pc = 0x1dac88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dac8c: 0x34650065
    ctx->pc = 0x1dac8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 101));
    // 0x1dac90: 0x70403628
    ctx->pc = 0x1dac90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dac94: 0xc079e80
    ctx->pc = 0x1DAC94u;
    SET_GPR_U32(ctx, 31, 0x1DAC9Cu);
    ctx->pc = 0x1DAC98u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC9Cu; }
        else if (ctx->pc != 0x1DAC9Cu) { ctx->pc = 0x1DAC9Cu; }
    }
    if (ctx->pc != 0x1DAC9Cu) { return; }
    ctx->pc = 0x1DAC9Cu;
    // 0x1dac9c: 0x10000009
    ctx->pc = 0x1DAC9Cu;
    {
        const bool branch_taken_0x1dac9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DACA0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dac9c) {
            ctx->pc = 0x1DACC4u;
            goto label_1dacc4;
        }
    }
    ctx->pc = 0x1DACA4u;
label_1daca4:
    // 0x1daca4: 0x8e040058
    ctx->pc = 0x1daca4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1daca8: 0x3c03001b
    ctx->pc = 0x1daca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dacac: 0x72603e28
    ctx->pc = 0x1dacacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dacb0: 0x34650076
    ctx->pc = 0x1dacb0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 118));
    // 0x1dacb4: 0x70403628
    ctx->pc = 0x1dacb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dacb8: 0xc079e80
    ctx->pc = 0x1DACB8u;
    SET_GPR_U32(ctx, 31, 0x1DACC0u);
    ctx->pc = 0x1DACBCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACC0u; }
        else if (ctx->pc != 0x1DACC0u) { ctx->pc = 0x1DACC0u; }
    }
    if (ctx->pc != 0x1DACC0u) { return; }
    ctx->pc = 0x1DACC0u;
    // 0x1dacc0: 0x265200f0
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dacc4:
    // 0x1dacc4: 0x26310001
    ctx->pc = 0x1dacc4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dacc8:
    // 0x1dacc8: 0x8e030004
    ctx->pc = 0x1dacc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1daccc: 0x223182a
    ctx->pc = 0x1dacccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dacd0: 0x1460ffe2
    ctx->pc = 0x1DACD0u;
    {
        const bool branch_taken_0x1dacd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DACD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1903));
        if (branch_taken_0x1dacd0) {
            ctx->pc = 0x1DAC5Cu;
            goto label_1dac5c;
        }
    }
    ctx->pc = 0x1DACD8u;
    // 0x1dacd8: 0x3c03002c
    ctx->pc = 0x1dacd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1dacdc: 0x2471eab0
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294961840));
    // 0x1dace0: 0x3c03002c
    ctx->pc = 0x1dace0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1dace4: 0x7000a628
    ctx->pc = 0x1dace4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dace8: 0x2472ea50
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4294961744));
    // 0x1dacec: 0x10000012
    ctx->pc = 0x1DACECu;
    {
        const bool branch_taken_0x1dacec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DACF0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dacec) {
            ctx->pc = 0x1DAD38u;
            goto label_1dad38;
        }
    }
    ctx->pc = 0x1DACF4u;
label_1dacf4:
    // 0x1dacf4: 0x8e250000
    ctx->pc = 0x1dacf4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dacf8: 0xc07f208
    ctx->pc = 0x1DACF8u;
    SET_GPR_U32(ctx, 31, 0x1DAD00u);
    ctx->pc = 0x1DACFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD00u; }
        else if (ctx->pc != 0x1DAD00u) { ctx->pc = 0x1DAD00u; }
    }
    if (ctx->pc != 0x1DAD00u) { return; }
    ctx->pc = 0x1DAD00u;
    // 0x1dad00: 0x7040ae28
    ctx->pc = 0x1dad00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dad04: 0x268507b0
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 1968));
    // 0x1dad08: 0xc07f208
    ctx->pc = 0x1DAD08u;
    SET_GPR_U32(ctx, 31, 0x1DAD10u);
    ctx->pc = 0x1DAD0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD10u; }
        else if (ctx->pc != 0x1DAD10u) { ctx->pc = 0x1DAD10u; }
    }
    if (ctx->pc != 0x1DAD10u) { return; }
    ctx->pc = 0x1DAD10u;
    // 0x1dad10: 0x8e03005c
    ctx->pc = 0x1dad10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1dad14: 0x8e450000
    ctx->pc = 0x1dad14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dad18: 0x72a03e28
    ctx->pc = 0x1dad18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1dad1c: 0x70403628
    ctx->pc = 0x1dad1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dad20: 0xc079e80
    ctx->pc = 0x1DAD20u;
    SET_GPR_U32(ctx, 31, 0x1DAD28u);
    ctx->pc = 0x1DAD24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD28u; }
        else if (ctx->pc != 0x1DAD28u) { ctx->pc = 0x1DAD28u; }
    }
    if (ctx->pc != 0x1DAD28u) { return; }
    ctx->pc = 0x1DAD28u;
    // 0x1dad28: 0x26310004
    ctx->pc = 0x1dad28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1dad2c: 0x26520004
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1dad30: 0x267300f0
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
    // 0x1dad34: 0x26940001
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1dad38:
    // 0x1dad38: 0x8e030008
    ctx->pc = 0x1dad38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dad3c: 0x283182a
    ctx->pc = 0x1dad3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1dad40: 0x1460ffec
    ctx->pc = 0x1DAD40u;
    {
        const bool branch_taken_0x1dad40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DAD44u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1dad40) {
            ctx->pc = 0x1DACF4u;
            goto label_1dacf4;
        }
    }
    ctx->pc = 0x1DAD48u;
    // 0x1dad48: 0x70009e28
    ctx->pc = 0x1dad48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dad4c: 0x2471ea80
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294961792));
    // 0x1dad50: 0x1000000d
    ctx->pc = 0x1DAD50u;
    {
        const bool branch_taken_0x1dad50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DAD54u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dad50) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAD58u;
label_1dad58:
    // 0x1dad58: 0xc07f208
    ctx->pc = 0x1DAD58u;
    SET_GPR_U32(ctx, 31, 0x1DAD60u);
    ctx->pc = 0x1DAD5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD60u; }
        else if (ctx->pc != 0x1DAD60u) { ctx->pc = 0x1DAD60u; }
    }
    if (ctx->pc != 0x1DAD60u) { return; }
    ctx->pc = 0x1DAD60u;
    // 0x1dad60: 0x8e030060
    ctx->pc = 0x1dad60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dad64: 0x8e250000
    ctx->pc = 0x1dad64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dad68: 0x70403628
    ctx->pc = 0x1dad68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dad6c: 0x70003e28
    ctx->pc = 0x1dad6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dad70: 0xc079e80
    ctx->pc = 0x1DAD70u;
    SET_GPR_U32(ctx, 31, 0x1DAD78u);
    ctx->pc = 0x1DAD74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD78u; }
        else if (ctx->pc != 0x1DAD78u) { ctx->pc = 0x1DAD78u; }
    }
    if (ctx->pc != 0x1DAD78u) { return; }
    ctx->pc = 0x1DAD78u;
    // 0x1dad78: 0x26310004
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1dad7c: 0x265200f0
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1dad80: 0x26730001
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1dad84: 0x0
    ctx->pc = 0x1dad84u;
    // NOP
label_1dad88:
    // 0x1dad88: 0x8e03000c
    ctx->pc = 0x1dad88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dad8c: 0x263182a
    ctx->pc = 0x1dad8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1dad90: 0x1460fff1
    ctx->pc = 0x1DAD90u;
    {
        const bool branch_taken_0x1dad90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DAD94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1980));
        if (branch_taken_0x1dad90) {
            ctx->pc = 0x1DAD58u;
            goto label_1dad58;
        }
    }
    ctx->pc = 0x1DAD98u;
    // 0x1dad98: 0x3c030027
    ctx->pc = 0x1dad98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dad9c: 0x24638bf8
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937592));
    // 0x1dada0: 0xc4620000
    ctx->pc = 0x1dada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dada4: 0xc4610004
    ctx->pc = 0x1dada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dada8: 0xc4600008
    ctx->pc = 0x1dada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dadac: 0xe6020114
    ctx->pc = 0x1dadacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dadb0: 0xe6010118
    ctx->pc = 0x1dadb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dadb4: 0xe600011c
    ctx->pc = 0x1dadb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dadb8: 0x7bbf0060
    ctx->pc = 0x1dadb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dadbc: 0x7bb50050
    ctx->pc = 0x1dadbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dadc0: 0x7bb40040
    ctx->pc = 0x1dadc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dadc4: 0x7bb30030
    ctx->pc = 0x1dadc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dadc8: 0x7bb20020
    ctx->pc = 0x1dadc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dadcc: 0x7bb10010
    ctx->pc = 0x1dadccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dadd0: 0x7bb00000
    ctx->pc = 0x1dadd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dadd4: 0x3e00008
    ctx->pc = 0x1DADD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DADD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAC5Cu: goto label_1dac5c;
            case 0x1DACA4u: goto label_1daca4;
            case 0x1DACC4u: goto label_1dacc4;
            case 0x1DACC8u: goto label_1dacc8;
            case 0x1DACF4u: goto label_1dacf4;
            case 0x1DAD38u: goto label_1dad38;
            case 0x1DAD58u: goto label_1dad58;
            case 0x1DAD88u: goto label_1dad88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DADDCu;
}
