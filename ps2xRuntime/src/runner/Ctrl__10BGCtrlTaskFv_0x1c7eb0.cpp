#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Ctrl__10BGCtrlTaskFv
// Address: 0x1c7eb0 - 0x1c8858
void Ctrl__10BGCtrlTaskFv_0x1c7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ctrl__10BGCtrlTaskFv");


    ctx->pc = 0x1c7eb0u;

    // 0x1c7eb0: 0x27bdfed0
    ctx->pc = 0x1c7eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c7eb4: 0x7fbf00a0
    ctx->pc = 0x1c7eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1c7eb8: 0x7fbe0090
    ctx->pc = 0x1c7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c7ebc: 0x7fb70080
    ctx->pc = 0x1c7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c7ec0: 0x7fb60070
    ctx->pc = 0x1c7ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c7ec4: 0x7fb50060
    ctx->pc = 0x1c7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c7ec8: 0x7fb40050
    ctx->pc = 0x1c7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c7ecc: 0x7fb30040
    ctx->pc = 0x1c7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c7ed0: 0x7fb20030
    ctx->pc = 0x1c7ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c7ed4: 0x7fb10020
    ctx->pc = 0x1c7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c7ed8: 0x7fb00010
    ctx->pc = 0x1c7ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7edc: 0xe7b40000
    ctx->pc = 0x1c7edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7ee0: 0x8f838cb0
    ctx->pc = 0x1c7ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1c7ee4: 0x3063000c
    ctx->pc = 0x1c7ee4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 12));
    // 0x1c7ee8: 0x1460024e
    ctx->pc = 0x1C7EE8u;
    {
        const bool branch_taken_0x1c7ee8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7EECu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c7ee8) {
            ctx->pc = 0x1C8824u;
            goto label_1c8824;
        }
    }
    ctx->pc = 0x1C7EF0u;
    // 0x1c7ef0: 0x86850008
    ctx->pc = 0x1c7ef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c7ef4: 0x8e83000c
    ctx->pc = 0x1c7ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1c7ef8: 0x52040
    ctx->pc = 0x1c7ef8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1c7efc: 0x852021
    ctx->pc = 0x1c7efcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c7f00: 0x42080
    ctx->pc = 0x1c7f00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7f04: 0x852021
    ctx->pc = 0x1c7f04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c7f08: 0x42080
    ctx->pc = 0x1c7f08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7f0c: 0x641821
    ctx->pc = 0x1c7f0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c7f10: 0xafa300b0
    ctx->pc = 0x1c7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1c7f14: 0x4bede37d
    ctx->pc = 0x1c7f14u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1c7f18: 0x4bedeb7d
    ctx->pc = 0x1c7f18u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1c7f1c: 0x4bedf37d
    ctx->pc = 0x1c7f1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1c7f20: 0x10000235
    ctx->pc = 0x1C7F20u;
    {
        const bool branch_taken_0x1c7f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F24u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        if (branch_taken_0x1c7f20) {
            ctx->pc = 0x1C87F8u;
            goto label_1c87f8;
        }
    }
    ctx->pc = 0x1C7F28u;
label_1c7f28:
    // 0x1c7f28: 0x511023
    ctx->pc = 0x1c7f28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7f2c: 0x21880
    ctx->pc = 0x1c7f2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7f30: 0x8e820010
    ctx->pc = 0x1c7f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1c7f34: 0xafa000f0
    ctx->pc = 0x1c7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1c7f38: 0x438021
    ctx->pc = 0x1c7f38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7f3c: 0x86030008
    ctx->pc = 0x1c7f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c7f40: 0x8602000a
    ctx->pc = 0x1c7f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c7f44: 0x30760008
    ctx->pc = 0x1c7f44u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 3), 8));
    // 0x1c7f48: 0xafa200d0
    ctx->pc = 0x1c7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1c7f4c: 0x30620002
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x1c7f50: 0xafa200c0
    ctx->pc = 0x1c7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1c7f54: 0x30620004
    ctx->pc = 0x1c7f54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x1c7f58: 0xafa200e0
    ctx->pc = 0x1c7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1c7f5c: 0x30620030
    ctx->pc = 0x1c7f5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 48));
    // 0x1c7f60: 0xafa20100
    ctx->pc = 0x1c7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1c7f64: 0x8fa200c0
    ctx->pc = 0x1c7f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c7f68: 0x307e0040
    ctx->pc = 0x1c7f68u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 3), 64));
    // 0x1c7f6c: 0x1440000c
    ctx->pc = 0x1C7F6Cu;
    {
        const bool branch_taken_0x1c7f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7F70u;
        SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x1c7f6c) {
            ctx->pc = 0x1C7FA0u;
            goto label_1c7fa0;
        }
    }
    ctx->pc = 0x1C7F74u;
    // 0x1c7f74: 0x8fa200d0
    ctx->pc = 0x1c7f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c7f78: 0x14400009
    ctx->pc = 0x1C7F78u;
    {
        const bool branch_taken_0x1c7f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f78) {
            ctx->pc = 0x1C7FA0u;
            goto label_1c7fa0;
        }
    }
    ctx->pc = 0x1C7F80u;
    // 0x1c7f80: 0x8fa20100
    ctx->pc = 0x1c7f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c7f84: 0x14400006
    ctx->pc = 0x1C7F84u;
    {
        const bool branch_taken_0x1c7f84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f84) {
            ctx->pc = 0x1C7FA0u;
            goto label_1c7fa0;
        }
    }
    ctx->pc = 0x1C7F8Cu;
    // 0x1c7f8c: 0x17c00004
    ctx->pc = 0x1C7F8Cu;
    {
        const bool branch_taken_0x1c7f8c = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f8c) {
            ctx->pc = 0x1C7FA0u;
            goto label_1c7fa0;
        }
    }
    ctx->pc = 0x1C7F94u;
    // 0x1c7f94: 0x12e00006
    ctx->pc = 0x1C7F94u;
    {
        const bool branch_taken_0x1c7f94 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7f94) {
            ctx->pc = 0x1C7FB0u;
            goto label_1c7fb0;
        }
    }
    ctx->pc = 0x1C7F9Cu;
    // 0x1c7f9c: 0x0
    ctx->pc = 0x1c7f9cu;
    // NOP
label_1c7fa0:
    // 0x1c7fa0: 0x4bede37d
    ctx->pc = 0x1c7fa0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1c7fa4: 0x4bedeb7d
    ctx->pc = 0x1c7fa4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1c7fa8: 0x4bedf37d
    ctx->pc = 0x1c7fa8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1c7fac: 0x4bedfb7d
    ctx->pc = 0x1c7facu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1c7fb0:
    // 0x1c7fb0: 0x8fa200c0
    ctx->pc = 0x1c7fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c7fb4: 0x1040000e
    ctx->pc = 0x1C7FB4u;
    {
        const bool branch_taken_0x1c7fb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7fb4) {
            ctx->pc = 0x1C7FF0u;
            goto label_1c7ff0;
        }
    }
    ctx->pc = 0x1C7FBCu;
    // 0x1c7fbc: 0x8f848c48
    ctx->pc = 0x1c7fbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c7fc0: 0x44806800
    ctx->pc = 0x1c7fc0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1c7fc4: 0x8c830004
    ctx->pc = 0x1c7fc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c7fc8: 0x31040
    ctx->pc = 0x1c7fc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c7fcc: 0x431021
    ctx->pc = 0x1c7fccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7fd0: 0x21080
    ctx->pc = 0x1c7fd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7fd4: 0x431021
    ctx->pc = 0x1c7fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7fd8: 0x21100
    ctx->pc = 0x1c7fd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c7fdc: 0x821021
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c7fe0: 0xc44e0098
    ctx->pc = 0x1c7fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c7fe4: 0xc06c202
    ctx->pc = 0x1C7FE4u;
    SET_GPR_U32(ctx, 31, 0x1C7FECu);
    ctx->pc = 0x1C7FE8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7FECu; }
        else if (ctx->pc != 0x1C7FECu) { ctx->pc = 0x1C7FECu; }
    }
    if (ctx->pc != 0x1C7FECu) { return; }
    ctx->pc = 0x1C7FECu;
    // 0x1c7fec: 0x0
    ctx->pc = 0x1c7fecu;
    // NOP
label_1c7ff0:
    // 0x1c7ff0: 0x8fa200d0
    ctx->pc = 0x1c7ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c7ff4: 0x10400008
    ctx->pc = 0x1C7FF4u;
    {
        const bool branch_taken_0x1c7ff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7ff4) {
            ctx->pc = 0x1C8018u;
            goto label_1c8018;
        }
    }
    ctx->pc = 0x1C7FFCu;
    // 0x1c7ffc: 0xc60d0010
    ctx->pc = 0x1c7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8000: 0xc60e0014
    ctx->pc = 0x1c8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c8004: 0xc06c202
    ctx->pc = 0x1C8004u;
    SET_GPR_U32(ctx, 31, 0x1C800Cu);
    ctx->pc = 0x1C8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C800Cu; }
        else if (ctx->pc != 0x1C800Cu) { ctx->pc = 0x1C800Cu; }
    }
    if (ctx->pc != 0x1C800Cu) { return; }
    ctx->pc = 0x1C800Cu;
    // 0x1c800c: 0xc06c0fb
    ctx->pc = 0x1C800Cu;
    SET_GPR_U32(ctx, 31, 0x1C8014u);
    ctx->pc = 0x1C8010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8014u; }
        else if (ctx->pc != 0x1C8014u) { ctx->pc = 0x1C8014u; }
    }
    if (ctx->pc != 0x1C8014u) { return; }
    ctx->pc = 0x1C8014u;
    // 0x1c8014: 0x0
    ctx->pc = 0x1c8014u;
    // NOP
