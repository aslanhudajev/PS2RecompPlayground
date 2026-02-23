#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PostDisp__7BudTaskFv
// Address: 0x204d30 - 0x204df8
void PostDisp__7BudTaskFv_0x204d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PostDisp__7BudTaskFv");


    ctx->pc = 0x204d30u;

    // 0x204d30: 0x27bdffe0
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204d34: 0x7fbf0010
    ctx->pc = 0x204d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x204d38: 0x7fb00000
    ctx->pc = 0x204d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204d3c: 0x83838ba8
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x204d40: 0x24020006
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x204d44: 0x14620009
    ctx->pc = 0x204D44u;
    {
        const bool branch_taken_0x204d44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x204D48u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x204d44) {
            ctx->pc = 0x204D6Cu;
            goto label_204d6c;
        }
    }
    ctx->pc = 0x204D4Cu;
    // 0x204d4c: 0x3c010050
    ctx->pc = 0x204d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x204d50: 0x8023e424
    ctx->pc = 0x204d50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960164)));
    // 0x204d54: 0x24020001
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d58: 0x14620004
    ctx->pc = 0x204D58u;
    {
        const bool branch_taken_0x204d58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x204d58) {
            ctx->pc = 0x204D6Cu;
            goto label_204d6c;
        }
    }
    ctx->pc = 0x204D60u;
    // 0x204d60: 0x8e02000c
    ctx->pc = 0x204d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204d64: 0x34428000
    ctx->pc = 0x204d64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x204d68: 0xae02000c
    ctx->pc = 0x204d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_204d6c:
    // 0x204d6c: 0x8e03000c
    ctx->pc = 0x204d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204d70: 0x3c020400
    ctx->pc = 0x204d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x204d74: 0x621024
    ctx->pc = 0x204d74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204d78: 0x14400006
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204D94u;
            goto label_204d94;
        }
    }
    ctx->pc = 0x204D80u;
    // 0x204d80: 0x8e020150
    ctx->pc = 0x204d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204d84: 0x8c421d74
    ctx->pc = 0x204d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7540)));
    // 0x204d88: 0x30420002
    ctx->pc = 0x204d88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x204d8c: 0x10400003
    ctx->pc = 0x204D8Cu;
    {
        const bool branch_taken_0x204d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x204d8c) {
            ctx->pc = 0x204D9Cu;
            goto label_204d9c;
        }
    }
    ctx->pc = 0x204D94u;
label_204d94:
    // 0x204d94: 0xc068fe0
    ctx->pc = 0x204D94u;
    SET_GPR_U32(ctx, 31, 0x204D9Cu);
    ctx->pc = 0x204D98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 320)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D9Cu; }
        else if (ctx->pc != 0x204D9Cu) { ctx->pc = 0x204D9Cu; }
    }
    if (ctx->pc != 0x204D9Cu) { return; }
    ctx->pc = 0x204D9Cu;
label_204d9c:
    // 0x204d9c: 0x4bede37d
    ctx->pc = 0x204d9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x204da0: 0x4bedeb7d
    ctx->pc = 0x204da0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x204da4: 0x4bedf37d
    ctx->pc = 0x204da4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x204da8: 0x4bedfb7d
    ctx->pc = 0x204da8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x204dac: 0xc06c038
    ctx->pc = 0x204DACu;
    SET_GPR_U32(ctx, 31, 0x204DB4u);
    ctx->pc = 0x204DB0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DB4u; }
        else if (ctx->pc != 0x204DB4u) { ctx->pc = 0x204DB4u; }
    }
    if (ctx->pc != 0x204DB4u) { return; }
    ctx->pc = 0x204DB4u;
    // 0x204db4: 0x8e02014c
    ctx->pc = 0x204db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x204db8: 0xc44d001c
    ctx->pc = 0x204db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204dbc: 0xc44e0020
    ctx->pc = 0x204dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204dc0: 0xc06c202
    ctx->pc = 0x204DC0u;
    SET_GPR_U32(ctx, 31, 0x204DC8u);
    ctx->pc = 0x204DC4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DC8u; }
        else if (ctx->pc != 0x204DC8u) { ctx->pc = 0x204DC8u; }
    }
    if (ctx->pc != 0x204DC8u) { return; }
    ctx->pc = 0x204DC8u;
    // 0x204dc8: 0xc06bfd2
    ctx->pc = 0x204DC8u;
    SET_GPR_U32(ctx, 31, 0x204DD0u);
    ctx->pc = 0x204DCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 92));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DD0u; }
        else if (ctx->pc != 0x204DD0u) { ctx->pc = 0x204DD0u; }
    }
    if (ctx->pc != 0x204DD0u) { return; }
    ctx->pc = 0x204DD0u;
    // 0x204dd0: 0xc24a964
    ctx->pc = 0x204DD0u;
    SET_GPR_U32(ctx, 31, 0x204DD8u);
    ctx->pc = 0x204DD4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DD8u; }
        else if (ctx->pc != 0x204DD8u) { ctx->pc = 0x204DD8u; }
    }
    if (ctx->pc != 0x204DD8u) { return; }
    ctx->pc = 0x204DD8u;
    // 0x204dd8: 0x4bff6b7e
    ctx->pc = 0x204dd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x204ddc: 0x4bfe6b7e
    ctx->pc = 0x204ddcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204de0: 0x4bfd6b7e
    ctx->pc = 0x204de0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x204de4: 0x4bfc6b7e
    ctx->pc = 0x204de4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x204de8: 0x7bbf0010
    ctx->pc = 0x204de8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204dec: 0x7bb00000
    ctx->pc = 0x204decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204df0: 0x3e00008
    ctx->pc = 0x204DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204DF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204D6Cu: goto label_204d6c;
            case 0x204D94u: goto label_204d94;
            case 0x204D9Cu: goto label_204d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204DF8u;
}
