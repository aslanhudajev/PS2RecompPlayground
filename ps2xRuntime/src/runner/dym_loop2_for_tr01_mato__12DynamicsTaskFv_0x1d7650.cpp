#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop2_for_tr01_mato__12DynamicsTaskFv
// Address: 0x1d7650 - 0x1d77cc
void dym_loop2_for_tr01_mato__12DynamicsTaskFv_0x1d7650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop2_for_tr01_mato__12DynamicsTaskFv");


    ctx->pc = 0x1d7650u;

    // 0x1d7650: 0x27bdff90
    ctx->pc = 0x1d7650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d7654: 0x7fbf0020
    ctx->pc = 0x1d7654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d7658: 0x7fb10010
    ctx->pc = 0x1d7658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d765c: 0x7fb00000
    ctx->pc = 0x1d765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7660: 0x70808628
    ctx->pc = 0x1d7660u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d7664: 0x1000002e
    ctx->pc = 0x1D7664u;
    {
        const bool branch_taken_0x1d7664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7668u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7664) {
            ctx->pc = 0x1D7720u;
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D766Cu;
label_1d766c:
    // 0x1d766c: 0x4bede37d
    ctx->pc = 0x1d766cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7670: 0x4bedeb7d
    ctx->pc = 0x1d7670u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7674: 0x4bedf37d
    ctx->pc = 0x1d7674u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7678: 0x4bedfb7d
    ctx->pc = 0x1d7678u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d767c: 0xc60d0044
    ctx->pc = 0x1d767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7680: 0xc60e0048
    ctx->pc = 0x1d7680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7684: 0xc06c202
    ctx->pc = 0x1D7684u;
    SET_GPR_U32(ctx, 31, 0x1D768Cu);
    ctx->pc = 0x1D7688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D768Cu; }
        else if (ctx->pc != 0x1D768Cu) { ctx->pc = 0x1D768Cu; }
    }
    if (ctx->pc != 0x1D768Cu) { return; }
    ctx->pc = 0x1D768Cu;
    // 0x1d768c: 0xc06c0fb
    ctx->pc = 0x1D768Cu;
    SET_GPR_U32(ctx, 31, 0x1D7694u);
    ctx->pc = 0x1D7690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7694u; }
        else if (ctx->pc != 0x1D7694u) { ctx->pc = 0x1D7694u; }
    }
    if (ctx->pc != 0x1D7694u) { return; }
    ctx->pc = 0x1D7694u;
    // 0x1d7694: 0xc06c09f
    ctx->pc = 0x1D7694u;
    SET_GPR_U32(ctx, 31, 0x1D769Cu);
    ctx->pc = 0x1D7698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D769Cu; }
        else if (ctx->pc != 0x1D769Cu) { ctx->pc = 0x1D769Cu; }
    }
    if (ctx->pc != 0x1D769Cu) { return; }
    ctx->pc = 0x1D769Cu;
    // 0x1d769c: 0xc06c157
    ctx->pc = 0x1D769Cu;
    SET_GPR_U32(ctx, 31, 0x1D76A4u);
    ctx->pc = 0x1D76A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76A4u; }
        else if (ctx->pc != 0x1D76A4u) { ctx->pc = 0x1D76A4u; }
    }
    if (ctx->pc != 0x1D76A4u) { return; }
    ctx->pc = 0x1D76A4u;
    // 0x1d76a4: 0x8e050058
    ctx->pc = 0x1d76a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d76a8: 0xc60c0098
    ctx->pc = 0x1d76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d76ac: 0xc60d0068
    ctx->pc = 0x1d76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d76b0: 0x8e070078
    ctx->pc = 0x1d76b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d76b4: 0x27a40030
    ctx->pc = 0x1d76b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d76b8: 0xc0755e0
    ctx->pc = 0x1D76B8u;
    SET_GPR_U32(ctx, 31, 0x1D76C0u);
    ctx->pc = 0x1D76BCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76C0u; }
        else if (ctx->pc != 0x1D76C0u) { ctx->pc = 0x1D76C0u; }
    }
    if (ctx->pc != 0x1D76C0u) { return; }
    ctx->pc = 0x1D76C0u;
    // 0x1d76c0: 0xc06c04e
    ctx->pc = 0x1D76C0u;
    SET_GPR_U32(ctx, 31, 0x1D76C8u);
    ctx->pc = 0x1D76C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76C8u; }
        else if (ctx->pc != 0x1D76C8u) { ctx->pc = 0x1D76C8u; }
    }
    if (ctx->pc != 0x1D76C8u) { return; }
    ctx->pc = 0x1D76C8u;
    // 0x1d76c8: 0xc60c00b8
    ctx->pc = 0x1d76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d76cc: 0x3c023f80
    ctx->pc = 0x1d76ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d76d0: 0x44820000
    ctx->pc = 0x1d76d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d76d4: 0x0
    ctx->pc = 0x1d76d4u;
    // NOP
    // 0x1d76d8: 0x460c0032
    ctx->pc = 0x1d76d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d76dc: 0x0
    ctx->pc = 0x1d76dcu;
    // NOP
    // 0x1d76e0: 0x45000006
    ctx->pc = 0x1D76E0u;
    {
        const bool branch_taken_0x1d76e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d76e0) {
            ctx->pc = 0x1D76FCu;
            goto label_1d76fc;
        }
    }
    ctx->pc = 0x1D76E8u;
    // 0x1d76e8: 0x8e0200c0
    ctx->pc = 0x1d76e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d76ec: 0xc0853ac
    ctx->pc = 0x1D76ECu;
    SET_GPR_U32(ctx, 31, 0x1D76F4u);
    ctx->pc = 0x1D76F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76F4u; }
        else if (ctx->pc != 0x1D76F4u) { ctx->pc = 0x1D76F4u; }
    }
    if (ctx->pc != 0x1D76F4u) { return; }
    ctx->pc = 0x1D76F4u;
    // 0x1d76f4: 0x10000005
    ctx->pc = 0x1D76F4u;
    {
        const bool branch_taken_0x1d76f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D76F8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d76f4) {
            ctx->pc = 0x1D770Cu;
            goto label_1d770c;
        }
    }
    ctx->pc = 0x1D76FCu;