label_1c8018:
    // 0x1c8018: 0x8fa20100
    ctx->pc = 0x1c8018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c801c: 0x10400010
    ctx->pc = 0x1C801Cu;
    {
        const bool branch_taken_0x1c801c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c801c) {
            ctx->pc = 0x1C8060u;
            goto label_1c8060;
        }
    }
    ctx->pc = 0x1C8024u;
    // 0x1c8024: 0x86020008
    ctx->pc = 0x1c8024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c8028: 0x30420010
    ctx->pc = 0x1c8028u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1c802c: 0x10400006
    ctx->pc = 0x1C802Cu;
    {
        const bool branch_taken_0x1c802c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c802c) {
            ctx->pc = 0x1C8048u;
            goto label_1c8048;
        }
    }
    ctx->pc = 0x1C8034u;
    // 0x1c8034: 0x8e820048
    ctx->pc = 0x1c8034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8038: 0xc06c0fb
    ctx->pc = 0x1C8038u;
    SET_GPR_U32(ctx, 31, 0x1C8040u);
    ctx->pc = 0x1C803Cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8040u; }
        else if (ctx->pc != 0x1C8040u) { ctx->pc = 0x1C8040u; }
    }
    if (ctx->pc != 0x1C8040u) { return; }
    ctx->pc = 0x1C8040u;
    // 0x1c8040: 0x10000013
    ctx->pc = 0x1C8040u;
    {
        const bool branch_taken_0x1c8040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8040) {
            ctx->pc = 0x1C8090u;
            goto label_1c8090;
        }
    }
    ctx->pc = 0x1C8048u;
label_1c8048:
    // 0x1c8048: 0x8e820048
    ctx->pc = 0x1c8048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c804c: 0x21023
    ctx->pc = 0x1c804cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c8050: 0xc06c0fb
    ctx->pc = 0x1C8050u;
    SET_GPR_U32(ctx, 31, 0x1C8058u);
    ctx->pc = 0x1C8054u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8058u; }
        else if (ctx->pc != 0x1C8058u) { ctx->pc = 0x1C8058u; }
    }
    if (ctx->pc != 0x1C8058u) { return; }
    ctx->pc = 0x1C8058u;
    // 0x1c8058: 0x1000000d
    ctx->pc = 0x1C8058u;
    {
        const bool branch_taken_0x1c8058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8058) {
            ctx->pc = 0x1C8090u;
            goto label_1c8090;
        }
    }
    ctx->pc = 0x1C8060u;
label_1c8060:
    // 0x1c8060: 0x13c0000b
    ctx->pc = 0x1C8060u;
    {
        const bool branch_taken_0x1c8060 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8060) {
            ctx->pc = 0x1C8090u;
            goto label_1c8090;
        }
    }
    ctx->pc = 0x1C8068u;
    // 0x1c8068: 0x8e820048
    ctx->pc = 0x1c8068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c806c: 0xc06c24e
    ctx->pc = 0x1C806Cu;
    SET_GPR_U32(ctx, 31, 0x1C8074u);
    ctx->pc = 0x1C8070u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8074u; }
        else if (ctx->pc != 0x1C8074u) { ctx->pc = 0x1C8074u; }
    }
    if (ctx->pc != 0x1C8074u) { return; }
    ctx->pc = 0x1C8074u;
    // 0x1c8074: 0x3c0243c0
    ctx->pc = 0x1c8074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17344 << 16));
    // 0x1c8078: 0x44820800
    ctx->pc = 0x1c8078u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1c807c: 0xc053146
    ctx->pc = 0x1C807Cu;
    SET_GPR_U32(ctx, 31, 0x1C8084u);
    ctx->pc = 0x1C8080u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8084u; }
        else if (ctx->pc != 0x1C8084u) { ctx->pc = 0x1C8084u; }
    }
    if (ctx->pc != 0x1C8084u) { return; }
    ctx->pc = 0x1C8084u;
    // 0x1c8084: 0xc06c0fb
    ctx->pc = 0x1C8084u;
    SET_GPR_U32(ctx, 31, 0x1C808Cu);
    ctx->pc = 0x1C8088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C808Cu; }
        else if (ctx->pc != 0x1C808Cu) { ctx->pc = 0x1C808Cu; }
    }
    if (ctx->pc != 0x1C808Cu) { return; }
    ctx->pc = 0x1C808Cu;
    // 0x1c808c: 0x0
    ctx->pc = 0x1c808cu;
    // NOP
label_1c8090:
    // 0x1c8090: 0x12e00005
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C80A8u;
            goto label_1c80a8;
        }
    }
    ctx->pc = 0x1C8098u;
    // 0x1c8098: 0x8e820048
    ctx->pc = 0x1c8098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c809c: 0xc06c157
    ctx->pc = 0x1C809Cu;
    SET_GPR_U32(ctx, 31, 0x1C80A4u);
    ctx->pc = 0x1C80A0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80A4u; }
        else if (ctx->pc != 0x1C80A4u) { ctx->pc = 0x1C80A4u; }
    }
    if (ctx->pc != 0x1C80A4u) { return; }
    ctx->pc = 0x1C80A4u;
    // 0x1c80a4: 0x0
    ctx->pc = 0x1c80a4u;
    // NOP
label_1c80a8:
    // 0x1c80a8: 0x3c020050
    ctx->pc = 0x1c80a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1c80ac: 0xc07ce18
    ctx->pc = 0x1C80ACu;
    SET_GPR_U32(ctx, 31, 0x1C80B4u);
    ctx->pc = 0x1C80B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80B4u; }
        else if (ctx->pc != 0x1C80B4u) { ctx->pc = 0x1C80B4u; }
    }
    if (ctx->pc != 0x1C80B4u) { return; }
    ctx->pc = 0x1C80B4u;
    // 0x1c80b4: 0x1c40000c
    ctx->pc = 0x1C80B4u;
    {
        const bool branch_taken_0x1c80b4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c80b4) {
            ctx->pc = 0x1C80E8u;
            goto label_1c80e8;
        }
    }
    ctx->pc = 0x1C80BCu;
    // 0x1c80bc: 0x17c00006
    ctx->pc = 0x1C80BCu;
    {
        const bool branch_taken_0x1c80bc = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c80bc) {
            ctx->pc = 0x1C80D8u;
            goto label_1c80d8;
        }
    }
    ctx->pc = 0x1C80C4u;
    // 0x1c80c4: 0x8fa30100
    ctx->pc = 0x1c80c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c80c8: 0x14600003
    ctx->pc = 0x1C80C8u;
    {
        const bool branch_taken_0x1c80c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c80c8) {
            ctx->pc = 0x1C80D8u;
            goto label_1c80d8;
        }
    }
    ctx->pc = 0x1C80D0u;
    // 0x1c80d0: 0x12e00005
    ctx->pc = 0x1C80D0u;
    {
        const bool branch_taken_0x1c80d0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c80d0) {
            ctx->pc = 0x1C80E8u;
            goto label_1c80e8;
        }
    }
    ctx->pc = 0x1C80D8u;
label_1c80d8:
    // 0x1c80d8: 0x8e830048
    ctx->pc = 0x1c80d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c80dc: 0x24630001
    ctx->pc = 0x1c80dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c80e0: 0xae830048
    ctx->pc = 0x1c80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
    // 0x1c80e4: 0x0
    ctx->pc = 0x1c80e4u;
    // NOP
label_1c80e8:
    // 0x1c80e8: 0x8fa300e0
    ctx->pc = 0x1c80e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c80ec: 0x10600012
    ctx->pc = 0x1C80ECu;
    {
        const bool branch_taken_0x1c80ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c80ec) {
            ctx->pc = 0x1C8138u;
            goto label_1c8138;
        }
    }
    ctx->pc = 0x1C80F4u;
    // 0x1c80f4: 0xc06c490
    ctx->pc = 0x1C80F4u;
    SET_GPR_U32(ctx, 31, 0x1C80FCu);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80FCu; }
        else if (ctx->pc != 0x1C80FCu) { ctx->pc = 0x1C80FCu; }
    }
    if (ctx->pc != 0x1C80FCu) { return; }
    ctx->pc = 0x1C80FCu;
    // 0x1c80fc: 0x94430080
    ctx->pc = 0x1c80fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1c8100: 0x24520080
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 128));
    // 0x1c8104: 0x70002628
    ctx->pc = 0x1c8104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8108: 0x24070001
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c810c: 0x90420083
    ctx->pc = 0x1c810cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 131)));
    // 0x1c8110: 0x306501ff
    ctx->pc = 0x1c8110u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x1c8114: 0xc06c59c
    ctx->pc = 0x1C8114u;
    SET_GPR_U32(ctx, 31, 0x1C811Cu);
    ctx->pc = 0x1C8118u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C811Cu; }
        else if (ctx->pc != 0x1C811Cu) { ctx->pc = 0x1C811Cu; }
    }
    if (ctx->pc != 0x1C811Cu) { return; }
    ctx->pc = 0x1C811Cu;
    // 0x1c811c: 0x96430000
    ctx->pc = 0x1c811cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8120: 0x92420003
    ctx->pc = 0x1c8120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1c8124: 0x24040200
    ctx->pc = 0x1c8124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c8128: 0x24070001
    ctx->pc = 0x1c8128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c812c: 0x306501ff
    ctx->pc = 0x1c812cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x1c8130: 0xc06c59c
    ctx->pc = 0x1C8130u;
    SET_GPR_U32(ctx, 31, 0x1C8138u);
    ctx->pc = 0x1C8134u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8138u; }
        else if (ctx->pc != 0x1C8138u) { ctx->pc = 0x1C8138u; }
    }
    if (ctx->pc != 0x1C8138u) { return; }
    ctx->pc = 0x1C8138u;
