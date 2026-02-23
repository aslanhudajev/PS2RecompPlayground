#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dym_loop__12DynamicsTaskFv
// Address: 0x1d7040 - 0x1d71d0
void dym_loop__12DynamicsTaskFv_0x1d7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dym_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d7040u;

    // 0x1d7040: 0x27bdff80
    ctx->pc = 0x1d7040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d7044: 0x7fbf0030
    ctx->pc = 0x1d7044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d7048: 0x7fb20020
    ctx->pc = 0x1d7048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d704c: 0x7fb10010
    ctx->pc = 0x1d704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7050: 0x7fb00000
    ctx->pc = 0x1d7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7054: 0x70809628
    ctx->pc = 0x1d7054u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d7058: 0x70008628
    ctx->pc = 0x1d7058u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d705c: 0x10000030
    ctx->pc = 0x1D705Cu;
    {
        const bool branch_taken_0x1d705c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7060u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d705c) {
            ctx->pc = 0x1D7120u;
            goto label_1d7120;
        }
    }
    ctx->pc = 0x1D7064u;
label_1d7064:
    // 0x1d7064: 0x4bede37d
    ctx->pc = 0x1d7064u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7068: 0x4bedeb7d
    ctx->pc = 0x1d7068u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d706c: 0x4bedf37d
    ctx->pc = 0x1d706cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7070: 0x4bedfb7d
    ctx->pc = 0x1d7070u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7074: 0xc64d0044
    ctx->pc = 0x1d7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7078: 0xc64e0048
    ctx->pc = 0x1d7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d707c: 0xc06c202
    ctx->pc = 0x1D707Cu;
    SET_GPR_U32(ctx, 31, 0x1D7084u);
    ctx->pc = 0x1D7080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7084u; }
        else if (ctx->pc != 0x1D7084u) { ctx->pc = 0x1D7084u; }
    }
    if (ctx->pc != 0x1D7084u) { return; }
    ctx->pc = 0x1D7084u;
    // 0x1d7084: 0xc06c0fb
    ctx->pc = 0x1D7084u;
    SET_GPR_U32(ctx, 31, 0x1D708Cu);
    ctx->pc = 0x1D7088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D708Cu; }
        else if (ctx->pc != 0x1D708Cu) { ctx->pc = 0x1D708Cu; }
    }
    if (ctx->pc != 0x1D708Cu) { return; }
    ctx->pc = 0x1D708Cu;
    // 0x1d708c: 0xc06c09f
    ctx->pc = 0x1D708Cu;
    SET_GPR_U32(ctx, 31, 0x1D7094u);
    ctx->pc = 0x1D7090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7094u; }
        else if (ctx->pc != 0x1D7094u) { ctx->pc = 0x1D7094u; }
    }
    if (ctx->pc != 0x1D7094u) { return; }
    ctx->pc = 0x1D7094u;
    // 0x1d7094: 0xc06c157
    ctx->pc = 0x1D7094u;
    SET_GPR_U32(ctx, 31, 0x1D709Cu);
    ctx->pc = 0x1D7098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D709Cu; }
        else if (ctx->pc != 0x1D709Cu) { ctx->pc = 0x1D709Cu; }
    }
    if (ctx->pc != 0x1D709Cu) { return; }
    ctx->pc = 0x1D709Cu;
    // 0x1d709c: 0x8e450058
    ctx->pc = 0x1d709cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d70a0: 0xc64c0098
    ctx->pc = 0x1d70a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d70a4: 0xc64d0068
    ctx->pc = 0x1d70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d70a8: 0x8e470078
    ctx->pc = 0x1d70a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d70ac: 0x27a40040
    ctx->pc = 0x1d70acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d70b0: 0xc0755e0
    ctx->pc = 0x1D70B0u;
    SET_GPR_U32(ctx, 31, 0x1D70B8u);
    ctx->pc = 0x1D70B4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70B8u; }
        else if (ctx->pc != 0x1D70B8u) { ctx->pc = 0x1D70B8u; }
    }
    if (ctx->pc != 0x1D70B8u) { return; }
    ctx->pc = 0x1D70B8u;
    // 0x1d70b8: 0xc06c04e
    ctx->pc = 0x1D70B8u;
    SET_GPR_U32(ctx, 31, 0x1D70C0u);
    ctx->pc = 0x1D70BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70C0u; }
        else if (ctx->pc != 0x1D70C0u) { ctx->pc = 0x1D70C0u; }
    }
    if (ctx->pc != 0x1D70C0u) { return; }
    ctx->pc = 0x1D70C0u;
    // 0x1d70c0: 0xc64c00b8
    ctx->pc = 0x1d70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d70c4: 0x3c023f80
    ctx->pc = 0x1d70c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d70c8: 0x44820000
    ctx->pc = 0x1d70c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d70cc: 0x0
    ctx->pc = 0x1d70ccu;
    // NOP
    // 0x1d70d0: 0x460c0032
    ctx->pc = 0x1d70d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d70d4: 0x0
    ctx->pc = 0x1d70d4u;
    // NOP
    // 0x1d70d8: 0x45000007
    ctx->pc = 0x1D70D8u;
    {
        const bool branch_taken_0x1d70d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d70d8) {
            ctx->pc = 0x1D70F8u;
            goto label_1d70f8;
        }
    }
    ctx->pc = 0x1D70E0u;
    // 0x1d70e0: 0x8e4200b4
    ctx->pc = 0x1d70e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d70e4: 0x511021
    ctx->pc = 0x1d70e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d70e8: 0xc0853ac
    ctx->pc = 0x1D70E8u;
    SET_GPR_U32(ctx, 31, 0x1D70F0u);
    ctx->pc = 0x1D70ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70F0u; }
        else if (ctx->pc != 0x1D70F0u) { ctx->pc = 0x1D70F0u; }
    }
    if (ctx->pc != 0x1D70F0u) { return; }
    ctx->pc = 0x1D70F0u;
    // 0x1d70f0: 0x10000006
    ctx->pc = 0x1D70F0u;
    {
        const bool branch_taken_0x1d70f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70F4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d70f0) {
            ctx->pc = 0x1D710Cu;
            goto label_1d710c;
        }
    }
    ctx->pc = 0x1D70F8u;
