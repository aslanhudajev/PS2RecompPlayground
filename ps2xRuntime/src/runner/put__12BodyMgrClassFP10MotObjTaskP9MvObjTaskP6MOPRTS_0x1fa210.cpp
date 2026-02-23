#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: put__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS
// Address: 0x1fa210 - 0x1fa488
void put__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1fa210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS");


    ctx->pc = 0x1fa210u;

    // 0x1fa210: 0x27bdffa0
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fa214: 0x7fbf0050
    ctx->pc = 0x1fa214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1fa218: 0x7fb40040
    ctx->pc = 0x1fa218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fa21c: 0x7fb30030
    ctx->pc = 0x1fa21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fa220: 0x7fb20020
    ctx->pc = 0x1fa220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fa224: 0x7fb10010
    ctx->pc = 0x1fa224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa228: 0x7fb00000
    ctx->pc = 0x1fa228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa22c: 0x84a2002c
    ctx->pc = 0x1fa22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fa230: 0x3c0101f3
    ctx->pc = 0x1fa230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fa234: 0x70a09628
    ctx->pc = 0x1fa234u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fa238: 0x70809e28
    ctx->pc = 0x1fa238u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fa23c: 0x70c08e28
    ctx->pc = 0x1fa23cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fa240: 0x21080
    ctx->pc = 0x1fa240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa244: 0x410821
    ctx->pc = 0x1fa244u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fa248: 0x8c309730
    ctx->pc = 0x1fa248u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1fa24c: 0x4bede37d
    ctx->pc = 0x1fa24cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fa250: 0x4bedeb7d
    ctx->pc = 0x1fa250u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fa254: 0x4bedf37d
    ctx->pc = 0x1fa254u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fa258: 0x4bedfb7d
    ctx->pc = 0x1fa258u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1fa25c: 0xac920004
    ctx->pc = 0x1fa25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x1fa260: 0xac870000
    ctx->pc = 0x1fa260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1fa264: 0xc4cd0004
    ctx->pc = 0x1fa264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa268: 0xc4ce0008
    ctx->pc = 0x1fa268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa26c: 0xc06c202
    ctx->pc = 0x1FA26Cu;
    SET_GPR_U32(ctx, 31, 0x1FA274u);
    ctx->pc = 0x1FA270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA274u; }
        else if (ctx->pc != 0x1FA274u) { ctx->pc = 0x1FA274u; }
    }
    if (ctx->pc != 0x1FA274u) { return; }
    ctx->pc = 0x1FA274u;
    // 0x1fa274: 0x8e431c98
    ctx->pc = 0x1fa274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7320)));
    // 0x1fa278: 0x24020004
    ctx->pc = 0x1fa278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa27c: 0x1062002b
    ctx->pc = 0x1FA27Cu;
    {
        const bool branch_taken_0x1fa27c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FA280u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1fa27c) {
            ctx->pc = 0x1FA32Cu;
            goto label_1fa32c;
        }
    }
    ctx->pc = 0x1FA284u;
    // 0x1fa284: 0x10620021
    ctx->pc = 0x1FA284u;
    {
        const bool branch_taken_0x1fa284 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FA288u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1fa284) {
            ctx->pc = 0x1FA30Cu;
            goto label_1fa30c;
        }
    }
    ctx->pc = 0x1FA28Cu;
    // 0x1fa28c: 0x10620017
    ctx->pc = 0x1FA28Cu;
    {
        const bool branch_taken_0x1fa28c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FA290u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fa28c) {
            ctx->pc = 0x1FA2ECu;
            goto label_1fa2ec;
        }
    }
    ctx->pc = 0x1FA294u;
    // 0x1fa294: 0x1062000d
    ctx->pc = 0x1FA294u;
    {
        const bool branch_taken_0x1fa294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fa294) {
            ctx->pc = 0x1FA2CCu;
            goto label_1fa2cc;
        }
    }
    ctx->pc = 0x1FA29Cu;
    // 0x1fa29c: 0x10600003
    ctx->pc = 0x1FA29Cu;
    {
        const bool branch_taken_0x1fa29c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa29c) {
            ctx->pc = 0x1FA2ACu;
            goto label_1fa2ac;
        }
    }
    ctx->pc = 0x1FA2A4u;
    // 0x1fa2a4: 0x10000029
    ctx->pc = 0x1FA2A4u;
    {
        const bool branch_taken_0x1fa2a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA2A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x1fa2a4) {
            ctx->pc = 0x1FA34Cu;
            goto label_1fa34c;
        }
    }
    ctx->pc = 0x1FA2ACu;
