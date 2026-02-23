#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss6Henshin__9FcvEffectFv
// Address: 0x1dfea0 - 0x1e039c
void putBoss6Henshin__9FcvEffectFv_0x1dfea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss6Henshin__9FcvEffectFv");


    ctx->pc = 0x1dfea0u;

    // 0x1dfea0: 0x27bdffb0
    ctx->pc = 0x1dfea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dfea4: 0x7fbf0040
    ctx->pc = 0x1dfea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dfea8: 0x7fb30030
    ctx->pc = 0x1dfea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dfeac: 0x7fb20020
    ctx->pc = 0x1dfeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfeb0: 0x7fb10010
    ctx->pc = 0x1dfeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfeb4: 0x7fb00000
    ctx->pc = 0x1dfeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfeb8: 0x8c83001c
    ctx->pc = 0x1dfeb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1dfebc: 0x2402002b
    ctx->pc = 0x1dfebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x1dfec0: 0x14620090
    ctx->pc = 0x1DFEC0u;
    {
        const bool branch_taken_0x1dfec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DFEC4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfec0) {
            ctx->pc = 0x1E0104u;
            goto label_1e0104;
        }
    }
    ctx->pc = 0x1DFEC8u;
    // 0x1dfec8: 0xc6010024
    ctx->pc = 0x1dfec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfecc: 0x3c0242c8
    ctx->pc = 0x1dfeccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1dfed0: 0x44820000
    ctx->pc = 0x1dfed0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1dfed4: 0x0
    ctx->pc = 0x1dfed4u;
    // NOP
    // 0x1dfed8: 0x46000836
    ctx->pc = 0x1dfed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfedc: 0x0
    ctx->pc = 0x1dfedcu;
    // NOP
    // 0x1dfee0: 0x45010013
    ctx->pc = 0x1DFEE0u;
    {
        const bool branch_taken_0x1dfee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFEE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17098 << 16));
        if (branch_taken_0x1dfee0) {
            ctx->pc = 0x1DFF30u;
            goto label_1dff30;
        }
    }
    ctx->pc = 0x1DFEE8u;
    // 0x1dfee8: 0x44820000
    ctx->pc = 0x1dfee8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1dfeec: 0x0
    ctx->pc = 0x1dfeecu;
    // NOP
    // 0x1dfef0: 0x46000836
    ctx->pc = 0x1dfef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfef4: 0x0
    ctx->pc = 0x1dfef4u;
    // NOP
    // 0x1dfef8: 0x4500000d
    ctx->pc = 0x1DFEF8u;
    {
        const bool branch_taken_0x1dfef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFEFCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfef8) {
            ctx->pc = 0x1DFF30u;
            goto label_1dff30;
        }
    }
    ctx->pc = 0x1DFF00u;
    // 0x1dff00: 0x70009628
    ctx->pc = 0x1dff00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dff04:
    // 0x1dff04: 0x8e03005c
    ctx->pc = 0x1dff04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1dff08: 0x3c020022
    ctx->pc = 0x1dff08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1dff0c: 0x34450190
    ctx->pc = 0x1dff0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 400));
    // 0x1dff10: 0x34460257
    ctx->pc = 0x1dff10u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 599));
    // 0x1dff14: 0xc079eb4
    ctx->pc = 0x1DFF14u;
    SET_GPR_U32(ctx, 31, 0x1DFF1Cu);
    ctx->pc = 0x1DFF18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF1Cu; }
        else if (ctx->pc != 0x1DFF1Cu) { ctx->pc = 0x1DFF1Cu; }
    }
    if (ctx->pc != 0x1DFF1Cu) { return; }
    ctx->pc = 0x1DFF1Cu;
    // 0x1dff1c: 0x26310001
    ctx->pc = 0x1dff1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dff20: 0x2a210018
    ctx->pc = 0x1dff20u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 24));
    // 0x1dff24: 0x1420fff7
    ctx->pc = 0x1DFF24u;
    {
        const bool branch_taken_0x1dff24 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DFF28u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dff24) {
            ctx->pc = 0x1DFF04u;
            goto label_1dff04;
        }
    }
    ctx->pc = 0x1DFF2Cu;
    // 0x1dff2c: 0x0
    ctx->pc = 0x1dff2cu;
    // NOP
