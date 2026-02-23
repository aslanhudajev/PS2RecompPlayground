#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: knight_loop__12DynamicsTaskFv
// Address: 0x1d7d00 - 0x1d7f84
void knight_loop__12DynamicsTaskFv_0x1d7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("knight_loop__12DynamicsTaskFv");


    ctx->pc = 0x1d7d00u;

    // 0x1d7d00: 0x27bdff80
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d7d04: 0x7fbf0030
    ctx->pc = 0x1d7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d7d08: 0x7fb20020
    ctx->pc = 0x1d7d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7d0c: 0x7fb10010
    ctx->pc = 0x1d7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7d10: 0x7fb00000
    ctx->pc = 0x1d7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7d14: 0x70809628
    ctx->pc = 0x1d7d14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d7d18: 0x4bede37d
    ctx->pc = 0x1d7d18u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7d1c: 0x4bedeb7d
    ctx->pc = 0x1d7d1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7d20: 0x4bedf37d
    ctx->pc = 0x1d7d20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7d24: 0x4bedfb7d
    ctx->pc = 0x1d7d24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7d28: 0xc48d0044
    ctx->pc = 0x1d7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7d2c: 0xc48e0048
    ctx->pc = 0x1d7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d7d30: 0xc06c202
    ctx->pc = 0x1D7D30u;
    SET_GPR_U32(ctx, 31, 0x1D7D38u);
    ctx->pc = 0x1D7D34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D38u; }
        else if (ctx->pc != 0x1D7D38u) { ctx->pc = 0x1D7D38u; }
    }
    if (ctx->pc != 0x1D7D38u) { return; }
    ctx->pc = 0x1D7D38u;
    // 0x1d7d38: 0xc06c0fb
    ctx->pc = 0x1D7D38u;
    SET_GPR_U32(ctx, 31, 0x1D7D40u);
    ctx->pc = 0x1D7D3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D40u; }
        else if (ctx->pc != 0x1D7D40u) { ctx->pc = 0x1D7D40u; }
    }
    if (ctx->pc != 0x1D7D40u) { return; }
    ctx->pc = 0x1D7D40u;
    // 0x1d7d40: 0xc06c09f
    ctx->pc = 0x1D7D40u;
    SET_GPR_U32(ctx, 31, 0x1D7D48u);
    ctx->pc = 0x1D7D44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D48u; }
        else if (ctx->pc != 0x1D7D48u) { ctx->pc = 0x1D7D48u; }
    }
    if (ctx->pc != 0x1D7D48u) { return; }
    ctx->pc = 0x1D7D48u;
    // 0x1d7d48: 0xc06c157
    ctx->pc = 0x1D7D48u;
    SET_GPR_U32(ctx, 31, 0x1D7D50u);
    ctx->pc = 0x1D7D4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D50u; }
        else if (ctx->pc != 0x1D7D50u) { ctx->pc = 0x1D7D50u; }
    }
    if (ctx->pc != 0x1D7D50u) { return; }
    ctx->pc = 0x1D7D50u;
    // 0x1d7d50: 0x3c023f19
    ctx->pc = 0x1d7d50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x1d7d54: 0x3442999a
    ctx->pc = 0x1d7d54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1d7d58: 0x44826000
    ctx->pc = 0x1d7d58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d7d5c: 0x0
    ctx->pc = 0x1d7d5cu;
    // NOP
    // 0x1d7d60: 0x46006346
    ctx->pc = 0x1d7d60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d7d64: 0xc06c1b3
    ctx->pc = 0x1D7D64u;
    SET_GPR_U32(ctx, 31, 0x1D7D6Cu);
    ctx->pc = 0x1D7D68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D6Cu; }
        else if (ctx->pc != 0x1D7D6Cu) { ctx->pc = 0x1D7D6Cu; }
    }
    if (ctx->pc != 0x1D7D6Cu) { return; }
    ctx->pc = 0x1D7D6Cu;
    // 0x1d7d6c: 0x3c023f19
    ctx->pc = 0x1d7d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x1d7d70: 0x3442999a
    ctx->pc = 0x1d7d70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1d7d74: 0x44826000
    ctx->pc = 0x1d7d74u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1d7d78: 0xc06b218
    ctx->pc = 0x1D7D78u;
    SET_GPR_U32(ctx, 31, 0x1D7D80u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D80u; }
        else if (ctx->pc != 0x1D7D80u) { ctx->pc = 0x1D7D80u; }
    }
    if (ctx->pc != 0x1D7D80u) { return; }
    ctx->pc = 0x1D7D80u;
    // 0x1d7d80: 0x70008628
    ctx->pc = 0x1d7d80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7d84: 0x1000004e
    ctx->pc = 0x1D7D84u;
    {
        const bool branch_taken_0x1d7d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7D88u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d7d84) {
            ctx->pc = 0x1D7EC0u;
            goto label_1d7ec0;
        }
    }
    ctx->pc = 0x1D7D8Cu;