label_1fa2ac:
    // 0x1fa2ac: 0xc06c09f
    ctx->pc = 0x1FA2ACu;
    SET_GPR_U32(ctx, 31, 0x1FA2B4u);
    ctx->pc = 0x1FA2B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2B4u; }
        else if (ctx->pc != 0x1FA2B4u) { ctx->pc = 0x1FA2B4u; }
    }
    if (ctx->pc != 0x1FA2B4u) { return; }
    ctx->pc = 0x1FA2B4u;
    // 0x1fa2b4: 0xc06c0fb
    ctx->pc = 0x1FA2B4u;
    SET_GPR_U32(ctx, 31, 0x1FA2BCu);
    ctx->pc = 0x1FA2B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2BCu; }
        else if (ctx->pc != 0x1FA2BCu) { ctx->pc = 0x1FA2BCu; }
    }
    if (ctx->pc != 0x1FA2BCu) { return; }
    ctx->pc = 0x1FA2BCu;
    // 0x1fa2bc: 0xc06c157
    ctx->pc = 0x1FA2BCu;
    SET_GPR_U32(ctx, 31, 0x1FA2C4u);
    ctx->pc = 0x1FA2C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2C4u; }
        else if (ctx->pc != 0x1FA2C4u) { ctx->pc = 0x1FA2C4u; }
    }
    if (ctx->pc != 0x1FA2C4u) { return; }
    ctx->pc = 0x1FA2C4u;
    // 0x1fa2c4: 0x10000028
    ctx->pc = 0x1FA2C4u;
    {
        const bool branch_taken_0x1fa2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA2C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1fa2c4) {
            ctx->pc = 0x1FA368u;
            goto label_1fa368;
        }
    }
    ctx->pc = 0x1FA2CCu;
label_1fa2cc:
    // 0x1fa2cc: 0xc06c09f
    ctx->pc = 0x1FA2CCu;
    SET_GPR_U32(ctx, 31, 0x1FA2D4u);
    ctx->pc = 0x1FA2D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2D4u; }
        else if (ctx->pc != 0x1FA2D4u) { ctx->pc = 0x1FA2D4u; }
    }
    if (ctx->pc != 0x1FA2D4u) { return; }
    ctx->pc = 0x1FA2D4u;
    // 0x1fa2d4: 0xc06c157
    ctx->pc = 0x1FA2D4u;
    SET_GPR_U32(ctx, 31, 0x1FA2DCu);
    ctx->pc = 0x1FA2D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2DCu; }
        else if (ctx->pc != 0x1FA2DCu) { ctx->pc = 0x1FA2DCu; }
    }
    if (ctx->pc != 0x1FA2DCu) { return; }
    ctx->pc = 0x1FA2DCu;
    // 0x1fa2dc: 0xc06c0fb
    ctx->pc = 0x1FA2DCu;
    SET_GPR_U32(ctx, 31, 0x1FA2E4u);
    ctx->pc = 0x1FA2E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2E4u; }
        else if (ctx->pc != 0x1FA2E4u) { ctx->pc = 0x1FA2E4u; }
    }
    if (ctx->pc != 0x1FA2E4u) { return; }
    ctx->pc = 0x1FA2E4u;
    // 0x1fa2e4: 0x1000001f
    ctx->pc = 0x1FA2E4u;
    {
        const bool branch_taken_0x1fa2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa2e4) {
            ctx->pc = 0x1FA364u;
            goto label_1fa364;
        }
    }
    ctx->pc = 0x1FA2ECu;
