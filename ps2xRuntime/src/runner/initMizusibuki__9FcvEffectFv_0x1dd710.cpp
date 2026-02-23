#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMizusibuki__9FcvEffectFv
// Address: 0x1dd710 - 0x1dd88c
void initMizusibuki__9FcvEffectFv_0x1dd710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMizusibuki__9FcvEffectFv");


    ctx->pc = 0x1dd710u;

    // 0x1dd710: 0x27bdff90
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dd714: 0x7fbf0060
    ctx->pc = 0x1dd714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1dd718: 0x7fb50050
    ctx->pc = 0x1dd718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dd71c: 0x7fb40040
    ctx->pc = 0x1dd71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dd720: 0x7fb30030
    ctx->pc = 0x1dd720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dd724: 0x7fb20020
    ctx->pc = 0x1dd724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd728: 0x7fb10010
    ctx->pc = 0x1dd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd72c: 0x7080ae28
    ctx->pc = 0x1dd72cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd730: 0x2405002d
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
    // 0x1dd734: 0xc0761c4
    ctx->pc = 0x1DD734u;
    SET_GPR_U32(ctx, 31, 0x1DD73Cu);
    ctx->pc = 0x1DD738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD73Cu; }
        else if (ctx->pc != 0x1DD73Cu) { ctx->pc = 0x1DD73Cu; }
    }
    if (ctx->pc != 0x1DD73Cu) { return; }
    ctx->pc = 0x1DD73Cu;
    // 0x1dd73c: 0xaea20054
    ctx->pc = 0x1dd73cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x1dd740: 0x3c0241f0
    ctx->pc = 0x1dd740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd744: 0xaea20028
    ctx->pc = 0x1dd744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x1dd748: 0x27848d4c
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd74c: 0xc07f208
    ctx->pc = 0x1DD74Cu;
    SET_GPR_U32(ctx, 31, 0x1DD754u);
    ctx->pc = 0x1DD750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3954));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD754u; }
        else if (ctx->pc != 0x1DD754u) { ctx->pc = 0x1DD754u; }
    }
    if (ctx->pc != 0x1DD754u) { return; }
    ctx->pc = 0x1DD754u;
    // 0x1dd754: 0x70408628
    ctx->pc = 0x1dd754u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd758: 0x27848d4c
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd75c: 0xc07f208
    ctx->pc = 0x1DD75Cu;
    SET_GPR_U32(ctx, 31, 0x1DD764u);
    ctx->pc = 0x1DD760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3955));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD764u; }
        else if (ctx->pc != 0x1DD764u) { ctx->pc = 0x1DD764u; }
    }
    if (ctx->pc != 0x1DD764u) { return; }
    ctx->pc = 0x1DD764u;
    // 0x1dd764: 0x70408e28
    ctx->pc = 0x1dd764u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd768: 0x27848d4c
    ctx->pc = 0x1dd768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dd76c: 0xc07f208
    ctx->pc = 0x1DD76Cu;
    SET_GPR_U32(ctx, 31, 0x1DD774u);
    ctx->pc = 0x1DD770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3953));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD774u; }
        else if (ctx->pc != 0x1DD774u) { ctx->pc = 0x1DD774u; }
    }
    if (ctx->pc != 0x1DD774u) { return; }
    ctx->pc = 0x1DD774u;
    // 0x1dd774: 0x70409628
    ctx->pc = 0x1dd774u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd778: 0x70009e28
    ctx->pc = 0x1dd778u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd77c: 0x1000002e
    ctx->pc = 0x1DD77Cu;
    {
        const bool branch_taken_0x1dd77c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD780u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dd77c) {
            ctx->pc = 0x1DD838u;
            goto label_1dd838;
        }
    }
    ctx->pc = 0x1DD784u;
