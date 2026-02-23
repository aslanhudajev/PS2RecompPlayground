#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st5EnsyutuTaki__14TrnKomono2TaskFv
// Address: 0x2237b0 - 0x2239fc
void st5EnsyutuTaki__14TrnKomono2TaskFv_0x2237b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st5EnsyutuTaki__14TrnKomono2TaskFv");


    ctx->pc = 0x2237b0u;

    // 0x2237b0: 0x27bdffc0
    ctx->pc = 0x2237b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2237b4: 0x7fbf0030
    ctx->pc = 0x2237b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2237b8: 0x7fb20020
    ctx->pc = 0x2237b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2237bc: 0x7fb10010
    ctx->pc = 0x2237bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2237c0: 0x7fb00000
    ctx->pc = 0x2237c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2237c4: 0x8f858c48
    ctx->pc = 0x2237c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2237c8: 0x70808628
    ctx->pc = 0x2237c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2237cc: 0x2402013a
    ctx->pc = 0x2237ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 314));
    // 0x2237d0: 0x8ca40004
    ctx->pc = 0x2237d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2237d4: 0x41840
    ctx->pc = 0x2237d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2237d8: 0x641821
    ctx->pc = 0x2237d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2237dc: 0x31880
    ctx->pc = 0x2237dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2237e0: 0x641821
    ctx->pc = 0x2237e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2237e4: 0x31900
    ctx->pc = 0x2237e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2237e8: 0x652021
    ctx->pc = 0x2237e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2237ec: 0x848300d0
    ctx->pc = 0x2237ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2237f0: 0x14620021
    ctx->pc = 0x2237F0u;
    {
        const bool branch_taken_0x2237f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2237F4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2237f0) {
            ctx->pc = 0x223878u;
            goto label_223878;
        }
    }
    ctx->pc = 0x2237F8u;
    // 0x2237f8: 0xc48100c0
    ctx->pc = 0x2237f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2237fc: 0x3c0243f5
    ctx->pc = 0x2237fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17397 << 16));
    // 0x223800: 0x44820000
    ctx->pc = 0x223800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223804: 0x0
    ctx->pc = 0x223804u;
    // NOP
    // 0x223808: 0x46010036
    ctx->pc = 0x223808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22380c: 0x0
    ctx->pc = 0x22380cu;
    // NOP
    // 0x223810: 0x4502000d
    ctx->pc = 0x223810u;
    {
        const bool branch_taken_0x223810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223810) {
            ctx->pc = 0x223814u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x223848u;
            goto label_223848;
        }
    }
    ctx->pc = 0x223818u;
    // 0x223818: 0x3442999a
    ctx->pc = 0x223818u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x22381c: 0x44820000
    ctx->pc = 0x22381cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223820: 0x0
    ctx->pc = 0x223820u;
    // NOP
    // 0x223824: 0x46000834
    ctx->pc = 0x223824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223828: 0x0
    ctx->pc = 0x223828u;
    // NOP
    // 0x22382c: 0x45010003
    ctx->pc = 0x22382Cu;
    {
        const bool branch_taken_0x22382c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223830u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22382c) {
            ctx->pc = 0x22383Cu;
            goto label_22383c;
        }
    }
    ctx->pc = 0x223834u;
    // 0x223834: 0x10000003
    ctx->pc = 0x223834u;
    {
        const bool branch_taken_0x223834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x223834) {
            ctx->pc = 0x223844u;
            goto label_223844;
        }
    }
    ctx->pc = 0x22383Cu;
label_22383c:
    // 0x22383c: 0x10000002
    ctx->pc = 0x22383Cu;
    {
        const bool branch_taken_0x22383c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22383c) {
            ctx->pc = 0x223848u;
            goto label_223848;
        }
    }
    ctx->pc = 0x223844u;
label_223844:
    // 0x223844: 0x70001628
    ctx->pc = 0x223844u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_223848:
    // 0x223848: 0x1040000a
    ctx->pc = 0x223848u;
    {
        const bool branch_taken_0x223848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22384Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)28 << 16));
        if (branch_taken_0x223848) {
            ctx->pc = 0x223874u;
            goto label_223874;
        }
    }
    ctx->pc = 0x223850u;
    // 0x223850: 0x3445000c
    ctx->pc = 0x223850u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x223854: 0x3c020051
    ctx->pc = 0x223854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x223858: 0x244434f0
    ctx->pc = 0x223858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x22385c: 0x70a03628
    ctx->pc = 0x22385cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x223860: 0x24070001
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223864: 0xc086018
    ctx->pc = 0x223864u;
    SET_GPR_U32(ctx, 31, 0x22386Cu);
    ctx->pc = 0x223868u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22386Cu; }
        else if (ctx->pc != 0x22386Cu) { ctx->pc = 0x22386Cu; }
    }
    if (ctx->pc != 0x22386Cu) { return; }
    ctx->pc = 0x22386Cu;
    // 0x22386c: 0xc06898c
    ctx->pc = 0x22386Cu;
    SET_GPR_U32(ctx, 31, 0x223874u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223874u; }
        else if (ctx->pc != 0x223874u) { ctx->pc = 0x223874u; }
    }
    if (ctx->pc != 0x223874u) { return; }
    ctx->pc = 0x223874u;
