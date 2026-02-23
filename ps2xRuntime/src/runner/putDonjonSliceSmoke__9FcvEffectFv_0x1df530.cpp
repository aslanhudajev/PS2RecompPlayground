#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putDonjonSliceSmoke__9FcvEffectFv
// Address: 0x1df530 - 0x1df628
void putDonjonSliceSmoke__9FcvEffectFv_0x1df530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putDonjonSliceSmoke__9FcvEffectFv");


    ctx->pc = 0x1df530u;

    // 0x1df530: 0x27bdffc0
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df534: 0x7fbf0030
    ctx->pc = 0x1df534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df538: 0x7fb20020
    ctx->pc = 0x1df538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df53c: 0x7fb10010
    ctx->pc = 0x1df53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df540: 0x7fb00000
    ctx->pc = 0x1df540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df544: 0x8f838cec
    ctx->pc = 0x1df544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1df548: 0x24020001
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df54c: 0x14620003
    ctx->pc = 0x1DF54Cu;
    {
        const bool branch_taken_0x1df54c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DF550u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df54c) {
            ctx->pc = 0x1DF55Cu;
            goto label_1df55c;
        }
    }
    ctx->pc = 0x1DF554u;
    // 0x1df554: 0xc06898c
    ctx->pc = 0x1DF554u;
    SET_GPR_U32(ctx, 31, 0x1DF55Cu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF55Cu; }
        else if (ctx->pc != 0x1DF55Cu) { ctx->pc = 0x1DF55Cu; }
    }
    if (ctx->pc != 0x1DF55Cu) { return; }
    ctx->pc = 0x1DF55Cu;
label_1df55c:
    // 0x1df55c: 0x4bede37d
    ctx->pc = 0x1df55cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df560: 0x4bedeb7d
    ctx->pc = 0x1df560u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df564: 0x4bedf37d
    ctx->pc = 0x1df564u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df568: 0x4bedfb7d
    ctx->pc = 0x1df568u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df56c: 0xc60d0040
    ctx->pc = 0x1df56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df570: 0xc60e0044
    ctx->pc = 0x1df570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df574: 0xc06c202
    ctx->pc = 0x1DF574u;
    SET_GPR_U32(ctx, 31, 0x1DF57Cu);
    ctx->pc = 0x1DF578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF57Cu; }
        else if (ctx->pc != 0x1DF57Cu) { ctx->pc = 0x1DF57Cu; }
    }
    if (ctx->pc != 0x1DF57Cu) { return; }
    ctx->pc = 0x1DF57Cu;
    // 0x1df57c: 0xc06c0fb
    ctx->pc = 0x1DF57Cu;
    SET_GPR_U32(ctx, 31, 0x1DF584u);
    ctx->pc = 0x1DF580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF584u; }
        else if (ctx->pc != 0x1DF584u) { ctx->pc = 0x1DF584u; }
    }
    if (ctx->pc != 0x1DF584u) { return; }
    ctx->pc = 0x1DF584u;
    // 0x1df584: 0xc06c09f
    ctx->pc = 0x1DF584u;
    SET_GPR_U32(ctx, 31, 0x1DF58Cu);
    ctx->pc = 0x1DF588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF58Cu; }
        else if (ctx->pc != 0x1DF58Cu) { ctx->pc = 0x1DF58Cu; }
    }
    if (ctx->pc != 0x1DF58Cu) { return; }
    ctx->pc = 0x1DF58Cu;
    // 0x1df58c: 0xc06c157
    ctx->pc = 0x1DF58Cu;
    SET_GPR_U32(ctx, 31, 0x1DF594u);
    ctx->pc = 0x1DF590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF594u; }
        else if (ctx->pc != 0x1DF594u) { ctx->pc = 0x1DF594u; }
    }
    if (ctx->pc != 0x1DF594u) { return; }
    ctx->pc = 0x1DF594u;
    // 0x1df594: 0x70008e28
    ctx->pc = 0x1df594u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df598: 0x10000007
    ctx->pc = 0x1DF598u;
    {
        const bool branch_taken_0x1df598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF59Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df598) {
            ctx->pc = 0x1DF5B8u;
            goto label_1df5b8;
        }
    }
    ctx->pc = 0x1DF5A0u;
