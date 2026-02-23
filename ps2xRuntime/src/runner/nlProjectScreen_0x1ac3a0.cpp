#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlProjectScreen
// Address: 0x1ac3a0 - 0x1ac450
void nlProjectScreen_0x1ac3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlProjectScreen");


    ctx->pc = 0x1ac3a0u;

    // 0x1ac3a0: 0x27bdffc0
    ctx->pc = 0x1ac3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac3a4: 0x7fbf0020
    ctx->pc = 0x1ac3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ac3a8: 0x7fb10010
    ctx->pc = 0x1ac3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac3ac: 0x7fb00000
    ctx->pc = 0x1ac3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac3b0: 0x70a08628
    ctx->pc = 0x1ac3b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ac3b4: 0x70808e28
    ctx->pc = 0x1ac3b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ac3b8: 0x4bede37d
    ctx->pc = 0x1ac3b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ac3bc: 0x4bedeb7d
    ctx->pc = 0x1ac3bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ac3c0: 0x4bedf37d
    ctx->pc = 0x1ac3c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ac3c4: 0x4bedfb7d
    ctx->pc = 0x1ac3c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ac3c8: 0x3c020030
    ctx->pc = 0x1ac3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac3cc: 0xc06c038
    ctx->pc = 0x1AC3CCu;
    SET_GPR_U32(ctx, 31, 0x1AC3D4u);
    ctx->pc = 0x1AC3D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21872));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3D4u; }
        else if (ctx->pc != 0x1AC3D4u) { ctx->pc = 0x1AC3D4u; }
    }
    if (ctx->pc != 0x1AC3D4u) { return; }
    ctx->pc = 0x1AC3D4u;
    // 0x1ac3d4: 0x72202628
    ctx->pc = 0x1ac3d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ac3d8: 0xc06bece
    ctx->pc = 0x1AC3D8u;
    SET_GPR_U32(ctx, 31, 0x1AC3E0u);
    ctx->pc = 0x1AC3DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AFB38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFB38_0x1afb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3E0u; }
        else if (ctx->pc != 0x1AC3E0u) { ctx->pc = 0x1AC3E0u; }
    }
    if (ctx->pc != 0x1AC3E0u) { return; }
    ctx->pc = 0x1AC3E0u;
    // 0x1ac3e0: 0xc7a1003c
    ctx->pc = 0x1ac3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac3e4: 0x3c033f80
    ctx->pc = 0x1ac3e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1ac3e8: 0x44831000
    ctx->pc = 0x1ac3e8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1ac3ec: 0xc7a00030
    ctx->pc = 0x1ac3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac3f0: 0x27a30034
    ctx->pc = 0x1ac3f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ac3f4: 0x46011043
    ctx->pc = 0x1ac3f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1ac3f8: 0x46010002
    ctx->pc = 0x1ac3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ac3fc: 0xe7a00030
    ctx->pc = 0x1ac3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ac400: 0xc4600000
    ctx->pc = 0x1ac400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac404: 0x46010002
    ctx->pc = 0x1ac404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ac408: 0xe4600000
    ctx->pc = 0x1ac408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ac40c: 0xc7a10030
    ctx->pc = 0x1ac40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac410: 0xc7808a94
    ctx->pc = 0x1ac410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac414: 0x46000801
    ctx->pc = 0x1ac414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac418: 0xe6000000
    ctx->pc = 0x1ac418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ac41c: 0xc4610000
    ctx->pc = 0x1ac41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac420: 0xc7808a98
    ctx->pc = 0x1ac420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac424: 0x46000801
    ctx->pc = 0x1ac424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac428: 0xe6000004
    ctx->pc = 0x1ac428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1ac42c: 0x4bff6b7e
    ctx->pc = 0x1ac42cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ac430: 0x4bfe6b7e
    ctx->pc = 0x1ac430u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ac434: 0x4bfd6b7e
    ctx->pc = 0x1ac434u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ac438: 0x4bfc6b7e
    ctx->pc = 0x1ac438u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1ac43c: 0x7bbf0020
    ctx->pc = 0x1ac43cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac440: 0x7bb10010
    ctx->pc = 0x1ac440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac444: 0x7bb00000
    ctx->pc = 0x1ac444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac448: 0x3e00008
    ctx->pc = 0x1AC448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC44Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC450u;
}
