#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: partsPut__15MotionPartsTaskFv
// Address: 0x1fbe20 - 0x1fbe8c
void partsPut__15MotionPartsTaskFv_0x1fbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("partsPut__15MotionPartsTaskFv");


    ctx->pc = 0x1fbe20u;

    // 0x1fbe20: 0x27bdffe0
    ctx->pc = 0x1fbe20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbe24: 0x7fbf0010
    ctx->pc = 0x1fbe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fbe28: 0x7fb00000
    ctx->pc = 0x1fbe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbe2c: 0x70808628
    ctx->pc = 0x1fbe2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fbe30: 0x4bede37d
    ctx->pc = 0x1fbe30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fbe34: 0x4bedeb7d
    ctx->pc = 0x1fbe34u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fbe38: 0x4bedf37d
    ctx->pc = 0x1fbe38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fbe3c: 0x4bedfb7d
    ctx->pc = 0x1fbe3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1fbe40: 0xc06c038
    ctx->pc = 0x1FBE40u;
    SET_GPR_U32(ctx, 31, 0x1FBE48u);
    ctx->pc = 0x1FBE44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7404)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE48u; }
        else if (ctx->pc != 0x1FBE48u) { ctx->pc = 0x1FBE48u; }
    }
    if (ctx->pc != 0x1FBE48u) { return; }
    ctx->pc = 0x1FBE48u;
    // 0x1fbe48: 0x12000003
    ctx->pc = 0x1FBE48u;
    {
        const bool branch_taken_0x1fbe48 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FBE4Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fbe48) {
            ctx->pc = 0x1FBE58u;
            goto label_1fbe58;
        }
    }
    ctx->pc = 0x1FBE50u;
    // 0x1fbe50: 0x8e060000
    ctx->pc = 0x1fbe50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbe54: 0x0
    ctx->pc = 0x1fbe54u;
    // NOP
label_1fbe58:
    // 0x1fbe58: 0x3c02004a
    ctx->pc = 0x1fbe58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1fbe5c: 0x2444e8e0
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    // 0x1fbe60: 0x72002e28
    ctx->pc = 0x1fbe60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fbe64: 0xc07e480
    ctx->pc = 0x1FBE64u;
    SET_GPR_U32(ctx, 31, 0x1FBE6Cu);
    ctx->pc = 0x1FBE68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
    ctx->pc = 0x1F9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE6Cu; }
        else if (ctx->pc != 0x1FBE6Cu) { ctx->pc = 0x1FBE6Cu; }
    }
    if (ctx->pc != 0x1FBE6Cu) { return; }
    ctx->pc = 0x1FBE6Cu;
    // 0x1fbe6c: 0x4bff6b7e
    ctx->pc = 0x1fbe6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe70: 0x4bfe6b7e
    ctx->pc = 0x1fbe70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe74: 0x4bfd6b7e
    ctx->pc = 0x1fbe74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe78: 0x4bfc6b7e
    ctx->pc = 0x1fbe78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fbe7c: 0x7bbf0010
    ctx->pc = 0x1fbe7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbe80: 0x7bb00000
    ctx->pc = 0x1fbe80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe84: 0x3e00008
    ctx->pc = 0x1FBE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBE58u: goto label_1fbe58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBE8Cu;
}