label_1dff30:
    // 0x1dff30: 0x4bede37d
    ctx->pc = 0x1dff30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dff34: 0x4bedeb7d
    ctx->pc = 0x1dff34u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dff38: 0x4bedf37d
    ctx->pc = 0x1dff38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dff3c: 0x4bedfb7d
    ctx->pc = 0x1dff3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dff40: 0xc60d0040
    ctx->pc = 0x1dff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dff44: 0xc60e0044
    ctx->pc = 0x1dff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dff48: 0xc06c202
    ctx->pc = 0x1DFF48u;
    SET_GPR_U32(ctx, 31, 0x1DFF50u);
    ctx->pc = 0x1DFF4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF50u; }
        else if (ctx->pc != 0x1DFF50u) { ctx->pc = 0x1DFF50u; }
    }
    if (ctx->pc != 0x1DFF50u) { return; }
    ctx->pc = 0x1DFF50u;
    // 0x1dff50: 0xc06c0fb
    ctx->pc = 0x1DFF50u;
    SET_GPR_U32(ctx, 31, 0x1DFF58u);
    ctx->pc = 0x1DFF54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF58u; }
        else if (ctx->pc != 0x1DFF58u) { ctx->pc = 0x1DFF58u; }
    }
    if (ctx->pc != 0x1DFF58u) { return; }
    ctx->pc = 0x1DFF58u;
    // 0x1dff58: 0xc06c09f
    ctx->pc = 0x1DFF58u;
    SET_GPR_U32(ctx, 31, 0x1DFF60u);
    ctx->pc = 0x1DFF5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF60u; }
        else if (ctx->pc != 0x1DFF60u) { ctx->pc = 0x1DFF60u; }
    }
    if (ctx->pc != 0x1DFF60u) { return; }
    ctx->pc = 0x1DFF60u;
    // 0x1dff60: 0xc06c157
    ctx->pc = 0x1DFF60u;
    SET_GPR_U32(ctx, 31, 0x1DFF68u);
    ctx->pc = 0x1DFF64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF68u; }
        else if (ctx->pc != 0x1DFF68u) { ctx->pc = 0x1DFF68u; }
    }
    if (ctx->pc != 0x1DFF68u) { return; }
    ctx->pc = 0x1DFF68u;
    // 0x1dff68: 0x70008e28
    ctx->pc = 0x1dff68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dff6c: 0x10000012
    ctx->pc = 0x1DFF6Cu;
    {
        const bool branch_taken_0x1dff6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFF70u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dff6c) {
            ctx->pc = 0x1DFFB8u;
            goto label_1dffb8;
        }
    }
    ctx->pc = 0x1DFF74u;
label_1dff74:
    // 0x1dff74: 0x14400009
    ctx->pc = 0x1DFF74u;
    {
        const bool branch_taken_0x1dff74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DFF78u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 72));
        if (branch_taken_0x1dff74) {
            ctx->pc = 0x1DFF9Cu;
            goto label_1dff9c;
        }
    }
    ctx->pc = 0x1DFF7Cu;
    // 0x1dff7c: 0x10200007
    ctx->pc = 0x1DFF7Cu;
    {
        const bool branch_taken_0x1dff7c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dff7c) {
            ctx->pc = 0x1DFF9Cu;
            goto label_1dff9c;
        }
    }
    ctx->pc = 0x1DFF84u;
    // 0x1dff84: 0x8e020058
    ctx->pc = 0x1dff84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1dff88: 0xc60c0024
    ctx->pc = 0x1dff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dff8c: 0xc07a47c
    ctx->pc = 0x1DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF94u);
    ctx->pc = 0x1DFF90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFF94u; }
        else if (ctx->pc != 0x1DFF94u) { ctx->pc = 0x1DFF94u; }
    }
    if (ctx->pc != 0x1DFF94u) { return; }
    ctx->pc = 0x1DFF94u;
    // 0x1dff94: 0x10000007
    ctx->pc = 0x1DFF94u;
    {
        const bool branch_taken_0x1dff94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFF98u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dff94) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFF9Cu;
label_1dff9c:
    // 0x1dff9c: 0x8e020058
    ctx->pc = 0x1dff9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1dffa0: 0xc60c0024
    ctx->pc = 0x1dffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dffa4: 0xc07a42c
    ctx->pc = 0x1DFFA4u;
    SET_GPR_U32(ctx, 31, 0x1DFFACu);
    ctx->pc = 0x1DFFA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFACu; }
        else if (ctx->pc != 0x1DFFACu) { ctx->pc = 0x1DFFACu; }
    }
    if (ctx->pc != 0x1DFFACu) { return; }
    ctx->pc = 0x1DFFACu;
    // 0x1dffac: 0x0
    ctx->pc = 0x1dffacu;
    // NOP
    // 0x1dffb0: 0x265200f0
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dffb4:
    // 0x1dffb4: 0x26310001
    ctx->pc = 0x1dffb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dffb8:
    // 0x1dffb8: 0x8e020004
    ctx->pc = 0x1dffb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dffbc: 0x222102a
    ctx->pc = 0x1dffbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1dffc0: 0x1440ffec
    ctx->pc = 0x1DFFC0u;
    {
        const bool branch_taken_0x1dffc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DFFC4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
        if (branch_taken_0x1dffc0) {
            ctx->pc = 0x1DFF74u;
            goto label_1dff74;
        }
    }
    ctx->pc = 0x1DFFC8u;
    // 0x1dffc8: 0x70008e28
    ctx->pc = 0x1dffc8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dffcc: 0x1000001a
    ctx->pc = 0x1DFFCCu;
    {
        const bool branch_taken_0x1dffcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFFD0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dffcc) {
            ctx->pc = 0x1E0038u;
            goto label_1e0038;
        }
    }
    ctx->pc = 0x1DFFD4u;
