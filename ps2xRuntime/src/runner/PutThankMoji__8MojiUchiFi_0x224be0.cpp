#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutThankMoji__8MojiUchiFi
// Address: 0x224be0 - 0x224cd4
void PutThankMoji__8MojiUchiFi_0x224be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutThankMoji__8MojiUchiFi");


    ctx->pc = 0x224be0u;

    // 0x224be0: 0x27bdffd0
    ctx->pc = 0x224be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224be4: 0x7fbf0020
    ctx->pc = 0x224be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x224be8: 0x7fb10010
    ctx->pc = 0x224be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224bec: 0x7fb00000
    ctx->pc = 0x224becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224bf0: 0x70a08628
    ctx->pc = 0x224bf0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x224bf4: 0x3c010050
    ctx->pc = 0x224bf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224bf8: 0x8025fec5
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224bfc: 0x8c821024
    ctx->pc = 0x224bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x224c00: 0x70808e28
    ctx->pc = 0x224c00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x224c04: 0x518c0
    ctx->pc = 0x224c04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x224c08: 0x651821
    ctx->pc = 0x224c08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x224c0c: 0x31880
    ctx->pc = 0x224c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224c10: 0x431021
    ctx->pc = 0x224c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224c14: 0xc089338
    ctx->pc = 0x224C14u;
    SET_GPR_U32(ctx, 31, 0x224C1Cu);
    ctx->pc = 0x224C18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x224CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Spr2Cam__8MojiUchiF11tagNLpoint3_0x224ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C1Cu; }
        else if (ctx->pc != 0x224C1Cu) { ctx->pc = 0x224C1Cu; }
    }
    if (ctx->pc != 0x224C1Cu) { return; }
    ctx->pc = 0x224C1Cu;
    // 0x224c1c: 0x4bede37d
    ctx->pc = 0x224c1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x224c20: 0x4bedeb7d
    ctx->pc = 0x224c20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x224c24: 0x4bedf37d
    ctx->pc = 0x224c24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x224c28: 0x4bedfb7d
    ctx->pc = 0x224c28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224c2c: 0x3c023f00
    ctx->pc = 0x224c2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x224c30: 0x44826000
    ctx->pc = 0x224c30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x224c34: 0x44806800
    ctx->pc = 0x224c34u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x224c38: 0xc06c202
    ctx->pc = 0x224C38u;
    SET_GPR_U32(ctx, 31, 0x224C40u);
    ctx->pc = 0x224C3Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C40u; }
        else if (ctx->pc != 0x224C40u) { ctx->pc = 0x224C40u; }
    }
    if (ctx->pc != 0x224C40u) { return; }
    ctx->pc = 0x224C40u;
    // 0x224c40: 0x3c010050
    ctx->pc = 0x224c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224c44: 0x8022fec5
    ctx->pc = 0x224c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224c48: 0x1440000e
    ctx->pc = 0x224C48u;
    {
        const bool branch_taken_0x224c48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224C4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x224c48) {
            ctx->pc = 0x224C84u;
            goto label_224c84;
        }
    }
    ctx->pc = 0x224C50u;
    // 0x224c50: 0x3c02002b
    ctx->pc = 0x224c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x224c54: 0x24428c20
    ctx->pc = 0x224c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937632));
    // 0x224c58: 0x501021
    ctx->pc = 0x224c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x224c5c: 0x80430000
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224c60: 0x72202628
    ctx->pc = 0x224c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224c64: 0x8e221028
    ctx->pc = 0x224c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224c68: 0x31880
    ctx->pc = 0x224c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224c6c: 0x431021
    ctx->pc = 0x224c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224c70: 0x8c450000
    ctx->pc = 0x224c70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224c74: 0xc0890b4
    ctx->pc = 0x224C74u;
    SET_GPR_U32(ctx, 31, 0x224C7Cu);
    ctx->pc = 0x224C78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2242D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFont__8MojiUchiFPci_0x2242d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C7Cu; }
        else if (ctx->pc != 0x224C7Cu) { ctx->pc = 0x224C7Cu; }
    }
    if (ctx->pc != 0x224C7Cu) { return; }
    ctx->pc = 0x224C7Cu;
    // 0x224c7c: 0x1000000c
    ctx->pc = 0x224C7Cu;
    {
        const bool branch_taken_0x224c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224C80u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x224c7c) {
            ctx->pc = 0x224CB0u;
            goto label_224cb0;
        }
    }
    ctx->pc = 0x224C84u;
label_224c84:
    // 0x224c84: 0x24428c20
    ctx->pc = 0x224c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937632));
    // 0x224c88: 0x501021
    ctx->pc = 0x224c88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x224c8c: 0x80430000
    ctx->pc = 0x224c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224c90: 0x72202628
    ctx->pc = 0x224c90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x224c94: 0x8e221028
    ctx->pc = 0x224c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x224c98: 0x31880
    ctx->pc = 0x224c98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224c9c: 0x431021
    ctx->pc = 0x224c9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224ca0: 0x8c450000
    ctx->pc = 0x224ca0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224ca4: 0xc089180
    ctx->pc = 0x224CA4u;
    SET_GPR_U32(ctx, 31, 0x224CACu);
    ctx->pc = 0x224CA8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x224600u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutFontEng__8MojiUchiFPci_0x224600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CACu; }
        else if (ctx->pc != 0x224CACu) { ctx->pc = 0x224CACu; }
    }
    if (ctx->pc != 0x224CACu) { return; }
    ctx->pc = 0x224CACu;
    // 0x224cac: 0x4bff6b7e
    ctx->pc = 0x224cacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_224cb0:
    // 0x224cb0: 0x4bfe6b7e
    ctx->pc = 0x224cb0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224cb4: 0x4bfd6b7e
    ctx->pc = 0x224cb4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224cb8: 0x4bfc6b7e
    ctx->pc = 0x224cb8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x224cbc: 0xae200010
    ctx->pc = 0x224cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x224cc0: 0x7bbf0020
    ctx->pc = 0x224cc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224cc4: 0x7bb10010
    ctx->pc = 0x224cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224cc8: 0x7bb00000
    ctx->pc = 0x224cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224ccc: 0x3e00008
    ctx->pc = 0x224CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224CD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224C84u: goto label_224c84;
            case 0x224CB0u: goto label_224cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224CD4u;
}