label_1c8138:
    // 0x1c8138: 0x83848ba8
    ctx->pc = 0x1c8138u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1c813c: 0x24030006
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c8140: 0x10830072
    ctx->pc = 0x1C8140u;
    {
        const bool branch_taken_0x1c8140 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8144u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1c8140) {
            ctx->pc = 0x1C830Cu;
            goto label_1c830c;
        }
    }
    ctx->pc = 0x1C8148u;
    // 0x1c8148: 0x24030005
    ctx->pc = 0x1c8148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c814c: 0x10830048
    ctx->pc = 0x1C814Cu;
    {
        const bool branch_taken_0x1c814c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8150u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c814c) {
            ctx->pc = 0x1C8270u;
            goto label_1c8270;
        }
    }
    ctx->pc = 0x1C8154u;
    // 0x1c8154: 0x24030003
    ctx->pc = 0x1c8154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8158: 0x10830003
    ctx->pc = 0x1C8158u;
    {
        const bool branch_taken_0x1c8158 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c8158) {
            ctx->pc = 0x1C8168u;
            goto label_1c8168;
        }
    }
    ctx->pc = 0x1C8160u;
    // 0x1c8160: 0x10000084
    ctx->pc = 0x1C8160u;
    {
        const bool branch_taken_0x1c8160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8164u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1c8160) {
            ctx->pc = 0x1C8374u;
            goto label_1c8374;
        }
    }
    ctx->pc = 0x1C8168u;
label_1c8168:
    // 0x1c8168: 0x86840008
    ctx->pc = 0x1c8168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c816c: 0x2403000b
    ctx->pc = 0x1c816cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c8170: 0x14830032
    ctx->pc = 0x1C8170u;
    {
        const bool branch_taken_0x1c8170 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C8174u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
        if (branch_taken_0x1c8170) {
            ctx->pc = 0x1C823Cu;
            goto label_1c823c;
        }
    }
    ctx->pc = 0x1C8178u;
    // 0x1c8178: 0xc6940020
    ctx->pc = 0x1c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c817c: 0x3c033f80
    ctx->pc = 0x1c817cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1c8180: 0x44830000
    ctx->pc = 0x1c8180u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c8184: 0x0
    ctx->pc = 0x1c8184u;
    // NOP
    // 0x1c8188: 0x4600a034
    ctx->pc = 0x1c8188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c818c: 0x0
    ctx->pc = 0x1c818cu;
    // NOP
    // 0x1c8190: 0x4500000c
    ctx->pc = 0x1C8190u;
    {
        const bool branch_taken_0x1c8190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8194u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x1c8190) {
            ctx->pc = 0x1C81C4u;
            goto label_1c81c4;
        }
    }
    ctx->pc = 0x1C8198u;
    // 0x1c8198: 0x24020001
    ctx->pc = 0x1c8198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c819c: 0xc06aafc
    ctx->pc = 0x1C819Cu;
    SET_GPR_U32(ctx, 31, 0x1C81A4u);
    ctx->pc = 0x1C81A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81A4u; }
        else if (ctx->pc != 0x1C81A4u) { ctx->pc = 0x1C81A4u; }
    }
    if (ctx->pc != 0x1C81A4u) { return; }
    ctx->pc = 0x1C81A4u;
    // 0x1c81a4: 0x4600a306
    ctx->pc = 0x1c81a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81a8: 0x4600a346
    ctx->pc = 0x1c81a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81ac: 0x4600a386
    ctx->pc = 0x1c81acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81b0: 0x4600a3c6
    ctx->pc = 0x1c81b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81b4: 0x4600a406
    ctx->pc = 0x1c81b4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81b8: 0xc06aac8
    ctx->pc = 0x1C81B8u;
    SET_GPR_U32(ctx, 31, 0x1C81C0u);
    ctx->pc = 0x1C81BCu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81C0u; }
        else if (ctx->pc != 0x1C81C0u) { ctx->pc = 0x1C81C0u; }
    }
    if (ctx->pc != 0x1C81C0u) { return; }
    ctx->pc = 0x1C81C0u;
    // 0x1c81c0: 0x24030017
    ctx->pc = 0x1c81c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
label_1c81c4:
    // 0x1c81c4: 0x16230013
    ctx->pc = 0x1C81C4u;
    {
        const bool branch_taken_0x1c81c4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C81C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x1c81c4) {
            ctx->pc = 0x1C8214u;
            goto label_1c8214;
        }
    }
    ctx->pc = 0x1C81CCu;
    // 0x1c81cc: 0xc06c0fb
    ctx->pc = 0x1C81CCu;
    SET_GPR_U32(ctx, 31, 0x1C81D4u);
    ctx->pc = 0x1C81D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81D4u; }
        else if (ctx->pc != 0x1C81D4u) { ctx->pc = 0x1C81D4u; }
    }
    if (ctx->pc != 0x1C81D4u) { return; }
    ctx->pc = 0x1C81D4u;
    // 0x1c81d4: 0x8fa200f0
    ctx->pc = 0x1c81d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c81d8: 0x14400005
    ctx->pc = 0x1C81D8u;
    {
        const bool branch_taken_0x1c81d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C81DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x1c81d8) {
            ctx->pc = 0x1C81F0u;
            goto label_1c81f0;
        }
    }
    ctx->pc = 0x1C81E0u;
    // 0x1c81e0: 0x24020001
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81e4: 0xc06aafc
    ctx->pc = 0x1C81E4u;
    SET_GPR_U32(ctx, 31, 0x1C81ECu);
    ctx->pc = 0x1C81E8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C81ECu; }
        else if (ctx->pc != 0x1C81ECu) { ctx->pc = 0x1C81ECu; }
    }
    if (ctx->pc != 0x1C81ECu) { return; }
    ctx->pc = 0x1C81ECu;
    // 0x1c81ec: 0x0
    ctx->pc = 0x1c81ecu;
    // NOP
label_1c81f0:
    // 0x1c81f0: 0x4600a306
    ctx->pc = 0x1c81f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81f4: 0x4600a346
    ctx->pc = 0x1c81f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81f8: 0x4600a386
    ctx->pc = 0x1c81f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c81fc: 0x4600a3c6
    ctx->pc = 0x1c81fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8200: 0x4600a406
    ctx->pc = 0x1c8200u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8204: 0xc06aac8
    ctx->pc = 0x1C8204u;
    SET_GPR_U32(ctx, 31, 0x1C820Cu);
    ctx->pc = 0x1C8208u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C820Cu; }
        else if (ctx->pc != 0x1C820Cu) { ctx->pc = 0x1C820Cu; }
    }
    if (ctx->pc != 0x1C820Cu) { return; }
    ctx->pc = 0x1C820Cu;
    // 0x1c820c: 0x0
    ctx->pc = 0x1c820cu;
    // NOP
    // 0x1c8210: 0x24030018
    ctx->pc = 0x1c8210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
label_1c8214:
    // 0x1c8214: 0x16230008
    ctx->pc = 0x1C8214u;
    {
        const bool branch_taken_0x1c8214 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8214) {
            ctx->pc = 0x1C8238u;
            goto label_1c8238;
        }
    }
    ctx->pc = 0x1C821Cu;
    // 0x1c821c: 0xc06c09f
    ctx->pc = 0x1C821Cu;
    SET_GPR_U32(ctx, 31, 0x1C8224u);
    ctx->pc = 0x1C8220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8224u; }
        else if (ctx->pc != 0x1C8224u) { ctx->pc = 0x1C8224u; }
    }
    if (ctx->pc != 0x1C8224u) { return; }
    ctx->pc = 0x1C8224u;
    // 0x1c8224: 0xc06c0fb
    ctx->pc = 0x1C8224u;
    SET_GPR_U32(ctx, 31, 0x1C822Cu);
    ctx->pc = 0x1C8228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C822Cu; }
        else if (ctx->pc != 0x1C822Cu) { ctx->pc = 0x1C822Cu; }
    }
    if (ctx->pc != 0x1C822Cu) { return; }
    ctx->pc = 0x1C822Cu;
    // 0x1c822c: 0xc06c157
    ctx->pc = 0x1C822Cu;
    SET_GPR_U32(ctx, 31, 0x1C8234u);
    ctx->pc = 0x1C8230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8234u; }
        else if (ctx->pc != 0x1C8234u) { ctx->pc = 0x1C8234u; }
    }
    if (ctx->pc != 0x1C8234u) { return; }
    ctx->pc = 0x1C8234u;
    // 0x1c8234: 0x0
    ctx->pc = 0x1c8234u;
    // NOP
label_1c8238:
    // 0x1c8238: 0x24030049
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
label_1c823c:
    // 0x1c823c: 0x16230005
    ctx->pc = 0x1C823Cu;
    {
        const bool branch_taken_0x1c823c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C8240u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
        if (branch_taken_0x1c823c) {
            ctx->pc = 0x1C8254u;
            goto label_1c8254;
        }
    }
    ctx->pc = 0x1C8244u;
    // 0x1c8244: 0xc06c0fb
    ctx->pc = 0x1C8244u;
    SET_GPR_U32(ctx, 31, 0x1C824Cu);
    ctx->pc = 0x1C8248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C824Cu; }
        else if (ctx->pc != 0x1C824Cu) { ctx->pc = 0x1C824Cu; }
    }
    if (ctx->pc != 0x1C824Cu) { return; }
    ctx->pc = 0x1C824Cu;
    // 0x1c824c: 0x0
    ctx->pc = 0x1c824cu;
    // NOP
    // 0x1c8250: 0x2403004a
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
label_1c8254:
    // 0x1c8254: 0x16230046
    ctx->pc = 0x1C8254u;
    {
        const bool branch_taken_0x1c8254 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8254) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C825Cu;
    // 0x1c825c: 0xc06c0fb
    ctx->pc = 0x1C825Cu;
    SET_GPR_U32(ctx, 31, 0x1C8264u);
    ctx->pc = 0x1C8260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8264u; }
        else if (ctx->pc != 0x1C8264u) { ctx->pc = 0x1C8264u; }
    }
    if (ctx->pc != 0x1C8264u) { return; }
    ctx->pc = 0x1C8264u;
    // 0x1c8264: 0x10000042
    ctx->pc = 0x1C8264u;
    {
        const bool branch_taken_0x1c8264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8264) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C826Cu;
    // 0x1c826c: 0x24030005
    ctx->pc = 0x1c826cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c8270:
    // 0x1c8270: 0x12230003
    ctx->pc = 0x1C8270u;
    {
        const bool branch_taken_0x1c8270 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8274u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1c8270) {
            ctx->pc = 0x1C8280u;
            goto label_1c8280;
        }
    }
    ctx->pc = 0x1C8278u;
    // 0x1c8278: 0x1623003d
    ctx->pc = 0x1C8278u;
    {
        const bool branch_taken_0x1c8278 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8278) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C8280u;