label_1dffd4:
    // 0x1dffd4: 0x10200011
    ctx->pc = 0x1DFFD4u;
    {
        const bool branch_taken_0x1dffd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dffd4) {
            ctx->pc = 0x1E001Cu;
            goto label_1e001c;
        }
    }
    ctx->pc = 0x1DFFDCu;
    // 0x1dffdc: 0x8e02005c
    ctx->pc = 0x1dffdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1dffe0: 0xc079ebc
    ctx->pc = 0x1DFFE0u;
    SET_GPR_U32(ctx, 31, 0x1DFFE8u);
    ctx->pc = 0x1DFFE4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPatNum__7CFcvTRSFv_0x1e7af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFE8u; }
        else if (ctx->pc != 0x1DFFE8u) { ctx->pc = 0x1DFFE8u; }
    }
    if (ctx->pc != 0x1DFFE8u) { return; }
    ctx->pc = 0x1DFFE8u;
    // 0x1dffe8: 0x8e03005c
    ctx->pc = 0x1dffe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1dffec: 0xc60c0024
    ctx->pc = 0x1dffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfff0: 0x70409e28
    ctx->pc = 0x1dfff0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dfff4: 0x3c023f80
    ctx->pc = 0x1dfff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1dfff8: 0x44826800
    ctx->pc = 0x1dfff8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dfffc: 0xc079f30
    ctx->pc = 0x1DFFFCu;
    SET_GPR_U32(ctx, 31, 0x1E0004u);
    ctx->pc = 0x1E0000u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0004u; }
        else if (ctx->pc != 0x1E0004u) { ctx->pc = 0x1E0004u; }
    }
    if (ctx->pc != 0x1E0004u) { return; }
    ctx->pc = 0x1E0004u;
    // 0x1e0004: 0x8e02005c
    ctx->pc = 0x1e0004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e0008: 0x72602e28
    ctx->pc = 0x1e0008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e000c: 0xc079ec0
    ctx->pc = 0x1E000Cu;
    SET_GPR_U32(ctx, 31, 0x1E0014u);
    ctx->pc = 0x1E0010u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatNum__7CFcvTRSFi_0x1e7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0014u; }
        else if (ctx->pc != 0x1E0014u) { ctx->pc = 0x1E0014u; }
    }
    if (ctx->pc != 0x1E0014u) { return; }
    ctx->pc = 0x1E0014u;
    // 0x1e0014: 0x10000007
    ctx->pc = 0x1E0014u;
    {
        const bool branch_taken_0x1e0014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0018u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0014) {
            ctx->pc = 0x1E0034u;
            goto label_1e0034;
        }
    }
    ctx->pc = 0x1E001Cu;
