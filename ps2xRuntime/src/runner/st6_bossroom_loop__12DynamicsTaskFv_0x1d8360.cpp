#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st6_bossroom_loop__12DynamicsTaskFv
// Address: 0x1d8360 - 0x1d85d8
void st6_bossroom_loop__12DynamicsTaskFv_0x1d8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st6_bossroom_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d8360u;

    // 0x1d8360: 0x27bdff30
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d8364: 0x7fbf0070
    ctx->pc = 0x1d8364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1d8368: 0x7fb60060
    ctx->pc = 0x1d8368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d836c: 0x7fb50050
    ctx->pc = 0x1d836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d8370: 0x7fb40040
    ctx->pc = 0x1d8370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d8374: 0x7fb30030
    ctx->pc = 0x1d8374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8378: 0x7fb20020
    ctx->pc = 0x1d8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d837c: 0x7fb10010
    ctx->pc = 0x1d837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8380: 0x7fb00000
    ctx->pc = 0x1d8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8384: 0x7080ae28
    ctx->pc = 0x1d8384u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d8388: 0x8c9600c0
    ctx->pc = 0x1d8388u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1d838c: 0x4bede37d
    ctx->pc = 0x1d838cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d8390: 0x4bedeb7d
    ctx->pc = 0x1d8390u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d8394: 0x4bedf37d
    ctx->pc = 0x1d8394u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d8398: 0x4bedfb7d
    ctx->pc = 0x1d8398u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d839c: 0xc48d0044
    ctx->pc = 0x1d839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d83a0: 0xc48e0048
    ctx->pc = 0x1d83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d83a4: 0xc06c202
    ctx->pc = 0x1D83A4u;
    SET_GPR_U32(ctx, 31, 0x1D83ACu);
    ctx->pc = 0x1D83A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83ACu; }
        else if (ctx->pc != 0x1D83ACu) { ctx->pc = 0x1D83ACu; }
    }
    if (ctx->pc != 0x1D83ACu) { return; }
    ctx->pc = 0x1D83ACu;
    // 0x1d83ac: 0xc06c0fb
    ctx->pc = 0x1D83ACu;
    SET_GPR_U32(ctx, 31, 0x1D83B4u);
    ctx->pc = 0x1D83B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83B4u; }
        else if (ctx->pc != 0x1D83B4u) { ctx->pc = 0x1D83B4u; }
    }
    if (ctx->pc != 0x1D83B4u) { return; }
    ctx->pc = 0x1D83B4u;
    // 0x1d83b4: 0xc06c09f
    ctx->pc = 0x1D83B4u;
    SET_GPR_U32(ctx, 31, 0x1D83BCu);
    ctx->pc = 0x1D83B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83BCu; }
        else if (ctx->pc != 0x1D83BCu) { ctx->pc = 0x1D83BCu; }
    }
    if (ctx->pc != 0x1D83BCu) { return; }
    ctx->pc = 0x1D83BCu;
    // 0x1d83bc: 0xc06c157
    ctx->pc = 0x1D83BCu;
    SET_GPR_U32(ctx, 31, 0x1D83C4u);
    ctx->pc = 0x1D83C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83C4u; }
        else if (ctx->pc != 0x1D83C4u) { ctx->pc = 0x1D83C4u; }
    }
    if (ctx->pc != 0x1D83C4u) { return; }
    ctx->pc = 0x1D83C4u;
    // 0x1d83c4: 0x161080
    ctx->pc = 0x1d83c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d83c8: 0x561021
    ctx->pc = 0x1d83c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d83cc: 0x21880
    ctx->pc = 0x1d83ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d83d0: 0x3c020027
    ctx->pc = 0x1d83d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1d83d4: 0x24428a70
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937200));
    // 0x1d83d8: 0x43a021
    ctx->pc = 0x1d83d8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d83dc: 0x70008e28
    ctx->pc = 0x1d83dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d83e0: 0x72a09628
    ctx->pc = 0x1d83e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d83e4: 0x1000003c
    ctx->pc = 0x1D83E4u;
    {
        const bool branch_taken_0x1d83e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D83E8u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 0)));
        if (branch_taken_0x1d83e4) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D83ECu;
label_1d83ec:
    // 0x1d83ec: 0x10000032
    ctx->pc = 0x1D83ECu;
    {
        const bool branch_taken_0x1d83ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D83F0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d83ec) {
            ctx->pc = 0x1D84B8u;
            goto label_1d84b8;
        }
    }
    ctx->pc = 0x1D83F4u;
