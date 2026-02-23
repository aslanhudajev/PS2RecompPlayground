#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlayerAsh__9FcvEffectFv
// Address: 0x1ddf30 - 0x1de198
void initPlayerAsh__9FcvEffectFv_0x1ddf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlayerAsh__9FcvEffectFv");


    ctx->pc = 0x1ddf30u;

    // 0x1ddf30: 0x27bdffc0
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ddf34: 0x7fbf0030
    ctx->pc = 0x1ddf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ddf38: 0x7fb20020
    ctx->pc = 0x1ddf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ddf3c: 0x7fb10010
    ctx->pc = 0x1ddf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddf40: 0x3c024538
    ctx->pc = 0x1ddf40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17720 << 16));
    // 0x1ddf44: 0x7fb00000
    ctx->pc = 0x1ddf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ddf48: 0x34426000
    ctx->pc = 0x1ddf48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24576));
    // 0x1ddf4c: 0x70808628
    ctx->pc = 0x1ddf4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ddf50: 0xac820028
    ctx->pc = 0x1ddf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1ddf54: 0xc0761c4
    ctx->pc = 0x1DDF54u;
    SET_GPR_U32(ctx, 31, 0x1DDF5Cu);
    ctx->pc = 0x1DDF58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 86));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF5Cu; }
        else if (ctx->pc != 0x1DDF5Cu) { ctx->pc = 0x1DDF5Cu; }
    }
    if (ctx->pc != 0x1DDF5Cu) { return; }
    ctx->pc = 0x1DDF5Cu;
    // 0x1ddf5c: 0xae020058
    ctx->pc = 0x1ddf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1ddf60: 0x24020056
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
    // 0x1ddf64: 0xae020004
    ctx->pc = 0x1ddf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ddf68: 0x72002628
    ctx->pc = 0x1ddf68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ddf6c: 0xc0761c4
    ctx->pc = 0x1DDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF74u);
    ctx->pc = 0x1DDF70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF74u; }
        else if (ctx->pc != 0x1DDF74u) { ctx->pc = 0x1DDF74u; }
    }
    if (ctx->pc != 0x1DDF74u) { return; }
    ctx->pc = 0x1DDF74u;
    // 0x1ddf74: 0xae02005c
    ctx->pc = 0x1ddf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1ddf78: 0x24020003
    ctx->pc = 0x1ddf78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ddf7c: 0xae020008
    ctx->pc = 0x1ddf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ddf80: 0x72002628
    ctx->pc = 0x1ddf80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ddf84: 0xc0761c4
    ctx->pc = 0x1DDF84u;
    SET_GPR_U32(ctx, 31, 0x1DDF8Cu);
    ctx->pc = 0x1DDF88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF8Cu; }
        else if (ctx->pc != 0x1DDF8Cu) { ctx->pc = 0x1DDF8Cu; }
    }
    if (ctx->pc != 0x1DDF8Cu) { return; }
    ctx->pc = 0x1DDF8Cu;
    // 0x1ddf8c: 0xae020060
    ctx->pc = 0x1ddf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1ddf90: 0x24030004
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddf94: 0xae03000c
    ctx->pc = 0x1ddf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ddf98: 0x70008e28
    ctx->pc = 0x1ddf98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddf9c: 0x10000030
    ctx->pc = 0x1DDF9Cu;
    {
        const bool branch_taken_0x1ddf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDFA0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ddf9c) {
            ctx->pc = 0x1DE060u;
            goto label_1de060;
        }
    }
    ctx->pc = 0x1DDFA4u;
