#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutMoji__8MojiUchiFi
// Address: 0x224b00 - 0x224bd4
void PutMoji__8MojiUchiFi_0x224b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutMoji__8MojiUchiFi");


    ctx->pc = 0x224b00u;

    // 0x224b00: 0x27bdffd0
    ctx->pc = 0x224b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224b04: 0x7fbf0020
    ctx->pc = 0x224b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x224b08: 0x7fb10010
    ctx->pc = 0x224b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224b0c: 0x7fb00000
    ctx->pc = 0x224b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224b10: 0x70a08628
    ctx->pc = 0x224b10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x224b14: 0x3c010050
    ctx->pc = 0x224b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224b18: 0x8025fec5
    ctx->pc = 0x224b18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224b1c: 0x8c821024
    ctx->pc = 0x224b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x224b20: 0x70808e28
    ctx->pc = 0x224b20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x224b24: 0x518c0
    ctx->pc = 0x224b24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x224b28: 0x651821
    ctx->pc = 0x224b28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x224b2c: 0x31880
    ctx->pc = 0x224b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224b30: 0x431021
    ctx->pc = 0x224b30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224b34: 0xc089338
    ctx->pc = 0x224B34u;
    SET_GPR_U32(ctx, 31, 0x224B3Cu);
    ctx->pc = 0x224B38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x224CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Spr2Cam__8MojiUchiF11tagNLpoint3_0x224ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B3Cu; }
        else if (ctx->pc != 0x224B3Cu) { ctx->pc = 0x224B3Cu; }
    }
    if (ctx->pc != 0x224B3Cu) { return; }
    ctx->pc = 0x224B3Cu;
    // 0x224b3c: 0x4bede37d
    ctx->pc = 0x224b3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x224b40: 0x4bedeb7d
    ctx->pc = 0x224b40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x224b44: 0x4bedf37d
    ctx->pc = 0x224b44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x224b48: 0x4bedfb7d
    ctx->pc = 0x224b48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224b4c: 0x3c023f00
    ctx->pc = 0x224b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x224b50: 0x44826000
    ctx->pc = 0x224b50u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x224b54: 0x44806800
    ctx->pc = 0x224b54u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x224b58: 0xc06c202
    ctx->pc = 0x224B58u;
    SET_GPR_U32(ctx, 31, 0x224B60u);
    ctx->pc = 0x224B5Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B60u; }
        else if (ctx->pc != 0x224B60u) { ctx->pc = 0x224B60u; }
    }
    if (ctx->pc != 0x224B60u) { return; }
    ctx->pc = 0x224B60u;
    // 0x224b60: 0x3c010050
    ctx->pc = 0x224b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224b64: 0x8022fec5
    ctx->pc = 0x224b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224b68: 0x1440000a
    ctx->pc = 0x224B68u;
    {
        const bool branch_taken_0x224b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224b68) {
            ctx->pc = 0x224B94u;
            goto label_224b94;
        }
    }
    ctx->pc = 0x224B70u;
    // 0x224b70: 0x8e221028
    ctx->pc = 0x224b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224b74: 0x101880
    ctx->pc = 0x224b74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x224b78: 0x72202628
    ctx->pc = 0x224b78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224b7c: 0x431021
    ctx->pc = 0x224b7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224b80: 0x8c450000
    ctx->pc = 0x224b80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224b84: 0xc0890b4
    ctx->pc = 0x224B84u;
    SET_GPR_U32(ctx, 31, 0x224B8Cu);
    ctx->pc = 0x224B88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2242D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFont__8MojiUchiFPci_0x2242d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B8Cu; }
        else if (ctx->pc != 0x224B8Cu) { ctx->pc = 0x224B8Cu; }
    }
    if (ctx->pc != 0x224B8Cu) { return; }
    ctx->pc = 0x224B8Cu;
    // 0x224b8c: 0x10000009
    ctx->pc = 0x224B8Cu;
    {
        const bool branch_taken_0x224b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224B90u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x224b8c) {
            ctx->pc = 0x224BB4u;
            goto label_224bb4;
        }
    }
    ctx->pc = 0x224B94u;
label_224b94:
    // 0x224b94: 0x8e221028
    ctx->pc = 0x224b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224b98: 0x101880
    ctx->pc = 0x224b98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x224b9c: 0x72202628
    ctx->pc = 0x224b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224ba0: 0x431021
    ctx->pc = 0x224ba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224ba4: 0x8c450000
    ctx->pc = 0x224ba4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224ba8: 0xc089180
    ctx->pc = 0x224BA8u;
    SET_GPR_U32(ctx, 31, 0x224BB0u);
    ctx->pc = 0x224BACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x224600u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFontEng__8MojiUchiFPci_0x224600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB0u; }
        else if (ctx->pc != 0x224BB0u) { ctx->pc = 0x224BB0u; }
    }
    if (ctx->pc != 0x224BB0u) { return; }
    ctx->pc = 0x224BB0u;
    // 0x224bb0: 0x4bff6b7e
    ctx->pc = 0x224bb0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_224bb4:
    // 0x224bb4: 0x4bfe6b7e
    ctx->pc = 0x224bb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224bb8: 0x4bfd6b7e
    ctx->pc = 0x224bb8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224bbc: 0x4bfc6b7e
    ctx->pc = 0x224bbcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x224bc0: 0x7bbf0020
    ctx->pc = 0x224bc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224bc4: 0x7bb10010
    ctx->pc = 0x224bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224bc8: 0x7bb00000
    ctx->pc = 0x224bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224bcc: 0x3e00008
    ctx->pc = 0x224BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224B94u: goto label_224b94;
            case 0x224BB4u: goto label_224bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224BD4u;
}
