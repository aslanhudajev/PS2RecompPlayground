#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutForEntry_st1__11BGCtrlClassFv
// Address: 0x1c89d0 - 0x1c8c60
void PutForEntry_st1__11BGCtrlClassFv_0x1c89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutForEntry_st1__11BGCtrlClassFv");


    ctx->pc = 0x1c89d0u;

    // 0x1c89d0: 0x27bdff40
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c89d4: 0x7fbf0090
    ctx->pc = 0x1c89d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1c89d8: 0x7fbe0080
    ctx->pc = 0x1c89d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c89dc: 0x7fb70070
    ctx->pc = 0x1c89dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c89e0: 0x7fb60060
    ctx->pc = 0x1c89e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c89e4: 0x7fb50050
    ctx->pc = 0x1c89e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c89e8: 0x7fb40040
    ctx->pc = 0x1c89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c89ec: 0x7fb30030
    ctx->pc = 0x1c89ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c89f0: 0x7fb20020
    ctx->pc = 0x1c89f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c89f4: 0x7fb10010
    ctx->pc = 0x1c89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c89f8: 0x7fb00000
    ctx->pc = 0x1c89f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c89fc: 0x3c030026
    ctx->pc = 0x1c89fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1c8a00: 0x7080a628
    ctx->pc = 0x1c8a00u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c8a04: 0x24704ce0
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 19680));
    // 0x1c8a08: 0x10000085
    ctx->pc = 0x1C8A08u;
    {
        const bool branch_taken_0x1c8a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8A0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a08) {
            ctx->pc = 0x1C8C20u;
            goto label_1c8c20;
        }
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0x86020008
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c8a14: 0x8617000a
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c8a18: 0x305e0002
    ctx->pc = 0x1c8a18u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 2), 2));
    // 0x1c8a1c: 0x30560030
    ctx->pc = 0x1c8a1cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 48));
    // 0x1c8a20: 0x30550040
    ctx->pc = 0x1c8a20u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 2), 64));
    // 0x1c8a24: 0x17c0000a
    ctx->pc = 0x1C8A24u;
    {
        const bool branch_taken_0x1c8a24 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8A28u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 128));
        if (branch_taken_0x1c8a24) {
            ctx->pc = 0x1C8A50u;
            goto label_1c8a50;
        }
    }
    ctx->pc = 0x1C8A2Cu;
    // 0x1c8a2c: 0x16e00008
    ctx->pc = 0x1C8A2Cu;
    {
        const bool branch_taken_0x1c8a2c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a2c) {
            ctx->pc = 0x1C8A50u;
            goto label_1c8a50;
        }
    }
    ctx->pc = 0x1C8A34u;
    // 0x1c8a34: 0x16c00006
    ctx->pc = 0x1C8A34u;
    {
        const bool branch_taken_0x1c8a34 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a34) {
            ctx->pc = 0x1C8A50u;
            goto label_1c8a50;
        }
    }
    ctx->pc = 0x1C8A3Cu;
    // 0x1c8a3c: 0x16a00004
    ctx->pc = 0x1C8A3Cu;
    {
        const bool branch_taken_0x1c8a3c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a3c) {
            ctx->pc = 0x1C8A50u;
            goto label_1c8a50;
        }
    }
    ctx->pc = 0x1C8A44u;
    // 0x1c8a44: 0x12400006
    ctx->pc = 0x1C8A44u;
    {
        const bool branch_taken_0x1c8a44 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a44) {
            ctx->pc = 0x1C8A60u;
            goto label_1c8a60;
        }
    }
    ctx->pc = 0x1C8A4Cu;
    // 0x1c8a4c: 0x0
    ctx->pc = 0x1c8a4cu;
    // NOP
