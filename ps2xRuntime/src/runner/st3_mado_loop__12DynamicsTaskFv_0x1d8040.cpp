#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3_mado_loop__12DynamicsTaskFv
// Address: 0x1d8040 - 0x1d8354
void st3_mado_loop__12DynamicsTaskFv_0x1d8040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3_mado_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d8040u;

    // 0x1d8040: 0x27bdff90
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d8044: 0x7fbf0020
    ctx->pc = 0x1d8044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d8048: 0x7fb10010
    ctx->pc = 0x1d8048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d804c: 0x7fb00000
    ctx->pc = 0x1d804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8050: 0x70808e28
    ctx->pc = 0x1d8050u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d8054: 0x4bede37d
    ctx->pc = 0x1d8054u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d8058: 0x4bedeb7d
    ctx->pc = 0x1d8058u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d805c: 0x4bedf37d
    ctx->pc = 0x1d805cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d8060: 0x4bedfb7d
    ctx->pc = 0x1d8060u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d8064: 0xc48d0044
    ctx->pc = 0x1d8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8068: 0xc48e0048
    ctx->pc = 0x1d8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d806c: 0xc06c202
    ctx->pc = 0x1D806Cu;
    SET_GPR_U32(ctx, 31, 0x1D8074u);
    ctx->pc = 0x1D8070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8074u; }
        else if (ctx->pc != 0x1D8074u) { ctx->pc = 0x1D8074u; }
    }
    if (ctx->pc != 0x1D8074u) { return; }
    ctx->pc = 0x1D8074u;
    // 0x1d8074: 0xc06c0fb
    ctx->pc = 0x1D8074u;
    SET_GPR_U32(ctx, 31, 0x1D807Cu);
    ctx->pc = 0x1D8078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D807Cu; }
        else if (ctx->pc != 0x1D807Cu) { ctx->pc = 0x1D807Cu; }
    }
    if (ctx->pc != 0x1D807Cu) { return; }
    ctx->pc = 0x1D807Cu;
    // 0x1d807c: 0xc06c09f
    ctx->pc = 0x1D807Cu;
    SET_GPR_U32(ctx, 31, 0x1D8084u);
    ctx->pc = 0x1D8080u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8084u; }
        else if (ctx->pc != 0x1D8084u) { ctx->pc = 0x1D8084u; }
    }
    if (ctx->pc != 0x1D8084u) { return; }
    ctx->pc = 0x1D8084u;
    // 0x1d8084: 0xc06c157
    ctx->pc = 0x1D8084u;
    SET_GPR_U32(ctx, 31, 0x1D808Cu);
    ctx->pc = 0x1D8088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D808Cu; }
        else if (ctx->pc != 0x1D808Cu) { ctx->pc = 0x1D808Cu; }
    }
    if (ctx->pc != 0x1D808Cu) { return; }
    ctx->pc = 0x1D808Cu;
    // 0x1d808c: 0x10000026
    ctx->pc = 0x1D808Cu;
    {
        const bool branch_taken_0x1d808c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8090u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d808c) {
            ctx->pc = 0x1D8128u;
            goto label_1d8128;
        }
    }
    ctx->pc = 0x1D8094u;