label_1fa2ec:
    // 0x1fa2ec: 0xc06c0fb
    ctx->pc = 0x1FA2ECu;
    SET_GPR_U32(ctx, 31, 0x1FA2F4u);
    ctx->pc = 0x1FA2F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2F4u; }
        else if (ctx->pc != 0x1FA2F4u) { ctx->pc = 0x1FA2F4u; }
    }
    if (ctx->pc != 0x1FA2F4u) { return; }
    ctx->pc = 0x1FA2F4u;
    // 0x1fa2f4: 0xc06c09f
    ctx->pc = 0x1FA2F4u;
    SET_GPR_U32(ctx, 31, 0x1FA2FCu);
    ctx->pc = 0x1FA2F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2FCu; }
        else if (ctx->pc != 0x1FA2FCu) { ctx->pc = 0x1FA2FCu; }
    }
    if (ctx->pc != 0x1FA2FCu) { return; }
    ctx->pc = 0x1FA2FCu;
    // 0x1fa2fc: 0xc06c157
    ctx->pc = 0x1FA2FCu;
    SET_GPR_U32(ctx, 31, 0x1FA304u);
    ctx->pc = 0x1FA300u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA304u; }
        else if (ctx->pc != 0x1FA304u) { ctx->pc = 0x1FA304u; }
    }
    if (ctx->pc != 0x1FA304u) { return; }
    ctx->pc = 0x1FA304u;
    // 0x1fa304: 0x10000017
    ctx->pc = 0x1FA304u;
    {
        const bool branch_taken_0x1fa304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa304) {
            ctx->pc = 0x1FA364u;
            goto label_1fa364;
        }
    }
    ctx->pc = 0x1FA30Cu;
label_1fa30c:
    // 0x1fa30c: 0xc06c0fb
    ctx->pc = 0x1FA30Cu;
    SET_GPR_U32(ctx, 31, 0x1FA314u);
    ctx->pc = 0x1FA310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA314u; }
        else if (ctx->pc != 0x1FA314u) { ctx->pc = 0x1FA314u; }
    }
    if (ctx->pc != 0x1FA314u) { return; }
    ctx->pc = 0x1FA314u;
    // 0x1fa314: 0xc06c157
    ctx->pc = 0x1FA314u;
    SET_GPR_U32(ctx, 31, 0x1FA31Cu);
    ctx->pc = 0x1FA318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA31Cu; }
        else if (ctx->pc != 0x1FA31Cu) { ctx->pc = 0x1FA31Cu; }
    }
    if (ctx->pc != 0x1FA31Cu) { return; }
    ctx->pc = 0x1FA31Cu;
    // 0x1fa31c: 0xc06c09f
    ctx->pc = 0x1FA31Cu;
    SET_GPR_U32(ctx, 31, 0x1FA324u);
    ctx->pc = 0x1FA320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA324u; }
        else if (ctx->pc != 0x1FA324u) { ctx->pc = 0x1FA324u; }
    }
    if (ctx->pc != 0x1FA324u) { return; }
    ctx->pc = 0x1FA324u;
    // 0x1fa324: 0x1000000f
    ctx->pc = 0x1FA324u;
    {
        const bool branch_taken_0x1fa324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa324) {
            ctx->pc = 0x1FA364u;
            goto label_1fa364;
        }
    }
    ctx->pc = 0x1FA32Cu;
label_1fa32c:
    // 0x1fa32c: 0xc06c157
    ctx->pc = 0x1FA32Cu;
    SET_GPR_U32(ctx, 31, 0x1FA334u);
    ctx->pc = 0x1FA330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA334u; }
        else if (ctx->pc != 0x1FA334u) { ctx->pc = 0x1FA334u; }
    }
    if (ctx->pc != 0x1FA334u) { return; }
    ctx->pc = 0x1FA334u;
    // 0x1fa334: 0xc06c09f
    ctx->pc = 0x1FA334u;
    SET_GPR_U32(ctx, 31, 0x1FA33Cu);
    ctx->pc = 0x1FA338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA33Cu; }
        else if (ctx->pc != 0x1FA33Cu) { ctx->pc = 0x1FA33Cu; }
    }
    if (ctx->pc != 0x1FA33Cu) { return; }
    ctx->pc = 0x1FA33Cu;
    // 0x1fa33c: 0xc06c0fb
    ctx->pc = 0x1FA33Cu;
    SET_GPR_U32(ctx, 31, 0x1FA344u);
    ctx->pc = 0x1FA340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA344u; }
        else if (ctx->pc != 0x1FA344u) { ctx->pc = 0x1FA344u; }
    }
    if (ctx->pc != 0x1FA344u) { return; }
    ctx->pc = 0x1FA344u;
    // 0x1fa344: 0x10000007
    ctx->pc = 0x1FA344u;
    {
        const bool branch_taken_0x1fa344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa344) {
            ctx->pc = 0x1FA364u;
            goto label_1fa364;
        }
    }
    ctx->pc = 0x1FA34Cu;
