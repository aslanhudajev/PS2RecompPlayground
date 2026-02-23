#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop2_for_st3_pole__12DynamicsTaskFv
// Address: 0x1d74d0 - 0x1d764c
void dym_loop2_for_st3_pole__12DynamicsTaskFv_0x1d74d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop2_for_st3_pole__12DynamicsTaskFv");


    ctx->pc = 0x1d74d0u;

    // 0x1d74d0: 0x27bdff90
    ctx->pc = 0x1d74d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d74d4: 0x7fbf0020
    ctx->pc = 0x1d74d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d74d8: 0x7fb10010
    ctx->pc = 0x1d74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d74dc: 0x7fb00000
    ctx->pc = 0x1d74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d74e0: 0x70808628
    ctx->pc = 0x1d74e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d74e4: 0x1000002e
    ctx->pc = 0x1D74E4u;
    {
        const bool branch_taken_0x1d74e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D74E8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d74e4) {
            ctx->pc = 0x1D75A0u;
            goto label_1d75a0;
        }
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x4bede37d
    ctx->pc = 0x1d74ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d74f0: 0x4bedeb7d
    ctx->pc = 0x1d74f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d74f4: 0x4bedf37d
    ctx->pc = 0x1d74f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d74f8: 0x4bedfb7d
    ctx->pc = 0x1d74f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d74fc: 0xc60d0044
    ctx->pc = 0x1d74fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7500: 0xc60e0048
    ctx->pc = 0x1d7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7504: 0xc06c202
    ctx->pc = 0x1D7504u;
    SET_GPR_U32(ctx, 31, 0x1D750Cu);
    ctx->pc = 0x1D7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D750Cu; }
        else if (ctx->pc != 0x1D750Cu) { ctx->pc = 0x1D750Cu; }
    }
    if (ctx->pc != 0x1D750Cu) { return; }
    ctx->pc = 0x1D750Cu;
    // 0x1d750c: 0xc06c0fb
    ctx->pc = 0x1D750Cu;
    SET_GPR_U32(ctx, 31, 0x1D7514u);
    ctx->pc = 0x1D7510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7514u; }
        else if (ctx->pc != 0x1D7514u) { ctx->pc = 0x1D7514u; }
    }
    if (ctx->pc != 0x1D7514u) { return; }
    ctx->pc = 0x1D7514u;
    // 0x1d7514: 0xc06c09f
    ctx->pc = 0x1D7514u;
    SET_GPR_U32(ctx, 31, 0x1D751Cu);
    ctx->pc = 0x1D7518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D751Cu; }
        else if (ctx->pc != 0x1D751Cu) { ctx->pc = 0x1D751Cu; }
    }
    if (ctx->pc != 0x1D751Cu) { return; }
    ctx->pc = 0x1D751Cu;
    // 0x1d751c: 0xc06c157
    ctx->pc = 0x1D751Cu;
    SET_GPR_U32(ctx, 31, 0x1D7524u);
    ctx->pc = 0x1D7520u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7524u; }
        else if (ctx->pc != 0x1D7524u) { ctx->pc = 0x1D7524u; }
    }
    if (ctx->pc != 0x1D7524u) { return; }
    ctx->pc = 0x1D7524u;
    // 0x1d7524: 0x8e050058
    ctx->pc = 0x1d7524u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d7528: 0xc60c0098
    ctx->pc = 0x1d7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d752c: 0xc60d0068
    ctx->pc = 0x1d752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7530: 0x8e070078
    ctx->pc = 0x1d7530u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7534: 0x27a40030
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7538: 0xc0755e0
    ctx->pc = 0x1D7538u;
    SET_GPR_U32(ctx, 31, 0x1D7540u);
    ctx->pc = 0x1D753Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7540u; }
        else if (ctx->pc != 0x1D7540u) { ctx->pc = 0x1D7540u; }
    }
    if (ctx->pc != 0x1D7540u) { return; }
    ctx->pc = 0x1D7540u;
    // 0x1d7540: 0xc06c04e
    ctx->pc = 0x1D7540u;
    SET_GPR_U32(ctx, 31, 0x1D7548u);
    ctx->pc = 0x1D7544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7548u; }
        else if (ctx->pc != 0x1D7548u) { ctx->pc = 0x1D7548u; }
    }
    if (ctx->pc != 0x1D7548u) { return; }
    ctx->pc = 0x1D7548u;
    // 0x1d7548: 0xc60c00b8
    ctx->pc = 0x1d7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d754c: 0x3c023f80
    ctx->pc = 0x1d754cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d7550: 0x44820000
    ctx->pc = 0x1d7550u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d7554: 0x0
    ctx->pc = 0x1d7554u;
    // NOP
    // 0x1d7558: 0x460c0032
    ctx->pc = 0x1d7558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d755c: 0x0
    ctx->pc = 0x1d755cu;
    // NOP
    // 0x1d7560: 0x45000006
    ctx->pc = 0x1D7560u;
    {
        const bool branch_taken_0x1d7560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7560) {
            ctx->pc = 0x1D757Cu;
            goto label_1d757c;
        }
    }
    ctx->pc = 0x1D7568u;
    // 0x1d7568: 0x8e0200c0
    ctx->pc = 0x1d7568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d756c: 0xc0853ac
    ctx->pc = 0x1D756Cu;
    SET_GPR_U32(ctx, 31, 0x1D7574u);
    ctx->pc = 0x1D7570u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7574u; }
        else if (ctx->pc != 0x1D7574u) { ctx->pc = 0x1D7574u; }
    }
    if (ctx->pc != 0x1D7574u) { return; }
    ctx->pc = 0x1D7574u;
    // 0x1d7574: 0x10000005
    ctx->pc = 0x1D7574u;
    {
        const bool branch_taken_0x1d7574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7578u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d7574) {
            ctx->pc = 0x1D758Cu;
            goto label_1d758c;
        }
    }
    ctx->pc = 0x1D757Cu;