label_1d8094:
    // 0x1d8094: 0x4bede37d
    ctx->pc = 0x1d8094u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d8098: 0x4bedeb7d
    ctx->pc = 0x1d8098u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d809c: 0x4bedf37d
    ctx->pc = 0x1d809cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d80a0: 0x4bedfb7d
    ctx->pc = 0x1d80a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d80a4: 0x8e250058
    ctx->pc = 0x1d80a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1d80a8: 0xc62c0098
    ctx->pc = 0x1d80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d80ac: 0xc62d0068
    ctx->pc = 0x1d80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d80b0: 0x27a40030
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d80b4: 0xc0755e0
    ctx->pc = 0x1D80B4u;
    SET_GPR_U32(ctx, 31, 0x1D80BCu);
    ctx->pc = 0x1D80B8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80BCu; }
        else if (ctx->pc != 0x1D80BCu) { ctx->pc = 0x1D80BCu; }
    }
    if (ctx->pc != 0x1D80BCu) { return; }
    ctx->pc = 0x1D80BCu;
    // 0x1d80bc: 0xc06c04e
    ctx->pc = 0x1D80BCu;
    SET_GPR_U32(ctx, 31, 0x1D80C4u);
    ctx->pc = 0x1D80C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80C4u; }
        else if (ctx->pc != 0x1D80C4u) { ctx->pc = 0x1D80C4u; }
    }
    if (ctx->pc != 0x1D80C4u) { return; }
    ctx->pc = 0x1D80C4u;
    // 0x1d80c4: 0xc62c00b8
    ctx->pc = 0x1d80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d80c8: 0x3c023f80
    ctx->pc = 0x1d80c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d80cc: 0x44820000
    ctx->pc = 0x1d80ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d80d0: 0x0
    ctx->pc = 0x1d80d0u;
    // NOP
    // 0x1d80d4: 0x460c0032
    ctx->pc = 0x1d80d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80d8: 0x0
    ctx->pc = 0x1d80d8u;
    // NOP
    // 0x1d80dc: 0x45000008
    ctx->pc = 0x1D80DCu;
    {
        const bool branch_taken_0x1d80dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D80E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
        if (branch_taken_0x1d80dc) {
            ctx->pc = 0x1D8100u;
            goto label_1d8100;
        }
    }
    ctx->pc = 0x1D80E4u;
    // 0x1d80e4: 0x3c020041
    ctx->pc = 0x1d80e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x1d80e8: 0x3442005e
    ctx->pc = 0x1d80e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 94));
    // 0x1d80ec: 0xc0853ac
    ctx->pc = 0x1D80ECu;
    SET_GPR_U32(ctx, 31, 0x1D80F4u);
    ctx->pc = 0x1D80F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80F4u; }
        else if (ctx->pc != 0x1D80F4u) { ctx->pc = 0x1D80F4u; }
    }
    if (ctx->pc != 0x1D80F4u) { return; }
    ctx->pc = 0x1D80F4u;
    // 0x1d80f4: 0x10000007
    ctx->pc = 0x1D80F4u;
    {
        const bool branch_taken_0x1d80f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D80F8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d80f4) {
            ctx->pc = 0x1D8114u;
            goto label_1d8114;
        }
    }
    ctx->pc = 0x1D80FCu;
    // 0x1d80fc: 0x3c020041
    ctx->pc = 0x1d80fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
label_1d8100:
    // 0x1d8100: 0x3442005e
    ctx->pc = 0x1d8100u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 94));
    // 0x1d8104: 0xc0853e4
    ctx->pc = 0x1D8104u;
    SET_GPR_U32(ctx, 31, 0x1D810Cu);
    ctx->pc = 0x1D8108u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D810Cu; }
        else if (ctx->pc != 0x1D810Cu) { ctx->pc = 0x1D810Cu; }
    }
    if (ctx->pc != 0x1D810Cu) { return; }
    ctx->pc = 0x1D810Cu;
    // 0x1d810c: 0x0
    ctx->pc = 0x1d810cu;
    // NOP
    // 0x1d8110: 0x4bff6b7e
    ctx->pc = 0x1d8110u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d8114:
    // 0x1d8114: 0x4bfe6b7e
    ctx->pc = 0x1d8114u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d8118: 0x4bfd6b7e
    ctx->pc = 0x1d8118u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d811c: 0x4bfc6b7e
    ctx->pc = 0x1d811cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d8120: 0x26100001
    ctx->pc = 0x1d8120u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d8124: 0x0
    ctx->pc = 0x1d8124u;
    // NOP
