#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putPlayerAsh__9FcvEffectFv
// Address: 0x1e08d0 - 0x1e0b9c
void putPlayerAsh__9FcvEffectFv_0x1e08d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putPlayerAsh__9FcvEffectFv");


    ctx->pc = 0x1e08d0u;

    // 0x1e08d0: 0x27bdffb0
    ctx->pc = 0x1e08d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e08d4: 0x7fbf0040
    ctx->pc = 0x1e08d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e08d8: 0x7fb20030
    ctx->pc = 0x1e08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e08dc: 0x7fb10020
    ctx->pc = 0x1e08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e08e0: 0x7fb00010
    ctx->pc = 0x1e08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e08e4: 0xe7b40000
    ctx->pc = 0x1e08e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e08e8: 0xc4800024
    ctx->pc = 0x1e08e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08ec: 0x3c0344e1
    ctx->pc = 0x1e08ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17633 << 16));
    // 0x1e08f0: 0x44830800
    ctx->pc = 0x1e08f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e08f4: 0x0
    ctx->pc = 0x1e08f4u;
    // NOP
    // 0x1e08f8: 0x46010036
    ctx->pc = 0x1e08f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e08fc: 0x0
    ctx->pc = 0x1e08fcu;
    // NOP
    // 0x1e0900: 0x45010040
    ctx->pc = 0x1E0900u;
    {
        const bool branch_taken_0x1e0900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0904u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0900) {
            ctx->pc = 0x1E0A04u;
            goto label_1e0a04;
        }
    }
    ctx->pc = 0x1E0908u;
    // 0x1e0908: 0x46010081
    ctx->pc = 0x1e0908u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e090c: 0x3c0343fa
    ctx->pc = 0x1e090cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17402 << 16));
    // 0x1e0910: 0x3c023f80
    ctx->pc = 0x1e0910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0914: 0x44830800
    ctx->pc = 0x1e0914u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e0918: 0x44820000
    ctx->pc = 0x1e0918u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e091c: 0x0
    ctx->pc = 0x1e091cu;
    // NOP
    // 0x1e0920: 0x46011503
    ctx->pc = 0x1e0920u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[1];
    // 0x1e0924: 0x0
    ctx->pc = 0x1e0924u;
    // NOP
    // 0x1e0928: 0x0
    ctx->pc = 0x1e0928u;
    // NOP
    // 0x1e092c: 0x4600a036
    ctx->pc = 0x1e092cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0930: 0x0
    ctx->pc = 0x1e0930u;
    // NOP
    // 0x1e0934: 0x4501001a
    ctx->pc = 0x1E0934u;
    {
        const bool branch_taken_0x1e0934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0934) {
            ctx->pc = 0x1E09A0u;
            goto label_1e09a0;
        }
    }
    ctx->pc = 0x1E093Cu;
    // 0x1e093c: 0x4bede37d
    ctx->pc = 0x1e093cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0940: 0x4bedeb7d
    ctx->pc = 0x1e0940u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0944: 0x4bedf37d
    ctx->pc = 0x1e0944u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0948: 0x4bedfb7d
    ctx->pc = 0x1e0948u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e094c: 0x3c02c55c
    ctx->pc = 0x1e094cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50524 << 16));
    // 0x1e0950: 0x344212b8
    ctx->pc = 0x1e0950u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4792));
    // 0x1e0954: 0x44827000
    ctx->pc = 0x1e0954u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1e0958: 0x3c02c529
    ctx->pc = 0x1e0958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50473 << 16));
    // 0x1e095c: 0x3442b785
    ctx->pc = 0x1e095cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46981));
    // 0x1e0960: 0x44826000
    ctx->pc = 0x1e0960u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e0964: 0x3c024381
    ctx->pc = 0x1e0964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17281 << 16));
    // 0x1e0968: 0x3442aba3
    ctx->pc = 0x1e0968u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43939));
    // 0x1e096c: 0x44826800
    ctx->pc = 0x1e096cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0970: 0xc06c202
    ctx->pc = 0x1E0970u;
    SET_GPR_U32(ctx, 31, 0x1E0978u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0978u; }
        else if (ctx->pc != 0x1E0978u) { ctx->pc = 0x1E0978u; }
    }
    if (ctx->pc != 0x1E0978u) { return; }
    ctx->pc = 0x1E0978u;
    // 0x1e0978: 0xc06c0fb
    ctx->pc = 0x1E0978u;
    SET_GPR_U32(ctx, 31, 0x1E0980u);
    ctx->pc = 0x1E097Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6988));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0980u; }
        else if (ctx->pc != 0x1E0980u) { ctx->pc = 0x1E0980u; }
    }
    if (ctx->pc != 0x1E0980u) { return; }
    ctx->pc = 0x1E0980u;
    // 0x1e0980: 0x3c020101
    ctx->pc = 0x1e0980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)257 << 16));
    // 0x1e0984: 0xc0853c8
    ctx->pc = 0x1E0984u;
    SET_GPR_U32(ctx, 31, 0x1E098Cu);
    ctx->pc = 0x1E0988u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 218));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E098Cu; }
        else if (ctx->pc != 0x1E098Cu) { ctx->pc = 0x1E098Cu; }
    }
    if (ctx->pc != 0x1E098Cu) { return; }
    ctx->pc = 0x1E098Cu;
    // 0x1e098c: 0x4bff6b7e
    ctx->pc = 0x1e098cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0990: 0x4bfe6b7e
    ctx->pc = 0x1e0990u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0994: 0x4bfd6b7e
    ctx->pc = 0x1e0994u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0998: 0x1000001a
    ctx->pc = 0x1E0998u;
    {
        const bool branch_taken_0x1e0998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E099Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1e0998) {
            ctx->pc = 0x1E0A04u;
            goto label_1e0a04;
        }
    }
    ctx->pc = 0x1E09A0u;