label_1c8280:
    // 0x1c8280: 0xc6820020
    ctx->pc = 0x1c8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8284: 0x44800000
    ctx->pc = 0x1c8284u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1c8288: 0x0
    ctx->pc = 0x1c8288u;
    // NOP
    // 0x1c828c: 0x46001034
    ctx->pc = 0x1c828cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8290: 0x0
    ctx->pc = 0x1c8290u;
    // NOP
    // 0x1c8294: 0x45010036
    ctx->pc = 0x1C8294u;
    {
        const bool branch_taken_0x1c8294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8298u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1c8294) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C829Cu;
    // 0x1c829c: 0x44830000
    ctx->pc = 0x1c829cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c82a0: 0x0
    ctx->pc = 0x1c82a0u;
    // NOP
    // 0x1c82a4: 0x46001034
    ctx->pc = 0x1c82a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c82a8: 0x0
    ctx->pc = 0x1c82a8u;
    // NOP
    // 0x1c82ac: 0x45000030
    ctx->pc = 0x1C82ACu;
    {
        const bool branch_taken_0x1c82ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82ac) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C82B4u;
    // 0x1c82b4: 0x3c023e99
    ctx->pc = 0x1c82b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
    // 0x1c82b8: 0x3442999a
    ctx->pc = 0x1c82b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1c82bc: 0x44820800
    ctx->pc = 0x1c82bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1c82c0: 0x3c023f33
    ctx->pc = 0x1c82c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x1c82c4: 0x34423333
    ctx->pc = 0x1c82c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x1c82c8: 0x44820000
    ctx->pc = 0x1c82c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1c82cc: 0x0
    ctx->pc = 0x1c82ccu;
    // NOP
    // 0x1c82d0: 0x46020002
    ctx->pc = 0x1c82d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c82d4: 0x24020001
    ctx->pc = 0x1c82d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82d8: 0xafa200f0
    ctx->pc = 0x1c82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1c82dc: 0xc06aafc
    ctx->pc = 0x1C82DCu;
    SET_GPR_U32(ctx, 31, 0x1C82E4u);
    ctx->pc = 0x1C82E0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82E4u; }
        else if (ctx->pc != 0x1C82E4u) { ctx->pc = 0x1C82E4u; }
    }
    if (ctx->pc != 0x1C82E4u) { return; }
    ctx->pc = 0x1C82E4u;
    // 0x1c82e4: 0x4600a306
    ctx->pc = 0x1c82e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c82e8: 0x4600a346
    ctx->pc = 0x1c82e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c82ec: 0x4600a386
    ctx->pc = 0x1c82ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c82f0: 0x4600a3c6
    ctx->pc = 0x1c82f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1c82f4: 0x4600a406
    ctx->pc = 0x1c82f4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1c82f8: 0xc06aac8
    ctx->pc = 0x1C82F8u;
    SET_GPR_U32(ctx, 31, 0x1C8300u);
    ctx->pc = 0x1C82FCu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8300u; }
        else if (ctx->pc != 0x1C8300u) { ctx->pc = 0x1C8300u; }
    }
    if (ctx->pc != 0x1C8300u) { return; }
    ctx->pc = 0x1C8300u;
    // 0x1c8300: 0x1000001b
    ctx->pc = 0x1C8300u;
    {
        const bool branch_taken_0x1c8300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8300) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C8308u;
    // 0x1c8308: 0x24030012
    ctx->pc = 0x1c8308u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
label_1c830c:
    // 0x1c830c: 0x1623000f
    ctx->pc = 0x1C830Cu;
    {
        const bool branch_taken_0x1c830c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C8310u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x1c830c) {
            ctx->pc = 0x1C834Cu;
            goto label_1c834c;
        }
    }
    ctx->pc = 0x1C8314u;
    // 0x1c8314: 0xc06c0fb
    ctx->pc = 0x1C8314u;
    SET_GPR_U32(ctx, 31, 0x1C831Cu);
    ctx->pc = 0x1C8318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C831Cu; }
        else if (ctx->pc != 0x1C831Cu) { ctx->pc = 0x1C831Cu; }
    }
    if (ctx->pc != 0x1C831Cu) { return; }
    ctx->pc = 0x1C831Cu;
    // 0x1c831c: 0xc6940018
    ctx->pc = 0x1c831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8320: 0x24020001
    ctx->pc = 0x1c8320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8324: 0xc06aafc
    ctx->pc = 0x1C8324u;
    SET_GPR_U32(ctx, 31, 0x1C832Cu);
    ctx->pc = 0x1C8328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C832Cu; }
        else if (ctx->pc != 0x1C832Cu) { ctx->pc = 0x1C832Cu; }
    }
    if (ctx->pc != 0x1C832Cu) { return; }
    ctx->pc = 0x1C832Cu;
    // 0x1c832c: 0x4600a306
    ctx->pc = 0x1c832cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8330: 0x4600a346
    ctx->pc = 0x1c8330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8334: 0x4600a386
    ctx->pc = 0x1c8334u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8338: 0x4600a3c6
    ctx->pc = 0x1c8338u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1c833c: 0x4600a406
    ctx->pc = 0x1c833cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1c8340: 0xc06aac8
    ctx->pc = 0x1C8340u;
    SET_GPR_U32(ctx, 31, 0x1C8348u);
    ctx->pc = 0x1C8344u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8348u; }
        else if (ctx->pc != 0x1C8348u) { ctx->pc = 0x1C8348u; }
    }
    if (ctx->pc != 0x1C8348u) { return; }
    ctx->pc = 0x1C8348u;
    // 0x1c8348: 0x24030011
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
label_1c834c:
    // 0x1c834c: 0x16230008
    ctx->pc = 0x1C834Cu;
    {
        const bool branch_taken_0x1c834c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c834c) {
            ctx->pc = 0x1C8370u;
            goto label_1c8370;
        }
    }
    ctx->pc = 0x1C8354u;
    // 0x1c8354: 0xc06c09f
    ctx->pc = 0x1C8354u;
    SET_GPR_U32(ctx, 31, 0x1C835Cu);
    ctx->pc = 0x1C8358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C835Cu; }
        else if (ctx->pc != 0x1C835Cu) { ctx->pc = 0x1C835Cu; }
    }
    if (ctx->pc != 0x1C835Cu) { return; }
    ctx->pc = 0x1C835Cu;
    // 0x1c835c: 0xc06c0fb
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C8360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8364u; }
        else if (ctx->pc != 0x1C8364u) { ctx->pc = 0x1C8364u; }
    }
    if (ctx->pc != 0x1C8364u) { return; }
    ctx->pc = 0x1C8364u;
    // 0x1c8364: 0xc06c157
    ctx->pc = 0x1C8364u;
    SET_GPR_U32(ctx, 31, 0x1C836Cu);
    ctx->pc = 0x1C8368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C836Cu; }
        else if (ctx->pc != 0x1C836Cu) { ctx->pc = 0x1C836Cu; }
    }
    if (ctx->pc != 0x1C836Cu) { return; }
    ctx->pc = 0x1C836Cu;
    // 0x1c836c: 0x0
    ctx->pc = 0x1c836cu;
    // NOP
label_1c8370:
    // 0x1c8370: 0x8e120000
    ctx->pc = 0x1c8370u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8374:
    // 0x1c8374: 0x100000f0
    ctx->pc = 0x1C8374u;
    {
        const bool branch_taken_0x1c8374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8378u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 4294967240));
        if (branch_taken_0x1c8374) {
            ctx->pc = 0x1C8738u;
            goto label_1c8738;
        }
    }
    ctx->pc = 0x1C837Cu;
    // 0x1c837c: 0x72402628
    ctx->pc = 0x1c837cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1c8380:
    // 0x1c8380: 0x27a50110
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c8384: 0xc085438
    ctx->pc = 0x1C8384u;
    SET_GPR_U32(ctx, 31, 0x1C838Cu);
    ctx->pc = 0x1C8388u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C838Cu; }
        else if (ctx->pc != 0x1C838Cu) { ctx->pc = 0x1C838Cu; }
    }
    if (ctx->pc != 0x1C838Cu) { return; }
    ctx->pc = 0x1C838Cu;
    // 0x1c838c: 0x3c010050
    ctx->pc = 0x1c838cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c8390: 0x8424e504
    ctx->pc = 0x1c8390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1c8394: 0x2403000f
    ctx->pc = 0x1c8394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8398: 0x10830003
    ctx->pc = 0x1C8398u;
    {
        const bool branch_taken_0x1c8398 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c8398) {
            ctx->pc = 0x1C83A8u;
            goto label_1c83a8;
        }
    }
    ctx->pc = 0x1C83A0u;
    // 0x1c83a0: 0x10000020
    ctx->pc = 0x1C83A0u;
    {
        const bool branch_taken_0x1c83a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C83A4u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
        if (branch_taken_0x1c83a0) {
            ctx->pc = 0x1C8424u;
            goto label_1c8424;
        }
    }
    ctx->pc = 0x1C83A8u;