label_1d8128:
    // 0x1d8128: 0x8e270078
    ctx->pc = 0x1d8128u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d812c: 0x207102a
    ctx->pc = 0x1d812cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x1d8130: 0x1440ffd8
    ctx->pc = 0x1D8130u;
    {
        const bool branch_taken_0x1d8130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d8130) {
            ctx->pc = 0x1D8094u;
            goto label_1d8094;
        }
    }
    ctx->pc = 0x1D8138u;
    // 0x1d8138: 0x10000025
    ctx->pc = 0x1D8138u;
    {
        const bool branch_taken_0x1d8138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D813Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d8138) {
            ctx->pc = 0x1D81D0u;
            goto label_1d81d0;
        }
    }
    ctx->pc = 0x1D8140u;
label_1d8140:
    // 0x1d8140: 0x4bede37d
    ctx->pc = 0x1d8140u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d8144: 0x4bedeb7d
    ctx->pc = 0x1d8144u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d8148: 0x4bedf37d
    ctx->pc = 0x1d8148u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d814c: 0x4bedfb7d
    ctx->pc = 0x1d814cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d8150: 0x8e25005c
    ctx->pc = 0x1d8150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1d8154: 0xc62c009c
    ctx->pc = 0x1d8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8158: 0xc62d006c
    ctx->pc = 0x1d8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d815c: 0x27a40030
    ctx->pc = 0x1d815cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8160: 0xc0755e0
    ctx->pc = 0x1D8160u;
    SET_GPR_U32(ctx, 31, 0x1D8168u);
    ctx->pc = 0x1D8164u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8168u; }
        else if (ctx->pc != 0x1D8168u) { ctx->pc = 0x1D8168u; }
    }
    if (ctx->pc != 0x1D8168u) { return; }
    ctx->pc = 0x1D8168u;
    // 0x1d8168: 0xc06c04e
    ctx->pc = 0x1D8168u;
    SET_GPR_U32(ctx, 31, 0x1D8170u);
    ctx->pc = 0x1D816Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8170u; }
        else if (ctx->pc != 0x1D8170u) { ctx->pc = 0x1D8170u; }
    }
    if (ctx->pc != 0x1D8170u) { return; }
    ctx->pc = 0x1D8170u;
    // 0x1d8170: 0xc62c00b8
    ctx->pc = 0x1d8170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8174: 0x3c023f80
    ctx->pc = 0x1d8174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d8178: 0x44820000
    ctx->pc = 0x1d8178u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d817c: 0x0
    ctx->pc = 0x1d817cu;
    // NOP
    // 0x1d8180: 0x460c0032
    ctx->pc = 0x1d8180u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8184: 0x0
    ctx->pc = 0x1d8184u;
    // NOP
    // 0x1d8188: 0x45000008
    ctx->pc = 0x1D8188u;
    {
        const bool branch_taken_0x1d8188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D818Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
        if (branch_taken_0x1d8188) {
            ctx->pc = 0x1D81ACu;
            goto label_1d81ac;
        }
    }
    ctx->pc = 0x1D8190u;
    // 0x1d8190: 0x3c020041
    ctx->pc = 0x1d8190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x1d8194: 0x34420096
    ctx->pc = 0x1d8194u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 150));
    // 0x1d8198: 0xc0853ac
    ctx->pc = 0x1D8198u;
    SET_GPR_U32(ctx, 31, 0x1D81A0u);
    ctx->pc = 0x1D819Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81A0u; }
        else if (ctx->pc != 0x1D81A0u) { ctx->pc = 0x1D81A0u; }
    }
    if (ctx->pc != 0x1D81A0u) { return; }
    ctx->pc = 0x1D81A0u;
    // 0x1d81a0: 0x10000006
    ctx->pc = 0x1D81A0u;
    {
        const bool branch_taken_0x1d81a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D81A4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d81a0) {
            ctx->pc = 0x1D81BCu;
            goto label_1d81bc;
        }
    }
    ctx->pc = 0x1D81A8u;
    // 0x1d81a8: 0x3c020041
    ctx->pc = 0x1d81a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
