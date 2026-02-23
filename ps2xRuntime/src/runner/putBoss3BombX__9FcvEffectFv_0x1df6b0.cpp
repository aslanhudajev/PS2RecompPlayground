#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss3BombX__9FcvEffectFv
// Address: 0x1df6b0 - 0x1df780
void putBoss3BombX__9FcvEffectFv_0x1df6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss3BombX__9FcvEffectFv");


    ctx->pc = 0x1df6b0u;

    // 0x1df6b0: 0x27bdffc0
    ctx->pc = 0x1df6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df6b4: 0x7fbf0030
    ctx->pc = 0x1df6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df6b8: 0x7fb20020
    ctx->pc = 0x1df6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df6bc: 0x7fb10010
    ctx->pc = 0x1df6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df6c0: 0x7fb00000
    ctx->pc = 0x1df6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df6c4: 0x70809628
    ctx->pc = 0x1df6c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df6c8: 0x4bede37d
    ctx->pc = 0x1df6c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df6cc: 0x4bedeb7d
    ctx->pc = 0x1df6ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df6d0: 0x4bedf37d
    ctx->pc = 0x1df6d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df6d4: 0x4bedfb7d
    ctx->pc = 0x1df6d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df6d8: 0xc48d0040
    ctx->pc = 0x1df6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df6dc: 0xc48e0044
    ctx->pc = 0x1df6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df6e0: 0xc06c202
    ctx->pc = 0x1DF6E0u;
    SET_GPR_U32(ctx, 31, 0x1DF6E8u);
    ctx->pc = 0x1DF6E4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6E8u; }
        else if (ctx->pc != 0x1DF6E8u) { ctx->pc = 0x1DF6E8u; }
    }
    if (ctx->pc != 0x1DF6E8u) { return; }
    ctx->pc = 0x1DF6E8u;
    // 0x1df6e8: 0xc06c213
    ctx->pc = 0x1DF6E8u;
    SET_GPR_U32(ctx, 31, 0x1DF6F0u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6F0u; }
        else if (ctx->pc != 0x1DF6F0u) { ctx->pc = 0x1DF6F0u; }
    }
    if (ctx->pc != 0x1DF6F0u) { return; }
    ctx->pc = 0x1DF6F0u;
    // 0x1df6f0: 0xc64c002c
    ctx->pc = 0x1df6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df6f4: 0x3c033f80
    ctx->pc = 0x1df6f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1df6f8: 0x44830000
    ctx->pc = 0x1df6f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1df6fc: 0x0
    ctx->pc = 0x1df6fcu;
    // NOP
    // 0x1df700: 0x460c0032
    ctx->pc = 0x1df700u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df704: 0x0
    ctx->pc = 0x1df704u;
    // NOP
    // 0x1df708: 0x45010007
    ctx->pc = 0x1DF708u;
    {
        const bool branch_taken_0x1df708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF70Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df708) {
            ctx->pc = 0x1DF728u;
            goto label_1df728;
        }
    }
    ctx->pc = 0x1DF710u;
    // 0x1df710: 0x46006346
    ctx->pc = 0x1df710u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1df714: 0xc06c1b3
    ctx->pc = 0x1DF714u;
    SET_GPR_U32(ctx, 31, 0x1DF71Cu);
    ctx->pc = 0x1DF718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF71Cu; }
        else if (ctx->pc != 0x1DF71Cu) { ctx->pc = 0x1DF71Cu; }
    }
    if (ctx->pc != 0x1DF71Cu) { return; }
    ctx->pc = 0x1DF71Cu;
    // 0x1df71c: 0xc06b218
    ctx->pc = 0x1DF71Cu;
    SET_GPR_U32(ctx, 31, 0x1DF724u);
    ctx->pc = 0x1DF720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF724u; }
        else if (ctx->pc != 0x1DF724u) { ctx->pc = 0x1DF724u; }
    }
    if (ctx->pc != 0x1DF724u) { return; }
    ctx->pc = 0x1DF724u;
    // 0x1df724: 0x70008628
    ctx->pc = 0x1df724u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df728:
    // 0x1df728: 0x10000007
    ctx->pc = 0x1DF728u;
    {
        const bool branch_taken_0x1df728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF72Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df728) {
            ctx->pc = 0x1DF748u;
            goto label_1df748;
        }
    }
    ctx->pc = 0x1DF730u;
label_1df730:
    // 0x1df730: 0x8e420054
    ctx->pc = 0x1df730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1df734: 0xc64c0024
    ctx->pc = 0x1df734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df738: 0xc07a42c
    ctx->pc = 0x1DF738u;
    SET_GPR_U32(ctx, 31, 0x1DF740u);
    ctx->pc = 0x1DF73Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF740u; }
        else if (ctx->pc != 0x1DF740u) { ctx->pc = 0x1DF740u; }
    }
    if (ctx->pc != 0x1DF740u) { return; }
    ctx->pc = 0x1DF740u;
    // 0x1df740: 0x263100f0
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1df744: 0x26100001
    ctx->pc = 0x1df744u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1df748:
    // 0x1df748: 0x8e430000
    ctx->pc = 0x1df748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1df74c: 0x203182a
    ctx->pc = 0x1df74cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1df750: 0x1460fff7
    ctx->pc = 0x1DF750u;
    {
        const bool branch_taken_0x1df750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df750) {
            ctx->pc = 0x1DF730u;
            goto label_1df730;
        }
    }
    ctx->pc = 0x1DF758u;
    // 0x1df758: 0x4bff6b7e
    ctx->pc = 0x1df758u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df75c: 0x4bfe6b7e
    ctx->pc = 0x1df75cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df760: 0x4bfd6b7e
    ctx->pc = 0x1df760u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df764: 0x4bfc6b7e
    ctx->pc = 0x1df764u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df768: 0x7bbf0030
    ctx->pc = 0x1df768u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df76c: 0x7bb20020
    ctx->pc = 0x1df76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df770: 0x7bb10010
    ctx->pc = 0x1df770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df774: 0x7bb00000
    ctx->pc = 0x1df774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df778: 0x3e00008
    ctx->pc = 0x1DF778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF77Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF728u: goto label_1df728;
            case 0x1DF730u: goto label_1df730;
            case 0x1DF748u: goto label_1df748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF780u;
}
