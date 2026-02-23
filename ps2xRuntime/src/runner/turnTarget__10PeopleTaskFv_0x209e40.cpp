#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: turnTarget__10PeopleTaskFv
// Address: 0x209e40 - 0x20a270
void turnTarget__10PeopleTaskFv_0x209e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("turnTarget__10PeopleTaskFv");


    ctx->pc = 0x209e40u;

    // 0x209e40: 0x27bdffd0
    ctx->pc = 0x209e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209e44: 0x7fbf0010
    ctx->pc = 0x209e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x209e48: 0x7fb00000
    ctx->pc = 0x209e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209e4c: 0x70808628
    ctx->pc = 0x209e4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x209e50: 0x4bede37d
    ctx->pc = 0x209e50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x209e54: 0x4bedeb7d
    ctx->pc = 0x209e54u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x209e58: 0x4bedf37d
    ctx->pc = 0x209e58u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x209e5c: 0x4bedfb7d
    ctx->pc = 0x209e5cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x209e60: 0x8c831dd0
    ctx->pc = 0x209e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7632)));
    // 0x209e64: 0x2404ffff
    ctx->pc = 0x209e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209e68: 0x1464004b
    ctx->pc = 0x209E68u;
    {
        const bool branch_taken_0x209e68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x209E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x209e68) {
            ctx->pc = 0x209F98u;
            goto label_209f98;
        }
    }
    ctx->pc = 0x209E70u;
    // 0x209e70: 0x3c010050
    ctx->pc = 0x209e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x209e74: 0x8423e3ec
    ctx->pc = 0x209e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x209e78: 0x24020001
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e7c: 0x10620004
    ctx->pc = 0x209E7Cu;
    {
        const bool branch_taken_0x209e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x209e7c) {
            ctx->pc = 0x209E90u;
            goto label_209e90;
        }
    }
    ctx->pc = 0x209E84u;
    // 0x209e84: 0x82021e00
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
    // 0x209e88: 0x14440020
    ctx->pc = 0x209E88u;
    {
        const bool branch_taken_0x209e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x209e88) {
            ctx->pc = 0x209F0Cu;
            goto label_209f0c;
        }
    }
    ctx->pc = 0x209E90u;
label_209e90:
    // 0x209e90: 0x8f848c48
    ctx->pc = 0x209e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x209e94: 0x8c830004
    ctx->pc = 0x209e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209e98: 0x31040
    ctx->pc = 0x209e98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x209e9c: 0x431021
    ctx->pc = 0x209e9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ea0: 0x21080
    ctx->pc = 0x209ea0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x209ea4: 0x431021
    ctx->pc = 0x209ea4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ea8: 0x21100
    ctx->pc = 0x209ea8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x209eac: 0x441021
    ctx->pc = 0x209eacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209eb0: 0xc4400090
    ctx->pc = 0x209eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209eb4: 0xe6001dd4
    ctx->pc = 0x209eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7636), bits); }
    // 0x209eb8: 0x8f848c48
    ctx->pc = 0x209eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x209ebc: 0x8c830004
    ctx->pc = 0x209ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209ec0: 0x31040
    ctx->pc = 0x209ec0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x209ec4: 0x431021
    ctx->pc = 0x209ec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ec8: 0x21080
    ctx->pc = 0x209ec8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x209ecc: 0x431021
    ctx->pc = 0x209eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ed0: 0x21100
    ctx->pc = 0x209ed0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x209ed4: 0x441021
    ctx->pc = 0x209ed4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209ed8: 0xc4400094
    ctx->pc = 0x209ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209edc: 0xe6001dd8
    ctx->pc = 0x209edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7640), bits); }
    // 0x209ee0: 0x8f848c48
    ctx->pc = 0x209ee0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x209ee4: 0x8c830004
    ctx->pc = 0x209ee4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209ee8: 0x31040
    ctx->pc = 0x209ee8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x209eec: 0x431021
    ctx->pc = 0x209eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ef0: 0x21080
    ctx->pc = 0x209ef0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x209ef4: 0x431021
    ctx->pc = 0x209ef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ef8: 0x21100
    ctx->pc = 0x209ef8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x209efc: 0x441021
    ctx->pc = 0x209efcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209f00: 0xc4400098
    ctx->pc = 0x209f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209f04: 0x100000c8
    ctx->pc = 0x209F04u;
    {
        const bool branch_taken_0x209f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209F08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7644), bits); }
        if (branch_taken_0x209f04) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x209F0Cu;
