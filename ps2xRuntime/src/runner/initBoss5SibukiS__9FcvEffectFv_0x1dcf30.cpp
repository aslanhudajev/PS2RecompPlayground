#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5SibukiS__9FcvEffectFv
// Address: 0x1dcf30 - 0x1dd024
void initBoss5SibukiS__9FcvEffectFv_0x1dcf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5SibukiS__9FcvEffectFv");


    ctx->pc = 0x1dcf30u;

    // 0x1dcf30: 0x27bdffb0
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dcf34: 0x7fbf0040
    ctx->pc = 0x1dcf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dcf38: 0x7fb30030
    ctx->pc = 0x1dcf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dcf3c: 0x7fb20020
    ctx->pc = 0x1dcf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcf40: 0x7fb10010
    ctx->pc = 0x1dcf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcf44: 0x70809e28
    ctx->pc = 0x1dcf44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dcf48: 0x24050004
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcf4c: 0xc0761c4
    ctx->pc = 0x1DCF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF54u);
    ctx->pc = 0x1DCF50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF54u; }
        else if (ctx->pc != 0x1DCF54u) { ctx->pc = 0x1DCF54u; }
    }
    if (ctx->pc != 0x1DCF54u) { return; }
    ctx->pc = 0x1DCF54u;
    // 0x1dcf54: 0xae620054
    ctx->pc = 0x1dcf54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dcf58: 0x3c024270
    ctx->pc = 0x1dcf58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1dcf5c: 0xae620028
    ctx->pc = 0x1dcf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dcf60: 0x27848d4c
    ctx->pc = 0x1dcf60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dcf64: 0xc07f208
    ctx->pc = 0x1DCF64u;
    SET_GPR_U32(ctx, 31, 0x1DCF6Cu);
    ctx->pc = 0x1DCF68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8370));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF6Cu; }
        else if (ctx->pc != 0x1DCF6Cu) { ctx->pc = 0x1DCF6Cu; }
    }
    if (ctx->pc != 0x1DCF6Cu) { return; }
    ctx->pc = 0x1DCF6Cu;
    // 0x1dcf6c: 0x70408628
    ctx->pc = 0x1dcf6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcf70: 0x70008e28
    ctx->pc = 0x1dcf70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcf74: 0x70009628
    ctx->pc = 0x1dcf74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dcf78:
    // 0x1dcf78: 0x262520ae
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8366));
    // 0x1dcf7c: 0xc07f208
    ctx->pc = 0x1DCF7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF84u);
    ctx->pc = 0x1DCF80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF84u; }
        else if (ctx->pc != 0x1DCF84u) { ctx->pc = 0x1DCF84u; }
    }
    if (ctx->pc != 0x1DCF84u) { return; }
    ctx->pc = 0x1DCF84u;
    // 0x1dcf84: 0x2a210003
    ctx->pc = 0x1dcf84u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 3));
    // 0x1dcf88: 0x1020000b
    ctx->pc = 0x1DCF88u;
    {
        const bool branch_taken_0x1dcf88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dcf88) {
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCF90u;
    // 0x1dcf90: 0x8e640054
    ctx->pc = 0x1dcf90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcf94: 0x3c030021
    ctx->pc = 0x1dcf94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dcf98: 0x34630039
    ctx->pc = 0x1dcf98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57));
    // 0x1dcf9c: 0x2232821
    ctx->pc = 0x1dcf9cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dcfa0: 0x70403628
    ctx->pc = 0x1dcfa0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcfa4: 0x70003e28
    ctx->pc = 0x1dcfa4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcfa8: 0xc079e80
    ctx->pc = 0x1DCFA8u;
    SET_GPR_U32(ctx, 31, 0x1DCFB0u);
    ctx->pc = 0x1DCFACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB0u; }
        else if (ctx->pc != 0x1DCFB0u) { ctx->pc = 0x1DCFB0u; }
    }
    if (ctx->pc != 0x1DCFB0u) { return; }
    ctx->pc = 0x1DCFB0u;
    // 0x1dcfb0: 0x1000000a
    ctx->pc = 0x1DCFB0u;
    {
        const bool branch_taken_0x1dcfb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCFB4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1dcfb0) {
            ctx->pc = 0x1DCFDCu;
            goto label_1dcfdc;
        }
    }
    ctx->pc = 0x1DCFB8u;
label_1dcfb8:
    // 0x1dcfb8: 0x8e640054
    ctx->pc = 0x1dcfb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcfbc: 0x3c030021
    ctx->pc = 0x1dcfbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dcfc0: 0x34630039
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57));
    // 0x1dcfc4: 0x2232821
    ctx->pc = 0x1dcfc4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dcfc8: 0x70403628
    ctx->pc = 0x1dcfc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcfcc: 0x72003e28
    ctx->pc = 0x1dcfccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dcfd0: 0xc079e80
    ctx->pc = 0x1DCFD0u;
    SET_GPR_U32(ctx, 31, 0x1DCFD8u);
    ctx->pc = 0x1DCFD4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
        else if (ctx->pc != 0x1DCFD8u) { ctx->pc = 0x1DCFD8u; }
    }
    if (ctx->pc != 0x1DCFD8u) { return; }
    ctx->pc = 0x1DCFD8u;
    // 0x1dcfd8: 0x26310001
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dcfdc:
    // 0x1dcfdc: 0x2a230004
    ctx->pc = 0x1dcfdcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 4));
    // 0x1dcfe0: 0x1460ffe5
    ctx->pc = 0x1DCFE0u;
    {
        const bool branch_taken_0x1dcfe0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCFE4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dcfe0) {
            ctx->pc = 0x1DCF78u;
            goto label_1dcf78;
        }
    }
    ctx->pc = 0x1DCFE8u;
    // 0x1dcfe8: 0x3c030027
    ctx->pc = 0x1dcfe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dcfec: 0x24638dc8
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x1dcff0: 0xc4620000
    ctx->pc = 0x1dcff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcff4: 0xc4610004
    ctx->pc = 0x1dcff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcff8: 0xc4600008
    ctx->pc = 0x1dcff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcffc: 0xe6620114
    ctx->pc = 0x1dcffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1dd000: 0xe6610118
    ctx->pc = 0x1dd000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1dd004: 0xe660011c
    ctx->pc = 0x1dd004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1dd008: 0x7bbf0040
    ctx->pc = 0x1dd008u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd00c: 0x7bb30030
    ctx->pc = 0x1dd00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd010: 0x7bb20020
    ctx->pc = 0x1dd010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd014: 0x7bb10010
    ctx->pc = 0x1dd014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd018: 0x7bb00000
    ctx->pc = 0x1dd018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd01c: 0x3e00008
    ctx->pc = 0x1DD01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCF78u: goto label_1dcf78;
            case 0x1DCFB8u: goto label_1dcfb8;
            case 0x1DCFDCu: goto label_1dcfdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD024u;
}
