#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: donjon_01_loop__12DynamicsTaskFv
// Address: 0x1d7b10 - 0x1d7cf8
void donjon_01_loop__12DynamicsTaskFv_0x1d7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("donjon_01_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d7b10u;

    // 0x1d7b10: 0x27bdff90
    ctx->pc = 0x1d7b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d7b14: 0x7fbf0020
    ctx->pc = 0x1d7b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d7b18: 0x7fb10010
    ctx->pc = 0x1d7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7b1c: 0x7fb00000
    ctx->pc = 0x1d7b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7b20: 0x8f838cec
    ctx->pc = 0x1d7b20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1d7b24: 0x24020001
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b28: 0x14620003
    ctx->pc = 0x1D7B28u;
    {
        const bool branch_taken_0x1d7b28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D7B2Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7b28) {
            ctx->pc = 0x1D7B38u;
            goto label_1d7b38;
        }
    }
    ctx->pc = 0x1D7B30u;
    // 0x1d7b30: 0xc06898c
    ctx->pc = 0x1D7B30u;
    SET_GPR_U32(ctx, 31, 0x1D7B38u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B38u; }
        else if (ctx->pc != 0x1D7B38u) { ctx->pc = 0x1D7B38u; }
    }
    if (ctx->pc != 0x1D7B38u) { return; }
    ctx->pc = 0x1D7B38u;
label_1d7b38:
    // 0x1d7b38: 0x10000021
    ctx->pc = 0x1D7B38u;
    {
        const bool branch_taken_0x1d7b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7B3Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7b38) {
            ctx->pc = 0x1D7BC0u;
            goto label_1d7bc0;
        }
    }
    ctx->pc = 0x1D7B40u;