label_209f0c:
    // 0x209f0c: 0x8f848c48
    ctx->pc = 0x209f0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x209f10: 0x8c830004
    ctx->pc = 0x209f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209f14: 0x31040
    ctx->pc = 0x209f14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x209f18: 0x431021
    ctx->pc = 0x209f18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209f1c: 0x21080
    ctx->pc = 0x209f1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x209f20: 0x431021
    ctx->pc = 0x209f20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209f24: 0x21100
    ctx->pc = 0x209f24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x209f28: 0x821021
    ctx->pc = 0x209f28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x209f2c: 0xc06c038
    ctx->pc = 0x209F2Cu;
    SET_GPR_U32(ctx, 31, 0x209F34u);
    ctx->pc = 0x209F30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F34u; }
        else if (ctx->pc != 0x209F34u) { ctx->pc = 0x209F34u; }
    }
    if (ctx->pc != 0x209F34u) { return; }
    ctx->pc = 0x209F34u;
    // 0x209f34: 0x82031e00
    ctx->pc = 0x209f34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
    // 0x209f38: 0x24020001
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x209f3c: 0x1062000c
    ctx->pc = 0x209F3Cu;
    {
        const bool branch_taken_0x209f3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x209f3c) {
            ctx->pc = 0x209F70u;
            goto label_209f70;
        }
    }
    ctx->pc = 0x209F44u;
    // 0x209f44: 0x10600003
    ctx->pc = 0x209F44u;
    {
        const bool branch_taken_0x209f44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x209f44) {
            ctx->pc = 0x209F54u;
            goto label_209f54;
        }
    }
    ctx->pc = 0x209F4Cu;
    // 0x209f4c: 0x1000000e
    ctx->pc = 0x209F4Cu;
    {
        const bool branch_taken_0x209f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209F50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
        if (branch_taken_0x209f4c) {
            ctx->pc = 0x209F88u;
            goto label_209f88;
        }
    }
    ctx->pc = 0x209F54u;
label_209f54:
    // 0x209f54: 0x44806800
    ctx->pc = 0x209f54u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x209f58: 0x3c02c000
    ctx->pc = 0x209f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x209f5c: 0x44826000
    ctx->pc = 0x209f5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x209f60: 0xc06c202
    ctx->pc = 0x209F60u;
    SET_GPR_U32(ctx, 31, 0x209F68u);
    ctx->pc = 0x209F64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F68u; }
        else if (ctx->pc != 0x209F68u) { ctx->pc = 0x209F68u; }
    }
    if (ctx->pc != 0x209F68u) { return; }
    ctx->pc = 0x209F68u;
    // 0x209f68: 0x10000006
    ctx->pc = 0x209F68u;
    {
        const bool branch_taken_0x209f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209f68) {
            ctx->pc = 0x209F84u;
            goto label_209f84;
        }
    }
    ctx->pc = 0x209F70u;
label_209f70:
    // 0x209f70: 0x44806800
    ctx->pc = 0x209f70u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x209f74: 0x3c024000
    ctx->pc = 0x209f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x209f78: 0x44826000
    ctx->pc = 0x209f78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x209f7c: 0xc06c202
    ctx->pc = 0x209F7Cu;
    SET_GPR_U32(ctx, 31, 0x209F84u);
    ctx->pc = 0x209F80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F84u; }
        else if (ctx->pc != 0x209F84u) { ctx->pc = 0x209F84u; }
    }
    if (ctx->pc != 0x209F84u) { return; }
    ctx->pc = 0x209F84u;