label_1d81ac:
    // 0x1d81ac: 0x34420096
    ctx->pc = 0x1d81acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 150));
    // 0x1d81b0: 0xc0853e4
    ctx->pc = 0x1D81B0u;
    SET_GPR_U32(ctx, 31, 0x1D81B8u);
    ctx->pc = 0x1D81B4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81B8u; }
        else if (ctx->pc != 0x1D81B8u) { ctx->pc = 0x1D81B8u; }
    }
    if (ctx->pc != 0x1D81B8u) { return; }
    ctx->pc = 0x1D81B8u;
    // 0x1d81b8: 0x4bff6b7e
    ctx->pc = 0x1d81b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d81bc:
    // 0x1d81bc: 0x4bfe6b7e
    ctx->pc = 0x1d81bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d81c0: 0x4bfd6b7e
    ctx->pc = 0x1d81c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d81c4: 0x4bfc6b7e
    ctx->pc = 0x1d81c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d81c8: 0x26100001
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d81cc: 0x0
    ctx->pc = 0x1d81ccu;
    // NOP
label_1d81d0:
    // 0x1d81d0: 0x8e27007c
    ctx->pc = 0x1d81d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1d81d4: 0x207102a
    ctx->pc = 0x1d81d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x1d81d8: 0x1440ffd9
    ctx->pc = 0x1D81D8u;
    {
        const bool branch_taken_0x1d81d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d81d8) {
            ctx->pc = 0x1D8140u;
            goto label_1d8140;
        }
    }
    ctx->pc = 0x1D81E0u;
    // 0x1d81e0: 0x10000025
    ctx->pc = 0x1D81E0u;
    {
        const bool branch_taken_0x1d81e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D81E4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d81e0) {
            ctx->pc = 0x1D8278u;
            goto label_1d8278;
        }
    }
    ctx->pc = 0x1D81E8u;
label_1d81e8:
    // 0x1d81e8: 0x4bede37d
    ctx->pc = 0x1d81e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d81ec: 0x4bedeb7d
    ctx->pc = 0x1d81ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d81f0: 0x4bedf37d
    ctx->pc = 0x1d81f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d81f4: 0x4bedfb7d
    ctx->pc = 0x1d81f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d81f8: 0x8e250060
    ctx->pc = 0x1d81f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1d81fc: 0xc62c00a0
    ctx->pc = 0x1d81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8200: 0xc62d0070
    ctx->pc = 0x1d8200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8204: 0x27a40030
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8208: 0xc0755e0
    ctx->pc = 0x1D8208u;
    SET_GPR_U32(ctx, 31, 0x1D8210u);
    ctx->pc = 0x1D820Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8210u; }
        else if (ctx->pc != 0x1D8210u) { ctx->pc = 0x1D8210u; }
    }
    if (ctx->pc != 0x1D8210u) { return; }
    ctx->pc = 0x1D8210u;
    // 0x1d8210: 0xc06c04e
    ctx->pc = 0x1D8210u;
    SET_GPR_U32(ctx, 31, 0x1D8218u);
    ctx->pc = 0x1D8214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8218u; }
        else if (ctx->pc != 0x1D8218u) { ctx->pc = 0x1D8218u; }
    }
    if (ctx->pc != 0x1D8218u) { return; }
    ctx->pc = 0x1D8218u;
    // 0x1d8218: 0xc62c00b8
    ctx->pc = 0x1d8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d821c: 0x3c023f80
    ctx->pc = 0x1d821cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d8220: 0x44820000
    ctx->pc = 0x1d8220u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d8224: 0x0
    ctx->pc = 0x1d8224u;
    // NOP
    // 0x1d8228: 0x460c0032
    ctx->pc = 0x1d8228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d822c: 0x0
    ctx->pc = 0x1d822cu;
    // NOP
    // 0x1d8230: 0x45000008
    ctx->pc = 0x1D8230u;
    {
        const bool branch_taken_0x1d8230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8234u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
        if (branch_taken_0x1d8230) {
            ctx->pc = 0x1D8254u;
            goto label_1d8254;
        }
    }
    ctx->pc = 0x1D8238u;
    // 0x1d8238: 0x3c020041
    ctx->pc = 0x1d8238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x1d823c: 0x344200a8
    ctx->pc = 0x1d823cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 168));
    // 0x1d8240: 0xc0853ac
    ctx->pc = 0x1D8240u;
    SET_GPR_U32(ctx, 31, 0x1D8248u);
    ctx->pc = 0x1D8244u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8248u; }
        else if (ctx->pc != 0x1D8248u) { ctx->pc = 0x1D8248u; }
    }
    if (ctx->pc != 0x1D8248u) { return; }
    ctx->pc = 0x1D8248u;
    // 0x1d8248: 0x10000006
    ctx->pc = 0x1D8248u;
    {
        const bool branch_taken_0x1d8248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D824Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d8248) {
            ctx->pc = 0x1D8264u;
            goto label_1d8264;
        }
    }
    ctx->pc = 0x1D8250u;
    // 0x1d8250: 0x3c020041
    ctx->pc = 0x1d8250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
