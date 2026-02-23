#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMurabitoHensin__9FcvEffectFv
// Address: 0x1dfad0 - 0x1dfc68
void putMurabitoHensin__9FcvEffectFv_0x1dfad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMurabitoHensin__9FcvEffectFv");


    ctx->pc = 0x1dfad0u;

    // 0x1dfad0: 0x27bdffc0
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfad4: 0x7fbf0030
    ctx->pc = 0x1dfad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dfad8: 0x7fb20020
    ctx->pc = 0x1dfad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfadc: 0x7fb10010
    ctx->pc = 0x1dfadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfae0: 0x7fb00000
    ctx->pc = 0x1dfae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfae4: 0x70808628
    ctx->pc = 0x1dfae4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dfae8: 0x3c020050
    ctx->pc = 0x1dfae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1dfaec: 0xc07ce18
    ctx->pc = 0x1DFAECu;
    SET_GPR_U32(ctx, 31, 0x1DFAF4u);
    ctx->pc = 0x1DFAF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAF4u; }
        else if (ctx->pc != 0x1DFAF4u) { ctx->pc = 0x1DFAF4u; }
    }
    if (ctx->pc != 0x1DFAF4u) { return; }
    ctx->pc = 0x1DFAF4u;
    // 0x1dfaf4: 0x1c400015
    ctx->pc = 0x1DFAF4u;
    {
        const bool branch_taken_0x1dfaf4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1dfaf4) {
            ctx->pc = 0x1DFB4Cu;
            goto label_1dfb4c;
        }
    }
    ctx->pc = 0x1DFAFCu;
    // 0x1dfafc: 0xc6010028
    ctx->pc = 0x1dfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb00: 0x3c0241f0
    ctx->pc = 0x1dfb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dfb04: 0x44820000
    ctx->pc = 0x1dfb04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1dfb08: 0xc6020024
    ctx->pc = 0x1dfb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfb0c: 0x46000801
    ctx->pc = 0x1dfb0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfb10: 0x46001034
    ctx->pc = 0x1dfb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfb14: 0x0
    ctx->pc = 0x1dfb14u;
    // NOP
    // 0x1dfb18: 0x4501000c
    ctx->pc = 0x1DFB18u;
    {
        const bool branch_taken_0x1dfb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfb18) {
            ctx->pc = 0x1DFB4Cu;
            goto label_1dfb4c;
        }
    }
    ctx->pc = 0x1DFB20u;
    // 0x1dfb20: 0xc6010020
    ctx->pc = 0x1dfb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb24: 0x3c023d08
    ctx->pc = 0x1dfb24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15624 << 16));
    // 0x1dfb28: 0x34428889
    ctx->pc = 0x1dfb28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1dfb2c: 0x44820000
    ctx->pc = 0x1dfb2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1dfb30: 0x44801000
    ctx->pc = 0x1dfb30u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1dfb34: 0x46000801
    ctx->pc = 0x1dfb34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfb38: 0x46020034
    ctx->pc = 0x1dfb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfb3c: 0x0
    ctx->pc = 0x1dfb3cu;
    // NOP
    // 0x1dfb40: 0x45000002
    ctx->pc = 0x1DFB40u;
    {
        const bool branch_taken_0x1dfb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFB44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        if (branch_taken_0x1dfb40) {
            ctx->pc = 0x1DFB4Cu;
            goto label_1dfb4c;
        }
    }
    ctx->pc = 0x1DFB48u;
    // 0x1dfb48: 0xe6020020
    ctx->pc = 0x1dfb48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1dfb4c:
    // 0x1dfb4c: 0x3c010050
    ctx->pc = 0x1dfb4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dfb50: 0x8c22ec64
    ctx->pc = 0x1dfb50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962276)));
    // 0x1dfb54: 0x8c440048
    ctx->pc = 0x1dfb54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dfb58: 0xc06a450
    ctx->pc = 0x1DFB58u;
    SET_GPR_U32(ctx, 31, 0x1DFB60u);
    ctx->pc = 0x1DFB5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB60u; }
        else if (ctx->pc != 0x1DFB60u) { ctx->pc = 0x1DFB60u; }
    }
    if (ctx->pc != 0x1DFB60u) { return; }
    ctx->pc = 0x1DFB60u;
    // 0x1dfb60: 0x3c010050
    ctx->pc = 0x1dfb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dfb64: 0x8c22ec64
    ctx->pc = 0x1dfb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962276)));
    // 0x1dfb68: 0x8c440024
    ctx->pc = 0x1dfb68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1dfb6c: 0xc06a450
    ctx->pc = 0x1DFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB74u);
    ctx->pc = 0x1DFB70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB74u; }
        else if (ctx->pc != 0x1DFB74u) { ctx->pc = 0x1DFB74u; }
    }
    if (ctx->pc != 0x1DFB74u) { return; }
    ctx->pc = 0x1DFB74u;
    // 0x1dfb74: 0x3c010050
    ctx->pc = 0x1dfb74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dfb78: 0x8c22ec64
    ctx->pc = 0x1dfb78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962276)));
    // 0x1dfb7c: 0x8c44000c
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dfb80: 0xc06a450
    ctx->pc = 0x1DFB80u;
    SET_GPR_U32(ctx, 31, 0x1DFB88u);
    ctx->pc = 0x1DFB84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB88u; }
        else if (ctx->pc != 0x1DFB88u) { ctx->pc = 0x1DFB88u; }
    }
    if (ctx->pc != 0x1DFB88u) { return; }
    ctx->pc = 0x1DFB88u;
    // 0x1dfb88: 0x3c010050
    ctx->pc = 0x1dfb88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1dfb8c: 0x8c22ec64
    ctx->pc = 0x1dfb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294962276)));
    // 0x1dfb90: 0x8c440054
    ctx->pc = 0x1dfb90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1dfb94: 0xc06a450
    ctx->pc = 0x1DFB94u;
    SET_GPR_U32(ctx, 31, 0x1DFB9Cu);
    ctx->pc = 0x1DFB98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB9Cu; }
        else if (ctx->pc != 0x1DFB9Cu) { ctx->pc = 0x1DFB9Cu; }
    }
    if (ctx->pc != 0x1DFB9Cu) { return; }
    ctx->pc = 0x1DFB9Cu;
    // 0x1dfb9c: 0x4bede37d
    ctx->pc = 0x1dfb9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dfba0: 0x4bedeb7d
    ctx->pc = 0x1dfba0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dfba4: 0x4bedf37d
    ctx->pc = 0x1dfba4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dfba8: 0x4bedfb7d
    ctx->pc = 0x1dfba8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dfbac: 0x8e020038
    ctx->pc = 0x1dfbacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1dfbb0: 0xc44d0004
    ctx->pc = 0x1dfbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dfbb4: 0xc44e0008
    ctx->pc = 0x1dfbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dfbb8: 0xc06c202
    ctx->pc = 0x1DFBB8u;
    SET_GPR_U32(ctx, 31, 0x1DFBC0u);
    ctx->pc = 0x1DFBBCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBC0u; }
        else if (ctx->pc != 0x1DFBC0u) { ctx->pc = 0x1DFBC0u; }
    }
    if (ctx->pc != 0x1DFBC0u) { return; }
    ctx->pc = 0x1DFBC0u;
    // 0x1dfbc0: 0x8e020038
    ctx->pc = 0x1dfbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1dfbc4: 0xc06c0fb
    ctx->pc = 0x1DFBC4u;
    SET_GPR_U32(ctx, 31, 0x1DFBCCu);
    ctx->pc = 0x1DFBC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBCCu; }
        else if (ctx->pc != 0x1DFBCCu) { ctx->pc = 0x1DFBCCu; }
    }
    if (ctx->pc != 0x1DFBCCu) { return; }
    ctx->pc = 0x1DFBCCu;
    // 0x1dfbcc: 0xc60c002c
    ctx->pc = 0x1dfbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfbd0: 0x3c033f80
    ctx->pc = 0x1dfbd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dfbd4: 0x44830000
    ctx->pc = 0x1dfbd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dfbd8: 0x0
    ctx->pc = 0x1dfbd8u;
    // NOP
    // 0x1dfbdc: 0x460c0032
    ctx->pc = 0x1dfbdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfbe0: 0x0
    ctx->pc = 0x1dfbe0u;
    // NOP
    // 0x1dfbe4: 0x45010007
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFBE8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFC04u;
            goto label_1dfc04;
        }
    }
    ctx->pc = 0x1DFBECu;
    // 0x1dfbec: 0x46006346
    ctx->pc = 0x1dfbecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1dfbf0: 0xc06c1b3
    ctx->pc = 0x1DFBF0u;
    SET_GPR_U32(ctx, 31, 0x1DFBF8u);
    ctx->pc = 0x1DFBF4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBF8u; }
        else if (ctx->pc != 0x1DFBF8u) { ctx->pc = 0x1DFBF8u; }
    }
    if (ctx->pc != 0x1DFBF8u) { return; }
    ctx->pc = 0x1DFBF8u;
    // 0x1dfbf8: 0xc06b218
    ctx->pc = 0x1DFBF8u;
    SET_GPR_U32(ctx, 31, 0x1DFC00u);
    ctx->pc = 0x1DFBFCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC00u; }
        else if (ctx->pc != 0x1DFC00u) { ctx->pc = 0x1DFC00u; }
    }
    if (ctx->pc != 0x1DFC00u) { return; }
    ctx->pc = 0x1DFC00u;
    // 0x1dfc00: 0x70008e28
    ctx->pc = 0x1dfc00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dfc04:
    // 0x1dfc04: 0x1000000a
    ctx->pc = 0x1DFC04u;
    {
        const bool branch_taken_0x1dfc04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFC08u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfc04) {
            ctx->pc = 0x1DFC30u;
            goto label_1dfc30;
        }
    }
    ctx->pc = 0x1DFC0Cu;