label_1ddfa4:
    // 0x1ddfa4: 0xc07f208
    ctx->pc = 0x1DDFA4u;
    SET_GPR_U32(ctx, 31, 0x1DDFACu);
    ctx->pc = 0x1DDFA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFACu; }
        else if (ctx->pc != 0x1DDFACu) { ctx->pc = 0x1DDFACu; }
    }
    if (ctx->pc != 0x1DDFACu) { return; }
    ctx->pc = 0x1DDFACu;
    // 0x1ddfac: 0x2a210017
    ctx->pc = 0x1ddfacu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 23));
    // 0x1ddfb0: 0x1020000f
    ctx->pc = 0x1DDFB0u;
    {
        const bool branch_taken_0x1ddfb0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDFB4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 41));
        if (branch_taken_0x1ddfb0) {
            ctx->pc = 0x1DDFF0u;
            goto label_1ddff0;
        }
    }
    ctx->pc = 0x1DDFB8u;
    // 0x1ddfb8: 0x8e030058
    ctx->pc = 0x1ddfb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ddfbc: 0x70403628
    ctx->pc = 0x1ddfbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddfc0: 0x3c020022
    ctx->pc = 0x1ddfc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1ddfc4: 0x34450262
    ctx->pc = 0x1ddfc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 610));
    // 0x1ddfc8: 0x70003e28
    ctx->pc = 0x1ddfc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddfcc: 0xc079e80
    ctx->pc = 0x1DDFCCu;
    SET_GPR_U32(ctx, 31, 0x1DDFD4u);
    ctx->pc = 0x1DDFD0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFD4u; }
        else if (ctx->pc != 0x1DDFD4u) { ctx->pc = 0x1DDFD4u; }
    }
    if (ctx->pc != 0x1DDFD4u) { return; }
    ctx->pc = 0x1DDFD4u;
    // 0x1ddfd4: 0x8e020058
    ctx->pc = 0x1ddfd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ddfd8: 0x24050001
    ctx->pc = 0x1ddfd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddfdc: 0xc07a4cc
    ctx->pc = 0x1DDFDCu;
    SET_GPR_U32(ctx, 31, 0x1DDFE4u);
    ctx->pc = 0x1DDFE0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE4u; }
        else if (ctx->pc != 0x1DDFE4u) { ctx->pc = 0x1DDFE4u; }
    }
    if (ctx->pc != 0x1DDFE4u) { return; }
    ctx->pc = 0x1DDFE4u;
    // 0x1ddfe4: 0x1000001d
    ctx->pc = 0x1DDFE4u;
    {
        const bool branch_taken_0x1ddfe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDFE8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1ddfe4) {
            ctx->pc = 0x1DE05Cu;
            goto label_1de05c;
        }
    }
    ctx->pc = 0x1DDFECu;
    // 0x1ddfec: 0x2a210029
    ctx->pc = 0x1ddfecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 41));
label_1ddff0:
    // 0x1ddff0: 0x1020000e
    ctx->pc = 0x1DDFF0u;
    {
        const bool branch_taken_0x1ddff0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ddff0) {
            ctx->pc = 0x1DE02Cu;
            goto label_1de02c;
        }
    }
    ctx->pc = 0x1DDFF8u;
    // 0x1ddff8: 0x8e030058
    ctx->pc = 0x1ddff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1ddffc: 0x70403628
    ctx->pc = 0x1ddffcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de000: 0x3c020022
    ctx->pc = 0x1de000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de004: 0x34450263
    ctx->pc = 0x1de004u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 611));
    // 0x1de008: 0x70003e28
    ctx->pc = 0x1de008u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de00c: 0xc079e80
    ctx->pc = 0x1DE00Cu;
    SET_GPR_U32(ctx, 31, 0x1DE014u);
    ctx->pc = 0x1DE010u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE014u; }
        else if (ctx->pc != 0x1DE014u) { ctx->pc = 0x1DE014u; }
    }
    if (ctx->pc != 0x1DE014u) { return; }
    ctx->pc = 0x1DE014u;
    // 0x1de014: 0x8e020058
    ctx->pc = 0x1de014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de018: 0x24050001
    ctx->pc = 0x1de018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de01c: 0xc07a4cc
    ctx->pc = 0x1DE01Cu;
    SET_GPR_U32(ctx, 31, 0x1DE024u);
    ctx->pc = 0x1DE020u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE024u; }
        else if (ctx->pc != 0x1DE024u) { ctx->pc = 0x1DE024u; }
    }
    if (ctx->pc != 0x1DE024u) { return; }
    ctx->pc = 0x1DE024u;
    // 0x1de024: 0x1000000c
    ctx->pc = 0x1DE024u;
    {
        const bool branch_taken_0x1de024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de024) {
            ctx->pc = 0x1DE058u;
            goto label_1de058;
        }
    }
    ctx->pc = 0x1DE02Cu;