label_1e09a0:
    // 0x1e09a0: 0x4bede37d
    ctx->pc = 0x1e09a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e09a4: 0x4bedeb7d
    ctx->pc = 0x1e09a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e09a8: 0x4bedf37d
    ctx->pc = 0x1e09a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e09ac: 0x4bedfb7d
    ctx->pc = 0x1e09acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e09b0: 0x3c02c529
    ctx->pc = 0x1e09b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50473 << 16));
    // 0x1e09b4: 0x3442b785
    ctx->pc = 0x1e09b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46981));
    // 0x1e09b8: 0x44826000
    ctx->pc = 0x1e09b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e09bc: 0x3c024381
    ctx->pc = 0x1e09bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17281 << 16));
    // 0x1e09c0: 0x3442aba3
    ctx->pc = 0x1e09c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43939));
    // 0x1e09c4: 0x44826800
    ctx->pc = 0x1e09c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e09c8: 0x3c02c55c
    ctx->pc = 0x1e09c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50524 << 16));
    // 0x1e09cc: 0x344212b8
    ctx->pc = 0x1e09ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4792));
    // 0x1e09d0: 0x44827000
    ctx->pc = 0x1e09d0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1e09d4: 0xc06c202
    ctx->pc = 0x1E09D4u;
    SET_GPR_U32(ctx, 31, 0x1E09DCu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09DCu; }
        else if (ctx->pc != 0x1E09DCu) { ctx->pc = 0x1E09DCu; }
    }
    if (ctx->pc != 0x1E09DCu) { return; }
    ctx->pc = 0x1E09DCu;
    // 0x1e09dc: 0xc06c0fb
    ctx->pc = 0x1E09DCu;
    SET_GPR_U32(ctx, 31, 0x1E09E4u);
    ctx->pc = 0x1E09E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6988));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09E4u; }
        else if (ctx->pc != 0x1E09E4u) { ctx->pc = 0x1E09E4u; }
    }
    if (ctx->pc != 0x1E09E4u) { return; }
    ctx->pc = 0x1E09E4u;
    // 0x1e09e4: 0x3c020101
    ctx->pc = 0x1e09e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)257 << 16));
    // 0x1e09e8: 0x4600a306
    ctx->pc = 0x1e09e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e09ec: 0xc0853e4
    ctx->pc = 0x1E09ECu;
    SET_GPR_U32(ctx, 31, 0x1E09F4u);
    ctx->pc = 0x1E09F0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 218));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09F4u; }
        else if (ctx->pc != 0x1E09F4u) { ctx->pc = 0x1E09F4u; }
    }
    if (ctx->pc != 0x1E09F4u) { return; }
    ctx->pc = 0x1E09F4u;
    // 0x1e09f4: 0x4bff6b7e
    ctx->pc = 0x1e09f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e09f8: 0x4bfe6b7e
    ctx->pc = 0x1e09f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e09fc: 0x4bfd6b7e
    ctx->pc = 0x1e09fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0a00: 0x4bfc6b7e
    ctx->pc = 0x1e0a00u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1e0a04:
    // 0x1e0a04: 0xc6010024
    ctx->pc = 0x1e0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0a08: 0x3c034509
    ctx->pc = 0x1e0a08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17673 << 16));
    // 0x1e0a0c: 0x34638000
    ctx->pc = 0x1e0a0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x1e0a10: 0x44830000
    ctx->pc = 0x1e0a10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e0a14: 0x0
    ctx->pc = 0x1e0a14u;
    // NOP
    // 0x1e0a18: 0x46000834
    ctx->pc = 0x1e0a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0a1c: 0x0
    ctx->pc = 0x1e0a1cu;
    // NOP
    // 0x1e0a20: 0x45010057
    ctx->pc = 0x1E0A20u;
    {
        const bool branch_taken_0x1e0a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0a20) {
            ctx->pc = 0x1E0B80u;
            goto label_1e0b80;
        }
    }
    ctx->pc = 0x1E0A28u;
    // 0x1e0a28: 0x3c024348
    ctx->pc = 0x1e0a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17224 << 16));
    // 0x1e0a2c: 0x44820000
    ctx->pc = 0x1e0a2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0a30: 0x0
    ctx->pc = 0x1e0a30u;
    // NOP
    // 0x1e0a34: 0x46010500
    ctx->pc = 0x1e0a34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0a38: 0x4bede37d
    ctx->pc = 0x1e0a38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0a3c: 0x4bedeb7d
    ctx->pc = 0x1e0a3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0a40: 0x4bedf37d
    ctx->pc = 0x1e0a40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0a44: 0x4bedfb7d
    ctx->pc = 0x1e0a44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0a48: 0xc06c0fb
    ctx->pc = 0x1E0A48u;
    SET_GPR_U32(ctx, 31, 0x1E0A50u);
    ctx->pc = 0x1E0A4Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 61168));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A50u; }
        else if (ctx->pc != 0x1E0A50u) { ctx->pc = 0x1E0A50u; }
    }
    if (ctx->pc != 0x1E0A50u) { return; }
    ctx->pc = 0x1E0A50u;
    // 0x1e0a50: 0x70008e28
    ctx->pc = 0x1e0a50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0a54: 0x1000000a
    ctx->pc = 0x1E0A54u;
    {
        const bool branch_taken_0x1e0a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0A58u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0a54) {
            ctx->pc = 0x1E0A80u;
            goto label_1e0a80;
        }
    }
    ctx->pc = 0x1E0A5Cu;
