#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss3xBomb__9FcvEffectFv
// Address: 0x1db340 - 0x1db464
void initBoss3xBomb__9FcvEffectFv_0x1db340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss3xBomb__9FcvEffectFv");


    ctx->pc = 0x1db340u;

    // 0x1db340: 0x27bdffb0
    ctx->pc = 0x1db340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db344: 0x7fbf0040
    ctx->pc = 0x1db344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db348: 0x7fb30030
    ctx->pc = 0x1db348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db34c: 0x7fb20020
    ctx->pc = 0x1db34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db350: 0x7fb10010
    ctx->pc = 0x1db350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db354: 0x70809628
    ctx->pc = 0x1db354u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db358: 0x2405002e
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1db35c: 0xc0761c4
    ctx->pc = 0x1DB35Cu;
    SET_GPR_U32(ctx, 31, 0x1DB364u);
    ctx->pc = 0x1DB360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB364u; }
        else if (ctx->pc != 0x1DB364u) { ctx->pc = 0x1DB364u; }
    }
    if (ctx->pc != 0x1DB364u) { return; }
    ctx->pc = 0x1DB364u;
    // 0x1db364: 0xae420054
    ctx->pc = 0x1db364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1db368: 0x3c03420c
    ctx->pc = 0x1db368u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16908 << 16));
    // 0x1db36c: 0xae430028
    ctx->pc = 0x1db36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1db370: 0x70008628
    ctx->pc = 0x1db370u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db374: 0x10000028
    ctx->pc = 0x1DB374u;
    {
        const bool branch_taken_0x1db374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB378u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db374) {
            ctx->pc = 0x1DB418u;
            goto label_1db418;
        }
    }
    ctx->pc = 0x1DB37Cu;
label_1db37c:
    // 0x1db37c: 0xc07f208
    ctx->pc = 0x1DB37Cu;
    SET_GPR_U32(ctx, 31, 0x1DB384u);
    ctx->pc = 0x1DB380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB384u; }
        else if (ctx->pc != 0x1DB384u) { ctx->pc = 0x1DB384u; }
    }
    if (ctx->pc != 0x1DB384u) { return; }
    ctx->pc = 0x1DB384u;
    // 0x1db384: 0x70409e28
    ctx->pc = 0x1db384u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db388: 0x26050b9d
    ctx->pc = 0x1db388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2973));
    // 0x1db38c: 0xc07f208
    ctx->pc = 0x1DB38Cu;
    SET_GPR_U32(ctx, 31, 0x1DB394u);
    ctx->pc = 0x1DB390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB394u; }
        else if (ctx->pc != 0x1DB394u) { ctx->pc = 0x1DB394u; }
    }
    if (ctx->pc != 0x1DB394u) { return; }
    ctx->pc = 0x1DB394u;
    // 0x1db394: 0x2a010015
    ctx->pc = 0x1db394u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 21));
    // 0x1db398: 0x1020000b
    ctx->pc = 0x1DB398u;
    {
        const bool branch_taken_0x1db398 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB39Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
        if (branch_taken_0x1db398) {
            ctx->pc = 0x1DB3C8u;
            goto label_1db3c8;
        }
    }
    ctx->pc = 0x1DB3A0u;
    // 0x1db3a0: 0x8e440054
    ctx->pc = 0x1db3a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db3a4: 0x3c03001e
    ctx->pc = 0x1db3a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db3a8: 0x72603628
    ctx->pc = 0x1db3a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db3ac: 0x3465002b
    ctx->pc = 0x1db3acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 43));
    // 0x1db3b0: 0x70403e28
    ctx->pc = 0x1db3b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db3b4: 0xc079e80
    ctx->pc = 0x1DB3B4u;
    SET_GPR_U32(ctx, 31, 0x1DB3BCu);
    ctx->pc = 0x1DB3B8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3BCu; }
        else if (ctx->pc != 0x1DB3BCu) { ctx->pc = 0x1DB3BCu; }
    }
    if (ctx->pc != 0x1DB3BCu) { return; }
    ctx->pc = 0x1DB3BCu;
    // 0x1db3bc: 0x10000015
    ctx->pc = 0x1DB3BCu;
    {
        const bool branch_taken_0x1db3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB3C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1db3bc) {
            ctx->pc = 0x1DB414u;
            goto label_1db414;
        }
    }
    ctx->pc = 0x1DB3C4u;
    // 0x1db3c4: 0x2a010019
    ctx->pc = 0x1db3c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 25));
