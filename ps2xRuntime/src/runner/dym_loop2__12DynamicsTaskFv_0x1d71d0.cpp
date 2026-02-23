#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop2__12DynamicsTaskFv
// Address: 0x1d71d0 - 0x1d734c
void dym_loop2__12DynamicsTaskFv_0x1d71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop2__12DynamicsTaskFv");


    ctx->pc = 0x1d71d0u;

    // 0x1d71d0: 0x27bdff90
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d71d4: 0x7fbf0020
    ctx->pc = 0x1d71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d71d8: 0x7fb10010
    ctx->pc = 0x1d71d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d71dc: 0x7fb00000
    ctx->pc = 0x1d71dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d71e0: 0x70808628
    ctx->pc = 0x1d71e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d71e4: 0x1000002e
    ctx->pc = 0x1D71E4u;
    {
        const bool branch_taken_0x1d71e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71E8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d71e4) {
            ctx->pc = 0x1D72A0u;
            goto label_1d72a0;
        }
    }
    ctx->pc = 0x1D71ECu;
label_1d71ec:
    // 0x1d71ec: 0x4bede37d
    ctx->pc = 0x1d71ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d71f0: 0x4bedeb7d
    ctx->pc = 0x1d71f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d71f4: 0x4bedf37d
    ctx->pc = 0x1d71f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d71f8: 0x4bedfb7d
    ctx->pc = 0x1d71f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d71fc: 0xc60d0044
    ctx->pc = 0x1d71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7200: 0xc60e0048
    ctx->pc = 0x1d7200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7204: 0xc06c202
    ctx->pc = 0x1D7204u;
    SET_GPR_U32(ctx, 31, 0x1D720Cu);
    ctx->pc = 0x1D7208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D720Cu; }
        else if (ctx->pc != 0x1D720Cu) { ctx->pc = 0x1D720Cu; }
    }
    if (ctx->pc != 0x1D720Cu) { return; }
    ctx->pc = 0x1D720Cu;
    // 0x1d720c: 0xc06c0fb
    ctx->pc = 0x1D720Cu;
    SET_GPR_U32(ctx, 31, 0x1D7214u);
    ctx->pc = 0x1D7210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7214u; }
        else if (ctx->pc != 0x1D7214u) { ctx->pc = 0x1D7214u; }
    }
    if (ctx->pc != 0x1D7214u) { return; }
    ctx->pc = 0x1D7214u;
    // 0x1d7214: 0xc06c09f
    ctx->pc = 0x1D7214u;
    SET_GPR_U32(ctx, 31, 0x1D721Cu);
    ctx->pc = 0x1D7218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D721Cu; }
        else if (ctx->pc != 0x1D721Cu) { ctx->pc = 0x1D721Cu; }
    }
    if (ctx->pc != 0x1D721Cu) { return; }
    ctx->pc = 0x1D721Cu;
    // 0x1d721c: 0xc06c157
    ctx->pc = 0x1D721Cu;
    SET_GPR_U32(ctx, 31, 0x1D7224u);
    ctx->pc = 0x1D7220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7224u; }
        else if (ctx->pc != 0x1D7224u) { ctx->pc = 0x1D7224u; }
    }
    if (ctx->pc != 0x1D7224u) { return; }
    ctx->pc = 0x1D7224u;
    // 0x1d7224: 0x8e050058
    ctx->pc = 0x1d7224u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d7228: 0xc60c0098
    ctx->pc = 0x1d7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d722c: 0xc60d0068
    ctx->pc = 0x1d722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7230: 0x8e070078
    ctx->pc = 0x1d7230u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d7234: 0x27a40030
    ctx->pc = 0x1d7234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7238: 0xc0755e0
    ctx->pc = 0x1D7238u;
    SET_GPR_U32(ctx, 31, 0x1D7240u);
    ctx->pc = 0x1D723Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7240u; }
        else if (ctx->pc != 0x1D7240u) { ctx->pc = 0x1D7240u; }
    }
    if (ctx->pc != 0x1D7240u) { return; }
    ctx->pc = 0x1D7240u;
    // 0x1d7240: 0xc06c04e
    ctx->pc = 0x1D7240u;
    SET_GPR_U32(ctx, 31, 0x1D7248u);
    ctx->pc = 0x1D7244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7248u; }
        else if (ctx->pc != 0x1D7248u) { ctx->pc = 0x1D7248u; }
    }
    if (ctx->pc != 0x1D7248u) { return; }
    ctx->pc = 0x1D7248u;
    // 0x1d7248: 0xc60c00b8
    ctx->pc = 0x1d7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d724c: 0x3c023f80
    ctx->pc = 0x1d724cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d7250: 0x44820000
    ctx->pc = 0x1d7250u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d7254: 0x0
    ctx->pc = 0x1d7254u;
    // NOP
    // 0x1d7258: 0x460c0032
    ctx->pc = 0x1d7258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d725c: 0x0
    ctx->pc = 0x1d725cu;
    // NOP
    // 0x1d7260: 0x45000006
    ctx->pc = 0x1D7260u;
    {
        const bool branch_taken_0x1d7260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7260) {
            ctx->pc = 0x1D727Cu;
            goto label_1d727c;
        }
    }
    ctx->pc = 0x1D7268u;
    // 0x1d7268: 0x8e0200c0
    ctx->pc = 0x1d7268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d726c: 0xc0853ac
    ctx->pc = 0x1D726Cu;
    SET_GPR_U32(ctx, 31, 0x1D7274u);
    ctx->pc = 0x1D7270u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7274u; }
        else if (ctx->pc != 0x1D7274u) { ctx->pc = 0x1D7274u; }
    }
    if (ctx->pc != 0x1D7274u) { return; }
    ctx->pc = 0x1D7274u;
    // 0x1d7274: 0x10000005
    ctx->pc = 0x1D7274u;
    {
        const bool branch_taken_0x1d7274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7278u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d7274) {
            ctx->pc = 0x1D728Cu;
            goto label_1d728c;
        }
    }
    ctx->pc = 0x1D727Cu;
