#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5SibukiL__9FcvEffectFv
// Address: 0x1dce30 - 0x1dcf24
void initBoss5SibukiL__9FcvEffectFv_0x1dce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5SibukiL__9FcvEffectFv");


    ctx->pc = 0x1dce30u;

    // 0x1dce30: 0x27bdffb0
    ctx->pc = 0x1dce30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dce34: 0x7fbf0040
    ctx->pc = 0x1dce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dce38: 0x7fb30030
    ctx->pc = 0x1dce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dce3c: 0x7fb20020
    ctx->pc = 0x1dce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dce40: 0x7fb10010
    ctx->pc = 0x1dce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dce44: 0x70809e28
    ctx->pc = 0x1dce44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dce48: 0x24050005
    ctx->pc = 0x1dce48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dce4c: 0xc0761c4
    ctx->pc = 0x1DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE54u);
    ctx->pc = 0x1DCE50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE54u; }
        else if (ctx->pc != 0x1DCE54u) { ctx->pc = 0x1DCE54u; }
    }
    if (ctx->pc != 0x1DCE54u) { return; }
    ctx->pc = 0x1DCE54u;
    // 0x1dce54: 0xae620054
    ctx->pc = 0x1dce54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dce58: 0x3c024348
    ctx->pc = 0x1dce58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17224 << 16));
    // 0x1dce5c: 0xae620028
    ctx->pc = 0x1dce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dce60: 0x27848d4c
    ctx->pc = 0x1dce60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dce64: 0xc07f208
    ctx->pc = 0x1DCE64u;
    SET_GPR_U32(ctx, 31, 0x1DCE6Cu);
    ctx->pc = 0x1DCE68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8365));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE6Cu; }
        else if (ctx->pc != 0x1DCE6Cu) { ctx->pc = 0x1DCE6Cu; }
    }
    if (ctx->pc != 0x1DCE6Cu) { return; }
    ctx->pc = 0x1DCE6Cu;
    // 0x1dce6c: 0x70408628
    ctx->pc = 0x1dce6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dce70: 0x70008e28
    ctx->pc = 0x1dce70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dce74: 0x70009628
    ctx->pc = 0x1dce74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dce78:
    // 0x1dce78: 0x262520a8
    ctx->pc = 0x1dce78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 8360));
    // 0x1dce7c: 0xc07f208
    ctx->pc = 0x1DCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE84u);
    ctx->pc = 0x1DCE80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE84u; }
        else if (ctx->pc != 0x1DCE84u) { ctx->pc = 0x1DCE84u; }
    }
    if (ctx->pc != 0x1DCE84u) { return; }
    ctx->pc = 0x1DCE84u;
    // 0x1dce84: 0x2a210004
    ctx->pc = 0x1dce84u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 4));
    // 0x1dce88: 0x1020000b
    ctx->pc = 0x1DCE88u;
    {
        const bool branch_taken_0x1dce88 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dce88) {
            ctx->pc = 0x1DCEB8u;
            goto label_1dceb8;
        }
    }
    ctx->pc = 0x1DCE90u;
    // 0x1dce90: 0x8e640054
    ctx->pc = 0x1dce90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dce94: 0x3c030021
    ctx->pc = 0x1dce94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dce98: 0x34630034
    ctx->pc = 0x1dce98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52));
    // 0x1dce9c: 0x2232821
    ctx->pc = 0x1dce9cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dcea0: 0x70403628
    ctx->pc = 0x1dcea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcea4: 0x70003e28
    ctx->pc = 0x1dcea4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcea8: 0xc079e80
    ctx->pc = 0x1DCEA8u;
    SET_GPR_U32(ctx, 31, 0x1DCEB0u);
    ctx->pc = 0x1DCEACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEB0u; }
        else if (ctx->pc != 0x1DCEB0u) { ctx->pc = 0x1DCEB0u; }
    }
    if (ctx->pc != 0x1DCEB0u) { return; }
    ctx->pc = 0x1DCEB0u;
    // 0x1dceb0: 0x1000000a
    ctx->pc = 0x1DCEB0u;
    {
        const bool branch_taken_0x1dceb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DCEB4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1dceb0) {
            ctx->pc = 0x1DCEDCu;
            goto label_1dcedc;
        }
    }
    ctx->pc = 0x1DCEB8u;
label_1dceb8:
    // 0x1dceb8: 0x8e640054
    ctx->pc = 0x1dceb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dcebc: 0x3c030021
    ctx->pc = 0x1dcebcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dcec0: 0x34630034
    ctx->pc = 0x1dcec0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52));
    // 0x1dcec4: 0x2232821
    ctx->pc = 0x1dcec4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dcec8: 0x70403628
    ctx->pc = 0x1dcec8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcecc: 0x72003e28
    ctx->pc = 0x1dceccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dced0: 0xc079e80
    ctx->pc = 0x1DCED0u;
    SET_GPR_U32(ctx, 31, 0x1DCED8u);
    ctx->pc = 0x1DCED4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED8u; }
        else if (ctx->pc != 0x1DCED8u) { ctx->pc = 0x1DCED8u; }
    }
    if (ctx->pc != 0x1DCED8u) { return; }
    ctx->pc = 0x1DCED8u;
    // 0x1dced8: 0x26310001
    ctx->pc = 0x1dced8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dcedc:
    // 0x1dcedc: 0x2a230005
    ctx->pc = 0x1dcedcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 5));
    // 0x1dcee0: 0x1460ffe5
    ctx->pc = 0x1DCEE0u;
    {
        const bool branch_taken_0x1dcee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DCEE4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dcee0) {
            ctx->pc = 0x1DCE78u;
            goto label_1dce78;
        }
    }
    ctx->pc = 0x1DCEE8u;
    // 0x1dcee8: 0x3c030027
    ctx->pc = 0x1dcee8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dceec: 0x24638db8
    ctx->pc = 0x1dceecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938040));
    // 0x1dcef0: 0xc4620000
    ctx->pc = 0x1dcef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcef4: 0xc4610004
    ctx->pc = 0x1dcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcef8: 0xc4600008
    ctx->pc = 0x1dcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcefc: 0xe6620114
    ctx->pc = 0x1dcefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1dcf00: 0xe6610118
    ctx->pc = 0x1dcf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1dcf04: 0xe660011c
    ctx->pc = 0x1dcf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1dcf08: 0x7bbf0040
    ctx->pc = 0x1dcf08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcf0c: 0x7bb30030
    ctx->pc = 0x1dcf0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcf10: 0x7bb20020
    ctx->pc = 0x1dcf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcf14: 0x7bb10010
    ctx->pc = 0x1dcf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcf18: 0x7bb00000
    ctx->pc = 0x1dcf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf1c: 0x3e00008
    ctx->pc = 0x1DCF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCE78u: goto label_1dce78;
            case 0x1DCEB8u: goto label_1dceb8;
            case 0x1DCEDCu: goto label_1dcedc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCF24u;
}