label_1de02c:
    // 0x1de02c: 0x8e030058
    ctx->pc = 0x1de02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de030: 0x70403628
    ctx->pc = 0x1de030u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de034: 0x3c020022
    ctx->pc = 0x1de034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de038: 0x34450262
    ctx->pc = 0x1de038u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 610));
    // 0x1de03c: 0x70003e28
    ctx->pc = 0x1de03cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de040: 0xc079e80
    ctx->pc = 0x1DE040u;
    SET_GPR_U32(ctx, 31, 0x1DE048u);
    ctx->pc = 0x1DE044u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE048u; }
        else if (ctx->pc != 0x1DE048u) { ctx->pc = 0x1DE048u; }
    }
    if (ctx->pc != 0x1DE048u) { return; }
    ctx->pc = 0x1DE048u;
    // 0x1de048: 0x8e020058
    ctx->pc = 0x1de048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de04c: 0x24050001
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de050: 0xc07a4cc
    ctx->pc = 0x1DE050u;
    SET_GPR_U32(ctx, 31, 0x1DE058u);
    ctx->pc = 0x1DE054u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE058u; }
        else if (ctx->pc != 0x1DE058u) { ctx->pc = 0x1DE058u; }
    }
    if (ctx->pc != 0x1DE058u) { return; }
    ctx->pc = 0x1DE058u;
label_1de058:
    // 0x1de058: 0x265200f0
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1de05c:
    // 0x1de05c: 0x26310001
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1de060:
    // 0x1de060: 0x8e030004
    ctx->pc = 0x1de060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de064: 0x223182a
    ctx->pc = 0x1de064u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1de068: 0x1460ffce
    ctx->pc = 0x1DE068u;
    {
        const bool branch_taken_0x1de068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE06Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4389));
        if (branch_taken_0x1de068) {
            ctx->pc = 0x1DDFA4u;
            goto label_1ddfa4;
        }
    }
    ctx->pc = 0x1DE070u;
    // 0x1de070: 0x70009628
    ctx->pc = 0x1de070u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de074: 0x10000010
    ctx->pc = 0x1DE074u;
    {
        const bool branch_taken_0x1de074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE078u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de074) {
            ctx->pc = 0x1DE0B8u;
            goto label_1de0b8;
        }
    }
    ctx->pc = 0x1DE07Cu;