label_1d8254:
    // 0x1d8254: 0x344200a8
    ctx->pc = 0x1d8254u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 168));
    // 0x1d8258: 0xc0853e4
    ctx->pc = 0x1D8258u;
    SET_GPR_U32(ctx, 31, 0x1D8260u);
    ctx->pc = 0x1D825Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8260u; }
        else if (ctx->pc != 0x1D8260u) { ctx->pc = 0x1D8260u; }
    }
    if (ctx->pc != 0x1D8260u) { return; }
    ctx->pc = 0x1D8260u;
    // 0x1d8260: 0x4bff6b7e
    ctx->pc = 0x1d8260u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d8264:
    // 0x1d8264: 0x4bfe6b7e
    ctx->pc = 0x1d8264u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d8268: 0x4bfd6b7e
    ctx->pc = 0x1d8268u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d826c: 0x4bfc6b7e
    ctx->pc = 0x1d826cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d8270: 0x26100001
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d8274: 0x0
    ctx->pc = 0x1d8274u;
    // NOP
label_1d8278:
    // 0x1d8278: 0x8e270080
    ctx->pc = 0x1d8278u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1d827c: 0x207102a
    ctx->pc = 0x1d827cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x1d8280: 0x1440ffd9
    ctx->pc = 0x1D8280u;
    {
        const bool branch_taken_0x1d8280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d8280) {
            ctx->pc = 0x1D81E8u;
            goto label_1d81e8;
        }
    }
    ctx->pc = 0x1D8288u;
    // 0x1d8288: 0x4bff6b7e
    ctx->pc = 0x1d8288u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d828c: 0x4bfe6b7e
    ctx->pc = 0x1d828cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d8290: 0x4bfd6b7e
    ctx->pc = 0x1d8290u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d8294: 0x4bfc6b7e
    ctx->pc = 0x1d8294u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d8298: 0x3c020050
    ctx->pc = 0x1d8298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d829c: 0xc07ce18
    ctx->pc = 0x1D829Cu;
    SET_GPR_U32(ctx, 31, 0x1D82A4u);
    ctx->pc = 0x1D82A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
        else if (ctx->pc != 0x1D82A4u) { ctx->pc = 0x1D82A4u; }
    }
    if (ctx->pc != 0x1D82A4u) { return; }
    ctx->pc = 0x1D82A4u;
    // 0x1d82a4: 0x1c400026
    ctx->pc = 0x1D82A4u;
    {
        const bool branch_taken_0x1d82a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d82a4) {
            ctx->pc = 0x1D8340u;
            goto label_1d8340;
        }
    }
    ctx->pc = 0x1D82ACu;
    // 0x1d82ac: 0xc6210098
    ctx->pc = 0x1d82acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d82b0: 0x3c033e75
    ctx->pc = 0x1d82b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d82b4: 0x3463c290
    ctx->pc = 0x1d82b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d82b8: 0x44831000
    ctx->pc = 0x1d82b8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1d82bc: 0x3c034080
    ctx->pc = 0x1d82bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d82c0: 0x46020840
    ctx->pc = 0x1d82c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d82c4: 0xe6210098
    ctx->pc = 0x1d82c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1d82c8: 0xc621009c
    ctx->pc = 0x1d82c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d82cc: 0x44830000
    ctx->pc = 0x1d82ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d82d0: 0x0
    ctx->pc = 0x1d82d0u;
    // NOP
    // 0x1d82d4: 0x46020840
    ctx->pc = 0x1d82d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d82d8: 0xe621009c
    ctx->pc = 0x1d82d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x1d82dc: 0xc62100a0
    ctx->pc = 0x1d82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d82e0: 0x46020840
    ctx->pc = 0x1d82e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d82e4: 0xe62100a0
    ctx->pc = 0x1d82e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1d82e8: 0xc6210068
    ctx->pc = 0x1d82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d82ec: 0xc6220098
    ctx->pc = 0x1d82ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d82f0: 0x46000801
    ctx->pc = 0x1d82f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d82f4: 0x46001036
    ctx->pc = 0x1d82f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d82f8: 0x0
    ctx->pc = 0x1d82f8u;
    // NOP
    // 0x1d82fc: 0x45010008
    ctx->pc = 0x1D82FCu;
    {
        const bool branch_taken_0x1d82fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d82fc) {
            ctx->pc = 0x1D8320u;
            goto label_1d8320;
        }
    }
    ctx->pc = 0x1D8304u;
    // 0x1d8304: 0xc62100b8
    ctx->pc = 0x1d8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8308: 0x3c033d4c
    ctx->pc = 0x1d8308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d830c: 0x3463cccd
    ctx->pc = 0x1d830cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d8310: 0x44830000
    ctx->pc = 0x1d8310u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d8314: 0x0
    ctx->pc = 0x1d8314u;
    // NOP
    // 0x1d8318: 0x46000801
    ctx->pc = 0x1d8318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d831c: 0xe62000b8
    ctx->pc = 0x1d831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_1d8320:
    // 0x1d8320: 0xc6210098
    ctx->pc = 0x1d8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8324: 0xc6200068
    ctx->pc = 0x1d8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8328: 0x46000836
    ctx->pc = 0x1d8328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d832c: 0x0
    ctx->pc = 0x1d832cu;
    // NOP
    // 0x1d8330: 0x45010003
    ctx->pc = 0x1D8330u;
    {
        const bool branch_taken_0x1d8330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8330) {
            ctx->pc = 0x1D8340u;
            goto label_1d8340;
        }
    }
    ctx->pc = 0x1D8338u;
    // 0x1d8338: 0xc06898c
    ctx->pc = 0x1D8338u;
    SET_GPR_U32(ctx, 31, 0x1D8340u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8340u; }
        else if (ctx->pc != 0x1D8340u) { ctx->pc = 0x1D8340u; }
    }
    if (ctx->pc != 0x1D8340u) { return; }
    ctx->pc = 0x1D8340u;
label_1d8340:
    // 0x1d8340: 0x7bbf0020
    ctx->pc = 0x1d8340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8344: 0x7bb10010
    ctx->pc = 0x1d8344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8348: 0x7bb00000
    ctx->pc = 0x1d8348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d834c: 0x3e00008
    ctx->pc = 0x1D834Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8094u: goto label_1d8094;
            case 0x1D8100u: goto label_1d8100;
            case 0x1D8114u: goto label_1d8114;
            case 0x1D8128u: goto label_1d8128;
            case 0x1D8140u: goto label_1d8140;
            case 0x1D81ACu: goto label_1d81ac;
            case 0x1D81BCu: goto label_1d81bc;
            case 0x1D81D0u: goto label_1d81d0;
            case 0x1D81E8u: goto label_1d81e8;
            case 0x1D8254u: goto label_1d8254;
            case 0x1D8264u: goto label_1d8264;
            case 0x1D8278u: goto label_1d8278;
            case 0x1D8320u: goto label_1d8320;
            case 0x1D8340u: goto label_1d8340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8354u;
}