label_1e001c:
    // 0x1e001c: 0x8e02005c
    ctx->pc = 0x1e001cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e0020: 0xc60c0024
    ctx->pc = 0x1e0020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0024: 0xc07a42c
    ctx->pc = 0x1E0024u;
    SET_GPR_U32(ctx, 31, 0x1E002Cu);
    ctx->pc = 0x1E0028u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E002Cu; }
        else if (ctx->pc != 0x1E002Cu) { ctx->pc = 0x1E002Cu; }
    }
    if (ctx->pc != 0x1E002Cu) { return; }
    ctx->pc = 0x1E002Cu;
    // 0x1e002c: 0x0
    ctx->pc = 0x1e002cu;
    // NOP
    // 0x1e0030: 0x265200f0
    ctx->pc = 0x1e0030u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1e0034:
    // 0x1e0034: 0x26310001
    ctx->pc = 0x1e0034u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e0038:
    // 0x1e0038: 0x8e020008
    ctx->pc = 0x1e0038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e003c: 0x222102a
    ctx->pc = 0x1e003cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1e0040: 0x1440ffe4
    ctx->pc = 0x1E0040u;
    {
        const bool branch_taken_0x1e0040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0044u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 24));
        if (branch_taken_0x1e0040) {
            ctx->pc = 0x1DFFD4u;
            goto label_1dffd4;
        }
    }
    ctx->pc = 0x1E0048u;
    // 0x1e0048: 0x4bede37d
    ctx->pc = 0x1e0048u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e004c: 0x4bedeb7d
    ctx->pc = 0x1e004cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0050: 0x4bedf37d
    ctx->pc = 0x1e0050u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0054: 0x4bedfb7d
    ctx->pc = 0x1e0054u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0058: 0xc06c0fb
    ctx->pc = 0x1E0058u;
    SET_GPR_U32(ctx, 31, 0x1E0060u);
    ctx->pc = 0x1E005Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2730));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0060u; }
        else if (ctx->pc != 0x1E0060u) { ctx->pc = 0x1E0060u; }
    }
    if (ctx->pc != 0x1E0060u) { return; }
    ctx->pc = 0x1E0060u;
    // 0x1e0060: 0x70008e28
    ctx->pc = 0x1e0060u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0064: 0x70009628
    ctx->pc = 0x1e0064u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0068:
    // 0x1e0068: 0x4bede37d
    ctx->pc = 0x1e0068u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e006c: 0x4bedeb7d
    ctx->pc = 0x1e006cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0070: 0x4bedf37d
    ctx->pc = 0x1e0070u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0074: 0x4bedfb7d
    ctx->pc = 0x1e0074u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0078: 0x3c023f66
    ctx->pc = 0x1e0078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x1e007c: 0x34426666
    ctx->pc = 0x1e007cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1e0080: 0x44826000
    ctx->pc = 0x1e0080u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e0084: 0x3c023fc0
    ctx->pc = 0x1e0084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x1e0088: 0x44826800
    ctx->pc = 0x1e0088u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e008c: 0xc06c1b3
    ctx->pc = 0x1E008Cu;
    SET_GPR_U32(ctx, 31, 0x1E0094u);
    ctx->pc = 0x1E0090u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0094u; }
        else if (ctx->pc != 0x1E0094u) { ctx->pc = 0x1E0094u; }
    }
    if (ctx->pc != 0x1E0094u) { return; }
    ctx->pc = 0x1E0094u;
    // 0x1e0094: 0x3c023f66
    ctx->pc = 0x1e0094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x1e0098: 0x34426666
    ctx->pc = 0x1e0098u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1e009c: 0x44826000
    ctx->pc = 0x1e009cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e00a0: 0xc06b218
    ctx->pc = 0x1E00A0u;
    SET_GPR_U32(ctx, 31, 0x1E00A8u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00A8u; }
        else if (ctx->pc != 0x1E00A8u) { ctx->pc = 0x1E00A8u; }
    }
    if (ctx->pc != 0x1E00A8u) { return; }
    ctx->pc = 0x1E00A8u;
    // 0x1e00a8: 0x8e03005c
    ctx->pc = 0x1e00a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1e00ac: 0xc60c0024
    ctx->pc = 0x1e00acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e00b0: 0x3c023f80
    ctx->pc = 0x1e00b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e00b4: 0x44826800
    ctx->pc = 0x1e00b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e00b8: 0xc079f30
    ctx->pc = 0x1E00B8u;
    SET_GPR_U32(ctx, 31, 0x1E00C0u);
    ctx->pc = 0x1E00BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E00C0u; }
        else if (ctx->pc != 0x1E00C0u) { ctx->pc = 0x1E00C0u; }
    }
    if (ctx->pc != 0x1E00C0u) { return; }
    ctx->pc = 0x1E00C0u;
    // 0x1e00c0: 0x4bff6b7e
    ctx->pc = 0x1e00c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e00c4: 0x4bfe6b7e
    ctx->pc = 0x1e00c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e00c8: 0x4bfd6b7e
    ctx->pc = 0x1e00c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e00cc: 0x4bfc6b7e
    ctx->pc = 0x1e00ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e00d0: 0x26310001
    ctx->pc = 0x1e00d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e00d4: 0x2a210018
    ctx->pc = 0x1e00d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 24));
    // 0x1e00d8: 0x1420ffe3
    ctx->pc = 0x1E00D8u;
    {
        const bool branch_taken_0x1e00d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E00DCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e00d8) {
            ctx->pc = 0x1E0068u;
            goto label_1e0068;
        }
    }
    ctx->pc = 0x1E00E0u;
    // 0x1e00e0: 0x4bff6b7e
    ctx->pc = 0x1e00e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e00e4: 0x4bfe6b7e
    ctx->pc = 0x1e00e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e00e8: 0x4bfd6b7e
    ctx->pc = 0x1e00e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e00ec: 0x4bfc6b7e
    ctx->pc = 0x1e00ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e00f0: 0x4bff6b7e
    ctx->pc = 0x1e00f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e00f4: 0x4bfe6b7e
    ctx->pc = 0x1e00f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e00f8: 0x4bfd6b7e
    ctx->pc = 0x1e00f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e00fc: 0x100000a0
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0100u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0380u;
            goto label_1e0380;
        }
    }
    ctx->pc = 0x1E0104u;