label_1d83f4:
    // 0x1d83f4: 0x4bede37d
    ctx->pc = 0x1d83f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d83f8: 0x4bedeb7d
    ctx->pc = 0x1d83f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d83fc: 0x4bedf37d
    ctx->pc = 0x1d83fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d8400: 0x4bedfb7d
    ctx->pc = 0x1d8400u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d8404: 0x8e450058
    ctx->pc = 0x1d8404u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d8408: 0xc64c0098
    ctx->pc = 0x1d8408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d840c: 0xc64d0068
    ctx->pc = 0x1d840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8410: 0x27a40080
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8414: 0xc0755e0
    ctx->pc = 0x1D8414u;
    SET_GPR_U32(ctx, 31, 0x1D841Cu);
    ctx->pc = 0x1D8418u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D841Cu; }
        else if (ctx->pc != 0x1D841Cu) { ctx->pc = 0x1D841Cu; }
    }
    if (ctx->pc != 0x1D841Cu) { return; }
    ctx->pc = 0x1D841Cu;
    // 0x1d841c: 0xc06c04e
    ctx->pc = 0x1D841Cu;
    SET_GPR_U32(ctx, 31, 0x1D8424u);
    ctx->pc = 0x1D8420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8424u; }
        else if (ctx->pc != 0x1D8424u) { ctx->pc = 0x1D8424u; }
    }
    if (ctx->pc != 0x1D8424u) { return; }
    ctx->pc = 0x1D8424u;
    // 0x1d8424: 0x8e620004
    ctx->pc = 0x1d8424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d8428: 0x27a500c0
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d842c: 0xc085438
    ctx->pc = 0x1D842Cu;
    SET_GPR_U32(ctx, 31, 0x1D8434u);
    ctx->pc = 0x1D8430u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8434u; }
        else if (ctx->pc != 0x1D8434u) { ctx->pc = 0x1D8434u; }
    }
    if (ctx->pc != 0x1D8434u) { return; }
    ctx->pc = 0x1D8434u;
    // 0x1d8434: 0xc7a100cc
    ctx->pc = 0x1d8434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8438: 0x44800000
    ctx->pc = 0x1d8438u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d843c: 0x0
    ctx->pc = 0x1d843cu;
    // NOP
    // 0x1d8440: 0x46000836
    ctx->pc = 0x1d8440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8444: 0x0
    ctx->pc = 0x1d8444u;
    // NOP
    // 0x1d8448: 0x45010015
    ctx->pc = 0x1D8448u;
    {
        const bool branch_taken_0x1d8448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D844Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
        if (branch_taken_0x1d8448) {
            ctx->pc = 0x1D84A0u;
            goto label_1d84a0;
        }
    }
    ctx->pc = 0x1D8450u;
    // 0x1d8450: 0xc085528
    ctx->pc = 0x1D8450u;
    SET_GPR_U32(ctx, 31, 0x1D8458u);
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8458u; }
        else if (ctx->pc != 0x1D8458u) { ctx->pc = 0x1D8458u; }
    }
    if (ctx->pc != 0x1D8458u) { return; }
    ctx->pc = 0x1D8458u;
    // 0x1d8458: 0x10400011
    ctx->pc = 0x1D8458u;
    {
        const bool branch_taken_0x1d8458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8458) {
            ctx->pc = 0x1D84A0u;
            goto label_1d84a0;
        }
    }
    ctx->pc = 0x1D8460u;
    // 0x1d8460: 0xc6ac00b8
    ctx->pc = 0x1d8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8464: 0x3c023f80
    ctx->pc = 0x1d8464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d8468: 0x44820000
    ctx->pc = 0x1d8468u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d846c: 0x0
    ctx->pc = 0x1d846cu;
    // NOP
    // 0x1d8470: 0x460c0032
    ctx->pc = 0x1d8470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8474: 0x0
    ctx->pc = 0x1d8474u;
    // NOP
    // 0x1d8478: 0x45000006
    ctx->pc = 0x1D8478u;
    {
        const bool branch_taken_0x1d8478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8478) {
            ctx->pc = 0x1D8494u;
            goto label_1d8494;
        }
    }
    ctx->pc = 0x1D8480u;
    // 0x1d8480: 0x8e620004
    ctx->pc = 0x1d8480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d8484: 0xc0853ac
    ctx->pc = 0x1D8484u;
    SET_GPR_U32(ctx, 31, 0x1D848Cu);
    ctx->pc = 0x1D8488u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D848Cu; }
        else if (ctx->pc != 0x1D848Cu) { ctx->pc = 0x1D848Cu; }
    }
    if (ctx->pc != 0x1D848Cu) { return; }
    ctx->pc = 0x1D848Cu;
    // 0x1d848c: 0x10000005
    ctx->pc = 0x1D848Cu;
    {
        const bool branch_taken_0x1d848c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8490u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d848c) {
            ctx->pc = 0x1D84A4u;
            goto label_1d84a4;
        }
    }
    ctx->pc = 0x1D8494u;
