#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss3xLaserPrep__9FcvEffectFv
// Address: 0x1db7c0 - 0x1db914
void initBoss3xLaserPrep__9FcvEffectFv_0x1db7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss3xLaserPrep__9FcvEffectFv");


    ctx->pc = 0x1db7c0u;

    // 0x1db7c0: 0x27bdffb0
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db7c4: 0x7fbf0040
    ctx->pc = 0x1db7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1db7c8: 0x7fb30030
    ctx->pc = 0x1db7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db7cc: 0x7fb20020
    ctx->pc = 0x1db7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db7d0: 0x7fb10010
    ctx->pc = 0x1db7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db7d4: 0x70809628
    ctx->pc = 0x1db7d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1db7d8: 0x24050040
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db7dc: 0xc0761c4
    ctx->pc = 0x1DB7DCu;
    SET_GPR_U32(ctx, 31, 0x1DB7E4u);
    ctx->pc = 0x1DB7E0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB7E4u; }
        else if (ctx->pc != 0x1DB7E4u) { ctx->pc = 0x1DB7E4u; }
    }
    if (ctx->pc != 0x1DB7E4u) { return; }
    ctx->pc = 0x1DB7E4u;
    // 0x1db7e4: 0xae420054
    ctx->pc = 0x1db7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1db7e8: 0x3c034270
    ctx->pc = 0x1db7e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17008 << 16));
    // 0x1db7ec: 0xae430028
    ctx->pc = 0x1db7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1db7f0: 0x70008628
    ctx->pc = 0x1db7f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db7f4: 0x10000034
    ctx->pc = 0x1DB7F4u;
    {
        const bool branch_taken_0x1db7f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB7F8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1db7f4) {
            ctx->pc = 0x1DB8C8u;
            goto label_1db8c8;
        }
    }
    ctx->pc = 0x1DB7FCu;
label_1db7fc:
    // 0x1db7fc: 0xc07f208
    ctx->pc = 0x1DB7FCu;
    SET_GPR_U32(ctx, 31, 0x1DB804u);
    ctx->pc = 0x1DB800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB804u; }
        else if (ctx->pc != 0x1DB804u) { ctx->pc = 0x1DB804u; }
    }
    if (ctx->pc != 0x1DB804u) { return; }
    ctx->pc = 0x1DB804u;
    // 0x1db804: 0x70409e28
    ctx->pc = 0x1db804u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db808: 0x26050926
    ctx->pc = 0x1db808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2342));
    // 0x1db80c: 0xc07f208
    ctx->pc = 0x1DB80Cu;
    SET_GPR_U32(ctx, 31, 0x1DB814u);
    ctx->pc = 0x1DB810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB814u; }
        else if (ctx->pc != 0x1DB814u) { ctx->pc = 0x1DB814u; }
    }
    if (ctx->pc != 0x1DB814u) { return; }
    ctx->pc = 0x1DB814u;
    // 0x1db814: 0x2a01001e
    ctx->pc = 0x1db814u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 30));
    // 0x1db818: 0x1020000b
    ctx->pc = 0x1DB818u;
    {
        const bool branch_taken_0x1db818 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB81Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 33));
        if (branch_taken_0x1db818) {
            ctx->pc = 0x1DB848u;
            goto label_1db848;
        }
    }
    ctx->pc = 0x1DB820u;
    // 0x1db820: 0x8e440054
    ctx->pc = 0x1db820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db824: 0x3c03001e
    ctx->pc = 0x1db824u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db828: 0x72603628
    ctx->pc = 0x1db828u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db82c: 0x3465003e
    ctx->pc = 0x1db82cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 62));
    // 0x1db830: 0x70403e28
    ctx->pc = 0x1db830u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db834: 0xc079e80
    ctx->pc = 0x1DB834u;
    SET_GPR_U32(ctx, 31, 0x1DB83Cu);
    ctx->pc = 0x1DB838u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB83Cu; }
        else if (ctx->pc != 0x1DB83Cu) { ctx->pc = 0x1DB83Cu; }
    }
    if (ctx->pc != 0x1DB83Cu) { return; }
    ctx->pc = 0x1DB83Cu;
    // 0x1db83c: 0x10000021
    ctx->pc = 0x1DB83Cu;
    {
        const bool branch_taken_0x1db83c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB840u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1db83c) {
            ctx->pc = 0x1DB8C4u;
            goto label_1db8c4;
        }
    }
    ctx->pc = 0x1DB844u;
    // 0x1db844: 0x2a010021
    ctx->pc = 0x1db844u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 33));