label_223874:
    // 0x223874: 0x70008e28
    ctx->pc = 0x223874u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_223878:
    // 0x223878: 0x10000009
    ctx->pc = 0x223878u;
    {
        const bool branch_taken_0x223878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22387Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223878) {
            ctx->pc = 0x2238A0u;
            goto label_2238a0;
        }
    }
    ctx->pc = 0x223880u;
label_223880:
    // 0x223880: 0x44826800
    ctx->pc = 0x223880u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x223884: 0xc60c004c
    ctx->pc = 0x223884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223888: 0x8e0200c4
    ctx->pc = 0x223888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22388c: 0xc079f30
    ctx->pc = 0x22388Cu;
    SET_GPR_U32(ctx, 31, 0x223894u);
    ctx->pc = 0x223890u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223894u; }
        else if (ctx->pc != 0x223894u) { ctx->pc = 0x223894u; }
    }
    if (ctx->pc != 0x223894u) { return; }
    ctx->pc = 0x223894u;
    // 0x223894: 0x265200f0
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x223898: 0x26310001
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22389c: 0x0
    ctx->pc = 0x22389cu;
    // NOP
label_2238a0:
    // 0x2238a0: 0x8e0200cc
    ctx->pc = 0x2238a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2238a4: 0x222102a
    ctx->pc = 0x2238a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2238a8: 0x1440fff5
    ctx->pc = 0x2238A8u;
    {
        const bool branch_taken_0x2238a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2238ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x2238a8) {
            ctx->pc = 0x223880u;
            goto label_223880;
        }
    }
    ctx->pc = 0x2238B0u;
    // 0x2238b0: 0x4bede37d
    ctx->pc = 0x2238b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2238b4: 0x4bedeb7d
    ctx->pc = 0x2238b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2238b8: 0x4bedf37d
    ctx->pc = 0x2238b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2238bc: 0x4bedfb7d
    ctx->pc = 0x2238bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2238c0: 0x3c024234
    ctx->pc = 0x2238c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16948 << 16));
    // 0x2238c4: 0x44826800
    ctx->pc = 0x2238c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2238c8: 0x3c02c000
    ctx->pc = 0x2238c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x2238cc: 0x44826000
    ctx->pc = 0x2238ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2238d0: 0x3c024449
    ctx->pc = 0x2238d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17481 << 16));
    // 0x2238d4: 0x3442c000
    ctx->pc = 0x2238d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2238d8: 0x44827000
    ctx->pc = 0x2238d8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2238dc: 0xc06c202
    ctx->pc = 0x2238DCu;
    SET_GPR_U32(ctx, 31, 0x2238E4u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E4u; }
        else if (ctx->pc != 0x2238E4u) { ctx->pc = 0x2238E4u; }
    }
    if (ctx->pc != 0x2238E4u) { return; }
    ctx->pc = 0x2238E4u;
    // 0x2238e4: 0x3c0240e0
    ctx->pc = 0x2238e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16608 << 16));
    // 0x2238e8: 0x44826000
    ctx->pc = 0x2238e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2238ec: 0x3c024100
    ctx->pc = 0x2238ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
    // 0x2238f0: 0x44826800
    ctx->pc = 0x2238f0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2238f4: 0x3c024000
    ctx->pc = 0x2238f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x2238f8: 0x44827000
    ctx->pc = 0x2238f8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2238fc: 0xc06c1b3
    ctx->pc = 0x2238FCu;
    SET_GPR_U32(ctx, 31, 0x223904u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223904u; }
        else if (ctx->pc != 0x223904u) { ctx->pc = 0x223904u; }
    }
    if (ctx->pc != 0x223904u) { return; }
    ctx->pc = 0x223904u;
    // 0x223904: 0x3c024100
    ctx->pc = 0x223904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
    // 0x223908: 0x44826000
    ctx->pc = 0x223908u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x22390c: 0xc06b218
    ctx->pc = 0x22390Cu;
    SET_GPR_U32(ctx, 31, 0x223914u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223914u; }
        else if (ctx->pc != 0x223914u) { ctx->pc = 0x223914u; }
    }
    if (ctx->pc != 0x223914u) { return; }
    ctx->pc = 0x223914u;
    // 0x223914: 0x70009628
    ctx->pc = 0x223914u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223918: 0x10000007
    ctx->pc = 0x223918u;
    {
        const bool branch_taken_0x223918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22391Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223918) {
            ctx->pc = 0x223938u;
            goto label_223938;
        }
    }
    ctx->pc = 0x223920u;