label_1d7d8c:
    // 0x1d7d8c: 0x4bede37d
    ctx->pc = 0x1d7d8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d7d90: 0x4bedeb7d
    ctx->pc = 0x1d7d90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d7d94: 0x4bedf37d
    ctx->pc = 0x1d7d94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d7d98: 0x4bedfb7d
    ctx->pc = 0x1d7d98u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d7d9c: 0x8e450058
    ctx->pc = 0x1d7d9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d7da0: 0xc64c0098
    ctx->pc = 0x1d7da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7da4: 0xc64d0068
    ctx->pc = 0x1d7da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7da8: 0x27a40040
    ctx->pc = 0x1d7da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d7dac: 0xc0755e0
    ctx->pc = 0x1D7DACu;
    SET_GPR_U32(ctx, 31, 0x1D7DB4u);
    ctx->pc = 0x1D7DB0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DB4u; }
        else if (ctx->pc != 0x1D7DB4u) { ctx->pc = 0x1D7DB4u; }
    }
    if (ctx->pc != 0x1D7DB4u) { return; }
    ctx->pc = 0x1D7DB4u;
    // 0x1d7db4: 0xc06c04e
    ctx->pc = 0x1D7DB4u;
    SET_GPR_U32(ctx, 31, 0x1D7DBCu);
    ctx->pc = 0x1D7DB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DBCu; }
        else if (ctx->pc != 0x1D7DBCu) { ctx->pc = 0x1D7DBCu; }
    }
    if (ctx->pc != 0x1D7DBCu) { return; }
    ctx->pc = 0x1D7DBCu;
    // 0x1d7dbc: 0xc64c00b8
    ctx->pc = 0x1d7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7dc0: 0x3c023f80
    ctx->pc = 0x1d7dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1d7dc4: 0x44820000
    ctx->pc = 0x1d7dc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1d7dc8: 0x0
    ctx->pc = 0x1d7dc8u;
    // NOP
    // 0x1d7dcc: 0x460c0032
    ctx->pc = 0x1d7dccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7dd0: 0x0
    ctx->pc = 0x1d7dd0u;
    // NOP
    // 0x1d7dd4: 0x4500001a
    ctx->pc = 0x1D7DD4u;
    {
        const bool branch_taken_0x1d7dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7dd4) {
            ctx->pc = 0x1D7E40u;
            goto label_1d7e40;
        }
    }
    ctx->pc = 0x1D7DDCu;
    // 0x1d7ddc: 0x8e4400b4
    ctx->pc = 0x1d7ddcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7de0: 0x3c020043
    ctx->pc = 0x1d7de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)67 << 16));
    // 0x1d7de4: 0x34430008
    ctx->pc = 0x1d7de4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 8));
    // 0x1d7de8: 0x912021
    ctx->pc = 0x1d7de8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d7dec: 0x8c840000
    ctx->pc = 0x1d7decu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7df0: 0x14830003
    ctx->pc = 0x1D7DF0u;
    {
        const bool branch_taken_0x1d7df0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D7DF4u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 9));
        if (branch_taken_0x1d7df0) {
            ctx->pc = 0x1D7E00u;
            goto label_1d7e00;
        }
    }
    ctx->pc = 0x1D7DF8u;
    // 0x1d7df8: 0xc0853ac
    ctx->pc = 0x1D7DF8u;
    SET_GPR_U32(ctx, 31, 0x1D7E00u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E00u; }
        else if (ctx->pc != 0x1D7E00u) { ctx->pc = 0x1D7E00u; }
    }
    if (ctx->pc != 0x1D7E00u) { return; }
    ctx->pc = 0x1D7E00u;