label_1c83a8:
    // 0x1c83a8: 0x86840008
    ctx->pc = 0x1c83a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c83ac: 0x24030012
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c83b0: 0x10830003
    ctx->pc = 0x1C83B0u;
    {
        const bool branch_taken_0x1c83b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c83b0) {
            ctx->pc = 0x1C83C0u;
            goto label_1c83c0;
        }
    }
    ctx->pc = 0x1C83B8u;
    // 0x1c83b8: 0x10000019
    ctx->pc = 0x1C83B8u;
    {
        const bool branch_taken_0x1c83b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c83b8) {
            ctx->pc = 0x1C8420u;
            goto label_1c8420;
        }
    }
    ctx->pc = 0x1C83C0u;
label_1c83c0:
    // 0x1c83c0: 0x8f848c48
    ctx->pc = 0x1c83c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c83c4: 0x8c830004
    ctx->pc = 0x1c83c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c83c8: 0x31040
    ctx->pc = 0x1c83c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c83cc: 0x431021
    ctx->pc = 0x1c83ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c83d0: 0x21080
    ctx->pc = 0x1c83d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c83d4: 0x431021
    ctx->pc = 0x1c83d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c83d8: 0x21100
    ctx->pc = 0x1c83d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c83dc: 0x821021
    ctx->pc = 0x1c83dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c83e0: 0xc06c038
    ctx->pc = 0x1C83E0u;
    SET_GPR_U32(ctx, 31, 0x1C83E8u);
    ctx->pc = 0x1C83E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C83E8u; }
        else if (ctx->pc != 0x1C83E8u) { ctx->pc = 0x1C83E8u; }
    }
    if (ctx->pc != 0x1C83E8u) { return; }
    ctx->pc = 0x1C83E8u;
    // 0x1c83e8: 0x3c02be3d
    ctx->pc = 0x1c83e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48701 << 16));
    // 0x1c83ec: 0x3442f3b6
    ctx->pc = 0x1c83ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 62390));
    // 0x1c83f0: 0x44827000
    ctx->pc = 0x1c83f0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1c83f4: 0x3c02c1d9
    ctx->pc = 0x1c83f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49625 << 16));
    // 0x1c83f8: 0x3442e9ad
    ctx->pc = 0x1c83f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59821));
    // 0x1c83fc: 0x44826000
    ctx->pc = 0x1c83fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1c8400: 0x3c02bf09
    ctx->pc = 0x1c8400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48905 << 16));
    // 0x1c8404: 0x3442d495
    ctx->pc = 0x1c8404u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54421));
    // 0x1c8408: 0x44826800
    ctx->pc = 0x1c8408u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1c840c: 0xc06c202
    ctx->pc = 0x1C840Cu;
    SET_GPR_U32(ctx, 31, 0x1C8414u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8414u; }
        else if (ctx->pc != 0x1C8414u) { ctx->pc = 0x1C8414u; }
    }
    if (ctx->pc != 0x1C8414u) { return; }
    ctx->pc = 0x1C8414u;
    // 0x1c8414: 0xc06c0fb
    ctx->pc = 0x1C8414u;
    SET_GPR_U32(ctx, 31, 0x1C841Cu);
    ctx->pc = 0x1C8418u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 49152));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C841Cu; }
        else if (ctx->pc != 0x1C841Cu) { ctx->pc = 0x1C841Cu; }
    }
    if (ctx->pc != 0x1C841Cu) { return; }
    ctx->pc = 0x1C841Cu;
    // 0x1c841c: 0x0
    ctx->pc = 0x1c841cu;
    // NOP
label_1c8420:
    // 0x1c8420: 0x83848ba8
    ctx->pc = 0x1c8420u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1c8424:
    // 0x1c8424: 0x24030005
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8428: 0x108300a3
    ctx->pc = 0x1C8428u;
    {
        const bool branch_taken_0x1c8428 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c8428) {
            ctx->pc = 0x1C86B8u;
            goto label_1c86b8;
        }
    }
    ctx->pc = 0x1C8430u;
    // 0x1c8430: 0x24030003
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8434: 0x1083007c
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8438u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 36));
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C8628u;
            goto label_1c8628;
        }
    }
    ctx->pc = 0x1C843Cu;
    // 0x1c843c: 0x24030002
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8440: 0x1083006d
    ctx->pc = 0x1C8440u;
    {
        const bool branch_taken_0x1c8440 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8444u;
        SET_GPR_U32(ctx, 3, ((uint32_t)208 << 16));
        if (branch_taken_0x1c8440) {
            ctx->pc = 0x1C85F8u;
            goto label_1c85f8;
        }
    }
    ctx->pc = 0x1C8448u;
    // 0x1c8448: 0x24030001
    ctx->pc = 0x1c8448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c844c: 0x10830057
    ctx->pc = 0x1C844Cu;
    {
        const bool branch_taken_0x1c844c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8450u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 21), 5));
        if (branch_taken_0x1c844c) {
            ctx->pc = 0x1C85ACu;
            goto label_1c85ac;
        }
    }
    ctx->pc = 0x1C8454u;
    // 0x1c8454: 0x10800003
    ctx->pc = 0x1C8454u;
    {
        const bool branch_taken_0x1c8454 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8454) {
            ctx->pc = 0x1C8464u;
            goto label_1c8464;
        }
    }
    ctx->pc = 0x1C845Cu;
    // 0x1c845c: 0x100000a4
    ctx->pc = 0x1C845Cu;
    {
        const bool branch_taken_0x1c845c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c845c) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8464u;
label_1c8464:
    // 0x1c8464: 0x86840008
    ctx->pc = 0x1c8464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c8468: 0x24030002
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c846c: 0x10830004
    ctx->pc = 0x1C846Cu;
    {
        const bool branch_taken_0x1c846c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8470u;
        SET_GPR_U32(ctx, 4, ((uint32_t)178 << 16));
        if (branch_taken_0x1c846c) {
            ctx->pc = 0x1C8480u;
            goto label_1c8480;
        }
    }
    ctx->pc = 0x1C8474u;
    // 0x1c8474: 0x1000009e
    ctx->pc = 0x1C8474u;
    {
        const bool branch_taken_0x1c8474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8474) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C847Cu;
    // 0x1c847c: 0x3c0400b2
    ctx->pc = 0x1c847cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)178 << 16));
label_1c8480:
    // 0x1c8480: 0x3483002c
    ctx->pc = 0x1c8480u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 44));
    // 0x1c8484: 0x12430006
    ctx->pc = 0x1C8484u;
    {
        const bool branch_taken_0x1c8484 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8488u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 41));
        if (branch_taken_0x1c8484) {
            ctx->pc = 0x1C84A0u;
            goto label_1c84a0;
        }
    }
    ctx->pc = 0x1C848Cu;
    // 0x1c848c: 0x12430004
    ctx->pc = 0x1C848Cu;
    {
        const bool branch_taken_0x1c848c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8490u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 58));
        if (branch_taken_0x1c848c) {
            ctx->pc = 0x1C84A0u;
            goto label_1c84a0;
        }
    }
    ctx->pc = 0x1C8494u;
    // 0x1c8494: 0x16430019
    ctx->pc = 0x1C8494u;
    {
        const bool branch_taken_0x1c8494 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C8498u;
        SET_GPR_U32(ctx, 3, ((uint32_t)178 << 16));
        if (branch_taken_0x1c8494) {
            ctx->pc = 0x1C84FCu;
            goto label_1c84fc;
        }
    }
    ctx->pc = 0x1C849Cu;
    // 0x1c849c: 0x0
    ctx->pc = 0x1c849cu;
    // NOP
label_1c84a0:
    // 0x1c84a0: 0xc06aafc
    ctx->pc = 0x1C84A0u;
    SET_GPR_U32(ctx, 31, 0x1C84A8u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84A8u; }
        else if (ctx->pc != 0x1C84A8u) { ctx->pc = 0x1C84A8u; }
    }
    if (ctx->pc != 0x1C84A8u) { return; }
    ctx->pc = 0x1C84A8u;
    // 0x1c84a8: 0x3c023f51
    ctx->pc = 0x1c84a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16209 << 16));
    // 0x1c84ac: 0x3442a9fc
    ctx->pc = 0x1c84acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43516));
    // 0x1c84b0: 0x44827000
    ctx->pc = 0x1c84b0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1c84b4: 0x3c023f28
    ctx->pc = 0x1c84b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16168 << 16));
    // 0x1c84b8: 0x3442f5c3
    ctx->pc = 0x1c84b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 62915));
    // 0x1c84bc: 0x44826800
    ctx->pc = 0x1c84bcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1c84c0: 0x46007446
    ctx->pc = 0x1c84c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    // 0x1c84c4: 0x3c023f34
    ctx->pc = 0x1c84c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16180 << 16));
    // 0x1c84c8: 0x3442bc6a
    ctx->pc = 0x1c84c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 48234));
    // 0x1c84cc: 0x44826000
    ctx->pc = 0x1c84ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1c84d0: 0x0
    ctx->pc = 0x1c84d0u;
    // NOP
    // 0x1c84d4: 0x46006c06
    ctx->pc = 0x1c84d4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1c84d8: 0xc06aac8
    ctx->pc = 0x1C84D8u;
    SET_GPR_U32(ctx, 31, 0x1C84E0u);
    ctx->pc = 0x1C84DCu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84E0u; }
        else if (ctx->pc != 0x1C84E0u) { ctx->pc = 0x1C84E0u; }
    }
    if (ctx->pc != 0x1C84E0u) { return; }
    ctx->pc = 0x1C84E0u;
    // 0x1c84e0: 0xc0853ac
    ctx->pc = 0x1C84E0u;
    SET_GPR_U32(ctx, 31, 0x1C84E8u);
    ctx->pc = 0x1C84E4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84E8u; }
        else if (ctx->pc != 0x1C84E8u) { ctx->pc = 0x1C84E8u; }
    }
    if (ctx->pc != 0x1C84E8u) { return; }
    ctx->pc = 0x1C84E8u;
    // 0x1c84e8: 0xc06ab18
    ctx->pc = 0x1C84E8u;
    SET_GPR_U32(ctx, 31, 0x1C84F0u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C84F0u; }
        else if (ctx->pc != 0x1C84F0u) { ctx->pc = 0x1C84F0u; }
    }
    if (ctx->pc != 0x1C84F0u) { return; }
    ctx->pc = 0x1C84F0u;
    // 0x1c84f0: 0x70009e28
    ctx->pc = 0x1c84f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c84f4: 0x0
    ctx->pc = 0x1c84f4u;
    // NOP
    // 0x1c84f8: 0x3c0300b2
    ctx->pc = 0x1c84f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)178 << 16));