label_1e0a5c:
    // 0x1e0a5c: 0x8e030060
    ctx->pc = 0x1e0a5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1e0a60: 0x3c023f80
    ctx->pc = 0x1e0a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0a64: 0x44826800
    ctx->pc = 0x1e0a64u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0a68: 0x4600a306
    ctx->pc = 0x1e0a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0a6c: 0xc079f30
    ctx->pc = 0x1E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A74u);
    ctx->pc = 0x1E0A70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A74u; }
        else if (ctx->pc != 0x1E0A74u) { ctx->pc = 0x1E0A74u; }
    }
    if (ctx->pc != 0x1E0A74u) { return; }
    ctx->pc = 0x1E0A74u;
    // 0x1e0a74: 0x265200f0
    ctx->pc = 0x1e0a74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1e0a78: 0x26310001
    ctx->pc = 0x1e0a78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e0a7c: 0x0
    ctx->pc = 0x1e0a7cu;
    // NOP
label_1e0a80:
    // 0x1e0a80: 0x8e02000c
    ctx->pc = 0x1e0a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e0a84: 0x222102a
    ctx->pc = 0x1e0a84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1e0a88: 0x1440fff4
    ctx->pc = 0x1E0A88u;
    {
        const bool branch_taken_0x1e0a88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e0a88) {
            ctx->pc = 0x1E0A5Cu;
            goto label_1e0a5c;
        }
    }
    ctx->pc = 0x1E0A90u;
    // 0x1e0a90: 0x70009628
    ctx->pc = 0x1e0a90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0a94: 0x1000000a
    ctx->pc = 0x1E0A94u;
    {
        const bool branch_taken_0x1e0a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0A98u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0a94) {
            ctx->pc = 0x1E0AC0u;
            goto label_1e0ac0;
        }
    }
    ctx->pc = 0x1E0A9Cu;