label_1d7b40:
    // 0x1d7b40: 0x4bede37d
    ctx->pc = 0x1d7b40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7b44: 0x4bedeb7d
    ctx->pc = 0x1d7b44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7b48: 0x4bedf37d
    ctx->pc = 0x1d7b48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7b4c: 0x4bedfb7d
    ctx->pc = 0x1d7b4cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7b50: 0xc60d0044
    ctx->pc = 0x1d7b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7b54: 0xc60e0048
    ctx->pc = 0x1d7b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7b58: 0xc06c202
    ctx->pc = 0x1D7B58u;
    SET_GPR_U32(ctx, 31, 0x1D7B60u);
    ctx->pc = 0x1D7B5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B60u; }
        else if (ctx->pc != 0x1D7B60u) { ctx->pc = 0x1D7B60u; }
    }
    if (ctx->pc != 0x1D7B60u) { return; }
    ctx->pc = 0x1D7B60u;
    // 0x1d7b60: 0xc06c0fb
    ctx->pc = 0x1D7B60u;
    SET_GPR_U32(ctx, 31, 0x1D7B68u);
    ctx->pc = 0x1D7B64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B68u; }
        else if (ctx->pc != 0x1D7B68u) { ctx->pc = 0x1D7B68u; }
    }
    if (ctx->pc != 0x1D7B68u) { return; }
    ctx->pc = 0x1D7B68u;
    // 0x1d7b68: 0xc06c09f
    ctx->pc = 0x1D7B68u;
    SET_GPR_U32(ctx, 31, 0x1D7B70u);
    ctx->pc = 0x1D7B6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B70u; }
        else if (ctx->pc != 0x1D7B70u) { ctx->pc = 0x1D7B70u; }
    }
    if (ctx->pc != 0x1D7B70u) { return; }
    ctx->pc = 0x1D7B70u;
    // 0x1d7b70: 0xc06c157
    ctx->pc = 0x1D7B70u;
    SET_GPR_U32(ctx, 31, 0x1D7B78u);
    ctx->pc = 0x1D7B74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B78u; }
        else if (ctx->pc != 0x1D7B78u) { ctx->pc = 0x1D7B78u; }
    }
    if (ctx->pc != 0x1D7B78u) { return; }
    ctx->pc = 0x1D7B78u;
    // 0x1d7b78: 0x8e050058
    ctx->pc = 0x1d7b78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d7b7c: 0xc60c0098
    ctx->pc = 0x1d7b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7b80: 0xc60d0068
    ctx->pc = 0x1d7b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7b84: 0x8e070078
    ctx->pc = 0x1d7b84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7b88: 0x27a40030
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7b8c: 0xc0755e0
    ctx->pc = 0x1D7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B94u);
    ctx->pc = 0x1D7B90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B94u; }
        else if (ctx->pc != 0x1D7B94u) { ctx->pc = 0x1D7B94u; }
    }
    if (ctx->pc != 0x1D7B94u) { return; }
    ctx->pc = 0x1D7B94u;
    // 0x1d7b94: 0xc06c04e
    ctx->pc = 0x1D7B94u;
    SET_GPR_U32(ctx, 31, 0x1D7B9Cu);
    ctx->pc = 0x1D7B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B9Cu; }
        else if (ctx->pc != 0x1D7B9Cu) { ctx->pc = 0x1D7B9Cu; }
    }
    if (ctx->pc != 0x1D7B9Cu) { return; }
    ctx->pc = 0x1D7B9Cu;
    // 0x1d7b9c: 0x3c020019
    ctx->pc = 0x1d7b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x1d7ba0: 0x34420050
    ctx->pc = 0x1d7ba0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 80));
    // 0x1d7ba4: 0xc0853ac
    ctx->pc = 0x1D7BA4u;
    SET_GPR_U32(ctx, 31, 0x1D7BACu);
    ctx->pc = 0x1D7BA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BACu; }
        else if (ctx->pc != 0x1D7BACu) { ctx->pc = 0x1D7BACu; }
    }
    if (ctx->pc != 0x1D7BACu) { return; }
    ctx->pc = 0x1D7BACu;
    // 0x1d7bac: 0x4bff6b7e
    ctx->pc = 0x1d7bacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d7bb0: 0x4bfe6b7e
    ctx->pc = 0x1d7bb0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7bb4: 0x4bfd6b7e
    ctx->pc = 0x1d7bb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7bb8: 0x4bfc6b7e
    ctx->pc = 0x1d7bb8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7bbc: 0x26310001
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d7bc0:
    // 0x1d7bc0: 0x8e020078
    ctx->pc = 0x1d7bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7bc4: 0x222102a
    ctx->pc = 0x1d7bc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d7bc8: 0x1440ffdd
    ctx->pc = 0x1D7BC8u;
    {
        const bool branch_taken_0x1d7bc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7bc8) {
            ctx->pc = 0x1D7B40u;
            goto label_1d7b40;
        }
    }
    ctx->pc = 0x1D7BD0u;
    // 0x1d7bd0: 0x10000021
    ctx->pc = 0x1D7BD0u;
    {
        const bool branch_taken_0x1d7bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7BD4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7bd0) {
            ctx->pc = 0x1D7C58u;
            goto label_1d7c58;
        }
    }
    ctx->pc = 0x1D7BD8u;