label_1db3c8:
    // 0x1db3c8: 0x1020000a
    ctx->pc = 0x1DB3C8u;
    {
        const bool branch_taken_0x1db3c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db3c8) {
            ctx->pc = 0x1DB3F4u;
            goto label_1db3f4;
        }
    }
    ctx->pc = 0x1DB3D0u;
    // 0x1db3d0: 0x8e440054
    ctx->pc = 0x1db3d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db3d4: 0x3c03001e
    ctx->pc = 0x1db3d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db3d8: 0x72603628
    ctx->pc = 0x1db3d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db3dc: 0x34650029
    ctx->pc = 0x1db3dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 41));
    // 0x1db3e0: 0x70403e28
    ctx->pc = 0x1db3e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db3e4: 0xc079e80
    ctx->pc = 0x1DB3E4u;
    SET_GPR_U32(ctx, 31, 0x1DB3ECu);
    ctx->pc = 0x1DB3E8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB3ECu; }
        else if (ctx->pc != 0x1DB3ECu) { ctx->pc = 0x1DB3ECu; }
    }
    if (ctx->pc != 0x1DB3ECu) { return; }
    ctx->pc = 0x1DB3ECu;
    // 0x1db3ec: 0x10000008
    ctx->pc = 0x1DB3ECu;
    {
        const bool branch_taken_0x1db3ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db3ec) {
            ctx->pc = 0x1DB410u;
            goto label_1db410;
        }
    }
    ctx->pc = 0x1DB3F4u;
label_1db3f4:
    // 0x1db3f4: 0x8e440054
    ctx->pc = 0x1db3f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db3f8: 0x3c03001e
    ctx->pc = 0x1db3f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db3fc: 0x72603628
    ctx->pc = 0x1db3fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db400: 0x3465002c
    ctx->pc = 0x1db400u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 44));
    // 0x1db404: 0x70403e28
    ctx->pc = 0x1db404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db408: 0xc079e80
    ctx->pc = 0x1DB408u;
    SET_GPR_U32(ctx, 31, 0x1DB410u);
    ctx->pc = 0x1DB40Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB410u; }
        else if (ctx->pc != 0x1DB410u) { ctx->pc = 0x1DB410u; }
    }
    if (ctx->pc != 0x1DB410u) { return; }
    ctx->pc = 0x1DB410u;
label_1db410:
    // 0x1db410: 0x263100f0
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1db414:
    // 0x1db414: 0x26100001
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db418:
    // 0x1db418: 0x8e430000
    ctx->pc = 0x1db418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db41c: 0x203182a
    ctx->pc = 0x1db41cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db420: 0x1460ffd6
    ctx->pc = 0x1DB420u;
    {
        const bool branch_taken_0x1db420 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2927));
        if (branch_taken_0x1db420) {
            ctx->pc = 0x1DB37Cu;
            goto label_1db37c;
        }
    }
    ctx->pc = 0x1DB428u;
    // 0x1db428: 0x3c030027
    ctx->pc = 0x1db428u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db42c: 0x24638c58
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937688));
    // 0x1db430: 0xc4620000
    ctx->pc = 0x1db430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db434: 0xc4610004
    ctx->pc = 0x1db434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db438: 0xc4600008
    ctx->pc = 0x1db438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db43c: 0xe6420114
    ctx->pc = 0x1db43cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db440: 0xe6410118
    ctx->pc = 0x1db440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db444: 0xe640011c
    ctx->pc = 0x1db444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db448: 0x7bbf0040
    ctx->pc = 0x1db448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db44c: 0x7bb30030
    ctx->pc = 0x1db44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db450: 0x7bb20020
    ctx->pc = 0x1db450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db454: 0x7bb10010
    ctx->pc = 0x1db454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db458: 0x7bb00000
    ctx->pc = 0x1db458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db45c: 0x3e00008
    ctx->pc = 0x1DB45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB37Cu: goto label_1db37c;
            case 0x1DB3C8u: goto label_1db3c8;
            case 0x1DB3F4u: goto label_1db3f4;
            case 0x1DB410u: goto label_1db410;
            case 0x1DB414u: goto label_1db414;
            case 0x1DB418u: goto label_1db418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB464u;
}