label_1c8a50:
    // 0x1c8a50: 0x4bede37d
    ctx->pc = 0x1c8a50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1c8a54: 0x4bedeb7d
    ctx->pc = 0x1c8a54u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1c8a58: 0x4bedf37d
    ctx->pc = 0x1c8a58u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1c8a5c: 0x4bedfb7d
    ctx->pc = 0x1c8a5cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1c8a60:
    // 0x1c8a60: 0x13c0000d
    ctx->pc = 0x1C8A60u;
    {
        const bool branch_taken_0x1c8a60 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a60) {
            ctx->pc = 0x1C8A98u;
            goto label_1c8a98;
        }
    }
    ctx->pc = 0x1C8A68u;
    // 0x1c8a68: 0x8f848c48
    ctx->pc = 0x1c8a68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c8a6c: 0x44806800
    ctx->pc = 0x1c8a6cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1c8a70: 0x8c830004
    ctx->pc = 0x1c8a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8a74: 0x31040
    ctx->pc = 0x1c8a74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c8a78: 0x431021
    ctx->pc = 0x1c8a78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a7c: 0x21080
    ctx->pc = 0x1c8a7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c8a80: 0x431021
    ctx->pc = 0x1c8a80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8a84: 0x21100
    ctx->pc = 0x1c8a84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c8a88: 0x821021
    ctx->pc = 0x1c8a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c8a8c: 0xc44e0098
    ctx->pc = 0x1c8a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c8a90: 0xc06c202
    ctx->pc = 0x1C8A90u;
    SET_GPR_U32(ctx, 31, 0x1C8A98u);
    ctx->pc = 0x1C8A94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A98u; }
        else if (ctx->pc != 0x1C8A98u) { ctx->pc = 0x1C8A98u; }
    }
    if (ctx->pc != 0x1C8A98u) { return; }
    ctx->pc = 0x1C8A98u;
label_1c8a98:
    // 0x1c8a98: 0x12e00007
    ctx->pc = 0x1C8A98u;
    {
        const bool branch_taken_0x1c8a98 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8a98) {
            ctx->pc = 0x1C8AB8u;
            goto label_1c8ab8;
        }
    }
    ctx->pc = 0x1C8AA0u;
    // 0x1c8aa0: 0xc60d0010
    ctx->pc = 0x1c8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8aa4: 0xc60e0014
    ctx->pc = 0x1c8aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c8aa8: 0xc06c202
    ctx->pc = 0x1C8AA8u;
    SET_GPR_U32(ctx, 31, 0x1C8AB0u);
    ctx->pc = 0x1C8AACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AB0u; }
        else if (ctx->pc != 0x1C8AB0u) { ctx->pc = 0x1C8AB0u; }
    }
    if (ctx->pc != 0x1C8AB0u) { return; }
    ctx->pc = 0x1C8AB0u;
    // 0x1c8ab0: 0xc06c0fb
    ctx->pc = 0x1C8AB0u;
    SET_GPR_U32(ctx, 31, 0x1C8AB8u);
    ctx->pc = 0x1C8AB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AB8u; }
        else if (ctx->pc != 0x1C8AB8u) { ctx->pc = 0x1C8AB8u; }
    }
    if (ctx->pc != 0x1C8AB8u) { return; }
    ctx->pc = 0x1C8AB8u;
label_1c8ab8:
    // 0x1c8ab8: 0x12c00010
    ctx->pc = 0x1C8AB8u;
    {
        const bool branch_taken_0x1c8ab8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8ab8) {
            ctx->pc = 0x1C8AFCu;
            goto label_1c8afc;
        }
    }
    ctx->pc = 0x1C8AC0u;
    // 0x1c8ac0: 0x86020008
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c8ac4: 0x30420010
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1c8ac8: 0x10400006
    ctx->pc = 0x1C8AC8u;
    {
        const bool branch_taken_0x1c8ac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8ac8) {
            ctx->pc = 0x1C8AE4u;
            goto label_1c8ae4;
        }
    }
    ctx->pc = 0x1C8AD0u;
    // 0x1c8ad0: 0x8e820048
    ctx->pc = 0x1c8ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8ad4: 0xc06c0fb
    ctx->pc = 0x1C8AD4u;
    SET_GPR_U32(ctx, 31, 0x1C8ADCu);
    ctx->pc = 0x1C8AD8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8ADCu; }
        else if (ctx->pc != 0x1C8ADCu) { ctx->pc = 0x1C8ADCu; }
    }
    if (ctx->pc != 0x1C8ADCu) { return; }
    ctx->pc = 0x1C8ADCu;
    // 0x1c8adc: 0x10000012
    ctx->pc = 0x1C8ADCu;
    {
        const bool branch_taken_0x1c8adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8adc) {
            ctx->pc = 0x1C8B28u;
            goto label_1c8b28;
        }
    }
    ctx->pc = 0x1C8AE4u;
label_1c8ae4:
    // 0x1c8ae4: 0x8e820048
    ctx->pc = 0x1c8ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8ae8: 0x21023
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c8aec: 0xc06c0fb
    ctx->pc = 0x1C8AECu;
    SET_GPR_U32(ctx, 31, 0x1C8AF4u);
    ctx->pc = 0x1C8AF0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AF4u; }
        else if (ctx->pc != 0x1C8AF4u) { ctx->pc = 0x1C8AF4u; }
    }
    if (ctx->pc != 0x1C8AF4u) { return; }
    ctx->pc = 0x1C8AF4u;
    // 0x1c8af4: 0x1000000c
    ctx->pc = 0x1C8AF4u;
    {
        const bool branch_taken_0x1c8af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8af4) {
            ctx->pc = 0x1C8B28u;
            goto label_1c8b28;
        }
    }
    ctx->pc = 0x1C8AFCu;