label_1dfc0c:
    // 0x1dfc0c: 0x8e030054
    ctx->pc = 0x1dfc0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dfc10: 0xc60c0024
    ctx->pc = 0x1dfc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfc14: 0x3c023f80
    ctx->pc = 0x1dfc14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1dfc18: 0x44826800
    ctx->pc = 0x1dfc18u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dfc1c: 0xc079f30
    ctx->pc = 0x1DFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC24u);
    ctx->pc = 0x1DFC20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC24u; }
        else if (ctx->pc != 0x1DFC24u) { ctx->pc = 0x1DFC24u; }
    }
    if (ctx->pc != 0x1DFC24u) { return; }
    ctx->pc = 0x1DFC24u;
    // 0x1dfc24: 0x265200f0
    ctx->pc = 0x1dfc24u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1dfc28: 0x26310001
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dfc2c: 0x0
    ctx->pc = 0x1dfc2cu;
    // NOP
label_1dfc30:
    // 0x1dfc30: 0x8e030000
    ctx->pc = 0x1dfc30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfc34: 0x223182a
    ctx->pc = 0x1dfc34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dfc38: 0x1460fff4
    ctx->pc = 0x1DFC38u;
    {
        const bool branch_taken_0x1dfc38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dfc38) {
            ctx->pc = 0x1DFC0Cu;
            goto label_1dfc0c;
        }
    }
    ctx->pc = 0x1DFC40u;
    // 0x1dfc40: 0x4bff6b7e
    ctx->pc = 0x1dfc40u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dfc44: 0x4bfe6b7e
    ctx->pc = 0x1dfc44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dfc48: 0x4bfd6b7e
    ctx->pc = 0x1dfc48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dfc4c: 0x4bfc6b7e
    ctx->pc = 0x1dfc4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dfc50: 0x7bbf0030
    ctx->pc = 0x1dfc50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfc54: 0x7bb20020
    ctx->pc = 0x1dfc54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc58: 0x7bb10010
    ctx->pc = 0x1dfc58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc5c: 0x7bb00000
    ctx->pc = 0x1dfc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc60: 0x3e00008
    ctx->pc = 0x1DFC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFB4Cu: goto label_1dfb4c;
            case 0x1DFC04u: goto label_1dfc04;
            case 0x1DFC0Cu: goto label_1dfc0c;
            case 0x1DFC30u: goto label_1dfc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFC68u;
}
