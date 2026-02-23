#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initHamonLarge__9FcvEffectFv
// Address: 0x1dbfd0 - 0x1dc0c4
void initHamonLarge__9FcvEffectFv_0x1dbfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initHamonLarge__9FcvEffectFv");


    ctx->pc = 0x1dbfd0u;

    // 0x1dbfd0: 0x27bdffd0
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbfd4: 0x7fbf0020
    ctx->pc = 0x1dbfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1dbfd8: 0x7fb10010
    ctx->pc = 0x1dbfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbfdc: 0x7fb00000
    ctx->pc = 0x1dbfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dbfe0: 0x3c010050
    ctx->pc = 0x1dbfe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dbfe4: 0x8c22ebd4
    ctx->pc = 0x1dbfe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962132)));
    // 0x1dbfe8: 0x70808628
    ctx->pc = 0x1dbfe8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dbfec: 0xc06ab94
    ctx->pc = 0x1DBFECu;
    SET_GPR_U32(ctx, 31, 0x1DBFF4u);
    ctx->pc = 0x1DBFF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 912)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFF4u; }
        else if (ctx->pc != 0x1DBFF4u) { ctx->pc = 0x1DBFF4u; }
    }
    if (ctx->pc != 0x1DBFF4u) { return; }
    ctx->pc = 0x1DBFF4u;
    // 0x1dbff4: 0xc06878c
    ctx->pc = 0x1DBFF4u;
    SET_GPR_U32(ctx, 31, 0x1DBFFCu);
    ctx->pc = 0x1DBFF8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFFCu; }
        else if (ctx->pc != 0x1DBFFCu) { ctx->pc = 0x1DBFFCu; }
    }
    if (ctx->pc != 0x1DBFFCu) { return; }
    ctx->pc = 0x1DBFFCu;
    // 0x1dbffc: 0xae020034
    ctx->pc = 0x1dbffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1dc000: 0x3c010050
    ctx->pc = 0x1dc000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dc004: 0x8c22ebd4
    ctx->pc = 0x1dc004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962132)));
    // 0x1dc008: 0x8c450390
    ctx->pc = 0x1dc008u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x1dc00c: 0xc06ab98
    ctx->pc = 0x1DC00Cu;
    SET_GPR_U32(ctx, 31, 0x1DC014u);
    ctx->pc = 0x1DC010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC014u; }
        else if (ctx->pc != 0x1DC014u) { ctx->pc = 0x1DC014u; }
    }
    if (ctx->pc != 0x1DC014u) { return; }
    ctx->pc = 0x1DC014u;
    // 0x1dc014: 0xc06878c
    ctx->pc = 0x1DC014u;
    SET_GPR_U32(ctx, 31, 0x1DC01Cu);
    ctx->pc = 0x1DC018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 864));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC01Cu; }
        else if (ctx->pc != 0x1DC01Cu) { ctx->pc = 0x1DC01Cu; }
    }
    if (ctx->pc != 0x1DC01Cu) { return; }
    ctx->pc = 0x1DC01Cu;
    // 0x1dc01c: 0xae020030
    ctx->pc = 0x1dc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1dc020: 0x72002628
    ctx->pc = 0x1dc020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc024: 0xc0761c4
    ctx->pc = 0x1DC024u;
    SET_GPR_U32(ctx, 31, 0x1DC02Cu);
    ctx->pc = 0x1DC028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC02Cu; }
        else if (ctx->pc != 0x1DC02Cu) { ctx->pc = 0x1DC02Cu; }
    }
    if (ctx->pc != 0x1DC02Cu) { return; }
    ctx->pc = 0x1DC02Cu;
    // 0x1dc02c: 0xae020054
    ctx->pc = 0x1dc02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dc030: 0x3c0242c8
    ctx->pc = 0x1dc030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1dc034: 0xae020028
    ctx->pc = 0x1dc034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dc038: 0x24050002
    ctx->pc = 0x1dc038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc03c: 0x3c020026
    ctx->pc = 0x1dc03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1dc040: 0x260400a0
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    // 0x1dc044: 0x70a03628
    ctx->pc = 0x1dc044u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dc048: 0x70003e28
    ctx->pc = 0x1dc048u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc04c: 0xc079b78
    ctx->pc = 0x1DC04Cu;
    SET_GPR_U32(ctx, 31, 0x1DC054u);
    ctx->pc = 0x1DC050u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 24928));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC054u; }
        else if (ctx->pc != 0x1DC054u) { ctx->pc = 0x1DC054u; }
    }
    if (ctx->pc != 0x1DC054u) { return; }
    ctx->pc = 0x1DC054u;
    // 0x1dc054: 0x24020001
    ctx->pc = 0x1dc054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc058: 0xae020000
    ctx->pc = 0x1dc058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1dc05c: 0x27848d4c
    ctx->pc = 0x1dc05cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc060: 0xc07f208
    ctx->pc = 0x1DC060u;
    SET_GPR_U32(ctx, 31, 0x1DC068u);
    ctx->pc = 0x1DC064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3438));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC068u; }
        else if (ctx->pc != 0x1DC068u) { ctx->pc = 0x1DC068u; }
    }
    if (ctx->pc != 0x1DC068u) { return; }
    ctx->pc = 0x1DC068u;
    // 0x1dc068: 0x70408e28
    ctx->pc = 0x1dc068u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc06c: 0x27848d4c
    ctx->pc = 0x1dc06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc070: 0xc07f208
    ctx->pc = 0x1DC070u;
    SET_GPR_U32(ctx, 31, 0x1DC078u);
    ctx->pc = 0x1DC074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3439));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC078u; }
        else if (ctx->pc != 0x1DC078u) { ctx->pc = 0x1DC078u; }
    }
    if (ctx->pc != 0x1DC078u) { return; }
    ctx->pc = 0x1DC078u;
    // 0x1dc078: 0x8e040054
    ctx->pc = 0x1dc078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dc07c: 0x3c03001b
    ctx->pc = 0x1dc07cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc080: 0x72203628
    ctx->pc = 0x1dc080u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dc084: 0x3465004c
    ctx->pc = 0x1dc084u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 76));
    // 0x1dc088: 0xc079e80
    ctx->pc = 0x1DC088u;
    SET_GPR_U32(ctx, 31, 0x1DC090u);
    ctx->pc = 0x1DC08Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC090u; }
        else if (ctx->pc != 0x1DC090u) { ctx->pc = 0x1DC090u; }
    }
    if (ctx->pc != 0x1DC090u) { return; }
    ctx->pc = 0x1DC090u;
    // 0x1dc090: 0x3c030027
    ctx->pc = 0x1dc090u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc094: 0x24638d08
    ctx->pc = 0x1dc094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937864));
    // 0x1dc098: 0xc4620000
    ctx->pc = 0x1dc098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc09c: 0xc4610004
    ctx->pc = 0x1dc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc0a0: 0xc4600008
    ctx->pc = 0x1dc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc0a4: 0xe6020114
    ctx->pc = 0x1dc0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dc0a8: 0xe6010118
    ctx->pc = 0x1dc0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dc0ac: 0xe600011c
    ctx->pc = 0x1dc0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dc0b0: 0x7bbf0020
    ctx->pc = 0x1dc0b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc0b4: 0x7bb10010
    ctx->pc = 0x1dc0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc0b8: 0x7bb00000
    ctx->pc = 0x1dc0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc0bc: 0x3e00008
    ctx->pc = 0x1DC0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC0C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC0C4u;
}
