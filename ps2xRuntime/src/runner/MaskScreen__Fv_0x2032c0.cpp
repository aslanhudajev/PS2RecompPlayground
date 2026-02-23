#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MaskScreen__Fv
// Address: 0x2032c0 - 0x203368
void MaskScreen__Fv_0x2032c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MaskScreen__Fv");


    ctx->pc = 0x2032c0u;

    // 0x2032c0: 0x27bdffe0
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2032c4: 0x7fbf0010
    ctx->pc = 0x2032c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2032c8: 0xe7b50004
    ctx->pc = 0x2032c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2032cc: 0xe7b40000
    ctx->pc = 0x2032ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2032d0: 0xc7808c50
    ctx->pc = 0x2032d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2032d4: 0x3c024420
    ctx->pc = 0x2032d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
    // 0x2032d8: 0x44820800
    ctx->pc = 0x2032d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2032dc: 0x0
    ctx->pc = 0x2032dcu;
    // NOP
    // 0x2032e0: 0x46000d03
    ctx->pc = 0x2032e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2032e4: 0x4bede37d
    ctx->pc = 0x2032e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2032e8: 0x4bedeb7d
    ctx->pc = 0x2032e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2032ec: 0x4bedf37d
    ctx->pc = 0x2032ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2032f0: 0xc06c20d
    ctx->pc = 0x2032F0u;
    SET_GPR_U32(ctx, 31, 0x2032F8u);
    ctx->pc = 0x2032F4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2032F8u; }
        else if (ctx->pc != 0x2032F8u) { ctx->pc = 0x2032F8u; }
    }
    if (ctx->pc != 0x2032F8u) { return; }
    ctx->pc = 0x2032F8u;
    // 0x2032f8: 0x3c02bf66
    ctx->pc = 0x2032f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48998 << 16));
    // 0x2032fc: 0x44806000
    ctx->pc = 0x2032fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x203300: 0x34426666
    ctx->pc = 0x203300u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x203304: 0x44827000
    ctx->pc = 0x203304u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x203308: 0xc06c202
    ctx->pc = 0x203308u;
    SET_GPR_U32(ctx, 31, 0x203310u);
    ctx->pc = 0x20330Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203310u; }
        else if (ctx->pc != 0x203310u) { ctx->pc = 0x203310u; }
    }
    if (ctx->pc != 0x203310u) { return; }
    ctx->pc = 0x203310u;
    // 0x203310: 0x3c024100
    ctx->pc = 0x203310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16640 << 16));
    // 0x203314: 0x44820000
    ctx->pc = 0x203314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x203318: 0x4600a306
    ctx->pc = 0x203318u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20331c: 0x46140542
    ctx->pc = 0x20331cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x203320: 0x3c023f80
    ctx->pc = 0x203320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x203324: 0x44827000
    ctx->pc = 0x203324u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x203328: 0xc06c1b3
    ctx->pc = 0x203328u;
    SET_GPR_U32(ctx, 31, 0x203330u);
    ctx->pc = 0x20332Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203330u; }
        else if (ctx->pc != 0x203330u) { ctx->pc = 0x203330u; }
    }
    if (ctx->pc != 0x203330u) { return; }
    ctx->pc = 0x203330u;
    // 0x203330: 0xc06b218
    ctx->pc = 0x203330u;
    SET_GPR_U32(ctx, 31, 0x203338u);
    ctx->pc = 0x203334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203338u; }
        else if (ctx->pc != 0x203338u) { ctx->pc = 0x203338u; }
    }
    if (ctx->pc != 0x203338u) { return; }
    ctx->pc = 0x203338u;
    // 0x203338: 0x3c020001
    ctx->pc = 0x203338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x20333c: 0xc0853ac
    ctx->pc = 0x20333Cu;
    SET_GPR_U32(ctx, 31, 0x203344u);
    ctx->pc = 0x203340u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203344u; }
        else if (ctx->pc != 0x203344u) { ctx->pc = 0x203344u; }
    }
    if (ctx->pc != 0x203344u) { return; }
    ctx->pc = 0x203344u;
    // 0x203344: 0x4bff6b7e
    ctx->pc = 0x203344u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x203348: 0x4bfe6b7e
    ctx->pc = 0x203348u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20334c: 0x4bfd6b7e
    ctx->pc = 0x20334cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x203350: 0x4bfc6b7e
    ctx->pc = 0x203350u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x203354: 0x7bbf0010
    ctx->pc = 0x203354u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203358: 0xc7b50004
    ctx->pc = 0x203358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20335c: 0xc7b40000
    ctx->pc = 0x20335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203360: 0x3e00008
    ctx->pc = 0x203360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203368u;
}