label_1c84fc:
    // 0x1c84fc: 0x34630001
    ctx->pc = 0x1c84fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1c8500: 0x243182a
    ctx->pc = 0x1c8500u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1c8504: 0x1460001d
    ctx->pc = 0x1C8504u;
    {
        const bool branch_taken_0x1c8504 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8508u;
        SET_GPR_U32(ctx, 3, ((uint32_t)178 << 16));
        if (branch_taken_0x1c8504) {
            ctx->pc = 0x1C857Cu;
            goto label_1c857c;
        }
    }
    ctx->pc = 0x1C850Cu;
    // 0x1c850c: 0x3c0100b2
    ctx->pc = 0x1c850cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)178 << 16));
    // 0x1c8510: 0x34210013
    ctx->pc = 0x1c8510u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 19));
    // 0x1c8514: 0x241082a
    ctx->pc = 0x1c8514u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 1)));
    // 0x1c8518: 0x10200017
    ctx->pc = 0x1C8518u;
    {
        const bool branch_taken_0x1c8518 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8518) {
            ctx->pc = 0x1C8578u;
            goto label_1c8578;
        }
    }
    ctx->pc = 0x1C8520u;
    // 0x1c8520: 0xc06aafc
    ctx->pc = 0x1C8520u;
    SET_GPR_U32(ctx, 31, 0x1C8528u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8528u; }
        else if (ctx->pc != 0x1C8528u) { ctx->pc = 0x1C8528u; }
    }
    if (ctx->pc != 0x1C8528u) { return; }
    ctx->pc = 0x1C8528u;
    // 0x1c8528: 0x3c023f4f
    ctx->pc = 0x1c8528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16207 << 16));
    // 0x1c852c: 0x34425c29
    ctx->pc = 0x1c852cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 23593));
    // 0x1c8530: 0x44827000
    ctx->pc = 0x1c8530u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1c8534: 0x3c023f41
    ctx->pc = 0x1c8534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16193 << 16));
    // 0x1c8538: 0x3442cac1
    ctx->pc = 0x1c8538u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 51905));
    // 0x1c853c: 0x44826800
    ctx->pc = 0x1c853cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1c8540: 0x46007446
    ctx->pc = 0x1c8540u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    // 0x1c8544: 0x3c023f47
    ctx->pc = 0x1c8544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16199 << 16));
    // 0x1c8548: 0x34422b02
    ctx->pc = 0x1c8548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11010));
    // 0x1c854c: 0x44826000
    ctx->pc = 0x1c854cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1c8550: 0x0
    ctx->pc = 0x1c8550u;
    // NOP
    // 0x1c8554: 0x46006c06
    ctx->pc = 0x1c8554u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1c8558: 0xc06aac8
    ctx->pc = 0x1C8558u;
    SET_GPR_U32(ctx, 31, 0x1C8560u);
    ctx->pc = 0x1C855Cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8560u; }
        else if (ctx->pc != 0x1C8560u) { ctx->pc = 0x1C8560u; }
    }
    if (ctx->pc != 0x1C8560u) { return; }
    ctx->pc = 0x1C8560u;
    // 0x1c8560: 0xc0853ac
    ctx->pc = 0x1C8560u;
    SET_GPR_U32(ctx, 31, 0x1C8568u);
    ctx->pc = 0x1C8564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8568u; }
        else if (ctx->pc != 0x1C8568u) { ctx->pc = 0x1C8568u; }
    }
    if (ctx->pc != 0x1C8568u) { return; }
    ctx->pc = 0x1C8568u;
    // 0x1c8568: 0xc06ab18
    ctx->pc = 0x1C8568u;
    SET_GPR_U32(ctx, 31, 0x1C8570u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8570u; }
        else if (ctx->pc != 0x1C8570u) { ctx->pc = 0x1C8570u; }
    }
    if (ctx->pc != 0x1C8570u) { return; }
    ctx->pc = 0x1C8570u;
    // 0x1c8570: 0x70009e28
    ctx->pc = 0x1c8570u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8574: 0x0
    ctx->pc = 0x1c8574u;
    // NOP
label_1c8578:
    // 0x1c8578: 0x3c0300b2
    ctx->pc = 0x1c8578u;
    SET_GPR_U32(ctx, 3, ((uint32_t)178 << 16));
label_1c857c:
    // 0x1c857c: 0x3463002e
    ctx->pc = 0x1c857cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46));
    // 0x1c8580: 0x1643005b
    ctx->pc = 0x1C8580u;
    {
        const bool branch_taken_0x1c8580 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8580) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8588u;
    // 0x1c8588: 0x8f838da8
    ctx->pc = 0x1c8588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x1c858c: 0x10600058
    ctx->pc = 0x1C858Cu;
    {
        const bool branch_taken_0x1c858c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8590u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 688));
        if (branch_taken_0x1c858c) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8594u;
    // 0x1c8594: 0x72802e28
    ctx->pc = 0x1c8594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1c8598: 0xc0858a4
    ctx->pc = 0x1C8598u;
    SET_GPR_U32(ctx, 31, 0x1C85A0u);
    ctx->pc = 0x1C859Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x216290u;
    {
        const uint32_t __entryPc = ctx->pc;
        Entry__16CPutEntryControlFP9CPutEntryi_0x216290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85A0u; }
        else if (ctx->pc != 0x1C85A0u) { ctx->pc = 0x1C85A0u; }
    }
    if (ctx->pc != 0x1C85A0u) { return; }
    ctx->pc = 0x1C85A0u;
    // 0x1c85a0: 0x10000053
    ctx->pc = 0x1C85A0u;
    {
        const bool branch_taken_0x1c85a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c85a0) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C85A8u;
    // 0x1c85a8: 0x2ea10005
    ctx->pc = 0x1c85a8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 21), 5));
label_1c85ac:
    // 0x1c85ac: 0x14200005
    ctx->pc = 0x1C85ACu;
    {
        const bool branch_taken_0x1c85ac = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C85B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
        if (branch_taken_0x1c85ac) {
            ctx->pc = 0x1C85C4u;
            goto label_1c85c4;
        }
    }
    ctx->pc = 0x1C85B4u;
    // 0x1c85b4: 0x2403003d
    ctx->pc = 0x1c85b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c85b8: 0x1623004d
    ctx->pc = 0x1C85B8u;
    {
        const bool branch_taken_0x1c85b8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c85b8) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C85C0u;
    // 0x1c85c0: 0x27a40110
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
label_1c85c4:
    // 0x1c85c4: 0xc06bf00
    ctx->pc = 0x1C85C4u;
    SET_GPR_U32(ctx, 31, 0x1C85CCu);
    ctx->pc = 0x1C85C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 288));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85CCu; }
        else if (ctx->pc != 0x1C85CCu) { ctx->pc = 0x1C85CCu; }
    }
    if (ctx->pc != 0x1C85CCu) { return; }
    ctx->pc = 0x1C85CCu;
    // 0x1c85cc: 0xc7a10128
    ctx->pc = 0x1c85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c85d0: 0x3c03c47a
    ctx->pc = 0x1c85d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50298 << 16));
    // 0x1c85d4: 0x44830000
    ctx->pc = 0x1c85d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c85d8: 0x0
    ctx->pc = 0x1c85d8u;
    // NOP
    // 0x1c85dc: 0x46000836
    ctx->pc = 0x1c85dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c85e0: 0x0
    ctx->pc = 0x1c85e0u;
    // NOP
    // 0x1c85e4: 0x45000042
    ctx->pc = 0x1C85E4u;
    {
        const bool branch_taken_0x1c85e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c85e4) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C85ECu;
    // 0x1c85ec: 0x10000040
    ctx->pc = 0x1C85ECu;
    {
        const bool branch_taken_0x1c85ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C85F0u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c85ec) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C85F4u;
    // 0x1c85f4: 0x3c0300d0
    ctx->pc = 0x1c85f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)208 << 16));
label_1c85f8:
    // 0x1c85f8: 0x34630012
    ctx->pc = 0x1c85f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 18));
    // 0x1c85fc: 0x1643003c
    ctx->pc = 0x1C85FCu;
    {
        const bool branch_taken_0x1c85fc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c85fc) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8604u;
    // 0x1c8604: 0x8f838da8
    ctx->pc = 0x1c8604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
    // 0x1c8608: 0x10600039
    ctx->pc = 0x1C8608u;
    {
        const bool branch_taken_0x1c8608 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C860Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 688));
        if (branch_taken_0x1c8608) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8610u;
    // 0x1c8610: 0x72802e28
    ctx->pc = 0x1c8610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1c8614: 0xc0858a4
    ctx->pc = 0x1C8614u;
    SET_GPR_U32(ctx, 31, 0x1C861Cu);
    ctx->pc = 0x1C8618u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x216290u;
    {
        const uint32_t __entryPc = ctx->pc;
        Entry__16CPutEntryControlFP9CPutEntryi_0x216290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C861Cu; }
        else if (ctx->pc != 0x1C861Cu) { ctx->pc = 0x1C861Cu; }
    }
    if (ctx->pc != 0x1C861Cu) { return; }
    ctx->pc = 0x1C861Cu;
    // 0x1c861c: 0x10000034
    ctx->pc = 0x1C861Cu;
    {
        const bool branch_taken_0x1c861c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8620u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c861c) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C8624u;
    // 0x1c8624: 0x2a230024
    ctx->pc = 0x1c8624u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 36));