label_1d7e00:
    // 0x1d7e00: 0x8e4400b4
    ctx->pc = 0x1d7e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e04: 0x3c020047
    ctx->pc = 0x1d7e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d7e08: 0x344300ae
    ctx->pc = 0x1d7e08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 174));
    // 0x1d7e0c: 0x912021
    ctx->pc = 0x1d7e0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d7e10: 0x8c840000
    ctx->pc = 0x1d7e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e14: 0x14830004
    ctx->pc = 0x1D7E14u;
    {
        const bool branch_taken_0x1d7e14 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D7E18u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 175));
        if (branch_taken_0x1d7e14) {
            ctx->pc = 0x1D7E28u;
            goto label_1d7e28;
        }
    }
    ctx->pc = 0x1D7E1Cu;
    // 0x1d7e1c: 0xc0853ac
    ctx->pc = 0x1D7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E24u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E24u; }
        else if (ctx->pc != 0x1D7E24u) { ctx->pc = 0x1D7E24u; }
    }
    if (ctx->pc != 0x1D7E24u) { return; }
    ctx->pc = 0x1D7E24u;
    // 0x1d7e24: 0x0
    ctx->pc = 0x1d7e24u;
    // NOP
label_1d7e28:
    // 0x1d7e28: 0x8e4200b4
    ctx->pc = 0x1d7e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e2c: 0x511021
    ctx->pc = 0x1d7e2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7e30: 0xc0853ac
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1D7E34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E38u; }
        else if (ctx->pc != 0x1D7E38u) { ctx->pc = 0x1D7E38u; }
    }
    if (ctx->pc != 0x1D7E38u) { return; }
    ctx->pc = 0x1D7E38u;
    // 0x1d7e38: 0x1000001c
    ctx->pc = 0x1D7E38u;
    {
        const bool branch_taken_0x1d7e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7E3Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d7e38) {
            ctx->pc = 0x1D7EACu;
            goto label_1d7eac;
        }
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0x8e4400b4
    ctx->pc = 0x1d7e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e44: 0x3c020043
    ctx->pc = 0x1d7e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)67 << 16));
    // 0x1d7e48: 0x34430008
    ctx->pc = 0x1d7e48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 8));
    // 0x1d7e4c: 0x912021
    ctx->pc = 0x1d7e4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d7e50: 0x8c840000
    ctx->pc = 0x1d7e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e54: 0x14830004
    ctx->pc = 0x1D7E54u;
    {
        const bool branch_taken_0x1d7e54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D7E58u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 9));
        if (branch_taken_0x1d7e54) {
            ctx->pc = 0x1D7E68u;
            goto label_1d7e68;
        }
    }
    ctx->pc = 0x1D7E5Cu;
    // 0x1d7e5c: 0xc0853e4
    ctx->pc = 0x1D7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E64u);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E64u; }
        else if (ctx->pc != 0x1D7E64u) { ctx->pc = 0x1D7E64u; }
    }
    if (ctx->pc != 0x1D7E64u) { return; }
    ctx->pc = 0x1D7E64u;
    // 0x1d7e64: 0x0
    ctx->pc = 0x1d7e64u;
    // NOP