label_1e0104:
    // 0x1e0104: 0xc6010024
    ctx->pc = 0x1e0104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0108: 0x3c0242c8
    ctx->pc = 0x1e0108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1e010c: 0x44820000
    ctx->pc = 0x1e010cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0110: 0x0
    ctx->pc = 0x1e0110u;
    // NOP
    // 0x1e0114: 0x46000836
    ctx->pc = 0x1e0114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0118: 0x0
    ctx->pc = 0x1e0118u;
    // NOP
    // 0x1e011c: 0x45010012
    ctx->pc = 0x1E011Cu;
    {
        const bool branch_taken_0x1e011c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17098 << 16));
        if (branch_taken_0x1e011c) {
            ctx->pc = 0x1E0168u;
            goto label_1e0168;
        }
    }
    ctx->pc = 0x1E0124u;
    // 0x1e0124: 0x44820000
    ctx->pc = 0x1e0124u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0128: 0x0
    ctx->pc = 0x1e0128u;
    // NOP
    // 0x1e012c: 0x46000836
    ctx->pc = 0x1e012cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0130: 0x0
    ctx->pc = 0x1e0130u;
    // NOP
    // 0x1e0134: 0x4500000c
    ctx->pc = 0x1E0134u;
    {
        const bool branch_taken_0x1e0134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0138u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1e0134) {
            ctx->pc = 0x1E0168u;
            goto label_1e0168;
        }
    }
    ctx->pc = 0x1E013Cu;
    // 0x1e013c: 0x24120960
    ctx->pc = 0x1e013cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2400));
label_1e0140:
    // 0x1e0140: 0x8e030054
    ctx->pc = 0x1e0140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0144: 0x3c020022
    ctx->pc = 0x1e0144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1e0148: 0x34450190
    ctx->pc = 0x1e0148u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 400));
    // 0x1e014c: 0x34460257
    ctx->pc = 0x1e014cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 599));
    // 0x1e0150: 0xc079eb4
    ctx->pc = 0x1E0150u;
    SET_GPR_U32(ctx, 31, 0x1E0158u);
    ctx->pc = 0x1E0154u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatChg__7CFcvTRSFii_0x1e7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0158u; }
        else if (ctx->pc != 0x1E0158u) { ctx->pc = 0x1E0158u; }
    }
    if (ctx->pc != 0x1E0158u) { return; }
    ctx->pc = 0x1E0158u;
    // 0x1e0158: 0x26310001
    ctx->pc = 0x1e0158u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e015c: 0x2a210016
    ctx->pc = 0x1e015cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 22));
    // 0x1e0160: 0x1420fff7
    ctx->pc = 0x1E0160u;
    {
        const bool branch_taken_0x1e0160 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0164u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0160) {
            ctx->pc = 0x1E0140u;
            goto label_1e0140;
        }
    }
    ctx->pc = 0x1E0168u;