label_1d727c:
    // 0x1d727c: 0x8e0200c0
    ctx->pc = 0x1d727cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d7280: 0xc0853e4
    ctx->pc = 0x1D7280u;
    SET_GPR_U32(ctx, 31, 0x1D7288u);
    ctx->pc = 0x1D7284u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7288u; }
        else if (ctx->pc != 0x1D7288u) { ctx->pc = 0x1D7288u; }
    }
    if (ctx->pc != 0x1D7288u) { return; }
    ctx->pc = 0x1D7288u;
    // 0x1d7288: 0x4bff6b7e
    ctx->pc = 0x1d7288u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d728c:
    // 0x1d728c: 0x4bfe6b7e
    ctx->pc = 0x1d728cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7290: 0x4bfd6b7e
    ctx->pc = 0x1d7290u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7294: 0x4bfc6b7e
    ctx->pc = 0x1d7294u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7298: 0x26310001
    ctx->pc = 0x1d7298u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d729c: 0x0
    ctx->pc = 0x1d729cu;
    // NOP
label_1d72a0:
    // 0x1d72a0: 0x8e020078
    ctx->pc = 0x1d72a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d72a4: 0x222102a
    ctx->pc = 0x1d72a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d72a8: 0x1440ffd0
    ctx->pc = 0x1D72A8u;
    {
        const bool branch_taken_0x1d72a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D72ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d72a8) {
            ctx->pc = 0x1D71ECu;
            goto label_1d71ec;
        }
    }
    ctx->pc = 0x1D72B0u;
    // 0x1d72b0: 0xc07ce18
    ctx->pc = 0x1D72B0u;
    SET_GPR_U32(ctx, 31, 0x1D72B8u);
    ctx->pc = 0x1D72B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72B8u; }
        else if (ctx->pc != 0x1D72B8u) { ctx->pc = 0x1D72B8u; }
    }
    if (ctx->pc != 0x1D72B8u) { return; }
    ctx->pc = 0x1D72B8u;
    // 0x1d72b8: 0x1c40001f
    ctx->pc = 0x1D72B8u;
    {
        const bool branch_taken_0x1d72b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d72b8) {
            ctx->pc = 0x1D7338u;
            goto label_1d7338;
        }
    }
    ctx->pc = 0x1D72C0u;
    // 0x1d72c0: 0xc6020098
    ctx->pc = 0x1d72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d72c4: 0x3c033e75
    ctx->pc = 0x1d72c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d72c8: 0x3463c290
    ctx->pc = 0x1d72c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d72cc: 0x44830800
    ctx->pc = 0x1d72ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d72d0: 0x3c034080
    ctx->pc = 0x1d72d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d72d4: 0x46011080
    ctx->pc = 0x1d72d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d72d8: 0xe6020098
    ctx->pc = 0x1d72d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1d72dc: 0xc6010068
    ctx->pc = 0x1d72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d72e0: 0x44830000
    ctx->pc = 0x1d72e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d72e4: 0x0
    ctx->pc = 0x1d72e4u;
    // NOP
    // 0x1d72e8: 0x46000801
    ctx->pc = 0x1d72e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d72ec: 0x46001036
    ctx->pc = 0x1d72ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d72f0: 0x0
    ctx->pc = 0x1d72f0u;
    // NOP
    // 0x1d72f4: 0x45010008
    ctx->pc = 0x1D72F4u;
    {
        const bool branch_taken_0x1d72f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d72f4) {
            ctx->pc = 0x1D7318u;
            goto label_1d7318;
        }
    }
    ctx->pc = 0x1D72FCu;
    // 0x1d72fc: 0xc60100b8
    ctx->pc = 0x1d72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7300: 0x3c033d4c
    ctx->pc = 0x1d7300u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d7304: 0x3463cccd
    ctx->pc = 0x1d7304u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7308: 0x44830000
    ctx->pc = 0x1d7308u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d730c: 0x0
    ctx->pc = 0x1d730cu;
    // NOP
    // 0x1d7310: 0x46000801
    ctx->pc = 0x1d7310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7314: 0xe60000b8
    ctx->pc = 0x1d7314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1d7318:
    // 0x1d7318: 0xc6010098
    ctx->pc = 0x1d7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d731c: 0xc6000068
    ctx->pc = 0x1d731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7320: 0x46000836
    ctx->pc = 0x1d7320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7324: 0x0
    ctx->pc = 0x1d7324u;
    // NOP
    // 0x1d7328: 0x45010003
    ctx->pc = 0x1D7328u;
    {
        const bool branch_taken_0x1d7328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7328) {
            ctx->pc = 0x1D7338u;
            goto label_1d7338;
        }
    }
    ctx->pc = 0x1D7330u;
    // 0x1d7330: 0xc06898c
    ctx->pc = 0x1D7330u;
    SET_GPR_U32(ctx, 31, 0x1D7338u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7338u; }
        else if (ctx->pc != 0x1D7338u) { ctx->pc = 0x1D7338u; }
    }
    if (ctx->pc != 0x1D7338u) { return; }
    ctx->pc = 0x1D7338u;
label_1d7338:
    // 0x1d7338: 0x7bbf0020
    ctx->pc = 0x1d7338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d733c: 0x7bb10010
    ctx->pc = 0x1d733cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7340: 0x7bb00000
    ctx->pc = 0x1d7340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7344: 0x3e00008
    ctx->pc = 0x1D7344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D71ECu: goto label_1d71ec;
            case 0x1D727Cu: goto label_1d727c;
            case 0x1D728Cu: goto label_1d728c;
            case 0x1D72A0u: goto label_1d72a0;
            case 0x1D7318u: goto label_1d7318;
            case 0x1D7338u: goto label_1d7338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D734Cu;
}