label_1de07c:
    // 0x1de07c: 0xc07f208
    ctx->pc = 0x1DE07Cu;
    SET_GPR_U32(ctx, 31, 0x1DE084u);
    ctx->pc = 0x1DE080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE084u; }
        else if (ctx->pc != 0x1DE084u) { ctx->pc = 0x1DE084u; }
    }
    if (ctx->pc != 0x1DE084u) { return; }
    ctx->pc = 0x1DE084u;
    // 0x1de084: 0x8e03005c
    ctx->pc = 0x1de084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1de088: 0x70403628
    ctx->pc = 0x1de088u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de08c: 0x3c020022
    ctx->pc = 0x1de08cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de090: 0x34450261
    ctx->pc = 0x1de090u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 609));
    // 0x1de094: 0x70003e28
    ctx->pc = 0x1de094u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de098: 0xc079e80
    ctx->pc = 0x1DE098u;
    SET_GPR_U32(ctx, 31, 0x1DE0A0u);
    ctx->pc = 0x1DE09Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0A0u; }
        else if (ctx->pc != 0x1DE0A0u) { ctx->pc = 0x1DE0A0u; }
    }
    if (ctx->pc != 0x1DE0A0u) { return; }
    ctx->pc = 0x1DE0A0u;
    // 0x1de0a0: 0x8e02005c
    ctx->pc = 0x1de0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1de0a4: 0x24050001
    ctx->pc = 0x1de0a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de0a8: 0xc07a4cc
    ctx->pc = 0x1DE0A8u;
    SET_GPR_U32(ctx, 31, 0x1DE0B0u);
    ctx->pc = 0x1DE0ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0B0u; }
        else if (ctx->pc != 0x1DE0B0u) { ctx->pc = 0x1DE0B0u; }
    }
    if (ctx->pc != 0x1DE0B0u) { return; }
    ctx->pc = 0x1DE0B0u;
    // 0x1de0b0: 0x263100f0
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1de0b4: 0x26520001
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1de0b8:
    // 0x1de0b8: 0x8e030008
    ctx->pc = 0x1de0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de0bc: 0x243182a
    ctx->pc = 0x1de0bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1de0c0: 0x1460ffee
    ctx->pc = 0x1DE0C0u;
    {
        const bool branch_taken_0x1de0c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE0C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4475));
        if (branch_taken_0x1de0c0) {
            ctx->pc = 0x1DE07Cu;
            goto label_1de07c;
        }
    }
    ctx->pc = 0x1DE0C8u;
    // 0x1de0c8: 0x70009628
    ctx->pc = 0x1de0c8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de0cc: 0x10000020
    ctx->pc = 0x1DE0CCu;
    {
        const bool branch_taken_0x1de0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE0D0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de0cc) {
            ctx->pc = 0x1DE150u;
            goto label_1de150;
        }
    }
    ctx->pc = 0x1DE0D4u;
