#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putLauncher__9FcvEffectFv
// Address: 0x1e0e20 - 0x1e0ef0
void putLauncher__9FcvEffectFv_0x1e0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putLauncher__9FcvEffectFv");


    ctx->pc = 0x1e0e20u;

    // 0x1e0e20: 0x27bdffc0
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0e24: 0x7fbf0030
    ctx->pc = 0x1e0e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e0e28: 0x7fb20020
    ctx->pc = 0x1e0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0e2c: 0x7fb10010
    ctx->pc = 0x1e0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0e30: 0x7fb00000
    ctx->pc = 0x1e0e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0e34: 0x70809628
    ctx->pc = 0x1e0e34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e0e38: 0x4bede37d
    ctx->pc = 0x1e0e38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0e3c: 0x4bedeb7d
    ctx->pc = 0x1e0e3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0e40: 0x4bedf37d
    ctx->pc = 0x1e0e40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0e44: 0x4bedfb7d
    ctx->pc = 0x1e0e44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0e48: 0xc48d0040
    ctx->pc = 0x1e0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e0e4c: 0xc48e0044
    ctx->pc = 0x1e0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0e50: 0xc06c202
    ctx->pc = 0x1E0E50u;
    SET_GPR_U32(ctx, 31, 0x1E0E58u);
    ctx->pc = 0x1E0E54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E58u; }
        else if (ctx->pc != 0x1E0E58u) { ctx->pc = 0x1E0E58u; }
    }
    if (ctx->pc != 0x1E0E58u) { return; }
    ctx->pc = 0x1E0E58u;
    // 0x1e0e58: 0xc06c213
    ctx->pc = 0x1E0E58u;
    SET_GPR_U32(ctx, 31, 0x1E0E60u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E60u; }
        else if (ctx->pc != 0x1E0E60u) { ctx->pc = 0x1E0E60u; }
    }
    if (ctx->pc != 0x1E0E60u) { return; }
    ctx->pc = 0x1E0E60u;
    // 0x1e0e60: 0xc64c002c
    ctx->pc = 0x1e0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0e64: 0x3c033f80
    ctx->pc = 0x1e0e64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e0e68: 0x44830000
    ctx->pc = 0x1e0e68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e0e6c: 0x0
    ctx->pc = 0x1e0e6cu;
    // NOP
    // 0x1e0e70: 0x460c0032
    ctx->pc = 0x1e0e70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0e74: 0x0
    ctx->pc = 0x1e0e74u;
    // NOP
    // 0x1e0e78: 0x45010007
    ctx->pc = 0x1E0E78u;
    {
        const bool branch_taken_0x1e0e78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0E7Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0e78) {
            ctx->pc = 0x1E0E98u;
            goto label_1e0e98;
        }
    }
    ctx->pc = 0x1E0E80u;
    // 0x1e0e80: 0x46006346
    ctx->pc = 0x1e0e80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0e84: 0xc06c1b3
    ctx->pc = 0x1E0E84u;
    SET_GPR_U32(ctx, 31, 0x1E0E8Cu);
    ctx->pc = 0x1E0E88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E8Cu; }
        else if (ctx->pc != 0x1E0E8Cu) { ctx->pc = 0x1E0E8Cu; }
    }
    if (ctx->pc != 0x1E0E8Cu) { return; }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0xc06b218
    ctx->pc = 0x1E0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E94u);
    ctx->pc = 0x1E0E90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E94u; }
        else if (ctx->pc != 0x1E0E94u) { ctx->pc = 0x1E0E94u; }
    }
    if (ctx->pc != 0x1E0E94u) { return; }
    ctx->pc = 0x1E0E94u;
    // 0x1e0e94: 0x70008628
    ctx->pc = 0x1e0e94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0e98:
    // 0x1e0e98: 0x10000007
    ctx->pc = 0x1E0E98u;
    {
        const bool branch_taken_0x1e0e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0E9Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0e98) {
            ctx->pc = 0x1E0EB8u;
            goto label_1e0eb8;
        }
    }
    ctx->pc = 0x1E0EA0u;
label_1e0ea0:
    // 0x1e0ea0: 0x8e420054
    ctx->pc = 0x1e0ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1e0ea4: 0xc64c0024
    ctx->pc = 0x1e0ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0ea8: 0xc079ef0
    ctx->pc = 0x1E0EA8u;
    SET_GPR_U32(ctx, 31, 0x1E0EB0u);
    ctx->pc = 0x1E0EACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFf_0x1e7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EB0u; }
        else if (ctx->pc != 0x1E0EB0u) { ctx->pc = 0x1E0EB0u; }
    }
    if (ctx->pc != 0x1E0EB0u) { return; }
    ctx->pc = 0x1E0EB0u;
    // 0x1e0eb0: 0x263100f0
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1e0eb4: 0x26100001
    ctx->pc = 0x1e0eb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e0eb8:
    // 0x1e0eb8: 0x8e430000
    ctx->pc = 0x1e0eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e0ebc: 0x203182a
    ctx->pc = 0x1e0ebcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1e0ec0: 0x1460fff7
    ctx->pc = 0x1E0EC0u;
    {
        const bool branch_taken_0x1e0ec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e0ec0) {
            ctx->pc = 0x1E0EA0u;
            goto label_1e0ea0;
        }
    }
    ctx->pc = 0x1E0EC8u;
    // 0x1e0ec8: 0x4bff6b7e
    ctx->pc = 0x1e0ec8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ecc: 0x4bfe6b7e
    ctx->pc = 0x1e0eccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ed0: 0x4bfd6b7e
    ctx->pc = 0x1e0ed0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ed4: 0x4bfc6b7e
    ctx->pc = 0x1e0ed4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ed8: 0x7bbf0030
    ctx->pc = 0x1e0ed8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0edc: 0x7bb20020
    ctx->pc = 0x1e0edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0ee0: 0x7bb10010
    ctx->pc = 0x1e0ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0ee4: 0x7bb00000
    ctx->pc = 0x1e0ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ee8: 0x3e00008
    ctx->pc = 0x1E0EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0E98u: goto label_1e0e98;
            case 0x1E0EA0u: goto label_1e0ea0;
            case 0x1E0EB8u: goto label_1e0eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0EF0u;
}
