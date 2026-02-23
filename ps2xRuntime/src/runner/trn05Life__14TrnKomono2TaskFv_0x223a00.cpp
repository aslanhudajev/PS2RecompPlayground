#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: trn05Life__14TrnKomono2TaskFv
// Address: 0x223a00 - 0x223b6c
void trn05Life__14TrnKomono2TaskFv_0x223a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("trn05Life__14TrnKomono2TaskFv");


    ctx->pc = 0x223a00u;

    // 0x223a00: 0x27bdff80
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x223a04: 0x7fbf0010
    ctx->pc = 0x223a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x223a08: 0x7fb00000
    ctx->pc = 0x223a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223a0c: 0x70808628
    ctx->pc = 0x223a0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x223a10: 0x4bede37d
    ctx->pc = 0x223a10u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x223a14: 0x4bedeb7d
    ctx->pc = 0x223a14u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x223a18: 0x4bedf37d
    ctx->pc = 0x223a18u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x223a1c: 0x4bedfb7d
    ctx->pc = 0x223a1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x223a20: 0xc480002c
    ctx->pc = 0x223a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a24: 0x8e05001c
    ctx->pc = 0x223a24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x223a28: 0xc60c004c
    ctx->pc = 0x223a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223a2c: 0x8e07003c
    ctx->pc = 0x223a2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x223a30: 0x70003628
    ctx->pc = 0x223a30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223a34: 0x46800360
    ctx->pc = 0x223a34u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223a38: 0xc07550c
    ctx->pc = 0x223A38u;
    SET_GPR_U32(ctx, 31, 0x223A40u);
    ctx->pc = 0x223A3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1D5430u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion__FP9_XYZ_DYNAP9_DYNAMICSffii_0x1d5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A40u; }
        else if (ctx->pc != 0x223A40u) { ctx->pc = 0x223A40u; }
    }
    if (ctx->pc != 0x223A40u) { return; }
    ctx->pc = 0x223A40u;
    // 0x223a40: 0xc7ad0064
    ctx->pc = 0x223a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x223a44: 0xc7ae0068
    ctx->pc = 0x223a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x223a48: 0xc06c202
    ctx->pc = 0x223A48u;
    SET_GPR_U32(ctx, 31, 0x223A50u);
    ctx->pc = 0x223A4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A50u; }
        else if (ctx->pc != 0x223A50u) { ctx->pc = 0x223A50u; }
    }
    if (ctx->pc != 0x223A50u) { return; }
    ctx->pc = 0x223A50u;
    // 0x223a50: 0x3c024080
    ctx->pc = 0x223a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x223a54: 0x44826000
    ctx->pc = 0x223a54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x223a58: 0x0
    ctx->pc = 0x223a58u;
    // NOP
    // 0x223a5c: 0x46006346
    ctx->pc = 0x223a5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x223a60: 0xc06c1b3
    ctx->pc = 0x223A60u;
    SET_GPR_U32(ctx, 31, 0x223A68u);
    ctx->pc = 0x223A64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A68u; }
        else if (ctx->pc != 0x223A68u) { ctx->pc = 0x223A68u; }
    }
    if (ctx->pc != 0x223A68u) { return; }
    ctx->pc = 0x223A68u;
    // 0x223a68: 0x3c024080
    ctx->pc = 0x223a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x223a6c: 0x44826000
    ctx->pc = 0x223a6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x223a70: 0xc06b218
    ctx->pc = 0x223A70u;
    SET_GPR_U32(ctx, 31, 0x223A78u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A78u; }
        else if (ctx->pc != 0x223A78u) { ctx->pc = 0x223A78u; }
    }
    if (ctx->pc != 0x223A78u) { return; }
    ctx->pc = 0x223A78u;
    // 0x223a78: 0x3c020001
    ctx->pc = 0x223a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x223a7c: 0xc0853ac
    ctx->pc = 0x223A7Cu;
    SET_GPR_U32(ctx, 31, 0x223A84u);
    ctx->pc = 0x223A80u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 188));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A84u; }
        else if (ctx->pc != 0x223A84u) { ctx->pc = 0x223A84u; }
    }
    if (ctx->pc != 0x223A84u) { return; }
    ctx->pc = 0x223A84u;
    // 0x223a84: 0x4bff6b7e
    ctx->pc = 0x223a84u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x223a88: 0x4bfe6b7e
    ctx->pc = 0x223a88u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223a8c: 0x4bfd6b7e
    ctx->pc = 0x223a8cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x223a90: 0x4bfc6b7e
    ctx->pc = 0x223a90u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223a94: 0x4bede37d
    ctx->pc = 0x223a94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x223a98: 0x4bedeb7d
    ctx->pc = 0x223a98u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x223a9c: 0x4bedf37d
    ctx->pc = 0x223a9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x223aa0: 0x4bedfb7d
    ctx->pc = 0x223aa0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x223aa4: 0xc6000030
    ctx->pc = 0x223aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223aa8: 0x8e050020
    ctx->pc = 0x223aa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x223aac: 0xc60c004c
    ctx->pc = 0x223aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223ab0: 0x8e070040
    ctx->pc = 0x223ab0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x223ab4: 0x27a40020
    ctx->pc = 0x223ab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x223ab8: 0x70003628
    ctx->pc = 0x223ab8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223abc: 0xc0755e0
    ctx->pc = 0x223ABCu;
    SET_GPR_U32(ctx, 31, 0x223AC4u);
    ctx->pc = 0x223AC0u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AC4u; }
        else if (ctx->pc != 0x223AC4u) { ctx->pc = 0x223AC4u; }
    }
    if (ctx->pc != 0x223AC4u) { return; }
    ctx->pc = 0x223AC4u;
    // 0x223ac4: 0xc06c04e
    ctx->pc = 0x223AC4u;
    SET_GPR_U32(ctx, 31, 0x223ACCu);
    ctx->pc = 0x223AC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223ACCu; }
        else if (ctx->pc != 0x223ACCu) { ctx->pc = 0x223ACCu; }
    }
    if (ctx->pc != 0x223ACCu) { return; }
    ctx->pc = 0x223ACCu;
    // 0x223acc: 0x3c024080
    ctx->pc = 0x223accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x223ad0: 0x44826000
    ctx->pc = 0x223ad0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x223ad4: 0x0
    ctx->pc = 0x223ad4u;
    // NOP
    // 0x223ad8: 0x46006346
    ctx->pc = 0x223ad8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x223adc: 0xc06c1b3
    ctx->pc = 0x223ADCu;
    SET_GPR_U32(ctx, 31, 0x223AE4u);
    ctx->pc = 0x223AE0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AE4u; }
        else if (ctx->pc != 0x223AE4u) { ctx->pc = 0x223AE4u; }
    }
    if (ctx->pc != 0x223AE4u) { return; }
    ctx->pc = 0x223AE4u;
    // 0x223ae4: 0x3c024080
    ctx->pc = 0x223ae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x223ae8: 0x44826000
    ctx->pc = 0x223ae8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x223aec: 0xc06b218
    ctx->pc = 0x223AECu;
    SET_GPR_U32(ctx, 31, 0x223AF4u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AF4u; }
        else if (ctx->pc != 0x223AF4u) { ctx->pc = 0x223AF4u; }
    }
    if (ctx->pc != 0x223AF4u) { return; }
    ctx->pc = 0x223AF4u;
    // 0x223af4: 0x3c020001
    ctx->pc = 0x223af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x223af8: 0xc0853ac
    ctx->pc = 0x223AF8u;
    SET_GPR_U32(ctx, 31, 0x223B00u);
    ctx->pc = 0x223AFCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 188));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B00u; }
        else if (ctx->pc != 0x223B00u) { ctx->pc = 0x223B00u; }
    }
    if (ctx->pc != 0x223B00u) { return; }
    ctx->pc = 0x223B00u;
    // 0x223b00: 0x4bff6b7e
    ctx->pc = 0x223b00u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x223b04: 0x4bfe6b7e
    ctx->pc = 0x223b04u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223b08: 0x4bfd6b7e
    ctx->pc = 0x223b08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x223b0c: 0x4bfc6b7e
    ctx->pc = 0x223b0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223b10: 0x3c020050
    ctx->pc = 0x223b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x223b14: 0xc07ce18
    ctx->pc = 0x223B14u;
    SET_GPR_U32(ctx, 31, 0x223B1Cu);
    ctx->pc = 0x223B18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B1Cu; }
        else if (ctx->pc != 0x223B1Cu) { ctx->pc = 0x223B1Cu; }
    }
    if (ctx->pc != 0x223B1Cu) { return; }
    ctx->pc = 0x223B1Cu;
    // 0x223b1c: 0x1c40000f
    ctx->pc = 0x223B1Cu;
    {
        const bool branch_taken_0x223b1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x223b1c) {
            ctx->pc = 0x223B5Cu;
            goto label_223b5c;
        }
    }
    ctx->pc = 0x223B24u;
    // 0x223b24: 0xc601004c
    ctx->pc = 0x223b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223b28: 0x3c033e75
    ctx->pc = 0x223b28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x223b2c: 0x3463c290
    ctx->pc = 0x223b2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x223b30: 0x44830000
    ctx->pc = 0x223b30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x223b34: 0x0
    ctx->pc = 0x223b34u;
    // NOP
    // 0x223b38: 0x46000840
    ctx->pc = 0x223b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x223b3c: 0xe601004c
    ctx->pc = 0x223b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x223b40: 0xc600002c
    ctx->pc = 0x223b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b44: 0x46800020
    ctx->pc = 0x223b44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223b48: 0x46000836
    ctx->pc = 0x223b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223b4c: 0x0
    ctx->pc = 0x223b4cu;
    // NOP
    // 0x223b50: 0x45010002
    ctx->pc = 0x223B50u;
    {
        const bool branch_taken_0x223b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223b50) {
            ctx->pc = 0x223B5Cu;
            goto label_223b5c;
        }
    }
    ctx->pc = 0x223B58u;
    // 0x223b58: 0xe600004c
    ctx->pc = 0x223b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_223b5c:
    // 0x223b5c: 0x7bbf0010
    ctx->pc = 0x223b5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b60: 0x7bb00000
    ctx->pc = 0x223b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b64: 0x3e00008
    ctx->pc = 0x223B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223B5Cu: goto label_223b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223B6Cu;
}
