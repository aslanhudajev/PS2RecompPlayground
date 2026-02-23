#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop2_for_st3_elv_grass__12DynamicsTaskFv
// Address: 0x1d7350 - 0x1d74cc
void dym_loop2_for_st3_elv_grass__12DynamicsTaskFv_0x1d7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop2_for_st3_elv_grass__12DynamicsTaskFv");


    ctx->pc = 0x1d7350u;

    // 0x1d7350: 0x27bdff90
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d7354: 0x7fbf0020
    ctx->pc = 0x1d7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d7358: 0x7fb10010
    ctx->pc = 0x1d7358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d735c: 0x7fb00000
    ctx->pc = 0x1d735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7360: 0x70808628
    ctx->pc = 0x1d7360u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d7364: 0x1000002e
    ctx->pc = 0x1D7364u;
    {
        const bool branch_taken_0x1d7364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7368u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7364) {
            ctx->pc = 0x1D7420u;
            goto label_1d7420;
        }
    }
    ctx->pc = 0x1D736Cu;
label_1d736c:
    // 0x1d736c: 0x4bede37d
    ctx->pc = 0x1d736cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7370: 0x4bedeb7d
    ctx->pc = 0x1d7370u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7374: 0x4bedf37d
    ctx->pc = 0x1d7374u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7378: 0x4bedfb7d
    ctx->pc = 0x1d7378u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d737c: 0xc60d0044
    ctx->pc = 0x1d737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7380: 0xc60e0048
    ctx->pc = 0x1d7380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7384: 0xc06c202
    ctx->pc = 0x1D7384u;
    SET_GPR_U32(ctx, 31, 0x1D738Cu);
    ctx->pc = 0x1D7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D738Cu; }
        else if (ctx->pc != 0x1D738Cu) { ctx->pc = 0x1D738Cu; }
    }
    if (ctx->pc != 0x1D738Cu) { return; }
    ctx->pc = 0x1D738Cu;
    // 0x1d738c: 0xc06c0fb
    ctx->pc = 0x1D738Cu;
    SET_GPR_U32(ctx, 31, 0x1D7394u);
    ctx->pc = 0x1D7390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7394u; }
        else if (ctx->pc != 0x1D7394u) { ctx->pc = 0x1D7394u; }
    }
    if (ctx->pc != 0x1D7394u) { return; }
    ctx->pc = 0x1D7394u;
    // 0x1d7394: 0xc06c09f
    ctx->pc = 0x1D7394u;
    SET_GPR_U32(ctx, 31, 0x1D739Cu);
    ctx->pc = 0x1D7398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D739Cu; }
        else if (ctx->pc != 0x1D739Cu) { ctx->pc = 0x1D739Cu; }
    }
    if (ctx->pc != 0x1D739Cu) { return; }
    ctx->pc = 0x1D739Cu;
    // 0x1d739c: 0xc06c157
    ctx->pc = 0x1D739Cu;
    SET_GPR_U32(ctx, 31, 0x1D73A4u);
    ctx->pc = 0x1D73A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73A4u; }
        else if (ctx->pc != 0x1D73A4u) { ctx->pc = 0x1D73A4u; }
    }
    if (ctx->pc != 0x1D73A4u) { return; }
    ctx->pc = 0x1D73A4u;
    // 0x1d73a4: 0x8e050058
    ctx->pc = 0x1d73a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d73a8: 0xc60c0098
    ctx->pc = 0x1d73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d73ac: 0xc60d0068
    ctx->pc = 0x1d73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d73b0: 0x8e070078
    ctx->pc = 0x1d73b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d73b4: 0x27a40030
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d73b8: 0xc0755e0
    ctx->pc = 0x1D73B8u;
    SET_GPR_U32(ctx, 31, 0x1D73C0u);
    ctx->pc = 0x1D73BCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73C0u; }
        else if (ctx->pc != 0x1D73C0u) { ctx->pc = 0x1D73C0u; }
    }
    if (ctx->pc != 0x1D73C0u) { return; }
    ctx->pc = 0x1D73C0u;
    // 0x1d73c0: 0xc06c04e
    ctx->pc = 0x1D73C0u;
    SET_GPR_U32(ctx, 31, 0x1D73C8u);
    ctx->pc = 0x1D73C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73C8u; }
        else if (ctx->pc != 0x1D73C8u) { ctx->pc = 0x1D73C8u; }
    }
    if (ctx->pc != 0x1D73C8u) { return; }
    ctx->pc = 0x1D73C8u;
    // 0x1d73c8: 0xc60c00b8
    ctx->pc = 0x1d73c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d73cc: 0x3c023f80
    ctx->pc = 0x1d73ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d73d0: 0x44820000
    ctx->pc = 0x1d73d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d73d4: 0x0
    ctx->pc = 0x1d73d4u;
    // NOP
    // 0x1d73d8: 0x460c0032
    ctx->pc = 0x1d73d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d73dc: 0x0
    ctx->pc = 0x1d73dcu;
    // NOP
    // 0x1d73e0: 0x45000006
    ctx->pc = 0x1D73E0u;
    {
        const bool branch_taken_0x1d73e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d73e0) {
            ctx->pc = 0x1D73FCu;
            goto label_1d73fc;
        }
    }
    ctx->pc = 0x1D73E8u;
    // 0x1d73e8: 0x8e0200c0
    ctx->pc = 0x1d73e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d73ec: 0xc0853ac
    ctx->pc = 0x1D73ECu;
    SET_GPR_U32(ctx, 31, 0x1D73F4u);
    ctx->pc = 0x1D73F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73F4u; }
        else if (ctx->pc != 0x1D73F4u) { ctx->pc = 0x1D73F4u; }
    }
    if (ctx->pc != 0x1D73F4u) { return; }
    ctx->pc = 0x1D73F4u;
    // 0x1d73f4: 0x10000005
    ctx->pc = 0x1D73F4u;
    {
        const bool branch_taken_0x1d73f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D73F8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d73f4) {
            ctx->pc = 0x1D740Cu;
            goto label_1d740c;
        }
    }
    ctx->pc = 0x1D73FCu;