label_209f84:
    // 0x209f84: 0x26041dd4
    ctx->pc = 0x209f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
label_209f88:
    // 0x209f88: 0xc06bfd2
    ctx->pc = 0x209F88u;
    SET_GPR_U32(ctx, 31, 0x209F90u);
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F90u; }
        else if (ctx->pc != 0x209F90u) { ctx->pc = 0x209F90u; }
    }
    if (ctx->pc != 0x209F90u) { return; }
    ctx->pc = 0x209F90u;
    // 0x209f90: 0x100000a6
    ctx->pc = 0x209F90u;
    {
        const bool branch_taken_0x209f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209F94u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x209f90) {
            ctx->pc = 0x20A22Cu;
            goto label_20a22c;
        }
    }
    ctx->pc = 0x209F98u;
label_209f98:
    // 0x209f98: 0x1462002e
    ctx->pc = 0x209F98u;
    {
        const bool branch_taken_0x209f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x209F9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x209f98) {
            ctx->pc = 0x20A054u;
            goto label_20a054;
        }
    }
    ctx->pc = 0x209FA0u;
    // 0x209fa0: 0x8f848c48
    ctx->pc = 0x209fa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x209fa4: 0x8c830004
    ctx->pc = 0x209fa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209fa8: 0x31040
    ctx->pc = 0x209fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x209fac: 0x431021
    ctx->pc = 0x209facu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209fb0: 0x21080
    ctx->pc = 0x209fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x209fb4: 0x431021
    ctx->pc = 0x209fb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209fb8: 0x21100
    ctx->pc = 0x209fb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x209fbc: 0x821021
    ctx->pc = 0x209fbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x209fc0: 0xc06c038
    ctx->pc = 0x209FC0u;
    SET_GPR_U32(ctx, 31, 0x209FC8u);
    ctx->pc = 0x209FC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FC8u; }
        else if (ctx->pc != 0x209FC8u) { ctx->pc = 0x209FC8u; }
    }
    if (ctx->pc != 0x209FC8u) { return; }
    ctx->pc = 0x209FC8u;
    // 0x209fc8: 0x8e030030
    ctx->pc = 0x209fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x209fcc: 0x3c02c1f0
    ctx->pc = 0x209fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49648 << 16));
    // 0x209fd0: 0x44806000
    ctx->pc = 0x209fd0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x209fd4: 0x44820000
    ctx->pc = 0x209fd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x209fd8: 0x46006346
    ctx->pc = 0x209fd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x209fdc: 0xc4610038
    ctx->pc = 0x209fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209fe0: 0xc06c202
    ctx->pc = 0x209FE0u;
    SET_GPR_U32(ctx, 31, 0x209FE8u);
    ctx->pc = 0x209FE4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FE8u; }
        else if (ctx->pc != 0x209FE8u) { ctx->pc = 0x209FE8u; }
    }
    if (ctx->pc != 0x209FE8u) { return; }
    ctx->pc = 0x209FE8u;
    // 0x209fe8: 0xc06bfd2
    ctx->pc = 0x209FE8u;
    SET_GPR_U32(ctx, 31, 0x209FF0u);
    ctx->pc = 0x209FECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FF0u; }
        else if (ctx->pc != 0x209FF0u) { ctx->pc = 0x209FF0u; }
    }
    if (ctx->pc != 0x209FF0u) { return; }
    ctx->pc = 0x209FF0u;
    // 0x209ff0: 0x8e030030
    ctx->pc = 0x209ff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x209ff4: 0x3c024000
    ctx->pc = 0x209ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x209ff8: 0x44821000
    ctx->pc = 0x209ff8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x209ffc: 0xc6001dd4
    ctx->pc = 0x209ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a000: 0xc4610000
    ctx->pc = 0x20a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a004: 0x46011042
    ctx->pc = 0x20a004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a008: 0x46000801
    ctx->pc = 0x20a008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a00c: 0xe6001dd4
    ctx->pc = 0x20a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7636), bits); }
    // 0x20a010: 0x8f848c48
    ctx->pc = 0x20a010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a014: 0x8c830004
    ctx->pc = 0x20a014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a018: 0x31040
    ctx->pc = 0x20a018u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a01c: 0x431021
    ctx->pc = 0x20a01cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a020: 0x21080
    ctx->pc = 0x20a020u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a024: 0x431021
    ctx->pc = 0x20a024u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a028: 0x21100
    ctx->pc = 0x20a028u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a02c: 0x441021
    ctx->pc = 0x20a02cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a030: 0xc4400094
    ctx->pc = 0x20a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a034: 0xe6001dd8
    ctx->pc = 0x20a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7640), bits); }
    // 0x20a038: 0x8e020030
    ctx->pc = 0x20a038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a03c: 0xc6001ddc
    ctx->pc = 0x20a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a040: 0xc4410008
    ctx->pc = 0x20a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a044: 0x46011042
    ctx->pc = 0x20a044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a048: 0x46000801
    ctx->pc = 0x20a048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a04c: 0x10000076
    ctx->pc = 0x20A04Cu;
    {
        const bool branch_taken_0x20a04c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A050u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7644), bits); }
        if (branch_taken_0x20a04c) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x20A054u;
