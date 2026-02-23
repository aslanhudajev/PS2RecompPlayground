#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: tbl_set__15OneSkinMgrClassFi
// Address: 0x1fe7b0 - 0x1fe950
void tbl_set__15OneSkinMgrClassFi_0x1fe7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("tbl_set__15OneSkinMgrClassFi");


    ctx->pc = 0x1fe7b0u;

    // 0x1fe7b0: 0x27bdffa0
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fe7b4: 0x7fbf0050
    ctx->pc = 0x1fe7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1fe7b8: 0x7fb40040
    ctx->pc = 0x1fe7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe7bc: 0x7fb30030
    ctx->pc = 0x1fe7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe7c0: 0x7fb20020
    ctx->pc = 0x1fe7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe7c4: 0x3c030027
    ctx->pc = 0x1fe7c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fe7c8: 0x7fb10010
    ctx->pc = 0x1fe7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe7cc: 0x53080
    ctx->pc = 0x1fe7ccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fe7d0: 0x246323f0
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9200));
    // 0x1fe7d4: 0x7fb00000
    ctx->pc = 0x1fe7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe7d8: 0x661821
    ctx->pc = 0x1fe7d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fe7dc: 0x3c0101f3
    ctx->pc = 0x1fe7dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fe7e0: 0xc10821
    ctx->pc = 0x1fe7e0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1fe7e4: 0x8c700000
    ctx->pc = 0x1fe7e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe7e8: 0x53040
    ctx->pc = 0x1fe7e8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fe7ec: 0x8c319730
    ctx->pc = 0x1fe7ecu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1fe7f0: 0x70a09e28
    ctx->pc = 0x1fe7f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fe7f4: 0x7080a628
    ctx->pc = 0x1fe7f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fe7f8: 0xc51821
    ctx->pc = 0x1fe7f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fe7fc: 0x32880
    ctx->pc = 0x1fe7fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe800: 0x3c030051
    ctx->pc = 0x1fe800u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fe804: 0x24632270
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
    // 0x1fe808: 0x651821
    ctx->pc = 0x1fe808u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fe80c: 0xac83000c
    ctx->pc = 0x1fe80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fe810: 0x8c84000c
    ctx->pc = 0x1fe810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fe814: 0x8c830000
    ctx->pc = 0x1fe814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe818: 0x14600045
    ctx->pc = 0x1FE818u;
    {
        const bool branch_taken_0x1fe818 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe818) {
            ctx->pc = 0x1FE930u;
            goto label_1fe930;
        }
    }
    ctx->pc = 0x1FE820u;
    // 0x1fe820: 0x8e020004
    ctx->pc = 0x1fe820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe824: 0x3c0101f2
    ctx->pc = 0x1fe824u;
    SET_GPR_U32(ctx, 1, ((uint32_t)498 << 16));
    // 0x1fe828: 0x34219860
    ctx->pc = 0x1fe828u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39008));
    // 0x1fe82c: 0xc19021
    ctx->pc = 0x1fe82cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x1fe830: 0xac820000
    ctx->pc = 0x1fe830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fe834: 0x8e030008
    ctx->pc = 0x1fe834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fe838: 0x8e82000c
    ctx->pc = 0x1fe838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fe83c: 0xac430004
    ctx->pc = 0x1fe83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fe840: 0x86420000
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe844: 0xc06878c
    ctx->pc = 0x1FE844u;
    SET_GPR_U32(ctx, 31, 0x1FE84Cu);
    ctx->pc = 0x1FE848u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 7));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE84Cu; }
        else if (ctx->pc != 0x1FE84Cu) { ctx->pc = 0x1FE84Cu; }
    }
    if (ctx->pc != 0x1FE84Cu) { return; }
    ctx->pc = 0x1FE84Cu;
    // 0x1fe84c: 0x8e83000c
    ctx->pc = 0x1fe84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fe850: 0x72602e28
    ctx->pc = 0x1fe850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1fe854: 0x27848d4c
    ctx->pc = 0x1fe854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1fe858: 0xac620008
    ctx->pc = 0x1fe858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1fe85c: 0x8e82000c
    ctx->pc = 0x1fe85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fe860: 0x8c420008
    ctx->pc = 0x1fe860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fe864: 0xae820004
    ctx->pc = 0x1fe864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1fe868: 0x86420000
    ctx->pc = 0x1fe868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fe86c: 0x8e86000c
    ctx->pc = 0x1fe86cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fe870: 0x21980
    ctx->pc = 0x1fe870u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1fe874: 0x8cc20008
    ctx->pc = 0x1fe874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fe878: 0x431021
    ctx->pc = 0x1fe878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe87c: 0xae820008
    ctx->pc = 0x1fe87cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1fe880: 0x8e060000
    ctx->pc = 0x1fe880u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe884: 0xc07f1d8
    ctx->pc = 0x1FE884u;
    SET_GPR_U32(ctx, 31, 0x1FE88Cu);
    ctx->pc = 0x1FE888u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE88Cu; }
        else if (ctx->pc != 0x1FE88Cu) { ctx->pc = 0x1FE88Cu; }
    }
    if (ctx->pc != 0x1FE88Cu) { return; }
    ctx->pc = 0x1FE88Cu;
    // 0x1fe88c: 0x70408628
    ctx->pc = 0x1fe88cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe890: 0x2602000c
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fe894: 0xae820000
    ctx->pc = 0x1fe894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1fe898: 0x4bede37d
    ctx->pc = 0x1fe898u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fe89c: 0x4bedeb7d
    ctx->pc = 0x1fe89cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fe8a0: 0x4bedf37d
    ctx->pc = 0x1fe8a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fe8a4: 0xc06c20d
    ctx->pc = 0x1FE8A4u;
    SET_GPR_U32(ctx, 31, 0x1FE8ACu);
    ctx->pc = 0x1FE8A8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8ACu; }
        else if (ctx->pc != 0x1FE8ACu) { ctx->pc = 0x1FE8ACu; }
    }
    if (ctx->pc != 0x1FE8ACu) { return; }
    ctx->pc = 0x1FE8ACu;
    // 0x1fe8ac: 0xc06bf55
    ctx->pc = 0x1FE8ACu;
    SET_GPR_U32(ctx, 31, 0x1FE8B4u);
    ctx->pc = 0x1FE8B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8B4u; }
        else if (ctx->pc != 0x1FE8B4u) { ctx->pc = 0x1FE8B4u; }
    }
    if (ctx->pc != 0x1FE8B4u) { return; }
    ctx->pc = 0x1FE8B4u;
    // 0x1fe8b4: 0xc06bf55
    ctx->pc = 0x1FE8B4u;
    SET_GPR_U32(ctx, 31, 0x1FE8BCu);
    ctx->pc = 0x1FE8B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8BCu; }
        else if (ctx->pc != 0x1FE8BCu) { ctx->pc = 0x1FE8BCu; }
    }
    if (ctx->pc != 0x1FE8BCu) { return; }
    ctx->pc = 0x1FE8BCu;
    // 0x1fe8bc: 0xc60d0004
    ctx->pc = 0x1fe8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe8c0: 0xc60e0008
    ctx->pc = 0x1fe8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fe8c4: 0xc06c202
    ctx->pc = 0x1FE8C4u;
    SET_GPR_U32(ctx, 31, 0x1FE8CCu);
    ctx->pc = 0x1FE8C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8CCu; }
        else if (ctx->pc != 0x1FE8CCu) { ctx->pc = 0x1FE8CCu; }
    }
    if (ctx->pc != 0x1FE8CCu) { return; }
    ctx->pc = 0x1FE8CCu;
    // 0x1fe8cc: 0x8e820000
    ctx->pc = 0x1fe8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fe8d0: 0xc06c157
    ctx->pc = 0x1FE8D0u;
    SET_GPR_U32(ctx, 31, 0x1FE8D8u);
    ctx->pc = 0x1FE8D4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8D8u; }
        else if (ctx->pc != 0x1FE8D8u) { ctx->pc = 0x1FE8D8u; }
    }
    if (ctx->pc != 0x1FE8D8u) { return; }
    ctx->pc = 0x1FE8D8u;
    // 0x1fe8d8: 0x8e820000
    ctx->pc = 0x1fe8d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fe8dc: 0xc06c0fb
    ctx->pc = 0x1FE8DCu;
    SET_GPR_U32(ctx, 31, 0x1FE8E4u);
    ctx->pc = 0x1FE8E0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8E4u; }
        else if (ctx->pc != 0x1FE8E4u) { ctx->pc = 0x1FE8E4u; }
    }
    if (ctx->pc != 0x1FE8E4u) { return; }
    ctx->pc = 0x1FE8E4u;
    // 0x1fe8e4: 0x8e820000
    ctx->pc = 0x1fe8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fe8e8: 0xc06c09f
    ctx->pc = 0x1FE8E8u;
    SET_GPR_U32(ctx, 31, 0x1FE8F0u);
    ctx->pc = 0x1FE8ECu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8F0u; }
        else if (ctx->pc != 0x1FE8F0u) { ctx->pc = 0x1FE8F0u; }
    }
    if (ctx->pc != 0x1FE8F0u) { return; }
    ctx->pc = 0x1FE8F0u;
    // 0x1fe8f0: 0x70008628
    ctx->pc = 0x1fe8f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe8f4: 0x10000006
    ctx->pc = 0x1FE8F4u;
    {
        const bool branch_taken_0x1fe8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE8F8u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe8f4) {
            ctx->pc = 0x1FE910u;
            goto label_1fe910;
        }
    }
    ctx->pc = 0x1FE8FCu;
