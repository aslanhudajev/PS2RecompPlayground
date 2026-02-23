#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: donjon_00_loop__12DynamicsTaskFv
// Address: 0x1d7980 - 0x1d7b10
void donjon_00_loop__12DynamicsTaskFv_0x1d7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("donjon_00_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d7980u;

    // 0x1d7980: 0x27bdff80
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d7984: 0x7fbf0030
    ctx->pc = 0x1d7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d7988: 0x7fb20020
    ctx->pc = 0x1d7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d798c: 0x7fb10010
    ctx->pc = 0x1d798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7990: 0x7fb00000
    ctx->pc = 0x1d7990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7994: 0x8f838cec
    ctx->pc = 0x1d7994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1d7998: 0x24020001
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d799c: 0x14620003
    ctx->pc = 0x1D799Cu;
    {
        const bool branch_taken_0x1d799c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D79A0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d799c) {
            ctx->pc = 0x1D79ACu;
            goto label_1d79ac;
        }
    }
    ctx->pc = 0x1D79A4u;
    // 0x1d79a4: 0xc06898c
    ctx->pc = 0x1D79A4u;
    SET_GPR_U32(ctx, 31, 0x1D79ACu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79ACu; }
        else if (ctx->pc != 0x1D79ACu) { ctx->pc = 0x1D79ACu; }
    }
    if (ctx->pc != 0x1D79ACu) { return; }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x3c110019
    ctx->pc = 0x1d79acu;
    SET_GPR_U32(ctx, 17, ((uint32_t)25 << 16));
    // 0x1d79b0: 0x1000003b
    ctx->pc = 0x1D79B0u;
    {
        const bool branch_taken_0x1d79b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D79B4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d79b0) {
            ctx->pc = 0x1D7AA0u;
            goto label_1d7aa0;
        }
    }
    ctx->pc = 0x1D79B8u;
