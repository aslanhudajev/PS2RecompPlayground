#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBos6Hane__9FcvEffectFv
// Address: 0x1e0ba0 - 0x1e0ccc
void putBos6Hane__9FcvEffectFv_0x1e0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBos6Hane__9FcvEffectFv");


    ctx->pc = 0x1e0ba0u;

    // 0x1e0ba0: 0x27bdffb0
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e0ba4: 0x7fbf0040
    ctx->pc = 0x1e0ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e0ba8: 0x7fb20030
    ctx->pc = 0x1e0ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e0bac: 0x7fb10020
    ctx->pc = 0x1e0bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e0bb0: 0x7fb00010
    ctx->pc = 0x1e0bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0bb4: 0xe7b40000
    ctx->pc = 0x1e0bb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e0bb8: 0x3c023f80
    ctx->pc = 0x1e0bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0bbc: 0x4482a000
    ctx->pc = 0x1e0bbcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x1e0bc0: 0xc4800024
    ctx->pc = 0x1e0bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0bc4: 0x3c02428c
    ctx->pc = 0x1e0bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17036 << 16));
    // 0x1e0bc8: 0x44820800
    ctx->pc = 0x1e0bc8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e0bcc: 0x0
    ctx->pc = 0x1e0bccu;
    // NOP
    // 0x1e0bd0: 0x46010036
    ctx->pc = 0x1e0bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0bd4: 0x0
    ctx->pc = 0x1e0bd4u;
    // NOP
    // 0x1e0bd8: 0x45010007
    ctx->pc = 0x1E0BD8u;
    {
        const bool branch_taken_0x1e0bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0BDCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0bd8) {
            ctx->pc = 0x1E0BF8u;
            goto label_1e0bf8;
        }
    }
    ctx->pc = 0x1E0BE0u;
    // 0x1e0be0: 0x46010041
    ctx->pc = 0x1e0be0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e0be4: 0x3c0241f0
    ctx->pc = 0x1e0be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1e0be8: 0x44820000
    ctx->pc = 0x1e0be8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0bec: 0x0
    ctx->pc = 0x1e0becu;
    // NOP
    // 0x1e0bf0: 0x46000803
    ctx->pc = 0x1e0bf0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1e0bf4: 0x4600a501
    ctx->pc = 0x1e0bf4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1e0bf8:
    // 0x1e0bf8: 0x4bede37d
    ctx->pc = 0x1e0bf8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0bfc: 0x4bedeb7d
    ctx->pc = 0x1e0bfcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0c00: 0x4bedf37d
    ctx->pc = 0x1e0c00u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0c04: 0x4bedfb7d
    ctx->pc = 0x1e0c04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0c08: 0xc60d0040
    ctx->pc = 0x1e0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e0c0c: 0xc60e0044
    ctx->pc = 0x1e0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0c10: 0xc06c202
    ctx->pc = 0x1E0C10u;
    SET_GPR_U32(ctx, 31, 0x1E0C18u);
    ctx->pc = 0x1E0C14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C18u; }
        else if (ctx->pc != 0x1E0C18u) { ctx->pc = 0x1E0C18u; }
    }
    if (ctx->pc != 0x1E0C18u) { return; }
    ctx->pc = 0x1E0C18u;
    // 0x1e0c18: 0xc06c0fb
    ctx->pc = 0x1E0C18u;
    SET_GPR_U32(ctx, 31, 0x1E0C20u);
    ctx->pc = 0x1E0C1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C20u; }
        else if (ctx->pc != 0x1E0C20u) { ctx->pc = 0x1E0C20u; }
    }
    if (ctx->pc != 0x1E0C20u) { return; }
    ctx->pc = 0x1E0C20u;
    // 0x1e0c20: 0xc06c09f
    ctx->pc = 0x1E0C20u;
    SET_GPR_U32(ctx, 31, 0x1E0C28u);
    ctx->pc = 0x1E0C24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C28u; }
        else if (ctx->pc != 0x1E0C28u) { ctx->pc = 0x1E0C28u; }
    }
    if (ctx->pc != 0x1E0C28u) { return; }
    ctx->pc = 0x1E0C28u;
    // 0x1e0c28: 0xc06c157
    ctx->pc = 0x1E0C28u;
    SET_GPR_U32(ctx, 31, 0x1E0C30u);
    ctx->pc = 0x1E0C2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C30u; }
        else if (ctx->pc != 0x1E0C30u) { ctx->pc = 0x1E0C30u; }
    }
    if (ctx->pc != 0x1E0C30u) { return; }
    ctx->pc = 0x1E0C30u;
    // 0x1e0c30: 0xc60c002c
    ctx->pc = 0x1e0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0c34: 0x3c033f80
    ctx->pc = 0x1e0c34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e0c38: 0x44830000
    ctx->pc = 0x1e0c38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e0c3c: 0x0
    ctx->pc = 0x1e0c3cu;
    // NOP
    // 0x1e0c40: 0x460c0032
    ctx->pc = 0x1e0c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c44: 0x0
    ctx->pc = 0x1e0c44u;
    // NOP
    // 0x1e0c48: 0x45010007
    ctx->pc = 0x1E0C48u;
    {
        const bool branch_taken_0x1e0c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0C4Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0c48) {
            ctx->pc = 0x1E0C68u;
            goto label_1e0c68;
        }
    }
    ctx->pc = 0x1E0C50u;
    // 0x1e0c50: 0x46006346
    ctx->pc = 0x1e0c50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0c54: 0xc06c1b3
    ctx->pc = 0x1E0C54u;
    SET_GPR_U32(ctx, 31, 0x1E0C5Cu);
    ctx->pc = 0x1E0C58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C5Cu; }
        else if (ctx->pc != 0x1E0C5Cu) { ctx->pc = 0x1E0C5Cu; }
    }
    if (ctx->pc != 0x1E0C5Cu) { return; }
    ctx->pc = 0x1E0C5Cu;
    // 0x1e0c5c: 0xc06b218
    ctx->pc = 0x1E0C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0C64u);
    ctx->pc = 0x1E0C60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C64u; }
        else if (ctx->pc != 0x1E0C64u) { ctx->pc = 0x1E0C64u; }
    }
    if (ctx->pc != 0x1E0C64u) { return; }
    ctx->pc = 0x1E0C64u;
    // 0x1e0c64: 0x70008e28
    ctx->pc = 0x1e0c64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0c68:
    // 0x1e0c68: 0x10000009
    ctx->pc = 0x1E0C68u;
    {
        const bool branch_taken_0x1e0c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0C6Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0c68) {
            ctx->pc = 0x1E0C90u;
            goto label_1e0c90;
        }
    }
    ctx->pc = 0x1E0C70u;