label_1d7e68:
    // 0x1d7e68: 0x8e4400b4
    ctx->pc = 0x1d7e68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e6c: 0x3c020047
    ctx->pc = 0x1d7e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1d7e70: 0x344300ae
    ctx->pc = 0x1d7e70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 174));
    // 0x1d7e74: 0x912021
    ctx->pc = 0x1d7e74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d7e78: 0x8c840000
    ctx->pc = 0x1d7e78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e7c: 0x14830004
    ctx->pc = 0x1D7E7Cu;
    {
        const bool branch_taken_0x1d7e7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D7E80u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 175));
        if (branch_taken_0x1d7e7c) {
            ctx->pc = 0x1D7E90u;
            goto label_1d7e90;
        }
    }
    ctx->pc = 0x1D7E84u;
    // 0x1d7e84: 0xc0853ac
    ctx->pc = 0x1D7E84u;
    SET_GPR_U32(ctx, 31, 0x1D7E8Cu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E8Cu; }
        else if (ctx->pc != 0x1D7E8Cu) { ctx->pc = 0x1D7E8Cu; }
    }
    if (ctx->pc != 0x1D7E8Cu) { return; }
    ctx->pc = 0x1D7E8Cu;
    // 0x1d7e8c: 0x0
    ctx->pc = 0x1d7e8cu;
    // NOP
label_1d7e90:
    // 0x1d7e90: 0x8e4200b4
    ctx->pc = 0x1d7e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e94: 0x511021
    ctx->pc = 0x1d7e94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7e98: 0x8c440000
    ctx->pc = 0x1d7e98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7e9c: 0xc0853e4
    ctx->pc = 0x1D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7EA4u);
    ctx->pc = 0x1D7EA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EA4u; }
        else if (ctx->pc != 0x1D7EA4u) { ctx->pc = 0x1D7EA4u; }
    }
    if (ctx->pc != 0x1D7EA4u) { return; }
    ctx->pc = 0x1D7EA4u;
    // 0x1d7ea4: 0x0
    ctx->pc = 0x1d7ea4u;
    // NOP
    // 0x1d7ea8: 0x4bff6b7e
    ctx->pc = 0x1d7ea8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d7eac:
    // 0x1d7eac: 0x4bfe6b7e
    ctx->pc = 0x1d7eacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7eb0: 0x4bfd6b7e
    ctx->pc = 0x1d7eb0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7eb4: 0x4bfc6b7e
    ctx->pc = 0x1d7eb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7eb8: 0x26310004
    ctx->pc = 0x1d7eb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d7ebc: 0x26100001
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d7ec0:
    // 0x1d7ec0: 0x8e470078
    ctx->pc = 0x1d7ec0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1d7ec4: 0x207102a
    ctx->pc = 0x1d7ec4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x1d7ec8: 0x1440ffb0
    ctx->pc = 0x1D7EC8u;
    {
        const bool branch_taken_0x1d7ec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7ec8) {
            ctx->pc = 0x1D7D8Cu;
            goto label_1d7d8c;
        }
    }
    ctx->pc = 0x1D7ED0u;
    // 0x1d7ed0: 0x4bff6b7e
    ctx->pc = 0x1d7ed0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d7ed4: 0x4bfe6b7e
    ctx->pc = 0x1d7ed4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d7ed8: 0x4bfd6b7e
    ctx->pc = 0x1d7ed8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d7edc: 0x4bfc6b7e
    ctx->pc = 0x1d7edcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d7ee0: 0x3c020050
    ctx->pc = 0x1d7ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d7ee4: 0xc07ce18
    ctx->pc = 0x1D7EE4u;
    SET_GPR_U32(ctx, 31, 0x1D7EECu);
    ctx->pc = 0x1D7EE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EECu; }
        else if (ctx->pc != 0x1D7EECu) { ctx->pc = 0x1D7EECu; }
    }
    if (ctx->pc != 0x1D7EECu) { return; }
    ctx->pc = 0x1D7EECu;
    // 0x1d7eec: 0x1c40001f
    ctx->pc = 0x1D7EECu;
    {
        const bool branch_taken_0x1d7eec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7eec) {
            ctx->pc = 0x1D7F6Cu;
            goto label_1d7f6c;
        }
    }
    ctx->pc = 0x1D7EF4u;
    // 0x1d7ef4: 0xc6410098
    ctx->pc = 0x1d7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ef8: 0x3c033e75
    ctx->pc = 0x1d7ef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x1d7efc: 0x3463c290
    ctx->pc = 0x1d7efcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1d7f00: 0x44830000
    ctx->pc = 0x1d7f00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7f04: 0x0
    ctx->pc = 0x1d7f04u;
    // NOP
    // 0x1d7f08: 0x46000840
    ctx->pc = 0x1d7f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7f0c: 0xe6410098
    ctx->pc = 0x1d7f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x1d7f10: 0xc6400068
    ctx->pc = 0x1d7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7f14: 0x46000836
    ctx->pc = 0x1d7f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7f18: 0x0
    ctx->pc = 0x1d7f18u;
    // NOP
    // 0x1d7f1c: 0x45010003
    ctx->pc = 0x1D7F1Cu;
    {
        const bool branch_taken_0x1d7f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7f1c) {
            ctx->pc = 0x1D7F2Cu;
            goto label_1d7f2c;
        }
    }
    ctx->pc = 0x1D7F24u;
    // 0x1d7f24: 0xc06898c
    ctx->pc = 0x1D7F24u;
    SET_GPR_U32(ctx, 31, 0x1D7F2Cu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F2Cu; }
        else if (ctx->pc != 0x1D7F2Cu) { ctx->pc = 0x1D7F2Cu; }
    }
    if (ctx->pc != 0x1D7F2Cu) { return; }
    ctx->pc = 0x1D7F2Cu;
