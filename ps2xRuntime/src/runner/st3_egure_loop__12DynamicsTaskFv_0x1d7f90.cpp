#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3_egure_loop__12DynamicsTaskFv
// Address: 0x1d7f90 - 0x1d8038
void st3_egure_loop__12DynamicsTaskFv_0x1d7f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3_egure_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d7f90u;

    // 0x1d7f90: 0x27bdffe0
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f94: 0x7fbf0010
    ctx->pc = 0x1d7f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d7f98: 0x7fb00000
    ctx->pc = 0x1d7f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7f9c: 0x70808628
    ctx->pc = 0x1d7f9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d7fa0: 0x4bede37d
    ctx->pc = 0x1d7fa0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7fa4: 0x4bedeb7d
    ctx->pc = 0x1d7fa4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7fa8: 0x4bedf37d
    ctx->pc = 0x1d7fa8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7fac: 0x4bedfb7d
    ctx->pc = 0x1d7facu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7fb0: 0xc48d0044
    ctx->pc = 0x1d7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7fb4: 0xc48e0048
    ctx->pc = 0x1d7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7fb8: 0xc06c202
    ctx->pc = 0x1D7FB8u;
    SET_GPR_U32(ctx, 31, 0x1D7FC0u);
    ctx->pc = 0x1D7FBCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FC0u; }
        else if (ctx->pc != 0x1D7FC0u) { ctx->pc = 0x1D7FC0u; }
    }
    if (ctx->pc != 0x1D7FC0u) { return; }
    ctx->pc = 0x1D7FC0u;
    // 0x1d7fc0: 0xc06c0fb
    ctx->pc = 0x1D7FC0u;
    SET_GPR_U32(ctx, 31, 0x1D7FC8u);
    ctx->pc = 0x1D7FC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FC8u; }
        else if (ctx->pc != 0x1D7FC8u) { ctx->pc = 0x1D7FC8u; }
    }
    if (ctx->pc != 0x1D7FC8u) { return; }
    ctx->pc = 0x1D7FC8u;
    // 0x1d7fc8: 0xc06c09f
    ctx->pc = 0x1D7FC8u;
    SET_GPR_U32(ctx, 31, 0x1D7FD0u);
    ctx->pc = 0x1D7FCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FD0u; }
        else if (ctx->pc != 0x1D7FD0u) { ctx->pc = 0x1D7FD0u; }
    }
    if (ctx->pc != 0x1D7FD0u) { return; }
    ctx->pc = 0x1D7FD0u;
    // 0x1d7fd0: 0xc06c157
    ctx->pc = 0x1D7FD0u;
    SET_GPR_U32(ctx, 31, 0x1D7FD8u);
    ctx->pc = 0x1D7FD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FD8u; }
        else if (ctx->pc != 0x1D7FD8u) { ctx->pc = 0x1D7FD8u; }
    }
    if (ctx->pc != 0x1D7FD8u) { return; }
    ctx->pc = 0x1D7FD8u;
    // 0x1d7fd8: 0xc60c00b8
    ctx->pc = 0x1d7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7fdc: 0x3c023f80
    ctx->pc = 0x1d7fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d7fe0: 0x44820000
    ctx->pc = 0x1d7fe0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d7fe4: 0x0
    ctx->pc = 0x1d7fe4u;
    // NOP
    // 0x1d7fe8: 0x460c0032
    ctx->pc = 0x1d7fe8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7fec: 0x0
    ctx->pc = 0x1d7fecu;
    // NOP
    // 0x1d7ff0: 0x45000005
    ctx->pc = 0x1D7FF0u;
    {
        const bool branch_taken_0x1d7ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7ff0) {
            ctx->pc = 0x1D8008u;
            goto label_1d8008;
        }
    }
    ctx->pc = 0x1D7FF8u;
    // 0x1d7ff8: 0xc0853ac
    ctx->pc = 0x1D7FF8u;
    SET_GPR_U32(ctx, 31, 0x1D8000u);
    ctx->pc = 0x1D7FFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8000u; }
        else if (ctx->pc != 0x1D8000u) { ctx->pc = 0x1D8000u; }
    }
    if (ctx->pc != 0x1D8000u) { return; }
    ctx->pc = 0x1D8000u;
    // 0x1d8000: 0x10000004
    ctx->pc = 0x1D8000u;
    {
        const bool branch_taken_0x1d8000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8004u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d8000) {
            ctx->pc = 0x1D8014u;
            goto label_1d8014;
        }
    }
    ctx->pc = 0x1D8008u;
label_1d8008:
    // 0x1d8008: 0xc0853e4
    ctx->pc = 0x1D8008u;
    SET_GPR_U32(ctx, 31, 0x1D8010u);
    ctx->pc = 0x1D800Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8010u; }
        else if (ctx->pc != 0x1D8010u) { ctx->pc = 0x1D8010u; }
    }
    if (ctx->pc != 0x1D8010u) { return; }
    ctx->pc = 0x1D8010u;
    // 0x1d8010: 0x4bff6b7e
    ctx->pc = 0x1d8010u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d8014:
    // 0x1d8014: 0x4bfe6b7e
    ctx->pc = 0x1d8014u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d8018: 0x4bfd6b7e
    ctx->pc = 0x1d8018u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d801c: 0x4bfc6b7e
    ctx->pc = 0x1d801cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d8020: 0xc075c10
    ctx->pc = 0x1D8020u;
    SET_GPR_U32(ctx, 31, 0x1D8028u);
    ctx->pc = 0x1D8024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D7040u;
    {
        const uint32_t __entryPc = ctx->pc;
        dym_loop__12DynamicsTaskFv_0x1d7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8028u; }
        else if (ctx->pc != 0x1D8028u) { ctx->pc = 0x1D8028u; }
    }
    if (ctx->pc != 0x1D8028u) { return; }
    ctx->pc = 0x1D8028u;
    // 0x1d8028: 0x7bbf0010
    ctx->pc = 0x1d8028u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d802c: 0x7bb00000
    ctx->pc = 0x1d802cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8030: 0x3e00008
    ctx->pc = 0x1D8030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8008u: goto label_1d8008;
            case 0x1D8014u: goto label_1d8014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8038u;
}