label_20a054:
    // 0x20a054: 0x1462002e
    ctx->pc = 0x20A054u;
    {
        const bool branch_taken_0x20a054 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20A058u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x20a054) {
            ctx->pc = 0x20A110u;
            goto label_20a110;
        }
    }
    ctx->pc = 0x20A05Cu;
    // 0x20a05c: 0x8f848c48
    ctx->pc = 0x20a05cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a060: 0x8c830004
    ctx->pc = 0x20a060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a064: 0x31040
    ctx->pc = 0x20a064u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a068: 0x431021
    ctx->pc = 0x20a068u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a06c: 0x21080
    ctx->pc = 0x20a06cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a070: 0x431021
    ctx->pc = 0x20a070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a074: 0x21100
    ctx->pc = 0x20a074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a078: 0x821021
    ctx->pc = 0x20a078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a07c: 0xc06c038
    ctx->pc = 0x20A07Cu;
    SET_GPR_U32(ctx, 31, 0x20A084u);
    ctx->pc = 0x20A080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A084u; }
        else if (ctx->pc != 0x20A084u) { ctx->pc = 0x20A084u; }
    }
    if (ctx->pc != 0x20A084u) { return; }
    ctx->pc = 0x20A084u;
    // 0x20a084: 0x8e030030
    ctx->pc = 0x20a084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a088: 0x3c02c1f0
    ctx->pc = 0x20a088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49648 << 16));
    // 0x20a08c: 0x44820000
    ctx->pc = 0x20a08cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20a090: 0x44806800
    ctx->pc = 0x20a090u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x20a094: 0xc4610038
    ctx->pc = 0x20a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a098: 0xc46c0030
    ctx->pc = 0x20a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a09c: 0xc06c202
    ctx->pc = 0x20A09Cu;
    SET_GPR_U32(ctx, 31, 0x20A0A4u);
    ctx->pc = 0x20A0A0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0A4u; }
        else if (ctx->pc != 0x20A0A4u) { ctx->pc = 0x20A0A4u; }
    }
    if (ctx->pc != 0x20A0A4u) { return; }
    ctx->pc = 0x20A0A4u;
    // 0x20a0a4: 0xc06bfd2
    ctx->pc = 0x20A0A4u;
    SET_GPR_U32(ctx, 31, 0x20A0ACu);
    ctx->pc = 0x20A0A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0ACu; }
        else if (ctx->pc != 0x20A0ACu) { ctx->pc = 0x20A0ACu; }
    }
    if (ctx->pc != 0x20A0ACu) { return; }
    ctx->pc = 0x20A0ACu;
    // 0x20a0ac: 0x8e030030
    ctx->pc = 0x20a0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a0b0: 0x3c024000
    ctx->pc = 0x20a0b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x20a0b4: 0x44821000
    ctx->pc = 0x20a0b4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x20a0b8: 0xc6001dd4
    ctx->pc = 0x20a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0bc: 0xc4610000
    ctx->pc = 0x20a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0c0: 0x46011042
    ctx->pc = 0x20a0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a0c4: 0x46000801
    ctx->pc = 0x20a0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a0c8: 0xe6001dd4
    ctx->pc = 0x20a0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7636), bits); }
    // 0x20a0cc: 0x8f848c48
    ctx->pc = 0x20a0ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a0d0: 0x8c830004
    ctx->pc = 0x20a0d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a0d4: 0x31040
    ctx->pc = 0x20a0d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a0d8: 0x431021
    ctx->pc = 0x20a0d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a0dc: 0x21080
    ctx->pc = 0x20a0dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a0e0: 0x431021
    ctx->pc = 0x20a0e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a0e4: 0x21100
    ctx->pc = 0x20a0e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a0e8: 0x441021
    ctx->pc = 0x20a0e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a0ec: 0xc4400094
    ctx->pc = 0x20a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0f0: 0xe6001dd8
    ctx->pc = 0x20a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7640), bits); }
    // 0x20a0f4: 0x8e020030
    ctx->pc = 0x20a0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a0f8: 0xc6001ddc
    ctx->pc = 0x20a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0fc: 0xc4410008
    ctx->pc = 0x20a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a100: 0x46011042
    ctx->pc = 0x20a100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a104: 0x46000801
    ctx->pc = 0x20a104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a108: 0x10000047
    ctx->pc = 0x20A108u;
    {
        const bool branch_taken_0x20a108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A10Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7644), bits); }
        if (branch_taken_0x20a108) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x20A110u;