label_1e0168:
    // 0x1e0168: 0x4bede37d
    ctx->pc = 0x1e0168u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e016c: 0x4bedeb7d
    ctx->pc = 0x1e016cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0170: 0x4bedf37d
    ctx->pc = 0x1e0170u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0174: 0x4bedfb7d
    ctx->pc = 0x1e0174u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0178: 0xc60d0040
    ctx->pc = 0x1e0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e017c: 0xc60e0044
    ctx->pc = 0x1e017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0180: 0xc06c202
    ctx->pc = 0x1E0180u;
    SET_GPR_U32(ctx, 31, 0x1E0188u);
    ctx->pc = 0x1E0184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0188u; }
        else if (ctx->pc != 0x1E0188u) { ctx->pc = 0x1E0188u; }
    }
    if (ctx->pc != 0x1E0188u) { return; }
    ctx->pc = 0x1E0188u;
    // 0x1e0188: 0xc06c0fb
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0190u; }
        else if (ctx->pc != 0x1E0190u) { ctx->pc = 0x1E0190u; }
    }
    if (ctx->pc != 0x1E0190u) { return; }
    ctx->pc = 0x1E0190u;
    // 0x1e0190: 0xc06c09f
    ctx->pc = 0x1E0190u;
    SET_GPR_U32(ctx, 31, 0x1E0198u);
    ctx->pc = 0x1E0194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0198u; }
        else if (ctx->pc != 0x1E0198u) { ctx->pc = 0x1E0198u; }
    }
    if (ctx->pc != 0x1E0198u) { return; }
    ctx->pc = 0x1E0198u;
    // 0x1e0198: 0xc06c157
    ctx->pc = 0x1E0198u;
    SET_GPR_U32(ctx, 31, 0x1E01A0u);
    ctx->pc = 0x1E019Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01A0u; }
        else if (ctx->pc != 0x1E01A0u) { ctx->pc = 0x1E01A0u; }
    }
    if (ctx->pc != 0x1E01A0u) { return; }
    ctx->pc = 0x1E01A0u;
    // 0x1e01a0: 0x4bede37d
    ctx->pc = 0x1e01a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e01a4: 0x4bedeb7d
    ctx->pc = 0x1e01a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e01a8: 0x4bedf37d
    ctx->pc = 0x1e01a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e01ac: 0x4bedfb7d
    ctx->pc = 0x1e01acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e01b0: 0x70008e28
    ctx->pc = 0x1e01b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e01b4: 0x70009628
    ctx->pc = 0x1e01b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e01b8:
    // 0x1e01b8: 0x2a21000a
    ctx->pc = 0x1e01b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 10));
    // 0x1e01bc: 0x10200011
    ctx->pc = 0x1E01BCu;
    {
        const bool branch_taken_0x1e01bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e01bc) {
            ctx->pc = 0x1E0204u;
            goto label_1e0204;
        }
    }
    ctx->pc = 0x1E01C4u;
    // 0x1e01c4: 0x8e020054
    ctx->pc = 0x1e01c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e01c8: 0xc079ebc
    ctx->pc = 0x1E01C8u;
    SET_GPR_U32(ctx, 31, 0x1E01D0u);
    ctx->pc = 0x1E01CCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPatNum__7CFcvTRSFv_0x1e7af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01D0u; }
        else if (ctx->pc != 0x1E01D0u) { ctx->pc = 0x1E01D0u; }
    }
    if (ctx->pc != 0x1E01D0u) { return; }
    ctx->pc = 0x1E01D0u;
    // 0x1e01d0: 0x70409e28
    ctx->pc = 0x1e01d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e01d4: 0x3c023f80
    ctx->pc = 0x1e01d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e01d8: 0x44826800
    ctx->pc = 0x1e01d8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e01dc: 0xc60c0024
    ctx->pc = 0x1e01dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e01e0: 0x8e020054
    ctx->pc = 0x1e01e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e01e4: 0xc079f30
    ctx->pc = 0x1E01E4u;
    SET_GPR_U32(ctx, 31, 0x1E01ECu);
    ctx->pc = 0x1E01E8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01ECu; }
        else if (ctx->pc != 0x1E01ECu) { ctx->pc = 0x1E01ECu; }
    }
    if (ctx->pc != 0x1E01ECu) { return; }
    ctx->pc = 0x1E01ECu;
    // 0x1e01ec: 0x8e020054
    ctx->pc = 0x1e01ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e01f0: 0x72602e28
    ctx->pc = 0x1e01f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e01f4: 0xc079ec0
    ctx->pc = 0x1E01F4u;
    SET_GPR_U32(ctx, 31, 0x1E01FCu);
    ctx->pc = 0x1E01F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPatNum__7CFcvTRSFi_0x1e7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E01FCu; }
        else if (ctx->pc != 0x1E01FCu) { ctx->pc = 0x1E01FCu; }
    }
    if (ctx->pc != 0x1E01FCu) { return; }
    ctx->pc = 0x1E01FCu;
    // 0x1e01fc: 0x1000000f
    ctx->pc = 0x1E01FCu;
    {
        const bool branch_taken_0x1e01fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0200u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1e01fc) {
            ctx->pc = 0x1E023Cu;
            goto label_1e023c;
        }
    }
    ctx->pc = 0x1E0204u;
label_1e0204:
    // 0x1e0204: 0xc60c0024
    ctx->pc = 0x1e0204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0208: 0x3c024396
    ctx->pc = 0x1e0208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
    // 0x1e020c: 0x44820000
    ctx->pc = 0x1e020cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0210: 0x0
    ctx->pc = 0x1e0210u;
    // NOP
    // 0x1e0214: 0x46006036
    ctx->pc = 0x1e0214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0218: 0x0
    ctx->pc = 0x1e0218u;
    // NOP
    // 0x1e021c: 0x45000006
    ctx->pc = 0x1E021Cu;
    {
        const bool branch_taken_0x1e021c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0220u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e021c) {
            ctx->pc = 0x1E0238u;
            goto label_1e0238;
        }
    }
    ctx->pc = 0x1E0224u;
    // 0x1e0224: 0x44826800
    ctx->pc = 0x1e0224u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0228: 0x8e020054
    ctx->pc = 0x1e0228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e022c: 0xc079f30
    ctx->pc = 0x1E022Cu;
    SET_GPR_U32(ctx, 31, 0x1E0234u);
    ctx->pc = 0x1E0230u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0234u; }
        else if (ctx->pc != 0x1E0234u) { ctx->pc = 0x1E0234u; }
    }
    if (ctx->pc != 0x1E0234u) { return; }
    ctx->pc = 0x1E0234u;
    // 0x1e0234: 0x0
    ctx->pc = 0x1e0234u;
    // NOP
