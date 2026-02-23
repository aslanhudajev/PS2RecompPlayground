#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss6B4MaskL__9FcvEffectFv
// Address: 0x1dd3d0 - 0x1dd4e4
void initBoss6B4MaskL__9FcvEffectFv_0x1dd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss6B4MaskL__9FcvEffectFv");


    ctx->pc = 0x1dd3d0u;

    // 0x1dd3d0: 0x27bdffe0
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd3d4: 0x7fbf0010
    ctx->pc = 0x1dd3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd3d8: 0x7fb00000
    ctx->pc = 0x1dd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd3dc: 0x3c010050
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dd3e0: 0x8c22ec44
    ctx->pc = 0x1dd3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962244)));
    // 0x1dd3e4: 0x70808628
    ctx->pc = 0x1dd3e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd3e8: 0xc06ab94
    ctx->pc = 0x1DD3E8u;
    SET_GPR_U32(ctx, 31, 0x1DD3F0u);
    ctx->pc = 0x1DD3ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7236)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3F0u; }
        else if (ctx->pc != 0x1DD3F0u) { ctx->pc = 0x1DD3F0u; }
    }
    if (ctx->pc != 0x1DD3F0u) { return; }
    ctx->pc = 0x1DD3F0u;
    // 0x1dd3f0: 0xc06878c
    ctx->pc = 0x1DD3F0u;
    SET_GPR_U32(ctx, 31, 0x1DD3F8u);
    ctx->pc = 0x1DD3F4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3F8u; }
        else if (ctx->pc != 0x1DD3F8u) { ctx->pc = 0x1DD3F8u; }
    }
    if (ctx->pc != 0x1DD3F8u) { return; }
    ctx->pc = 0x1DD3F8u;
    // 0x1dd3f8: 0xae020034
    ctx->pc = 0x1dd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1dd3fc: 0x3c010050
    ctx->pc = 0x1dd3fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dd400: 0x8c22ec44
    ctx->pc = 0x1dd400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962244)));
    // 0x1dd404: 0x8c451c44
    ctx->pc = 0x1dd404u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7236)));
    // 0x1dd408: 0xc06ab98
    ctx->pc = 0x1DD408u;
    SET_GPR_U32(ctx, 31, 0x1DD410u);
    ctx->pc = 0x1DD40Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD410u; }
        else if (ctx->pc != 0x1DD410u) { ctx->pc = 0x1DD410u; }
    }
    if (ctx->pc != 0x1DD410u) { return; }
    ctx->pc = 0x1DD410u;
    // 0x1dd410: 0xc06878c
    ctx->pc = 0x1DD410u;
    SET_GPR_U32(ctx, 31, 0x1DD418u);
    ctx->pc = 0x1DD414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 408));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD418u; }
        else if (ctx->pc != 0x1DD418u) { ctx->pc = 0x1DD418u; }
    }
    if (ctx->pc != 0x1DD418u) { return; }
    ctx->pc = 0x1DD418u;
    // 0x1dd418: 0xae020030
    ctx->pc = 0x1dd418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1dd41c: 0x72002628
    ctx->pc = 0x1dd41cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd420: 0x24050002
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd424: 0xc0761c4
    ctx->pc = 0x1DD424u;
    SET_GPR_U32(ctx, 31, 0x1DD42Cu);
    ctx->pc = 0x1DD428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD42Cu; }
        else if (ctx->pc != 0x1DD42Cu) { ctx->pc = 0x1DD42Cu; }
    }
    if (ctx->pc != 0x1DD42Cu) { return; }
    ctx->pc = 0x1DD42Cu;
    // 0x1dd42c: 0xae020054
    ctx->pc = 0x1dd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd430: 0x3c0241f0
    ctx->pc = 0x1dd430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd434: 0xae020028
    ctx->pc = 0x1dd434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd438: 0x27848d4c
    ctx->pc = 0x1dd438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd43c: 0xc07f208
    ctx->pc = 0x1DD43Cu;
    SET_GPR_U32(ctx, 31, 0x1DD444u);
    ctx->pc = 0x1DD440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2924));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD444u; }
        else if (ctx->pc != 0x1DD444u) { ctx->pc = 0x1DD444u; }
    }
    if (ctx->pc != 0x1DD444u) { return; }
    ctx->pc = 0x1DD444u;
    // 0x1dd444: 0x8e040054
    ctx->pc = 0x1dd444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd448: 0x70403628
    ctx->pc = 0x1dd448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd44c: 0x3c020023
    ctx->pc = 0x1dd44cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1dd450: 0x34450028
    ctx->pc = 0x1dd450u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 40));
    // 0x1dd454: 0xc079e80
    ctx->pc = 0x1DD454u;
    SET_GPR_U32(ctx, 31, 0x1DD45Cu);
    ctx->pc = 0x1DD458u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD45Cu; }
        else if (ctx->pc != 0x1DD45Cu) { ctx->pc = 0x1DD45Cu; }
    }
    if (ctx->pc != 0x1DD45Cu) { return; }
    ctx->pc = 0x1DD45Cu;
    // 0x1dd45c: 0x8e040054
    ctx->pc = 0x1dd45cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd460: 0x3c020023
    ctx->pc = 0x1dd460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1dd464: 0x34450028
    ctx->pc = 0x1dd464u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 40));
    // 0x1dd468: 0xc079eb4
    ctx->pc = 0x1DD468u;
    SET_GPR_U32(ctx, 31, 0x1DD470u);
    ctx->pc = 0x1DD46Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 59));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD470u; }
        else if (ctx->pc != 0x1DD470u) { ctx->pc = 0x1DD470u; }
    }
    if (ctx->pc != 0x1DD470u) { return; }
    ctx->pc = 0x1DD470u;
    // 0x1dd470: 0x24050002
    ctx->pc = 0x1dd470u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd474: 0x3c020027
    ctx->pc = 0x1dd474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1dd478: 0x260400bc
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 188));
    // 0x1dd47c: 0x70a03628
    ctx->pc = 0x1dd47cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd480: 0x70003e28
    ctx->pc = 0x1dd480u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd484: 0xc079b78
    ctx->pc = 0x1DD484u;
    SET_GPR_U32(ctx, 31, 0x1DD48Cu);
    ctx->pc = 0x1DD488u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294938496));
    ctx->pc = 0x1E6DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setKey__7CFcurveFiiiPf_0x1e6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD48Cu; }
        else if (ctx->pc != 0x1DD48Cu) { ctx->pc = 0x1DD48Cu; }
    }
    if (ctx->pc != 0x1DD48Cu) { return; }
    ctx->pc = 0x1DD48Cu;
    // 0x1dd48c: 0x27848d4c
    ctx->pc = 0x1dd48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd490: 0xc07f208
    ctx->pc = 0x1DD490u;
    SET_GPR_U32(ctx, 31, 0x1DD498u);
    ctx->pc = 0x1DD494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4336));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD498u; }
        else if (ctx->pc != 0x1DD498u) { ctx->pc = 0x1DD498u; }
    }
    if (ctx->pc != 0x1DD498u) { return; }
    ctx->pc = 0x1DD498u;
    // 0x1dd498: 0x8e040054
    ctx->pc = 0x1dd498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd49c: 0x3c030022
    ctx->pc = 0x1dd49cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1dd4a0: 0x3465025b
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 603));
    // 0x1dd4a4: 0x70403628
    ctx->pc = 0x1dd4a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd4a8: 0x70003e28
    ctx->pc = 0x1dd4a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd4ac: 0xc079e80
    ctx->pc = 0x1DD4ACu;
    SET_GPR_U32(ctx, 31, 0x1DD4B4u);
    ctx->pc = 0x1DD4B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4B4u; }
        else if (ctx->pc != 0x1DD4B4u) { ctx->pc = 0x1DD4B4u; }
    }
    if (ctx->pc != 0x1DD4B4u) { return; }
    ctx->pc = 0x1DD4B4u;
    // 0x1dd4b4: 0x3c030027
    ctx->pc = 0x1dd4b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd4b8: 0x24639698
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940312));
    // 0x1dd4bc: 0xc4620000
    ctx->pc = 0x1dd4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd4c0: 0xc4610004
    ctx->pc = 0x1dd4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd4c4: 0xc4600008
    ctx->pc = 0x1dd4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd4c8: 0xe6020114
    ctx->pc = 0x1dd4c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd4cc: 0xe6010118
    ctx->pc = 0x1dd4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd4d0: 0xe600011c
    ctx->pc = 0x1dd4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd4d4: 0x7bbf0010
    ctx->pc = 0x1dd4d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd4d8: 0x7bb00000
    ctx->pc = 0x1dd4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd4dc: 0x3e00008
    ctx->pc = 0x1DD4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD4E4u;
}