label_1c8628:
    // 0x1c8628: 0x14600010
    ctx->pc = 0x1C8628u;
    {
        const bool branch_taken_0x1c8628 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C862Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
        if (branch_taken_0x1c8628) {
            ctx->pc = 0x1C866Cu;
            goto label_1c866c;
        }
    }
    ctx->pc = 0x1C8630u;
    // 0x1c8630: 0x2a21003a
    ctx->pc = 0x1c8630u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 58));
    // 0x1c8634: 0x1020000c
    ctx->pc = 0x1C8634u;
    {
        const bool branch_taken_0x1c8634 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
        if (branch_taken_0x1c8634) {
            ctx->pc = 0x1C8668u;
            goto label_1c8668;
        }
    }
    ctx->pc = 0x1C863Cu;
    // 0x1c863c: 0xc06bf00
    ctx->pc = 0x1C863Cu;
    SET_GPR_U32(ctx, 31, 0x1C8644u);
    ctx->pc = 0x1C8640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 288));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8644u; }
        else if (ctx->pc != 0x1C8644u) { ctx->pc = 0x1C8644u; }
    }
    if (ctx->pc != 0x1C8644u) { return; }
    ctx->pc = 0x1C8644u;
    // 0x1c8644: 0xc7a10128
    ctx->pc = 0x1c8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8648: 0x3c03c47a
    ctx->pc = 0x1c8648u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50298 << 16));
    // 0x1c864c: 0x44830000
    ctx->pc = 0x1c864cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c8650: 0x0
    ctx->pc = 0x1c8650u;
    // NOP
    // 0x1c8654: 0x46000836
    ctx->pc = 0x1c8654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8658: 0x0
    ctx->pc = 0x1c8658u;
    // NOP
    // 0x1c865c: 0x45000002
    ctx->pc = 0x1C865Cu;
    {
        const bool branch_taken_0x1c865c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c865c) {
            ctx->pc = 0x1C8668u;
            goto label_1c8668;
        }
    }
    ctx->pc = 0x1C8664u;
    // 0x1c8664: 0x70009e28
    ctx->pc = 0x1c8664u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c8668:
    // 0x1c8668: 0x24030049
    ctx->pc = 0x1c8668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
label_1c866c:
    // 0x1c866c: 0x12230004
    ctx->pc = 0x1C866Cu;
    {
        const bool branch_taken_0x1c866c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8670u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
        if (branch_taken_0x1c866c) {
            ctx->pc = 0x1C8680u;
            goto label_1c8680;
        }
    }
    ctx->pc = 0x1C8674u;
    // 0x1c8674: 0x1623001e
    ctx->pc = 0x1C8674u;
    {
        const bool branch_taken_0x1c8674 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c8674) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C867Cu;
    // 0x1c867c: 0x0
    ctx->pc = 0x1c867cu;
    // NOP
label_1c8680:
    // 0x1c8680: 0xc68c0018
    ctx->pc = 0x1c8680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8684: 0x44800000
    ctx->pc = 0x1c8684u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1c8688: 0x0
    ctx->pc = 0x1c8688u;
    // NOP
    // 0x1c868c: 0x46006036
    ctx->pc = 0x1c868cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8690: 0x0
    ctx->pc = 0x1c8690u;
    // NOP
    // 0x1c8694: 0x45030006
    ctx->pc = 0x1C8694u;
    {
        const bool branch_taken_0x1c8694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8694) {
            ctx->pc = 0x1C8698u;
            SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1C86B0u;
            goto label_1c86b0;
        }
    }
    ctx->pc = 0x1C869Cu;
    // 0x1c869c: 0xc08541c
    ctx->pc = 0x1C869Cu;
    SET_GPR_U32(ctx, 31, 0x1C86A4u);
    ctx->pc = 0x1C86A0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86A4u; }
        else if (ctx->pc != 0x1C86A4u) { ctx->pc = 0x1C86A4u; }
    }
    if (ctx->pc != 0x1C86A4u) { return; }
    ctx->pc = 0x1C86A4u;
    // 0x1c86a4: 0x10000012
    ctx->pc = 0x1C86A4u;
    {
        const bool branch_taken_0x1c86a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c86a4) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86ACu;
    // 0x1c86ac: 0x70009e28
    ctx->pc = 0x1c86acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c86b0:
    // 0x1c86b0: 0x1000000f
    ctx->pc = 0x1C86B0u;
    {
        const bool branch_taken_0x1c86b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c86b0) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86B8u;
label_1c86b8:
    // 0x1c86b8: 0x3c020050
    ctx->pc = 0x1c86b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1c86bc: 0xc07ce18
    ctx->pc = 0x1C86BCu;
    SET_GPR_U32(ctx, 31, 0x1C86C4u);
    ctx->pc = 0x1C86C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86C4u; }
        else if (ctx->pc != 0x1C86C4u) { ctx->pc = 0x1C86C4u; }
    }
    if (ctx->pc != 0x1C86C4u) { return; }
    ctx->pc = 0x1C86C4u;
    // 0x1c86c4: 0x1c40000a
    ctx->pc = 0x1C86C4u;
    {
        const bool branch_taken_0x1c86c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C86C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1c86c4) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86CCu;
    // 0x1c86cc: 0x16230008
    ctx->pc = 0x1C86CCu;
    {
        const bool branch_taken_0x1c86cc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c86cc) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86D4u;
    // 0x1c86d4: 0x3c023a80
    ctx->pc = 0x1c86d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14976 << 16));
    // 0x1c86d8: 0x3442db5d
    ctx->pc = 0x1c86d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56157));
    // 0x1c86dc: 0x44826000
    ctx->pc = 0x1c86dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1c86e0: 0x44806800
    ctx->pc = 0x1c86e0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1c86e4: 0xc24af3c
    ctx->pc = 0x1C86E4u;
    SET_GPR_U32(ctx, 31, 0x1C86ECu);
    ctx->pc = 0x1C86E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C86ECu; }
        else if (ctx->pc != 0x1C86ECu) { ctx->pc = 0x1C86ECu; }
    }
    if (ctx->pc != 0x1C86ECu) { return; }
    ctx->pc = 0x1C86ECu;
    // 0x1c86ec: 0x0
    ctx->pc = 0x1c86ecu;
    // NOP
label_1c86f0:
    // 0x1c86f0: 0x52600010
    ctx->pc = 0x1C86F0u;
    {
        const bool branch_taken_0x1c86f0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c86f0) {
            ctx->pc = 0x1C86F4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x1C8734u;
            goto label_1c8734;
        }
    }
    ctx->pc = 0x1C86F8u;
    // 0x1c86f8: 0xc085528
    ctx->pc = 0x1C86F8u;
    SET_GPR_U32(ctx, 31, 0x1C8700u);
    ctx->pc = 0x1C86FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8700u; }
        else if (ctx->pc != 0x1C8700u) { ctx->pc = 0x1C8700u; }
    }
    if (ctx->pc != 0x1C8700u) { return; }
    ctx->pc = 0x1C8700u;
    // 0x1c8700: 0x1040000b
    ctx->pc = 0x1C8700u;
    {
        const bool branch_taken_0x1c8700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8700) {
            ctx->pc = 0x1C8730u;
            goto label_1c8730;
        }
    }
    ctx->pc = 0x1C8708u;
    // 0x1c8708: 0x12c00006
    ctx->pc = 0x1C8708u;
    {
        const bool branch_taken_0x1c8708 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C870Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c8708) {
            ctx->pc = 0x1C8724u;
            goto label_1c8724;
        }
    }
    ctx->pc = 0x1C8710u;
    // 0x1c8710: 0xc0853c8
    ctx->pc = 0x1C8710u;
    SET_GPR_U32(ctx, 31, 0x1C8718u);
    ctx->pc = 0x1C8714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8718u; }
        else if (ctx->pc != 0x1C8718u) { ctx->pc = 0x1C8718u; }
    }
    if (ctx->pc != 0x1C8718u) { return; }
    ctx->pc = 0x1C8718u;
    // 0x1c8718: 0x10000005
    ctx->pc = 0x1C8718u;
    {
        const bool branch_taken_0x1c8718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8718) {
            ctx->pc = 0x1C8730u;
            goto label_1c8730;
        }
    }
    ctx->pc = 0x1C8720u;
    // 0x1c8720: 0x72402628
    ctx->pc = 0x1c8720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1c8724:
    // 0x1c8724: 0xc0853ac
    ctx->pc = 0x1C8724u;
    SET_GPR_U32(ctx, 31, 0x1C872Cu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C872Cu; }
        else if (ctx->pc != 0x1C872Cu) { ctx->pc = 0x1C872Cu; }
    }
    if (ctx->pc != 0x1C872Cu) { return; }
    ctx->pc = 0x1C872Cu;
    // 0x1c872c: 0x0
    ctx->pc = 0x1c872cu;
    // NOP
label_1c8730:
    // 0x1c8730: 0x26520001
    ctx->pc = 0x1c8730u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1c8734:
    // 0x1c8734: 0x0
    ctx->pc = 0x1c8734u;
    // NOP
label_1c8738:
    // 0x1c8738: 0x8e030004
    ctx->pc = 0x1c8738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c873c: 0x72082a
    ctx->pc = 0x1c873cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x1c8740: 0x1020ff0f
    ctx->pc = 0x1C8740u;
    {
        const bool branch_taken_0x1c8740 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8744u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c8740) {
            ctx->pc = 0x1C8380u;
            goto label_1c8380;
        }
    }
    ctx->pc = 0x1C8748u;
    // 0x1c8748: 0x8fa300f0
    ctx->pc = 0x1c8748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c874c: 0x10600004
    ctx->pc = 0x1C874Cu;
    {
        const bool branch_taken_0x1c874c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c874c) {
            ctx->pc = 0x1C8760u;
            goto label_1c8760;
        }
    }
    ctx->pc = 0x1C8754u;
    // 0x1c8754: 0xc06ab18
    ctx->pc = 0x1C8754u;
    SET_GPR_U32(ctx, 31, 0x1C875Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C875Cu; }
        else if (ctx->pc != 0x1C875Cu) { ctx->pc = 0x1C875Cu; }
    }
    if (ctx->pc != 0x1C875Cu) { return; }
    ctx->pc = 0x1C875Cu;
    // 0x1c875c: 0x0
    ctx->pc = 0x1c875cu;
    // NOP