label_1db848:
    // 0x1db848: 0x1020000b
    ctx->pc = 0x1DB848u;
    {
        const bool branch_taken_0x1db848 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DB84Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 63));
        if (branch_taken_0x1db848) {
            ctx->pc = 0x1DB878u;
            goto label_1db878;
        }
    }
    ctx->pc = 0x1DB850u;
    // 0x1db850: 0x8e430054
    ctx->pc = 0x1db850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db854: 0x3c02001e
    ctx->pc = 0x1db854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x1db858: 0x72603628
    ctx->pc = 0x1db858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db85c: 0x34450034
    ctx->pc = 0x1db85cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 52));
    // 0x1db860: 0x70003e28
    ctx->pc = 0x1db860u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db864: 0xc079e80
    ctx->pc = 0x1DB864u;
    SET_GPR_U32(ctx, 31, 0x1DB86Cu);
    ctx->pc = 0x1DB868u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB86Cu; }
        else if (ctx->pc != 0x1DB86Cu) { ctx->pc = 0x1DB86Cu; }
    }
    if (ctx->pc != 0x1DB86Cu) { return; }
    ctx->pc = 0x1DB86Cu;
    // 0x1db86c: 0x10000014
    ctx->pc = 0x1DB86Cu;
    {
        const bool branch_taken_0x1db86c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db86c) {
            ctx->pc = 0x1DB8C0u;
            goto label_1db8c0;
        }
    }
    ctx->pc = 0x1DB874u;
    // 0x1db874: 0x2a01003f
    ctx->pc = 0x1db874u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 63));
label_1db878:
    // 0x1db878: 0x1020000a
    ctx->pc = 0x1DB878u;
    {
        const bool branch_taken_0x1db878 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db878) {
            ctx->pc = 0x1DB8A4u;
            goto label_1db8a4;
        }
    }
    ctx->pc = 0x1DB880u;
    // 0x1db880: 0x8e440054
    ctx->pc = 0x1db880u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db884: 0x3c03001e
    ctx->pc = 0x1db884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db888: 0x72603628
    ctx->pc = 0x1db888u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db88c: 0x3465002b
    ctx->pc = 0x1db88cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 43));
    // 0x1db890: 0x70403e28
    ctx->pc = 0x1db890u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db894: 0xc079e80
    ctx->pc = 0x1DB894u;
    SET_GPR_U32(ctx, 31, 0x1DB89Cu);
    ctx->pc = 0x1DB898u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB89Cu; }
        else if (ctx->pc != 0x1DB89Cu) { ctx->pc = 0x1DB89Cu; }
    }
    if (ctx->pc != 0x1DB89Cu) { return; }
    ctx->pc = 0x1DB89Cu;
    // 0x1db89c: 0x10000008
    ctx->pc = 0x1DB89Cu;
    {
        const bool branch_taken_0x1db89c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db89c) {
            ctx->pc = 0x1DB8C0u;
            goto label_1db8c0;
        }
    }
    ctx->pc = 0x1DB8A4u;
label_1db8a4:
    // 0x1db8a4: 0x8e440054
    ctx->pc = 0x1db8a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1db8a8: 0x3c03001e
    ctx->pc = 0x1db8a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1db8ac: 0x72603628
    ctx->pc = 0x1db8acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1db8b0: 0x3465002a
    ctx->pc = 0x1db8b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 42));
    // 0x1db8b4: 0x70403e28
    ctx->pc = 0x1db8b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db8b8: 0xc079e80
    ctx->pc = 0x1DB8B8u;
    SET_GPR_U32(ctx, 31, 0x1DB8C0u);
    ctx->pc = 0x1DB8BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB8C0u; }
        else if (ctx->pc != 0x1DB8C0u) { ctx->pc = 0x1DB8C0u; }
    }
    if (ctx->pc != 0x1DB8C0u) { return; }
    ctx->pc = 0x1DB8C0u;
label_1db8c0:
    // 0x1db8c0: 0x263100f0
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1db8c4:
    // 0x1db8c4: 0x26100001
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1db8c8:
    // 0x1db8c8: 0x8e430000
    ctx->pc = 0x1db8c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db8cc: 0x203182a
    ctx->pc = 0x1db8ccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1db8d0: 0x1460ffca
    ctx->pc = 0x1DB8D0u;
    {
        const bool branch_taken_0x1db8d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DB8D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2278));
        if (branch_taken_0x1db8d0) {
            ctx->pc = 0x1DB7FCu;
            goto label_1db7fc;
        }
    }
    ctx->pc = 0x1DB8D8u;
    // 0x1db8d8: 0x3c030027
    ctx->pc = 0x1db8d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1db8dc: 0x24638ca8
    ctx->pc = 0x1db8dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937768));
    // 0x1db8e0: 0xc4620000
    ctx->pc = 0x1db8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db8e4: 0xc4610004
    ctx->pc = 0x1db8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db8e8: 0xc4600008
    ctx->pc = 0x1db8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db8ec: 0xe6420114
    ctx->pc = 0x1db8ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1db8f0: 0xe6410118
    ctx->pc = 0x1db8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1db8f4: 0xe640011c
    ctx->pc = 0x1db8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1db8f8: 0x7bbf0040
    ctx->pc = 0x1db8f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db8fc: 0x7bb30030
    ctx->pc = 0x1db8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db900: 0x7bb20020
    ctx->pc = 0x1db900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db904: 0x7bb10010
    ctx->pc = 0x1db904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db908: 0x7bb00000
    ctx->pc = 0x1db908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db90c: 0x3e00008
    ctx->pc = 0x1DB90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB7FCu: goto label_1db7fc;
            case 0x1DB848u: goto label_1db848;
            case 0x1DB878u: goto label_1db878;
            case 0x1DB8A4u: goto label_1db8a4;
            case 0x1DB8C0u: goto label_1db8c0;
            case 0x1DB8C4u: goto label_1db8c4;
            case 0x1DB8C8u: goto label_1db8c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB914u;
}
