#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop3__12DynamicsTaskFv
// Address: 0x1d77d0 - 0x1d7978
void dym_loop3__12DynamicsTaskFv_0x1d77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop3__12DynamicsTaskFv");


    ctx->pc = 0x1d77d0u;

    // 0x1d77d0: 0x27bdff80
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d77d4: 0x7fbf0030
    ctx->pc = 0x1d77d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d77d8: 0x7fb20020
    ctx->pc = 0x1d77d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d77dc: 0x7fb10010
    ctx->pc = 0x1d77dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d77e0: 0x7fb00000
    ctx->pc = 0x1d77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d77e4: 0x70809628
    ctx->pc = 0x1d77e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d77e8: 0x70008628
    ctx->pc = 0x1d77e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d77ec: 0x10000036
    ctx->pc = 0x1D77ECu;
    {
        const bool branch_taken_0x1d77ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D77F0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d77ec) {
            ctx->pc = 0x1D78C8u;
            goto label_1d78c8;
        }
    }
    ctx->pc = 0x1D77F4u;
label_1d77f4:
    // 0x1d77f4: 0x4bede37d
    ctx->pc = 0x1d77f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d77f8: 0x4bedeb7d
    ctx->pc = 0x1d77f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d77fc: 0x4bedf37d
    ctx->pc = 0x1d77fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7800: 0x4bedfb7d
    ctx->pc = 0x1d7800u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7804: 0xc64d0044
    ctx->pc = 0x1d7804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7808: 0xc64e0048
    ctx->pc = 0x1d7808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d780c: 0xc06c202
    ctx->pc = 0x1D780Cu;
    SET_GPR_U32(ctx, 31, 0x1D7814u);
    ctx->pc = 0x1D7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7814u; }
        else if (ctx->pc != 0x1D7814u) { ctx->pc = 0x1D7814u; }
    }
    if (ctx->pc != 0x1D7814u) { return; }
    ctx->pc = 0x1D7814u;
    // 0x1d7814: 0xc06c0fb
    ctx->pc = 0x1D7814u;
    SET_GPR_U32(ctx, 31, 0x1D781Cu);
    ctx->pc = 0x1D7818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D781Cu; }
        else if (ctx->pc != 0x1D781Cu) { ctx->pc = 0x1D781Cu; }
    }
    if (ctx->pc != 0x1D781Cu) { return; }
    ctx->pc = 0x1D781Cu;
    // 0x1d781c: 0xc06c09f
    ctx->pc = 0x1D781Cu;
    SET_GPR_U32(ctx, 31, 0x1D7824u);
    ctx->pc = 0x1D7820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7824u; }
        else if (ctx->pc != 0x1D7824u) { ctx->pc = 0x1D7824u; }
    }
    if (ctx->pc != 0x1D7824u) { return; }
    ctx->pc = 0x1D7824u;
    // 0x1d7824: 0xc06c157
    ctx->pc = 0x1D7824u;
    SET_GPR_U32(ctx, 31, 0x1D782Cu);
    ctx->pc = 0x1D7828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D782Cu; }
        else if (ctx->pc != 0x1D782Cu) { ctx->pc = 0x1D782Cu; }
    }
    if (ctx->pc != 0x1D782Cu) { return; }
    ctx->pc = 0x1D782Cu;
    // 0x1d782c: 0x8e450058
    ctx->pc = 0x1d782cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d7830: 0xc64c0098
    ctx->pc = 0x1d7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7834: 0xc64d0068
    ctx->pc = 0x1d7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7838: 0x8e470078
    ctx->pc = 0x1d7838u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d783c: 0x27a40040
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d7840: 0xc0755e0
    ctx->pc = 0x1D7840u;
    SET_GPR_U32(ctx, 31, 0x1D7848u);
    ctx->pc = 0x1D7844u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7848u; }
        else if (ctx->pc != 0x1D7848u) { ctx->pc = 0x1D7848u; }
    }
    if (ctx->pc != 0x1D7848u) { return; }
    ctx->pc = 0x1D7848u;
    // 0x1d7848: 0xc06c04e
    ctx->pc = 0x1D7848u;
    SET_GPR_U32(ctx, 31, 0x1D7850u);
    ctx->pc = 0x1D784Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7850u; }
        else if (ctx->pc != 0x1D7850u) { ctx->pc = 0x1D7850u; }
    }
    if (ctx->pc != 0x1D7850u) { return; }
    ctx->pc = 0x1D7850u;
    // 0x1d7850: 0xc64c00bc
    ctx->pc = 0x1d7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7854: 0x46006346
    ctx->pc = 0x1d7854u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d7858: 0xc06c1b3
    ctx->pc = 0x1D7858u;
    SET_GPR_U32(ctx, 31, 0x1D7860u);
    ctx->pc = 0x1D785Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7860u; }
        else if (ctx->pc != 0x1D7860u) { ctx->pc = 0x1D7860u; }
    }
    if (ctx->pc != 0x1D7860u) { return; }
    ctx->pc = 0x1D7860u;
    // 0x1d7860: 0xc06b218
    ctx->pc = 0x1D7860u;
    SET_GPR_U32(ctx, 31, 0x1D7868u);
    ctx->pc = 0x1D7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7868u; }
        else if (ctx->pc != 0x1D7868u) { ctx->pc = 0x1D7868u; }
    }
    if (ctx->pc != 0x1D7868u) { return; }
    ctx->pc = 0x1D7868u;
    // 0x1d7868: 0xc64c00b8
    ctx->pc = 0x1d7868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d786c: 0x3c023f80
    ctx->pc = 0x1d786cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d7870: 0x44820000
    ctx->pc = 0x1d7870u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d7874: 0x0
    ctx->pc = 0x1d7874u;
    // NOP
    // 0x1d7878: 0x460c0032
    ctx->pc = 0x1d7878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d787c: 0x0
    ctx->pc = 0x1d787cu;
    // NOP
    // 0x1d7880: 0x45000007
    ctx->pc = 0x1D7880u;
    {
        const bool branch_taken_0x1d7880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7880) {
            ctx->pc = 0x1D78A0u;
            goto label_1d78a0;
        }
    }
    ctx->pc = 0x1D7888u;
    // 0x1d7888: 0x8e4200b4
    ctx->pc = 0x1d7888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d788c: 0x511021
    ctx->pc = 0x1d788cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7890: 0xc0853ac
    ctx->pc = 0x1D7890u;
    SET_GPR_U32(ctx, 31, 0x1D7898u);
    ctx->pc = 0x1D7894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7898u; }
        else if (ctx->pc != 0x1D7898u) { ctx->pc = 0x1D7898u; }
    }
    if (ctx->pc != 0x1D7898u) { return; }
    ctx->pc = 0x1D7898u;
    // 0x1d7898: 0x10000006
    ctx->pc = 0x1D7898u;
    {
        const bool branch_taken_0x1d7898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D789Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d7898) {
            ctx->pc = 0x1D78B4u;
            goto label_1d78b4;
        }
    }
    ctx->pc = 0x1D78A0u;