label_1d757c:
    // 0x1d757c: 0x8e0200c0
    ctx->pc = 0x1d757cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d7580: 0xc0853e4
    ctx->pc = 0x1D7580u;
    SET_GPR_U32(ctx, 31, 0x1D7588u);
    ctx->pc = 0x1D7584u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7588u; }
        else if (ctx->pc != 0x1D7588u) { ctx->pc = 0x1D7588u; }
    }
    if (ctx->pc != 0x1D7588u) { return; }
    ctx->pc = 0x1D7588u;
    // 0x1d7588: 0x4bff6b7e
    ctx->pc = 0x1d7588u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d758c:
    // 0x1d758c: 0x4bfe6b7e
    ctx->pc = 0x1d758cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7590: 0x4bfd6b7e
    ctx->pc = 0x1d7590u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7594: 0x4bfc6b7e
    ctx->pc = 0x1d7594u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7598: 0x26310001
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d759c: 0x0
    ctx->pc = 0x1d759cu;
    // NOP
label_1d75a0:
    // 0x1d75a0: 0x8e020078
    ctx->pc = 0x1d75a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d75a4: 0x222102a
    ctx->pc = 0x1d75a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d75a8: 0x1440ffd0
    ctx->pc = 0x1D75A8u;
    {
        const bool branch_taken_0x1d75a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D75ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d75a8) {
            ctx->pc = 0x1D74ECu;
            goto label_1d74ec;
        }
    }
    ctx->pc = 0x1D75B0u;
    // 0x1d75b0: 0xc07ce18
    ctx->pc = 0x1D75B0u;
    SET_GPR_U32(ctx, 31, 0x1D75B8u);
    ctx->pc = 0x1D75B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75B8u; }
        else if (ctx->pc != 0x1D75B8u) { ctx->pc = 0x1D75B8u; }
    }
    if (ctx->pc != 0x1D75B8u) { return; }
    ctx->pc = 0x1D75B8u;
    // 0x1d75b8: 0x1c40001f
    ctx->pc = 0x1D75B8u;
    {
        const bool branch_taken_0x1d75b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d75b8) {
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D75C0u;
    // 0x1d75c0: 0xc6010098
    ctx->pc = 0x1d75c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d75c4: 0x3c033e75
    ctx->pc = 0x1d75c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d75c8: 0x3463c290
    ctx->pc = 0x1d75c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d75cc: 0x44830000
    ctx->pc = 0x1d75ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d75d0: 0x0
    ctx->pc = 0x1d75d0u;
    // NOP
    // 0x1d75d4: 0x46000840
    ctx->pc = 0x1d75d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d75d8: 0xe6010098
    ctx->pc = 0x1d75d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1d75dc: 0xc6000068
    ctx->pc = 0x1d75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d75e0: 0x46000836
    ctx->pc = 0x1d75e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d75e4: 0x0
    ctx->pc = 0x1d75e4u;
    // NOP
    // 0x1d75e8: 0x45010008
    ctx->pc = 0x1D75E8u;
    {
        const bool branch_taken_0x1d75e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d75e8) {
            ctx->pc = 0x1D760Cu;
            goto label_1d760c;
        }
    }
    ctx->pc = 0x1D75F0u;
    // 0x1d75f0: 0xc60100b8
    ctx->pc = 0x1d75f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d75f4: 0x3c033d08
    ctx->pc = 0x1d75f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15624 << 16));
    // 0x1d75f8: 0x34638889
    ctx->pc = 0x1d75f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
    // 0x1d75fc: 0x44830000
    ctx->pc = 0x1d75fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7600: 0x0
    ctx->pc = 0x1d7600u;
    // NOP
    // 0x1d7604: 0x46000801
    ctx->pc = 0x1d7604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7608: 0xe60000b8
    ctx->pc = 0x1d7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1d760c:
    // 0x1d760c: 0xc6010068
    ctx->pc = 0x1d760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7610: 0x3c0340c0
    ctx->pc = 0x1d7610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16576 << 16));
    // 0x1d7614: 0x44830000
    ctx->pc = 0x1d7614u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7618: 0xc6020098
    ctx->pc = 0x1d7618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d761c: 0x46010000
    ctx->pc = 0x1d761cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d7620: 0x46001036
    ctx->pc = 0x1d7620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7624: 0x0
    ctx->pc = 0x1d7624u;
    // NOP
    // 0x1d7628: 0x45010003
    ctx->pc = 0x1D7628u;
    {
        const bool branch_taken_0x1d7628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7628) {
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D7630u;
    // 0x1d7630: 0xc06898c
    ctx->pc = 0x1D7630u;
    SET_GPR_U32(ctx, 31, 0x1D7638u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7638u; }
        else if (ctx->pc != 0x1D7638u) { ctx->pc = 0x1D7638u; }
    }
    if (ctx->pc != 0x1D7638u) { return; }
    ctx->pc = 0x1D7638u;
label_1d7638:
    // 0x1d7638: 0x7bbf0020
    ctx->pc = 0x1d7638u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d763c: 0x7bb10010
    ctx->pc = 0x1d763cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7640: 0x7bb00000
    ctx->pc = 0x1d7640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7644: 0x3e00008
    ctx->pc = 0x1D7644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74ECu: goto label_1d74ec;
            case 0x1D757Cu: goto label_1d757c;
            case 0x1D758Cu: goto label_1d758c;
            case 0x1D75A0u: goto label_1d75a0;
            case 0x1D760Cu: goto label_1d760c;
            case 0x1D7638u: goto label_1d7638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D764Cu;
}