label_1dd784:
    // 0x1dd784: 0xc07f208
    ctx->pc = 0x1DD784u;
    SET_GPR_U32(ctx, 31, 0x1DD78Cu);
    ctx->pc = 0x1DD788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD78Cu; }
        else if (ctx->pc != 0x1DD78Cu) { ctx->pc = 0x1DD78Cu; }
    }
    if (ctx->pc != 0x1DD78Cu) { return; }
    ctx->pc = 0x1DD78Cu;
    // 0x1dd78c: 0x2a61000f
    ctx->pc = 0x1dd78cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 15));
    // 0x1dd790: 0x10200009
    ctx->pc = 0x1DD790u;
    {
        const bool branch_taken_0x1dd790 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD794u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dd790) {
            ctx->pc = 0x1DD7B8u;
            goto label_1dd7b8;
        }
    }
    ctx->pc = 0x1DD798u;
    // 0x1dd798: 0x8ea30054
    ctx->pc = 0x1dd798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd79c: 0x3c02001b
    ctx->pc = 0x1dd79cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1dd7a0: 0x34450086
    ctx->pc = 0x1dd7a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 134));
    // 0x1dd7a4: 0x72003e28
    ctx->pc = 0x1dd7a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd7a8: 0xc079e80
    ctx->pc = 0x1DD7A8u;
    SET_GPR_U32(ctx, 31, 0x1DD7B0u);
    ctx->pc = 0x1DD7ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7B0u; }
        else if (ctx->pc != 0x1DD7B0u) { ctx->pc = 0x1DD7B0u; }
    }
    if (ctx->pc != 0x1DD7B0u) { return; }
    ctx->pc = 0x1DD7B0u;
    // 0x1dd7b0: 0x10000016
    ctx->pc = 0x1DD7B0u;
    {
        const bool branch_taken_0x1dd7b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD7B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1dd7b0) {
            ctx->pc = 0x1DD80Cu;
            goto label_1dd80c;
        }
    }
    ctx->pc = 0x1DD7B8u;
label_1dd7b8:
    // 0x1dd7b8: 0x2a610015
    ctx->pc = 0x1dd7b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 21));
    // 0x1dd7bc: 0x1020000a
    ctx->pc = 0x1DD7BCu;
    {
        const bool branch_taken_0x1dd7bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DD7C0u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 45));
        if (branch_taken_0x1dd7bc) {
            ctx->pc = 0x1DD7E8u;
            goto label_1dd7e8;
        }
    }
    ctx->pc = 0x1DD7C4u;
    // 0x1dd7c4: 0x8ea30054
    ctx->pc = 0x1dd7c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd7c8: 0x3c02001b
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1dd7cc: 0x34450085
    ctx->pc = 0x1dd7ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 133));
    // 0x1dd7d0: 0x72203e28
    ctx->pc = 0x1dd7d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dd7d4: 0xc079e80
    ctx->pc = 0x1DD7D4u;
    SET_GPR_U32(ctx, 31, 0x1DD7DCu);
    ctx->pc = 0x1DD7D8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7DCu; }
        else if (ctx->pc != 0x1DD7DCu) { ctx->pc = 0x1DD7DCu; }
    }
    if (ctx->pc != 0x1DD7DCu) { return; }
    ctx->pc = 0x1DD7DCu;
    // 0x1dd7dc: 0x1000000a
    ctx->pc = 0x1DD7DCu;
    {
        const bool branch_taken_0x1dd7dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd7dc) {
            ctx->pc = 0x1DD808u;
            goto label_1dd808;
        }
    }
    ctx->pc = 0x1DD7E4u;
    // 0x1dd7e4: 0x2a61002d
    ctx->pc = 0x1dd7e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), 45));
label_1dd7e8:
    // 0x1dd7e8: 0x10200007
    ctx->pc = 0x1DD7E8u;
    {
        const bool branch_taken_0x1dd7e8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dd7e8) {
            ctx->pc = 0x1DD808u;
            goto label_1dd808;
        }
    }
    ctx->pc = 0x1DD7F0u;
    // 0x1dd7f0: 0x8ea30054
    ctx->pc = 0x1dd7f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1dd7f4: 0x3c02001b
    ctx->pc = 0x1dd7f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1dd7f8: 0x34450084
    ctx->pc = 0x1dd7f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 132));
    // 0x1dd7fc: 0x72403e28
    ctx->pc = 0x1dd7fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1dd800: 0xc079e80
    ctx->pc = 0x1DD800u;
    SET_GPR_U32(ctx, 31, 0x1DD808u);
    ctx->pc = 0x1DD804u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD808u; }
        else if (ctx->pc != 0x1DD808u) { ctx->pc = 0x1DD808u; }
    }
    if (ctx->pc != 0x1DD808u) { return; }
    ctx->pc = 0x1DD808u;