label_1d78a0:
    // 0x1d78a0: 0x8e4200b4
    ctx->pc = 0x1d78a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d78a4: 0x511021
    ctx->pc = 0x1d78a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d78a8: 0xc0853e4
    ctx->pc = 0x1D78A8u;
    SET_GPR_U32(ctx, 31, 0x1D78B0u);
    ctx->pc = 0x1D78ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78B0u; }
        else if (ctx->pc != 0x1D78B0u) { ctx->pc = 0x1D78B0u; }
    }
    if (ctx->pc != 0x1D78B0u) { return; }
    ctx->pc = 0x1D78B0u;
    // 0x1d78b0: 0x4bff6b7e
    ctx->pc = 0x1d78b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d78b4:
    // 0x1d78b4: 0x4bfe6b7e
    ctx->pc = 0x1d78b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d78b8: 0x4bfd6b7e
    ctx->pc = 0x1d78b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d78bc: 0x4bfc6b7e
    ctx->pc = 0x1d78bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d78c0: 0x26310004
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d78c4: 0x26100001
    ctx->pc = 0x1d78c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d78c8:
    // 0x1d78c8: 0x8e420078
    ctx->pc = 0x1d78c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d78cc: 0x202102a
    ctx->pc = 0x1d78ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1d78d0: 0x1440ffc8
    ctx->pc = 0x1D78D0u;
    {
        const bool branch_taken_0x1d78d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D78D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d78d0) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D78D8u;
    // 0x1d78d8: 0xc07ce18
    ctx->pc = 0x1D78D8u;
    SET_GPR_U32(ctx, 31, 0x1D78E0u);
    ctx->pc = 0x1D78DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78E0u; }
        else if (ctx->pc != 0x1D78E0u) { ctx->pc = 0x1D78E0u; }
    }
    if (ctx->pc != 0x1D78E0u) { return; }
    ctx->pc = 0x1D78E0u;
    // 0x1d78e0: 0x1c40001f
    ctx->pc = 0x1D78E0u;
    {
        const bool branch_taken_0x1d78e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d78e0) {
            ctx->pc = 0x1D7960u;
            goto label_1d7960;
        }
    }
    ctx->pc = 0x1D78E8u;
    // 0x1d78e8: 0xc6420098
    ctx->pc = 0x1d78e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d78ec: 0x3c033e75
    ctx->pc = 0x1d78ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d78f0: 0x3463c290
    ctx->pc = 0x1d78f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d78f4: 0x44830800
    ctx->pc = 0x1d78f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d78f8: 0x3c034080
    ctx->pc = 0x1d78f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d78fc: 0x46011080
    ctx->pc = 0x1d78fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d7900: 0xe6420098
    ctx->pc = 0x1d7900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x1d7904: 0xc6410068
    ctx->pc = 0x1d7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7908: 0x44830000
    ctx->pc = 0x1d7908u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d790c: 0x0
    ctx->pc = 0x1d790cu;
    // NOP
    // 0x1d7910: 0x46000801
    ctx->pc = 0x1d7910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7914: 0x46001036
    ctx->pc = 0x1d7914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7918: 0x0
    ctx->pc = 0x1d7918u;
    // NOP
    // 0x1d791c: 0x45010008
    ctx->pc = 0x1D791Cu;
    {
        const bool branch_taken_0x1d791c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d791c) {
            ctx->pc = 0x1D7940u;
            goto label_1d7940;
        }
    }
    ctx->pc = 0x1D7924u;
    // 0x1d7924: 0xc64100b8
    ctx->pc = 0x1d7924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7928: 0x3c033d4c
    ctx->pc = 0x1d7928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d792c: 0x3463cccd
    ctx->pc = 0x1d792cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7930: 0x44830000
    ctx->pc = 0x1d7930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7934: 0x0
    ctx->pc = 0x1d7934u;
    // NOP
    // 0x1d7938: 0x46000801
    ctx->pc = 0x1d7938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d793c: 0xe64000b8
    ctx->pc = 0x1d793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_1d7940:
    // 0x1d7940: 0xc6410098
    ctx->pc = 0x1d7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7944: 0xc6400068
    ctx->pc = 0x1d7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7948: 0x46000836
    ctx->pc = 0x1d7948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d794c: 0x0
    ctx->pc = 0x1d794cu;
    // NOP
    // 0x1d7950: 0x45010003
    ctx->pc = 0x1D7950u;
    {
        const bool branch_taken_0x1d7950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7950) {
            ctx->pc = 0x1D7960u;
            goto label_1d7960;
        }
    }
    ctx->pc = 0x1D7958u;
    // 0x1d7958: 0xc06898c
    ctx->pc = 0x1D7958u;
    SET_GPR_U32(ctx, 31, 0x1D7960u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7960u; }
        else if (ctx->pc != 0x1D7960u) { ctx->pc = 0x1D7960u; }
    }
    if (ctx->pc != 0x1D7960u) { return; }
    ctx->pc = 0x1D7960u;
label_1d7960:
    // 0x1d7960: 0x7bbf0030
    ctx->pc = 0x1d7960u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7964: 0x7bb20020
    ctx->pc = 0x1d7964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7968: 0x7bb10010
    ctx->pc = 0x1d7968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d796c: 0x7bb00000
    ctx->pc = 0x1d796cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7970: 0x3e00008
    ctx->pc = 0x1D7970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D77F4u: goto label_1d77f4;
            case 0x1D78A0u: goto label_1d78a0;
            case 0x1D78B4u: goto label_1d78b4;
            case 0x1D78C8u: goto label_1d78c8;
            case 0x1D7940u: goto label_1d7940;
            case 0x1D7960u: goto label_1d7960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7978u;
}