label_1d7f2c:
    // 0x1d7f2c: 0xc6410068
    ctx->pc = 0x1d7f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7f30: 0x3c034080
    ctx->pc = 0x1d7f30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
    // 0x1d7f34: 0x44830000
    ctx->pc = 0x1d7f34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7f38: 0xc6420098
    ctx->pc = 0x1d7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7f3c: 0x46000801
    ctx->pc = 0x1d7f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7f40: 0x46001036
    ctx->pc = 0x1d7f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7f44: 0x0
    ctx->pc = 0x1d7f44u;
    // NOP
    // 0x1d7f48: 0x45010008
    ctx->pc = 0x1D7F48u;
    {
        const bool branch_taken_0x1d7f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7f48) {
            ctx->pc = 0x1D7F6Cu;
            goto label_1d7f6c;
        }
    }
    ctx->pc = 0x1D7F50u;
    // 0x1d7f50: 0xc64100b8
    ctx->pc = 0x1d7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7f54: 0x3c033d4c
    ctx->pc = 0x1d7f54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x1d7f58: 0x3463cccd
    ctx->pc = 0x1d7f58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1d7f5c: 0x44830000
    ctx->pc = 0x1d7f5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d7f60: 0x0
    ctx->pc = 0x1d7f60u;
    // NOP
    // 0x1d7f64: 0x46000801
    ctx->pc = 0x1d7f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7f68: 0xe64000b8
    ctx->pc = 0x1d7f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_1d7f6c:
    // 0x1d7f6c: 0x7bbf0030
    ctx->pc = 0x1d7f6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7f70: 0x7bb20020
    ctx->pc = 0x1d7f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7f74: 0x7bb10010
    ctx->pc = 0x1d7f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f78: 0x7bb00000
    ctx->pc = 0x1d7f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f7c: 0x3e00008
    ctx->pc = 0x1D7F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7D8Cu: goto label_1d7d8c;
            case 0x1D7E00u: goto label_1d7e00;
            case 0x1D7E28u: goto label_1d7e28;
            case 0x1D7E40u: goto label_1d7e40;
            case 0x1D7E68u: goto label_1d7e68;
            case 0x1D7E90u: goto label_1d7e90;
            case 0x1D7EACu: goto label_1d7eac;
            case 0x1D7EC0u: goto label_1d7ec0;
            case 0x1D7F2Cu: goto label_1d7f2c;
            case 0x1D7F6Cu: goto label_1d7f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7F84u;
}