label_1df5a0:
    // 0x1df5a0: 0x8e020058
    ctx->pc = 0x1df5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1df5a4: 0xc60c0024
    ctx->pc = 0x1df5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df5a8: 0xc07a47c
    ctx->pc = 0x1DF5A8u;
    SET_GPR_U32(ctx, 31, 0x1DF5B0u);
    ctx->pc = 0x1DF5ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5B0u; }
        else if (ctx->pc != 0x1DF5B0u) { ctx->pc = 0x1DF5B0u; }
    }
    if (ctx->pc != 0x1DF5B0u) { return; }
    ctx->pc = 0x1DF5B0u;
    // 0x1df5b0: 0x265200f0
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df5b4: 0x26310001
    ctx->pc = 0x1df5b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1df5b8:
    // 0x1df5b8: 0x8e030004
    ctx->pc = 0x1df5b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df5bc: 0x223182a
    ctx->pc = 0x1df5bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df5c0: 0x1460fff7
    ctx->pc = 0x1DF5C0u;
    {
        const bool branch_taken_0x1df5c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df5c0) {
            ctx->pc = 0x1DF5A0u;
            goto label_1df5a0;
        }
    }
    ctx->pc = 0x1DF5C8u;
    // 0x1df5c8: 0x70009628
    ctx->pc = 0x1df5c8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df5cc: 0x10000008
    ctx->pc = 0x1DF5CCu;
    {
        const bool branch_taken_0x1df5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF5D0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df5cc) {
            ctx->pc = 0x1DF5F0u;
            goto label_1df5f0;
        }
    }
    ctx->pc = 0x1DF5D4u;
label_1df5d4:
    // 0x1df5d4: 0x8e02005c
    ctx->pc = 0x1df5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1df5d8: 0xc60c0024
    ctx->pc = 0x1df5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df5dc: 0xc07a47c
    ctx->pc = 0x1DF5DCu;
    SET_GPR_U32(ctx, 31, 0x1DF5E4u);
    ctx->pc = 0x1DF5E0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5E4u; }
        else if (ctx->pc != 0x1DF5E4u) { ctx->pc = 0x1DF5E4u; }
    }
    if (ctx->pc != 0x1DF5E4u) { return; }
    ctx->pc = 0x1DF5E4u;
    // 0x1df5e4: 0x263100f0
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1df5e8: 0x26520001
    ctx->pc = 0x1df5e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1df5ec: 0x0
    ctx->pc = 0x1df5ecu;
    // NOP
label_1df5f0:
    // 0x1df5f0: 0x8e030008
    ctx->pc = 0x1df5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df5f4: 0x243182a
    ctx->pc = 0x1df5f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1df5f8: 0x1460fff6
    ctx->pc = 0x1DF5F8u;
    {
        const bool branch_taken_0x1df5f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df5f8) {
            ctx->pc = 0x1DF5D4u;
            goto label_1df5d4;
        }
    }
    ctx->pc = 0x1DF600u;
    // 0x1df600: 0x4bff6b7e
    ctx->pc = 0x1df600u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df604: 0x4bfe6b7e
    ctx->pc = 0x1df604u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df608: 0x4bfd6b7e
    ctx->pc = 0x1df608u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df60c: 0x4bfc6b7e
    ctx->pc = 0x1df60cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df610: 0x7bbf0030
    ctx->pc = 0x1df610u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df614: 0x7bb20020
    ctx->pc = 0x1df614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df618: 0x7bb10010
    ctx->pc = 0x1df618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df61c: 0x7bb00000
    ctx->pc = 0x1df61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df620: 0x3e00008
    ctx->pc = 0x1DF620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF55Cu: goto label_1df55c;
            case 0x1DF5A0u: goto label_1df5a0;
            case 0x1DF5B8u: goto label_1df5b8;
            case 0x1DF5D4u: goto label_1df5d4;
            case 0x1DF5F0u: goto label_1df5f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF628u;
}