label_1e0a9c:
    // 0x1e0a9c: 0x8e030058
    ctx->pc = 0x1e0a9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1e0aa0: 0x3c023f80
    ctx->pc = 0x1e0aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0aa4: 0x44826800
    ctx->pc = 0x1e0aa4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0aa8: 0x4600a306
    ctx->pc = 0x1e0aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0aac: 0xc07a2e0
    ctx->pc = 0x1E0AACu;
    SET_GPR_U32(ctx, 31, 0x1E0AB4u);
    ctx->pc = 0x1E0AB0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AB4u; }
        else if (ctx->pc != 0x1E0AB4u) { ctx->pc = 0x1E0AB4u; }
    }
    if (ctx->pc != 0x1E0AB4u) { return; }
    ctx->pc = 0x1E0AB4u;
    // 0x1e0ab4: 0x263100f0
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1e0ab8: 0x26520001
    ctx->pc = 0x1e0ab8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e0abc: 0x0
    ctx->pc = 0x1e0abcu;
    // NOP
label_1e0ac0:
    // 0x1e0ac0: 0x8e020004
    ctx->pc = 0x1e0ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0ac4: 0x242102a
    ctx->pc = 0x1e0ac4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1e0ac8: 0x1440fff4
    ctx->pc = 0x1E0AC8u;
    {
        const bool branch_taken_0x1e0ac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0ACCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)17681 << 16));
        if (branch_taken_0x1e0ac8) {
            ctx->pc = 0x1E0A9Cu;
            goto label_1e0a9c;
        }
    }
    ctx->pc = 0x1E0AD0u;
    // 0x1e0ad0: 0x34425000
    ctx->pc = 0x1e0ad0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20480));
    // 0x1e0ad4: 0x44820000
    ctx->pc = 0x1e0ad4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0ad8: 0x0
    ctx->pc = 0x1e0ad8u;
    // NOP
    // 0x1e0adc: 0x4600a034
    ctx->pc = 0x1e0adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0ae0: 0x0
    ctx->pc = 0x1e0ae0u;
    // NOP
    // 0x1e0ae4: 0x45010016
    ctx->pc = 0x1E0AE4u;
    {
        const bool branch_taken_0x1e0ae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0ae4) {
            ctx->pc = 0x1E0B40u;
            goto label_1e0b40;
        }
    }
    ctx->pc = 0x1E0AECu;
    // 0x1e0aec: 0x4bede37d
    ctx->pc = 0x1e0aecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0af0: 0x4bedeb7d
    ctx->pc = 0x1e0af0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0af4: 0x4bedf37d
    ctx->pc = 0x1e0af4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0af8: 0x4bedfb7d
    ctx->pc = 0x1e0af8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0afc: 0x3c02c029
    ctx->pc = 0x1e0afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49193 << 16));
    // 0x1e0b00: 0x44806000
    ctx->pc = 0x1e0b00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1e0b04: 0x3442db23
    ctx->pc = 0x1e0b04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56099));
    // 0x1e0b08: 0x44826800
    ctx->pc = 0x1e0b08u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0b0c: 0xc06c202
    ctx->pc = 0x1E0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B14u);
    ctx->pc = 0x1E0B10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B14u; }
        else if (ctx->pc != 0x1E0B14u) { ctx->pc = 0x1E0B14u; }
    }
    if (ctx->pc != 0x1E0B14u) { return; }
    ctx->pc = 0x1E0B14u;
    // 0x1e0b14: 0x3c024220
    ctx->pc = 0x1e0b14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16928 << 16));
    // 0x1e0b18: 0x44820000
    ctx->pc = 0x1e0b18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0b1c: 0x8e04005c
    ctx->pc = 0x1e0b1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e0b20: 0x3c023f80
    ctx->pc = 0x1e0b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0b24: 0x44826800
    ctx->pc = 0x1e0b24u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0b28: 0xc079f30
    ctx->pc = 0x1E0B28u;
    SET_GPR_U32(ctx, 31, 0x1E0B30u);
    ctx->pc = 0x1E0B2Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B30u; }
        else if (ctx->pc != 0x1E0B30u) { ctx->pc = 0x1E0B30u; }
    }
    if (ctx->pc != 0x1E0B30u) { return; }
    ctx->pc = 0x1E0B30u;
    // 0x1e0b30: 0x4bff6b7e
    ctx->pc = 0x1e0b30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b34: 0x4bfe6b7e
    ctx->pc = 0x1e0b34u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b38: 0x4bfd6b7e
    ctx->pc = 0x1e0b38u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b3c: 0x4bfc6b7e
    ctx->pc = 0x1e0b3cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1e0b40:
    // 0x1e0b40: 0x8e03005c
    ctx->pc = 0x1e0b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e0b44: 0x3c023f80
    ctx->pc = 0x1e0b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0b48: 0x44826800
    ctx->pc = 0x1e0b48u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0b4c: 0x4600a306
    ctx->pc = 0x1e0b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0b50: 0xc079f30
    ctx->pc = 0x1E0B50u;
    SET_GPR_U32(ctx, 31, 0x1E0B58u);
    ctx->pc = 0x1E0B54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 240));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B58u; }
        else if (ctx->pc != 0x1E0B58u) { ctx->pc = 0x1E0B58u; }
    }
    if (ctx->pc != 0x1E0B58u) { return; }
    ctx->pc = 0x1E0B58u;
    // 0x1e0b58: 0x8e03005c
    ctx->pc = 0x1e0b58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e0b5c: 0x3c023f80
    ctx->pc = 0x1e0b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0b60: 0x44826800
    ctx->pc = 0x1e0b60u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0b64: 0x4600a306
    ctx->pc = 0x1e0b64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0b68: 0xc079f30
    ctx->pc = 0x1E0B68u;
    SET_GPR_U32(ctx, 31, 0x1E0B70u);
    ctx->pc = 0x1E0B6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 480));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B70u; }
        else if (ctx->pc != 0x1E0B70u) { ctx->pc = 0x1E0B70u; }
    }
    if (ctx->pc != 0x1E0B70u) { return; }
    ctx->pc = 0x1E0B70u;
    // 0x1e0b70: 0x4bff6b7e
    ctx->pc = 0x1e0b70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b74: 0x4bfe6b7e
    ctx->pc = 0x1e0b74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b78: 0x4bfd6b7e
    ctx->pc = 0x1e0b78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b7c: 0x4bfc6b7e
    ctx->pc = 0x1e0b7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1e0b80:
    // 0x1e0b80: 0x7bbf0040
    ctx->pc = 0x1e0b80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0b84: 0x7bb20030
    ctx->pc = 0x1e0b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0b88: 0x7bb10020
    ctx->pc = 0x1e0b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0b8c: 0x7bb00010
    ctx->pc = 0x1e0b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0b90: 0xc7b40000
    ctx->pc = 0x1e0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0b94: 0x3e00008
    ctx->pc = 0x1E0B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E09A0u: goto label_1e09a0;
            case 0x1E0A04u: goto label_1e0a04;
            case 0x1E0A5Cu: goto label_1e0a5c;
            case 0x1E0A80u: goto label_1e0a80;
            case 0x1E0A9Cu: goto label_1e0a9c;
            case 0x1E0AC0u: goto label_1e0ac0;
            case 0x1E0B40u: goto label_1e0b40;
            case 0x1E0B80u: goto label_1e0b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0B9Cu;
}