label_20a110:
    // 0x20a110: 0x14620015
    ctx->pc = 0x20A110u;
    {
        const bool branch_taken_0x20a110 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20A114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x20a110) {
            ctx->pc = 0x20A168u;
            goto label_20a168;
        }
    }
    ctx->pc = 0x20A118u;
    // 0x20a118: 0x8e030030
    ctx->pc = 0x20a118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a11c: 0x3c024000
    ctx->pc = 0x20a11cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x20a120: 0x44821000
    ctx->pc = 0x20a120u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x20a124: 0x8e021df4
    ctx->pc = 0x20a124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7668)));
    // 0x20a128: 0xc4610000
    ctx->pc = 0x20a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a12c: 0xc4400000
    ctx->pc = 0x20a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a130: 0x46011042
    ctx->pc = 0x20a130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a134: 0x46000801
    ctx->pc = 0x20a134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a138: 0xe6001dd4
    ctx->pc = 0x20a138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7636), bits); }
    // 0x20a13c: 0x8e021df4
    ctx->pc = 0x20a13cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7668)));
    // 0x20a140: 0xc4400004
    ctx->pc = 0x20a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a144: 0xe6001dd8
    ctx->pc = 0x20a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7640), bits); }
    // 0x20a148: 0x8e030030
    ctx->pc = 0x20a148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20a14c: 0x8e021df4
    ctx->pc = 0x20a14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7668)));
    // 0x20a150: 0xc4610008
    ctx->pc = 0x20a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a154: 0xc4400008
    ctx->pc = 0x20a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a158: 0x46011042
    ctx->pc = 0x20a158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x20a15c: 0x46000801
    ctx->pc = 0x20a15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a160: 0x10000031
    ctx->pc = 0x20A160u;
    {
        const bool branch_taken_0x20a160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A164u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7644), bits); }
        if (branch_taken_0x20a160) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x20A168u;