label_1fe8fc:
    // 0x1fe8fc: 0x8e450024
    ctx->pc = 0x1fe8fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fe900: 0xc07fa54
    ctx->pc = 0x1FE900u;
    SET_GPR_U32(ctx, 31, 0x1FE908u);
    ctx->pc = 0x1FE904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FE950u;
    {
        const uint32_t __entryPc = ctx->pc;
        p_mat_set__15OneSkinMgrClassFP7_BODYPT_0x1fe950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE908u; }
        else if (ctx->pc != 0x1FE908u) { ctx->pc = 0x1FE908u; }
    }
    if (ctx->pc != 0x1FE908u) { return; }
    ctx->pc = 0x1FE908u;
    // 0x1fe908: 0x26520004
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1fe90c: 0x26100001
    ctx->pc = 0x1fe90cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1fe910:
    // 0x1fe910: 0x86230022
    ctx->pc = 0x1fe910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1fe914: 0x203182a
    ctx->pc = 0x1fe914u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1fe918: 0x1460fff8
    ctx->pc = 0x1FE918u;
    {
        const bool branch_taken_0x1fe918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe918) {
            ctx->pc = 0x1FE8FCu;
            goto label_1fe8fc;
        }
    }
    ctx->pc = 0x1FE920u;
    // 0x1fe920: 0x4bff6b7e
    ctx->pc = 0x1fe920u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fe924: 0x4bfe6b7e
    ctx->pc = 0x1fe924u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fe928: 0x4bfd6b7e
    ctx->pc = 0x1fe928u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fe92c: 0x4bfc6b7e
    ctx->pc = 0x1fe92cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fe930:
    // 0x1fe930: 0x7bbf0050
    ctx->pc = 0x1fe930u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe934: 0x7bb40040
    ctx->pc = 0x1fe934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe938: 0x7bb30030
    ctx->pc = 0x1fe938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe93c: 0x7bb20020
    ctx->pc = 0x1fe93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe940: 0x7bb10010
    ctx->pc = 0x1fe940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe944: 0x7bb00000
    ctx->pc = 0x1fe944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe948: 0x3e00008
    ctx->pc = 0x1FE948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE8FCu: goto label_1fe8fc;
            case 0x1FE910u: goto label_1fe910;
            case 0x1FE930u: goto label_1fe930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE950u;
}
