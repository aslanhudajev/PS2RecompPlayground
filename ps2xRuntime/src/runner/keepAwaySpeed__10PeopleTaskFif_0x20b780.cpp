#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: keepAwaySpeed__10PeopleTaskFif
// Address: 0x20b780 - 0x20b8f0
void keepAwaySpeed__10PeopleTaskFif_0x20b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("keepAwaySpeed__10PeopleTaskFif");


    ctx->pc = 0x20b780u;

    // 0x20b780: 0x27bdffa0
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b784: 0x7fbf0030
    ctx->pc = 0x20b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20b788: 0x7fb10020
    ctx->pc = 0x20b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20b78c: 0x7fb00010
    ctx->pc = 0x20b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20b790: 0xe7b40000
    ctx->pc = 0x20b790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b794: 0xc4801df8
    ctx->pc = 0x20b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b798: 0x46006506
    ctx->pc = 0x20b798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20b79c: 0x70a08628
    ctx->pc = 0x20b79cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20b7a0: 0x46140034
    ctx->pc = 0x20b7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b7a4: 0x0
    ctx->pc = 0x20b7a4u;
    // NOP
    // 0x20b7a8: 0x45000047
    ctx->pc = 0x20B7A8u;
    {
        const bool branch_taken_0x20b7a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B7ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20b7a8) {
            ctx->pc = 0x20B8C8u;
            goto label_20b8c8;
        }
    }
    ctx->pc = 0x20B7B0u;
    // 0x20b7b0: 0x4bede37d
    ctx->pc = 0x20b7b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x20b7b4: 0x4bedeb7d
    ctx->pc = 0x20b7b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20b7b8: 0x4bedf37d
    ctx->pc = 0x20b7b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20b7bc: 0xc06c20d
    ctx->pc = 0x20B7BCu;
    SET_GPR_U32(ctx, 31, 0x20B7C4u);
    ctx->pc = 0x20B7C0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7C4u; }
        else if (ctx->pc != 0x20B7C4u) { ctx->pc = 0x20B7C4u; }
    }
    if (ctx->pc != 0x20B7C4u) { return; }
    ctx->pc = 0x20B7C4u;
    // 0x20b7c4: 0x8f848c48
    ctx->pc = 0x20b7c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20b7c8: 0x8c830004
    ctx->pc = 0x20b7c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20b7cc: 0x31040
    ctx->pc = 0x20b7ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20b7d0: 0x431021
    ctx->pc = 0x20b7d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b7d4: 0x21080
    ctx->pc = 0x20b7d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b7d8: 0x431021
    ctx->pc = 0x20b7d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b7dc: 0x21100
    ctx->pc = 0x20b7dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20b7e0: 0x441021
    ctx->pc = 0x20b7e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b7e4: 0xc06c0fb
    ctx->pc = 0x20B7E4u;
    SET_GPR_U32(ctx, 31, 0x20B7ECu);
    ctx->pc = 0x20B7E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7ECu; }
        else if (ctx->pc != 0x20B7ECu) { ctx->pc = 0x20B7ECu; }
    }
    if (ctx->pc != 0x20B7ECu) { return; }
    ctx->pc = 0x20B7ECu;
    // 0x20b7ec: 0x8f828c48
    ctx->pc = 0x20b7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20b7f0: 0x27a40050
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b7f4: 0x8c450004
    ctx->pc = 0x20b7f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b7f8: 0x51840
    ctx->pc = 0x20b7f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20b7fc: 0x651821
    ctx->pc = 0x20b7fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b800: 0x31880
    ctx->pc = 0x20b800u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b804: 0x651821
    ctx->pc = 0x20b804u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b808: 0x31900
    ctx->pc = 0x20b808u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b80c: 0x621821
    ctx->pc = 0x20b80cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b810: 0xc4600090
    ctx->pc = 0x20b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b814: 0xe7a00050
    ctx->pc = 0x20b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20b818: 0x8c450004
    ctx->pc = 0x20b818u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b81c: 0x51840
    ctx->pc = 0x20b81cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20b820: 0x651821
    ctx->pc = 0x20b820u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b824: 0x31880
    ctx->pc = 0x20b824u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b828: 0x651821
    ctx->pc = 0x20b828u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b82c: 0x31900
    ctx->pc = 0x20b82cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b830: 0x621821
    ctx->pc = 0x20b830u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b834: 0xc4600094
    ctx->pc = 0x20b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b838: 0xe7a00054
    ctx->pc = 0x20b838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20b83c: 0x8c450004
    ctx->pc = 0x20b83cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b840: 0x51840
    ctx->pc = 0x20b840u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20b844: 0x651821
    ctx->pc = 0x20b844u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b848: 0x31880
    ctx->pc = 0x20b848u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b84c: 0x651821
    ctx->pc = 0x20b84cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20b850: 0x31900
    ctx->pc = 0x20b850u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b854: 0x621021
    ctx->pc = 0x20b854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b858: 0xc4400098
    ctx->pc = 0x20b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b85c: 0xc06c1ca
    ctx->pc = 0x20B85Cu;
    SET_GPR_U32(ctx, 31, 0x20B864u);
    ctx->pc = 0x20B860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B864u; }
        else if (ctx->pc != 0x20B864u) { ctx->pc = 0x20B864u; }
    }
    if (ctx->pc != 0x20B864u) { return; }
    ctx->pc = 0x20B864u;
    // 0x20b864: 0x44806000
    ctx->pc = 0x20b864u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x20b868: 0x4600a387
    ctx->pc = 0x20b868u;
    ctx->f[14] = FPU_NEG_S(ctx->f[20]);
    // 0x20b86c: 0xc06c202
    ctx->pc = 0x20B86Cu;
    SET_GPR_U32(ctx, 31, 0x20B874u);
    ctx->pc = 0x20B870u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B874u; }
        else if (ctx->pc != 0x20B874u) { ctx->pc = 0x20B874u; }
    }
    if (ctx->pc != 0x20B874u) { return; }
    ctx->pc = 0x20B874u;
    // 0x20b874: 0xc06bfd2
    ctx->pc = 0x20B874u;
    SET_GPR_U32(ctx, 31, 0x20B87Cu);
    ctx->pc = 0x20B878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B87Cu; }
        else if (ctx->pc != 0x20B87Cu) { ctx->pc = 0x20B87Cu; }
    }
    if (ctx->pc != 0x20B87Cu) { return; }
    ctx->pc = 0x20B87Cu;
    // 0x20b87c: 0x44900000
    ctx->pc = 0x20b87cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x20b880: 0x8e230030
    ctx->pc = 0x20b880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20b884: 0x468000a0
    ctx->pc = 0x20b884u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20b888: 0xc7a10040
    ctx->pc = 0x20b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b88c: 0xc4600000
    ctx->pc = 0x20b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b890: 0x46000801
    ctx->pc = 0x20b890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b894: 0x46020003
    ctx->pc = 0x20b894u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20b898: 0xe460000c
    ctx->pc = 0x20b898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20b89c: 0x8e230030
    ctx->pc = 0x20b89cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20b8a0: 0xc7a00048
    ctx->pc = 0x20b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b8a4: 0xc4610008
    ctx->pc = 0x20b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b8a8: 0x46010001
    ctx->pc = 0x20b8a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b8ac: 0x46020003
    ctx->pc = 0x20b8acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20b8b0: 0xe4600014
    ctx->pc = 0x20b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x20b8b4: 0x4bff6b7e
    ctx->pc = 0x20b8b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20b8b8: 0x4bfe6b7e
    ctx->pc = 0x20b8b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20b8bc: 0x4bfd6b7e
    ctx->pc = 0x20b8bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20b8c0: 0x10000005
    ctx->pc = 0x20B8C0u;
    {
        const bool branch_taken_0x20b8c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B8C4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x20b8c0) {
            ctx->pc = 0x20B8D8u;
            goto label_20b8d8;
        }
    }
    ctx->pc = 0x20B8C8u;
label_20b8c8:
    // 0x20b8c8: 0x8e230030
    ctx->pc = 0x20b8c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20b8cc: 0xac600014
    ctx->pc = 0x20b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x20b8d0: 0x8e230030
    ctx->pc = 0x20b8d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20b8d4: 0xac60000c
    ctx->pc = 0x20b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_20b8d8:
    // 0x20b8d8: 0x7bbf0030
    ctx->pc = 0x20b8d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b8dc: 0x7bb10020
    ctx->pc = 0x20b8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b8e0: 0x7bb00010
    ctx->pc = 0x20b8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b8e4: 0xc7b40000
    ctx->pc = 0x20b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b8e8: 0x3e00008
    ctx->pc = 0x20B8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B8C8u: goto label_20b8c8;
            case 0x20B8D8u: goto label_20b8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B8F0u;
}