label_1e0c70:
    // 0x1e0c70: 0x8e020054
    ctx->pc = 0x1e0c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0c74: 0xc60c0024
    ctx->pc = 0x1e0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0c78: 0x4600a346
    ctx->pc = 0x1e0c78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0c7c: 0xc079f30
    ctx->pc = 0x1E0C7Cu;
    SET_GPR_U32(ctx, 31, 0x1E0C84u);
    ctx->pc = 0x1E0C80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C84u; }
        else if (ctx->pc != 0x1E0C84u) { ctx->pc = 0x1E0C84u; }
    }
    if (ctx->pc != 0x1E0C84u) { return; }
    ctx->pc = 0x1E0C84u;
    // 0x1e0c84: 0x265200f0
    ctx->pc = 0x1e0c84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1e0c88: 0x26310001
    ctx->pc = 0x1e0c88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e0c8c: 0x0
    ctx->pc = 0x1e0c8cu;
    // NOP
label_1e0c90:
    // 0x1e0c90: 0x8e030000
    ctx->pc = 0x1e0c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0c94: 0x223182a
    ctx->pc = 0x1e0c94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1e0c98: 0x1460fff5
    ctx->pc = 0x1E0C98u;
    {
        const bool branch_taken_0x1e0c98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e0c98) {
            ctx->pc = 0x1E0C70u;
            goto label_1e0c70;
        }
    }
    ctx->pc = 0x1E0CA0u;
    // 0x1e0ca0: 0x4bff6b7e
    ctx->pc = 0x1e0ca0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ca4: 0x4bfe6b7e
    ctx->pc = 0x1e0ca4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ca8: 0x4bfd6b7e
    ctx->pc = 0x1e0ca8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0cac: 0x4bfc6b7e
    ctx->pc = 0x1e0cacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0cb0: 0x7bbf0040
    ctx->pc = 0x1e0cb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0cb4: 0x7bb20030
    ctx->pc = 0x1e0cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0cb8: 0x7bb10020
    ctx->pc = 0x1e0cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0cbc: 0x7bb00010
    ctx->pc = 0x1e0cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0cc0: 0xc7b40000
    ctx->pc = 0x1e0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0cc4: 0x3e00008
    ctx->pc = 0x1E0CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0BF8u: goto label_1e0bf8;
            case 0x1E0C68u: goto label_1e0c68;
            case 0x1E0C70u: goto label_1e0c70;
            case 0x1E0C90u: goto label_1e0c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0CCCu;
}