label_1d79b8:
    // 0x1d79b8: 0x4bede37d
    ctx->pc = 0x1d79b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d79bc: 0x4bedeb7d
    ctx->pc = 0x1d79bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d79c0: 0x4bedf37d
    ctx->pc = 0x1d79c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d79c4: 0x4bedfb7d
    ctx->pc = 0x1d79c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d79c8: 0xc64d0044
    ctx->pc = 0x1d79c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d79cc: 0xc64e0048
    ctx->pc = 0x1d79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d79d0: 0xc06c202
    ctx->pc = 0x1D79D0u;
    SET_GPR_U32(ctx, 31, 0x1D79D8u);
    ctx->pc = 0x1D79D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79D8u; }
        else if (ctx->pc != 0x1D79D8u) { ctx->pc = 0x1D79D8u; }
    }
    if (ctx->pc != 0x1D79D8u) { return; }
    ctx->pc = 0x1D79D8u;
    // 0x1d79d8: 0xc06c0fb
    ctx->pc = 0x1D79D8u;
    SET_GPR_U32(ctx, 31, 0x1D79E0u);
    ctx->pc = 0x1D79DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79E0u; }
        else if (ctx->pc != 0x1D79E0u) { ctx->pc = 0x1D79E0u; }
    }
    if (ctx->pc != 0x1D79E0u) { return; }
    ctx->pc = 0x1D79E0u;
    // 0x1d79e0: 0xc06c09f
    ctx->pc = 0x1D79E0u;
    SET_GPR_U32(ctx, 31, 0x1D79E8u);
    ctx->pc = 0x1D79E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79E8u; }
        else if (ctx->pc != 0x1D79E8u) { ctx->pc = 0x1D79E8u; }
    }
    if (ctx->pc != 0x1D79E8u) { return; }
    ctx->pc = 0x1D79E8u;
    // 0x1d79e8: 0xc06c157
    ctx->pc = 0x1D79E8u;
    SET_GPR_U32(ctx, 31, 0x1D79F0u);
    ctx->pc = 0x1D79ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79F0u; }
        else if (ctx->pc != 0x1D79F0u) { ctx->pc = 0x1D79F0u; }
    }
    if (ctx->pc != 0x1D79F0u) { return; }
    ctx->pc = 0x1D79F0u;
    // 0x1d79f0: 0x8e450058
    ctx->pc = 0x1d79f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d79f4: 0xc64c0098
    ctx->pc = 0x1d79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d79f8: 0xc64d0068
    ctx->pc = 0x1d79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d79fc: 0x8e470078
    ctx->pc = 0x1d79fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d7a00: 0x27a40040
    ctx->pc = 0x1d7a00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d7a04: 0xc0755e0
    ctx->pc = 0x1D7A04u;
    SET_GPR_U32(ctx, 31, 0x1D7A0Cu);
    ctx->pc = 0x1D7A08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A0Cu; }
        else if (ctx->pc != 0x1D7A0Cu) { ctx->pc = 0x1D7A0Cu; }
    }
    if (ctx->pc != 0x1D7A0Cu) { return; }
    ctx->pc = 0x1D7A0Cu;
    // 0x1d7a0c: 0xc06c04e
    ctx->pc = 0x1D7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A14u);
    ctx->pc = 0x1D7A10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A14u; }
        else if (ctx->pc != 0x1D7A14u) { ctx->pc = 0x1D7A14u; }
    }
    if (ctx->pc != 0x1D7A14u) { return; }
    ctx->pc = 0x1D7A14u;
    // 0x1d7a14: 0xc0853ac
    ctx->pc = 0x1D7A14u;
    SET_GPR_U32(ctx, 31, 0x1D7A1Cu);
    ctx->pc = 0x1D7A18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A1Cu; }
        else if (ctx->pc != 0x1D7A1Cu) { ctx->pc = 0x1D7A1Cu; }
    }
    if (ctx->pc != 0x1D7A1Cu) { return; }
    ctx->pc = 0x1D7A1Cu;
    // 0x1d7a1c: 0x3c030019
    ctx->pc = 0x1d7a1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
    // 0x1d7a20: 0x34620001
    ctx->pc = 0x1d7a20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x1d7a24: 0x52220015
    ctx->pc = 0x1D7A24u;
    {
        const bool branch_taken_0x1d7a24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d7a24) {
            ctx->pc = 0x1D7A28u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1D7A7Cu;
            goto label_1d7a7c;
        }
    }
    ctx->pc = 0x1D7A2Cu;
    // 0x1d7a2c: 0x34620003
    ctx->pc = 0x1d7a2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 3));
    // 0x1d7a30: 0x12220011
    ctx->pc = 0x1D7A30u;
    {
        const bool branch_taken_0x1d7a30 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A34u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 7));
        if (branch_taken_0x1d7a30) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A38u;
    // 0x1d7a38: 0x1222000f
    ctx->pc = 0x1D7A38u;
    {
        const bool branch_taken_0x1d7a38 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A3Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 12));
        if (branch_taken_0x1d7a38) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A40u;
    // 0x1d7a40: 0x1222000d
    ctx->pc = 0x1D7A40u;
    {
        const bool branch_taken_0x1d7a40 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A44u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1d7a40) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A48u;
    // 0x1d7a48: 0x1222000b
    ctx->pc = 0x1D7A48u;
    {
        const bool branch_taken_0x1d7a48 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A4Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 18));
        if (branch_taken_0x1d7a48) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A50u;
    // 0x1d7a50: 0x12220009
    ctx->pc = 0x1D7A50u;
    {
        const bool branch_taken_0x1d7a50 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A54u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x1d7a50) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A58u;
    // 0x1d7a58: 0x12220007
    ctx->pc = 0x1D7A58u;
    {
        const bool branch_taken_0x1d7a58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A5Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1d7a58) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A60u;
    // 0x1d7a60: 0x12220005
    ctx->pc = 0x1D7A60u;
    {
        const bool branch_taken_0x1d7a60 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A64u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 34));
        if (branch_taken_0x1d7a60) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A68u;
    // 0x1d7a68: 0x12220003
    ctx->pc = 0x1D7A68u;
    {
        const bool branch_taken_0x1d7a68 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D7A6Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 41));
        if (branch_taken_0x1d7a68) {
            ctx->pc = 0x1D7A78u;
            goto label_1d7a78;
        }
    }
    ctx->pc = 0x1D7A70u;
    // 0x1d7a70: 0x56220006
    ctx->pc = 0x1D7A70u;
    {
        const bool branch_taken_0x1d7a70 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d7a70) {
            ctx->pc = 0x1D7A74u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1D7A8Cu;
            goto label_1d7a8c;
        }
    }
    ctx->pc = 0x1D7A78u;