label_1d7bd8:
    // 0x1d7bd8: 0x4bede37d
    ctx->pc = 0x1d7bd8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7bdc: 0x4bedeb7d
    ctx->pc = 0x1d7bdcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7be0: 0x4bedf37d
    ctx->pc = 0x1d7be0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7be4: 0x4bedfb7d
    ctx->pc = 0x1d7be4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7be8: 0xc60d0044
    ctx->pc = 0x1d7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7bec: 0xc60e0048
    ctx->pc = 0x1d7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7bf0: 0xc06c202
    ctx->pc = 0x1D7BF0u;
    SET_GPR_U32(ctx, 31, 0x1D7BF8u);
    ctx->pc = 0x1D7BF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BF8u; }
        else if (ctx->pc != 0x1D7BF8u) { ctx->pc = 0x1D7BF8u; }
    }
    if (ctx->pc != 0x1D7BF8u) { return; }
    ctx->pc = 0x1D7BF8u;
    // 0x1d7bf8: 0xc06c0fb
    ctx->pc = 0x1D7BF8u;
    SET_GPR_U32(ctx, 31, 0x1D7C00u);
    ctx->pc = 0x1D7BFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C00u; }
        else if (ctx->pc != 0x1D7C00u) { ctx->pc = 0x1D7C00u; }
    }
    if (ctx->pc != 0x1D7C00u) { return; }
    ctx->pc = 0x1D7C00u;
    // 0x1d7c00: 0xc06c09f
    ctx->pc = 0x1D7C00u;
    SET_GPR_U32(ctx, 31, 0x1D7C08u);
    ctx->pc = 0x1D7C04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C08u; }
        else if (ctx->pc != 0x1D7C08u) { ctx->pc = 0x1D7C08u; }
    }
    if (ctx->pc != 0x1D7C08u) { return; }
    ctx->pc = 0x1D7C08u;
    // 0x1d7c08: 0xc06c157
    ctx->pc = 0x1D7C08u;
    SET_GPR_U32(ctx, 31, 0x1D7C10u);
    ctx->pc = 0x1D7C0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C10u; }
        else if (ctx->pc != 0x1D7C10u) { ctx->pc = 0x1D7C10u; }
    }
    if (ctx->pc != 0x1D7C10u) { return; }
    ctx->pc = 0x1D7C10u;
    // 0x1d7c10: 0x8e05005c
    ctx->pc = 0x1d7c10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1d7c14: 0xc60c009c
    ctx->pc = 0x1d7c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7c18: 0xc60d006c
    ctx->pc = 0x1d7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7c1c: 0x8e07007c
    ctx->pc = 0x1d7c1cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1d7c20: 0x27a40030
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7c24: 0xc0755e0
    ctx->pc = 0x1D7C24u;
    SET_GPR_U32(ctx, 31, 0x1D7C2Cu);
    ctx->pc = 0x1D7C28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C2Cu; }
        else if (ctx->pc != 0x1D7C2Cu) { ctx->pc = 0x1D7C2Cu; }
    }
    if (ctx->pc != 0x1D7C2Cu) { return; }
    ctx->pc = 0x1D7C2Cu;
    // 0x1d7c2c: 0xc06c04e
    ctx->pc = 0x1D7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C34u);
    ctx->pc = 0x1D7C30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C34u; }
        else if (ctx->pc != 0x1D7C34u) { ctx->pc = 0x1D7C34u; }
    }
    if (ctx->pc != 0x1D7C34u) { return; }
    ctx->pc = 0x1D7C34u;
    // 0x1d7c34: 0x3c020019
    ctx->pc = 0x1d7c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x1d7c38: 0x34420080
    ctx->pc = 0x1d7c38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
    // 0x1d7c3c: 0xc0853ac
    ctx->pc = 0x1D7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C44u);
    ctx->pc = 0x1D7C40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C44u; }
        else if (ctx->pc != 0x1D7C44u) { ctx->pc = 0x1D7C44u; }
    }
    if (ctx->pc != 0x1D7C44u) { return; }
    ctx->pc = 0x1D7C44u;
    // 0x1d7c44: 0x4bff6b7e
    ctx->pc = 0x1d7c44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c48: 0x4bfe6b7e
    ctx->pc = 0x1d7c48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c4c: 0x4bfd6b7e
    ctx->pc = 0x1d7c4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c50: 0x4bfc6b7e
    ctx->pc = 0x1d7c50u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7c54: 0x26310001
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d7c58:
    // 0x1d7c58: 0x8e02007c
    ctx->pc = 0x1d7c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1d7c5c: 0x222102a
    ctx->pc = 0x1d7c5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d7c60: 0x1440ffdd
    ctx->pc = 0x1D7C60u;
    {
        const bool branch_taken_0x1d7c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D7C64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d7c60) {
            ctx->pc = 0x1D7BD8u;
            goto label_1d7bd8;
        }
    }
    ctx->pc = 0x1D7C68u;
    // 0x1d7c68: 0xc07ce18
    ctx->pc = 0x1D7C68u;
    SET_GPR_U32(ctx, 31, 0x1D7C70u);
    ctx->pc = 0x1D7C6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C70u; }
        else if (ctx->pc != 0x1D7C70u) { ctx->pc = 0x1D7C70u; }
    }
    if (ctx->pc != 0x1D7C70u) { return; }
    ctx->pc = 0x1D7C70u;
    // 0x1d7c70: 0x1c40001c
    ctx->pc = 0x1D7C70u;
    {
        const bool branch_taken_0x1d7c70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7c70) {
            ctx->pc = 0x1D7CE4u;
            goto label_1d7ce4;
        }
    }
    ctx->pc = 0x1D7C78u;
    // 0x1d7c78: 0xc6000098
    ctx->pc = 0x1d7c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c7c: 0x3c033e75
    ctx->pc = 0x1d7c7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7c80: 0x3463c290
    ctx->pc = 0x1d7c80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d7c84: 0x44830800
    ctx->pc = 0x1d7c84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d7c88: 0x0
    ctx->pc = 0x1d7c88u;
    // NOP
    // 0x1d7c8c: 0x46010040
    ctx->pc = 0x1d7c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d7c90: 0xe6010098
    ctx->pc = 0x1d7c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1d7c94: 0xc6000068
    ctx->pc = 0x1d7c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c98: 0x46000836
    ctx->pc = 0x1d7c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c9c: 0x0
    ctx->pc = 0x1d7c9cu;
    // NOP
    // 0x1d7ca0: 0x45010003
    ctx->pc = 0x1D7CA0u;
    {
        const bool branch_taken_0x1d7ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7ca0) {
            ctx->pc = 0x1D7CB0u;
            goto label_1d7cb0;
        }
    }
    ctx->pc = 0x1D7CA8u;
    // 0x1d7ca8: 0xc06898c
    ctx->pc = 0x1D7CA8u;
    SET_GPR_U32(ctx, 31, 0x1D7CB0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CB0u; }
        else if (ctx->pc != 0x1D7CB0u) { ctx->pc = 0x1D7CB0u; }
    }
    if (ctx->pc != 0x1D7CB0u) { return; }
    ctx->pc = 0x1D7CB0u;