label_1c8afc:
    // 0x1c8afc: 0x12a0000a
    ctx->pc = 0x1C8AFCu;
    {
        const bool branch_taken_0x1c8afc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8afc) {
            ctx->pc = 0x1C8B28u;
            goto label_1c8b28;
        }
    }
    ctx->pc = 0x1C8B04u;
    // 0x1c8b04: 0x8e820048
    ctx->pc = 0x1c8b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8b08: 0xc06c24e
    ctx->pc = 0x1C8B08u;
    SET_GPR_U32(ctx, 31, 0x1C8B10u);
    ctx->pc = 0x1C8B0Cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B10u; }
        else if (ctx->pc != 0x1C8B10u) { ctx->pc = 0x1C8B10u; }
    }
    if (ctx->pc != 0x1C8B10u) { return; }
    ctx->pc = 0x1C8B10u;
    // 0x1c8b10: 0x3c0243c0
    ctx->pc = 0x1c8b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17344 << 16));
    // 0x1c8b14: 0x44820800
    ctx->pc = 0x1c8b14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1c8b18: 0xc053146
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1C8B1Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B20u; }
        else if (ctx->pc != 0x1C8B20u) { ctx->pc = 0x1C8B20u; }
    }
    if (ctx->pc != 0x1C8B20u) { return; }
    ctx->pc = 0x1C8B20u;
    // 0x1c8b20: 0xc06c0fb
    ctx->pc = 0x1C8B20u;
    SET_GPR_U32(ctx, 31, 0x1C8B28u);
    ctx->pc = 0x1C8B24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B28u; }
        else if (ctx->pc != 0x1C8B28u) { ctx->pc = 0x1C8B28u; }
    }
    if (ctx->pc != 0x1C8B28u) { return; }
    ctx->pc = 0x1C8B28u;
label_1c8b28:
    // 0x1c8b28: 0x12400005
    ctx->pc = 0x1C8B28u;
    {
        const bool branch_taken_0x1c8b28 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8b28) {
            ctx->pc = 0x1C8B40u;
            goto label_1c8b40;
        }
    }
    ctx->pc = 0x1C8B30u;
    // 0x1c8b30: 0x8e820048
    ctx->pc = 0x1c8b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8b34: 0xc06c157
    ctx->pc = 0x1C8B34u;
    SET_GPR_U32(ctx, 31, 0x1C8B3Cu);
    ctx->pc = 0x1C8B38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B3Cu; }
        else if (ctx->pc != 0x1C8B3Cu) { ctx->pc = 0x1C8B3Cu; }
    }
    if (ctx->pc != 0x1C8B3Cu) { return; }
    ctx->pc = 0x1C8B3Cu;
    // 0x1c8b3c: 0x0
    ctx->pc = 0x1c8b3cu;
    // NOP
label_1c8b40:
    // 0x1c8b40: 0x3c020050
    ctx->pc = 0x1c8b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1c8b44: 0xc07ce18
    ctx->pc = 0x1C8B44u;
    SET_GPR_U32(ctx, 31, 0x1C8B4Cu);
    ctx->pc = 0x1C8B48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B4Cu; }
        else if (ctx->pc != 0x1C8B4Cu) { ctx->pc = 0x1C8B4Cu; }
    }
    if (ctx->pc != 0x1C8B4Cu) { return; }
    ctx->pc = 0x1C8B4Cu;
    // 0x1c8b4c: 0x1c40000c
    ctx->pc = 0x1C8B4Cu;
    {
        const bool branch_taken_0x1c8b4c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c8b4c) {
            ctx->pc = 0x1C8B80u;
            goto label_1c8b80;
        }
    }
    ctx->pc = 0x1C8B54u;
    // 0x1c8b54: 0x16a00006
    ctx->pc = 0x1C8B54u;
    {
        const bool branch_taken_0x1c8b54 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8b54) {
            ctx->pc = 0x1C8B70u;
            goto label_1c8b70;
        }
    }
    ctx->pc = 0x1C8B5Cu;
    // 0x1c8b5c: 0x16c00004
    ctx->pc = 0x1C8B5Cu;
    {
        const bool branch_taken_0x1c8b5c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8b5c) {
            ctx->pc = 0x1C8B70u;
            goto label_1c8b70;
        }
    }
    ctx->pc = 0x1C8B64u;
    // 0x1c8b64: 0x12400006
    ctx->pc = 0x1C8B64u;
    {
        const bool branch_taken_0x1c8b64 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8b64) {
            ctx->pc = 0x1C8B80u;
            goto label_1c8b80;
        }
    }
    ctx->pc = 0x1C8B6Cu;
    // 0x1c8b6c: 0x0
    ctx->pc = 0x1c8b6cu;
    // NOP
