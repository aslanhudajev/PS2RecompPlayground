#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B4MaskS__9FcvEffectFv
// Address: 0x1dd570 - 0x1dd688
void initBoss6B4MaskS__9FcvEffectFv_0x1dd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B4MaskS__9FcvEffectFv");


    ctx->pc = 0x1dd570u;

    // 0x1dd570: 0x27bdffe0
    ctx->pc = 0x1dd570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd574: 0x7fbf0010
    ctx->pc = 0x1dd574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd578: 0x7fb00000
    ctx->pc = 0x1dd578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd57c: 0x3c010050
    ctx->pc = 0x1dd57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dd580: 0x8c22ec44
    ctx->pc = 0x1dd580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962244)));
    // 0x1dd584: 0x70808628
    ctx->pc = 0x1dd584u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd588: 0xc06ab94
    ctx->pc = 0x1DD588u;
    SET_GPR_U32(ctx, 31, 0x1DD590u);
    ctx->pc = 0x1DD58Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7260)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD590u; }
        else if (ctx->pc != 0x1DD590u) { ctx->pc = 0x1DD590u; }
    }
    if (ctx->pc != 0x1DD590u) { return; }
    ctx->pc = 0x1DD590u;
    // 0x1dd590: 0xc06878c
    ctx->pc = 0x1DD590u;
    SET_GPR_U32(ctx, 31, 0x1DD598u);
    ctx->pc = 0x1DD594u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD598u; }
        else if (ctx->pc != 0x1DD598u) { ctx->pc = 0x1DD598u; }
    }
    if (ctx->pc != 0x1DD598u) { return; }
    ctx->pc = 0x1DD598u;
    // 0x1dd598: 0xae020034
    ctx->pc = 0x1dd598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1dd59c: 0x3c010050
    ctx->pc = 0x1dd59cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dd5a0: 0x8c22ec44
    ctx->pc = 0x1dd5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962244)));
    // 0x1dd5a4: 0x8c451c5c
    ctx->pc = 0x1dd5a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7260)));
    // 0x1dd5a8: 0xc06ab98
    ctx->pc = 0x1DD5A8u;
    SET_GPR_U32(ctx, 31, 0x1DD5B0u);
    ctx->pc = 0x1DD5ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5B0u; }
        else if (ctx->pc != 0x1DD5B0u) { ctx->pc = 0x1DD5B0u; }
    }
    if (ctx->pc != 0x1DD5B0u) { return; }
    ctx->pc = 0x1DD5B0u;
    // 0x1dd5b0: 0xc06878c
    ctx->pc = 0x1DD5B0u;
    SET_GPR_U32(ctx, 31, 0x1DD5B8u);
    ctx->pc = 0x1DD5B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 408));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5B8u; }
        else if (ctx->pc != 0x1DD5B8u) { ctx->pc = 0x1DD5B8u; }
    }
    if (ctx->pc != 0x1DD5B8u) { return; }
    ctx->pc = 0x1DD5B8u;
    // 0x1dd5b8: 0xae020030
    ctx->pc = 0x1dd5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1dd5bc: 0x24020001
    ctx->pc = 0x1dd5bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd5c0: 0xae020018
    ctx->pc = 0x1dd5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1dd5c4: 0x72002628
    ctx->pc = 0x1dd5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd5c8: 0xc0761c4
    ctx->pc = 0x1DD5C8u;
    SET_GPR_U32(ctx, 31, 0x1DD5D0u);
    ctx->pc = 0x1DD5CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5D0u; }
        else if (ctx->pc != 0x1DD5D0u) { ctx->pc = 0x1DD5D0u; }
    }
    if (ctx->pc != 0x1DD5D0u) { return; }
    ctx->pc = 0x1DD5D0u;
    // 0x1dd5d0: 0xae020054
    ctx->pc = 0x1dd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd5d4: 0x3c0241f0
    ctx->pc = 0x1dd5d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd5d8: 0xae020028
    ctx->pc = 0x1dd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd5dc: 0x27848d4c
    ctx->pc = 0x1dd5dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd5e0: 0xc07f208
    ctx->pc = 0x1DD5E0u;
    SET_GPR_U32(ctx, 31, 0x1DD5E8u);
    ctx->pc = 0x1DD5E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2926));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5E8u; }
        else if (ctx->pc != 0x1DD5E8u) { ctx->pc = 0x1DD5E8u; }
    }
    if (ctx->pc != 0x1DD5E8u) { return; }
    ctx->pc = 0x1DD5E8u;
    // 0x1dd5e8: 0x8e040054
    ctx->pc = 0x1dd5e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd5ec: 0x70403628
    ctx->pc = 0x1dd5ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd5f0: 0x3c020023
    ctx->pc = 0x1dd5f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1dd5f4: 0x34450028
    ctx->pc = 0x1dd5f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 40));
    // 0x1dd5f8: 0xc079e80
    ctx->pc = 0x1DD5F8u;
    SET_GPR_U32(ctx, 31, 0x1DD600u);
    ctx->pc = 0x1DD5FCu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD600u; }
        else if (ctx->pc != 0x1DD600u) { ctx->pc = 0x1DD600u; }
    }
    if (ctx->pc != 0x1DD600u) { return; }
    ctx->pc = 0x1DD600u;
    // 0x1dd600: 0x8e040054
    ctx->pc = 0x1dd600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd604: 0x3c020023
    ctx->pc = 0x1dd604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1dd608: 0x34450028
    ctx->pc = 0x1dd608u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 40));
    // 0x1dd60c: 0xc079eb4
    ctx->pc = 0x1DD60Cu;
    SET_GPR_U32(ctx, 31, 0x1DD614u);
    ctx->pc = 0x1DD610u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 59));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD614u; }
        else if (ctx->pc != 0x1DD614u) { ctx->pc = 0x1DD614u; }
    }
    if (ctx->pc != 0x1DD614u) { return; }
    ctx->pc = 0x1DD614u;
    // 0x1dd614: 0x24050002
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd618: 0x3c020027
    ctx->pc = 0x1dd618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1dd61c: 0x260400bc
    ctx->pc = 0x1dd61cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 188));
    // 0x1dd620: 0x70a03628
    ctx->pc = 0x1dd620u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd624: 0x70003e28
    ctx->pc = 0x1dd624u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd628: 0xc079b78
    ctx->pc = 0x1DD628u;
    SET_GPR_U32(ctx, 31, 0x1DD630u);
    ctx->pc = 0x1DD62Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294939408));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD630u; }
        else if (ctx->pc != 0x1DD630u) { ctx->pc = 0x1DD630u; }
    }
    if (ctx->pc != 0x1DD630u) { return; }
    ctx->pc = 0x1DD630u;
    // 0x1dd630: 0x27848d4c
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd634: 0xc07f208
    ctx->pc = 0x1DD634u;
    SET_GPR_U32(ctx, 31, 0x1DD63Cu);
    ctx->pc = 0x1DD638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4336));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD63Cu; }
        else if (ctx->pc != 0x1DD63Cu) { ctx->pc = 0x1DD63Cu; }
    }
    if (ctx->pc != 0x1DD63Cu) { return; }
    ctx->pc = 0x1DD63Cu;
    // 0x1dd63c: 0x8e040054
    ctx->pc = 0x1dd63cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd640: 0x3c030022
    ctx->pc = 0x1dd640u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dd644: 0x3465025d
    ctx->pc = 0x1dd644u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 605));
    // 0x1dd648: 0x70403628
    ctx->pc = 0x1dd648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd64c: 0x70003e28
    ctx->pc = 0x1dd64cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd650: 0xc079e80
    ctx->pc = 0x1DD650u;
    SET_GPR_U32(ctx, 31, 0x1DD658u);
    ctx->pc = 0x1DD654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD658u; }
        else if (ctx->pc != 0x1DD658u) { ctx->pc = 0x1DD658u; }
    }
    if (ctx->pc != 0x1DD658u) { return; }
    ctx->pc = 0x1DD658u;
    // 0x1dd658: 0x3c030027
    ctx->pc = 0x1dd658u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd65c: 0x246396b8
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940344));
    // 0x1dd660: 0xc4620000
    ctx->pc = 0x1dd660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd664: 0xc4610004
    ctx->pc = 0x1dd664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd668: 0xc4600008
    ctx->pc = 0x1dd668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd66c: 0xe6020114
    ctx->pc = 0x1dd66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd670: 0xe6010118
    ctx->pc = 0x1dd670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd674: 0xe600011c
    ctx->pc = 0x1dd674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd678: 0x7bbf0010
    ctx->pc = 0x1dd678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd67c: 0x7bb00000
    ctx->pc = 0x1dd67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd680: 0x3e00008
    ctx->pc = 0x1DD680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD688u;
}