label_1c8760:
    // 0x1c8760: 0x8fa300e0
    ctx->pc = 0x1c8760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c8764: 0x10600012
    ctx->pc = 0x1C8764u;
    {
        const bool branch_taken_0x1c8764 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8764) {
            ctx->pc = 0x1C87B0u;
            goto label_1c87b0;
        }
    }
    ctx->pc = 0x1C876Cu;
    // 0x1c876c: 0xc06c490
    ctx->pc = 0x1C876Cu;
    SET_GPR_U32(ctx, 31, 0x1C8774u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8774u; }
        else if (ctx->pc != 0x1C8774u) { ctx->pc = 0x1C8774u; }
    }
    if (ctx->pc != 0x1C8774u) { return; }
    ctx->pc = 0x1C8774u;
    // 0x1c8774: 0x94430080
    ctx->pc = 0x1c8774u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1c8778: 0x24500080
    ctx->pc = 0x1c8778u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 128));
    // 0x1c877c: 0x70002628
    ctx->pc = 0x1c877cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8780: 0x70003e28
    ctx->pc = 0x1c8780u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8784: 0x90420083
    ctx->pc = 0x1c8784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 131)));
    // 0x1c8788: 0x306501ff
    ctx->pc = 0x1c8788u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x1c878c: 0xc06c59c
    ctx->pc = 0x1C878Cu;
    SET_GPR_U32(ctx, 31, 0x1C8794u);
    ctx->pc = 0x1C8790u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8794u; }
        else if (ctx->pc != 0x1C8794u) { ctx->pc = 0x1C8794u; }
    }
    if (ctx->pc != 0x1C8794u) { return; }
    ctx->pc = 0x1C8794u;
    // 0x1c8794: 0x96030000
    ctx->pc = 0x1c8794u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8798: 0x92020003
    ctx->pc = 0x1c8798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c879c: 0x24040200
    ctx->pc = 0x1c879cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c87a0: 0x70003e28
    ctx->pc = 0x1c87a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c87a4: 0x306501ff
    ctx->pc = 0x1c87a4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
    // 0x1c87a8: 0xc06c59c
    ctx->pc = 0x1C87A8u;
    SET_GPR_U32(ctx, 31, 0x1C87B0u);
    ctx->pc = 0x1C87ACu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87B0u; }
        else if (ctx->pc != 0x1C87B0u) { ctx->pc = 0x1C87B0u; }
    }
    if (ctx->pc != 0x1C87B0u) { return; }
    ctx->pc = 0x1C87B0u;
label_1c87b0:
    // 0x1c87b0: 0x8fa300c0
    ctx->pc = 0x1c87b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c87b4: 0x1460000c
    ctx->pc = 0x1C87B4u;
    {
        const bool branch_taken_0x1c87b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c87b4) {
            ctx->pc = 0x1C87E8u;
            goto label_1c87e8;
        }
    }
    ctx->pc = 0x1C87BCu;
    // 0x1c87bc: 0x8fa300d0
    ctx->pc = 0x1c87bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c87c0: 0x14600009
    ctx->pc = 0x1C87C0u;
    {
        const bool branch_taken_0x1c87c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c87c0) {
            ctx->pc = 0x1C87E8u;
            goto label_1c87e8;
        }
    }
    ctx->pc = 0x1C87C8u;
    // 0x1c87c8: 0x8fa30100
    ctx->pc = 0x1c87c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c87cc: 0x14600006
    ctx->pc = 0x1C87CCu;
    {
        const bool branch_taken_0x1c87cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c87cc) {
            ctx->pc = 0x1C87E8u;
            goto label_1c87e8;
        }
    }
    ctx->pc = 0x1C87D4u;
    // 0x1c87d4: 0x17c00004
    ctx->pc = 0x1C87D4u;
    {
        const bool branch_taken_0x1c87d4 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c87d4) {
            ctx->pc = 0x1C87E8u;
            goto label_1c87e8;
        }
    }
    ctx->pc = 0x1C87DCu;
    // 0x1c87dc: 0x12e00006
    ctx->pc = 0x1C87DCu;
    {
        const bool branch_taken_0x1c87dc = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c87dc) {
            ctx->pc = 0x1C87F8u;
            goto label_1c87f8;
        }
    }
    ctx->pc = 0x1C87E4u;
    // 0x1c87e4: 0x0
    ctx->pc = 0x1c87e4u;
    // NOP
label_1c87e8:
    // 0x1c87e8: 0x4bff6b7e
    ctx->pc = 0x1c87e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1c87ec: 0x4bfe6b7e
    ctx->pc = 0x1c87ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1c87f0: 0x4bfd6b7e
    ctx->pc = 0x1c87f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1c87f4: 0x4bfc6b7e
    ctx->pc = 0x1c87f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1c87f8:
    // 0x1c87f8: 0x8fa300b0
    ctx->pc = 0x1c87f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c87fc: 0x84710000
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8800: 0x24630002
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c8804: 0xafa300b0
    ctx->pc = 0x1c8804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1c8808: 0x2403ffff
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c880c: 0x5623fdc6
    ctx->pc = 0x1C880Cu;
    {
        const bool branch_taken_0x1c880c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c880c) {
            ctx->pc = 0x1C8810u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
            ctx->pc = 0x1C7F28u;
            goto label_1c7f28;
        }
    }
    ctx->pc = 0x1C8814u;
    // 0x1c8814: 0x4bff6b7e
    ctx->pc = 0x1c8814u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1c8818: 0x4bfe6b7e
    ctx->pc = 0x1c8818u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1c881c: 0x4bfd6b7e
    ctx->pc = 0x1c881cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1c8820: 0x4bfc6b7e
    ctx->pc = 0x1c8820u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1c8824:
    // 0x1c8824: 0x7bbf00a0
    ctx->pc = 0x1c8824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8828: 0x7bbe0090
    ctx->pc = 0x1c8828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c882c: 0x7bb70080
    ctx->pc = 0x1c882cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8830: 0x7bb60070
    ctx->pc = 0x1c8830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8834: 0x7bb50060
    ctx->pc = 0x1c8834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8838: 0x7bb40050
    ctx->pc = 0x1c8838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c883c: 0x7bb30040
    ctx->pc = 0x1c883cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8840: 0x7bb20030
    ctx->pc = 0x1c8840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8844: 0x7bb10020
    ctx->pc = 0x1c8844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8848: 0x7bb00010
    ctx->pc = 0x1c8848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c884c: 0xc7b40000
    ctx->pc = 0x1c884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8850: 0x3e00008
    ctx->pc = 0x1C8850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7F28u: goto label_1c7f28;
            case 0x1C7FA0u: goto label_1c7fa0;
            case 0x1C7FB0u: goto label_1c7fb0;
            case 0x1C7FF0u: goto label_1c7ff0;
            case 0x1C8018u: goto label_1c8018;
            case 0x1C8048u: goto label_1c8048;
            case 0x1C8060u: goto label_1c8060;
            case 0x1C8090u: goto label_1c8090;
            case 0x1C80A8u: goto label_1c80a8;
            case 0x1C80D8u: goto label_1c80d8;
            case 0x1C80E8u: goto label_1c80e8;
            case 0x1C8138u: goto label_1c8138;
            case 0x1C8168u: goto label_1c8168;
            case 0x1C81C4u: goto label_1c81c4;
            case 0x1C81F0u: goto label_1c81f0;
            case 0x1C8214u: goto label_1c8214;
            case 0x1C8238u: goto label_1c8238;
            case 0x1C823Cu: goto label_1c823c;
            case 0x1C8254u: goto label_1c8254;
            case 0x1C8270u: goto label_1c8270;
            case 0x1C8280u: goto label_1c8280;
            case 0x1C830Cu: goto label_1c830c;
            case 0x1C834Cu: goto label_1c834c;
            case 0x1C8370u: goto label_1c8370;
            case 0x1C8374u: goto label_1c8374;
            case 0x1C8380u: goto label_1c8380;
            case 0x1C83A8u: goto label_1c83a8;
            case 0x1C83C0u: goto label_1c83c0;
            case 0x1C8420u: goto label_1c8420;
            case 0x1C8424u: goto label_1c8424;
            case 0x1C8464u: goto label_1c8464;
            case 0x1C8480u: goto label_1c8480;
            case 0x1C84A0u: goto label_1c84a0;
            case 0x1C84FCu: goto label_1c84fc;
            case 0x1C8578u: goto label_1c8578;
            case 0x1C857Cu: goto label_1c857c;
            case 0x1C85ACu: goto label_1c85ac;
            case 0x1C85C4u: goto label_1c85c4;
            case 0x1C85F8u: goto label_1c85f8;
            case 0x1C8628u: goto label_1c8628;
            case 0x1C8668u: goto label_1c8668;
            case 0x1C866Cu: goto label_1c866c;
            case 0x1C8680u: goto label_1c8680;
            case 0x1C86B0u: goto label_1c86b0;
            case 0x1C86B8u: goto label_1c86b8;
            case 0x1C86F0u: goto label_1c86f0;
            case 0x1C8724u: goto label_1c8724;
            case 0x1C8730u: goto label_1c8730;
            case 0x1C8734u: goto label_1c8734;
            case 0x1C8738u: goto label_1c8738;
            case 0x1C8760u: goto label_1c8760;
            case 0x1C87B0u: goto label_1c87b0;
            case 0x1C87E8u: goto label_1c87e8;
            case 0x1C87F8u: goto label_1c87f8;
            case 0x1C8824u: goto label_1c8824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8858u;
}
