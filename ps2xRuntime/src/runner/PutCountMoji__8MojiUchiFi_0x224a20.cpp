#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutCountMoji__8MojiUchiFi
// Address: 0x224a20 - 0x224af8
void PutCountMoji__8MojiUchiFi_0x224a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutCountMoji__8MojiUchiFi");


    ctx->pc = 0x224a20u;

    // 0x224a20: 0x27bdffd0
    ctx->pc = 0x224a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224a24: 0x7fbf0020
    ctx->pc = 0x224a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x224a28: 0x7fb10010
    ctx->pc = 0x224a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224a2c: 0x7fb00000
    ctx->pc = 0x224a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224a30: 0x70a08628
    ctx->pc = 0x224a30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x224a34: 0x3c010050
    ctx->pc = 0x224a34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224a38: 0x8025fec5
    ctx->pc = 0x224a38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224a3c: 0x8c821024
    ctx->pc = 0x224a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x224a40: 0x70808e28
    ctx->pc = 0x224a40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x224a44: 0x518c0
    ctx->pc = 0x224a44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x224a48: 0x651821
    ctx->pc = 0x224a48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x224a4c: 0x31880
    ctx->pc = 0x224a4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224a50: 0x431021
    ctx->pc = 0x224a50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224a54: 0xc089338
    ctx->pc = 0x224A54u;
    SET_GPR_U32(ctx, 31, 0x224A5Cu);
    ctx->pc = 0x224A58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x224CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Spr2Cam__8MojiUchiF11tagNLpoint3_0x224ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A5Cu; }
        else if (ctx->pc != 0x224A5Cu) { ctx->pc = 0x224A5Cu; }
    }
    if (ctx->pc != 0x224A5Cu) { return; }
    ctx->pc = 0x224A5Cu;
    // 0x224a5c: 0x4bede37d
    ctx->pc = 0x224a5cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x224a60: 0x4bedeb7d
    ctx->pc = 0x224a60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x224a64: 0x4bedf37d
    ctx->pc = 0x224a64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x224a68: 0x4bedfb7d
    ctx->pc = 0x224a68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224a6c: 0x3c023f00
    ctx->pc = 0x224a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x224a70: 0x44826000
    ctx->pc = 0x224a70u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x224a74: 0x44806800
    ctx->pc = 0x224a74u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x224a78: 0xc06c202
    ctx->pc = 0x224A78u;
    SET_GPR_U32(ctx, 31, 0x224A80u);
    ctx->pc = 0x224A7Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A80u; }
        else if (ctx->pc != 0x224A80u) { ctx->pc = 0x224A80u; }
    }
    if (ctx->pc != 0x224A80u) { return; }
    ctx->pc = 0x224A80u;
    // 0x224a80: 0x3c010050
    ctx->pc = 0x224a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224a84: 0x8022fec5
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224a88: 0x1440000a
    ctx->pc = 0x224A88u;
    {
        const bool branch_taken_0x224a88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224a88) {
            ctx->pc = 0x224AB4u;
            goto label_224ab4;
        }
    }
    ctx->pc = 0x224A90u;
    // 0x224a90: 0x8e221028
    ctx->pc = 0x224a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224a94: 0x101880
    ctx->pc = 0x224a94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x224a98: 0x72202628
    ctx->pc = 0x224a98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224a9c: 0x431021
    ctx->pc = 0x224a9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224aa0: 0x8c450000
    ctx->pc = 0x224aa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224aa4: 0xc0890b4
    ctx->pc = 0x224AA4u;
    SET_GPR_U32(ctx, 31, 0x224AACu);
    ctx->pc = 0x224AA8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2242D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFont__8MojiUchiFPci_0x2242d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AACu; }
        else if (ctx->pc != 0x224AACu) { ctx->pc = 0x224AACu; }
    }
    if (ctx->pc != 0x224AACu) { return; }
    ctx->pc = 0x224AACu;
    // 0x224aac: 0x10000009
    ctx->pc = 0x224AACu;
    {
        const bool branch_taken_0x224aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224AB0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x224aac) {
            ctx->pc = 0x224AD4u;
            goto label_224ad4;
        }
    }
    ctx->pc = 0x224AB4u;
label_224ab4:
    // 0x224ab4: 0x8e221028
    ctx->pc = 0x224ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224ab8: 0x101880
    ctx->pc = 0x224ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x224abc: 0x72202628
    ctx->pc = 0x224abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224ac0: 0x431021
    ctx->pc = 0x224ac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224ac4: 0x8c450000
    ctx->pc = 0x224ac4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224ac8: 0xc089180
    ctx->pc = 0x224AC8u;
    SET_GPR_U32(ctx, 31, 0x224AD0u);
    ctx->pc = 0x224ACCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x224600u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFontEng__8MojiUchiFPci_0x224600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AD0u; }
        else if (ctx->pc != 0x224AD0u) { ctx->pc = 0x224AD0u; }
    }
    if (ctx->pc != 0x224AD0u) { return; }
    ctx->pc = 0x224AD0u;
    // 0x224ad0: 0x4bff6b7e
    ctx->pc = 0x224ad0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_224ad4:
    // 0x224ad4: 0x4bfe6b7e
    ctx->pc = 0x224ad4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224ad8: 0x4bfd6b7e
    ctx->pc = 0x224ad8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224adc: 0x4bfc6b7e
    ctx->pc = 0x224adcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x224ae0: 0xae200010
    ctx->pc = 0x224ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x224ae4: 0x7bbf0020
    ctx->pc = 0x224ae4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224ae8: 0x7bb10010
    ctx->pc = 0x224ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224aec: 0x7bb00000
    ctx->pc = 0x224aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224af0: 0x3e00008
    ctx->pc = 0x224AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224AF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224AB4u: goto label_224ab4;
            case 0x224AD4u: goto label_224ad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224AF8u;
}