label_1c8b70:
    // 0x1c8b70: 0x8e830048
    ctx->pc = 0x1c8b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c8b74: 0x24630001
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8b78: 0xae830048
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
    // 0x1c8b7c: 0x0
    ctx->pc = 0x1c8b7cu;
    // NOP
label_1c8b80:
    // 0x1c8b80: 0x10000011
    ctx->pc = 0x1C8B80u;
    {
        const bool branch_taken_0x1c8b80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8B84u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1c8b80) {
            ctx->pc = 0x1C8BC8u;
            goto label_1c8bc8;
        }
    }
    ctx->pc = 0x1C8B88u;
    // 0x1c8b88: 0x72202628
    ctx->pc = 0x1c8b88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1c8b8c:
    // 0x1c8b8c: 0x27a500b0
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c8b90: 0xc085438
    ctx->pc = 0x1C8B90u;
    SET_GPR_U32(ctx, 31, 0x1C8B98u);
    ctx->pc = 0x1C8B94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B98u; }
        else if (ctx->pc != 0x1C8B98u) { ctx->pc = 0x1C8B98u; }
    }
    if (ctx->pc != 0x1C8B98u) { return; }
    ctx->pc = 0x1C8B98u;
    // 0x1c8b98: 0xc085528
    ctx->pc = 0x1C8B98u;
    SET_GPR_U32(ctx, 31, 0x1C8BA0u);
    ctx->pc = 0x1C8B9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BA0u; }
        else if (ctx->pc != 0x1C8BA0u) { ctx->pc = 0x1C8BA0u; }
    }
    if (ctx->pc != 0x1C8BA0u) { return; }
    ctx->pc = 0x1C8BA0u;
    // 0x1c8ba0: 0x14400003
    ctx->pc = 0x1C8BA0u;
    {
        const bool branch_taken_0x1c8ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8ba0) {
            ctx->pc = 0x1C8BB0u;
            goto label_1c8bb0;
        }
    }
    ctx->pc = 0x1C8BA8u;
    // 0x1c8ba8: 0x70009e28
    ctx->pc = 0x1c8ba8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8bac: 0x0
    ctx->pc = 0x1c8bacu;
    // NOP
label_1c8bb0:
    // 0x1c8bb0: 0x52600004
    ctx->pc = 0x1C8BB0u;
    {
        const bool branch_taken_0x1c8bb0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8bb0) {
            ctx->pc = 0x1C8BB4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1C8BC4u;
            goto label_1c8bc4;
        }
    }
    ctx->pc = 0x1C8BB8u;
    // 0x1c8bb8: 0xc0853c8
    ctx->pc = 0x1C8BB8u;
    SET_GPR_U32(ctx, 31, 0x1C8BC0u);
    ctx->pc = 0x1C8BBCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BC0u; }
        else if (ctx->pc != 0x1C8BC0u) { ctx->pc = 0x1C8BC0u; }
    }
    if (ctx->pc != 0x1C8BC0u) { return; }
    ctx->pc = 0x1C8BC0u;
    // 0x1c8bc0: 0x26310001
    ctx->pc = 0x1c8bc0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1c8bc4:
    // 0x1c8bc4: 0x0
    ctx->pc = 0x1c8bc4u;
    // NOP
