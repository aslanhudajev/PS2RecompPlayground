#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getObjectPathS__15CamPathMgrClassFifP4ANPO
// Address: 0x1cc980 - 0x1ccdf8
void getObjectPathS__15CamPathMgrClassFifP4ANPO_0x1cc980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getObjectPathS__15CamPathMgrClassFifP4ANPO");


    ctx->pc = 0x1cc980u;

    // 0x1cc980: 0x27bdfef0
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1cc984: 0x7fbf0060
    ctx->pc = 0x1cc984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1cc988: 0x7fb40050
    ctx->pc = 0x1cc988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cc98c: 0x7fb30040
    ctx->pc = 0x1cc98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cc990: 0x7fb20030
    ctx->pc = 0x1cc990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cc994: 0x7fb10020
    ctx->pc = 0x1cc994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc998: 0x7fb00010
    ctx->pc = 0x1cc998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cc99c: 0xe7b60008
    ctx->pc = 0x1cc99cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cc9a0: 0xe7b50004
    ctx->pc = 0x1cc9a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cc9a4: 0x51040
    ctx->pc = 0x1cc9a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cc9a8: 0x3c0101fc
    ctx->pc = 0x1cc9a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cc9ac: 0x410821
    ctx->pc = 0x1cc9acu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cc9b0: 0x7080a628
    ctx->pc = 0x1cc9b0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cc9b4: 0x3c020030
    ctx->pc = 0x1cc9b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc9b8: 0x24446588
    ctx->pc = 0x1cc9b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25992));
    // 0x1cc9bc: 0x3c020030
    ctx->pc = 0x1cc9bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc9c0: 0xe7b40000
    ctx->pc = 0x1cc9c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cc9c4: 0x70c09e28
    ctx->pc = 0x1cc9c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cc9c8: 0x518c0
    ctx->pc = 0x1cc9c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cc9cc: 0x244266b4
    ctx->pc = 0x1cc9ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26292));
    // 0x1cc9d0: 0x431021
    ctx->pc = 0x1cc9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc9d4: 0x842605e0
    ctx->pc = 0x1cc9d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1504)));
    // 0x1cc9d8: 0x8c510000
    ctx->pc = 0x1cc9d8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc9dc: 0x70a09628
    ctx->pc = 0x1cc9dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cc9e0: 0x46006586
    ctx->pc = 0x1cc9e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1cc9e4: 0x61900
    ctx->pc = 0x1cc9e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cc9e8: 0x831821
    ctx->pc = 0x1cc9e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc9ec: 0x8e220000
    ctx->pc = 0x1cc9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc9f0: 0x8c700000
    ctx->pc = 0x1cc9f0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc9f4: 0x21080
    ctx->pc = 0x1cc9f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc9f8: 0xc073158
    ctx->pc = 0x1CC9F8u;
    SET_GPR_U32(ctx, 31, 0x1CCA00u);
    ctx->pc = 0x1CC9FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA00u; }
        else if (ctx->pc != 0x1CCA00u) { ctx->pc = 0x1CCA00u; }
    }
    if (ctx->pc != 0x1CCA00u) { return; }
    ctx->pc = 0x1CCA00u;
    // 0x1cca00: 0xe6600000
    ctx->pc = 0x1cca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1cca04: 0x8e220004
    ctx->pc = 0x1cca04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cca08: 0x4600b306
    ctx->pc = 0x1cca08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1cca0c: 0x21080
    ctx->pc = 0x1cca0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cca10: 0xc073158
    ctx->pc = 0x1CCA10u;
    SET_GPR_U32(ctx, 31, 0x1CCA18u);
    ctx->pc = 0x1CCA14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA18u; }
        else if (ctx->pc != 0x1CCA18u) { ctx->pc = 0x1CCA18u; }
    }
    if (ctx->pc != 0x1CCA18u) { return; }
    ctx->pc = 0x1CCA18u;
    // 0x1cca18: 0xe6600004
    ctx->pc = 0x1cca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1cca1c: 0x8e220008
    ctx->pc = 0x1cca1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cca20: 0x4600b306
    ctx->pc = 0x1cca20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1cca24: 0x21080
    ctx->pc = 0x1cca24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cca28: 0xc073158
    ctx->pc = 0x1CCA28u;
    SET_GPR_U32(ctx, 31, 0x1CCA30u);
    ctx->pc = 0x1CCA2Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA30u; }
        else if (ctx->pc != 0x1CCA30u) { ctx->pc = 0x1CCA30u; }
    }
    if (ctx->pc != 0x1CCA30u) { return; }
    ctx->pc = 0x1CCA30u;
    // 0x1cca30: 0xe6600008
    ctx->pc = 0x1cca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1cca34: 0x72802628
    ctx->pc = 0x1cca34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cca38: 0xc073380
    ctx->pc = 0x1CCA38u;
    SET_GPR_U32(ctx, 31, 0x1CCA40u);
    ctx->pc = 0x1CCA3Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CCE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        getEndFrame__15CamPathMgrClassFi_0x1cce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA40u; }
        else if (ctx->pc != 0x1CCA40u) { ctx->pc = 0x1CCA40u; }
    }
    if (ctx->pc != 0x1CCA40u) { return; }
    ctx->pc = 0x1CCA40u;
    // 0x1cca40: 0x44820000
    ctx->pc = 0x1cca40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cca44: 0x3c023f80
    ctx->pc = 0x1cca44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1cca48: 0x44820800
    ctx->pc = 0x1cca48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1cca4c: 0x0
    ctx->pc = 0x1cca4cu;
    // NOP
    // 0x1cca50: 0x46800020
    ctx->pc = 0x1cca50u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cca54: 0x46160d40
    ctx->pc = 0x1cca54u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x1cca58: 0x4600a836
    ctx->pc = 0x1cca58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cca5c: 0x0
    ctx->pc = 0x1cca5cu;
    // NOP
    // 0x1cca60: 0x4500000e
    ctx->pc = 0x1CCA60u;
    {
        const bool branch_taken_0x1cca60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCA64u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cca60) {
            ctx->pc = 0x1CCA9Cu;
            goto label_1cca9c;
        }
    }
    ctx->pc = 0x1CCA68u;
    // 0x1cca68: 0xc07339c
    ctx->pc = 0x1CCA68u;
    SET_GPR_U32(ctx, 31, 0x1CCA70u);
    ctx->pc = 0x1CCA6Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CCE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        getStartFrame__15CamPathMgrClassFi_0x1cce70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA70u; }
        else if (ctx->pc != 0x1CCA70u) { ctx->pc = 0x1CCA70u; }
    }
    if (ctx->pc != 0x1CCA70u) { return; }
    ctx->pc = 0x1CCA70u;
    // 0x1cca70: 0x44820000
    ctx->pc = 0x1cca70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cca74: 0x0
    ctx->pc = 0x1cca74u;
    // NOP
    // 0x1cca78: 0x46800060
    ctx->pc = 0x1cca78u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cca7c: 0x3c023f80
    ctx->pc = 0x1cca7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1cca80: 0x44820000
    ctx->pc = 0x1cca80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cca84: 0x0
    ctx->pc = 0x1cca84u;
    // NOP
    // 0x1cca88: 0x4600b001
    ctx->pc = 0x1cca88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1cca8c: 0x46010034
    ctx->pc = 0x1cca8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cca90: 0x0
    ctx->pc = 0x1cca90u;
    // NOP
    // 0x1cca94: 0x4500001a
    ctx->pc = 0x1CCA94u;
    {
        const bool branch_taken_0x1cca94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cca94) {
            ctx->pc = 0x1CCB00u;
            goto label_1ccb00;
        }
    }
    ctx->pc = 0x1CCA9Cu;
