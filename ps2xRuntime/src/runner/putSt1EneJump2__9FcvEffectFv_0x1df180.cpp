#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putSt1EneJump2__9FcvEffectFv
// Address: 0x1df180 - 0x1df260
void putSt1EneJump2__9FcvEffectFv_0x1df180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSt1EneJump2__9FcvEffectFv");


    ctx->pc = 0x1df180u;

    // 0x1df180: 0x27bdffc0
    ctx->pc = 0x1df180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df184: 0x7fbf0030
    ctx->pc = 0x1df184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df188: 0x7fb20020
    ctx->pc = 0x1df188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df18c: 0x7fb10010
    ctx->pc = 0x1df18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df190: 0x7fb00000
    ctx->pc = 0x1df190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df194: 0x70809628
    ctx->pc = 0x1df194u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df198: 0x4bede37d
    ctx->pc = 0x1df198u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df19c: 0x4bedeb7d
    ctx->pc = 0x1df19cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df1a0: 0x4bedf37d
    ctx->pc = 0x1df1a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df1a4: 0x4bedfb7d
    ctx->pc = 0x1df1a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df1a8: 0xc48d0040
    ctx->pc = 0x1df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df1ac: 0xc48e0044
    ctx->pc = 0x1df1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df1b0: 0xc06c202
    ctx->pc = 0x1DF1B0u;
    SET_GPR_U32(ctx, 31, 0x1DF1B8u);
    ctx->pc = 0x1DF1B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1B8u; }
        else if (ctx->pc != 0x1DF1B8u) { ctx->pc = 0x1DF1B8u; }
    }
    if (ctx->pc != 0x1DF1B8u) { return; }
    ctx->pc = 0x1DF1B8u;
    // 0x1df1b8: 0xc06c0fb
    ctx->pc = 0x1DF1B8u;
    SET_GPR_U32(ctx, 31, 0x1DF1C0u);
    ctx->pc = 0x1DF1BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1C0u; }
        else if (ctx->pc != 0x1DF1C0u) { ctx->pc = 0x1DF1C0u; }
    }
    if (ctx->pc != 0x1DF1C0u) { return; }
    ctx->pc = 0x1DF1C0u;
    // 0x1df1c0: 0xc06c09f
    ctx->pc = 0x1DF1C0u;
    SET_GPR_U32(ctx, 31, 0x1DF1C8u);
    ctx->pc = 0x1DF1C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1C8u; }
        else if (ctx->pc != 0x1DF1C8u) { ctx->pc = 0x1DF1C8u; }
    }
    if (ctx->pc != 0x1DF1C8u) { return; }
    ctx->pc = 0x1DF1C8u;
    // 0x1df1c8: 0xc06c157
    ctx->pc = 0x1DF1C8u;
    SET_GPR_U32(ctx, 31, 0x1DF1D0u);
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1D0u; }
        else if (ctx->pc != 0x1DF1D0u) { ctx->pc = 0x1DF1D0u; }
    }
    if (ctx->pc != 0x1DF1D0u) { return; }
    ctx->pc = 0x1DF1D0u;
    // 0x1df1d0: 0xc64c002c
    ctx->pc = 0x1df1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df1d4: 0x3c033f80
    ctx->pc = 0x1df1d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1df1d8: 0x44830000
    ctx->pc = 0x1df1d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1df1dc: 0x0
    ctx->pc = 0x1df1dcu;
    // NOP
    // 0x1df1e0: 0x460c0032
    ctx->pc = 0x1df1e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df1e4: 0x0
    ctx->pc = 0x1df1e4u;
    // NOP
    // 0x1df1e8: 0x45010007
    ctx->pc = 0x1DF1E8u;
    {
        const bool branch_taken_0x1df1e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF1ECu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df1e8) {
            ctx->pc = 0x1DF208u;
            goto label_1df208;
        }
    }
    ctx->pc = 0x1DF1F0u;
    // 0x1df1f0: 0x46006346
    ctx->pc = 0x1df1f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1df1f4: 0xc06c1b3
    ctx->pc = 0x1DF1F4u;
    SET_GPR_U32(ctx, 31, 0x1DF1FCu);
    ctx->pc = 0x1DF1F8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1FCu; }
        else if (ctx->pc != 0x1DF1FCu) { ctx->pc = 0x1DF1FCu; }
    }
    if (ctx->pc != 0x1DF1FCu) { return; }
    ctx->pc = 0x1DF1FCu;
    // 0x1df1fc: 0xc06b218
    ctx->pc = 0x1DF1FCu;
    SET_GPR_U32(ctx, 31, 0x1DF204u);
    ctx->pc = 0x1DF200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF204u; }
        else if (ctx->pc != 0x1DF204u) { ctx->pc = 0x1DF204u; }
    }
    if (ctx->pc != 0x1DF204u) { return; }
    ctx->pc = 0x1DF204u;
    // 0x1df204: 0x70008628
    ctx->pc = 0x1df204u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df208:
    // 0x1df208: 0x10000007
    ctx->pc = 0x1DF208u;
    {
        const bool branch_taken_0x1df208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF20Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df208) {
            ctx->pc = 0x1DF228u;
            goto label_1df228;
        }
    }
    ctx->pc = 0x1DF210u;
label_1df210:
    // 0x1df210: 0x8e420054
    ctx->pc = 0x1df210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1df214: 0xc64c0024
    ctx->pc = 0x1df214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df218: 0xc07a47c
    ctx->pc = 0x1DF218u;
    SET_GPR_U32(ctx, 31, 0x1DF220u);
    ctx->pc = 0x1DF21Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF220u; }
        else if (ctx->pc != 0x1DF220u) { ctx->pc = 0x1DF220u; }
    }
    if (ctx->pc != 0x1DF220u) { return; }
    ctx->pc = 0x1DF220u;
    // 0x1df220: 0x263100f0
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1df224: 0x26100001
    ctx->pc = 0x1df224u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1df228:
    // 0x1df228: 0x8e430000
    ctx->pc = 0x1df228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1df22c: 0x203182a
    ctx->pc = 0x1df22cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1df230: 0x1460fff7
    ctx->pc = 0x1DF230u;
    {
        const bool branch_taken_0x1df230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df230) {
            ctx->pc = 0x1DF210u;
            goto label_1df210;
        }
    }
    ctx->pc = 0x1DF238u;
    // 0x1df238: 0x4bff6b7e
    ctx->pc = 0x1df238u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df23c: 0x4bfe6b7e
    ctx->pc = 0x1df23cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df240: 0x4bfd6b7e
    ctx->pc = 0x1df240u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df244: 0x4bfc6b7e
    ctx->pc = 0x1df244u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df248: 0x7bbf0030
    ctx->pc = 0x1df248u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df24c: 0x7bb20020
    ctx->pc = 0x1df24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df250: 0x7bb10010
    ctx->pc = 0x1df250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df254: 0x7bb00000
    ctx->pc = 0x1df254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df258: 0x3e00008
    ctx->pc = 0x1DF258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF25Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF208u: goto label_1df208;
            case 0x1DF210u: goto label_1df210;
            case 0x1DF228u: goto label_1df228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF260u;
}