label_1c8bc8:
    // 0x1c8bc8: 0x8e030004
    ctx->pc = 0x1c8bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8bcc: 0x71082a
    ctx->pc = 0x1c8bccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x1c8bd0: 0x1020ffee
    ctx->pc = 0x1C8BD0u;
    {
        const bool branch_taken_0x1c8bd0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8BD4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c8bd0) {
            ctx->pc = 0x1C8B8Cu;
            goto label_1c8b8c;
        }
    }
    ctx->pc = 0x1C8BD8u;
    // 0x1c8bd8: 0x17c00009
    ctx->pc = 0x1C8BD8u;
    {
        const bool branch_taken_0x1c8bd8 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8bd8) {
            ctx->pc = 0x1C8C00u;
            goto label_1c8c00;
        }
    }
    ctx->pc = 0x1C8BE0u;
    // 0x1c8be0: 0x16e00007
    ctx->pc = 0x1C8BE0u;
    {
        const bool branch_taken_0x1c8be0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8be0) {
            ctx->pc = 0x1C8C00u;
            goto label_1c8c00;
        }
    }
    ctx->pc = 0x1C8BE8u;
    // 0x1c8be8: 0x16c00005
    ctx->pc = 0x1C8BE8u;
    {
        const bool branch_taken_0x1c8be8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8be8) {
            ctx->pc = 0x1C8C00u;
            goto label_1c8c00;
        }
    }
    ctx->pc = 0x1C8BF0u;
    // 0x1c8bf0: 0x16a00003
    ctx->pc = 0x1C8BF0u;
    {
        const bool branch_taken_0x1c8bf0 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8bf0) {
            ctx->pc = 0x1C8C00u;
            goto label_1c8c00;
        }
    }
    ctx->pc = 0x1C8BF8u;
    // 0x1c8bf8: 0x12400005
    ctx->pc = 0x1C8BF8u;
    {
        const bool branch_taken_0x1c8bf8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8bf8) {
            ctx->pc = 0x1C8C10u;
            goto label_1c8c10;
        }
    }
    ctx->pc = 0x1C8C00u;
label_1c8c00:
    // 0x1c8c00: 0x4bff6b7e
    ctx->pc = 0x1c8c00u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1c8c04: 0x4bfe6b7e
    ctx->pc = 0x1c8c04u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1c8c08: 0x4bfd6b7e
    ctx->pc = 0x1c8c08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1c8c0c: 0x4bfc6b7e
    ctx->pc = 0x1c8c0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1c8c10:
    // 0x1c8c10: 0x8fa300a0
    ctx->pc = 0x1c8c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8c14: 0x2610001c
    ctx->pc = 0x1c8c14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 28));
    // 0x1c8c18: 0x24630001
    ctx->pc = 0x1c8c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8c1c: 0xafa300a0
    ctx->pc = 0x1c8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1c8c20:
    // 0x1c8c20: 0x8fa300a0
    ctx->pc = 0x1c8c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8c24: 0x2c63000c
    ctx->pc = 0x1c8c24u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 12));
    // 0x1c8c28: 0x1460ff79
    ctx->pc = 0x1C8C28u;
    {
        const bool branch_taken_0x1c8c28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8c28) {
            ctx->pc = 0x1C8A10u;
            goto label_1c8a10;
        }
    }
    ctx->pc = 0x1C8C30u;
    // 0x1c8c30: 0x7bbf0090
    ctx->pc = 0x1c8c30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8c34: 0x7bbe0080
    ctx->pc = 0x1c8c34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8c38: 0x7bb70070
    ctx->pc = 0x1c8c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8c3c: 0x7bb60060
    ctx->pc = 0x1c8c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8c40: 0x7bb50050
    ctx->pc = 0x1c8c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8c44: 0x7bb40040
    ctx->pc = 0x1c8c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8c48: 0x7bb30030
    ctx->pc = 0x1c8c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8c4c: 0x7bb20020
    ctx->pc = 0x1c8c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8c50: 0x7bb10010
    ctx->pc = 0x1c8c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8c54: 0x7bb00000
    ctx->pc = 0x1c8c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8c58: 0x3e00008
    ctx->pc = 0x1C8C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8A10u: goto label_1c8a10;
            case 0x1C8A50u: goto label_1c8a50;
            case 0x1C8A60u: goto label_1c8a60;
            case 0x1C8A98u: goto label_1c8a98;
            case 0x1C8AB8u: goto label_1c8ab8;
            case 0x1C8AE4u: goto label_1c8ae4;
            case 0x1C8AFCu: goto label_1c8afc;
            case 0x1C8B28u: goto label_1c8b28;
            case 0x1C8B40u: goto label_1c8b40;
            case 0x1C8B70u: goto label_1c8b70;
            case 0x1C8B80u: goto label_1c8b80;
            case 0x1C8B8Cu: goto label_1c8b8c;
            case 0x1C8BB0u: goto label_1c8bb0;
            case 0x1C8BC4u: goto label_1c8bc4;
            case 0x1C8BC8u: goto label_1c8bc8;
            case 0x1C8C00u: goto label_1c8c00;
            case 0x1C8C10u: goto label_1c8c10;
            case 0x1C8C20u: goto label_1c8c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8C60u;
}