label_1d70f8:
    // 0x1d70f8: 0x8e4200b4
    ctx->pc = 0x1d70f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d70fc: 0x511021
    ctx->pc = 0x1d70fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7100: 0xc0853e4
    ctx->pc = 0x1D7100u;
    SET_GPR_U32(ctx, 31, 0x1D7108u);
    ctx->pc = 0x1D7104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7108u; }
        else if (ctx->pc != 0x1D7108u) { ctx->pc = 0x1D7108u; }
    }
    if (ctx->pc != 0x1D7108u) { return; }
    ctx->pc = 0x1D7108u;
    // 0x1d7108: 0x4bff6b7e
    ctx->pc = 0x1d7108u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d710c:
    // 0x1d710c: 0x4bfe6b7e
    ctx->pc = 0x1d710cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7110: 0x4bfd6b7e
    ctx->pc = 0x1d7110u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7114: 0x4bfc6b7e
    ctx->pc = 0x1d7114u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7118: 0x26310004
    ctx->pc = 0x1d7118u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d711c: 0x26100001
    ctx->pc = 0x1d711cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d7120:
    // 0x1d7120: 0x8e420078
    ctx->pc = 0x1d7120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d7124: 0x202102a
    ctx->pc = 0x1d7124u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x1d7128: 0x1440ffce
    ctx->pc = 0x1D7128u;
    {
        const bool branch_taken_0x1d7128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D712Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d7128) {
            ctx->pc = 0x1D7064u;
            goto label_1d7064;
        }
    }
    ctx->pc = 0x1D7130u;
    // 0x1d7130: 0xc07ce18
    ctx->pc = 0x1D7130u;
    SET_GPR_U32(ctx, 31, 0x1D7138u);
    ctx->pc = 0x1D7134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7138u; }
        else if (ctx->pc != 0x1D7138u) { ctx->pc = 0x1D7138u; }
    }
    if (ctx->pc != 0x1D7138u) { return; }
    ctx->pc = 0x1D7138u;
    // 0x1d7138: 0x1c40001f
    ctx->pc = 0x1D7138u;
    {
        const bool branch_taken_0x1d7138 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7138) {
            ctx->pc = 0x1D71B8u;
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D7140u;
    // 0x1d7140: 0xc6420098
    ctx->pc = 0x1d7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7144: 0x3c033e75
    ctx->pc = 0x1d7144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7148: 0x3463c290
    ctx->pc = 0x1d7148u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d714c: 0x44830800
    ctx->pc = 0x1d714cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1d7150: 0x3c034080
    ctx->pc = 0x1d7150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d7154: 0x46011080
    ctx->pc = 0x1d7154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d7158: 0xe6420098
    ctx->pc = 0x1d7158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x1d715c: 0xc6410068
    ctx->pc = 0x1d715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7160: 0x44830000
    ctx->pc = 0x1d7160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7164: 0x0
    ctx->pc = 0x1d7164u;
    // NOP
    // 0x1d7168: 0x46000801
    ctx->pc = 0x1d7168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d716c: 0x46001036
    ctx->pc = 0x1d716cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7170: 0x0
    ctx->pc = 0x1d7170u;
    // NOP
    // 0x1d7174: 0x45010008
    ctx->pc = 0x1D7174u;
    {
        const bool branch_taken_0x1d7174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7174) {
            ctx->pc = 0x1D7198u;
            goto label_1d7198;
        }
    }
    ctx->pc = 0x1D717Cu;
    // 0x1d717c: 0xc64100b8
    ctx->pc = 0x1d717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7180: 0x3c033d4c
    ctx->pc = 0x1d7180u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d7184: 0x3463cccd
    ctx->pc = 0x1d7184u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7188: 0x44830000
    ctx->pc = 0x1d7188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d718c: 0x0
    ctx->pc = 0x1d718cu;
    // NOP
    // 0x1d7190: 0x46000801
    ctx->pc = 0x1d7190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7194: 0xe64000b8
    ctx->pc = 0x1d7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_1d7198:
    // 0x1d7198: 0xc6410098
    ctx->pc = 0x1d7198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d719c: 0xc6400068
    ctx->pc = 0x1d719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d71a0: 0x46000836
    ctx->pc = 0x1d71a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d71a4: 0x0
    ctx->pc = 0x1d71a4u;
    // NOP
    // 0x1d71a8: 0x45010003
    ctx->pc = 0x1D71A8u;
    {
        const bool branch_taken_0x1d71a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d71a8) {
            ctx->pc = 0x1D71B8u;
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71B0u;
    // 0x1d71b0: 0xc06898c
    ctx->pc = 0x1D71B0u;
    SET_GPR_U32(ctx, 31, 0x1D71B8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71B8u; }
        else if (ctx->pc != 0x1D71B8u) { ctx->pc = 0x1D71B8u; }
    }
    if (ctx->pc != 0x1D71B8u) { return; }
    ctx->pc = 0x1D71B8u;
label_1d71b8:
    // 0x1d71b8: 0x7bbf0030
    ctx->pc = 0x1d71b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d71bc: 0x7bb20020
    ctx->pc = 0x1d71bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d71c0: 0x7bb10010
    ctx->pc = 0x1d71c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71c4: 0x7bb00000
    ctx->pc = 0x1d71c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d71c8: 0x3e00008
    ctx->pc = 0x1D71C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7064u: goto label_1d7064;
            case 0x1D70F8u: goto label_1d70f8;
            case 0x1D710Cu: goto label_1d710c;
            case 0x1D7120u: goto label_1d7120;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D71B8u: goto label_1d71b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D71D0u;
}