label_1d8494:
    // 0x1d8494: 0x8e620004
    ctx->pc = 0x1d8494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d8498: 0xc0853e4
    ctx->pc = 0x1D8498u;
    SET_GPR_U32(ctx, 31, 0x1D84A0u);
    ctx->pc = 0x1D849Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84A0u; }
        else if (ctx->pc != 0x1D84A0u) { ctx->pc = 0x1D84A0u; }
    }
    if (ctx->pc != 0x1D84A0u) { return; }
    ctx->pc = 0x1D84A0u;
label_1d84a0:
    // 0x1d84a0: 0x4bff6b7e
    ctx->pc = 0x1d84a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d84a4:
    // 0x1d84a4: 0x4bfe6b7e
    ctx->pc = 0x1d84a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d84a8: 0x4bfd6b7e
    ctx->pc = 0x1d84a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d84ac: 0x4bfc6b7e
    ctx->pc = 0x1d84acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d84b0: 0x26100001
    ctx->pc = 0x1d84b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d84b4: 0x0
    ctx->pc = 0x1d84b4u;
    // NOP
label_1d84b8:
    // 0x1d84b8: 0x8e470078
    ctx->pc = 0x1d84b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d84bc: 0x207102a
    ctx->pc = 0x1d84bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x1d84c0: 0x1440ffcc
    ctx->pc = 0x1D84C0u;
    {
        const bool branch_taken_0x1d84c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d84c0) {
            ctx->pc = 0x1D83F4u;
            goto label_1d83f4;
        }
    }
    ctx->pc = 0x1D84C8u;
    // 0x1d84c8: 0x26520004
    ctx->pc = 0x1d84c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d84cc: 0x26730004
    ctx->pc = 0x1d84ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1d84d0: 0x26310001
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d84d4: 0x0
    ctx->pc = 0x1d84d4u;
    // NOP
label_1d84d8:
    // 0x1d84d8: 0x8e820000
    ctx->pc = 0x1d84d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d84dc: 0x222102a
    ctx->pc = 0x1d84dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d84e0: 0x1440ffc2
    ctx->pc = 0x1D84E0u;
    {
        const bool branch_taken_0x1d84e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d84e0) {
            ctx->pc = 0x1D83ECu;
            goto label_1d83ec;
        }
    }
    ctx->pc = 0x1D84E8u;
    // 0x1d84e8: 0x4bff6b7e
    ctx->pc = 0x1d84e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d84ec: 0x4bfe6b7e
    ctx->pc = 0x1d84ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d84f0: 0x4bfd6b7e
    ctx->pc = 0x1d84f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d84f4: 0x4bfc6b7e
    ctx->pc = 0x1d84f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d84f8: 0x3c020050
    ctx->pc = 0x1d84f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d84fc: 0xc07ce18
    ctx->pc = 0x1D84FCu;
    SET_GPR_U32(ctx, 31, 0x1D8504u);
    ctx->pc = 0x1D8500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8504u; }
        else if (ctx->pc != 0x1D8504u) { ctx->pc = 0x1D8504u; }
    }
    if (ctx->pc != 0x1D8504u) { return; }
    ctx->pc = 0x1D8504u;
    // 0x1d8504: 0x1c40002a
    ctx->pc = 0x1D8504u;
    {
        const bool branch_taken_0x1d8504 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D8508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1d8504) {
            ctx->pc = 0x1D85B0u;
            goto label_1d85b0;
        }
    }
    ctx->pc = 0x1D850Cu;
    // 0x1d850c: 0x16c30012
    ctx->pc = 0x1D850Cu;
    {
        const bool branch_taken_0x1d850c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D8510u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
        if (branch_taken_0x1d850c) {
            ctx->pc = 0x1D8558u;
            goto label_1d8558;
        }
    }
    ctx->pc = 0x1D8514u;
    // 0x1d8514: 0x3c033db8
    ctx->pc = 0x1d8514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15800 << 16));
    // 0x1d8518: 0x346351ec
    ctx->pc = 0x1d8518u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 20972));
    // 0x1d851c: 0x44830800
    ctx->pc = 0x1d851cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d8520: 0x70002e28
    ctx->pc = 0x1d8520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8524: 0x10000006
    ctx->pc = 0x1D8524u;
    {
        const bool branch_taken_0x1d8524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8528u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d8524) {
            ctx->pc = 0x1D8540u;
            goto label_1d8540;
        }
    }
    ctx->pc = 0x1D852Cu;