label_1cca9c:
    // 0x1cca9c: 0x8e22000c
    ctx->pc = 0x1cca9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ccaa0: 0x4600b306
    ctx->pc = 0x1ccaa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccaa4: 0x21080
    ctx->pc = 0x1ccaa4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccaa8: 0xc073158
    ctx->pc = 0x1CCAA8u;
    SET_GPR_U32(ctx, 31, 0x1CCAB0u);
    ctx->pc = 0x1CCAACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAB0u; }
        else if (ctx->pc != 0x1CCAB0u) { ctx->pc = 0x1CCAB0u; }
    }
    if (ctx->pc != 0x1CCAB0u) { return; }
    ctx->pc = 0x1CCAB0u;
    // 0x1ccab0: 0x46000024
    ctx->pc = 0x1ccab0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccab4: 0x44020000
    ctx->pc = 0x1ccab4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccab8: 0x4600b306
    ctx->pc = 0x1ccab8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccabc: 0xae62000c
    ctx->pc = 0x1ccabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1ccac0: 0x8e220010
    ctx->pc = 0x1ccac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ccac4: 0x21080
    ctx->pc = 0x1ccac4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccac8: 0xc073158
    ctx->pc = 0x1CCAC8u;
    SET_GPR_U32(ctx, 31, 0x1CCAD0u);
    ctx->pc = 0x1CCACCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAD0u; }
        else if (ctx->pc != 0x1CCAD0u) { ctx->pc = 0x1CCAD0u; }
    }
    if (ctx->pc != 0x1CCAD0u) { return; }
    ctx->pc = 0x1CCAD0u;
    // 0x1ccad0: 0x46000024
    ctx->pc = 0x1ccad0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccad4: 0x44020000
    ctx->pc = 0x1ccad4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccad8: 0x4600b306
    ctx->pc = 0x1ccad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccadc: 0xae620010
    ctx->pc = 0x1ccadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1ccae0: 0x8e220014
    ctx->pc = 0x1ccae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ccae4: 0x21080
    ctx->pc = 0x1ccae4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccae8: 0xc073158
    ctx->pc = 0x1CCAE8u;
    SET_GPR_U32(ctx, 31, 0x1CCAF0u);
    ctx->pc = 0x1CCAECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAF0u; }
        else if (ctx->pc != 0x1CCAF0u) { ctx->pc = 0x1CCAF0u; }
    }
    if (ctx->pc != 0x1CCAF0u) { return; }
    ctx->pc = 0x1CCAF0u;
    // 0x1ccaf0: 0x46000024
    ctx->pc = 0x1ccaf0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccaf4: 0x44030000
    ctx->pc = 0x1ccaf4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1ccaf8: 0x100000b4
    ctx->pc = 0x1CCAF8u;
    {
        const bool branch_taken_0x1ccaf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCAFCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x1ccaf8) {
            ctx->pc = 0x1CCDCCu;
            goto label_1ccdcc;
        }
    }
    ctx->pc = 0x1CCB00u;