label_1fa34c:
    // 0x1fa34c: 0xc06c157
    ctx->pc = 0x1FA34Cu;
    SET_GPR_U32(ctx, 31, 0x1FA354u);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA354u; }
        else if (ctx->pc != 0x1FA354u) { ctx->pc = 0x1FA354u; }
    }
    if (ctx->pc != 0x1FA354u) { return; }
    ctx->pc = 0x1FA354u;
    // 0x1fa354: 0xc06c0fb
    ctx->pc = 0x1FA354u;
    SET_GPR_U32(ctx, 31, 0x1FA35Cu);
    ctx->pc = 0x1FA358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA35Cu; }
        else if (ctx->pc != 0x1FA35Cu) { ctx->pc = 0x1FA35Cu; }
    }
    if (ctx->pc != 0x1FA35Cu) { return; }
    ctx->pc = 0x1FA35Cu;
    // 0x1fa35c: 0xc06c09f
    ctx->pc = 0x1FA35Cu;
    SET_GPR_U32(ctx, 31, 0x1FA364u);
    ctx->pc = 0x1FA360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA364u; }
        else if (ctx->pc != 0x1FA364u) { ctx->pc = 0x1FA364u; }
    }
    if (ctx->pc != 0x1FA364u) { return; }
    ctx->pc = 0x1FA364u;
label_1fa364:
    // 0x1fa364: 0xc64c1ca0
    ctx->pc = 0x1fa364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fa368:
    // 0x1fa368: 0x46006346
    ctx->pc = 0x1fa368u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1fa36c: 0xc06c1b3
    ctx->pc = 0x1FA36Cu;
    SET_GPR_U32(ctx, 31, 0x1FA374u);
    ctx->pc = 0x1FA370u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA374u; }
        else if (ctx->pc != 0x1FA374u) { ctx->pc = 0x1FA374u; }
    }
    if (ctx->pc != 0x1FA374u) { return; }
    ctx->pc = 0x1FA374u;
    // 0x1fa374: 0x8e431c9c
    ctx->pc = 0x1fa374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7324)));
    // 0x1fa378: 0x30620010
    ctx->pc = 0x1fa378u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x1fa37c: 0x1440000d
    ctx->pc = 0x1FA37Cu;
    {
        const bool branch_taken_0x1fa37c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FA380u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1fa37c) {
            ctx->pc = 0x1FA3B4u;
            goto label_1fa3b4;
        }
    }
    ctx->pc = 0x1FA384u;
    // 0x1fa384: 0x10400007
    ctx->pc = 0x1FA384u;
    {
        const bool branch_taken_0x1fa384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa384) {
            ctx->pc = 0x1FA3A4u;
            goto label_1fa3a4;
        }
    }
    ctx->pc = 0x1FA38Cu;
    // 0x1fa38c: 0xc64d0044
    ctx->pc = 0x1fa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa390: 0x44806000
    ctx->pc = 0x1fa390u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1fa394: 0xc06c202
    ctx->pc = 0x1FA394u;
    SET_GPR_U32(ctx, 31, 0x1FA39Cu);
    ctx->pc = 0x1FA398u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA39Cu; }
        else if (ctx->pc != 0x1FA39Cu) { ctx->pc = 0x1FA39Cu; }
    }
    if (ctx->pc != 0x1FA39Cu) { return; }
    ctx->pc = 0x1FA39Cu;
    // 0x1fa39c: 0x10000006
    ctx->pc = 0x1FA39Cu;
    {
        const bool branch_taken_0x1fa39c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA3A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x1fa39c) {
            ctx->pc = 0x1FA3B8u;
            goto label_1fa3b8;
        }
    }
    ctx->pc = 0x1FA3A4u;