label_1e0238:
    // 0x1e0238: 0x26310001
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e023c:
    // 0x1e023c: 0x2a220016
    ctx->pc = 0x1e023cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 22));
    // 0x1e0240: 0x1440ffdd
    ctx->pc = 0x1E0240u;
    {
        const bool branch_taken_0x1e0240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0244u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0240) {
            ctx->pc = 0x1E01B8u;
            goto label_1e01b8;
        }
    }
    ctx->pc = 0x1E0248u;
    // 0x1e0248: 0x4bff6b7e
    ctx->pc = 0x1e0248u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e024c: 0x4bfe6b7e
    ctx->pc = 0x1e024cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0250: 0x4bfd6b7e
    ctx->pc = 0x1e0250u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0254: 0x4bfc6b7e
    ctx->pc = 0x1e0254u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0258: 0x4bede37d
    ctx->pc = 0x1e0258u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e025c: 0x4bedeb7d
    ctx->pc = 0x1e025cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0260: 0x4bedf37d
    ctx->pc = 0x1e0260u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0264: 0x4bedfb7d
    ctx->pc = 0x1e0264u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0268: 0x70008e28
    ctx->pc = 0x1e0268u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e026c:
    // 0x1e026c: 0xc06c0fb
    ctx->pc = 0x1E026Cu;
    SET_GPR_U32(ctx, 31, 0x1E0274u);
    ctx->pc = 0x1E0270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0274u; }
        else if (ctx->pc != 0x1E0274u) { ctx->pc = 0x1E0274u; }
    }
    if (ctx->pc != 0x1E0274u) { return; }
    ctx->pc = 0x1E0274u;
    // 0x1e0274: 0x24120016
    ctx->pc = 0x1e0274u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 22));
    // 0x1e0278: 0x10000007
    ctx->pc = 0x1E0278u;
    {
        const bool branch_taken_0x1e0278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E027Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 5280));
        if (branch_taken_0x1e0278) {
            ctx->pc = 0x1E0298u;
            goto label_1e0298;
        }
    }
    ctx->pc = 0x1E0280u;