label_20a168:
    // 0x20a168: 0x14620014
    ctx->pc = 0x20A168u;
    {
        const bool branch_taken_0x20a168 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20A16Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x20a168) {
            ctx->pc = 0x20A1BCu;
            goto label_20a1bc;
        }
    }
    ctx->pc = 0x20A170u;
    // 0x20a170: 0x8f848c48
    ctx->pc = 0x20a170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a174: 0x8c830004
    ctx->pc = 0x20a174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a178: 0x31040
    ctx->pc = 0x20a178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a17c: 0x431021
    ctx->pc = 0x20a17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a180: 0x21080
    ctx->pc = 0x20a180u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a184: 0x431021
    ctx->pc = 0x20a184u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a188: 0x21100
    ctx->pc = 0x20a188u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a18c: 0x821021
    ctx->pc = 0x20a18cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a190: 0xc06c038
    ctx->pc = 0x20A190u;
    SET_GPR_U32(ctx, 31, 0x20A198u);
    ctx->pc = 0x20A194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A198u; }
        else if (ctx->pc != 0x20A198u) { ctx->pc = 0x20A198u; }
    }
    if (ctx->pc != 0x20A198u) { return; }
    ctx->pc = 0x20A198u;
    // 0x20a198: 0x44806800
    ctx->pc = 0x20a198u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x20a19c: 0x3c02c120
    ctx->pc = 0x20a19cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49440 << 16));
    // 0x20a1a0: 0x44826000
    ctx->pc = 0x20a1a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20a1a4: 0xc06c202
    ctx->pc = 0x20A1A4u;
    SET_GPR_U32(ctx, 31, 0x20A1ACu);
    ctx->pc = 0x20A1A8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1ACu; }
        else if (ctx->pc != 0x20A1ACu) { ctx->pc = 0x20A1ACu; }
    }
    if (ctx->pc != 0x20A1ACu) { return; }
    ctx->pc = 0x20A1ACu;
    // 0x20a1ac: 0xc06bfd2
    ctx->pc = 0x20A1ACu;
    SET_GPR_U32(ctx, 31, 0x20A1B4u);
    ctx->pc = 0x20A1B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1B4u; }
        else if (ctx->pc != 0x20A1B4u) { ctx->pc = 0x20A1B4u; }
    }
    if (ctx->pc != 0x20A1B4u) { return; }
    ctx->pc = 0x20A1B4u;
    // 0x20a1b4: 0x1000001c
    ctx->pc = 0x20A1B4u;
    {
        const bool branch_taken_0x20a1b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a1b4) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x20A1BCu;
label_20a1bc:
    // 0x20a1bc: 0x14620014
    ctx->pc = 0x20A1BCu;
    {
        const bool branch_taken_0x20a1bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20a1bc) {
            ctx->pc = 0x20A210u;
            goto label_20a210;
        }
    }
    ctx->pc = 0x20A1C4u;
    // 0x20a1c4: 0x8f848c48
    ctx->pc = 0x20a1c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a1c8: 0x8c830004
    ctx->pc = 0x20a1c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a1cc: 0x31040
    ctx->pc = 0x20a1ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a1d0: 0x431021
    ctx->pc = 0x20a1d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a1d4: 0x21080
    ctx->pc = 0x20a1d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a1d8: 0x431021
    ctx->pc = 0x20a1d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a1dc: 0x21100
    ctx->pc = 0x20a1dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a1e0: 0x821021
    ctx->pc = 0x20a1e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20a1e4: 0xc06c038
    ctx->pc = 0x20A1E4u;
    SET_GPR_U32(ctx, 31, 0x20A1ECu);
    ctx->pc = 0x20A1E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1ECu; }
        else if (ctx->pc != 0x20A1ECu) { ctx->pc = 0x20A1ECu; }
    }
    if (ctx->pc != 0x20A1ECu) { return; }
    ctx->pc = 0x20A1ECu;
    // 0x20a1ec: 0x44806800
    ctx->pc = 0x20a1ecu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x20a1f0: 0x3c024120
    ctx->pc = 0x20a1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x20a1f4: 0x44826000
    ctx->pc = 0x20a1f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20a1f8: 0xc06c202
    ctx->pc = 0x20A1F8u;
    SET_GPR_U32(ctx, 31, 0x20A200u);
    ctx->pc = 0x20A1FCu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A200u; }
        else if (ctx->pc != 0x20A200u) { ctx->pc = 0x20A200u; }
    }
    if (ctx->pc != 0x20A200u) { return; }
    ctx->pc = 0x20A200u;
    // 0x20a200: 0xc06bfd2
    ctx->pc = 0x20A200u;
    SET_GPR_U32(ctx, 31, 0x20A208u);
    ctx->pc = 0x20A204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7636));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A208u; }
        else if (ctx->pc != 0x20A208u) { ctx->pc = 0x20A208u; }
    }
    if (ctx->pc != 0x20A208u) { return; }
    ctx->pc = 0x20A208u;
    // 0x20a208: 0x10000007
    ctx->pc = 0x20A208u;
    {
        const bool branch_taken_0x20a208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a208) {
            ctx->pc = 0x20A228u;
            goto label_20a228;
        }
    }
    ctx->pc = 0x20A210u;