label_1d7cb0:
    // 0x1d7cb0: 0xc601009c
    ctx->pc = 0x1d7cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7cb4: 0x3c033e75
    ctx->pc = 0x1d7cb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7cb8: 0x3463c290
    ctx->pc = 0x1d7cb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d7cbc: 0x44830000
    ctx->pc = 0x1d7cbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7cc0: 0x0
    ctx->pc = 0x1d7cc0u;
    // NOP
    // 0x1d7cc4: 0x46000800
    ctx->pc = 0x1d7cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7cc8: 0xe600009c
    ctx->pc = 0x1d7cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1d7ccc: 0xc601006c
    ctx->pc = 0x1d7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7cd0: 0x46010036
    ctx->pc = 0x1d7cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7cd4: 0x0
    ctx->pc = 0x1d7cd4u;
    // NOP
    // 0x1d7cd8: 0x45010002
    ctx->pc = 0x1D7CD8u;
    {
        const bool branch_taken_0x1d7cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7cd8) {
            ctx->pc = 0x1D7CE4u;
            goto label_1d7ce4;
        }
    }
    ctx->pc = 0x1D7CE0u;
    // 0x1d7ce0: 0xe601009c
    ctx->pc = 0x1d7ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_1d7ce4:
    // 0x1d7ce4: 0x7bbf0020
    ctx->pc = 0x1d7ce4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7ce8: 0x7bb10010
    ctx->pc = 0x1d7ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7cec: 0x7bb00000
    ctx->pc = 0x1d7cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7cf0: 0x3e00008
    ctx->pc = 0x1D7CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7B38u: goto label_1d7b38;
            case 0x1D7B40u: goto label_1d7b40;
            case 0x1D7BC0u: goto label_1d7bc0;
            case 0x1D7BD8u: goto label_1d7bd8;
            case 0x1D7C58u: goto label_1d7c58;
            case 0x1D7CB0u: goto label_1d7cb0;
            case 0x1D7CE4u: goto label_1d7ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7CF8u;
}