label_1ccb00:
    // 0x1ccb00: 0x4bede37d
    ctx->pc = 0x1ccb00u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ccb04: 0x4bedeb7d
    ctx->pc = 0x1ccb04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ccb08: 0x4bedf37d
    ctx->pc = 0x1ccb08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ccb0c: 0x4bedfb7d
    ctx->pc = 0x1ccb0cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ccb10: 0xc0531aa
    ctx->pc = 0x1CCB10u;
    SET_GPR_U32(ctx, 31, 0x1CCB18u);
    ctx->pc = 0x1CCB14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB18u; }
        else if (ctx->pc != 0x1CCB18u) { ctx->pc = 0x1CCB18u; }
    }
    if (ctx->pc != 0x1CCB18u) { return; }
    ctx->pc = 0x1CCB18u;
    // 0x1ccb18: 0xc0540b0
    ctx->pc = 0x1CCB18u;
    SET_GPR_U32(ctx, 31, 0x1CCB20u);
    ctx->pc = 0x1CCB1Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB20u; }
        else if (ctx->pc != 0x1CCB20u) { ctx->pc = 0x1CCB20u; }
    }
    if (ctx->pc != 0x1CCB20u) { return; }
    ctx->pc = 0x1CCB20u;
    // 0x1ccb20: 0x70409628
    ctx->pc = 0x1ccb20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccb24: 0xc0531aa
    ctx->pc = 0x1CCB24u;
    SET_GPR_U32(ctx, 31, 0x1CCB2Cu);
    ctx->pc = 0x1CCB28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB2Cu; }
        else if (ctx->pc != 0x1CCB2Cu) { ctx->pc = 0x1CCB2Cu; }
    }
    if (ctx->pc != 0x1CCB2Cu) { return; }
    ctx->pc = 0x1CCB2Cu;
    // 0x1ccb2c: 0x72402e28
    ctx->pc = 0x1ccb2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1ccb30: 0xc052c9e
    ctx->pc = 0x1CCB30u;
    SET_GPR_U32(ctx, 31, 0x1CCB38u);
    ctx->pc = 0x1CCB34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB38u; }
        else if (ctx->pc != 0x1CCB38u) { ctx->pc = 0x1CCB38u; }
    }
    if (ctx->pc != 0x1CCB38u) { return; }
    ctx->pc = 0x1CCB38u;
    // 0x1ccb38: 0xc052eac
    ctx->pc = 0x1CCB38u;
    SET_GPR_U32(ctx, 31, 0x1CCB40u);
    ctx->pc = 0x1CCB3Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB40u; }
        else if (ctx->pc != 0x1CCB40u) { ctx->pc = 0x1CCB40u; }
    }
    if (ctx->pc != 0x1CCB40u) { return; }
    ctx->pc = 0x1CCB40u;
    // 0x1ccb40: 0x46000506
    ctx->pc = 0x1ccb40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccb44: 0xc0531aa
    ctx->pc = 0x1CCB44u;
    SET_GPR_U32(ctx, 31, 0x1CCB4Cu);
    ctx->pc = 0x1CCB48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB4Cu; }
        else if (ctx->pc != 0x1CCB4Cu) { ctx->pc = 0x1CCB4Cu; }
    }
    if (ctx->pc != 0x1CCB4Cu) { return; }
    ctx->pc = 0x1CCB4Cu;
    // 0x1ccb4c: 0xc0540b0
    ctx->pc = 0x1CCB4Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB54u);
    ctx->pc = 0x1CCB50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB54u; }
        else if (ctx->pc != 0x1CCB54u) { ctx->pc = 0x1CCB54u; }
    }
    if (ctx->pc != 0x1CCB54u) { return; }
    ctx->pc = 0x1CCB54u;
    // 0x1ccb54: 0xc052eac
    ctx->pc = 0x1CCB54u;
    SET_GPR_U32(ctx, 31, 0x1CCB5Cu);
    ctx->pc = 0x1CCB58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB5Cu; }
        else if (ctx->pc != 0x1CCB5Cu) { ctx->pc = 0x1CCB5Cu; }
    }
    if (ctx->pc != 0x1CCB5Cu) { return; }
    ctx->pc = 0x1CCB5Cu;
    // 0x1ccb5c: 0x8e22000c
    ctx->pc = 0x1ccb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ccb60: 0x46000306
    ctx->pc = 0x1ccb60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccb64: 0x21080
    ctx->pc = 0x1ccb64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccb68: 0xc073158
    ctx->pc = 0x1CCB68u;
    SET_GPR_U32(ctx, 31, 0x1CCB70u);
    ctx->pc = 0x1CCB6Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB70u; }
        else if (ctx->pc != 0x1CCB70u) { ctx->pc = 0x1CCB70u; }
    }
    if (ctx->pc != 0x1CCB70u) { return; }
    ctx->pc = 0x1CCB70u;
    // 0x1ccb70: 0x46000024
    ctx->pc = 0x1ccb70u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccb74: 0x44020000
    ctx->pc = 0x1ccb74u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccb78: 0x4600ab06
    ctx->pc = 0x1ccb78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ccb7c: 0xc0531aa
    ctx->pc = 0x1CCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB84u);
    ctx->pc = 0x1CCB80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB84u; }
        else if (ctx->pc != 0x1CCB84u) { ctx->pc = 0x1CCB84u; }
    }
    if (ctx->pc != 0x1CCB84u) { return; }
    ctx->pc = 0x1CCB84u;
    // 0x1ccb84: 0xc0540b0
    ctx->pc = 0x1CCB84u;
    SET_GPR_U32(ctx, 31, 0x1CCB8Cu);
    ctx->pc = 0x1CCB88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB8Cu; }
        else if (ctx->pc != 0x1CCB8Cu) { ctx->pc = 0x1CCB8Cu; }
    }
    if (ctx->pc != 0x1CCB8Cu) { return; }
    ctx->pc = 0x1CCB8Cu;
    // 0x1ccb8c: 0xc052eac
    ctx->pc = 0x1CCB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB94u);
    ctx->pc = 0x1CCB90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB94u; }
        else if (ctx->pc != 0x1CCB94u) { ctx->pc = 0x1CCB94u; }
    }
    if (ctx->pc != 0x1CCB94u) { return; }
    ctx->pc = 0x1CCB94u;
    // 0x1ccb94: 0x8e22000c
    ctx->pc = 0x1ccb94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ccb98: 0x46000306
    ctx->pc = 0x1ccb98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccb9c: 0x21080
    ctx->pc = 0x1ccb9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccba0: 0xc073158
    ctx->pc = 0x1CCBA0u;
    SET_GPR_U32(ctx, 31, 0x1CCBA8u);
    ctx->pc = 0x1CCBA4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBA8u; }
        else if (ctx->pc != 0x1CCBA8u) { ctx->pc = 0x1CCBA8u; }
    }
    if (ctx->pc != 0x1CCBA8u) { return; }
    ctx->pc = 0x1CCBA8u;
    // 0x1ccba8: 0x46000024
    ctx->pc = 0x1ccba8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccbac: 0x44020000
    ctx->pc = 0x1ccbacu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccbb0: 0x4600b306
    ctx->pc = 0x1ccbb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccbb4: 0xc0531aa
    ctx->pc = 0x1CCBB4u;
    SET_GPR_U32(ctx, 31, 0x1CCBBCu);
    ctx->pc = 0x1CCBB8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBBCu; }
        else if (ctx->pc != 0x1CCBBCu) { ctx->pc = 0x1CCBBCu; }
    }
    if (ctx->pc != 0x1CCBBCu) { return; }
    ctx->pc = 0x1CCBBCu;
    // 0x1ccbbc: 0xc0540b0
    ctx->pc = 0x1CCBBCu;
    SET_GPR_U32(ctx, 31, 0x1CCBC4u);
    ctx->pc = 0x1CCBC0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBC4u; }
        else if (ctx->pc != 0x1CCBC4u) { ctx->pc = 0x1CCBC4u; }
    }
    if (ctx->pc != 0x1CCBC4u) { return; }
    ctx->pc = 0x1CCBC4u;
    // 0x1ccbc4: 0xc052eac
    ctx->pc = 0x1CCBC4u;
    SET_GPR_U32(ctx, 31, 0x1CCBCCu);
    ctx->pc = 0x1CCBC8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBCCu; }
        else if (ctx->pc != 0x1CCBCCu) { ctx->pc = 0x1CCBCCu; }
    }
    if (ctx->pc != 0x1CCBCCu) { return; }
    ctx->pc = 0x1CCBCCu;
    // 0x1ccbcc: 0x8e220010
    ctx->pc = 0x1ccbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ccbd0: 0x46000306
    ctx->pc = 0x1ccbd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccbd4: 0x21080
    ctx->pc = 0x1ccbd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccbd8: 0xc073158
    ctx->pc = 0x1CCBD8u;
    SET_GPR_U32(ctx, 31, 0x1CCBE0u);
    ctx->pc = 0x1CCBDCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBE0u; }
        else if (ctx->pc != 0x1CCBE0u) { ctx->pc = 0x1CCBE0u; }
    }
    if (ctx->pc != 0x1CCBE0u) { return; }
    ctx->pc = 0x1CCBE0u;
    // 0x1ccbe0: 0x46000024
    ctx->pc = 0x1ccbe0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccbe4: 0x44020000
    ctx->pc = 0x1ccbe4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccbe8: 0x4600ab06
    ctx->pc = 0x1ccbe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ccbec: 0xc0531aa
    ctx->pc = 0x1CCBECu;
    SET_GPR_U32(ctx, 31, 0x1CCBF4u);
    ctx->pc = 0x1CCBF0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBF4u; }
        else if (ctx->pc != 0x1CCBF4u) { ctx->pc = 0x1CCBF4u; }
    }
    if (ctx->pc != 0x1CCBF4u) { return; }
    ctx->pc = 0x1CCBF4u;
    // 0x1ccbf4: 0xc0540b0
    ctx->pc = 0x1CCBF4u;
    SET_GPR_U32(ctx, 31, 0x1CCBFCu);
    ctx->pc = 0x1CCBF8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBFCu; }
        else if (ctx->pc != 0x1CCBFCu) { ctx->pc = 0x1CCBFCu; }
    }
    if (ctx->pc != 0x1CCBFCu) { return; }
    ctx->pc = 0x1CCBFCu;
    // 0x1ccbfc: 0xc052eac
    ctx->pc = 0x1CCBFCu;
    SET_GPR_U32(ctx, 31, 0x1CCC04u);
    ctx->pc = 0x1CCC00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC04u; }
        else if (ctx->pc != 0x1CCC04u) { ctx->pc = 0x1CCC04u; }
    }
    if (ctx->pc != 0x1CCC04u) { return; }
    ctx->pc = 0x1CCC04u;
    // 0x1ccc04: 0x8e220010
    ctx->pc = 0x1ccc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ccc08: 0x46000306
    ctx->pc = 0x1ccc08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccc0c: 0x21080
    ctx->pc = 0x1ccc0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccc10: 0xc073158
    ctx->pc = 0x1CCC10u;
    SET_GPR_U32(ctx, 31, 0x1CCC18u);
    ctx->pc = 0x1CCC14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC18u; }
        else if (ctx->pc != 0x1CCC18u) { ctx->pc = 0x1CCC18u; }
    }
    if (ctx->pc != 0x1CCC18u) { return; }
    ctx->pc = 0x1CCC18u;
    // 0x1ccc18: 0x46000024
    ctx->pc = 0x1ccc18u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccc1c: 0x44020000
    ctx->pc = 0x1ccc1cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccc20: 0x4600b306
    ctx->pc = 0x1ccc20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccc24: 0xc0531aa
    ctx->pc = 0x1CCC24u;
    SET_GPR_U32(ctx, 31, 0x1CCC2Cu);
    ctx->pc = 0x1CCC28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC2Cu; }
        else if (ctx->pc != 0x1CCC2Cu) { ctx->pc = 0x1CCC2Cu; }
    }
    if (ctx->pc != 0x1CCC2Cu) { return; }
    ctx->pc = 0x1CCC2Cu;
    // 0x1ccc2c: 0xc0540b0
    ctx->pc = 0x1CCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC34u);
    ctx->pc = 0x1CCC30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC34u; }
        else if (ctx->pc != 0x1CCC34u) { ctx->pc = 0x1CCC34u; }
    }
    if (ctx->pc != 0x1CCC34u) { return; }
    ctx->pc = 0x1CCC34u;
    // 0x1ccc34: 0xc052eac
    ctx->pc = 0x1CCC34u;
    SET_GPR_U32(ctx, 31, 0x1CCC3Cu);
    ctx->pc = 0x1CCC38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC3Cu; }
        else if (ctx->pc != 0x1CCC3Cu) { ctx->pc = 0x1CCC3Cu; }
    }
    if (ctx->pc != 0x1CCC3Cu) { return; }
    ctx->pc = 0x1CCC3Cu;
    // 0x1ccc3c: 0x8e220014
    ctx->pc = 0x1ccc3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ccc40: 0x46000306
    ctx->pc = 0x1ccc40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccc44: 0x21080
    ctx->pc = 0x1ccc44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccc48: 0xc073158
    ctx->pc = 0x1CCC48u;
    SET_GPR_U32(ctx, 31, 0x1CCC50u);
    ctx->pc = 0x1CCC4Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC50u; }
        else if (ctx->pc != 0x1CCC50u) { ctx->pc = 0x1CCC50u; }
    }
    if (ctx->pc != 0x1CCC50u) { return; }
    ctx->pc = 0x1CCC50u;
    // 0x1ccc50: 0x46000024
    ctx->pc = 0x1ccc50u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccc54: 0x44020000
    ctx->pc = 0x1ccc54u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccc58: 0x4600ab06
    ctx->pc = 0x1ccc58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ccc5c: 0xc0531aa
    ctx->pc = 0x1CCC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC64u);
    ctx->pc = 0x1CCC60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC64u; }
        else if (ctx->pc != 0x1CCC64u) { ctx->pc = 0x1CCC64u; }
    }
    if (ctx->pc != 0x1CCC64u) { return; }
    ctx->pc = 0x1CCC64u;
    // 0x1ccc64: 0xc0540b0
    ctx->pc = 0x1CCC64u;
    SET_GPR_U32(ctx, 31, 0x1CCC6Cu);
    ctx->pc = 0x1CCC68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC6Cu; }
        else if (ctx->pc != 0x1CCC6Cu) { ctx->pc = 0x1CCC6Cu; }
    }
    if (ctx->pc != 0x1CCC6Cu) { return; }
    ctx->pc = 0x1CCC6Cu;
    // 0x1ccc6c: 0xc052eac
    ctx->pc = 0x1CCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC74u);
    ctx->pc = 0x1CCC70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC74u; }
        else if (ctx->pc != 0x1CCC74u) { ctx->pc = 0x1CCC74u; }
    }
    if (ctx->pc != 0x1CCC74u) { return; }
    ctx->pc = 0x1CCC74u;
    // 0x1ccc74: 0x8e220014
    ctx->pc = 0x1ccc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ccc78: 0x46000306
    ctx->pc = 0x1ccc78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ccc7c: 0x21080
    ctx->pc = 0x1ccc7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ccc80: 0xc073158
    ctx->pc = 0x1CCC80u;
    SET_GPR_U32(ctx, 31, 0x1CCC88u);
    ctx->pc = 0x1CCC84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC88u; }
        else if (ctx->pc != 0x1CCC88u) { ctx->pc = 0x1CCC88u; }
    }
    if (ctx->pc != 0x1CCC88u) { return; }
    ctx->pc = 0x1CCC88u;
    // 0x1ccc88: 0x46000024
    ctx->pc = 0x1ccc88u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccc8c: 0x27b20090
    ctx->pc = 0x1ccc8cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ccc90: 0x7000a628
    ctx->pc = 0x1ccc90u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccc94: 0x27b00070
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ccc98: 0x72408e28
    ctx->pc = 0x1ccc98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1ccc9c: 0x44020000
    ctx->pc = 0x1ccc9cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccca0: 0x0
    ctx->pc = 0x1ccca0u;
    // NOP
    // 0x1ccca4: 0xafa20084
    ctx->pc = 0x1ccca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1ccca8:
    // 0x1ccca8: 0xc06c20d
    ctx->pc = 0x1CCCA8u;
    SET_GPR_U32(ctx, 31, 0x1CCCB0u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB0u; }
        else if (ctx->pc != 0x1CCCB0u) { ctx->pc = 0x1CCCB0u; }
    }
    if (ctx->pc != 0x1CCCB0u) { return; }
    ctx->pc = 0x1CCCB0u;
    // 0x1cccb0: 0xc06c157
    ctx->pc = 0x1CCCB0u;
    SET_GPR_U32(ctx, 31, 0x1CCCB8u);
    ctx->pc = 0x1CCCB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB8u; }
        else if (ctx->pc != 0x1CCCB8u) { ctx->pc = 0x1CCCB8u; }
    }
    if (ctx->pc != 0x1CCCB8u) { return; }
    ctx->pc = 0x1CCCB8u;
    // 0x1cccb8: 0xc06c0fb
    ctx->pc = 0x1CCCB8u;
    SET_GPR_U32(ctx, 31, 0x1CCCC0u);
    ctx->pc = 0x1CCCBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCC0u; }
        else if (ctx->pc != 0x1CCCC0u) { ctx->pc = 0x1CCCC0u; }
    }
    if (ctx->pc != 0x1CCCC0u) { return; }
    ctx->pc = 0x1CCCC0u;
    // 0x1cccc0: 0xc06c09f
    ctx->pc = 0x1CCCC0u;
    SET_GPR_U32(ctx, 31, 0x1CCCC8u);
    ctx->pc = 0x1CCCC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCC8u; }
        else if (ctx->pc != 0x1CCCC8u) { ctx->pc = 0x1CCCC8u; }
    }
    if (ctx->pc != 0x1CCCC8u) { return; }
    ctx->pc = 0x1CCCC8u;
    // 0x1cccc8: 0xc06bf55
    ctx->pc = 0x1CCCC8u;
    SET_GPR_U32(ctx, 31, 0x1CCCD0u);
    ctx->pc = 0x1CCCCCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCD0u; }
        else if (ctx->pc != 0x1CCCD0u) { ctx->pc = 0x1CCCD0u; }
    }
    if (ctx->pc != 0x1CCCD0u) { return; }
    ctx->pc = 0x1CCCD0u;
    // 0x1cccd0: 0x26940001
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cccd4: 0x2a820002
    ctx->pc = 0x1cccd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 2));
    // 0x1cccd8: 0x2610000c
    ctx->pc = 0x1cccd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cccdc: 0x1440fff2
    ctx->pc = 0x1CCCDCu;
    {
        const bool branch_taken_0x1cccdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCCE0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
        if (branch_taken_0x1cccdc) {
            ctx->pc = 0x1CCCA8u;
            goto label_1ccca8;
        }
    }
    ctx->pc = 0x1CCCE4u;
    // 0x1ccce4: 0x3c023f80
    ctx->pc = 0x1ccce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ccce8: 0x44820000
    ctx->pc = 0x1ccce8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cccec: 0x70001e28
    ctx->pc = 0x1cccecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cccf0: 0x46140081
    ctx->pc = 0x1cccf0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1cccf4:
    // 0x1cccf4: 0xc6410000
    ctx->pc = 0x1cccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cccf8: 0xc6400040
    ctx->pc = 0x1cccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cccfc: 0x24630008
    ctx->pc = 0x1cccfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ccd00: 0x28620010
    ctx->pc = 0x1ccd00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x1ccd04: 0x4601101a
    ctx->pc = 0x1ccd04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd08: 0x4614001c
    ctx->pc = 0x1ccd08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd0c: 0xe6400000
    ctx->pc = 0x1ccd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ccd10: 0xc6410004
    ctx->pc = 0x1ccd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd14: 0xc6400044
    ctx->pc = 0x1ccd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd18: 0x4601101a
    ctx->pc = 0x1ccd18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd1c: 0x4614001c
    ctx->pc = 0x1ccd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd20: 0xe6400004
    ctx->pc = 0x1ccd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1ccd24: 0xc6410008
    ctx->pc = 0x1ccd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd28: 0xc6400048
    ctx->pc = 0x1ccd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd2c: 0x4601101a
    ctx->pc = 0x1ccd2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd30: 0x4614001c
    ctx->pc = 0x1ccd30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd34: 0xe6400008
    ctx->pc = 0x1ccd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1ccd38: 0xc641000c
    ctx->pc = 0x1ccd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd3c: 0xc640004c
    ctx->pc = 0x1ccd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd40: 0x4601101a
    ctx->pc = 0x1ccd40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd44: 0x4614001c
    ctx->pc = 0x1ccd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd48: 0xe640000c
    ctx->pc = 0x1ccd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ccd4c: 0xc6410010
    ctx->pc = 0x1ccd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd50: 0xc6400050
    ctx->pc = 0x1ccd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd54: 0x4601101a
    ctx->pc = 0x1ccd54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd58: 0x4614001c
    ctx->pc = 0x1ccd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd5c: 0xe6400010
    ctx->pc = 0x1ccd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1ccd60: 0xc6410014
    ctx->pc = 0x1ccd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd64: 0xc6400054
    ctx->pc = 0x1ccd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd68: 0x4601101a
    ctx->pc = 0x1ccd68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd6c: 0x4614001c
    ctx->pc = 0x1ccd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd70: 0xe6400014
    ctx->pc = 0x1ccd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1ccd74: 0xc6410018
    ctx->pc = 0x1ccd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd78: 0xc6400058
    ctx->pc = 0x1ccd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd7c: 0x4601101a
    ctx->pc = 0x1ccd7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd80: 0x4614001c
    ctx->pc = 0x1ccd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd84: 0xe6400018
    ctx->pc = 0x1ccd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1ccd88: 0xc641001c
    ctx->pc = 0x1ccd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccd8c: 0xc640005c
    ctx->pc = 0x1ccd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd90: 0x4601101a
    ctx->pc = 0x1ccd90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ccd94: 0x4614001c
    ctx->pc = 0x1ccd94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1ccd98: 0xe640001c
    ctx->pc = 0x1ccd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1ccd9c: 0x1440ffd5
    ctx->pc = 0x1CCD9Cu;
    {
        const bool branch_taken_0x1ccd9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDA0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x1ccd9c) {
            ctx->pc = 0x1CCCF4u;
            goto label_1cccf4;
        }
    }
    ctx->pc = 0x1CCDA4u;
    // 0x1ccda4: 0xc06c038
    ctx->pc = 0x1CCDA4u;
    SET_GPR_U32(ctx, 31, 0x1CCDACu);
    ctx->pc = 0x1CCDA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDACu; }
        else if (ctx->pc != 0x1CCDACu) { ctx->pc = 0x1CCDACu; }
    }
    if (ctx->pc != 0x1CCDACu) { return; }
    ctx->pc = 0x1CCDACu;
    // 0x1ccdac: 0x2664000c
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 12));
    // 0x1ccdb0: 0x26650010
    ctx->pc = 0x1ccdb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 16));
    // 0x1ccdb4: 0xc0724f8
    ctx->pc = 0x1CCDB4u;
    SET_GPR_U32(ctx, 31, 0x1CCDBCu);
    ctx->pc = 0x1CCDB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 20));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDBCu; }
        else if (ctx->pc != 0x1CCDBCu) { ctx->pc = 0x1CCDBCu; }
    }
    if (ctx->pc != 0x1CCDBCu) { return; }
    ctx->pc = 0x1CCDBCu;
    // 0x1ccdbc: 0x4bff6b7e
    ctx->pc = 0x1ccdbcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ccdc0: 0x4bfe6b7e
    ctx->pc = 0x1ccdc0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ccdc4: 0x4bfd6b7e
    ctx->pc = 0x1ccdc4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ccdc8: 0x4bfc6b7e
    ctx->pc = 0x1ccdc8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1ccdcc:
    // 0x1ccdcc: 0x7bbf0060
    ctx->pc = 0x1ccdccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ccdd0: 0x7bb40050
    ctx->pc = 0x1ccdd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccdd4: 0x7bb30040
    ctx->pc = 0x1ccdd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ccdd8: 0x7bb20030
    ctx->pc = 0x1ccdd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ccddc: 0x7bb10020
    ctx->pc = 0x1ccddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccde0: 0x7bb00010
    ctx->pc = 0x1ccde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccde4: 0xc7b60008
    ctx->pc = 0x1ccde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ccde8: 0xc7b50004
    ctx->pc = 0x1ccde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ccdec: 0xc7b40000
    ctx->pc = 0x1ccdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccdf0: 0x3e00008
    ctx->pc = 0x1CCDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCA9Cu: goto label_1cca9c;
            case 0x1CCB00u: goto label_1ccb00;
            case 0x1CCCA8u: goto label_1ccca8;
            case 0x1CCCF4u: goto label_1cccf4;
            case 0x1CCDCCu: goto label_1ccdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCDF8u;
}