label_1d852c:
    // 0x1d852c: 0xc4800098
    ctx->pc = 0x1d852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8530: 0x24a50001
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8534: 0x46010000
    ctx->pc = 0x1d8534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8538: 0xe4800098
    ctx->pc = 0x1d8538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1d853c: 0x24840004
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1d8540:
    // 0x1d8540: 0x8e830000
    ctx->pc = 0x1d8540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d8544: 0xa3182a
    ctx->pc = 0x1d8544u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1d8548: 0x1460fff8
    ctx->pc = 0x1D8548u;
    {
        const bool branch_taken_0x1d8548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d8548) {
            ctx->pc = 0x1D852Cu;
            goto label_1d852c;
        }
    }
    ctx->pc = 0x1D8550u;
    // 0x1d8550: 0x10000010
    ctx->pc = 0x1D8550u;
    {
        const bool branch_taken_0x1d8550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8554u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x1d8550) {
            ctx->pc = 0x1D8594u;
            goto label_1d8594;
        }
    }
    ctx->pc = 0x1D8558u;
label_1d8558:
    // 0x1d8558: 0x3463c290
    ctx->pc = 0x1d8558u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d855c: 0x44830800
    ctx->pc = 0x1d855cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d8560: 0x70002e28
    ctx->pc = 0x1d8560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8564: 0x10000006
    ctx->pc = 0x1D8564u;
    {
        const bool branch_taken_0x1d8564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8568u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d8564) {
            ctx->pc = 0x1D8580u;
            goto label_1d8580;
        }
    }
    ctx->pc = 0x1D856Cu;
label_1d856c:
    // 0x1d856c: 0xc4800098
    ctx->pc = 0x1d856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8570: 0x24a50001
    ctx->pc = 0x1d8570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8574: 0x46010000
    ctx->pc = 0x1d8574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d8578: 0xe4800098
    ctx->pc = 0x1d8578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1d857c: 0x24840004
    ctx->pc = 0x1d857cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1d8580:
    // 0x1d8580: 0x8e830000
    ctx->pc = 0x1d8580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d8584: 0xa3182a
    ctx->pc = 0x1d8584u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1d8588: 0x1460fff8
    ctx->pc = 0x1D8588u;
    {
        const bool branch_taken_0x1d8588 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d8588) {
            ctx->pc = 0x1D856Cu;
            goto label_1d856c;
        }
    }
    ctx->pc = 0x1D8590u;
    // 0x1d8590: 0xc6a10098
    ctx->pc = 0x1d8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8594:
    // 0x1d8594: 0xc6a00068
    ctx->pc = 0x1d8594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8598: 0x46000836
    ctx->pc = 0x1d8598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d859c: 0x0
    ctx->pc = 0x1d859cu;
    // NOP
    // 0x1d85a0: 0x45010003
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D85B0u;
            goto label_1d85b0;
        }
    }
    ctx->pc = 0x1D85A8u;
    // 0x1d85a8: 0xc06898c
    ctx->pc = 0x1D85A8u;
    SET_GPR_U32(ctx, 31, 0x1D85B0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85B0u; }
        else if (ctx->pc != 0x1D85B0u) { ctx->pc = 0x1D85B0u; }
    }
    if (ctx->pc != 0x1D85B0u) { return; }
    ctx->pc = 0x1D85B0u;
label_1d85b0:
    // 0x1d85b0: 0x7bbf0070
    ctx->pc = 0x1d85b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d85b4: 0x7bb60060
    ctx->pc = 0x1d85b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d85b8: 0x7bb50050
    ctx->pc = 0x1d85b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d85bc: 0x7bb40040
    ctx->pc = 0x1d85bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d85c0: 0x7bb30030
    ctx->pc = 0x1d85c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d85c4: 0x7bb20020
    ctx->pc = 0x1d85c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d85c8: 0x7bb10010
    ctx->pc = 0x1d85c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d85cc: 0x7bb00000
    ctx->pc = 0x1d85ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d85d0: 0x3e00008
    ctx->pc = 0x1D85D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D83ECu: goto label_1d83ec;
            case 0x1D83F4u: goto label_1d83f4;
            case 0x1D8494u: goto label_1d8494;
            case 0x1D84A0u: goto label_1d84a0;
            case 0x1D84A4u: goto label_1d84a4;
            case 0x1D84B8u: goto label_1d84b8;
            case 0x1D84D8u: goto label_1d84d8;
            case 0x1D852Cu: goto label_1d852c;
            case 0x1D8540u: goto label_1d8540;
            case 0x1D8558u: goto label_1d8558;
            case 0x1D856Cu: goto label_1d856c;
            case 0x1D8580u: goto label_1d8580;
            case 0x1D8594u: goto label_1d8594;
            case 0x1D85B0u: goto label_1d85b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D85D8u;
}