label_1e0280:
    // 0x1e0280: 0x8e020054
    ctx->pc = 0x1e0280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0284: 0xc60c0024
    ctx->pc = 0x1e0284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0288: 0xc07a42c
    ctx->pc = 0x1E0288u;
    SET_GPR_U32(ctx, 31, 0x1E0290u);
    ctx->pc = 0x1E028Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0290u; }
        else if (ctx->pc != 0x1E0290u) { ctx->pc = 0x1E0290u; }
    }
    if (ctx->pc != 0x1E0290u) { return; }
    ctx->pc = 0x1E0290u;
    // 0x1e0290: 0x267300f0
    ctx->pc = 0x1e0290u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 240));
    // 0x1e0294: 0x26520001
    ctx->pc = 0x1e0294u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1e0298:
    // 0x1e0298: 0x8e020000
    ctx->pc = 0x1e0298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e029c: 0x242102a
    ctx->pc = 0x1e029cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1e02a0: 0x1440fff7
    ctx->pc = 0x1E02A0u;
    {
        const bool branch_taken_0x1e02a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e02a0) {
            ctx->pc = 0x1E0280u;
            goto label_1e0280;
        }
    }
    ctx->pc = 0x1E02A8u;
    // 0x1e02a8: 0x26310001
    ctx->pc = 0x1e02a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e02ac: 0x2a220004
    ctx->pc = 0x1e02acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x1e02b0: 0x1440ffee
    ctx->pc = 0x1E02B0u;
    {
        const bool branch_taken_0x1e02b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e02b0) {
            ctx->pc = 0x1E026Cu;
            goto label_1e026c;
        }
    }
    ctx->pc = 0x1E02B8u;
    // 0x1e02b8: 0x4bff6b7e
    ctx->pc = 0x1e02b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e02bc: 0x4bfe6b7e
    ctx->pc = 0x1e02bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e02c0: 0x4bfd6b7e
    ctx->pc = 0x1e02c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e02c4: 0x4bfc6b7e
    ctx->pc = 0x1e02c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e02c8: 0x4bede37d
    ctx->pc = 0x1e02c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e02cc: 0x4bedeb7d
    ctx->pc = 0x1e02ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e02d0: 0x4bedf37d
    ctx->pc = 0x1e02d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e02d4: 0x4bedfb7d
    ctx->pc = 0x1e02d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e02d8: 0xc06c0fb
    ctx->pc = 0x1E02D8u;
    SET_GPR_U32(ctx, 31, 0x1E02E0u);
    ctx->pc = 0x1E02DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3276));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02E0u; }
        else if (ctx->pc != 0x1E02E0u) { ctx->pc = 0x1E02E0u; }
    }
    if (ctx->pc != 0x1E02E0u) { return; }
    ctx->pc = 0x1E02E0u;
    // 0x1e02e0: 0x70008e28
    ctx->pc = 0x1e02e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e02e4: 0x70009628
    ctx->pc = 0x1e02e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e02e8:
    // 0x1e02e8: 0x4bede37d
    ctx->pc = 0x1e02e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e02ec: 0x4bedeb7d
    ctx->pc = 0x1e02ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e02f0: 0x4bedf37d
    ctx->pc = 0x1e02f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e02f4: 0x4bedfb7d
    ctx->pc = 0x1e02f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e02f8: 0x3c023f66
    ctx->pc = 0x1e02f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x1e02fc: 0x34426666
    ctx->pc = 0x1e02fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1e0300: 0x44826000
    ctx->pc = 0x1e0300u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e0304: 0x0
    ctx->pc = 0x1e0304u;
    // NOP
    // 0x1e0308: 0x46006346
    ctx->pc = 0x1e0308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e030c: 0xc06c1b3
    ctx->pc = 0x1E030Cu;
    SET_GPR_U32(ctx, 31, 0x1E0314u);
    ctx->pc = 0x1E0310u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0314u; }
        else if (ctx->pc != 0x1E0314u) { ctx->pc = 0x1E0314u; }
    }
    if (ctx->pc != 0x1E0314u) { return; }
    ctx->pc = 0x1E0314u;
    // 0x1e0314: 0x3c023f66
    ctx->pc = 0x1e0314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x1e0318: 0x34426666
    ctx->pc = 0x1e0318u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x1e031c: 0x44826000
    ctx->pc = 0x1e031cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1e0320: 0xc06b218
    ctx->pc = 0x1E0320u;
    SET_GPR_U32(ctx, 31, 0x1E0328u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0328u; }
        else if (ctx->pc != 0x1E0328u) { ctx->pc = 0x1E0328u; }
    }
    if (ctx->pc != 0x1E0328u) { return; }
    ctx->pc = 0x1E0328u;
    // 0x1e0328: 0x3c023f80
    ctx->pc = 0x1e0328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e032c: 0x44826800
    ctx->pc = 0x1e032cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0330: 0xc60c0024
    ctx->pc = 0x1e0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0334: 0x8e020054
    ctx->pc = 0x1e0334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0338: 0xc079f30
    ctx->pc = 0x1E0338u;
    SET_GPR_U32(ctx, 31, 0x1E0340u);
    ctx->pc = 0x1E033Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0340u; }
        else if (ctx->pc != 0x1E0340u) { ctx->pc = 0x1E0340u; }
    }
    if (ctx->pc != 0x1E0340u) { return; }
    ctx->pc = 0x1E0340u;
    // 0x1e0340: 0x4bff6b7e
    ctx->pc = 0x1e0340u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0344: 0x4bfe6b7e
    ctx->pc = 0x1e0344u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0348: 0x4bfd6b7e
    ctx->pc = 0x1e0348u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e034c: 0x4bfc6b7e
    ctx->pc = 0x1e034cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0350: 0x26310001
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e0354: 0x2a23000a
    ctx->pc = 0x1e0354u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 10));
    // 0x1e0358: 0x1460ffe3
    ctx->pc = 0x1E0358u;
    {
        const bool branch_taken_0x1e0358 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E035Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0358) {
            ctx->pc = 0x1E02E8u;
            goto label_1e02e8;
        }
    }
    ctx->pc = 0x1E0360u;
    // 0x1e0360: 0x4bff6b7e
    ctx->pc = 0x1e0360u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0364: 0x4bfe6b7e
    ctx->pc = 0x1e0364u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0368: 0x4bfd6b7e
    ctx->pc = 0x1e0368u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e036c: 0x4bfc6b7e
    ctx->pc = 0x1e036cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0370: 0x4bff6b7e
    ctx->pc = 0x1e0370u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0374: 0x4bfe6b7e
    ctx->pc = 0x1e0374u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0378: 0x4bfd6b7e
    ctx->pc = 0x1e0378u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e037c: 0x4bfc6b7e
    ctx->pc = 0x1e037cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1e0380:
    // 0x1e0380: 0x7bbf0040
    ctx->pc = 0x1e0380u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0384: 0x7bb30030
    ctx->pc = 0x1e0384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0388: 0x7bb20020
    ctx->pc = 0x1e0388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e038c: 0x7bb10010
    ctx->pc = 0x1e038cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0390: 0x7bb00000
    ctx->pc = 0x1e0390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0394: 0x3e00008
    ctx->pc = 0x1E0394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFF04u: goto label_1dff04;
            case 0x1DFF30u: goto label_1dff30;
            case 0x1DFF74u: goto label_1dff74;
            case 0x1DFF9Cu: goto label_1dff9c;
            case 0x1DFFB4u: goto label_1dffb4;
            case 0x1DFFB8u: goto label_1dffb8;
            case 0x1DFFD4u: goto label_1dffd4;
            case 0x1E001Cu: goto label_1e001c;
            case 0x1E0034u: goto label_1e0034;
            case 0x1E0038u: goto label_1e0038;
            case 0x1E0068u: goto label_1e0068;
            case 0x1E0104u: goto label_1e0104;
            case 0x1E0140u: goto label_1e0140;
            case 0x1E0168u: goto label_1e0168;
            case 0x1E01B8u: goto label_1e01b8;
            case 0x1E0204u: goto label_1e0204;
            case 0x1E0238u: goto label_1e0238;
            case 0x1E023Cu: goto label_1e023c;
            case 0x1E026Cu: goto label_1e026c;
            case 0x1E0280u: goto label_1e0280;
            case 0x1E0298u: goto label_1e0298;
            case 0x1E02E8u: goto label_1e02e8;
            case 0x1E0380u: goto label_1e0380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E039Cu;
}