label_1d7a78:
    // 0x1d7a78: 0x26310001
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d7a7c:
    // 0x1d7a7c: 0xc0853ac
    ctx->pc = 0x1D7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A84u);
    ctx->pc = 0x1D7A80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A84u; }
        else if (ctx->pc != 0x1D7A84u) { ctx->pc = 0x1D7A84u; }
    }
    if (ctx->pc != 0x1D7A84u) { return; }
    ctx->pc = 0x1D7A84u;
    // 0x1d7a84: 0x0
    ctx->pc = 0x1d7a84u;
    // NOP
    // 0x1d7a88: 0x26310001
    ctx->pc = 0x1d7a88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d7a8c:
    // 0x1d7a8c: 0x4bff6b7e
    ctx->pc = 0x1d7a8cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d7a90: 0x4bfe6b7e
    ctx->pc = 0x1d7a90u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7a94: 0x4bfd6b7e
    ctx->pc = 0x1d7a94u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7a98: 0x4bfc6b7e
    ctx->pc = 0x1d7a98u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7a9c: 0x26100001
    ctx->pc = 0x1d7a9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d7aa0:
    // 0x1d7aa0: 0x8e420078
    ctx->pc = 0x1d7aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d7aa4: 0x202102a
    ctx->pc = 0x1d7aa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1d7aa8: 0x1440ffc3
    ctx->pc = 0x1D7AA8u;
    {
        const bool branch_taken_0x1d7aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D7AACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d7aa8) {
            ctx->pc = 0x1D79B8u;
            goto label_1d79b8;
        }
    }
    ctx->pc = 0x1D7AB0u;
    // 0x1d7ab0: 0xc07ce18
    ctx->pc = 0x1D7AB0u;
    SET_GPR_U32(ctx, 31, 0x1D7AB8u);
    ctx->pc = 0x1D7AB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AB8u; }
        else if (ctx->pc != 0x1D7AB8u) { ctx->pc = 0x1D7AB8u; }
    }
    if (ctx->pc != 0x1D7AB8u) { return; }
    ctx->pc = 0x1D7AB8u;
    // 0x1d7ab8: 0x1c40000f
    ctx->pc = 0x1D7AB8u;
    {
        const bool branch_taken_0x1d7ab8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7ab8) {
            ctx->pc = 0x1D7AF8u;
            goto label_1d7af8;
        }
    }
    ctx->pc = 0x1D7AC0u;
    // 0x1d7ac0: 0xc6410098
    ctx->pc = 0x1d7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ac4: 0x3c033e75
    ctx->pc = 0x1d7ac4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7ac8: 0x3463c290
    ctx->pc = 0x1d7ac8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d7acc: 0x44830000
    ctx->pc = 0x1d7accu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7ad0: 0x0
    ctx->pc = 0x1d7ad0u;
    // NOP
    // 0x1d7ad4: 0x46000840
    ctx->pc = 0x1d7ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7ad8: 0xe6410098
    ctx->pc = 0x1d7ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x1d7adc: 0xc6400068
    ctx->pc = 0x1d7adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ae0: 0x46000836
    ctx->pc = 0x1d7ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7ae4: 0x0
    ctx->pc = 0x1d7ae4u;
    // NOP
    // 0x1d7ae8: 0x45010003
    ctx->pc = 0x1D7AE8u;
    {
        const bool branch_taken_0x1d7ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7ae8) {
            ctx->pc = 0x1D7AF8u;
            goto label_1d7af8;
        }
    }
    ctx->pc = 0x1D7AF0u;
    // 0x1d7af0: 0xc06898c
    ctx->pc = 0x1D7AF0u;
    SET_GPR_U32(ctx, 31, 0x1D7AF8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AF8u; }
        else if (ctx->pc != 0x1D7AF8u) { ctx->pc = 0x1D7AF8u; }
    }
    if (ctx->pc != 0x1D7AF8u) { return; }
    ctx->pc = 0x1D7AF8u;
label_1d7af8:
    // 0x1d7af8: 0x7bbf0030
    ctx->pc = 0x1d7af8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7afc: 0x7bb20020
    ctx->pc = 0x1d7afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7b00: 0x7bb10010
    ctx->pc = 0x1d7b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7b04: 0x7bb00000
    ctx->pc = 0x1d7b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7b08: 0x3e00008
    ctx->pc = 0x1D7B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D79ACu: goto label_1d79ac;
            case 0x1D79B8u: goto label_1d79b8;
            case 0x1D7A78u: goto label_1d7a78;
            case 0x1D7A7Cu: goto label_1d7a7c;
            case 0x1D7A8Cu: goto label_1d7a8c;
            case 0x1D7AA0u: goto label_1d7aa0;
            case 0x1D7AF8u: goto label_1d7af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7B10u;
}