label_223920:
    // 0x223920: 0x8e0200c8
    ctx->pc = 0x223920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x223924: 0xc60c0050
    ctx->pc = 0x223924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223928: 0xc079ef0
    ctx->pc = 0x223928u;
    SET_GPR_U32(ctx, 31, 0x223930u);
    ctx->pc = 0x22392Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFf_0x1e7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223930u; }
        else if (ctx->pc != 0x223930u) { ctx->pc = 0x223930u; }
    }
    if (ctx->pc != 0x223930u) { return; }
    ctx->pc = 0x223930u;
    // 0x223930: 0x263100f0
    ctx->pc = 0x223930u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x223934: 0x26520001
    ctx->pc = 0x223934u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_223938:
    // 0x223938: 0x8e0200d0
    ctx->pc = 0x223938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x22393c: 0x242102a
    ctx->pc = 0x22393cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x223940: 0x1440fff7
    ctx->pc = 0x223940u;
    {
        const bool branch_taken_0x223940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x223940) {
            ctx->pc = 0x223920u;
            goto label_223920;
        }
    }
    ctx->pc = 0x223948u;
    // 0x223948: 0x4bff6b7e
    ctx->pc = 0x223948u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x22394c: 0x4bfe6b7e
    ctx->pc = 0x22394cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223950: 0x4bfd6b7e
    ctx->pc = 0x223950u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x223954: 0x4bfc6b7e
    ctx->pc = 0x223954u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223958: 0x3c020050
    ctx->pc = 0x223958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x22395c: 0xc07ce18
    ctx->pc = 0x22395Cu;
    SET_GPR_U32(ctx, 31, 0x223964u);
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223964u; }
        else if (ctx->pc != 0x223964u) { ctx->pc = 0x223964u; }
    }
    if (ctx->pc != 0x223964u) { return; }
    ctx->pc = 0x223964u;
    // 0x223964: 0x1c40001f
    ctx->pc = 0x223964u;
    {
        const bool branch_taken_0x223964 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x223964) {
            ctx->pc = 0x2239E4u;
            goto label_2239e4;
        }
    }
    ctx->pc = 0x22396Cu;
    // 0x22396c: 0xc600004c
    ctx->pc = 0x22396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223970: 0x3c033f99
    ctx->pc = 0x223970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x223974: 0x3463999a
    ctx->pc = 0x223974u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x223978: 0x44830800
    ctx->pc = 0x223978u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x22397c: 0x0
    ctx->pc = 0x22397cu;
    // NOP
    // 0x223980: 0x46010040
    ctx->pc = 0x223980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x223984: 0xe601004c
    ctx->pc = 0x223984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x223988: 0xc600002c
    ctx->pc = 0x223988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22398c: 0x46800020
    ctx->pc = 0x22398cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223990: 0x46000836
    ctx->pc = 0x223990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223994: 0x0
    ctx->pc = 0x223994u;
    // NOP
    // 0x223998: 0x45010003
    ctx->pc = 0x223998u;
    {
        const bool branch_taken_0x223998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223998) {
            ctx->pc = 0x2239A8u;
            goto label_2239a8;
        }
    }
    ctx->pc = 0x2239A0u;
    // 0x2239a0: 0x46000801
    ctx->pc = 0x2239a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2239a4: 0xe600004c
    ctx->pc = 0x2239a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_2239a8:
    // 0x2239a8: 0xc6010050
    ctx->pc = 0x2239a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2239ac: 0x3c033f99
    ctx->pc = 0x2239acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x2239b0: 0x3463999a
    ctx->pc = 0x2239b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x2239b4: 0x44830000
    ctx->pc = 0x2239b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2239b8: 0x0
    ctx->pc = 0x2239b8u;
    // NOP
    // 0x2239bc: 0x46000840
    ctx->pc = 0x2239bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2239c0: 0xe6010050
    ctx->pc = 0x2239c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2239c4: 0xc6000030
    ctx->pc = 0x2239c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2239c8: 0x46800020
    ctx->pc = 0x2239c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2239cc: 0x46000836
    ctx->pc = 0x2239ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2239d0: 0x0
    ctx->pc = 0x2239d0u;
    // NOP
    // 0x2239d4: 0x45010003
    ctx->pc = 0x2239D4u;
    {
        const bool branch_taken_0x2239d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2239d4) {
            ctx->pc = 0x2239E4u;
            goto label_2239e4;
        }
    }
    ctx->pc = 0x2239DCu;
    // 0x2239dc: 0x46000801
    ctx->pc = 0x2239dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2239e0: 0xe6000050
    ctx->pc = 0x2239e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_2239e4:
    // 0x2239e4: 0x7bbf0030
    ctx->pc = 0x2239e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2239e8: 0x7bb20020
    ctx->pc = 0x2239e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2239ec: 0x7bb10010
    ctx->pc = 0x2239ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2239f0: 0x7bb00000
    ctx->pc = 0x2239f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2239f4: 0x3e00008
    ctx->pc = 0x2239F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2239F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22383Cu: goto label_22383c;
            case 0x223844u: goto label_223844;
            case 0x223848u: goto label_223848;
            case 0x223874u: goto label_223874;
            case 0x223878u: goto label_223878;
            case 0x223880u: goto label_223880;
            case 0x2238A0u: goto label_2238a0;
            case 0x223920u: goto label_223920;
            case 0x223938u: goto label_223938;
            case 0x2239A8u: goto label_2239a8;
            case 0x2239E4u: goto label_2239e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2239FCu;
}