label_1fa3a4:
    // 0x1fa3a4: 0xc64d0044
    ctx->pc = 0x1fa3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa3a8: 0xc64e0048
    ctx->pc = 0x1fa3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa3ac: 0xc06c202
    ctx->pc = 0x1FA3ACu;
    SET_GPR_U32(ctx, 31, 0x1FA3B4u);
    ctx->pc = 0x1FA3B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3B4u; }
        else if (ctx->pc != 0x1FA3B4u) { ctx->pc = 0x1FA3B4u; }
    }
    if (ctx->pc != 0x1FA3B4u) { return; }
    ctx->pc = 0x1FA3B4u;
label_1fa3b4:
    // 0x1fa3b4: 0x8e620000
    ctx->pc = 0x1fa3b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fa3b8:
    // 0x1fa3b8: 0x8c540008
    ctx->pc = 0x1fa3b8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fa3bc: 0x8c44000c
    ctx->pc = 0x1fa3bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fa3c0: 0xc06c157
    ctx->pc = 0x1FA3C0u;
    SET_GPR_U32(ctx, 31, 0x1FA3C8u);
    ctx->pc = 0x1FA3C4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3C8u; }
        else if (ctx->pc != 0x1FA3C8u) { ctx->pc = 0x1FA3C8u; }
    }
    if (ctx->pc != 0x1FA3C8u) { return; }
    ctx->pc = 0x1FA3C8u;
    // 0x1fa3c8: 0xc06c0fb
    ctx->pc = 0x1FA3C8u;
    SET_GPR_U32(ctx, 31, 0x1FA3D0u);
    ctx->pc = 0x1FA3CCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3D0u; }
        else if (ctx->pc != 0x1FA3D0u) { ctx->pc = 0x1FA3D0u; }
    }
    if (ctx->pc != 0x1FA3D0u) { return; }
    ctx->pc = 0x1FA3D0u;
    // 0x1fa3d0: 0xc06c09f
    ctx->pc = 0x1FA3D0u;
    SET_GPR_U32(ctx, 31, 0x1FA3D8u);
    ctx->pc = 0x1FA3D4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3D8u; }
        else if (ctx->pc != 0x1FA3D8u) { ctx->pc = 0x1FA3D8u; }
    }
    if (ctx->pc != 0x1FA3D8u) { return; }
    ctx->pc = 0x1FA3D8u;
    // 0x1fa3d8: 0x70008e28
    ctx->pc = 0x1fa3d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa3dc: 0x10000006
    ctx->pc = 0x1FA3DCu;
    {
        const bool branch_taken_0x1fa3dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA3E0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fa3dc) {
            ctx->pc = 0x1FA3F8u;
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA3E4u;
label_1fa3e4:
    // 0x1fa3e4: 0x8e850024
    ctx->pc = 0x1fa3e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1fa3e8: 0xc07ed74
    ctx->pc = 0x1FA3E8u;
    SET_GPR_U32(ctx, 31, 0x1FA3F0u);
    ctx->pc = 0x1FA3ECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMat_rcv_onlyput__12BodyMgrClassFP7_BODYPT_0x1fb5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3F0u; }
        else if (ctx->pc != 0x1FA3F0u) { ctx->pc = 0x1FA3F0u; }
    }
    if (ctx->pc != 0x1FA3F0u) { return; }
    ctx->pc = 0x1FA3F0u;
    // 0x1fa3f0: 0x26940004
    ctx->pc = 0x1fa3f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1fa3f4: 0x26310001
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1fa3f8:
    // 0x1fa3f8: 0x86030022
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1fa3fc: 0x223182a
    ctx->pc = 0x1fa3fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1fa400: 0x1460fff8
    ctx->pc = 0x1FA400u;
    {
        const bool branch_taken_0x1fa400 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fa400) {
            ctx->pc = 0x1FA3E4u;
            goto label_1fa3e4;
        }
    }
    ctx->pc = 0x1FA408u;
    // 0x1fa408: 0x4bff6b7e
    ctx->pc = 0x1fa408u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fa40c: 0x4bfe6b7e
    ctx->pc = 0x1fa40cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fa410: 0x4bfd6b7e
    ctx->pc = 0x1fa410u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fa414: 0x4bfc6b7e
    ctx->pc = 0x1fa414u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fa418: 0x8644002c
    ctx->pc = 0x1fa418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1fa41c: 0x3c030027
    ctx->pc = 0x1fa41cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fa420: 0x246323f0
    ctx->pc = 0x1fa420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9200));
    // 0x1fa424: 0x42080
    ctx->pc = 0x1fa424u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fa428: 0x641821
    ctx->pc = 0x1fa428u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa42c: 0x8c630000
    ctx->pc = 0x1fa42cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa430: 0x1060000d
    ctx->pc = 0x1FA430u;
    {
        const bool branch_taken_0x1fa430 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa430) {
            ctx->pc = 0x1FA468u;
            goto label_1fa468;
        }
    }
    ctx->pc = 0x1FA438u;
    // 0x1fa438: 0x8e431c9c
    ctx->pc = 0x1fa438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7324)));
    // 0x1fa43c: 0x30630001
    ctx->pc = 0x1fa43cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1fa440: 0x10600009
    ctx->pc = 0x1FA440u;
    {
        const bool branch_taken_0x1fa440 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA444u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fa440) {
            ctx->pc = 0x1FA468u;
            goto label_1fa468;
        }
    }
    ctx->pc = 0x1FA448u;
    // 0x1fa448: 0xc06ac08
    ctx->pc = 0x1FA448u;
    SET_GPR_U32(ctx, 31, 0x1FA450u);
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA450u; }
        else if (ctx->pc != 0x1FA450u) { ctx->pc = 0x1FA450u; }
    }
    if (ctx->pc != 0x1FA450u) { return; }
    ctx->pc = 0x1FA450u;
    // 0x1fa450: 0x3c020051
    ctx->pc = 0x1fa450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fa454: 0x72402e28
    ctx->pc = 0x1fa454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fa458: 0xc07fac0
    ctx->pc = 0x1FA458u;
    SET_GPR_U32(ctx, 31, 0x1FA460u);
    ctx->pc = 0x1FA45Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FEB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__15OneSkinMgrClassFP10MotObjTask_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA460u; }
        else if (ctx->pc != 0x1FA460u) { ctx->pc = 0x1FA460u; }
    }
    if (ctx->pc != 0x1FA460u) { return; }
    ctx->pc = 0x1FA460u;
    // 0x1fa460: 0xc06ac08
    ctx->pc = 0x1FA460u;
    SET_GPR_U32(ctx, 31, 0x1FA468u);
    ctx->pc = 0x1FA464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA468u; }
        else if (ctx->pc != 0x1FA468u) { ctx->pc = 0x1FA468u; }
    }
    if (ctx->pc != 0x1FA468u) { return; }
    ctx->pc = 0x1FA468u;