label_1d73fc:
    // 0x1d73fc: 0x8e0200c0
    ctx->pc = 0x1d73fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d7400: 0xc0853e4
    ctx->pc = 0x1D7400u;
    SET_GPR_U32(ctx, 31, 0x1D7408u);
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7408u; }
        else if (ctx->pc != 0x1D7408u) { ctx->pc = 0x1D7408u; }
    }
    if (ctx->pc != 0x1D7408u) { return; }
    ctx->pc = 0x1D7408u;
    // 0x1d7408: 0x4bff6b7e
    ctx->pc = 0x1d7408u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d740c:
    // 0x1d740c: 0x4bfe6b7e
    ctx->pc = 0x1d740cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7410: 0x4bfd6b7e
    ctx->pc = 0x1d7410u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7414: 0x4bfc6b7e
    ctx->pc = 0x1d7414u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7418: 0x26310002
    ctx->pc = 0x1d7418u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1d741c: 0x0
    ctx->pc = 0x1d741cu;
    // NOP
label_1d7420:
    // 0x1d7420: 0x8e020078
    ctx->pc = 0x1d7420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7424: 0x222102a
    ctx->pc = 0x1d7424u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d7428: 0x1440ffd0
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D742Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D736Cu;
            goto label_1d736c;
        }
    }
    ctx->pc = 0x1D7430u;
    // 0x1d7430: 0xc07ce18
    ctx->pc = 0x1D7430u;
    SET_GPR_U32(ctx, 31, 0x1D7438u);
    ctx->pc = 0x1D7434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7438u; }
        else if (ctx->pc != 0x1D7438u) { ctx->pc = 0x1D7438u; }
    }
    if (ctx->pc != 0x1D7438u) { return; }
    ctx->pc = 0x1D7438u;
    // 0x1d7438: 0x1c40001f
    ctx->pc = 0x1D7438u;
    {
        const bool branch_taken_0x1d7438 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7438) {
            ctx->pc = 0x1D74B8u;
            goto label_1d74b8;
        }
    }
    ctx->pc = 0x1D7440u;
    // 0x1d7440: 0xc6020098
    ctx->pc = 0x1d7440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7444: 0x3c033e75
    ctx->pc = 0x1d7444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7448: 0x3463c290
    ctx->pc = 0x1d7448u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d744c: 0x44830800
    ctx->pc = 0x1d744cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d7450: 0x3c034080
    ctx->pc = 0x1d7450u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d7454: 0x46011080
    ctx->pc = 0x1d7454u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d7458: 0xe6020098
    ctx->pc = 0x1d7458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1d745c: 0xc6010068
    ctx->pc = 0x1d745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7460: 0x44830000
    ctx->pc = 0x1d7460u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7464: 0x0
    ctx->pc = 0x1d7464u;
    // NOP
    // 0x1d7468: 0x46000801
    ctx->pc = 0x1d7468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d746c: 0x46001036
    ctx->pc = 0x1d746cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7470: 0x0
    ctx->pc = 0x1d7470u;
    // NOP
    // 0x1d7474: 0x45010008
    ctx->pc = 0x1D7474u;
    {
        const bool branch_taken_0x1d7474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7474) {
            ctx->pc = 0x1D7498u;
            goto label_1d7498;
        }
    }
    ctx->pc = 0x1D747Cu;
    // 0x1d747c: 0xc60100b8
    ctx->pc = 0x1d747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7480: 0x3c033d4c
    ctx->pc = 0x1d7480u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d7484: 0x3463cccd
    ctx->pc = 0x1d7484u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7488: 0x44830000
    ctx->pc = 0x1d7488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d748c: 0x0
    ctx->pc = 0x1d748cu;
    // NOP
    // 0x1d7490: 0x46000801
    ctx->pc = 0x1d7490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7494: 0xe60000b8
    ctx->pc = 0x1d7494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1d7498:
    // 0x1d7498: 0xc6010098
    ctx->pc = 0x1d7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d749c: 0xc6000068
    ctx->pc = 0x1d749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d74a0: 0x46000836
    ctx->pc = 0x1d74a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d74a4: 0x0
    ctx->pc = 0x1d74a4u;
    // NOP
    // 0x1d74a8: 0x45010003
    ctx->pc = 0x1D74A8u;
    {
        const bool branch_taken_0x1d74a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d74a8) {
            ctx->pc = 0x1D74B8u;
            goto label_1d74b8;
        }
    }
    ctx->pc = 0x1D74B0u;
    // 0x1d74b0: 0xc06898c
    ctx->pc = 0x1D74B0u;
    SET_GPR_U32(ctx, 31, 0x1D74B8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B8u; }
        else if (ctx->pc != 0x1D74B8u) { ctx->pc = 0x1D74B8u; }
    }
    if (ctx->pc != 0x1D74B8u) { return; }
    ctx->pc = 0x1D74B8u;
label_1d74b8:
    // 0x1d74b8: 0x7bbf0020
    ctx->pc = 0x1d74b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74bc: 0x7bb10010
    ctx->pc = 0x1d74bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d74c0: 0x7bb00000
    ctx->pc = 0x1d74c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d74c4: 0x3e00008
    ctx->pc = 0x1D74C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D736Cu: goto label_1d736c;
            case 0x1D73FCu: goto label_1d73fc;
            case 0x1D740Cu: goto label_1d740c;
            case 0x1D7420u: goto label_1d7420;
            case 0x1D7498u: goto label_1d7498;
            case 0x1D74B8u: goto label_1d74b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D74CCu;
}