label_1de0d4:
    // 0x1de0d4: 0xc07f208
    ctx->pc = 0x1DE0D4u;
    SET_GPR_U32(ctx, 31, 0x1DE0DCu);
    ctx->pc = 0x1DE0D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0DCu; }
        else if (ctx->pc != 0x1DE0DCu) { ctx->pc = 0x1DE0DCu; }
    }
    if (ctx->pc != 0x1DE0DCu) { return; }
    ctx->pc = 0x1DE0DCu;
    // 0x1de0dc: 0x2a410002
    ctx->pc = 0x1de0dcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 2));
    // 0x1de0e0: 0x1020000f
    ctx->pc = 0x1DE0E0u;
    {
        const bool branch_taken_0x1de0e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE0E4u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de0e0) {
            ctx->pc = 0x1DE120u;
            goto label_1de120;
        }
    }
    ctx->pc = 0x1DE0E8u;
    // 0x1de0e8: 0x8e030060
    ctx->pc = 0x1de0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de0ec: 0x70403628
    ctx->pc = 0x1de0ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de0f0: 0x3c020022
    ctx->pc = 0x1de0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1de0f4: 0x34450267
    ctx->pc = 0x1de0f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 615));
    // 0x1de0f8: 0x70003e28
    ctx->pc = 0x1de0f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de0fc: 0xc079e80
    ctx->pc = 0x1DE0FCu;
    SET_GPR_U32(ctx, 31, 0x1DE104u);
    ctx->pc = 0x1DE100u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE104u; }
        else if (ctx->pc != 0x1DE104u) { ctx->pc = 0x1DE104u; }
    }
    if (ctx->pc != 0x1DE104u) { return; }
    ctx->pc = 0x1DE104u;
    // 0x1de104: 0x8e020060
    ctx->pc = 0x1de104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de108: 0x24050001
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de10c: 0xc07a4cc
    ctx->pc = 0x1DE10Cu;
    SET_GPR_U32(ctx, 31, 0x1DE114u);
    ctx->pc = 0x1DE110u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE114u; }
        else if (ctx->pc != 0x1DE114u) { ctx->pc = 0x1DE114u; }
    }
    if (ctx->pc != 0x1DE114u) { return; }
    ctx->pc = 0x1DE114u;
    // 0x1de114: 0x1000000d
    ctx->pc = 0x1DE114u;
    {
        const bool branch_taken_0x1de114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE118u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1de114) {
            ctx->pc = 0x1DE14Cu;
            goto label_1de14c;
        }
    }
    ctx->pc = 0x1DE11Cu;
    // 0x1de11c: 0x70403628
    ctx->pc = 0x1de11cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1de120:
    // 0x1de120: 0x8e020060
    ctx->pc = 0x1de120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de124: 0x3c05001b
    ctx->pc = 0x1de124u;
    SET_GPR_U32(ctx, 5, ((uint32_t)27 << 16));
    // 0x1de128: 0x70003e28
    ctx->pc = 0x1de128u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de12c: 0xc079e80
    ctx->pc = 0x1DE12Cu;
    SET_GPR_U32(ctx, 31, 0x1DE134u);
    ctx->pc = 0x1DE130u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE134u; }
        else if (ctx->pc != 0x1DE134u) { ctx->pc = 0x1DE134u; }
    }
    if (ctx->pc != 0x1DE134u) { return; }
    ctx->pc = 0x1DE134u;
    // 0x1de134: 0x8e020060
    ctx->pc = 0x1de134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de138: 0x24050001
    ctx->pc = 0x1de138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de13c: 0xc07a4cc
    ctx->pc = 0x1DE13Cu;
    SET_GPR_U32(ctx, 31, 0x1DE144u);
    ctx->pc = 0x1DE140u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E9330u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPutForce__7CFcvTRSFi_0x1e9330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE144u; }
        else if (ctx->pc != 0x1DE144u) { ctx->pc = 0x1DE144u; }
    }
    if (ctx->pc != 0x1DE144u) { return; }
    ctx->pc = 0x1DE144u;
    // 0x1de144: 0x0
    ctx->pc = 0x1de144u;
    // NOP
    // 0x1de148: 0x263100f0
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1de14c:
    // 0x1de14c: 0x26520001
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1de150:
    // 0x1de150: 0x8e03000c
    ctx->pc = 0x1de150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1de154: 0x243182a
    ctx->pc = 0x1de154u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1de158: 0x1460ffde
    ctx->pc = 0x1DE158u;
    {
        const bool branch_taken_0x1de158 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE15Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4478));
        if (branch_taken_0x1de158) {
            ctx->pc = 0x1DE0D4u;
            goto label_1de0d4;
        }
    }
    ctx->pc = 0x1DE160u;
    // 0x1de160: 0x3c030027
    ctx->pc = 0x1de160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de164: 0x24639738
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940472));
    // 0x1de168: 0xc4620000
    ctx->pc = 0x1de168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de16c: 0xc4610004
    ctx->pc = 0x1de16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de170: 0xc4600008
    ctx->pc = 0x1de170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de174: 0xe6020114
    ctx->pc = 0x1de174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1de178: 0xe6010118
    ctx->pc = 0x1de178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1de17c: 0xe600011c
    ctx->pc = 0x1de17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1de180: 0x7bbf0030
    ctx->pc = 0x1de180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de184: 0x7bb20020
    ctx->pc = 0x1de184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de188: 0x7bb10010
    ctx->pc = 0x1de188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de18c: 0x7bb00000
    ctx->pc = 0x1de18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de190: 0x3e00008
    ctx->pc = 0x1DE190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDFA4u: goto label_1ddfa4;
            case 0x1DDFF0u: goto label_1ddff0;
            case 0x1DE02Cu: goto label_1de02c;
            case 0x1DE058u: goto label_1de058;
            case 0x1DE05Cu: goto label_1de05c;
            case 0x1DE060u: goto label_1de060;
            case 0x1DE07Cu: goto label_1de07c;
            case 0x1DE0B8u: goto label_1de0b8;
            case 0x1DE0D4u: goto label_1de0d4;
            case 0x1DE120u: goto label_1de120;
            case 0x1DE14Cu: goto label_1de14c;
            case 0x1DE150u: goto label_1de150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE198u;
}
