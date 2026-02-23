#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__13TrnKomonoTaskFv
// Address: 0x21fb20 - 0x21fbbc
void ctrl__13TrnKomonoTaskFv_0x21fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__13TrnKomonoTaskFv");


    ctx->pc = 0x21fb20u;

    // 0x21fb20: 0x27bdffe0
    ctx->pc = 0x21fb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fb24: 0x7fbf0010
    ctx->pc = 0x21fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21fb28: 0x7fb00000
    ctx->pc = 0x21fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fb2c: 0x70808628
    ctx->pc = 0x21fb2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21fb30: 0xc086d68
    ctx->pc = 0x21FB30u;
    SET_GPR_U32(ctx, 31, 0x21FB38u);
    ctx->pc = 0x21FB34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 320));
    ctx->pc = 0x21B5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkEndCP__14CTrnKomonoBaseFv_0x21b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB38u; }
        else if (ctx->pc != 0x21FB38u) { ctx->pc = 0x21FB38u; }
    }
    if (ctx->pc != 0x21FB38u) { return; }
    ctx->pc = 0x21FB38u;
    // 0x21fb38: 0x10400003
    ctx->pc = 0x21FB38u;
    {
        const bool branch_taken_0x21fb38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fb38) {
            ctx->pc = 0x21FB48u;
            goto label_21fb48;
        }
    }
    ctx->pc = 0x21FB40u;
    // 0x21fb40: 0xc06898c
    ctx->pc = 0x21FB40u;
    SET_GPR_U32(ctx, 31, 0x21FB48u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB48u; }
        else if (ctx->pc != 0x21FB48u) { ctx->pc = 0x21FB48u; }
    }
    if (ctx->pc != 0x21FB48u) { return; }
    ctx->pc = 0x21FB48u;
label_21fb48:
    // 0x21fb48: 0x4bede37d
    ctx->pc = 0x21fb48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21fb4c: 0x4bedeb7d
    ctx->pc = 0x21fb4cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21fb50: 0x4bedf37d
    ctx->pc = 0x21fb50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21fb54: 0x4bedfb7d
    ctx->pc = 0x21fb54u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21fb58: 0xc60d0030
    ctx->pc = 0x21fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21fb5c: 0xc60e0034
    ctx->pc = 0x21fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21fb60: 0xc06c202
    ctx->pc = 0x21FB60u;
    SET_GPR_U32(ctx, 31, 0x21FB68u);
    ctx->pc = 0x21FB64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB68u; }
        else if (ctx->pc != 0x21FB68u) { ctx->pc = 0x21FB68u; }
    }
    if (ctx->pc != 0x21FB68u) { return; }
    ctx->pc = 0x21FB68u;
    // 0x21fb68: 0xc06c157
    ctx->pc = 0x21FB68u;
    SET_GPR_U32(ctx, 31, 0x21FB70u);
    ctx->pc = 0x21FB6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB70u; }
        else if (ctx->pc != 0x21FB70u) { ctx->pc = 0x21FB70u; }
    }
    if (ctx->pc != 0x21FB70u) { return; }
    ctx->pc = 0x21FB70u;
    // 0x21fb70: 0xc06c0fb
    ctx->pc = 0x21FB70u;
    SET_GPR_U32(ctx, 31, 0x21FB78u);
    ctx->pc = 0x21FB74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB78u; }
        else if (ctx->pc != 0x21FB78u) { ctx->pc = 0x21FB78u; }
    }
    if (ctx->pc != 0x21FB78u) { return; }
    ctx->pc = 0x21FB78u;
    // 0x21fb78: 0xc06c09f
    ctx->pc = 0x21FB78u;
    SET_GPR_U32(ctx, 31, 0x21FB80u);
    ctx->pc = 0x21FB7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB80u; }
        else if (ctx->pc != 0x21FB80u) { ctx->pc = 0x21FB80u; }
    }
    if (ctx->pc != 0x21FB80u) { return; }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0xc0853ac
    ctx->pc = 0x21FB80u;
    SET_GPR_U32(ctx, 31, 0x21FB88u);
    ctx->pc = 0x21FB84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB88u; }
        else if (ctx->pc != 0x21FB88u) { ctx->pc = 0x21FB88u; }
    }
    if (ctx->pc != 0x21FB88u) { return; }
    ctx->pc = 0x21FB88u;
    // 0x21fb88: 0x8e040170
    ctx->pc = 0x21fb88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x21fb8c: 0x10800003
    ctx->pc = 0x21FB8Cu;
    {
        const bool branch_taken_0x21fb8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fb8c) {
            ctx->pc = 0x21FB9Cu;
            goto label_21fb9c;
        }
    }
    ctx->pc = 0x21FB94u;
    // 0x21fb94: 0xc0853ac
    ctx->pc = 0x21FB94u;
    SET_GPR_U32(ctx, 31, 0x21FB9Cu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB9Cu; }
        else if (ctx->pc != 0x21FB9Cu) { ctx->pc = 0x21FB9Cu; }
    }
    if (ctx->pc != 0x21FB9Cu) { return; }
    ctx->pc = 0x21FB9Cu;
label_21fb9c:
    // 0x21fb9c: 0x4bff6b7e
    ctx->pc = 0x21fb9cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21fba0: 0x4bfe6b7e
    ctx->pc = 0x21fba0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21fba4: 0x4bfd6b7e
    ctx->pc = 0x21fba4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21fba8: 0x4bfc6b7e
    ctx->pc = 0x21fba8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21fbac: 0x7bbf0010
    ctx->pc = 0x21fbacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fbb0: 0x7bb00000
    ctx->pc = 0x21fbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fbb4: 0x3e00008
    ctx->pc = 0x21FBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FBB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FB48u: goto label_21fb48;
            case 0x21FB9Cu: goto label_21fb9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FBBCu;
}
