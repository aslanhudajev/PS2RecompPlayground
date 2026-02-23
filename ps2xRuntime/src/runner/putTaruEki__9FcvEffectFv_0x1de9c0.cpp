#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putTaruEki__9FcvEffectFv
// Address: 0x1de9c0 - 0x1dea90
void putTaruEki__9FcvEffectFv_0x1de9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putTaruEki__9FcvEffectFv");


    ctx->pc = 0x1de9c0u;

    // 0x1de9c0: 0x27bdffc0
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de9c4: 0x7fbf0030
    ctx->pc = 0x1de9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1de9c8: 0x7fb20020
    ctx->pc = 0x1de9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de9cc: 0x7fb10010
    ctx->pc = 0x1de9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de9d0: 0x7fb00000
    ctx->pc = 0x1de9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de9d4: 0x70809628
    ctx->pc = 0x1de9d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de9d8: 0x4bede37d
    ctx->pc = 0x1de9d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1de9dc: 0x4bedeb7d
    ctx->pc = 0x1de9dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1de9e0: 0x4bedf37d
    ctx->pc = 0x1de9e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1de9e4: 0x4bedfb7d
    ctx->pc = 0x1de9e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1de9e8: 0xc48d0040
    ctx->pc = 0x1de9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de9ec: 0xc48e0044
    ctx->pc = 0x1de9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1de9f0: 0xc06c202
    ctx->pc = 0x1DE9F0u;
    SET_GPR_U32(ctx, 31, 0x1DE9F8u);
    ctx->pc = 0x1DE9F4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9F8u; }
        else if (ctx->pc != 0x1DE9F8u) { ctx->pc = 0x1DE9F8u; }
    }
    if (ctx->pc != 0x1DE9F8u) { return; }
    ctx->pc = 0x1DE9F8u;
    // 0x1de9f8: 0x70008628
    ctx->pc = 0x1de9f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de9fc: 0x10000016
    ctx->pc = 0x1DE9FCu;
    {
        const bool branch_taken_0x1de9fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEA00u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de9fc) {
            ctx->pc = 0x1DEA58u;
            goto label_1dea58;
        }
    }
    ctx->pc = 0x1DEA04u;
label_1dea04:
    // 0x1dea04: 0x1600000b
    ctx->pc = 0x1DEA04u;
    {
        const bool branch_taken_0x1dea04 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DEA08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
        if (branch_taken_0x1dea04) {
            ctx->pc = 0x1DEA34u;
            goto label_1dea34;
        }
    }
    ctx->pc = 0x1DEA0Cu;
    // 0x1dea0c: 0x3c023f33
    ctx->pc = 0x1dea0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x1dea10: 0x34423333
    ctx->pc = 0x1dea10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x1dea14: 0x44826800
    ctx->pc = 0x1dea14u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dea18: 0xc64c0024
    ctx->pc = 0x1dea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dea1c: 0x8e420054
    ctx->pc = 0x1dea1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dea20: 0xc079f30
    ctx->pc = 0x1DEA20u;
    SET_GPR_U32(ctx, 31, 0x1DEA28u);
    ctx->pc = 0x1DEA24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA28u; }
        else if (ctx->pc != 0x1DEA28u) { ctx->pc = 0x1DEA28u; }
    }
    if (ctx->pc != 0x1DEA28u) { return; }
    ctx->pc = 0x1DEA28u;
    // 0x1dea28: 0x1000000a
    ctx->pc = 0x1DEA28u;
    {
        const bool branch_taken_0x1dea28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEA2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dea28) {
            ctx->pc = 0x1DEA54u;
            goto label_1dea54;
        }
    }
    ctx->pc = 0x1DEA30u;
    // 0x1dea30: 0x3c023f33
    ctx->pc = 0x1dea30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
label_1dea34:
    // 0x1dea34: 0x34423333
    ctx->pc = 0x1dea34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x1dea38: 0x44826800
    ctx->pc = 0x1dea38u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dea3c: 0xc64c0024
    ctx->pc = 0x1dea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dea40: 0x8e420054
    ctx->pc = 0x1dea40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dea44: 0xc07a2e0
    ctx->pc = 0x1DEA44u;
    SET_GPR_U32(ctx, 31, 0x1DEA4Cu);
    ctx->pc = 0x1DEA48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA4Cu; }
        else if (ctx->pc != 0x1DEA4Cu) { ctx->pc = 0x1DEA4Cu; }
    }
    if (ctx->pc != 0x1DEA4Cu) { return; }
    ctx->pc = 0x1DEA4Cu;
    // 0x1dea4c: 0x0
    ctx->pc = 0x1dea4cu;
    // NOP
    // 0x1dea50: 0x263100f0
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dea54:
    // 0x1dea54: 0x26100001
    ctx->pc = 0x1dea54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dea58:
    // 0x1dea58: 0x8e430000
    ctx->pc = 0x1dea58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dea5c: 0x203182a
    ctx->pc = 0x1dea5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dea60: 0x1460ffe8
    ctx->pc = 0x1DEA60u;
    {
        const bool branch_taken_0x1dea60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dea60) {
            ctx->pc = 0x1DEA04u;
            goto label_1dea04;
        }
    }
    ctx->pc = 0x1DEA68u;
    // 0x1dea68: 0x4bff6b7e
    ctx->pc = 0x1dea68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dea6c: 0x4bfe6b7e
    ctx->pc = 0x1dea6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dea70: 0x4bfd6b7e
    ctx->pc = 0x1dea70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dea74: 0x4bfc6b7e
    ctx->pc = 0x1dea74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dea78: 0x7bbf0030
    ctx->pc = 0x1dea78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dea7c: 0x7bb20020
    ctx->pc = 0x1dea7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dea80: 0x7bb10010
    ctx->pc = 0x1dea80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea84: 0x7bb00000
    ctx->pc = 0x1dea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea88: 0x3e00008
    ctx->pc = 0x1DEA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEA04u: goto label_1dea04;
            case 0x1DEA34u: goto label_1dea34;
            case 0x1DEA54u: goto label_1dea54;
            case 0x1DEA58u: goto label_1dea58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEA90u;
}