label_1dd808:
    // 0x1dd808: 0xc6ac002c
    ctx->pc = 0x1dd808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1dd80c:
    // 0x1dd80c: 0x3c033f80
    ctx->pc = 0x1dd80cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd810: 0x44830000
    ctx->pc = 0x1dd810u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd814: 0x0
    ctx->pc = 0x1dd814u;
    // NOP
    // 0x1dd818: 0x460c0032
    ctx->pc = 0x1dd818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd81c: 0x0
    ctx->pc = 0x1dd81cu;
    // NOP
    // 0x1dd820: 0x45030004
    ctx->pc = 0x1DD820u;
    {
        const bool branch_taken_0x1dd820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd820) {
            ctx->pc = 0x1DD824u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
            ctx->pc = 0x1DD834u;
            goto label_1dd834;
        }
    }
    ctx->pc = 0x1DD828u;
    // 0x1dd828: 0xc079ecc
    ctx->pc = 0x1DD828u;
    SET_GPR_U32(ctx, 31, 0x1DD830u);
    ctx->pc = 0x1DD82Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD830u; }
        else if (ctx->pc != 0x1DD830u) { ctx->pc = 0x1DD830u; }
    }
    if (ctx->pc != 0x1DD830u) { return; }
    ctx->pc = 0x1DD830u;
    // 0x1dd830: 0x269400f0
    ctx->pc = 0x1dd830u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 240));
label_1dd834:
    // 0x1dd834: 0x26730001
    ctx->pc = 0x1dd834u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1dd838:
    // 0x1dd838: 0x8ea30000
    ctx->pc = 0x1dd838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dd83c: 0x263182a
    ctx->pc = 0x1dd83cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1dd840: 0x1460ffd0
    ctx->pc = 0x1DD840u;
    {
        const bool branch_taken_0x1dd840 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DD844u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 3852));
        if (branch_taken_0x1dd840) {
            ctx->pc = 0x1DD784u;
            goto label_1dd784;
        }
    }
    ctx->pc = 0x1DD848u;
    // 0x1dd848: 0x3c030027
    ctx->pc = 0x1dd848u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd84c: 0x246396d8
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940376));
    // 0x1dd850: 0xc4620000
    ctx->pc = 0x1dd850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd854: 0xc4610004
    ctx->pc = 0x1dd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd858: 0xc4600008
    ctx->pc = 0x1dd858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd85c: 0xe6a20114
    ctx->pc = 0x1dd85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 276), bits); }
    // 0x1dd860: 0xe6a10118
    ctx->pc = 0x1dd860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 280), bits); }
    // 0x1dd864: 0xe6a0011c
    ctx->pc = 0x1dd864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 284), bits); }
    // 0x1dd868: 0x7bbf0060
    ctx->pc = 0x1dd868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd86c: 0x7bb50050
    ctx->pc = 0x1dd86cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd870: 0x7bb40040
    ctx->pc = 0x1dd870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd874: 0x7bb30030
    ctx->pc = 0x1dd874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd878: 0x7bb20020
    ctx->pc = 0x1dd878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd87c: 0x7bb10010
    ctx->pc = 0x1dd87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd880: 0x7bb00000
    ctx->pc = 0x1dd880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd884: 0x3e00008
    ctx->pc = 0x1DD884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD888u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD784u: goto label_1dd784;
            case 0x1DD7B8u: goto label_1dd7b8;
            case 0x1DD7E8u: goto label_1dd7e8;
            case 0x1DD808u: goto label_1dd808;
            case 0x1DD80Cu: goto label_1dd80c;
            case 0x1DD834u: goto label_1dd834;
            case 0x1DD838u: goto label_1dd838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD88Cu;
}