label_1fa468:
    // 0x1fa468: 0x7bbf0050
    ctx->pc = 0x1fa468u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fa46c: 0x7bb40040
    ctx->pc = 0x1fa46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa470: 0x7bb30030
    ctx->pc = 0x1fa470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa474: 0x7bb20020
    ctx->pc = 0x1fa474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa478: 0x7bb10010
    ctx->pc = 0x1fa478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa47c: 0x7bb00000
    ctx->pc = 0x1fa47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa480: 0x3e00008
    ctx->pc = 0x1FA480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA2ACu: goto label_1fa2ac;
            case 0x1FA2CCu: goto label_1fa2cc;
            case 0x1FA2ECu: goto label_1fa2ec;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA32Cu: goto label_1fa32c;
            case 0x1FA34Cu: goto label_1fa34c;
            case 0x1FA364u: goto label_1fa364;
            case 0x1FA368u: goto label_1fa368;
            case 0x1FA3A4u: goto label_1fa3a4;
            case 0x1FA3B4u: goto label_1fa3b4;
            case 0x1FA3B8u: goto label_1fa3b8;
            case 0x1FA3E4u: goto label_1fa3e4;
            case 0x1FA3F8u: goto label_1fa3f8;
            case 0x1FA468u: goto label_1fa468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA488u;
}
