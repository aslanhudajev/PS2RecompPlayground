#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initHamonSmall__9FcvEffectFv
// Address: 0x1dbed0 - 0x1dbfc4
void initHamonSmall__9FcvEffectFv_0x1dbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initHamonSmall__9FcvEffectFv");


    ctx->pc = 0x1dbed0u;

    // 0x1dbed0: 0x27bdffd0
    ctx->pc = 0x1dbed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbed4: 0x7fbf0020
    ctx->pc = 0x1dbed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1dbed8: 0x7fb10010
    ctx->pc = 0x1dbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbedc: 0x7fb00000
    ctx->pc = 0x1dbedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dbee0: 0x3c010050
    ctx->pc = 0x1dbee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dbee4: 0x8c22ebd4
    ctx->pc = 0x1dbee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962132)));
    // 0x1dbee8: 0x70808628
    ctx->pc = 0x1dbee8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dbeec: 0xc06ab94
    ctx->pc = 0x1DBEECu;
    SET_GPR_U32(ctx, 31, 0x1DBEF4u);
    ctx->pc = 0x1DBEF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 912)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEF4u; }
        else if (ctx->pc != 0x1DBEF4u) { ctx->pc = 0x1DBEF4u; }
    }
    if (ctx->pc != 0x1DBEF4u) { return; }
    ctx->pc = 0x1DBEF4u;
    // 0x1dbef4: 0xc06878c
    ctx->pc = 0x1DBEF4u;
    SET_GPR_U32(ctx, 31, 0x1DBEFCu);
    ctx->pc = 0x1DBEF8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEFCu; }
        else if (ctx->pc != 0x1DBEFCu) { ctx->pc = 0x1DBEFCu; }
    }
    if (ctx->pc != 0x1DBEFCu) { return; }
    ctx->pc = 0x1DBEFCu;
    // 0x1dbefc: 0xae020034
    ctx->pc = 0x1dbefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1dbf00: 0x3c010050
    ctx->pc = 0x1dbf00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dbf04: 0x8c22ebd4
    ctx->pc = 0x1dbf04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962132)));
    // 0x1dbf08: 0x8c450390
    ctx->pc = 0x1dbf08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x1dbf0c: 0xc06ab98
    ctx->pc = 0x1DBF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBF14u);
    ctx->pc = 0x1DBF10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF14u; }
        else if (ctx->pc != 0x1DBF14u) { ctx->pc = 0x1DBF14u; }
    }
    if (ctx->pc != 0x1DBF14u) { return; }
    ctx->pc = 0x1DBF14u;
    // 0x1dbf14: 0xc06878c
    ctx->pc = 0x1DBF14u;
    SET_GPR_U32(ctx, 31, 0x1DBF1Cu);
    ctx->pc = 0x1DBF18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 864));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF1Cu; }
        else if (ctx->pc != 0x1DBF1Cu) { ctx->pc = 0x1DBF1Cu; }
    }
    if (ctx->pc != 0x1DBF1Cu) { return; }
    ctx->pc = 0x1DBF1Cu;
    // 0x1dbf1c: 0xae020030
    ctx->pc = 0x1dbf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1dbf20: 0x72002628
    ctx->pc = 0x1dbf20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dbf24: 0xc0761c4
    ctx->pc = 0x1DBF24u;
    SET_GPR_U32(ctx, 31, 0x1DBF2Cu);
    ctx->pc = 0x1DBF28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF2Cu; }
        else if (ctx->pc != 0x1DBF2Cu) { ctx->pc = 0x1DBF2Cu; }
    }
    if (ctx->pc != 0x1DBF2Cu) { return; }
    ctx->pc = 0x1DBF2Cu;
    // 0x1dbf2c: 0xae020054
    ctx->pc = 0x1dbf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dbf30: 0x3c024248
    ctx->pc = 0x1dbf30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x1dbf34: 0xae020028
    ctx->pc = 0x1dbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dbf38: 0x24050002
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbf3c: 0x3c020026
    ctx->pc = 0x1dbf3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1dbf40: 0x260400a0
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    // 0x1dbf44: 0x70a03628
    ctx->pc = 0x1dbf44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dbf48: 0x70003e28
    ctx->pc = 0x1dbf48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dbf4c: 0xc079b78
    ctx->pc = 0x1DBF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBF54u);
    ctx->pc = 0x1DBF50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 25008));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF54u; }
        else if (ctx->pc != 0x1DBF54u) { ctx->pc = 0x1DBF54u; }
    }
    if (ctx->pc != 0x1DBF54u) { return; }
    ctx->pc = 0x1DBF54u;
    // 0x1dbf54: 0x24020001
    ctx->pc = 0x1dbf54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf58: 0xae020000
    ctx->pc = 0x1dbf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1dbf5c: 0x27848d4c
    ctx->pc = 0x1dbf5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dbf60: 0xc07f208
    ctx->pc = 0x1DBF60u;
    SET_GPR_U32(ctx, 31, 0x1DBF68u);
    ctx->pc = 0x1DBF64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3440));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF68u; }
        else if (ctx->pc != 0x1DBF68u) { ctx->pc = 0x1DBF68u; }
    }
    if (ctx->pc != 0x1DBF68u) { return; }
    ctx->pc = 0x1DBF68u;
    // 0x1dbf68: 0x70408e28
    ctx->pc = 0x1dbf68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dbf6c: 0x27848d4c
    ctx->pc = 0x1dbf6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dbf70: 0xc07f208
    ctx->pc = 0x1DBF70u;
    SET_GPR_U32(ctx, 31, 0x1DBF78u);
    ctx->pc = 0x1DBF74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3441));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF78u; }
        else if (ctx->pc != 0x1DBF78u) { ctx->pc = 0x1DBF78u; }
    }
    if (ctx->pc != 0x1DBF78u) { return; }
    ctx->pc = 0x1DBF78u;
    // 0x1dbf78: 0x8e040054
    ctx->pc = 0x1dbf78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dbf7c: 0x3c03001b
    ctx->pc = 0x1dbf7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dbf80: 0x72203628
    ctx->pc = 0x1dbf80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dbf84: 0x3465004c
    ctx->pc = 0x1dbf84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 76));
    // 0x1dbf88: 0xc079e80
    ctx->pc = 0x1DBF88u;
    SET_GPR_U32(ctx, 31, 0x1DBF90u);
    ctx->pc = 0x1DBF8Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF90u; }
        else if (ctx->pc != 0x1DBF90u) { ctx->pc = 0x1DBF90u; }
    }
    if (ctx->pc != 0x1DBF90u) { return; }
    ctx->pc = 0x1DBF90u;
    // 0x1dbf90: 0x3c030027
    ctx->pc = 0x1dbf90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dbf94: 0x24638cf8
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937848));
    // 0x1dbf98: 0xc4620000
    ctx->pc = 0x1dbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbf9c: 0xc4610004
    ctx->pc = 0x1dbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbfa0: 0xc4600008
    ctx->pc = 0x1dbfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbfa4: 0xe6020114
    ctx->pc = 0x1dbfa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dbfa8: 0xe6010118
    ctx->pc = 0x1dbfa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dbfac: 0xe600011c
    ctx->pc = 0x1dbfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dbfb0: 0x7bbf0020
    ctx->pc = 0x1dbfb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbfb4: 0x7bb10010
    ctx->pc = 0x1dbfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbfb8: 0x7bb00000
    ctx->pc = 0x1dbfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbfbc: 0x3e00008
    ctx->pc = 0x1DBFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBFC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBFC4u;
}