label_20a210:
    // 0x20a210: 0xc4600000
    ctx->pc = 0x20a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a214: 0xe6001dd4
    ctx->pc = 0x20a214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7636), bits); }
    // 0x20a218: 0xc4600004
    ctx->pc = 0x20a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a21c: 0xe6001dd8
    ctx->pc = 0x20a21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7640), bits); }
    // 0x20a220: 0xc4600008
    ctx->pc = 0x20a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a224: 0xe6001ddc
    ctx->pc = 0x20a224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7644), bits); }
label_20a228:
    // 0x20a228: 0xc6001dd4
    ctx->pc = 0x20a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a22c:
    // 0x20a22c: 0x72002628
    ctx->pc = 0x20a22cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20a230: 0xe7a00020
    ctx->pc = 0x20a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20a234: 0xc6001dd8
    ctx->pc = 0x20a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a238: 0xe7a00024
    ctx->pc = 0x20a238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20a23c: 0xc6001ddc
    ctx->pc = 0x20a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a240: 0xe7a00028
    ctx->pc = 0x20a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20a244: 0x8e061de0
    ctx->pc = 0x20a244u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7648)));
    // 0x20a248: 0xc082744
    ctx->pc = 0x20A248u;
    SET_GPR_U32(ctx, 31, 0x20A250u);
    ctx->pc = 0x20A24Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x209D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        turnTargetSub__10PeopleTaskFP11tagNLpoint3i_0x209d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A250u; }
        else if (ctx->pc != 0x20A250u) { ctx->pc = 0x20A250u; }
    }
    if (ctx->pc != 0x20A250u) { return; }
    ctx->pc = 0x20A250u;
    // 0x20a250: 0x4bff6b7e
    ctx->pc = 0x20a250u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20a254: 0x4bfe6b7e
    ctx->pc = 0x20a254u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20a258: 0x4bfd6b7e
    ctx->pc = 0x20a258u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20a25c: 0x4bfc6b7e
    ctx->pc = 0x20a25cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x20a260: 0x7bbf0010
    ctx->pc = 0x20a260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a264: 0x7bb00000
    ctx->pc = 0x20a264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a268: 0x3e00008
    ctx->pc = 0x20A268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A26Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209E90u: goto label_209e90;
            case 0x209F0Cu: goto label_209f0c;
            case 0x209F54u: goto label_209f54;
            case 0x209F70u: goto label_209f70;
            case 0x209F84u: goto label_209f84;
            case 0x209F88u: goto label_209f88;
            case 0x209F98u: goto label_209f98;
            case 0x20A054u: goto label_20a054;
            case 0x20A110u: goto label_20a110;
            case 0x20A168u: goto label_20a168;
            case 0x20A1BCu: goto label_20a1bc;
            case 0x20A210u: goto label_20a210;
            case 0x20A228u: goto label_20a228;
            case 0x20A22Cu: goto label_20a22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A270u;
}