label_1d76fc:
    // 0x1d76fc: 0x8e0200c0
    ctx->pc = 0x1d76fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d7700: 0xc0853e4
    ctx->pc = 0x1D7700u;
    SET_GPR_U32(ctx, 31, 0x1D7708u);
    ctx->pc = 0x1D7704u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7708u; }
        else if (ctx->pc != 0x1D7708u) { ctx->pc = 0x1D7708u; }
    }
    if (ctx->pc != 0x1D7708u) { return; }
    ctx->pc = 0x1D7708u;
    // 0x1d7708: 0x4bff6b7e
    ctx->pc = 0x1d7708u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d770c:
    // 0x1d770c: 0x4bfe6b7e
    ctx->pc = 0x1d770cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7710: 0x4bfd6b7e
    ctx->pc = 0x1d7710u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7714: 0x4bfc6b7e
    ctx->pc = 0x1d7714u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7718: 0x26310001
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d771c: 0x0
    ctx->pc = 0x1d771cu;
    // NOP
label_1d7720:
    // 0x1d7720: 0x8e020078
    ctx->pc = 0x1d7720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7724: 0x222102a
    ctx->pc = 0x1d7724u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d7728: 0x1440ffd0
    ctx->pc = 0x1D7728u;
    {
        const bool branch_taken_0x1d7728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D772Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d7728) {
            ctx->pc = 0x1D766Cu;
            goto label_1d766c;
        }
    }
    ctx->pc = 0x1D7730u;
    // 0x1d7730: 0xc07ce18
    ctx->pc = 0x1D7730u;
    SET_GPR_U32(ctx, 31, 0x1D7738u);
    ctx->pc = 0x1D7734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7738u; }
        else if (ctx->pc != 0x1D7738u) { ctx->pc = 0x1D7738u; }
    }
    if (ctx->pc != 0x1D7738u) { return; }
    ctx->pc = 0x1D7738u;
    // 0x1d7738: 0x1c40001f
    ctx->pc = 0x1D7738u;
    {
        const bool branch_taken_0x1d7738 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7738) {
            ctx->pc = 0x1D77B8u;
            goto label_1d77b8;
        }
    }
    ctx->pc = 0x1D7740u;
    // 0x1d7740: 0xc6020098
    ctx->pc = 0x1d7740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7744: 0x3c033e75
    ctx->pc = 0x1d7744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7748: 0x3463c290
    ctx->pc = 0x1d7748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d774c: 0x44830800
    ctx->pc = 0x1d774cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d7750: 0x3c033f80
    ctx->pc = 0x1d7750u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1d7754: 0x46011080
    ctx->pc = 0x1d7754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d7758: 0xe6020098
    ctx->pc = 0x1d7758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1d775c: 0xc6010068
    ctx->pc = 0x1d775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7760: 0x44830000
    ctx->pc = 0x1d7760u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7764: 0x0
    ctx->pc = 0x1d7764u;
    // NOP
    // 0x1d7768: 0x46000801
    ctx->pc = 0x1d7768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d776c: 0x46001036
    ctx->pc = 0x1d776cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7770: 0x0
    ctx->pc = 0x1d7770u;
    // NOP
    // 0x1d7774: 0x45010008
    ctx->pc = 0x1D7774u;
    {
        const bool branch_taken_0x1d7774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7774) {
            ctx->pc = 0x1D7798u;
            goto label_1d7798;
        }
    }
    ctx->pc = 0x1D777Cu;
    // 0x1d777c: 0xc60100b8
    ctx->pc = 0x1d777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7780: 0x3c033e4c
    ctx->pc = 0x1d7780u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15948 << 16));
    // 0x1d7784: 0x3463cccd
    ctx->pc = 0x1d7784u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7788: 0x44830000
    ctx->pc = 0x1d7788u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d778c: 0x0
    ctx->pc = 0x1d778cu;
    // NOP
    // 0x1d7790: 0x46000801
    ctx->pc = 0x1d7790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7794: 0xe60000b8
    ctx->pc = 0x1d7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1d7798:
    // 0x1d7798: 0xc6010098
    ctx->pc = 0x1d7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d779c: 0xc6000068
    ctx->pc = 0x1d779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d77a0: 0x46000836
    ctx->pc = 0x1d77a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d77a4: 0x0
    ctx->pc = 0x1d77a4u;
    // NOP
    // 0x1d77a8: 0x45010003
    ctx->pc = 0x1D77A8u;
    {
        const bool branch_taken_0x1d77a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d77a8) {
            ctx->pc = 0x1D77B8u;
            goto label_1d77b8;
        }
    }
    ctx->pc = 0x1D77B0u;
    // 0x1d77b0: 0xc06898c
    ctx->pc = 0x1D77B0u;
    SET_GPR_U32(ctx, 31, 0x1D77B8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77B8u; }
        else if (ctx->pc != 0x1D77B8u) { ctx->pc = 0x1D77B8u; }
    }
    if (ctx->pc != 0x1D77B8u) { return; }
    ctx->pc = 0x1D77B8u;
label_1d77b8:
    // 0x1d77b8: 0x7bbf0020
    ctx->pc = 0x1d77b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d77bc: 0x7bb10010
    ctx->pc = 0x1d77bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d77c0: 0x7bb00000
    ctx->pc = 0x1d77c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77c4: 0x3e00008
    ctx->pc = 0x1D77C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D766Cu: goto label_1d766c;
            case 0x1D76FCu: goto label_1d76fc;
            case 0x1D770Cu: goto label_1d770c;
            case 0x1D7720u: goto label_1d7720;
            case 0x1D7798u: goto label_1d7798;
            case 0x1D77B8u: goto label_1d77b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D77CCu;
}
