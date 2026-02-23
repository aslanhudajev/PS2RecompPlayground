#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putHamon__9FcvEffectFv
// Address: 0x1df920 - 0x1dfac4
void putHamon__9FcvEffectFv_0x1df920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putHamon__9FcvEffectFv");


    ctx->pc = 0x1df920u;

    // 0x1df920: 0x27bdffd0
    ctx->pc = 0x1df920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df924: 0x7fbf0010
    ctx->pc = 0x1df924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1df928: 0x7fb00000
    ctx->pc = 0x1df928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df92c: 0x70808628
    ctx->pc = 0x1df92cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df930: 0xc60c0024
    ctx->pc = 0x1df930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df934: 0x260400a0
    ctx->pc = 0x1df934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    // 0x1df938: 0xc079bd4
    ctx->pc = 0x1DF938u;
    SET_GPR_U32(ctx, 31, 0x1DF940u);
    ctx->pc = 0x1DF93Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF940u; }
        else if (ctx->pc != 0x1DF940u) { ctx->pc = 0x1DF940u; }
    }
    if (ctx->pc != 0x1DF940u) { return; }
    ctx->pc = 0x1DF940u;
    // 0x1df940: 0x8e050030
    ctx->pc = 0x1df940u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1df944: 0x3c02002c
    ctx->pc = 0x1df944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1df948: 0x2446eb30
    ctx->pc = 0x1df948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961968));
    // 0x1df94c: 0x3c02002c
    ctx->pc = 0x1df94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1df950: 0x2444ee90
    ctx->pc = 0x1df950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x1df954: 0x70001e28
    ctx->pc = 0x1df954u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df958: 0x70a03e28
    ctx->pc = 0x1df958u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1df95c: 0x27a80024
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 36));
label_1df960:
    // 0x1df960: 0xc7a30020
    ctx->pc = 0x1df960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df964: 0xc4c20000
    ctx->pc = 0x1df964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df968: 0xc5010000
    ctx->pc = 0x1df968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df96c: 0xc4800000
    ctx->pc = 0x1df96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df970: 0x24630008
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1df974: 0x286200d8
    ctx->pc = 0x1df974u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 216));
    // 0x1df978: 0x4602181a
    ctx->pc = 0x1df978u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1df97c: 0x4600081c
    ctx->pc = 0x1df97cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1df980: 0xe4e00000
    ctx->pc = 0x1df980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1df984: 0xc7a30020
    ctx->pc = 0x1df984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df988: 0xc4c20004
    ctx->pc = 0x1df988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df98c: 0xc5010000
    ctx->pc = 0x1df98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df990: 0xc4800004
    ctx->pc = 0x1df990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df994: 0x4602181a
    ctx->pc = 0x1df994u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1df998: 0x4600081c
    ctx->pc = 0x1df998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1df99c: 0xe4e00004
    ctx->pc = 0x1df99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1df9a0: 0xc7a30020
    ctx->pc = 0x1df9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df9a4: 0xc4c20008
    ctx->pc = 0x1df9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df9a8: 0xc5010000
    ctx->pc = 0x1df9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df9ac: 0xc4800008
    ctx->pc = 0x1df9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df9b0: 0x4602181a
    ctx->pc = 0x1df9b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1df9b4: 0x4600081c
    ctx->pc = 0x1df9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1df9b8: 0xe4e00008
    ctx->pc = 0x1df9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1df9bc: 0xc7a30020
    ctx->pc = 0x1df9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df9c0: 0xc4c2000c
    ctx->pc = 0x1df9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df9c4: 0xc5010000
    ctx->pc = 0x1df9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df9c8: 0xc480000c
    ctx->pc = 0x1df9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df9cc: 0x4602181a
    ctx->pc = 0x1df9ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1df9d0: 0x4600081c
    ctx->pc = 0x1df9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1df9d4: 0xe4e0000c
    ctx->pc = 0x1df9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1df9d8: 0xc7a30020
    ctx->pc = 0x1df9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df9dc: 0xc4c20010
    ctx->pc = 0x1df9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df9e0: 0xc5010000
    ctx->pc = 0x1df9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df9e4: 0xc4800010
    ctx->pc = 0x1df9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df9e8: 0x4602181a
    ctx->pc = 0x1df9e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1df9ec: 0x4600081c
    ctx->pc = 0x1df9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1df9f0: 0xe4e00010
    ctx->pc = 0x1df9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1df9f4: 0xc7a30020
    ctx->pc = 0x1df9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df9f8: 0xc4c20014
    ctx->pc = 0x1df9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df9fc: 0xc5010000
    ctx->pc = 0x1df9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfa00: 0xc4800014
    ctx->pc = 0x1dfa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa04: 0x4602181a
    ctx->pc = 0x1dfa04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1dfa08: 0x4600081c
    ctx->pc = 0x1dfa08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1dfa0c: 0xe4e00014
    ctx->pc = 0x1dfa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x1dfa10: 0xc7a30020
    ctx->pc = 0x1dfa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfa14: 0xc4c20018
    ctx->pc = 0x1dfa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfa18: 0xc5010000
    ctx->pc = 0x1dfa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfa1c: 0xc4800018
    ctx->pc = 0x1dfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa20: 0x4602181a
    ctx->pc = 0x1dfa20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1dfa24: 0x4600081c
    ctx->pc = 0x1dfa24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1dfa28: 0xe4e00018
    ctx->pc = 0x1dfa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x1dfa2c: 0xc4c2001c
    ctx->pc = 0x1dfa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfa30: 0xc7a30020
    ctx->pc = 0x1dfa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfa34: 0xc480001c
    ctx->pc = 0x1dfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa38: 0xc5010000
    ctx->pc = 0x1dfa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfa3c: 0x24c60020
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1dfa40: 0x4602181a
    ctx->pc = 0x1dfa40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1dfa44: 0x24840020
    ctx->pc = 0x1dfa44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dfa48: 0x4600081c
    ctx->pc = 0x1dfa48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1dfa4c: 0xe4e0001c
    ctx->pc = 0x1dfa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x1dfa50: 0x1440ffc3
    ctx->pc = 0x1DFA50u;
    {
        const bool branch_taken_0x1dfa50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DFA54u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
        if (branch_taken_0x1dfa50) {
            ctx->pc = 0x1DF960u;
            goto label_1df960;
        }
    }
    ctx->pc = 0x1DFA58u;
    // 0x1dfa58: 0xc24afbc
    ctx->pc = 0x1DFA58u;
    SET_GPR_U32(ctx, 31, 0x1DFA60u);
    ctx->pc = 0x1DFA5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x92BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphShape2__FPiPf_0x92bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA60u; }
        else if (ctx->pc != 0x1DFA60u) { ctx->pc = 0x1DFA60u; }
    }
    if (ctx->pc != 0x1DFA60u) { return; }
    ctx->pc = 0x1DFA60u;
    // 0x1dfa60: 0x4bede37d
    ctx->pc = 0x1dfa60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dfa64: 0x4bedeb7d
    ctx->pc = 0x1dfa64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dfa68: 0x4bedf37d
    ctx->pc = 0x1dfa68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dfa6c: 0x4bedfb7d
    ctx->pc = 0x1dfa6cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dfa70: 0xc60d0040
    ctx->pc = 0x1dfa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dfa74: 0xc60e0044
    ctx->pc = 0x1dfa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dfa78: 0xc06c202
    ctx->pc = 0x1DFA78u;
    SET_GPR_U32(ctx, 31, 0x1DFA80u);
    ctx->pc = 0x1DFA7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA80u; }
        else if (ctx->pc != 0x1DFA80u) { ctx->pc = 0x1DFA80u; }
    }
    if (ctx->pc != 0x1DFA80u) { return; }
    ctx->pc = 0x1DFA80u;
    // 0x1dfa80: 0xc06c0fb
    ctx->pc = 0x1DFA80u;
    SET_GPR_U32(ctx, 31, 0x1DFA88u);
    ctx->pc = 0x1DFA84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA88u; }
        else if (ctx->pc != 0x1DFA88u) { ctx->pc = 0x1DFA88u; }
    }
    if (ctx->pc != 0x1DFA88u) { return; }
    ctx->pc = 0x1DFA88u;
    // 0x1dfa88: 0xc06c09f
    ctx->pc = 0x1DFA88u;
    SET_GPR_U32(ctx, 31, 0x1DFA90u);
    ctx->pc = 0x1DFA8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA90u; }
        else if (ctx->pc != 0x1DFA90u) { ctx->pc = 0x1DFA90u; }
    }
    if (ctx->pc != 0x1DFA90u) { return; }
    ctx->pc = 0x1DFA90u;
    // 0x1dfa90: 0xc06c157
    ctx->pc = 0x1DFA90u;
    SET_GPR_U32(ctx, 31, 0x1DFA98u);
    ctx->pc = 0x1DFA94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA98u; }
        else if (ctx->pc != 0x1DFA98u) { ctx->pc = 0x1DFA98u; }
    }
    if (ctx->pc != 0x1DFA98u) { return; }
    ctx->pc = 0x1DFA98u;
    // 0x1dfa98: 0xc60c0024
    ctx->pc = 0x1dfa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfa9c: 0xc07a42c
    ctx->pc = 0x1DFA9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFAA4u);
    ctx->pc = 0x1DFAA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAA4u; }
        else if (ctx->pc != 0x1DFAA4u) { ctx->pc = 0x1DFAA4u; }
    }
    if (ctx->pc != 0x1DFAA4u) { return; }
    ctx->pc = 0x1DFAA4u;
    // 0x1dfaa4: 0x4bff6b7e
    ctx->pc = 0x1dfaa4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dfaa8: 0x4bfe6b7e
    ctx->pc = 0x1dfaa8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dfaac: 0x4bfd6b7e
    ctx->pc = 0x1dfaacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dfab0: 0x4bfc6b7e
    ctx->pc = 0x1dfab0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dfab4: 0x7bbf0010
    ctx->pc = 0x1dfab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfab8: 0x7bb00000
    ctx->pc = 0x1dfab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfabc: 0x3e00008
    ctx->pc = 0x1DFABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFAC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF960u: goto label_1df960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFAC4u;
}
