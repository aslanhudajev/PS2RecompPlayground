#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS
// Address: 0x1f9200 - 0x1fa1f4
void ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS");


    ctx->pc = 0x1f9200u;

label_1f9200:
    // 0x1f9200: 0x27bdff00
    ctx->pc = 0x1f9200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_1f9204:
    // 0x1f9204: 0x7fbf0060
    ctx->pc = 0x1f9204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_1f9208:
    // 0x1f9208: 0x7fb40050
    ctx->pc = 0x1f9208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1f920c:
    // 0x1f920c: 0x7fb30040
    ctx->pc = 0x1f920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f9210:
    // 0x1f9210: 0x7fb20030
    ctx->pc = 0x1f9210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f9214:
    // 0x1f9214: 0x7fb10020
    ctx->pc = 0x1f9214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f9218:
    // 0x1f9218: 0x7fb00010
    ctx->pc = 0x1f9218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f921c:
    // 0x1f921c: 0xe7b60008
    ctx->pc = 0x1f921cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f9220:
    // 0x1f9220: 0xe7b50004
    ctx->pc = 0x1f9220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1f9224:
    // 0x1f9224: 0xe7b40000
    ctx->pc = 0x1f9224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f9228:
    // 0x1f9228: 0x84a2002c
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_1f922c:
    // 0x1f922c: 0x3c0101f3
    ctx->pc = 0x1f922cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
label_1f9230:
    // 0x1f9230: 0x70a08e28
    ctx->pc = 0x1f9230u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1f9234:
    // 0x1f9234: 0x70c08628
    ctx->pc = 0x1f9234u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1f9238:
    // 0x1f9238: 0x70809628
    ctx->pc = 0x1f9238u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1f923c:
    // 0x1f923c: 0x21080
    ctx->pc = 0x1f923cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1f9240:
    // 0x1f9240: 0x410821
    ctx->pc = 0x1f9240u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f9244:
    // 0x1f9244: 0x8c339730
    ctx->pc = 0x1f9244u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
label_1f9248:
    // 0x1f9248: 0x4bede37d
    ctx->pc = 0x1f9248u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f924c:
    // 0x1f924c: 0x4bedeb7d
    ctx->pc = 0x1f924cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f9250:
    // 0x1f9250: 0x4bedf37d
    ctx->pc = 0x1f9250u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f9254:
    // 0x1f9254: 0x4bedfb7d
    ctx->pc = 0x1f9254u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1f9258:
    // 0x1f9258: 0xac910004
    ctx->pc = 0x1f9258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
label_1f925c:
    // 0x1f925c: 0xac870000
    ctx->pc = 0x1f925cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_1f9260:
    // 0x1f9260: 0xa0a0003d
    ctx->pc = 0x1f9260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 0));
label_1f9264:
    // 0x1f9264: 0x80a2003a
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
label_1f9268:
    // 0x1f9268: 0x30420001
    ctx->pc = 0x1f9268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1f926c:
    // 0x1f926c: 0x1040014d
label_1f9270:
    if (ctx->pc == 0x1F9270u) {
        ctx->pc = 0x1F9270u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9274u;
        goto label_1f9274;
    }
    ctx->pc = 0x1F926Cu;
    {
        const bool branch_taken_0x1f926c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9270u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f926c) {
            ctx->pc = 0x1F97A4u;
            goto label_1f97a4;
        }
    }
    ctx->pc = 0x1F9274u;
label_1f9274:
    // 0x1f9274: 0x3c020050
    ctx->pc = 0x1f9274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f9278:
    // 0x1f9278: 0xc07ce18
label_1f927c:
    if (ctx->pc == 0x1F927Cu) {
        ctx->pc = 0x1F927Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1F9280u;
        goto label_1f9280;
    }
    ctx->pc = 0x1F9278u;
    SET_GPR_U32(ctx, 31, 0x1F9280u);
    ctx->pc = 0x1F927Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9280u; }
        else if (ctx->pc != 0x1F9280u) { ctx->pc = 0x1F9280u; }
    }
    if (ctx->pc != 0x1F9280u) { return; }
    ctx->pc = 0x1F9280u;
label_1f9280:
    // 0x1f9280: 0x1c40012b
label_1f9284:
    if (ctx->pc == 0x1F9284u) {
        ctx->pc = 0x1F9288u;
        goto label_1f9288;
    }
    ctx->pc = 0x1F9280u;
    {
        const bool branch_taken_0x1f9280 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1f9280) {
            ctx->pc = 0x1F9730u;
            goto label_1f9730;
        }
    }
    ctx->pc = 0x1F9288u;
label_1f9288:
    // 0x1f9288: 0x8222003a
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_1f928c:
    // 0x1f928c: 0x30430008
    ctx->pc = 0x1f928cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 8));
label_1f9290:
    // 0x1f9290: 0x10600062
label_1f9294:
    if (ctx->pc == 0x1F9294u) {
        ctx->pc = 0x1F9298u;
        goto label_1f9298;
    }
    ctx->pc = 0x1F9290u;
    {
        const bool branch_taken_0x1f9290 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9290) {
            ctx->pc = 0x1F941Cu;
            goto label_1f941c;
        }
    }
    ctx->pc = 0x1F9298u;
label_1f9298:
    // 0x1f9298: 0x8e221c9c
    ctx->pc = 0x1f9298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7324)));
label_1f929c:
    // 0x1f929c: 0x30420010
    ctx->pc = 0x1f929cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_1f92a0:
    // 0x1f92a0: 0x1040005e
label_1f92a4:
    if (ctx->pc == 0x1F92A4u) {
        ctx->pc = 0x1F92A8u;
        goto label_1f92a8;
    }
    ctx->pc = 0x1F92A0u;
    {
        const bool branch_taken_0x1f92a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f92a0) {
            ctx->pc = 0x1F941Cu;
            goto label_1f941c;
        }
    }
    ctx->pc = 0x1F92A8u;
label_1f92a8:
    // 0x1f92a8: 0x4bede37d
    ctx->pc = 0x1f92a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f92ac:
    // 0x1f92ac: 0x4bedeb7d
    ctx->pc = 0x1f92acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f92b0:
    // 0x1f92b0: 0x4bedf37d
    ctx->pc = 0x1f92b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f92b4:
    // 0x1f92b4: 0xc06c20d
label_1f92b8:
    if (ctx->pc == 0x1F92B8u) {
        ctx->pc = 0x1F92B8u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x1F92BCu;
        goto label_1f92bc;
    }
    ctx->pc = 0x1F92B4u;
    SET_GPR_U32(ctx, 31, 0x1F92BCu);
    ctx->pc = 0x1F92B8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92BCu; }
        else if (ctx->pc != 0x1F92BCu) { ctx->pc = 0x1F92BCu; }
    }
    if (ctx->pc != 0x1F92BCu) { return; }
    ctx->pc = 0x1F92BCu;
label_1f92bc:
    // 0x1f92bc: 0xc60d0004
    ctx->pc = 0x1f92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f92c0:
    // 0x1f92c0: 0xc60e0008
    ctx->pc = 0x1f92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f92c4:
    // 0x1f92c4: 0xc06c202
label_1f92c8:
    if (ctx->pc == 0x1F92C8u) {
        ctx->pc = 0x1F92C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F92CCu;
        goto label_1f92cc;
    }
    ctx->pc = 0x1F92C4u;
    SET_GPR_U32(ctx, 31, 0x1F92CCu);
    ctx->pc = 0x1F92C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92CCu; }
        else if (ctx->pc != 0x1F92CCu) { ctx->pc = 0x1F92CCu; }
    }
    if (ctx->pc != 0x1F92CCu) { return; }
    ctx->pc = 0x1F92CCu;
label_1f92cc:
    // 0x1f92cc: 0x8e231c98
    ctx->pc = 0x1f92ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
label_1f92d0:
    // 0x1f92d0: 0x24020004
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f92d4:
    // 0x1f92d4: 0x1062002b
label_1f92d8:
    if (ctx->pc == 0x1F92D8u) {
        ctx->pc = 0x1F92D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F92DCu;
        goto label_1f92dc;
    }
    ctx->pc = 0x1F92D4u;
    {
        const bool branch_taken_0x1f92d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F92D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f92d4) {
            ctx->pc = 0x1F9384u;
            goto label_1f9384;
        }
    }
    ctx->pc = 0x1F92DCu;
label_1f92dc:
    // 0x1f92dc: 0x10620021
label_1f92e0:
    if (ctx->pc == 0x1F92E0u) {
        ctx->pc = 0x1F92E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F92E4u;
        goto label_1f92e4;
    }
    ctx->pc = 0x1F92DCu;
    {
        const bool branch_taken_0x1f92dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F92E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f92dc) {
            ctx->pc = 0x1F9364u;
            goto label_1f9364;
        }
    }
    ctx->pc = 0x1F92E4u;
label_1f92e4:
    // 0x1f92e4: 0x10620017
label_1f92e8:
    if (ctx->pc == 0x1F92E8u) {
        ctx->pc = 0x1F92E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F92ECu;
        goto label_1f92ec;
    }
    ctx->pc = 0x1F92E4u;
    {
        const bool branch_taken_0x1f92e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F92E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f92e4) {
            ctx->pc = 0x1F9344u;
            goto label_1f9344;
        }
    }
    ctx->pc = 0x1F92ECu;
label_1f92ec:
    // 0x1f92ec: 0x1062000d
label_1f92f0:
    if (ctx->pc == 0x1F92F0u) {
        ctx->pc = 0x1F92F4u;
        goto label_1f92f4;
    }
    ctx->pc = 0x1F92ECu;
    {
        const bool branch_taken_0x1f92ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f92ec) {
            ctx->pc = 0x1F9324u;
            goto label_1f9324;
        }
    }
    ctx->pc = 0x1F92F4u;
label_1f92f4:
    // 0x1f92f4: 0x10600003
label_1f92f8:
    if (ctx->pc == 0x1F92F8u) {
        ctx->pc = 0x1F92FCu;
        goto label_1f92fc;
    }
    ctx->pc = 0x1F92F4u;
    {
        const bool branch_taken_0x1f92f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f92f4) {
            ctx->pc = 0x1F9304u;
            goto label_1f9304;
        }
    }
    ctx->pc = 0x1F92FCu;
label_1f92fc:
    // 0x1f92fc: 0x10000029
label_1f9300:
    if (ctx->pc == 0x1F9300u) {
        ctx->pc = 0x1F9300u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9304u;
        goto label_1f9304;
    }
    ctx->pc = 0x1F92FCu;
    {
        const bool branch_taken_0x1f92fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9300u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1f92fc) {
            ctx->pc = 0x1F93A4u;
            goto label_1f93a4;
        }
    }
    ctx->pc = 0x1F9304u;
label_1f9304:
    // 0x1f9304: 0xc06c09f
label_1f9308:
    if (ctx->pc == 0x1F9308u) {
        ctx->pc = 0x1F9308u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F930Cu;
        goto label_1f930c;
    }
    ctx->pc = 0x1F9304u;
    SET_GPR_U32(ctx, 31, 0x1F930Cu);
    ctx->pc = 0x1F9308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F930Cu; }
        else if (ctx->pc != 0x1F930Cu) { ctx->pc = 0x1F930Cu; }
    }
    if (ctx->pc != 0x1F930Cu) { return; }
    ctx->pc = 0x1F930Cu;
label_1f930c:
    // 0x1f930c: 0xc06c0fb
label_1f9310:
    if (ctx->pc == 0x1F9310u) {
        ctx->pc = 0x1F9310u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9314u;
        goto label_1f9314;
    }
    ctx->pc = 0x1F930Cu;
    SET_GPR_U32(ctx, 31, 0x1F9314u);
    ctx->pc = 0x1F9310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9314u; }
        else if (ctx->pc != 0x1F9314u) { ctx->pc = 0x1F9314u; }
    }
    if (ctx->pc != 0x1F9314u) { return; }
    ctx->pc = 0x1F9314u;
label_1f9314:
    // 0x1f9314: 0xc06c157
label_1f9318:
    if (ctx->pc == 0x1F9318u) {
        ctx->pc = 0x1F9318u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F931Cu;
        goto label_1f931c;
    }
    ctx->pc = 0x1F9314u;
    SET_GPR_U32(ctx, 31, 0x1F931Cu);
    ctx->pc = 0x1F9318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F931Cu; }
        else if (ctx->pc != 0x1F931Cu) { ctx->pc = 0x1F931Cu; }
    }
    if (ctx->pc != 0x1F931Cu) { return; }
    ctx->pc = 0x1F931Cu;
label_1f931c:
    // 0x1f931c: 0x10000028
label_1f9320:
    if (ctx->pc == 0x1F9320u) {
        ctx->pc = 0x1F9320u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9324u;
        goto label_1f9324;
    }
    ctx->pc = 0x1F931Cu;
    {
        const bool branch_taken_0x1f931c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9320u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1f931c) {
            ctx->pc = 0x1F93C0u;
            goto label_1f93c0;
        }
    }
    ctx->pc = 0x1F9324u;
label_1f9324:
    // 0x1f9324: 0xc06c09f
label_1f9328:
    if (ctx->pc == 0x1F9328u) {
        ctx->pc = 0x1F9328u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F932Cu;
        goto label_1f932c;
    }
    ctx->pc = 0x1F9324u;
    SET_GPR_U32(ctx, 31, 0x1F932Cu);
    ctx->pc = 0x1F9328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F932Cu; }
        else if (ctx->pc != 0x1F932Cu) { ctx->pc = 0x1F932Cu; }
    }
    if (ctx->pc != 0x1F932Cu) { return; }
    ctx->pc = 0x1F932Cu;
label_1f932c:
    // 0x1f932c: 0xc06c157
label_1f9330:
    if (ctx->pc == 0x1F9330u) {
        ctx->pc = 0x1F9330u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9334u;
        goto label_1f9334;
    }
    ctx->pc = 0x1F932Cu;
    SET_GPR_U32(ctx, 31, 0x1F9334u);
    ctx->pc = 0x1F9330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9334u; }
        else if (ctx->pc != 0x1F9334u) { ctx->pc = 0x1F9334u; }
    }
    if (ctx->pc != 0x1F9334u) { return; }
    ctx->pc = 0x1F9334u;
label_1f9334:
    // 0x1f9334: 0xc06c0fb
label_1f9338:
    if (ctx->pc == 0x1F9338u) {
        ctx->pc = 0x1F9338u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F933Cu;
        goto label_1f933c;
    }
    ctx->pc = 0x1F9334u;
    SET_GPR_U32(ctx, 31, 0x1F933Cu);
    ctx->pc = 0x1F9338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F933Cu; }
        else if (ctx->pc != 0x1F933Cu) { ctx->pc = 0x1F933Cu; }
    }
    if (ctx->pc != 0x1F933Cu) { return; }
    ctx->pc = 0x1F933Cu;
label_1f933c:
    // 0x1f933c: 0x1000001f
label_1f9340:
    if (ctx->pc == 0x1F9340u) {
        ctx->pc = 0x1F9344u;
        goto label_1f9344;
    }
    ctx->pc = 0x1F933Cu;
    {
        const bool branch_taken_0x1f933c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f933c) {
            ctx->pc = 0x1F93BCu;
            goto label_1f93bc;
        }
    }
    ctx->pc = 0x1F9344u;
label_1f9344:
    // 0x1f9344: 0xc06c0fb
label_1f9348:
    if (ctx->pc == 0x1F9348u) {
        ctx->pc = 0x1F9348u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F934Cu;
        goto label_1f934c;
    }
    ctx->pc = 0x1F9344u;
    SET_GPR_U32(ctx, 31, 0x1F934Cu);
    ctx->pc = 0x1F9348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F934Cu; }
        else if (ctx->pc != 0x1F934Cu) { ctx->pc = 0x1F934Cu; }
    }
    if (ctx->pc != 0x1F934Cu) { return; }
    ctx->pc = 0x1F934Cu;
label_1f934c:
    // 0x1f934c: 0xc06c09f
label_1f9350:
    if (ctx->pc == 0x1F9350u) {
        ctx->pc = 0x1F9350u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9354u;
        goto label_1f9354;
    }
    ctx->pc = 0x1F934Cu;
    SET_GPR_U32(ctx, 31, 0x1F9354u);
    ctx->pc = 0x1F9350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9354u; }
        else if (ctx->pc != 0x1F9354u) { ctx->pc = 0x1F9354u; }
    }
    if (ctx->pc != 0x1F9354u) { return; }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0xc06c157
label_1f9358:
    if (ctx->pc == 0x1F9358u) {
        ctx->pc = 0x1F9358u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F935Cu;
        goto label_1f935c;
    }
    ctx->pc = 0x1F9354u;
    SET_GPR_U32(ctx, 31, 0x1F935Cu);
    ctx->pc = 0x1F9358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F935Cu; }
        else if (ctx->pc != 0x1F935Cu) { ctx->pc = 0x1F935Cu; }
    }
    if (ctx->pc != 0x1F935Cu) { return; }
    ctx->pc = 0x1F935Cu;
label_1f935c:
    // 0x1f935c: 0x10000017
label_1f9360:
    if (ctx->pc == 0x1F9360u) {
        ctx->pc = 0x1F9364u;
        goto label_1f9364;
    }
    ctx->pc = 0x1F935Cu;
    {
        const bool branch_taken_0x1f935c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f935c) {
            ctx->pc = 0x1F93BCu;
            goto label_1f93bc;
        }
    }
    ctx->pc = 0x1F9364u;
label_1f9364:
    // 0x1f9364: 0xc06c0fb
label_1f9368:
    if (ctx->pc == 0x1F9368u) {
        ctx->pc = 0x1F9368u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F936Cu;
        goto label_1f936c;
    }
    ctx->pc = 0x1F9364u;
    SET_GPR_U32(ctx, 31, 0x1F936Cu);
    ctx->pc = 0x1F9368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F936Cu; }
        else if (ctx->pc != 0x1F936Cu) { ctx->pc = 0x1F936Cu; }
    }
    if (ctx->pc != 0x1F936Cu) { return; }
    ctx->pc = 0x1F936Cu;
label_1f936c:
    // 0x1f936c: 0xc06c157
label_1f9370:
    if (ctx->pc == 0x1F9370u) {
        ctx->pc = 0x1F9370u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9374u;
        goto label_1f9374;
    }
    ctx->pc = 0x1F936Cu;
    SET_GPR_U32(ctx, 31, 0x1F9374u);
    ctx->pc = 0x1F9370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9374u; }
        else if (ctx->pc != 0x1F9374u) { ctx->pc = 0x1F9374u; }
    }
    if (ctx->pc != 0x1F9374u) { return; }
    ctx->pc = 0x1F9374u;
label_1f9374:
    // 0x1f9374: 0xc06c09f
label_1f9378:
    if (ctx->pc == 0x1F9378u) {
        ctx->pc = 0x1F9378u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F937Cu;
        goto label_1f937c;
    }
    ctx->pc = 0x1F9374u;
    SET_GPR_U32(ctx, 31, 0x1F937Cu);
    ctx->pc = 0x1F9378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F937Cu; }
        else if (ctx->pc != 0x1F937Cu) { ctx->pc = 0x1F937Cu; }
    }
    if (ctx->pc != 0x1F937Cu) { return; }
    ctx->pc = 0x1F937Cu;
label_1f937c:
    // 0x1f937c: 0x1000000f
label_1f9380:
    if (ctx->pc == 0x1F9380u) {
        ctx->pc = 0x1F9384u;
        goto label_1f9384;
    }
    ctx->pc = 0x1F937Cu;
    {
        const bool branch_taken_0x1f937c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f937c) {
            ctx->pc = 0x1F93BCu;
            goto label_1f93bc;
        }
    }
    ctx->pc = 0x1F9384u;
label_1f9384:
    // 0x1f9384: 0xc06c157
label_1f9388:
    if (ctx->pc == 0x1F9388u) {
        ctx->pc = 0x1F9388u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F938Cu;
        goto label_1f938c;
    }
    ctx->pc = 0x1F9384u;
    SET_GPR_U32(ctx, 31, 0x1F938Cu);
    ctx->pc = 0x1F9388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F938Cu; }
        else if (ctx->pc != 0x1F938Cu) { ctx->pc = 0x1F938Cu; }
    }
    if (ctx->pc != 0x1F938Cu) { return; }
    ctx->pc = 0x1F938Cu;
label_1f938c:
    // 0x1f938c: 0xc06c09f
label_1f9390:
    if (ctx->pc == 0x1F9390u) {
        ctx->pc = 0x1F9390u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9394u;
        goto label_1f9394;
    }
    ctx->pc = 0x1F938Cu;
    SET_GPR_U32(ctx, 31, 0x1F9394u);
    ctx->pc = 0x1F9390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9394u; }
        else if (ctx->pc != 0x1F9394u) { ctx->pc = 0x1F9394u; }
    }
    if (ctx->pc != 0x1F9394u) { return; }
    ctx->pc = 0x1F9394u;
label_1f9394:
    // 0x1f9394: 0xc06c0fb
label_1f9398:
    if (ctx->pc == 0x1F9398u) {
        ctx->pc = 0x1F9398u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F939Cu;
        goto label_1f939c;
    }
    ctx->pc = 0x1F9394u;
    SET_GPR_U32(ctx, 31, 0x1F939Cu);
    ctx->pc = 0x1F9398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F939Cu; }
        else if (ctx->pc != 0x1F939Cu) { ctx->pc = 0x1F939Cu; }
    }
    if (ctx->pc != 0x1F939Cu) { return; }
    ctx->pc = 0x1F939Cu;
label_1f939c:
    // 0x1f939c: 0x10000007
label_1f93a0:
    if (ctx->pc == 0x1F93A0u) {
        ctx->pc = 0x1F93A4u;
        goto label_1f93a4;
    }
    ctx->pc = 0x1F939Cu;
    {
        const bool branch_taken_0x1f939c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f939c) {
            ctx->pc = 0x1F93BCu;
            goto label_1f93bc;
        }
    }
    ctx->pc = 0x1F93A4u;
label_1f93a4:
    // 0x1f93a4: 0xc06c157
label_1f93a8:
    if (ctx->pc == 0x1F93A8u) {
        ctx->pc = 0x1F93ACu;
        goto label_1f93ac;
    }
    ctx->pc = 0x1F93A4u;
    SET_GPR_U32(ctx, 31, 0x1F93ACu);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93ACu; }
        else if (ctx->pc != 0x1F93ACu) { ctx->pc = 0x1F93ACu; }
    }
    if (ctx->pc != 0x1F93ACu) { return; }
    ctx->pc = 0x1F93ACu;
label_1f93ac:
    // 0x1f93ac: 0xc06c0fb
label_1f93b0:
    if (ctx->pc == 0x1F93B0u) {
        ctx->pc = 0x1F93B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F93B4u;
        goto label_1f93b4;
    }
    ctx->pc = 0x1F93ACu;
    SET_GPR_U32(ctx, 31, 0x1F93B4u);
    ctx->pc = 0x1F93B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93B4u; }
        else if (ctx->pc != 0x1F93B4u) { ctx->pc = 0x1F93B4u; }
    }
    if (ctx->pc != 0x1F93B4u) { return; }
    ctx->pc = 0x1F93B4u;
label_1f93b4:
    // 0x1f93b4: 0xc06c09f
label_1f93b8:
    if (ctx->pc == 0x1F93B8u) {
        ctx->pc = 0x1F93B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F93BCu;
        goto label_1f93bc;
    }
    ctx->pc = 0x1F93B4u;
    SET_GPR_U32(ctx, 31, 0x1F93BCu);
    ctx->pc = 0x1F93B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93BCu; }
        else if (ctx->pc != 0x1F93BCu) { ctx->pc = 0x1F93BCu; }
    }
    if (ctx->pc != 0x1F93BCu) { return; }
    ctx->pc = 0x1F93BCu;
label_1f93bc:
    // 0x1f93bc: 0xc62c1ca0
    ctx->pc = 0x1f93bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f93c0:
    // 0x1f93c0: 0x46006346
    ctx->pc = 0x1f93c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f93c4:
    // 0x1f93c4: 0xc06c1b3
label_1f93c8:
    if (ctx->pc == 0x1F93C8u) {
        ctx->pc = 0x1F93C8u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F93CCu;
        goto label_1f93cc;
    }
    ctx->pc = 0x1F93C4u;
    SET_GPR_U32(ctx, 31, 0x1F93CCu);
    ctx->pc = 0x1F93C8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93CCu; }
        else if (ctx->pc != 0x1F93CCu) { ctx->pc = 0x1F93CCu; }
    }
    if (ctx->pc != 0x1F93CCu) { return; }
    ctx->pc = 0x1F93CCu;
label_1f93cc:
    // 0x1f93cc: 0xc6200058
    ctx->pc = 0x1f93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f93d0:
    // 0x1f93d0: 0x27a40080
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1f93d4:
    // 0x1f93d4: 0x27a50090
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1f93d8:
    // 0x1f93d8: 0xe7a00080
    ctx->pc = 0x1f93d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f93dc:
    // 0x1f93dc: 0xc620005c
    ctx->pc = 0x1f93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f93e0:
    // 0x1f93e0: 0xe7a00084
    ctx->pc = 0x1f93e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f93e4:
    // 0x1f93e4: 0xc6200060
    ctx->pc = 0x1f93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f93e8:
    // 0x1f93e8: 0xc06bf00
label_1f93ec:
    if (ctx->pc == 0x1F93ECu) {
        ctx->pc = 0x1F93ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1F93F0u;
        goto label_1f93f0;
    }
    ctx->pc = 0x1F93E8u;
    SET_GPR_U32(ctx, 31, 0x1F93F0u);
    ctx->pc = 0x1F93ECu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93F0u; }
        else if (ctx->pc != 0x1F93F0u) { ctx->pc = 0x1F93F0u; }
    }
    if (ctx->pc != 0x1F93F0u) { return; }
    ctx->pc = 0x1F93F0u;
label_1f93f0:
    // 0x1f93f0: 0xc7a00090
    ctx->pc = 0x1f93f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f93f4:
    // 0x1f93f4: 0xe6000000
    ctx->pc = 0x1f93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f93f8:
    // 0x1f93f8: 0xc7a00094
    ctx->pc = 0x1f93f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f93fc:
    // 0x1f93fc: 0xe6000004
    ctx->pc = 0x1f93fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1f9400:
    // 0x1f9400: 0xc7a00098
    ctx->pc = 0x1f9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9404:
    // 0x1f9404: 0xe6000008
    ctx->pc = 0x1f9404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1f9408:
    // 0x1f9408: 0x4bff6b7e
    ctx->pc = 0x1f9408u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f940c:
    // 0x1f940c: 0x4bfe6b7e
    ctx->pc = 0x1f940cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9410:
    // 0x1f9410: 0x4bfd6b7e
    ctx->pc = 0x1f9410u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f9414:
    // 0x1f9414: 0x10000060
label_1f9418:
    if (ctx->pc == 0x1F9418u) {
        ctx->pc = 0x1F9418u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1F941Cu;
        goto label_1f941c;
    }
    ctx->pc = 0x1F9414u;
    {
        const bool branch_taken_0x1f9414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9418u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1f9414) {
            ctx->pc = 0x1F9598u;
            goto label_1f9598;
        }
    }
    ctx->pc = 0x1F941Cu;
label_1f941c:
    // 0x1f941c: 0x1060005e
label_1f9420:
    if (ctx->pc == 0x1F9420u) {
        ctx->pc = 0x1F9424u;
        goto label_1f9424;
    }
    ctx->pc = 0x1F941Cu;
    {
        const bool branch_taken_0x1f941c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f941c) {
            ctx->pc = 0x1F9598u;
            goto label_1f9598;
        }
    }
    ctx->pc = 0x1F9424u;
label_1f9424:
    // 0x1f9424: 0x8e221c9c
    ctx->pc = 0x1f9424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7324)));
label_1f9428:
    // 0x1f9428: 0x30420002
    ctx->pc = 0x1f9428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_1f942c:
    // 0x1f942c: 0x1040005a
label_1f9430:
    if (ctx->pc == 0x1F9430u) {
        ctx->pc = 0x1F9434u;
        goto label_1f9434;
    }
    ctx->pc = 0x1F942Cu;
    {
        const bool branch_taken_0x1f942c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f942c) {
            ctx->pc = 0x1F9598u;
            goto label_1f9598;
        }
    }
    ctx->pc = 0x1F9434u;
label_1f9434:
    // 0x1f9434: 0x4bede37d
    ctx->pc = 0x1f9434u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f9438:
    // 0x1f9438: 0x4bedeb7d
    ctx->pc = 0x1f9438u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f943c:
    // 0x1f943c: 0x4bedf37d
    ctx->pc = 0x1f943cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f9440:
    // 0x1f9440: 0xc06c20d
label_1f9444:
    if (ctx->pc == 0x1F9444u) {
        ctx->pc = 0x1F9444u;
        { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
        ctx->pc = 0x1F9448u;
        goto label_1f9448;
    }
    ctx->pc = 0x1F9440u;
    SET_GPR_U32(ctx, 31, 0x1F9448u);
    ctx->pc = 0x1F9444u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9448u; }
        else if (ctx->pc != 0x1F9448u) { ctx->pc = 0x1F9448u; }
    }
    if (ctx->pc != 0x1F9448u) { return; }
    ctx->pc = 0x1F9448u;
label_1f9448:
    // 0x1f9448: 0xc60d0004
    ctx->pc = 0x1f9448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f944c:
    // 0x1f944c: 0xc60e0008
    ctx->pc = 0x1f944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f9450:
    // 0x1f9450: 0xc06c202
label_1f9454:
    if (ctx->pc == 0x1F9454u) {
        ctx->pc = 0x1F9454u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9458u;
        goto label_1f9458;
    }
    ctx->pc = 0x1F9450u;
    SET_GPR_U32(ctx, 31, 0x1F9458u);
    ctx->pc = 0x1F9454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9458u; }
        else if (ctx->pc != 0x1F9458u) { ctx->pc = 0x1F9458u; }
    }
    if (ctx->pc != 0x1F9458u) { return; }
    ctx->pc = 0x1F9458u;
label_1f9458:
    // 0x1f9458: 0x8e231c98
    ctx->pc = 0x1f9458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
label_1f945c:
    // 0x1f945c: 0x24020004
    ctx->pc = 0x1f945cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f9460:
    // 0x1f9460: 0x1062002b
label_1f9464:
    if (ctx->pc == 0x1F9464u) {
        ctx->pc = 0x1F9464u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F9468u;
        goto label_1f9468;
    }
    ctx->pc = 0x1F9460u;
    {
        const bool branch_taken_0x1f9460 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9464u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f9460) {
            ctx->pc = 0x1F9510u;
            goto label_1f9510;
        }
    }
    ctx->pc = 0x1F9468u;
label_1f9468:
    // 0x1f9468: 0x10620021
label_1f946c:
    if (ctx->pc == 0x1F946Cu) {
        ctx->pc = 0x1F946Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F9470u;
        goto label_1f9470;
    }
    ctx->pc = 0x1F9468u;
    {
        const bool branch_taken_0x1f9468 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F946Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f9468) {
            ctx->pc = 0x1F94F0u;
            goto label_1f94f0;
        }
    }
    ctx->pc = 0x1F9470u;
label_1f9470:
    // 0x1f9470: 0x10620017
label_1f9474:
    if (ctx->pc == 0x1F9474u) {
        ctx->pc = 0x1F9474u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9478u;
        goto label_1f9478;
    }
    ctx->pc = 0x1F9470u;
    {
        const bool branch_taken_0x1f9470 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9474u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f9470) {
            ctx->pc = 0x1F94D0u;
            goto label_1f94d0;
        }
    }
    ctx->pc = 0x1F9478u;
label_1f9478:
    // 0x1f9478: 0x1062000d
label_1f947c:
    if (ctx->pc == 0x1F947Cu) {
        ctx->pc = 0x1F9480u;
        goto label_1f9480;
    }
    ctx->pc = 0x1F9478u;
    {
        const bool branch_taken_0x1f9478 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f9478) {
            ctx->pc = 0x1F94B0u;
            goto label_1f94b0;
        }
    }
    ctx->pc = 0x1F9480u;
label_1f9480:
    // 0x1f9480: 0x10600003
label_1f9484:
    if (ctx->pc == 0x1F9484u) {
        ctx->pc = 0x1F9488u;
        goto label_1f9488;
    }
    ctx->pc = 0x1F9480u;
    {
        const bool branch_taken_0x1f9480 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9480) {
            ctx->pc = 0x1F9490u;
            goto label_1f9490;
        }
    }
    ctx->pc = 0x1F9488u;
label_1f9488:
    // 0x1f9488: 0x10000029
label_1f948c:
    if (ctx->pc == 0x1F948Cu) {
        ctx->pc = 0x1F948Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9490u;
        goto label_1f9490;
    }
    ctx->pc = 0x1F9488u;
    {
        const bool branch_taken_0x1f9488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F948Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1f9488) {
            ctx->pc = 0x1F9530u;
            goto label_1f9530;
        }
    }
    ctx->pc = 0x1F9490u;
label_1f9490:
    // 0x1f9490: 0xc06c09f
label_1f9494:
    if (ctx->pc == 0x1F9494u) {
        ctx->pc = 0x1F9494u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9498u;
        goto label_1f9498;
    }
    ctx->pc = 0x1F9490u;
    SET_GPR_U32(ctx, 31, 0x1F9498u);
    ctx->pc = 0x1F9494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9498u; }
        else if (ctx->pc != 0x1F9498u) { ctx->pc = 0x1F9498u; }
    }
    if (ctx->pc != 0x1F9498u) { return; }
    ctx->pc = 0x1F9498u;
label_1f9498:
    // 0x1f9498: 0xc06c0fb
label_1f949c:
    if (ctx->pc == 0x1F949Cu) {
        ctx->pc = 0x1F949Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F94A0u;
        goto label_1f94a0;
    }
    ctx->pc = 0x1F9498u;
    SET_GPR_U32(ctx, 31, 0x1F94A0u);
    ctx->pc = 0x1F949Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94A0u; }
        else if (ctx->pc != 0x1F94A0u) { ctx->pc = 0x1F94A0u; }
    }
    if (ctx->pc != 0x1F94A0u) { return; }
    ctx->pc = 0x1F94A0u;
label_1f94a0:
    // 0x1f94a0: 0xc06c157
label_1f94a4:
    if (ctx->pc == 0x1F94A4u) {
        ctx->pc = 0x1F94A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F94A8u;
        goto label_1f94a8;
    }
    ctx->pc = 0x1F94A0u;
    SET_GPR_U32(ctx, 31, 0x1F94A8u);
    ctx->pc = 0x1F94A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94A8u; }
        else if (ctx->pc != 0x1F94A8u) { ctx->pc = 0x1F94A8u; }
    }
    if (ctx->pc != 0x1F94A8u) { return; }
    ctx->pc = 0x1F94A8u;
label_1f94a8:
    // 0x1f94a8: 0x10000028
label_1f94ac:
    if (ctx->pc == 0x1F94ACu) {
        ctx->pc = 0x1F94ACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F94B0u;
        goto label_1f94b0;
    }
    ctx->pc = 0x1F94A8u;
    {
        const bool branch_taken_0x1f94a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F94ACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1f94a8) {
            ctx->pc = 0x1F954Cu;
            goto label_1f954c;
        }
    }
    ctx->pc = 0x1F94B0u;
label_1f94b0:
    // 0x1f94b0: 0xc06c09f
label_1f94b4:
    if (ctx->pc == 0x1F94B4u) {
        ctx->pc = 0x1F94B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F94B8u;
        goto label_1f94b8;
    }
    ctx->pc = 0x1F94B0u;
    SET_GPR_U32(ctx, 31, 0x1F94B8u);
    ctx->pc = 0x1F94B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94B8u; }
        else if (ctx->pc != 0x1F94B8u) { ctx->pc = 0x1F94B8u; }
    }
    if (ctx->pc != 0x1F94B8u) { return; }
    ctx->pc = 0x1F94B8u;
label_1f94b8:
    // 0x1f94b8: 0xc06c157
label_1f94bc:
    if (ctx->pc == 0x1F94BCu) {
        ctx->pc = 0x1F94BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F94C0u;
        goto label_1f94c0;
    }
    ctx->pc = 0x1F94B8u;
    SET_GPR_U32(ctx, 31, 0x1F94C0u);
    ctx->pc = 0x1F94BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94C0u; }
        else if (ctx->pc != 0x1F94C0u) { ctx->pc = 0x1F94C0u; }
    }
    if (ctx->pc != 0x1F94C0u) { return; }
    ctx->pc = 0x1F94C0u;
label_1f94c0:
    // 0x1f94c0: 0xc06c0fb
label_1f94c4:
    if (ctx->pc == 0x1F94C4u) {
        ctx->pc = 0x1F94C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F94C8u;
        goto label_1f94c8;
    }
    ctx->pc = 0x1F94C0u;
    SET_GPR_U32(ctx, 31, 0x1F94C8u);
    ctx->pc = 0x1F94C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94C8u; }
        else if (ctx->pc != 0x1F94C8u) { ctx->pc = 0x1F94C8u; }
    }
    if (ctx->pc != 0x1F94C8u) { return; }
    ctx->pc = 0x1F94C8u;
label_1f94c8:
    // 0x1f94c8: 0x1000001f
label_1f94cc:
    if (ctx->pc == 0x1F94CCu) {
        ctx->pc = 0x1F94D0u;
        goto label_1f94d0;
    }
    ctx->pc = 0x1F94C8u;
    {
        const bool branch_taken_0x1f94c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f94c8) {
            ctx->pc = 0x1F9548u;
            goto label_1f9548;
        }
    }
    ctx->pc = 0x1F94D0u;
label_1f94d0:
    // 0x1f94d0: 0xc06c0fb
label_1f94d4:
    if (ctx->pc == 0x1F94D4u) {
        ctx->pc = 0x1F94D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F94D8u;
        goto label_1f94d8;
    }
    ctx->pc = 0x1F94D0u;
    SET_GPR_U32(ctx, 31, 0x1F94D8u);
    ctx->pc = 0x1F94D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94D8u; }
        else if (ctx->pc != 0x1F94D8u) { ctx->pc = 0x1F94D8u; }
    }
    if (ctx->pc != 0x1F94D8u) { return; }
    ctx->pc = 0x1F94D8u;
label_1f94d8:
    // 0x1f94d8: 0xc06c09f
label_1f94dc:
    if (ctx->pc == 0x1F94DCu) {
        ctx->pc = 0x1F94DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F94E0u;
        goto label_1f94e0;
    }
    ctx->pc = 0x1F94D8u;
    SET_GPR_U32(ctx, 31, 0x1F94E0u);
    ctx->pc = 0x1F94DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94E0u; }
        else if (ctx->pc != 0x1F94E0u) { ctx->pc = 0x1F94E0u; }
    }
    if (ctx->pc != 0x1F94E0u) { return; }
    ctx->pc = 0x1F94E0u;
label_1f94e0:
    // 0x1f94e0: 0xc06c157
label_1f94e4:
    if (ctx->pc == 0x1F94E4u) {
        ctx->pc = 0x1F94E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F94E8u;
        goto label_1f94e8;
    }
    ctx->pc = 0x1F94E0u;
    SET_GPR_U32(ctx, 31, 0x1F94E8u);
    ctx->pc = 0x1F94E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94E8u; }
        else if (ctx->pc != 0x1F94E8u) { ctx->pc = 0x1F94E8u; }
    }
    if (ctx->pc != 0x1F94E8u) { return; }
    ctx->pc = 0x1F94E8u;
label_1f94e8:
    // 0x1f94e8: 0x10000017
label_1f94ec:
    if (ctx->pc == 0x1F94ECu) {
        ctx->pc = 0x1F94F0u;
        goto label_1f94f0;
    }
    ctx->pc = 0x1F94E8u;
    {
        const bool branch_taken_0x1f94e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f94e8) {
            ctx->pc = 0x1F9548u;
            goto label_1f9548;
        }
    }
    ctx->pc = 0x1F94F0u;
label_1f94f0:
    // 0x1f94f0: 0xc06c0fb
label_1f94f4:
    if (ctx->pc == 0x1F94F4u) {
        ctx->pc = 0x1F94F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F94F8u;
        goto label_1f94f8;
    }
    ctx->pc = 0x1F94F0u;
    SET_GPR_U32(ctx, 31, 0x1F94F8u);
    ctx->pc = 0x1F94F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94F8u; }
        else if (ctx->pc != 0x1F94F8u) { ctx->pc = 0x1F94F8u; }
    }
    if (ctx->pc != 0x1F94F8u) { return; }
    ctx->pc = 0x1F94F8u;
label_1f94f8:
    // 0x1f94f8: 0xc06c157
label_1f94fc:
    if (ctx->pc == 0x1F94FCu) {
        ctx->pc = 0x1F94FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9500u;
        goto label_1f9500;
    }
    ctx->pc = 0x1F94F8u;
    SET_GPR_U32(ctx, 31, 0x1F9500u);
    ctx->pc = 0x1F94FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9500u; }
        else if (ctx->pc != 0x1F9500u) { ctx->pc = 0x1F9500u; }
    }
    if (ctx->pc != 0x1F9500u) { return; }
    ctx->pc = 0x1F9500u;
label_1f9500:
    // 0x1f9500: 0xc06c09f
label_1f9504:
    if (ctx->pc == 0x1F9504u) {
        ctx->pc = 0x1F9504u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9508u;
        goto label_1f9508;
    }
    ctx->pc = 0x1F9500u;
    SET_GPR_U32(ctx, 31, 0x1F9508u);
    ctx->pc = 0x1F9504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9508u; }
        else if (ctx->pc != 0x1F9508u) { ctx->pc = 0x1F9508u; }
    }
    if (ctx->pc != 0x1F9508u) { return; }
    ctx->pc = 0x1F9508u;
label_1f9508:
    // 0x1f9508: 0x1000000f
label_1f950c:
    if (ctx->pc == 0x1F950Cu) {
        ctx->pc = 0x1F9510u;
        goto label_1f9510;
    }
    ctx->pc = 0x1F9508u;
    {
        const bool branch_taken_0x1f9508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9508) {
            ctx->pc = 0x1F9548u;
            goto label_1f9548;
        }
    }
    ctx->pc = 0x1F9510u;
label_1f9510:
    // 0x1f9510: 0xc06c157
label_1f9514:
    if (ctx->pc == 0x1F9514u) {
        ctx->pc = 0x1F9514u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9518u;
        goto label_1f9518;
    }
    ctx->pc = 0x1F9510u;
    SET_GPR_U32(ctx, 31, 0x1F9518u);
    ctx->pc = 0x1F9514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9518u; }
        else if (ctx->pc != 0x1F9518u) { ctx->pc = 0x1F9518u; }
    }
    if (ctx->pc != 0x1F9518u) { return; }
    ctx->pc = 0x1F9518u;
label_1f9518:
    // 0x1f9518: 0xc06c09f
label_1f951c:
    if (ctx->pc == 0x1F951Cu) {
        ctx->pc = 0x1F951Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9520u;
        goto label_1f9520;
    }
    ctx->pc = 0x1F9518u;
    SET_GPR_U32(ctx, 31, 0x1F9520u);
    ctx->pc = 0x1F951Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9520u; }
        else if (ctx->pc != 0x1F9520u) { ctx->pc = 0x1F9520u; }
    }
    if (ctx->pc != 0x1F9520u) { return; }
    ctx->pc = 0x1F9520u;
label_1f9520:
    // 0x1f9520: 0xc06c0fb
label_1f9524:
    if (ctx->pc == 0x1F9524u) {
        ctx->pc = 0x1F9524u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9528u;
        goto label_1f9528;
    }
    ctx->pc = 0x1F9520u;
    SET_GPR_U32(ctx, 31, 0x1F9528u);
    ctx->pc = 0x1F9524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9528u; }
        else if (ctx->pc != 0x1F9528u) { ctx->pc = 0x1F9528u; }
    }
    if (ctx->pc != 0x1F9528u) { return; }
    ctx->pc = 0x1F9528u;
label_1f9528:
    // 0x1f9528: 0x10000007
label_1f952c:
    if (ctx->pc == 0x1F952Cu) {
        ctx->pc = 0x1F9530u;
        goto label_1f9530;
    }
    ctx->pc = 0x1F9528u;
    {
        const bool branch_taken_0x1f9528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9528) {
            ctx->pc = 0x1F9548u;
            goto label_1f9548;
        }
    }
    ctx->pc = 0x1F9530u;
label_1f9530:
    // 0x1f9530: 0xc06c157
label_1f9534:
    if (ctx->pc == 0x1F9534u) {
        ctx->pc = 0x1F9538u;
        goto label_1f9538;
    }
    ctx->pc = 0x1F9530u;
    SET_GPR_U32(ctx, 31, 0x1F9538u);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9538u; }
        else if (ctx->pc != 0x1F9538u) { ctx->pc = 0x1F9538u; }
    }
    if (ctx->pc != 0x1F9538u) { return; }
    ctx->pc = 0x1F9538u;
label_1f9538:
    // 0x1f9538: 0xc06c0fb
label_1f953c:
    if (ctx->pc == 0x1F953Cu) {
        ctx->pc = 0x1F953Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9540u;
        goto label_1f9540;
    }
    ctx->pc = 0x1F9538u;
    SET_GPR_U32(ctx, 31, 0x1F9540u);
    ctx->pc = 0x1F953Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9540u; }
        else if (ctx->pc != 0x1F9540u) { ctx->pc = 0x1F9540u; }
    }
    if (ctx->pc != 0x1F9540u) { return; }
    ctx->pc = 0x1F9540u;
label_1f9540:
    // 0x1f9540: 0xc06c09f
label_1f9544:
    if (ctx->pc == 0x1F9544u) {
        ctx->pc = 0x1F9544u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9548u;
        goto label_1f9548;
    }
    ctx->pc = 0x1F9540u;
    SET_GPR_U32(ctx, 31, 0x1F9548u);
    ctx->pc = 0x1F9544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9548u; }
        else if (ctx->pc != 0x1F9548u) { ctx->pc = 0x1F9548u; }
    }
    if (ctx->pc != 0x1F9548u) { return; }
    ctx->pc = 0x1F9548u;
label_1f9548:
    // 0x1f9548: 0xc62c1ca0
    ctx->pc = 0x1f9548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f954c:
    // 0x1f954c: 0x46006346
    ctx->pc = 0x1f954cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9550:
    // 0x1f9550: 0xc06c1b3
label_1f9554:
    if (ctx->pc == 0x1F9554u) {
        ctx->pc = 0x1F9554u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9558u;
        goto label_1f9558;
    }
    ctx->pc = 0x1F9550u;
    SET_GPR_U32(ctx, 31, 0x1F9558u);
    ctx->pc = 0x1F9554u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9558u; }
        else if (ctx->pc != 0x1F9558u) { ctx->pc = 0x1F9558u; }
    }
    if (ctx->pc != 0x1F9558u) { return; }
    ctx->pc = 0x1F9558u;
label_1f9558:
    // 0x1f9558: 0xc6200058
    ctx->pc = 0x1f9558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f955c:
    // 0x1f955c: 0x27a400a0
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
label_1f9560:
    // 0x1f9560: 0x27a500b0
    ctx->pc = 0x1f9560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
label_1f9564:
    // 0x1f9564: 0xe7a000a0
    ctx->pc = 0x1f9564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f9568:
    // 0x1f9568: 0xafa000a4
    ctx->pc = 0x1f9568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1f956c:
    // 0x1f956c: 0xc6200060
    ctx->pc = 0x1f956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9570:
    // 0x1f9570: 0xc06bf00
label_1f9574:
    if (ctx->pc == 0x1F9574u) {
        ctx->pc = 0x1F9574u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x1F9578u;
        goto label_1f9578;
    }
    ctx->pc = 0x1F9570u;
    SET_GPR_U32(ctx, 31, 0x1F9578u);
    ctx->pc = 0x1F9574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9578u; }
        else if (ctx->pc != 0x1F9578u) { ctx->pc = 0x1F9578u; }
    }
    if (ctx->pc != 0x1F9578u) { return; }
    ctx->pc = 0x1F9578u;
label_1f9578:
    // 0x1f9578: 0xc7a000b0
    ctx->pc = 0x1f9578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f957c:
    // 0x1f957c: 0xe6000000
    ctx->pc = 0x1f957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f9580:
    // 0x1f9580: 0xc7a000b8
    ctx->pc = 0x1f9580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9584:
    // 0x1f9584: 0xe6000008
    ctx->pc = 0x1f9584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1f9588:
    // 0x1f9588: 0x4bff6b7e
    ctx->pc = 0x1f9588u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f958c:
    // 0x1f958c: 0x4bfe6b7e
    ctx->pc = 0x1f958cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9590:
    // 0x1f9590: 0x4bfd6b7e
    ctx->pc = 0x1f9590u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f9594:
    // 0x1f9594: 0x4bfc6b7e
    ctx->pc = 0x1f9594u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1f9598:
    // 0x1f9598: 0x8622002e
    ctx->pc = 0x1f9598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1f959c:
    // 0x1f959c: 0x24420001
    ctx->pc = 0x1f959cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f95a0:
    // 0x1f95a0: 0x21c3c
    ctx->pc = 0x1f95a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1f95a4:
    // 0x1f95a4: 0xa622002e
    ctx->pc = 0x1f95a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
label_1f95a8:
    // 0x1f95a8: 0x86220032
    ctx->pc = 0x1f95a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1f95ac:
    // 0x1f95ac: 0x31c3f
    ctx->pc = 0x1f95acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1f95b0:
    // 0x1f95b0: 0x14620036
label_1f95b4:
    if (ctx->pc == 0x1F95B4u) {
        ctx->pc = 0x1F95B8u;
        goto label_1f95b8;
    }
    ctx->pc = 0x1F95B0u;
    {
        const bool branch_taken_0x1f95b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f95b0) {
            ctx->pc = 0x1F968Cu;
            goto label_1f968c;
        }
    }
    ctx->pc = 0x1F95B8u;
label_1f95b8:
    // 0x1f95b8: 0x8223003a
    ctx->pc = 0x1f95b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_1f95bc:
    // 0x1f95bc: 0x2402fff6
    ctx->pc = 0x1f95bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967286));
label_1f95c0:
    // 0x1f95c0: 0x621024
    ctx->pc = 0x1f95c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f95c4:
    // 0x1f95c4: 0xa222003a
    ctx->pc = 0x1f95c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
label_1f95c8:
    // 0x1f95c8: 0xc6200014
    ctx->pc = 0x1f95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f95cc:
    // 0x1f95cc: 0xe620000c
    ctx->pc = 0x1f95ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f95d0:
    // 0x1f95d0: 0xc6200014
    ctx->pc = 0x1f95d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f95d4:
    // 0x1f95d4: 0x46000024
    ctx->pc = 0x1f95d4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1f95d8:
    // 0x1f95d8: 0x44030000
    ctx->pc = 0x1f95d8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_1f95dc:
    // 0x1f95dc: 0x0
    ctx->pc = 0x1f95dcu;
    // NOP
label_1f95e0:
    // 0x1f95e0: 0x4610003
label_1f95e4:
    if (ctx->pc == 0x1F95E4u) {
        ctx->pc = 0x1F95E4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1F95E8u;
        goto label_1f95e8;
    }
    ctx->pc = 0x1F95E0u;
    {
        const bool branch_taken_0x1f95e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F95E4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1f95e0) {
            ctx->pc = 0x1F95F0u;
            goto label_1f95f0;
        }
    }
    ctx->pc = 0x1F95E8u;
label_1f95e8:
    // 0x1f95e8: 0x24620001
    ctx->pc = 0x1f95e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1f95ec:
    // 0x1f95ec: 0x21043
    ctx->pc = 0x1f95ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f95f0:
    // 0x1f95f0: 0xae220024
    ctx->pc = 0x1f95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1f95f4:
    // 0x1f95f4: 0x72402628
    ctx->pc = 0x1f95f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1f95f8:
    // 0x1f95f8: 0xc07e924
label_1f95fc:
    if (ctx->pc == 0x1F95FCu) {
        ctx->pc = 0x1F95FCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9600u;
        goto label_1f9600;
    }
    ctx->pc = 0x1F95F8u;
    SET_GPR_U32(ctx, 31, 0x1F9600u);
    ctx->pc = 0x1F95FCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9600u; }
        else if (ctx->pc != 0x1F9600u) { ctx->pc = 0x1F9600u; }
    }
    if (ctx->pc != 0x1F9600u) { return; }
    ctx->pc = 0x1F9600u;
label_1f9600:
    // 0x1f9600: 0x8e430064
    ctx->pc = 0x1f9600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9604:
    // 0x1f9604: 0x3c023e4c
    ctx->pc = 0x1f9604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
label_1f9608:
    // 0x1f9608: 0x3442cccd
    ctx->pc = 0x1f9608u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1f960c:
    // 0x1f960c: 0x44820800
    ctx->pc = 0x1f960cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1f9610:
    // 0x1f9610: 0x3c0101fb
    ctx->pc = 0x1f9610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_1f9614:
    // 0x1f9614: 0xc4600000
    ctx->pc = 0x1f9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9618:
    // 0x1f9618: 0xe6200040
    ctx->pc = 0x1f9618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_1f961c:
    // 0x1f961c: 0xc4600004
    ctx->pc = 0x1f961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9620:
    // 0x1f9620: 0xe6200044
    ctx->pc = 0x1f9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_1f9624:
    // 0x1f9624: 0xc4600008
    ctx->pc = 0x1f9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9628:
    // 0x1f9628: 0xe6200048
    ctx->pc = 0x1f9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1f962c:
    // 0x1f962c: 0x8e420064
    ctx->pc = 0x1f962cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9630:
    // 0x1f9630: 0x8442000c
    ctx->pc = 0x1f9630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1f9634:
    // 0x1f9634: 0xafa20070
    ctx->pc = 0x1f9634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1f9638:
    // 0x1f9638: 0x8e420064
    ctx->pc = 0x1f9638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f963c:
    // 0x1f963c: 0x8442000e
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f9640:
    // 0x1f9640: 0xafa20074
    ctx->pc = 0x1f9640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1f9644:
    // 0x1f9644: 0x8e420064
    ctx->pc = 0x1f9644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9648:
    // 0x1f9648: 0x84420010
    ctx->pc = 0x1f9648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1f964c:
    // 0x1f964c: 0xafa20078
    ctx->pc = 0x1f964cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1f9650:
    // 0x1f9650: 0x8e220004
    ctx->pc = 0x1f9650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f9654:
    // 0x1f9654: 0xc6200014
    ctx->pc = 0x1f9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9658:
    // 0x1f9658: 0x21040
    ctx->pc = 0x1f9658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1f965c:
    // 0x1f965c: 0x410821
    ctx->pc = 0x1f965cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f9660:
    // 0x1f9660: 0x842273e4
    ctx->pc = 0x1f9660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_1f9664:
    // 0x1f9664: 0x44821000
    ctx->pc = 0x1f9664u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1f9668:
    // 0x1f9668: 0x0
    ctx->pc = 0x1f9668u;
    // NOP
label_1f966c:
    // 0x1f966c: 0x468010a0
    ctx->pc = 0x1f966cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
label_1f9670:
    // 0x1f9670: 0x46011041
    ctx->pc = 0x1f9670u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f9674:
    // 0x1f9674: 0x46010034
    ctx->pc = 0x1f9674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9678:
    // 0x1f9678: 0x0
    ctx->pc = 0x1f9678u;
    // NOP
label_1f967c:
    // 0x1f967c: 0x450101d7
label_1f9680:
    if (ctx->pc == 0x1F9680u) {
        ctx->pc = 0x1F9680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9684u;
        goto label_1f9684;
    }
    ctx->pc = 0x1F967Cu;
    {
        const bool branch_taken_0x1f967c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f967c) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F9684u;
label_1f9684:
    // 0x1f9684: 0x100001d5
label_1f9688:
    if (ctx->pc == 0x1F9688u) {
        ctx->pc = 0x1F9688u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F968Cu;
        goto label_1f968c;
    }
    ctx->pc = 0x1F9684u;
    {
        const bool branch_taken_0x1f9684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9688u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f9684) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F968Cu;
label_1f968c:
    // 0x1f968c: 0xc6210058
    ctx->pc = 0x1f968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9690:
    // 0x1f9690: 0xc6200040
    ctx->pc = 0x1f9690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9694:
    // 0x1f9694: 0x46010000
    ctx->pc = 0x1f9694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f9698:
    // 0x1f9698: 0xe6200040
    ctx->pc = 0x1f9698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_1f969c:
    // 0x1f969c: 0xc621005c
    ctx->pc = 0x1f969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f96a0:
    // 0x1f96a0: 0xc6200044
    ctx->pc = 0x1f96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f96a4:
    // 0x1f96a4: 0x46010000
    ctx->pc = 0x1f96a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f96a8:
    // 0x1f96a8: 0xe6200044
    ctx->pc = 0x1f96a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_1f96ac:
    // 0x1f96ac: 0xc6210060
    ctx->pc = 0x1f96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f96b0:
    // 0x1f96b0: 0xc6200048
    ctx->pc = 0x1f96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f96b4:
    // 0x1f96b4: 0x46010000
    ctx->pc = 0x1f96b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f96b8:
    // 0x1f96b8: 0xe6200048
    ctx->pc = 0x1f96b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1f96bc:
    // 0x1f96bc: 0x8e460000
    ctx->pc = 0x1f96bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f96c0:
    // 0x1f96c0: 0x4bede37d
    ctx->pc = 0x1f96c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f96c4:
    // 0x1f96c4: 0x4bedeb7d
    ctx->pc = 0x1f96c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f96c8:
    // 0x1f96c8: 0x4bedf37d
    ctx->pc = 0x1f96c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f96cc:
    // 0x1f96cc: 0x4bedfb7d
    ctx->pc = 0x1f96ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1f96d0:
    // 0x1f96d0: 0x8623002e
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1f96d4:
    // 0x1f96d4: 0x86220032
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1f96d8:
    // 0x1f96d8: 0x24c50010
    ctx->pc = 0x1f96d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
label_1f96dc:
    // 0x1f96dc: 0x72402628
    ctx->pc = 0x1f96dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1f96e0:
    // 0x1f96e0: 0x24c6001c
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28));
label_1f96e4:
    // 0x1f96e4: 0x44830800
    ctx->pc = 0x1f96e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1f96e8:
    // 0x1f96e8: 0x44820000
    ctx->pc = 0x1f96e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f96ec:
    // 0x1f96ec: 0x0
    ctx->pc = 0x1f96ecu;
    // NOP
label_1f96f0:
    // 0x1f96f0: 0x46800860
    ctx->pc = 0x1f96f0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1f96f4:
    // 0x1f96f4: 0x46800020
    ctx->pc = 0x1f96f4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f96f8:
    // 0x1f96f8: 0x46000b03
    ctx->pc = 0x1f96f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1f96fc:
    // 0x1f96fc: 0x0
    ctx->pc = 0x1f96fcu;
    // NOP
label_1f9700:
    // 0x1f9700: 0x0
    ctx->pc = 0x1f9700u;
    // NOP
label_1f9704:
    // 0x1f9704: 0xc07ee9c
label_1f9708:
    if (ctx->pc == 0x1F9708u) {
        ctx->pc = 0x1F970Cu;
        goto label_1f970c;
    }
    ctx->pc = 0x1F9704u;
    SET_GPR_U32(ctx, 31, 0x1F970Cu);
    ctx->pc = 0x1FBA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf_0x1fba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F970Cu; }
        else if (ctx->pc != 0x1F970Cu) { ctx->pc = 0x1F970Cu; }
    }
    if (ctx->pc != 0x1F970Cu) { return; }
    ctx->pc = 0x1F970Cu;
label_1f970c:
    // 0x1f970c: 0x27a40070
    ctx->pc = 0x1f970cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
label_1f9710:
    // 0x1f9710: 0x27a50074
    ctx->pc = 0x1f9710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 116));
label_1f9714:
    // 0x1f9714: 0xc0724f8
label_1f9718:
    if (ctx->pc == 0x1F9718u) {
        ctx->pc = 0x1F9718u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1F971Cu;
        goto label_1f971c;
    }
    ctx->pc = 0x1F9714u;
    SET_GPR_U32(ctx, 31, 0x1F971Cu);
    ctx->pc = 0x1F9718u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F971Cu; }
        else if (ctx->pc != 0x1F971Cu) { ctx->pc = 0x1F971Cu; }
    }
    if (ctx->pc != 0x1F971Cu) { return; }
    ctx->pc = 0x1F971Cu;
label_1f971c:
    // 0x1f971c: 0x4bff6b7e
    ctx->pc = 0x1f971cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f9720:
    // 0x1f9720: 0x4bfe6b7e
    ctx->pc = 0x1f9720u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9724:
    // 0x1f9724: 0x4bfd6b7e
    ctx->pc = 0x1f9724u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f9728:
    // 0x1f9728: 0x100001ac
label_1f972c:
    if (ctx->pc == 0x1F972Cu) {
        ctx->pc = 0x1F972Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1F9730u;
        goto label_1f9730;
    }
    ctx->pc = 0x1F9728u;
    {
        const bool branch_taken_0x1f9728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F972Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1f9728) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F9730u;
label_1f9730:
    // 0x1f9730: 0x8e460000
    ctx->pc = 0x1f9730u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9734:
    // 0x1f9734: 0x4bede37d
    ctx->pc = 0x1f9734u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f9738:
    // 0x1f9738: 0x4bedeb7d
    ctx->pc = 0x1f9738u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f973c:
    // 0x1f973c: 0x4bedf37d
    ctx->pc = 0x1f973cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f9740:
    // 0x1f9740: 0x4bedfb7d
    ctx->pc = 0x1f9740u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1f9744:
    // 0x1f9744: 0x8623002e
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1f9748:
    // 0x1f9748: 0x86220032
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1f974c:
    // 0x1f974c: 0x24c50010
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
label_1f9750:
    // 0x1f9750: 0x72402628
    ctx->pc = 0x1f9750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1f9754:
    // 0x1f9754: 0x24c6001c
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28));
label_1f9758:
    // 0x1f9758: 0x44830800
    ctx->pc = 0x1f9758u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1f975c:
    // 0x1f975c: 0x44820000
    ctx->pc = 0x1f975cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f9760:
    // 0x1f9760: 0x0
    ctx->pc = 0x1f9760u;
    // NOP
label_1f9764:
    // 0x1f9764: 0x46800860
    ctx->pc = 0x1f9764u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1f9768:
    // 0x1f9768: 0x46800020
    ctx->pc = 0x1f9768u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f976c:
    // 0x1f976c: 0x46000b03
    ctx->pc = 0x1f976cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1f9770:
    // 0x1f9770: 0x0
    ctx->pc = 0x1f9770u;
    // NOP
label_1f9774:
    // 0x1f9774: 0x0
    ctx->pc = 0x1f9774u;
    // NOP
label_1f9778:
    // 0x1f9778: 0xc07ee9c
label_1f977c:
    if (ctx->pc == 0x1F977Cu) {
        ctx->pc = 0x1F9780u;
        goto label_1f9780;
    }
    ctx->pc = 0x1F9778u;
    SET_GPR_U32(ctx, 31, 0x1F9780u);
    ctx->pc = 0x1FBA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf_0x1fba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9780u; }
        else if (ctx->pc != 0x1F9780u) { ctx->pc = 0x1F9780u; }
    }
    if (ctx->pc != 0x1F9780u) { return; }
    ctx->pc = 0x1F9780u;
label_1f9780:
    // 0x1f9780: 0x27a40070
    ctx->pc = 0x1f9780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
label_1f9784:
    // 0x1f9784: 0x27a50074
    ctx->pc = 0x1f9784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 116));
label_1f9788:
    // 0x1f9788: 0xc0724f8
label_1f978c:
    if (ctx->pc == 0x1F978Cu) {
        ctx->pc = 0x1F978Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1F9790u;
        goto label_1f9790;
    }
    ctx->pc = 0x1F9788u;
    SET_GPR_U32(ctx, 31, 0x1F9790u);
    ctx->pc = 0x1F978Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9790u; }
        else if (ctx->pc != 0x1F9790u) { ctx->pc = 0x1F9790u; }
    }
    if (ctx->pc != 0x1F9790u) { return; }
    ctx->pc = 0x1F9790u;
label_1f9790:
    // 0x1f9790: 0x4bff6b7e
    ctx->pc = 0x1f9790u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f9794:
    // 0x1f9794: 0x4bfe6b7e
    ctx->pc = 0x1f9794u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9798:
    // 0x1f9798: 0x4bfd6b7e
    ctx->pc = 0x1f9798u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f979c:
    // 0x1f979c: 0x1000018f
label_1f97a0:
    if (ctx->pc == 0x1F97A0u) {
        ctx->pc = 0x1F97A0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1F97A4u;
        goto label_1f97a4;
    }
    ctx->pc = 0x1F979Cu;
    {
        const bool branch_taken_0x1f979c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F97A0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1f979c) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F97A4u;
label_1f97a4:
    // 0x1f97a4: 0xc07ec50
label_1f97a8:
    if (ctx->pc == 0x1F97A8u) {
        ctx->pc = 0x1F97ACu;
        goto label_1f97ac;
    }
    ctx->pc = 0x1F97A4u;
    SET_GPR_U32(ctx, 31, 0x1F97ACu);
    ctx->pc = 0x1FB140u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrameNum__12BodyMgrClassFi_0x1fb140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F97ACu; }
        else if (ctx->pc != 0x1F97ACu) { ctx->pc = 0x1F97ACu; }
    }
    if (ctx->pc != 0x1F97ACu) { return; }
    ctx->pc = 0x1F97ACu;
label_1f97ac:
    // 0x1f97ac: 0x3c0201fb
    ctx->pc = 0x1f97acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)507 << 16));
label_1f97b0:
    // 0x1f97b0: 0x344473e4
    ctx->pc = 0x1f97b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 29668));
label_1f97b4:
    // 0x1f97b4: 0x3c023e4c
    ctx->pc = 0x1f97b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
label_1f97b8:
    // 0x1f97b8: 0x3442cccd
    ctx->pc = 0x1f97b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1f97bc:
    // 0x1f97bc: 0x8e230004
    ctx->pc = 0x1f97bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f97c0:
    // 0x1f97c0: 0x44820800
    ctx->pc = 0x1f97c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1f97c4:
    // 0x1f97c4: 0xc6200014
    ctx->pc = 0x1f97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97c8:
    // 0x1f97c8: 0x31040
    ctx->pc = 0x1f97c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1f97cc:
    // 0x1f97cc: 0x441021
    ctx->pc = 0x1f97ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f97d0:
    // 0x1f97d0: 0x84420000
    ctx->pc = 0x1f97d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f97d4:
    // 0x1f97d4: 0x44821000
    ctx->pc = 0x1f97d4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1f97d8:
    // 0x1f97d8: 0x0
    ctx->pc = 0x1f97d8u;
    // NOP
label_1f97dc:
    // 0x1f97dc: 0x468010a0
    ctx->pc = 0x1f97dcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
label_1f97e0:
    // 0x1f97e0: 0x46011041
    ctx->pc = 0x1f97e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f97e4:
    // 0x1f97e4: 0x46010034
    ctx->pc = 0x1f97e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f97e8:
    // 0x1f97e8: 0x0
    ctx->pc = 0x1f97e8u;
    // NOP
label_1f97ec:
    // 0x1f97ec: 0x45010003
label_1f97f0:
    if (ctx->pc == 0x1F97F0u) {
        ctx->pc = 0x1F97F0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F97F4u;
        goto label_1f97f4;
    }
    ctx->pc = 0x1F97ECu;
    {
        const bool branch_taken_0x1f97ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F97F0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f97ec) {
            ctx->pc = 0x1F97FCu;
            goto label_1f97fc;
        }
    }
    ctx->pc = 0x1F97F4u;
label_1f97f4:
    // 0x1f97f4: 0x24020001
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f97f8:
    // 0x1f97f8: 0xa222003d
    ctx->pc = 0x1f97f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
label_1f97fc:
    // 0x1f97fc: 0xc07e924
label_1f9800:
    if (ctx->pc == 0x1F9800u) {
        ctx->pc = 0x1F9800u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9804u;
        goto label_1f9804;
    }
    ctx->pc = 0x1F97FCu;
    SET_GPR_U32(ctx, 31, 0x1F9804u);
    ctx->pc = 0x1F9800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9804u; }
        else if (ctx->pc != 0x1F9804u) { ctx->pc = 0x1F9804u; }
    }
    if (ctx->pc != 0x1F9804u) { return; }
    ctx->pc = 0x1F9804u;
label_1f9804:
    // 0x1f9804: 0x8e420064
    ctx->pc = 0x1f9804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9808:
    // 0x1f9808: 0xc4400000
    ctx->pc = 0x1f9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f980c:
    // 0x1f980c: 0xe6200040
    ctx->pc = 0x1f980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_1f9810:
    // 0x1f9810: 0xc4400004
    ctx->pc = 0x1f9810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9814:
    // 0x1f9814: 0xe6200044
    ctx->pc = 0x1f9814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_1f9818:
    // 0x1f9818: 0xc4400008
    ctx->pc = 0x1f9818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f981c:
    // 0x1f981c: 0xe6200048
    ctx->pc = 0x1f981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1f9820:
    // 0x1f9820: 0x8e420064
    ctx->pc = 0x1f9820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9824:
    // 0x1f9824: 0x8442000c
    ctx->pc = 0x1f9824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1f9828:
    // 0x1f9828: 0xafa20070
    ctx->pc = 0x1f9828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1f982c:
    // 0x1f982c: 0x8e420064
    ctx->pc = 0x1f982cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f9830:
    // 0x1f9830: 0x8442000e
    ctx->pc = 0x1f9830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_1f9834:
    // 0x1f9834: 0xafa20074
    ctx->pc = 0x1f9834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1f9838:
    // 0x1f9838: 0x8e420064
    ctx->pc = 0x1f9838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f983c:
    // 0x1f983c: 0x84420010
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1f9840:
    // 0x1f9840: 0xafa20078
    ctx->pc = 0x1f9840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1f9844:
    // 0x1f9844: 0x8e231c9c
    ctx->pc = 0x1f9844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7324)));
label_1f9848:
    // 0x1f9848: 0x30620010
    ctx->pc = 0x1f9848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1f984c:
    // 0x1f984c: 0x104000bb
label_1f9850:
    if (ctx->pc == 0x1F9850u) {
        ctx->pc = 0x1F9850u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1F9854u;
        goto label_1f9854;
    }
    ctx->pc = 0x1F984Cu;
    {
        const bool branch_taken_0x1f984c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9850u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1f984c) {
            ctx->pc = 0x1F9B3Cu;
            goto label_1f9b3c;
        }
    }
    ctx->pc = 0x1F9854u;
label_1f9854:
    // 0x1f9854: 0x4bede37d
    ctx->pc = 0x1f9854u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f9858:
    // 0x1f9858: 0x4bedeb7d
    ctx->pc = 0x1f9858u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f985c:
    // 0x1f985c: 0x4bedf37d
    ctx->pc = 0x1f985cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f9860:
    // 0x1f9860: 0x4bedfb7d
    ctx->pc = 0x1f9860u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1f9864:
    // 0x1f9864: 0x8e220004
    ctx->pc = 0x1f9864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f9868:
    // 0x1f9868: 0xc621001c
    ctx->pc = 0x1f9868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f986c:
    // 0x1f986c: 0xc6200014
    ctx->pc = 0x1f986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9870:
    // 0x1f9870: 0x3c0101fb
    ctx->pc = 0x1f9870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_1f9874:
    // 0x1f9874: 0x21040
    ctx->pc = 0x1f9874u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1f9878:
    // 0x1f9878: 0x410821
    ctx->pc = 0x1f9878u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f987c:
    // 0x1f987c: 0x842373e4
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_1f9880:
    // 0x1f9880: 0x46000801
    ctx->pc = 0x1f9880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9884:
    // 0x1f9884: 0x46000045
    ctx->pc = 0x1f9884u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_1f9888:
    // 0x1f9888: 0x4610003
label_1f988c:
    if (ctx->pc == 0x1F988Cu) {
        ctx->pc = 0x1F988Cu;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1F9890u;
        goto label_1f9890;
    }
    ctx->pc = 0x1F9888u;
    {
        const bool branch_taken_0x1f9888 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F988Cu;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1f9888) {
            ctx->pc = 0x1F9898u;
            goto label_1f9898;
        }
    }
    ctx->pc = 0x1F9890u;
label_1f9890:
    // 0x1f9890: 0x24620001
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1f9894:
    // 0x1f9894: 0x2a043
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_1f9898:
    // 0x1f9898: 0x44940000
    ctx->pc = 0x1f9898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
label_1f989c:
    // 0x1f989c: 0x0
    ctx->pc = 0x1f989cu;
    // NOP
label_1f98a0:
    // 0x1f98a0: 0x46800020
    ctx->pc = 0x1f98a0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f98a4:
    // 0x1f98a4: 0x46000836
    ctx->pc = 0x1f98a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f98a8:
    // 0x1f98a8: 0x0
    ctx->pc = 0x1f98a8u;
    // NOP
label_1f98ac:
    // 0x1f98ac: 0x45010043
label_1f98b0:
    if (ctx->pc == 0x1F98B0u) {
        ctx->pc = 0x1F98B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1F98B4u;
        goto label_1f98b4;
    }
    ctx->pc = 0x1F98ACu;
    {
        const bool branch_taken_0x1f98ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F98B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1f98ac) {
            ctx->pc = 0x1F99BCu;
            goto label_1f99bc;
        }
    }
    ctx->pc = 0x1F98B4u;
label_1f98b4:
    // 0x1f98b4: 0x10400002
label_1f98b8:
    if (ctx->pc == 0x1F98B8u) {
        ctx->pc = 0x1F98BCu;
        goto label_1f98bc;
    }
    ctx->pc = 0x1F98B4u;
    {
        const bool branch_taken_0x1f98b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f98b4) {
            ctx->pc = 0x1F98C0u;
            goto label_1f98c0;
        }
    }
    ctx->pc = 0x1F98BCu;
label_1f98bc:
    // 0x1f98bc: 0x26940001
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1f98c0:
    // 0x1f98c0: 0x8e420004
    ctx->pc = 0x1f98c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f98c4:
    // 0x1f98c4: 0x27848d4c
    ctx->pc = 0x1f98c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1f98c8:
    // 0x1f98c8: 0x8445002c
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1f98cc:
    // 0x1f98cc: 0x8c460004
    ctx->pc = 0x1f98ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f98d0:
    // 0x1f98d0: 0xc07f1d8
label_1f98d4:
    if (ctx->pc == 0x1F98D4u) {
        ctx->pc = 0x1F98D4u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F98D8u;
        goto label_1f98d8;
    }
    ctx->pc = 0x1F98D0u;
    SET_GPR_U32(ctx, 31, 0x1F98D8u);
    ctx->pc = 0x1F98D4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98D8u; }
        else if (ctx->pc != 0x1F98D8u) { ctx->pc = 0x1F98D8u; }
    }
    if (ctx->pc != 0x1F98D8u) { return; }
    ctx->pc = 0x1F98D8u;
label_1f98d8:
    // 0x1f98d8: 0x72803e28
    ctx->pc = 0x1f98d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1f98dc:
    // 0x1f98dc: 0x7040a628
    ctx->pc = 0x1f98dcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f98e0:
    // 0x1f98e0: 0x8e420004
    ctx->pc = 0x1f98e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f98e4:
    // 0x1f98e4: 0x8445002c
    ctx->pc = 0x1f98e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1f98e8:
    // 0x1f98e8: 0x8c460004
    ctx->pc = 0x1f98e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f98ec:
    // 0x1f98ec: 0xc07f1d8
label_1f98f0:
    if (ctx->pc == 0x1F98F0u) {
        ctx->pc = 0x1F98F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x1F98F4u;
        goto label_1f98f4;
    }
    ctx->pc = 0x1F98ECu;
    SET_GPR_U32(ctx, 31, 0x1F98F4u);
    ctx->pc = 0x1F98F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98F4u; }
        else if (ctx->pc != 0x1F98F4u) { ctx->pc = 0x1F98F4u; }
    }
    if (ctx->pc != 0x1F98F4u) { return; }
    ctx->pc = 0x1F98F4u;
label_1f98f4:
    // 0x1f98f4: 0xc6210014
    ctx->pc = 0x1f98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f98f8:
    // 0x1f98f8: 0xc620001c
    ctx->pc = 0x1f98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f98fc:
    // 0x1f98fc: 0x46000834
    ctx->pc = 0x1f98fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9900:
    // 0x1f9900: 0x0
    ctx->pc = 0x1f9900u;
    // NOP
label_1f9904:
    // 0x1f9904: 0x45000017
label_1f9908:
    if (ctx->pc == 0x1F9908u) {
        ctx->pc = 0x1F990Cu;
        goto label_1f990c;
    }
    ctx->pc = 0x1F9904u;
    {
        const bool branch_taken_0x1f9904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9904) {
            ctx->pc = 0x1F9964u;
            goto label_1f9964;
        }
    }
    ctx->pc = 0x1F990Cu;
label_1f990c:
    // 0x1f990c: 0xc4420000
    ctx->pc = 0x1f990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9910:
    // 0x1f9910: 0xc620004c
    ctx->pc = 0x1f9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9914:
    // 0x1f9914: 0xc6210040
    ctx->pc = 0x1f9914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9918:
    // 0x1f9918: 0xc4470004
    ctx->pc = 0x1f9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f991c:
    // 0x1f991c: 0xc6260050
    ctx->pc = 0x1f991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9920:
    // 0x1f9920: 0xc4430008
    ctx->pc = 0x1f9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9924:
    // 0x1f9924: 0xc6250044
    ctx->pc = 0x1f9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9928:
    // 0x1f9928: 0x46001081
    ctx->pc = 0x1f9928u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1f992c:
    // 0x1f992c: 0xc6880000
    ctx->pc = 0x1f992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f9930:
    // 0x1f9930: 0xc6840004
    ctx->pc = 0x1f9930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9934:
    // 0x1f9934: 0x46020a40
    ctx->pc = 0x1f9934u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f9938:
    // 0x1f9938: 0xc6800008
    ctx->pc = 0x1f9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f993c:
    // 0x1f993c: 0xc6220054
    ctx->pc = 0x1f993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9940:
    // 0x1f9940: 0x46063981
    ctx->pc = 0x1f9940u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f9944:
    // 0x1f9944: 0xc6210048
    ctx->pc = 0x1f9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9948:
    // 0x1f9948: 0x46062940
    ctx->pc = 0x1f9948u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1f994c:
    // 0x1f994c: 0x46021881
    ctx->pc = 0x1f994cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f9950:
    // 0x1f9950: 0x46020840
    ctx->pc = 0x1f9950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f9954:
    // 0x1f9954: 0x46084d01
    ctx->pc = 0x1f9954u;
    ctx->f[20] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_1f9958:
    // 0x1f9958: 0x46042d41
    ctx->pc = 0x1f9958u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f995c:
    // 0x1f995c: 0x10000020
label_1f9960:
    if (ctx->pc == 0x1F9960u) {
        ctx->pc = 0x1F9960u;
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1F9964u;
        goto label_1f9964;
    }
    ctx->pc = 0x1F995Cu;
    {
        const bool branch_taken_0x1f995c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9960u;
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1f995c) {
            ctx->pc = 0x1F99E0u;
            goto label_1f99e0;
        }
    }
    ctx->pc = 0x1F9964u;
label_1f9964:
    // 0x1f9964: 0xc6820000
    ctx->pc = 0x1f9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9968:
    // 0x1f9968: 0xc620004c
    ctx->pc = 0x1f9968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f996c:
    // 0x1f996c: 0xc6210040
    ctx->pc = 0x1f996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9970:
    // 0x1f9970: 0xc6870004
    ctx->pc = 0x1f9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f9974:
    // 0x1f9974: 0xc6260050
    ctx->pc = 0x1f9974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9978:
    // 0x1f9978: 0xc6830008
    ctx->pc = 0x1f9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f997c:
    // 0x1f997c: 0xc6250044
    ctx->pc = 0x1f997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9980:
    // 0x1f9980: 0x46001081
    ctx->pc = 0x1f9980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1f9984:
    // 0x1f9984: 0xc4480000
    ctx->pc = 0x1f9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f9988:
    // 0x1f9988: 0xc4440004
    ctx->pc = 0x1f9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f998c:
    // 0x1f998c: 0x46020a40
    ctx->pc = 0x1f998cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f9990:
    // 0x1f9990: 0xc4400008
    ctx->pc = 0x1f9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9994:
    // 0x1f9994: 0xc6220054
    ctx->pc = 0x1f9994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9998:
    // 0x1f9998: 0x46063981
    ctx->pc = 0x1f9998u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f999c:
    // 0x1f999c: 0xc6210048
    ctx->pc = 0x1f999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99a0:
    // 0x1f99a0: 0x46062940
    ctx->pc = 0x1f99a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1f99a4:
    // 0x1f99a4: 0x46021881
    ctx->pc = 0x1f99a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f99a8:
    // 0x1f99a8: 0x46020840
    ctx->pc = 0x1f99a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f99ac:
    // 0x1f99ac: 0x46084d01
    ctx->pc = 0x1f99acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_1f99b0:
    // 0x1f99b0: 0x46042d41
    ctx->pc = 0x1f99b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f99b4:
    // 0x1f99b4: 0x1000000a
label_1f99b8:
    if (ctx->pc == 0x1F99B8u) {
        ctx->pc = 0x1F99B8u;
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1F99BCu;
        goto label_1f99bc;
    }
    ctx->pc = 0x1F99B4u;
    {
        const bool branch_taken_0x1f99b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F99B8u;
        ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1f99b4) {
            ctx->pc = 0x1F99E0u;
            goto label_1f99e0;
        }
    }
    ctx->pc = 0x1F99BCu;
label_1f99bc:
    // 0x1f99bc: 0xc6250040
    ctx->pc = 0x1f99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f99c0:
    // 0x1f99c0: 0xc624004c
    ctx->pc = 0x1f99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f99c4:
    // 0x1f99c4: 0xc6230044
    ctx->pc = 0x1f99c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f99c8:
    // 0x1f99c8: 0xc6220050
    ctx->pc = 0x1f99c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f99cc:
    // 0x1f99cc: 0xc6210048
    ctx->pc = 0x1f99ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99d0:
    // 0x1f99d0: 0xc6200054
    ctx->pc = 0x1f99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f99d4:
    // 0x1f99d4: 0x46042d01
    ctx->pc = 0x1f99d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f99d8:
    // 0x1f99d8: 0x46021d41
    ctx->pc = 0x1f99d8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f99dc:
    // 0x1f99dc: 0x46000d81
    ctx->pc = 0x1f99dcu;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f99e0:
    // 0x1f99e0: 0xc06c20d
label_1f99e4:
    if (ctx->pc == 0x1F99E4u) {
        ctx->pc = 0x1F99E8u;
        goto label_1f99e8;
    }
    ctx->pc = 0x1F99E0u;
    SET_GPR_U32(ctx, 31, 0x1F99E8u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99E8u; }
        else if (ctx->pc != 0x1F99E8u) { ctx->pc = 0x1F99E8u; }
    }
    if (ctx->pc != 0x1F99E8u) { return; }
    ctx->pc = 0x1F99E8u;
label_1f99e8:
    // 0x1f99e8: 0xc60d0004
    ctx->pc = 0x1f99e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f99ec:
    // 0x1f99ec: 0xc60e0008
    ctx->pc = 0x1f99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f99f0:
    // 0x1f99f0: 0xc06c202
label_1f99f4:
    if (ctx->pc == 0x1F99F4u) {
        ctx->pc = 0x1F99F4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F99F8u;
        goto label_1f99f8;
    }
    ctx->pc = 0x1F99F0u;
    SET_GPR_U32(ctx, 31, 0x1F99F8u);
    ctx->pc = 0x1F99F4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99F8u; }
        else if (ctx->pc != 0x1F99F8u) { ctx->pc = 0x1F99F8u; }
    }
    if (ctx->pc != 0x1F99F8u) { return; }
    ctx->pc = 0x1F99F8u;
label_1f99f8:
    // 0x1f99f8: 0x8e231c98
    ctx->pc = 0x1f99f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
label_1f99fc:
    // 0x1f99fc: 0x24020004
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f9a00:
    // 0x1f9a00: 0x1062002b
label_1f9a04:
    if (ctx->pc == 0x1F9A04u) {
        ctx->pc = 0x1F9A04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F9A08u;
        goto label_1f9a08;
    }
    ctx->pc = 0x1F9A00u;
    {
        const bool branch_taken_0x1f9a00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9A04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f9a00) {
            ctx->pc = 0x1F9AB0u;
            goto label_1f9ab0;
        }
    }
    ctx->pc = 0x1F9A08u;
label_1f9a08:
    // 0x1f9a08: 0x10620021
label_1f9a0c:
    if (ctx->pc == 0x1F9A0Cu) {
        ctx->pc = 0x1F9A0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F9A10u;
        goto label_1f9a10;
    }
    ctx->pc = 0x1F9A08u;
    {
        const bool branch_taken_0x1f9a08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9A0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f9a08) {
            ctx->pc = 0x1F9A90u;
            goto label_1f9a90;
        }
    }
    ctx->pc = 0x1F9A10u;
label_1f9a10:
    // 0x1f9a10: 0x10620017
label_1f9a14:
    if (ctx->pc == 0x1F9A14u) {
        ctx->pc = 0x1F9A14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9A18u;
        goto label_1f9a18;
    }
    ctx->pc = 0x1F9A10u;
    {
        const bool branch_taken_0x1f9a10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9A14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f9a10) {
            ctx->pc = 0x1F9A70u;
            goto label_1f9a70;
        }
    }
    ctx->pc = 0x1F9A18u;
label_1f9a18:
    // 0x1f9a18: 0x1062000d
label_1f9a1c:
    if (ctx->pc == 0x1F9A1Cu) {
        ctx->pc = 0x1F9A20u;
        goto label_1f9a20;
    }
    ctx->pc = 0x1F9A18u;
    {
        const bool branch_taken_0x1f9a18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f9a18) {
            ctx->pc = 0x1F9A50u;
            goto label_1f9a50;
        }
    }
    ctx->pc = 0x1F9A20u;
label_1f9a20:
    // 0x1f9a20: 0x10600003
label_1f9a24:
    if (ctx->pc == 0x1F9A24u) {
        ctx->pc = 0x1F9A28u;
        goto label_1f9a28;
    }
    ctx->pc = 0x1F9A20u;
    {
        const bool branch_taken_0x1f9a20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9a20) {
            ctx->pc = 0x1F9A30u;
            goto label_1f9a30;
        }
    }
    ctx->pc = 0x1F9A28u;
label_1f9a28:
    // 0x1f9a28: 0x10000029
label_1f9a2c:
    if (ctx->pc == 0x1F9A2Cu) {
        ctx->pc = 0x1F9A2Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9A30u;
        goto label_1f9a30;
    }
    ctx->pc = 0x1F9A28u;
    {
        const bool branch_taken_0x1f9a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9A2Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1f9a28) {
            ctx->pc = 0x1F9AD0u;
            goto label_1f9ad0;
        }
    }
    ctx->pc = 0x1F9A30u;
label_1f9a30:
    // 0x1f9a30: 0xc06c09f
label_1f9a34:
    if (ctx->pc == 0x1F9A34u) {
        ctx->pc = 0x1F9A34u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9A38u;
        goto label_1f9a38;
    }
    ctx->pc = 0x1F9A30u;
    SET_GPR_U32(ctx, 31, 0x1F9A38u);
    ctx->pc = 0x1F9A34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A38u; }
        else if (ctx->pc != 0x1F9A38u) { ctx->pc = 0x1F9A38u; }
    }
    if (ctx->pc != 0x1F9A38u) { return; }
    ctx->pc = 0x1F9A38u;
label_1f9a38:
    // 0x1f9a38: 0xc06c0fb
label_1f9a3c:
    if (ctx->pc == 0x1F9A3Cu) {
        ctx->pc = 0x1F9A3Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9A40u;
        goto label_1f9a40;
    }
    ctx->pc = 0x1F9A38u;
    SET_GPR_U32(ctx, 31, 0x1F9A40u);
    ctx->pc = 0x1F9A3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A40u; }
        else if (ctx->pc != 0x1F9A40u) { ctx->pc = 0x1F9A40u; }
    }
    if (ctx->pc != 0x1F9A40u) { return; }
    ctx->pc = 0x1F9A40u;
label_1f9a40:
    // 0x1f9a40: 0xc06c157
label_1f9a44:
    if (ctx->pc == 0x1F9A44u) {
        ctx->pc = 0x1F9A44u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9A48u;
        goto label_1f9a48;
    }
    ctx->pc = 0x1F9A40u;
    SET_GPR_U32(ctx, 31, 0x1F9A48u);
    ctx->pc = 0x1F9A44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A48u; }
        else if (ctx->pc != 0x1F9A48u) { ctx->pc = 0x1F9A48u; }
    }
    if (ctx->pc != 0x1F9A48u) { return; }
    ctx->pc = 0x1F9A48u;
label_1f9a48:
    // 0x1f9a48: 0x10000028
label_1f9a4c:
    if (ctx->pc == 0x1F9A4Cu) {
        ctx->pc = 0x1F9A4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9A50u;
        goto label_1f9a50;
    }
    ctx->pc = 0x1F9A48u;
    {
        const bool branch_taken_0x1f9a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9A4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1f9a48) {
            ctx->pc = 0x1F9AECu;
            goto label_1f9aec;
        }
    }
    ctx->pc = 0x1F9A50u;
label_1f9a50:
    // 0x1f9a50: 0xc06c09f
label_1f9a54:
    if (ctx->pc == 0x1F9A54u) {
        ctx->pc = 0x1F9A54u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9A58u;
        goto label_1f9a58;
    }
    ctx->pc = 0x1F9A50u;
    SET_GPR_U32(ctx, 31, 0x1F9A58u);
    ctx->pc = 0x1F9A54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A58u; }
        else if (ctx->pc != 0x1F9A58u) { ctx->pc = 0x1F9A58u; }
    }
    if (ctx->pc != 0x1F9A58u) { return; }
    ctx->pc = 0x1F9A58u;
label_1f9a58:
    // 0x1f9a58: 0xc06c157
label_1f9a5c:
    if (ctx->pc == 0x1F9A5Cu) {
        ctx->pc = 0x1F9A5Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9A60u;
        goto label_1f9a60;
    }
    ctx->pc = 0x1F9A58u;
    SET_GPR_U32(ctx, 31, 0x1F9A60u);
    ctx->pc = 0x1F9A5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A60u; }
        else if (ctx->pc != 0x1F9A60u) { ctx->pc = 0x1F9A60u; }
    }
    if (ctx->pc != 0x1F9A60u) { return; }
    ctx->pc = 0x1F9A60u;
label_1f9a60:
    // 0x1f9a60: 0xc06c0fb
label_1f9a64:
    if (ctx->pc == 0x1F9A64u) {
        ctx->pc = 0x1F9A64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9A68u;
        goto label_1f9a68;
    }
    ctx->pc = 0x1F9A60u;
    SET_GPR_U32(ctx, 31, 0x1F9A68u);
    ctx->pc = 0x1F9A64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A68u; }
        else if (ctx->pc != 0x1F9A68u) { ctx->pc = 0x1F9A68u; }
    }
    if (ctx->pc != 0x1F9A68u) { return; }
    ctx->pc = 0x1F9A68u;
label_1f9a68:
    // 0x1f9a68: 0x1000001f
label_1f9a6c:
    if (ctx->pc == 0x1F9A6Cu) {
        ctx->pc = 0x1F9A70u;
        goto label_1f9a70;
    }
    ctx->pc = 0x1F9A68u;
    {
        const bool branch_taken_0x1f9a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9a68) {
            ctx->pc = 0x1F9AE8u;
            goto label_1f9ae8;
        }
    }
    ctx->pc = 0x1F9A70u;
label_1f9a70:
    // 0x1f9a70: 0xc06c0fb
label_1f9a74:
    if (ctx->pc == 0x1F9A74u) {
        ctx->pc = 0x1F9A74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9A78u;
        goto label_1f9a78;
    }
    ctx->pc = 0x1F9A70u;
    SET_GPR_U32(ctx, 31, 0x1F9A78u);
    ctx->pc = 0x1F9A74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A78u; }
        else if (ctx->pc != 0x1F9A78u) { ctx->pc = 0x1F9A78u; }
    }
    if (ctx->pc != 0x1F9A78u) { return; }
    ctx->pc = 0x1F9A78u;
label_1f9a78:
    // 0x1f9a78: 0xc06c09f
label_1f9a7c:
    if (ctx->pc == 0x1F9A7Cu) {
        ctx->pc = 0x1F9A7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9A80u;
        goto label_1f9a80;
    }
    ctx->pc = 0x1F9A78u;
    SET_GPR_U32(ctx, 31, 0x1F9A80u);
    ctx->pc = 0x1F9A7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A80u; }
        else if (ctx->pc != 0x1F9A80u) { ctx->pc = 0x1F9A80u; }
    }
    if (ctx->pc != 0x1F9A80u) { return; }
    ctx->pc = 0x1F9A80u;
label_1f9a80:
    // 0x1f9a80: 0xc06c157
label_1f9a84:
    if (ctx->pc == 0x1F9A84u) {
        ctx->pc = 0x1F9A84u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9A88u;
        goto label_1f9a88;
    }
    ctx->pc = 0x1F9A80u;
    SET_GPR_U32(ctx, 31, 0x1F9A88u);
    ctx->pc = 0x1F9A84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A88u; }
        else if (ctx->pc != 0x1F9A88u) { ctx->pc = 0x1F9A88u; }
    }
    if (ctx->pc != 0x1F9A88u) { return; }
    ctx->pc = 0x1F9A88u;
label_1f9a88:
    // 0x1f9a88: 0x10000017
label_1f9a8c:
    if (ctx->pc == 0x1F9A8Cu) {
        ctx->pc = 0x1F9A90u;
        goto label_1f9a90;
    }
    ctx->pc = 0x1F9A88u;
    {
        const bool branch_taken_0x1f9a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9a88) {
            ctx->pc = 0x1F9AE8u;
            goto label_1f9ae8;
        }
    }
    ctx->pc = 0x1F9A90u;
label_1f9a90:
    // 0x1f9a90: 0xc06c0fb
label_1f9a94:
    if (ctx->pc == 0x1F9A94u) {
        ctx->pc = 0x1F9A94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9A98u;
        goto label_1f9a98;
    }
    ctx->pc = 0x1F9A90u;
    SET_GPR_U32(ctx, 31, 0x1F9A98u);
    ctx->pc = 0x1F9A94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A98u; }
        else if (ctx->pc != 0x1F9A98u) { ctx->pc = 0x1F9A98u; }
    }
    if (ctx->pc != 0x1F9A98u) { return; }
    ctx->pc = 0x1F9A98u;
label_1f9a98:
    // 0x1f9a98: 0xc06c157
label_1f9a9c:
    if (ctx->pc == 0x1F9A9Cu) {
        ctx->pc = 0x1F9A9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9AA0u;
        goto label_1f9aa0;
    }
    ctx->pc = 0x1F9A98u;
    SET_GPR_U32(ctx, 31, 0x1F9AA0u);
    ctx->pc = 0x1F9A9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AA0u; }
        else if (ctx->pc != 0x1F9AA0u) { ctx->pc = 0x1F9AA0u; }
    }
    if (ctx->pc != 0x1F9AA0u) { return; }
    ctx->pc = 0x1F9AA0u;
label_1f9aa0:
    // 0x1f9aa0: 0xc06c09f
label_1f9aa4:
    if (ctx->pc == 0x1F9AA4u) {
        ctx->pc = 0x1F9AA4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9AA8u;
        goto label_1f9aa8;
    }
    ctx->pc = 0x1F9AA0u;
    SET_GPR_U32(ctx, 31, 0x1F9AA8u);
    ctx->pc = 0x1F9AA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AA8u; }
        else if (ctx->pc != 0x1F9AA8u) { ctx->pc = 0x1F9AA8u; }
    }
    if (ctx->pc != 0x1F9AA8u) { return; }
    ctx->pc = 0x1F9AA8u;
label_1f9aa8:
    // 0x1f9aa8: 0x1000000f
label_1f9aac:
    if (ctx->pc == 0x1F9AACu) {
        ctx->pc = 0x1F9AB0u;
        goto label_1f9ab0;
    }
    ctx->pc = 0x1F9AA8u;
    {
        const bool branch_taken_0x1f9aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9aa8) {
            ctx->pc = 0x1F9AE8u;
            goto label_1f9ae8;
        }
    }
    ctx->pc = 0x1F9AB0u;
label_1f9ab0:
    // 0x1f9ab0: 0xc06c157
label_1f9ab4:
    if (ctx->pc == 0x1F9AB4u) {
        ctx->pc = 0x1F9AB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9AB8u;
        goto label_1f9ab8;
    }
    ctx->pc = 0x1F9AB0u;
    SET_GPR_U32(ctx, 31, 0x1F9AB8u);
    ctx->pc = 0x1F9AB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AB8u; }
        else if (ctx->pc != 0x1F9AB8u) { ctx->pc = 0x1F9AB8u; }
    }
    if (ctx->pc != 0x1F9AB8u) { return; }
    ctx->pc = 0x1F9AB8u;
label_1f9ab8:
    // 0x1f9ab8: 0xc06c09f
label_1f9abc:
    if (ctx->pc == 0x1F9ABCu) {
        ctx->pc = 0x1F9ABCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9AC0u;
        goto label_1f9ac0;
    }
    ctx->pc = 0x1F9AB8u;
    SET_GPR_U32(ctx, 31, 0x1F9AC0u);
    ctx->pc = 0x1F9ABCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AC0u; }
        else if (ctx->pc != 0x1F9AC0u) { ctx->pc = 0x1F9AC0u; }
    }
    if (ctx->pc != 0x1F9AC0u) { return; }
    ctx->pc = 0x1F9AC0u;
label_1f9ac0:
    // 0x1f9ac0: 0xc06c0fb
label_1f9ac4:
    if (ctx->pc == 0x1F9AC4u) {
        ctx->pc = 0x1F9AC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9AC8u;
        goto label_1f9ac8;
    }
    ctx->pc = 0x1F9AC0u;
    SET_GPR_U32(ctx, 31, 0x1F9AC8u);
    ctx->pc = 0x1F9AC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AC8u; }
        else if (ctx->pc != 0x1F9AC8u) { ctx->pc = 0x1F9AC8u; }
    }
    if (ctx->pc != 0x1F9AC8u) { return; }
    ctx->pc = 0x1F9AC8u;
label_1f9ac8:
    // 0x1f9ac8: 0x10000007
label_1f9acc:
    if (ctx->pc == 0x1F9ACCu) {
        ctx->pc = 0x1F9AD0u;
        goto label_1f9ad0;
    }
    ctx->pc = 0x1F9AC8u;
    {
        const bool branch_taken_0x1f9ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9ac8) {
            ctx->pc = 0x1F9AE8u;
            goto label_1f9ae8;
        }
    }
    ctx->pc = 0x1F9AD0u;
label_1f9ad0:
    // 0x1f9ad0: 0xc06c157
label_1f9ad4:
    if (ctx->pc == 0x1F9AD4u) {
        ctx->pc = 0x1F9AD8u;
        goto label_1f9ad8;
    }
    ctx->pc = 0x1F9AD0u;
    SET_GPR_U32(ctx, 31, 0x1F9AD8u);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AD8u; }
        else if (ctx->pc != 0x1F9AD8u) { ctx->pc = 0x1F9AD8u; }
    }
    if (ctx->pc != 0x1F9AD8u) { return; }
    ctx->pc = 0x1F9AD8u;
label_1f9ad8:
    // 0x1f9ad8: 0xc06c0fb
label_1f9adc:
    if (ctx->pc == 0x1F9ADCu) {
        ctx->pc = 0x1F9ADCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9AE0u;
        goto label_1f9ae0;
    }
    ctx->pc = 0x1F9AD8u;
    SET_GPR_U32(ctx, 31, 0x1F9AE0u);
    ctx->pc = 0x1F9ADCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AE0u; }
        else if (ctx->pc != 0x1F9AE0u) { ctx->pc = 0x1F9AE0u; }
    }
    if (ctx->pc != 0x1F9AE0u) { return; }
    ctx->pc = 0x1F9AE0u;
label_1f9ae0:
    // 0x1f9ae0: 0xc06c09f
label_1f9ae4:
    if (ctx->pc == 0x1F9AE4u) {
        ctx->pc = 0x1F9AE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9AE8u;
        goto label_1f9ae8;
    }
    ctx->pc = 0x1F9AE0u;
    SET_GPR_U32(ctx, 31, 0x1F9AE8u);
    ctx->pc = 0x1F9AE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AE8u; }
        else if (ctx->pc != 0x1F9AE8u) { ctx->pc = 0x1F9AE8u; }
    }
    if (ctx->pc != 0x1F9AE8u) { return; }
    ctx->pc = 0x1F9AE8u;
label_1f9ae8:
    // 0x1f9ae8: 0xc62c1ca0
    ctx->pc = 0x1f9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f9aec:
    // 0x1f9aec: 0x46006346
    ctx->pc = 0x1f9aecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9af0:
    // 0x1f9af0: 0xc06c1b3
label_1f9af4:
    if (ctx->pc == 0x1F9AF4u) {
        ctx->pc = 0x1F9AF4u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9AF8u;
        goto label_1f9af8;
    }
    ctx->pc = 0x1F9AF0u;
    SET_GPR_U32(ctx, 31, 0x1F9AF8u);
    ctx->pc = 0x1F9AF4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9AF8u; }
        else if (ctx->pc != 0x1F9AF8u) { ctx->pc = 0x1F9AF8u; }
    }
    if (ctx->pc != 0x1F9AF8u) { return; }
    ctx->pc = 0x1F9AF8u;
label_1f9af8:
    // 0x1f9af8: 0xe7b400c0
    ctx->pc = 0x1f9af8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f9afc:
    // 0x1f9afc: 0xe7b500c4
    ctx->pc = 0x1f9afcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f9b00:
    // 0x1f9b00: 0x27a400c0
    ctx->pc = 0x1f9b00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
label_1f9b04:
    // 0x1f9b04: 0x27a500d0
    ctx->pc = 0x1f9b04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
label_1f9b08:
    // 0x1f9b08: 0xc06bf00
label_1f9b0c:
    if (ctx->pc == 0x1F9B0Cu) {
        ctx->pc = 0x1F9B0Cu;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x1F9B10u;
        goto label_1f9b10;
    }
    ctx->pc = 0x1F9B08u;
    SET_GPR_U32(ctx, 31, 0x1F9B10u);
    ctx->pc = 0x1F9B0Cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9B10u; }
        else if (ctx->pc != 0x1F9B10u) { ctx->pc = 0x1F9B10u; }
    }
    if (ctx->pc != 0x1F9B10u) { return; }
    ctx->pc = 0x1F9B10u;
label_1f9b10:
    // 0x1f9b10: 0xc7a000d0
    ctx->pc = 0x1f9b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9b14:
    // 0x1f9b14: 0xe6000000
    ctx->pc = 0x1f9b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f9b18:
    // 0x1f9b18: 0xc7a000d4
    ctx->pc = 0x1f9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9b1c:
    // 0x1f9b1c: 0xe6000004
    ctx->pc = 0x1f9b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1f9b20:
    // 0x1f9b20: 0xc7a000d8
    ctx->pc = 0x1f9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9b24:
    // 0x1f9b24: 0xe6000008
    ctx->pc = 0x1f9b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1f9b28:
    // 0x1f9b28: 0x4bff6b7e
    ctx->pc = 0x1f9b28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f9b2c:
    // 0x1f9b2c: 0x4bfe6b7e
    ctx->pc = 0x1f9b2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9b30:
    // 0x1f9b30: 0x4bfd6b7e
    ctx->pc = 0x1f9b30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f9b34:
    // 0x1f9b34: 0x100000a9
label_1f9b38:
    if (ctx->pc == 0x1F9B38u) {
        ctx->pc = 0x1F9B38u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1F9B3Cu;
        goto label_1f9b3c;
    }
    ctx->pc = 0x1F9B34u;
    {
        const bool branch_taken_0x1f9b34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9B38u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1f9b34) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F9B3Cu;
label_1f9b3c:
    // 0x1f9b3c: 0x104000a7
label_1f9b40:
    if (ctx->pc == 0x1F9B40u) {
        ctx->pc = 0x1F9B44u;
        goto label_1f9b44;
    }
    ctx->pc = 0x1F9B3Cu;
    {
        const bool branch_taken_0x1f9b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9b3c) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F9B44u;
label_1f9b44:
    // 0x1f9b44: 0x4bede37d
    ctx->pc = 0x1f9b44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1f9b48:
    // 0x1f9b48: 0x4bedeb7d
    ctx->pc = 0x1f9b48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1f9b4c:
    // 0x1f9b4c: 0x4bedf37d
    ctx->pc = 0x1f9b4cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1f9b50:
    // 0x1f9b50: 0x4bedfb7d
    ctx->pc = 0x1f9b50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1f9b54:
    // 0x1f9b54: 0x8e220004
    ctx->pc = 0x1f9b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f9b58:
    // 0x1f9b58: 0xc621001c
    ctx->pc = 0x1f9b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9b5c:
    // 0x1f9b5c: 0xc6200014
    ctx->pc = 0x1f9b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9b60:
    // 0x1f9b60: 0x3c0101fb
    ctx->pc = 0x1f9b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_1f9b64:
    // 0x1f9b64: 0x21040
    ctx->pc = 0x1f9b64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1f9b68:
    // 0x1f9b68: 0x410821
    ctx->pc = 0x1f9b68u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f9b6c:
    // 0x1f9b6c: 0x842373e4
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_1f9b70:
    // 0x1f9b70: 0x46000801
    ctx->pc = 0x1f9b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9b74:
    // 0x1f9b74: 0x46000045
    ctx->pc = 0x1f9b74u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_1f9b78:
    // 0x1f9b78: 0x4610003
label_1f9b7c:
    if (ctx->pc == 0x1F9B7Cu) {
        ctx->pc = 0x1F9B7Cu;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1F9B80u;
        goto label_1f9b80;
    }
    ctx->pc = 0x1F9B78u;
    {
        const bool branch_taken_0x1f9b78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F9B7Cu;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1f9b78) {
            ctx->pc = 0x1F9B88u;
            goto label_1f9b88;
        }
    }
    ctx->pc = 0x1F9B80u;
label_1f9b80:
    // 0x1f9b80: 0x24620001
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1f9b84:
    // 0x1f9b84: 0x2a043
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_1f9b88:
    // 0x1f9b88: 0x44940000
    ctx->pc = 0x1f9b88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
label_1f9b8c:
    // 0x1f9b8c: 0x0
    ctx->pc = 0x1f9b8cu;
    // NOP
label_1f9b90:
    // 0x1f9b90: 0x46800020
    ctx->pc = 0x1f9b90u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f9b94:
    // 0x1f9b94: 0x46000836
    ctx->pc = 0x1f9b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9b98:
    // 0x1f9b98: 0x0
    ctx->pc = 0x1f9b98u;
    // NOP
label_1f9b9c:
    // 0x1f9b9c: 0x45010035
label_1f9ba0:
    if (ctx->pc == 0x1F9BA0u) {
        ctx->pc = 0x1F9BA0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1F9BA4u;
        goto label_1f9ba4;
    }
    ctx->pc = 0x1F9B9Cu;
    {
        const bool branch_taken_0x1f9b9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9BA0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1f9b9c) {
            ctx->pc = 0x1F9C74u;
            goto label_1f9c74;
        }
    }
    ctx->pc = 0x1F9BA4u;
label_1f9ba4:
    // 0x1f9ba4: 0x10400002
label_1f9ba8:
    if (ctx->pc == 0x1F9BA8u) {
        ctx->pc = 0x1F9BACu;
        goto label_1f9bac;
    }
    ctx->pc = 0x1F9BA4u;
    {
        const bool branch_taken_0x1f9ba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9ba4) {
            ctx->pc = 0x1F9BB0u;
            goto label_1f9bb0;
        }
    }
    ctx->pc = 0x1F9BACu;
label_1f9bac:
    // 0x1f9bac: 0x26940001
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1f9bb0:
    // 0x1f9bb0: 0x8e420004
    ctx->pc = 0x1f9bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f9bb4:
    // 0x1f9bb4: 0x27848d4c
    ctx->pc = 0x1f9bb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1f9bb8:
    // 0x1f9bb8: 0x8445002c
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1f9bbc:
    // 0x1f9bbc: 0x8c460004
    ctx->pc = 0x1f9bbcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f9bc0:
    // 0x1f9bc0: 0xc07f1d8
label_1f9bc4:
    if (ctx->pc == 0x1F9BC4u) {
        ctx->pc = 0x1F9BC4u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9BC8u;
        goto label_1f9bc8;
    }
    ctx->pc = 0x1F9BC0u;
    SET_GPR_U32(ctx, 31, 0x1F9BC8u);
    ctx->pc = 0x1F9BC4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BC8u; }
        else if (ctx->pc != 0x1F9BC8u) { ctx->pc = 0x1F9BC8u; }
    }
    if (ctx->pc != 0x1F9BC8u) { return; }
    ctx->pc = 0x1F9BC8u;
label_1f9bc8:
    // 0x1f9bc8: 0x72803e28
    ctx->pc = 0x1f9bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1f9bcc:
    // 0x1f9bcc: 0x7040a628
    ctx->pc = 0x1f9bccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f9bd0:
    // 0x1f9bd0: 0x8e420004
    ctx->pc = 0x1f9bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f9bd4:
    // 0x1f9bd4: 0x8445002c
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1f9bd8:
    // 0x1f9bd8: 0x8c460004
    ctx->pc = 0x1f9bd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f9bdc:
    // 0x1f9bdc: 0xc07f1d8
label_1f9be0:
    if (ctx->pc == 0x1F9BE0u) {
        ctx->pc = 0x1F9BE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x1F9BE4u;
        goto label_1f9be4;
    }
    ctx->pc = 0x1F9BDCu;
    SET_GPR_U32(ctx, 31, 0x1F9BE4u);
    ctx->pc = 0x1F9BE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BE4u; }
        else if (ctx->pc != 0x1F9BE4u) { ctx->pc = 0x1F9BE4u; }
    }
    if (ctx->pc != 0x1F9BE4u) { return; }
    ctx->pc = 0x1F9BE4u;
label_1f9be4:
    // 0x1f9be4: 0xc6210014
    ctx->pc = 0x1f9be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9be8:
    // 0x1f9be8: 0xc620001c
    ctx->pc = 0x1f9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9bec:
    // 0x1f9bec: 0x46000834
    ctx->pc = 0x1f9becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9bf0:
    // 0x1f9bf0: 0x0
    ctx->pc = 0x1f9bf0u;
    // NOP
label_1f9bf4:
    // 0x1f9bf4: 0x45000010
label_1f9bf8:
    if (ctx->pc == 0x1F9BF8u) {
        ctx->pc = 0x1F9BFCu;
        goto label_1f9bfc;
    }
    ctx->pc = 0x1F9BF4u;
    {
        const bool branch_taken_0x1f9bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9bf4) {
            ctx->pc = 0x1F9C38u;
            goto label_1f9c38;
        }
    }
    ctx->pc = 0x1F9BFCu;
label_1f9bfc:
    // 0x1f9bfc: 0xc4470000
    ctx->pc = 0x1f9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f9c00:
    // 0x1f9c00: 0xc626004c
    ctx->pc = 0x1f9c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9c04:
    // 0x1f9c04: 0xc4430008
    ctx->pc = 0x1f9c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9c08:
    // 0x1f9c08: 0xc6220054
    ctx->pc = 0x1f9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9c0c:
    // 0x1f9c0c: 0xc6250040
    ctx->pc = 0x1f9c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9c10:
    // 0x1f9c10: 0xc6210048
    ctx->pc = 0x1f9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9c14:
    // 0x1f9c14: 0xc6840000
    ctx->pc = 0x1f9c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9c18:
    // 0x1f9c18: 0x46063981
    ctx->pc = 0x1f9c18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f9c1c:
    // 0x1f9c1c: 0xc6800008
    ctx->pc = 0x1f9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9c20:
    // 0x1f9c20: 0x46021881
    ctx->pc = 0x1f9c20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f9c24:
    // 0x1f9c24: 0x46062940
    ctx->pc = 0x1f9c24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1f9c28:
    // 0x1f9c28: 0x46020840
    ctx->pc = 0x1f9c28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f9c2c:
    // 0x1f9c2c: 0x46042d01
    ctx->pc = 0x1f9c2cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f9c30:
    // 0x1f9c30: 0x10000016
label_1f9c34:
    if (ctx->pc == 0x1F9C34u) {
        ctx->pc = 0x1F9C34u;
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1F9C38u;
        goto label_1f9c38;
    }
    ctx->pc = 0x1F9C30u;
    {
        const bool branch_taken_0x1f9c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9C34u;
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1f9c30) {
            ctx->pc = 0x1F9C8Cu;
            goto label_1f9c8c;
        }
    }
    ctx->pc = 0x1F9C38u;
label_1f9c38:
    // 0x1f9c38: 0xc6870000
    ctx->pc = 0x1f9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f9c3c:
    // 0x1f9c3c: 0xc626004c
    ctx->pc = 0x1f9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f9c40:
    // 0x1f9c40: 0xc6830008
    ctx->pc = 0x1f9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9c44:
    // 0x1f9c44: 0xc6220054
    ctx->pc = 0x1f9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9c48:
    // 0x1f9c48: 0xc6250040
    ctx->pc = 0x1f9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9c4c:
    // 0x1f9c4c: 0xc6210048
    ctx->pc = 0x1f9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9c50:
    // 0x1f9c50: 0xc4440000
    ctx->pc = 0x1f9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9c54:
    // 0x1f9c54: 0x46063981
    ctx->pc = 0x1f9c54u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f9c58:
    // 0x1f9c58: 0xc4400008
    ctx->pc = 0x1f9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9c5c:
    // 0x1f9c5c: 0x46021881
    ctx->pc = 0x1f9c5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f9c60:
    // 0x1f9c60: 0x46062940
    ctx->pc = 0x1f9c60u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1f9c64:
    // 0x1f9c64: 0x46020840
    ctx->pc = 0x1f9c64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f9c68:
    // 0x1f9c68: 0x46042d01
    ctx->pc = 0x1f9c68u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f9c6c:
    // 0x1f9c6c: 0x10000007
label_1f9c70:
    if (ctx->pc == 0x1F9C70u) {
        ctx->pc = 0x1F9C70u;
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1F9C74u;
        goto label_1f9c74;
    }
    ctx->pc = 0x1F9C6Cu;
    {
        const bool branch_taken_0x1f9c6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9C70u;
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1f9c6c) {
            ctx->pc = 0x1F9C8Cu;
            goto label_1f9c8c;
        }
    }
    ctx->pc = 0x1F9C74u;
label_1f9c74:
    // 0x1f9c74: 0xc6230040
    ctx->pc = 0x1f9c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9c78:
    // 0x1f9c78: 0xc622004c
    ctx->pc = 0x1f9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9c7c:
    // 0x1f9c7c: 0xc6210048
    ctx->pc = 0x1f9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9c80:
    // 0x1f9c80: 0xc6200054
    ctx->pc = 0x1f9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9c84:
    // 0x1f9c84: 0x46021d01
    ctx->pc = 0x1f9c84u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f9c88:
    // 0x1f9c88: 0x46000d41
    ctx->pc = 0x1f9c88u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9c8c:
    // 0x1f9c8c: 0xc06c20d
label_1f9c90:
    if (ctx->pc == 0x1F9C90u) {
        ctx->pc = 0x1F9C94u;
        goto label_1f9c94;
    }
    ctx->pc = 0x1F9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C94u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C94u; }
        else if (ctx->pc != 0x1F9C94u) { ctx->pc = 0x1F9C94u; }
    }
    if (ctx->pc != 0x1F9C94u) { return; }
    ctx->pc = 0x1F9C94u;
label_1f9c94:
    // 0x1f9c94: 0xc60d0004
    ctx->pc = 0x1f9c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f9c98:
    // 0x1f9c98: 0xc60e0008
    ctx->pc = 0x1f9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f9c9c:
    // 0x1f9c9c: 0xc06c202
label_1f9ca0:
    if (ctx->pc == 0x1F9CA0u) {
        ctx->pc = 0x1F9CA0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9CA4u;
        goto label_1f9ca4;
    }
    ctx->pc = 0x1F9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F9CA4u);
    ctx->pc = 0x1F9CA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CA4u; }
        else if (ctx->pc != 0x1F9CA4u) { ctx->pc = 0x1F9CA4u; }
    }
    if (ctx->pc != 0x1F9CA4u) { return; }
    ctx->pc = 0x1F9CA4u;
label_1f9ca4:
    // 0x1f9ca4: 0x8e231c98
    ctx->pc = 0x1f9ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
label_1f9ca8:
    // 0x1f9ca8: 0x24020004
    ctx->pc = 0x1f9ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f9cac:
    // 0x1f9cac: 0x1062002b
label_1f9cb0:
    if (ctx->pc == 0x1F9CB0u) {
        ctx->pc = 0x1F9CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F9CB4u;
        goto label_1f9cb4;
    }
    ctx->pc = 0x1F9CACu;
    {
        const bool branch_taken_0x1f9cac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f9cac) {
            ctx->pc = 0x1F9D5Cu;
            goto label_1f9d5c;
        }
    }
    ctx->pc = 0x1F9CB4u;
label_1f9cb4:
    // 0x1f9cb4: 0x10620021
label_1f9cb8:
    if (ctx->pc == 0x1F9CB8u) {
        ctx->pc = 0x1F9CB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F9CBCu;
        goto label_1f9cbc;
    }
    ctx->pc = 0x1F9CB4u;
    {
        const bool branch_taken_0x1f9cb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9CB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f9cb4) {
            ctx->pc = 0x1F9D3Cu;
            goto label_1f9d3c;
        }
    }
    ctx->pc = 0x1F9CBCu;
label_1f9cbc:
    // 0x1f9cbc: 0x10620017
label_1f9cc0:
    if (ctx->pc == 0x1F9CC0u) {
        ctx->pc = 0x1F9CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9CC4u;
        goto label_1f9cc4;
    }
    ctx->pc = 0x1F9CBCu;
    {
        const bool branch_taken_0x1f9cbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f9cbc) {
            ctx->pc = 0x1F9D1Cu;
            goto label_1f9d1c;
        }
    }
    ctx->pc = 0x1F9CC4u;
label_1f9cc4:
    // 0x1f9cc4: 0x1062000d
label_1f9cc8:
    if (ctx->pc == 0x1F9CC8u) {
        ctx->pc = 0x1F9CCCu;
        goto label_1f9ccc;
    }
    ctx->pc = 0x1F9CC4u;
    {
        const bool branch_taken_0x1f9cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f9cc4) {
            ctx->pc = 0x1F9CFCu;
            goto label_1f9cfc;
        }
    }
    ctx->pc = 0x1F9CCCu;
label_1f9ccc:
    // 0x1f9ccc: 0x10600003
label_1f9cd0:
    if (ctx->pc == 0x1F9CD0u) {
        ctx->pc = 0x1F9CD4u;
        goto label_1f9cd4;
    }
    ctx->pc = 0x1F9CCCu;
    {
        const bool branch_taken_0x1f9ccc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9ccc) {
            ctx->pc = 0x1F9CDCu;
            goto label_1f9cdc;
        }
    }
    ctx->pc = 0x1F9CD4u;
label_1f9cd4:
    // 0x1f9cd4: 0x10000029
label_1f9cd8:
    if (ctx->pc == 0x1F9CD8u) {
        ctx->pc = 0x1F9CD8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9CDCu;
        goto label_1f9cdc;
    }
    ctx->pc = 0x1F9CD4u;
    {
        const bool branch_taken_0x1f9cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9CD8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1f9cd4) {
            ctx->pc = 0x1F9D7Cu;
            goto label_1f9d7c;
        }
    }
    ctx->pc = 0x1F9CDCu;
label_1f9cdc:
    // 0x1f9cdc: 0xc06c09f
label_1f9ce0:
    if (ctx->pc == 0x1F9CE0u) {
        ctx->pc = 0x1F9CE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9CE4u;
        goto label_1f9ce4;
    }
    ctx->pc = 0x1F9CDCu;
    SET_GPR_U32(ctx, 31, 0x1F9CE4u);
    ctx->pc = 0x1F9CE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CE4u; }
        else if (ctx->pc != 0x1F9CE4u) { ctx->pc = 0x1F9CE4u; }
    }
    if (ctx->pc != 0x1F9CE4u) { return; }
    ctx->pc = 0x1F9CE4u;
label_1f9ce4:
    // 0x1f9ce4: 0xc06c0fb
label_1f9ce8:
    if (ctx->pc == 0x1F9CE8u) {
        ctx->pc = 0x1F9CE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9CECu;
        goto label_1f9cec;
    }
    ctx->pc = 0x1F9CE4u;
    SET_GPR_U32(ctx, 31, 0x1F9CECu);
    ctx->pc = 0x1F9CE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CECu; }
        else if (ctx->pc != 0x1F9CECu) { ctx->pc = 0x1F9CECu; }
    }
    if (ctx->pc != 0x1F9CECu) { return; }
    ctx->pc = 0x1F9CECu;
label_1f9cec:
    // 0x1f9cec: 0xc06c157
label_1f9cf0:
    if (ctx->pc == 0x1F9CF0u) {
        ctx->pc = 0x1F9CF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9CF4u;
        goto label_1f9cf4;
    }
    ctx->pc = 0x1F9CECu;
    SET_GPR_U32(ctx, 31, 0x1F9CF4u);
    ctx->pc = 0x1F9CF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CF4u; }
        else if (ctx->pc != 0x1F9CF4u) { ctx->pc = 0x1F9CF4u; }
    }
    if (ctx->pc != 0x1F9CF4u) { return; }
    ctx->pc = 0x1F9CF4u;
label_1f9cf4:
    // 0x1f9cf4: 0x10000028
label_1f9cf8:
    if (ctx->pc == 0x1F9CF8u) {
        ctx->pc = 0x1F9CF8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9CFCu;
        goto label_1f9cfc;
    }
    ctx->pc = 0x1F9CF4u;
    {
        const bool branch_taken_0x1f9cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9CF8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1f9cf4) {
            ctx->pc = 0x1F9D98u;
            goto label_1f9d98;
        }
    }
    ctx->pc = 0x1F9CFCu;
label_1f9cfc:
    // 0x1f9cfc: 0xc06c09f
label_1f9d00:
    if (ctx->pc == 0x1F9D00u) {
        ctx->pc = 0x1F9D00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9D04u;
        goto label_1f9d04;
    }
    ctx->pc = 0x1F9CFCu;
    SET_GPR_U32(ctx, 31, 0x1F9D04u);
    ctx->pc = 0x1F9D00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D04u; }
        else if (ctx->pc != 0x1F9D04u) { ctx->pc = 0x1F9D04u; }
    }
    if (ctx->pc != 0x1F9D04u) { return; }
    ctx->pc = 0x1F9D04u;
label_1f9d04:
    // 0x1f9d04: 0xc06c157
label_1f9d08:
    if (ctx->pc == 0x1F9D08u) {
        ctx->pc = 0x1F9D08u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9D0Cu;
        goto label_1f9d0c;
    }
    ctx->pc = 0x1F9D04u;
    SET_GPR_U32(ctx, 31, 0x1F9D0Cu);
    ctx->pc = 0x1F9D08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D0Cu; }
        else if (ctx->pc != 0x1F9D0Cu) { ctx->pc = 0x1F9D0Cu; }
    }
    if (ctx->pc != 0x1F9D0Cu) { return; }
    ctx->pc = 0x1F9D0Cu;
label_1f9d0c:
    // 0x1f9d0c: 0xc06c0fb
label_1f9d10:
    if (ctx->pc == 0x1F9D10u) {
        ctx->pc = 0x1F9D10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9D14u;
        goto label_1f9d14;
    }
    ctx->pc = 0x1F9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D14u);
    ctx->pc = 0x1F9D10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D14u; }
        else if (ctx->pc != 0x1F9D14u) { ctx->pc = 0x1F9D14u; }
    }
    if (ctx->pc != 0x1F9D14u) { return; }
    ctx->pc = 0x1F9D14u;
label_1f9d14:
    // 0x1f9d14: 0x1000001f
label_1f9d18:
    if (ctx->pc == 0x1F9D18u) {
        ctx->pc = 0x1F9D1Cu;
        goto label_1f9d1c;
    }
    ctx->pc = 0x1F9D14u;
    {
        const bool branch_taken_0x1f9d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9d14) {
            ctx->pc = 0x1F9D94u;
            goto label_1f9d94;
        }
    }
    ctx->pc = 0x1F9D1Cu;
label_1f9d1c:
    // 0x1f9d1c: 0xc06c0fb
label_1f9d20:
    if (ctx->pc == 0x1F9D20u) {
        ctx->pc = 0x1F9D20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9D24u;
        goto label_1f9d24;
    }
    ctx->pc = 0x1F9D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D24u);
    ctx->pc = 0x1F9D20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D24u; }
        else if (ctx->pc != 0x1F9D24u) { ctx->pc = 0x1F9D24u; }
    }
    if (ctx->pc != 0x1F9D24u) { return; }
    ctx->pc = 0x1F9D24u;
label_1f9d24:
    // 0x1f9d24: 0xc06c09f
label_1f9d28:
    if (ctx->pc == 0x1F9D28u) {
        ctx->pc = 0x1F9D28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9D2Cu;
        goto label_1f9d2c;
    }
    ctx->pc = 0x1F9D24u;
    SET_GPR_U32(ctx, 31, 0x1F9D2Cu);
    ctx->pc = 0x1F9D28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D2Cu; }
        else if (ctx->pc != 0x1F9D2Cu) { ctx->pc = 0x1F9D2Cu; }
    }
    if (ctx->pc != 0x1F9D2Cu) { return; }
    ctx->pc = 0x1F9D2Cu;
label_1f9d2c:
    // 0x1f9d2c: 0xc06c157
label_1f9d30:
    if (ctx->pc == 0x1F9D30u) {
        ctx->pc = 0x1F9D30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9D34u;
        goto label_1f9d34;
    }
    ctx->pc = 0x1F9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D34u);
    ctx->pc = 0x1F9D30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D34u; }
        else if (ctx->pc != 0x1F9D34u) { ctx->pc = 0x1F9D34u; }
    }
    if (ctx->pc != 0x1F9D34u) { return; }
    ctx->pc = 0x1F9D34u;
label_1f9d34:
    // 0x1f9d34: 0x10000017
label_1f9d38:
    if (ctx->pc == 0x1F9D38u) {
        ctx->pc = 0x1F9D3Cu;
        goto label_1f9d3c;
    }
    ctx->pc = 0x1F9D34u;
    {
        const bool branch_taken_0x1f9d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9d34) {
            ctx->pc = 0x1F9D94u;
            goto label_1f9d94;
        }
    }
    ctx->pc = 0x1F9D3Cu;
label_1f9d3c:
    // 0x1f9d3c: 0xc06c0fb
label_1f9d40:
    if (ctx->pc == 0x1F9D40u) {
        ctx->pc = 0x1F9D40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9D44u;
        goto label_1f9d44;
    }
    ctx->pc = 0x1F9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D44u);
    ctx->pc = 0x1F9D40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D44u; }
        else if (ctx->pc != 0x1F9D44u) { ctx->pc = 0x1F9D44u; }
    }
    if (ctx->pc != 0x1F9D44u) { return; }
    ctx->pc = 0x1F9D44u;
label_1f9d44:
    // 0x1f9d44: 0xc06c157
label_1f9d48:
    if (ctx->pc == 0x1F9D48u) {
        ctx->pc = 0x1F9D48u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9D4Cu;
        goto label_1f9d4c;
    }
    ctx->pc = 0x1F9D44u;
    SET_GPR_U32(ctx, 31, 0x1F9D4Cu);
    ctx->pc = 0x1F9D48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D4Cu; }
        else if (ctx->pc != 0x1F9D4Cu) { ctx->pc = 0x1F9D4Cu; }
    }
    if (ctx->pc != 0x1F9D4Cu) { return; }
    ctx->pc = 0x1F9D4Cu;
label_1f9d4c:
    // 0x1f9d4c: 0xc06c09f
label_1f9d50:
    if (ctx->pc == 0x1F9D50u) {
        ctx->pc = 0x1F9D50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9D54u;
        goto label_1f9d54;
    }
    ctx->pc = 0x1F9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D54u);
    ctx->pc = 0x1F9D50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D54u; }
        else if (ctx->pc != 0x1F9D54u) { ctx->pc = 0x1F9D54u; }
    }
    if (ctx->pc != 0x1F9D54u) { return; }
    ctx->pc = 0x1F9D54u;
label_1f9d54:
    // 0x1f9d54: 0x1000000f
label_1f9d58:
    if (ctx->pc == 0x1F9D58u) {
        ctx->pc = 0x1F9D5Cu;
        goto label_1f9d5c;
    }
    ctx->pc = 0x1F9D54u;
    {
        const bool branch_taken_0x1f9d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9d54) {
            ctx->pc = 0x1F9D94u;
            goto label_1f9d94;
        }
    }
    ctx->pc = 0x1F9D5Cu;
label_1f9d5c:
    // 0x1f9d5c: 0xc06c157
label_1f9d60:
    if (ctx->pc == 0x1F9D60u) {
        ctx->pc = 0x1F9D60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9D64u;
        goto label_1f9d64;
    }
    ctx->pc = 0x1F9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D64u);
    ctx->pc = 0x1F9D60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D64u; }
        else if (ctx->pc != 0x1F9D64u) { ctx->pc = 0x1F9D64u; }
    }
    if (ctx->pc != 0x1F9D64u) { return; }
    ctx->pc = 0x1F9D64u;
label_1f9d64:
    // 0x1f9d64: 0xc06c09f
label_1f9d68:
    if (ctx->pc == 0x1F9D68u) {
        ctx->pc = 0x1F9D68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9D6Cu;
        goto label_1f9d6c;
    }
    ctx->pc = 0x1F9D64u;
    SET_GPR_U32(ctx, 31, 0x1F9D6Cu);
    ctx->pc = 0x1F9D68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D6Cu; }
        else if (ctx->pc != 0x1F9D6Cu) { ctx->pc = 0x1F9D6Cu; }
    }
    if (ctx->pc != 0x1F9D6Cu) { return; }
    ctx->pc = 0x1F9D6Cu;
label_1f9d6c:
    // 0x1f9d6c: 0xc06c0fb
label_1f9d70:
    if (ctx->pc == 0x1F9D70u) {
        ctx->pc = 0x1F9D70u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9D74u;
        goto label_1f9d74;
    }
    ctx->pc = 0x1F9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D74u);
    ctx->pc = 0x1F9D70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D74u; }
        else if (ctx->pc != 0x1F9D74u) { ctx->pc = 0x1F9D74u; }
    }
    if (ctx->pc != 0x1F9D74u) { return; }
    ctx->pc = 0x1F9D74u;
label_1f9d74:
    // 0x1f9d74: 0x10000007
label_1f9d78:
    if (ctx->pc == 0x1F9D78u) {
        ctx->pc = 0x1F9D7Cu;
        goto label_1f9d7c;
    }
    ctx->pc = 0x1F9D74u;
    {
        const bool branch_taken_0x1f9d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9d74) {
            ctx->pc = 0x1F9D94u;
            goto label_1f9d94;
        }
    }
    ctx->pc = 0x1F9D7Cu;
label_1f9d7c:
    // 0x1f9d7c: 0xc06c157
label_1f9d80:
    if (ctx->pc == 0x1F9D80u) {
        ctx->pc = 0x1F9D84u;
        goto label_1f9d84;
    }
    ctx->pc = 0x1F9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D84u);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D84u; }
        else if (ctx->pc != 0x1F9D84u) { ctx->pc = 0x1F9D84u; }
    }
    if (ctx->pc != 0x1F9D84u) { return; }
    ctx->pc = 0x1F9D84u;
label_1f9d84:
    // 0x1f9d84: 0xc06c0fb
label_1f9d88:
    if (ctx->pc == 0x1F9D88u) {
        ctx->pc = 0x1F9D88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9D8Cu;
        goto label_1f9d8c;
    }
    ctx->pc = 0x1F9D84u;
    SET_GPR_U32(ctx, 31, 0x1F9D8Cu);
    ctx->pc = 0x1F9D88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D8Cu; }
        else if (ctx->pc != 0x1F9D8Cu) { ctx->pc = 0x1F9D8Cu; }
    }
    if (ctx->pc != 0x1F9D8Cu) { return; }
    ctx->pc = 0x1F9D8Cu;
label_1f9d8c:
    // 0x1f9d8c: 0xc06c09f
label_1f9d90:
    if (ctx->pc == 0x1F9D90u) {
        ctx->pc = 0x1F9D90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9D94u;
        goto label_1f9d94;
    }
    ctx->pc = 0x1F9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D94u);
    ctx->pc = 0x1F9D90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D94u; }
        else if (ctx->pc != 0x1F9D94u) { ctx->pc = 0x1F9D94u; }
    }
    if (ctx->pc != 0x1F9D94u) { return; }
    ctx->pc = 0x1F9D94u;
label_1f9d94:
    // 0x1f9d94: 0xc62c1ca0
    ctx->pc = 0x1f9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f9d98:
    // 0x1f9d98: 0x46006346
    ctx->pc = 0x1f9d98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9d9c:
    // 0x1f9d9c: 0xc06c1b3
label_1f9da0:
    if (ctx->pc == 0x1F9DA0u) {
        ctx->pc = 0x1F9DA0u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9DA4u;
        goto label_1f9da4;
    }
    ctx->pc = 0x1F9D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F9DA4u);
    ctx->pc = 0x1F9DA0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DA4u; }
        else if (ctx->pc != 0x1F9DA4u) { ctx->pc = 0x1F9DA4u; }
    }
    if (ctx->pc != 0x1F9DA4u) { return; }
    ctx->pc = 0x1F9DA4u;
label_1f9da4:
    // 0x1f9da4: 0xe7b400e0
    ctx->pc = 0x1f9da4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f9da8:
    // 0x1f9da8: 0xafa000e4
    ctx->pc = 0x1f9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_1f9dac:
    // 0x1f9dac: 0x27a400e0
    ctx->pc = 0x1f9dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
label_1f9db0:
    // 0x1f9db0: 0x27a500f0
    ctx->pc = 0x1f9db0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 240));
label_1f9db4:
    // 0x1f9db4: 0xc06bf00
label_1f9db8:
    if (ctx->pc == 0x1F9DB8u) {
        ctx->pc = 0x1F9DB8u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x1F9DBCu;
        goto label_1f9dbc;
    }
    ctx->pc = 0x1F9DB4u;
    SET_GPR_U32(ctx, 31, 0x1F9DBCu);
    ctx->pc = 0x1F9DB8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DBCu; }
        else if (ctx->pc != 0x1F9DBCu) { ctx->pc = 0x1F9DBCu; }
    }
    if (ctx->pc != 0x1F9DBCu) { return; }
    ctx->pc = 0x1F9DBCu;
label_1f9dbc:
    // 0x1f9dbc: 0xc7a000f0
    ctx->pc = 0x1f9dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9dc0:
    // 0x1f9dc0: 0xe6000000
    ctx->pc = 0x1f9dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f9dc4:
    // 0x1f9dc4: 0xc7a000f8
    ctx->pc = 0x1f9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9dc8:
    // 0x1f9dc8: 0xe6000008
    ctx->pc = 0x1f9dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1f9dcc:
    // 0x1f9dcc: 0x4bff6b7e
    ctx->pc = 0x1f9dccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1f9dd0:
    // 0x1f9dd0: 0x4bfe6b7e
    ctx->pc = 0x1f9dd0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1f9dd4:
    // 0x1f9dd4: 0x4bfd6b7e
    ctx->pc = 0x1f9dd4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1f9dd8:
    // 0x1f9dd8: 0x4bfc6b7e
    ctx->pc = 0x1f9dd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1f9ddc:
    // 0x1f9ddc: 0x8e391ca4
    ctx->pc = 0x1f9ddcu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 17), 7332)));
label_1f9de0:
    // 0x1f9de0: 0x8f39000c
    ctx->pc = 0x1f9de0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f9de4:
    // 0x1f9de4: 0x320f809
label_1f9de8:
    if (ctx->pc == 0x1F9DE8u) {
        ctx->pc = 0x1F9DE8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9DECu;
        goto label_1f9dec;
    }
    ctx->pc = 0x1F9DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9DECu);
        ctx->pc = 0x1F9DE8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9200u: goto label_1f9200;
            case 0x1F9204u: goto label_1f9204;
            case 0x1F9208u: goto label_1f9208;
            case 0x1F920Cu: goto label_1f920c;
            case 0x1F9210u: goto label_1f9210;
            case 0x1F9214u: goto label_1f9214;
            case 0x1F9218u: goto label_1f9218;
            case 0x1F921Cu: goto label_1f921c;
            case 0x1F9220u: goto label_1f9220;
            case 0x1F9224u: goto label_1f9224;
            case 0x1F9228u: goto label_1f9228;
            case 0x1F922Cu: goto label_1f922c;
            case 0x1F9230u: goto label_1f9230;
            case 0x1F9234u: goto label_1f9234;
            case 0x1F9238u: goto label_1f9238;
            case 0x1F923Cu: goto label_1f923c;
            case 0x1F9240u: goto label_1f9240;
            case 0x1F9244u: goto label_1f9244;
            case 0x1F9248u: goto label_1f9248;
            case 0x1F924Cu: goto label_1f924c;
            case 0x1F9250u: goto label_1f9250;
            case 0x1F9254u: goto label_1f9254;
            case 0x1F9258u: goto label_1f9258;
            case 0x1F925Cu: goto label_1f925c;
            case 0x1F9260u: goto label_1f9260;
            case 0x1F9264u: goto label_1f9264;
            case 0x1F9268u: goto label_1f9268;
            case 0x1F926Cu: goto label_1f926c;
            case 0x1F9270u: goto label_1f9270;
            case 0x1F9274u: goto label_1f9274;
            case 0x1F9278u: goto label_1f9278;
            case 0x1F927Cu: goto label_1f927c;
            case 0x1F9280u: goto label_1f9280;
            case 0x1F9284u: goto label_1f9284;
            case 0x1F9288u: goto label_1f9288;
            case 0x1F928Cu: goto label_1f928c;
            case 0x1F9290u: goto label_1f9290;
            case 0x1F9294u: goto label_1f9294;
            case 0x1F9298u: goto label_1f9298;
            case 0x1F929Cu: goto label_1f929c;
            case 0x1F92A0u: goto label_1f92a0;
            case 0x1F92A4u: goto label_1f92a4;
            case 0x1F92A8u: goto label_1f92a8;
            case 0x1F92ACu: goto label_1f92ac;
            case 0x1F92B0u: goto label_1f92b0;
            case 0x1F92B4u: goto label_1f92b4;
            case 0x1F92B8u: goto label_1f92b8;
            case 0x1F92BCu: goto label_1f92bc;
            case 0x1F92C0u: goto label_1f92c0;
            case 0x1F92C4u: goto label_1f92c4;
            case 0x1F92C8u: goto label_1f92c8;
            case 0x1F92CCu: goto label_1f92cc;
            case 0x1F92D0u: goto label_1f92d0;
            case 0x1F92D4u: goto label_1f92d4;
            case 0x1F92D8u: goto label_1f92d8;
            case 0x1F92DCu: goto label_1f92dc;
            case 0x1F92E0u: goto label_1f92e0;
            case 0x1F92E4u: goto label_1f92e4;
            case 0x1F92E8u: goto label_1f92e8;
            case 0x1F92ECu: goto label_1f92ec;
            case 0x1F92F0u: goto label_1f92f0;
            case 0x1F92F4u: goto label_1f92f4;
            case 0x1F92F8u: goto label_1f92f8;
            case 0x1F92FCu: goto label_1f92fc;
            case 0x1F9300u: goto label_1f9300;
            case 0x1F9304u: goto label_1f9304;
            case 0x1F9308u: goto label_1f9308;
            case 0x1F930Cu: goto label_1f930c;
            case 0x1F9310u: goto label_1f9310;
            case 0x1F9314u: goto label_1f9314;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F931Cu: goto label_1f931c;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9324u: goto label_1f9324;
            case 0x1F9328u: goto label_1f9328;
            case 0x1F932Cu: goto label_1f932c;
            case 0x1F9330u: goto label_1f9330;
            case 0x1F9334u: goto label_1f9334;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F933Cu: goto label_1f933c;
            case 0x1F9340u: goto label_1f9340;
            case 0x1F9344u: goto label_1f9344;
            case 0x1F9348u: goto label_1f9348;
            case 0x1F934Cu: goto label_1f934c;
            case 0x1F9350u: goto label_1f9350;
            case 0x1F9354u: goto label_1f9354;
            case 0x1F9358u: goto label_1f9358;
            case 0x1F935Cu: goto label_1f935c;
            case 0x1F9360u: goto label_1f9360;
            case 0x1F9364u: goto label_1f9364;
            case 0x1F9368u: goto label_1f9368;
            case 0x1F936Cu: goto label_1f936c;
            case 0x1F9370u: goto label_1f9370;
            case 0x1F9374u: goto label_1f9374;
            case 0x1F9378u: goto label_1f9378;
            case 0x1F937Cu: goto label_1f937c;
            case 0x1F9380u: goto label_1f9380;
            case 0x1F9384u: goto label_1f9384;
            case 0x1F9388u: goto label_1f9388;
            case 0x1F938Cu: goto label_1f938c;
            case 0x1F9390u: goto label_1f9390;
            case 0x1F9394u: goto label_1f9394;
            case 0x1F9398u: goto label_1f9398;
            case 0x1F939Cu: goto label_1f939c;
            case 0x1F93A0u: goto label_1f93a0;
            case 0x1F93A4u: goto label_1f93a4;
            case 0x1F93A8u: goto label_1f93a8;
            case 0x1F93ACu: goto label_1f93ac;
            case 0x1F93B0u: goto label_1f93b0;
            case 0x1F93B4u: goto label_1f93b4;
            case 0x1F93B8u: goto label_1f93b8;
            case 0x1F93BCu: goto label_1f93bc;
            case 0x1F93C0u: goto label_1f93c0;
            case 0x1F93C4u: goto label_1f93c4;
            case 0x1F93C8u: goto label_1f93c8;
            case 0x1F93CCu: goto label_1f93cc;
            case 0x1F93D0u: goto label_1f93d0;
            case 0x1F93D4u: goto label_1f93d4;
            case 0x1F93D8u: goto label_1f93d8;
            case 0x1F93DCu: goto label_1f93dc;
            case 0x1F93E0u: goto label_1f93e0;
            case 0x1F93E4u: goto label_1f93e4;
            case 0x1F93E8u: goto label_1f93e8;
            case 0x1F93ECu: goto label_1f93ec;
            case 0x1F93F0u: goto label_1f93f0;
            case 0x1F93F4u: goto label_1f93f4;
            case 0x1F93F8u: goto label_1f93f8;
            case 0x1F93FCu: goto label_1f93fc;
            case 0x1F9400u: goto label_1f9400;
            case 0x1F9404u: goto label_1f9404;
            case 0x1F9408u: goto label_1f9408;
            case 0x1F940Cu: goto label_1f940c;
            case 0x1F9410u: goto label_1f9410;
            case 0x1F9414u: goto label_1f9414;
            case 0x1F9418u: goto label_1f9418;
            case 0x1F941Cu: goto label_1f941c;
            case 0x1F9420u: goto label_1f9420;
            case 0x1F9424u: goto label_1f9424;
            case 0x1F9428u: goto label_1f9428;
            case 0x1F942Cu: goto label_1f942c;
            case 0x1F9430u: goto label_1f9430;
            case 0x1F9434u: goto label_1f9434;
            case 0x1F9438u: goto label_1f9438;
            case 0x1F943Cu: goto label_1f943c;
            case 0x1F9440u: goto label_1f9440;
            case 0x1F9444u: goto label_1f9444;
            case 0x1F9448u: goto label_1f9448;
            case 0x1F944Cu: goto label_1f944c;
            case 0x1F9450u: goto label_1f9450;
            case 0x1F9454u: goto label_1f9454;
            case 0x1F9458u: goto label_1f9458;
            case 0x1F945Cu: goto label_1f945c;
            case 0x1F9460u: goto label_1f9460;
            case 0x1F9464u: goto label_1f9464;
            case 0x1F9468u: goto label_1f9468;
            case 0x1F946Cu: goto label_1f946c;
            case 0x1F9470u: goto label_1f9470;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9478u: goto label_1f9478;
            case 0x1F947Cu: goto label_1f947c;
            case 0x1F9480u: goto label_1f9480;
            case 0x1F9484u: goto label_1f9484;
            case 0x1F9488u: goto label_1f9488;
            case 0x1F948Cu: goto label_1f948c;
            case 0x1F9490u: goto label_1f9490;
            case 0x1F9494u: goto label_1f9494;
            case 0x1F9498u: goto label_1f9498;
            case 0x1F949Cu: goto label_1f949c;
            case 0x1F94A0u: goto label_1f94a0;
            case 0x1F94A4u: goto label_1f94a4;
            case 0x1F94A8u: goto label_1f94a8;
            case 0x1F94ACu: goto label_1f94ac;
            case 0x1F94B0u: goto label_1f94b0;
            case 0x1F94B4u: goto label_1f94b4;
            case 0x1F94B8u: goto label_1f94b8;
            case 0x1F94BCu: goto label_1f94bc;
            case 0x1F94C0u: goto label_1f94c0;
            case 0x1F94C4u: goto label_1f94c4;
            case 0x1F94C8u: goto label_1f94c8;
            case 0x1F94CCu: goto label_1f94cc;
            case 0x1F94D0u: goto label_1f94d0;
            case 0x1F94D4u: goto label_1f94d4;
            case 0x1F94D8u: goto label_1f94d8;
            case 0x1F94DCu: goto label_1f94dc;
            case 0x1F94E0u: goto label_1f94e0;
            case 0x1F94E4u: goto label_1f94e4;
            case 0x1F94E8u: goto label_1f94e8;
            case 0x1F94ECu: goto label_1f94ec;
            case 0x1F94F0u: goto label_1f94f0;
            case 0x1F94F4u: goto label_1f94f4;
            case 0x1F94F8u: goto label_1f94f8;
            case 0x1F94FCu: goto label_1f94fc;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9504u: goto label_1f9504;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F950Cu: goto label_1f950c;
            case 0x1F9510u: goto label_1f9510;
            case 0x1F9514u: goto label_1f9514;
            case 0x1F9518u: goto label_1f9518;
            case 0x1F951Cu: goto label_1f951c;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F9524u: goto label_1f9524;
            case 0x1F9528u: goto label_1f9528;
            case 0x1F952Cu: goto label_1f952c;
            case 0x1F9530u: goto label_1f9530;
            case 0x1F9534u: goto label_1f9534;
            case 0x1F9538u: goto label_1f9538;
            case 0x1F953Cu: goto label_1f953c;
            case 0x1F9540u: goto label_1f9540;
            case 0x1F9544u: goto label_1f9544;
            case 0x1F9548u: goto label_1f9548;
            case 0x1F954Cu: goto label_1f954c;
            case 0x1F9550u: goto label_1f9550;
            case 0x1F9554u: goto label_1f9554;
            case 0x1F9558u: goto label_1f9558;
            case 0x1F955Cu: goto label_1f955c;
            case 0x1F9560u: goto label_1f9560;
            case 0x1F9564u: goto label_1f9564;
            case 0x1F9568u: goto label_1f9568;
            case 0x1F956Cu: goto label_1f956c;
            case 0x1F9570u: goto label_1f9570;
            case 0x1F9574u: goto label_1f9574;
            case 0x1F9578u: goto label_1f9578;
            case 0x1F957Cu: goto label_1f957c;
            case 0x1F9580u: goto label_1f9580;
            case 0x1F9584u: goto label_1f9584;
            case 0x1F9588u: goto label_1f9588;
            case 0x1F958Cu: goto label_1f958c;
            case 0x1F9590u: goto label_1f9590;
            case 0x1F9594u: goto label_1f9594;
            case 0x1F9598u: goto label_1f9598;
            case 0x1F959Cu: goto label_1f959c;
            case 0x1F95A0u: goto label_1f95a0;
            case 0x1F95A4u: goto label_1f95a4;
            case 0x1F95A8u: goto label_1f95a8;
            case 0x1F95ACu: goto label_1f95ac;
            case 0x1F95B0u: goto label_1f95b0;
            case 0x1F95B4u: goto label_1f95b4;
            case 0x1F95B8u: goto label_1f95b8;
            case 0x1F95BCu: goto label_1f95bc;
            case 0x1F95C0u: goto label_1f95c0;
            case 0x1F95C4u: goto label_1f95c4;
            case 0x1F95C8u: goto label_1f95c8;
            case 0x1F95CCu: goto label_1f95cc;
            case 0x1F95D0u: goto label_1f95d0;
            case 0x1F95D4u: goto label_1f95d4;
            case 0x1F95D8u: goto label_1f95d8;
            case 0x1F95DCu: goto label_1f95dc;
            case 0x1F95E0u: goto label_1f95e0;
            case 0x1F95E4u: goto label_1f95e4;
            case 0x1F95E8u: goto label_1f95e8;
            case 0x1F95ECu: goto label_1f95ec;
            case 0x1F95F0u: goto label_1f95f0;
            case 0x1F95F4u: goto label_1f95f4;
            case 0x1F95F8u: goto label_1f95f8;
            case 0x1F95FCu: goto label_1f95fc;
            case 0x1F9600u: goto label_1f9600;
            case 0x1F9604u: goto label_1f9604;
            case 0x1F9608u: goto label_1f9608;
            case 0x1F960Cu: goto label_1f960c;
            case 0x1F9610u: goto label_1f9610;
            case 0x1F9614u: goto label_1f9614;
            case 0x1F9618u: goto label_1f9618;
            case 0x1F961Cu: goto label_1f961c;
            case 0x1F9620u: goto label_1f9620;
            case 0x1F9624u: goto label_1f9624;
            case 0x1F9628u: goto label_1f9628;
            case 0x1F962Cu: goto label_1f962c;
            case 0x1F9630u: goto label_1f9630;
            case 0x1F9634u: goto label_1f9634;
            case 0x1F9638u: goto label_1f9638;
            case 0x1F963Cu: goto label_1f963c;
            case 0x1F9640u: goto label_1f9640;
            case 0x1F9644u: goto label_1f9644;
            case 0x1F9648u: goto label_1f9648;
            case 0x1F964Cu: goto label_1f964c;
            case 0x1F9650u: goto label_1f9650;
            case 0x1F9654u: goto label_1f9654;
            case 0x1F9658u: goto label_1f9658;
            case 0x1F965Cu: goto label_1f965c;
            case 0x1F9660u: goto label_1f9660;
            case 0x1F9664u: goto label_1f9664;
            case 0x1F9668u: goto label_1f9668;
            case 0x1F966Cu: goto label_1f966c;
            case 0x1F9670u: goto label_1f9670;
            case 0x1F9674u: goto label_1f9674;
            case 0x1F9678u: goto label_1f9678;
            case 0x1F967Cu: goto label_1f967c;
            case 0x1F9680u: goto label_1f9680;
            case 0x1F9684u: goto label_1f9684;
            case 0x1F9688u: goto label_1f9688;
            case 0x1F968Cu: goto label_1f968c;
            case 0x1F9690u: goto label_1f9690;
            case 0x1F9694u: goto label_1f9694;
            case 0x1F9698u: goto label_1f9698;
            case 0x1F969Cu: goto label_1f969c;
            case 0x1F96A0u: goto label_1f96a0;
            case 0x1F96A4u: goto label_1f96a4;
            case 0x1F96A8u: goto label_1f96a8;
            case 0x1F96ACu: goto label_1f96ac;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B4u: goto label_1f96b4;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96BCu: goto label_1f96bc;
            case 0x1F96C0u: goto label_1f96c0;
            case 0x1F96C4u: goto label_1f96c4;
            case 0x1F96C8u: goto label_1f96c8;
            case 0x1F96CCu: goto label_1f96cc;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F96D4u: goto label_1f96d4;
            case 0x1F96D8u: goto label_1f96d8;
            case 0x1F96DCu: goto label_1f96dc;
            case 0x1F96E0u: goto label_1f96e0;
            case 0x1F96E4u: goto label_1f96e4;
            case 0x1F96E8u: goto label_1f96e8;
            case 0x1F96ECu: goto label_1f96ec;
            case 0x1F96F0u: goto label_1f96f0;
            case 0x1F96F4u: goto label_1f96f4;
            case 0x1F96F8u: goto label_1f96f8;
            case 0x1F96FCu: goto label_1f96fc;
            case 0x1F9700u: goto label_1f9700;
            case 0x1F9704u: goto label_1f9704;
            case 0x1F9708u: goto label_1f9708;
            case 0x1F970Cu: goto label_1f970c;
            case 0x1F9710u: goto label_1f9710;
            case 0x1F9714u: goto label_1f9714;
            case 0x1F9718u: goto label_1f9718;
            case 0x1F971Cu: goto label_1f971c;
            case 0x1F9720u: goto label_1f9720;
            case 0x1F9724u: goto label_1f9724;
            case 0x1F9728u: goto label_1f9728;
            case 0x1F972Cu: goto label_1f972c;
            case 0x1F9730u: goto label_1f9730;
            case 0x1F9734u: goto label_1f9734;
            case 0x1F9738u: goto label_1f9738;
            case 0x1F973Cu: goto label_1f973c;
            case 0x1F9740u: goto label_1f9740;
            case 0x1F9744u: goto label_1f9744;
            case 0x1F9748u: goto label_1f9748;
            case 0x1F974Cu: goto label_1f974c;
            case 0x1F9750u: goto label_1f9750;
            case 0x1F9754u: goto label_1f9754;
            case 0x1F9758u: goto label_1f9758;
            case 0x1F975Cu: goto label_1f975c;
            case 0x1F9760u: goto label_1f9760;
            case 0x1F9764u: goto label_1f9764;
            case 0x1F9768u: goto label_1f9768;
            case 0x1F976Cu: goto label_1f976c;
            case 0x1F9770u: goto label_1f9770;
            case 0x1F9774u: goto label_1f9774;
            case 0x1F9778u: goto label_1f9778;
            case 0x1F977Cu: goto label_1f977c;
            case 0x1F9780u: goto label_1f9780;
            case 0x1F9784u: goto label_1f9784;
            case 0x1F9788u: goto label_1f9788;
            case 0x1F978Cu: goto label_1f978c;
            case 0x1F9790u: goto label_1f9790;
            case 0x1F9794u: goto label_1f9794;
            case 0x1F9798u: goto label_1f9798;
            case 0x1F979Cu: goto label_1f979c;
            case 0x1F97A0u: goto label_1f97a0;
            case 0x1F97A4u: goto label_1f97a4;
            case 0x1F97A8u: goto label_1f97a8;
            case 0x1F97ACu: goto label_1f97ac;
            case 0x1F97B0u: goto label_1f97b0;
            case 0x1F97B4u: goto label_1f97b4;
            case 0x1F97B8u: goto label_1f97b8;
            case 0x1F97BCu: goto label_1f97bc;
            case 0x1F97C0u: goto label_1f97c0;
            case 0x1F97C4u: goto label_1f97c4;
            case 0x1F97C8u: goto label_1f97c8;
            case 0x1F97CCu: goto label_1f97cc;
            case 0x1F97D0u: goto label_1f97d0;
            case 0x1F97D4u: goto label_1f97d4;
            case 0x1F97D8u: goto label_1f97d8;
            case 0x1F97DCu: goto label_1f97dc;
            case 0x1F97E0u: goto label_1f97e0;
            case 0x1F97E4u: goto label_1f97e4;
            case 0x1F97E8u: goto label_1f97e8;
            case 0x1F97ECu: goto label_1f97ec;
            case 0x1F97F0u: goto label_1f97f0;
            case 0x1F97F4u: goto label_1f97f4;
            case 0x1F97F8u: goto label_1f97f8;
            case 0x1F97FCu: goto label_1f97fc;
            case 0x1F9800u: goto label_1f9800;
            case 0x1F9804u: goto label_1f9804;
            case 0x1F9808u: goto label_1f9808;
            case 0x1F980Cu: goto label_1f980c;
            case 0x1F9810u: goto label_1f9810;
            case 0x1F9814u: goto label_1f9814;
            case 0x1F9818u: goto label_1f9818;
            case 0x1F981Cu: goto label_1f981c;
            case 0x1F9820u: goto label_1f9820;
            case 0x1F9824u: goto label_1f9824;
            case 0x1F9828u: goto label_1f9828;
            case 0x1F982Cu: goto label_1f982c;
            case 0x1F9830u: goto label_1f9830;
            case 0x1F9834u: goto label_1f9834;
            case 0x1F9838u: goto label_1f9838;
            case 0x1F983Cu: goto label_1f983c;
            case 0x1F9840u: goto label_1f9840;
            case 0x1F9844u: goto label_1f9844;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F984Cu: goto label_1f984c;
            case 0x1F9850u: goto label_1f9850;
            case 0x1F9854u: goto label_1f9854;
            case 0x1F9858u: goto label_1f9858;
            case 0x1F985Cu: goto label_1f985c;
            case 0x1F9860u: goto label_1f9860;
            case 0x1F9864u: goto label_1f9864;
            case 0x1F9868u: goto label_1f9868;
            case 0x1F986Cu: goto label_1f986c;
            case 0x1F9870u: goto label_1f9870;
            case 0x1F9874u: goto label_1f9874;
            case 0x1F9878u: goto label_1f9878;
            case 0x1F987Cu: goto label_1f987c;
            case 0x1F9880u: goto label_1f9880;
            case 0x1F9884u: goto label_1f9884;
            case 0x1F9888u: goto label_1f9888;
            case 0x1F988Cu: goto label_1f988c;
            case 0x1F9890u: goto label_1f9890;
            case 0x1F9894u: goto label_1f9894;
            case 0x1F9898u: goto label_1f9898;
            case 0x1F989Cu: goto label_1f989c;
            case 0x1F98A0u: goto label_1f98a0;
            case 0x1F98A4u: goto label_1f98a4;
            case 0x1F98A8u: goto label_1f98a8;
            case 0x1F98ACu: goto label_1f98ac;
            case 0x1F98B0u: goto label_1f98b0;
            case 0x1F98B4u: goto label_1f98b4;
            case 0x1F98B8u: goto label_1f98b8;
            case 0x1F98BCu: goto label_1f98bc;
            case 0x1F98C0u: goto label_1f98c0;
            case 0x1F98C4u: goto label_1f98c4;
            case 0x1F98C8u: goto label_1f98c8;
            case 0x1F98CCu: goto label_1f98cc;
            case 0x1F98D0u: goto label_1f98d0;
            case 0x1F98D4u: goto label_1f98d4;
            case 0x1F98D8u: goto label_1f98d8;
            case 0x1F98DCu: goto label_1f98dc;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E4u: goto label_1f98e4;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F98ECu: goto label_1f98ec;
            case 0x1F98F0u: goto label_1f98f0;
            case 0x1F98F4u: goto label_1f98f4;
            case 0x1F98F8u: goto label_1f98f8;
            case 0x1F98FCu: goto label_1f98fc;
            case 0x1F9900u: goto label_1f9900;
            case 0x1F9904u: goto label_1f9904;
            case 0x1F9908u: goto label_1f9908;
            case 0x1F990Cu: goto label_1f990c;
            case 0x1F9910u: goto label_1f9910;
            case 0x1F9914u: goto label_1f9914;
            case 0x1F9918u: goto label_1f9918;
            case 0x1F991Cu: goto label_1f991c;
            case 0x1F9920u: goto label_1f9920;
            case 0x1F9924u: goto label_1f9924;
            case 0x1F9928u: goto label_1f9928;
            case 0x1F992Cu: goto label_1f992c;
            case 0x1F9930u: goto label_1f9930;
            case 0x1F9934u: goto label_1f9934;
            case 0x1F9938u: goto label_1f9938;
            case 0x1F993Cu: goto label_1f993c;
            case 0x1F9940u: goto label_1f9940;
            case 0x1F9944u: goto label_1f9944;
            case 0x1F9948u: goto label_1f9948;
            case 0x1F994Cu: goto label_1f994c;
            case 0x1F9950u: goto label_1f9950;
            case 0x1F9954u: goto label_1f9954;
            case 0x1F9958u: goto label_1f9958;
            case 0x1F995Cu: goto label_1f995c;
            case 0x1F9960u: goto label_1f9960;
            case 0x1F9964u: goto label_1f9964;
            case 0x1F9968u: goto label_1f9968;
            case 0x1F996Cu: goto label_1f996c;
            case 0x1F9970u: goto label_1f9970;
            case 0x1F9974u: goto label_1f9974;
            case 0x1F9978u: goto label_1f9978;
            case 0x1F997Cu: goto label_1f997c;
            case 0x1F9980u: goto label_1f9980;
            case 0x1F9984u: goto label_1f9984;
            case 0x1F9988u: goto label_1f9988;
            case 0x1F998Cu: goto label_1f998c;
            case 0x1F9990u: goto label_1f9990;
            case 0x1F9994u: goto label_1f9994;
            case 0x1F9998u: goto label_1f9998;
            case 0x1F999Cu: goto label_1f999c;
            case 0x1F99A0u: goto label_1f99a0;
            case 0x1F99A4u: goto label_1f99a4;
            case 0x1F99A8u: goto label_1f99a8;
            case 0x1F99ACu: goto label_1f99ac;
            case 0x1F99B0u: goto label_1f99b0;
            case 0x1F99B4u: goto label_1f99b4;
            case 0x1F99B8u: goto label_1f99b8;
            case 0x1F99BCu: goto label_1f99bc;
            case 0x1F99C0u: goto label_1f99c0;
            case 0x1F99C4u: goto label_1f99c4;
            case 0x1F99C8u: goto label_1f99c8;
            case 0x1F99CCu: goto label_1f99cc;
            case 0x1F99D0u: goto label_1f99d0;
            case 0x1F99D4u: goto label_1f99d4;
            case 0x1F99D8u: goto label_1f99d8;
            case 0x1F99DCu: goto label_1f99dc;
            case 0x1F99E0u: goto label_1f99e0;
            case 0x1F99E4u: goto label_1f99e4;
            case 0x1F99E8u: goto label_1f99e8;
            case 0x1F99ECu: goto label_1f99ec;
            case 0x1F99F0u: goto label_1f99f0;
            case 0x1F99F4u: goto label_1f99f4;
            case 0x1F99F8u: goto label_1f99f8;
            case 0x1F99FCu: goto label_1f99fc;
            case 0x1F9A00u: goto label_1f9a00;
            case 0x1F9A04u: goto label_1f9a04;
            case 0x1F9A08u: goto label_1f9a08;
            case 0x1F9A0Cu: goto label_1f9a0c;
            case 0x1F9A10u: goto label_1f9a10;
            case 0x1F9A14u: goto label_1f9a14;
            case 0x1F9A18u: goto label_1f9a18;
            case 0x1F9A1Cu: goto label_1f9a1c;
            case 0x1F9A20u: goto label_1f9a20;
            case 0x1F9A24u: goto label_1f9a24;
            case 0x1F9A28u: goto label_1f9a28;
            case 0x1F9A2Cu: goto label_1f9a2c;
            case 0x1F9A30u: goto label_1f9a30;
            case 0x1F9A34u: goto label_1f9a34;
            case 0x1F9A38u: goto label_1f9a38;
            case 0x1F9A3Cu: goto label_1f9a3c;
            case 0x1F9A40u: goto label_1f9a40;
            case 0x1F9A44u: goto label_1f9a44;
            case 0x1F9A48u: goto label_1f9a48;
            case 0x1F9A4Cu: goto label_1f9a4c;
            case 0x1F9A50u: goto label_1f9a50;
            case 0x1F9A54u: goto label_1f9a54;
            case 0x1F9A58u: goto label_1f9a58;
            case 0x1F9A5Cu: goto label_1f9a5c;
            case 0x1F9A60u: goto label_1f9a60;
            case 0x1F9A64u: goto label_1f9a64;
            case 0x1F9A68u: goto label_1f9a68;
            case 0x1F9A6Cu: goto label_1f9a6c;
            case 0x1F9A70u: goto label_1f9a70;
            case 0x1F9A74u: goto label_1f9a74;
            case 0x1F9A78u: goto label_1f9a78;
            case 0x1F9A7Cu: goto label_1f9a7c;
            case 0x1F9A80u: goto label_1f9a80;
            case 0x1F9A84u: goto label_1f9a84;
            case 0x1F9A88u: goto label_1f9a88;
            case 0x1F9A8Cu: goto label_1f9a8c;
            case 0x1F9A90u: goto label_1f9a90;
            case 0x1F9A94u: goto label_1f9a94;
            case 0x1F9A98u: goto label_1f9a98;
            case 0x1F9A9Cu: goto label_1f9a9c;
            case 0x1F9AA0u: goto label_1f9aa0;
            case 0x1F9AA4u: goto label_1f9aa4;
            case 0x1F9AA8u: goto label_1f9aa8;
            case 0x1F9AACu: goto label_1f9aac;
            case 0x1F9AB0u: goto label_1f9ab0;
            case 0x1F9AB4u: goto label_1f9ab4;
            case 0x1F9AB8u: goto label_1f9ab8;
            case 0x1F9ABCu: goto label_1f9abc;
            case 0x1F9AC0u: goto label_1f9ac0;
            case 0x1F9AC4u: goto label_1f9ac4;
            case 0x1F9AC8u: goto label_1f9ac8;
            case 0x1F9ACCu: goto label_1f9acc;
            case 0x1F9AD0u: goto label_1f9ad0;
            case 0x1F9AD4u: goto label_1f9ad4;
            case 0x1F9AD8u: goto label_1f9ad8;
            case 0x1F9ADCu: goto label_1f9adc;
            case 0x1F9AE0u: goto label_1f9ae0;
            case 0x1F9AE4u: goto label_1f9ae4;
            case 0x1F9AE8u: goto label_1f9ae8;
            case 0x1F9AECu: goto label_1f9aec;
            case 0x1F9AF0u: goto label_1f9af0;
            case 0x1F9AF4u: goto label_1f9af4;
            case 0x1F9AF8u: goto label_1f9af8;
            case 0x1F9AFCu: goto label_1f9afc;
            case 0x1F9B00u: goto label_1f9b00;
            case 0x1F9B04u: goto label_1f9b04;
            case 0x1F9B08u: goto label_1f9b08;
            case 0x1F9B0Cu: goto label_1f9b0c;
            case 0x1F9B10u: goto label_1f9b10;
            case 0x1F9B14u: goto label_1f9b14;
            case 0x1F9B18u: goto label_1f9b18;
            case 0x1F9B1Cu: goto label_1f9b1c;
            case 0x1F9B20u: goto label_1f9b20;
            case 0x1F9B24u: goto label_1f9b24;
            case 0x1F9B28u: goto label_1f9b28;
            case 0x1F9B2Cu: goto label_1f9b2c;
            case 0x1F9B30u: goto label_1f9b30;
            case 0x1F9B34u: goto label_1f9b34;
            case 0x1F9B38u: goto label_1f9b38;
            case 0x1F9B3Cu: goto label_1f9b3c;
            case 0x1F9B40u: goto label_1f9b40;
            case 0x1F9B44u: goto label_1f9b44;
            case 0x1F9B48u: goto label_1f9b48;
            case 0x1F9B4Cu: goto label_1f9b4c;
            case 0x1F9B50u: goto label_1f9b50;
            case 0x1F9B54u: goto label_1f9b54;
            case 0x1F9B58u: goto label_1f9b58;
            case 0x1F9B5Cu: goto label_1f9b5c;
            case 0x1F9B60u: goto label_1f9b60;
            case 0x1F9B64u: goto label_1f9b64;
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9B6Cu: goto label_1f9b6c;
            case 0x1F9B70u: goto label_1f9b70;
            case 0x1F9B74u: goto label_1f9b74;
            case 0x1F9B78u: goto label_1f9b78;
            case 0x1F9B7Cu: goto label_1f9b7c;
            case 0x1F9B80u: goto label_1f9b80;
            case 0x1F9B84u: goto label_1f9b84;
            case 0x1F9B88u: goto label_1f9b88;
            case 0x1F9B8Cu: goto label_1f9b8c;
            case 0x1F9B90u: goto label_1f9b90;
            case 0x1F9B94u: goto label_1f9b94;
            case 0x1F9B98u: goto label_1f9b98;
            case 0x1F9B9Cu: goto label_1f9b9c;
            case 0x1F9BA0u: goto label_1f9ba0;
            case 0x1F9BA4u: goto label_1f9ba4;
            case 0x1F9BA8u: goto label_1f9ba8;
            case 0x1F9BACu: goto label_1f9bac;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BB4u: goto label_1f9bb4;
            case 0x1F9BB8u: goto label_1f9bb8;
            case 0x1F9BBCu: goto label_1f9bbc;
            case 0x1F9BC0u: goto label_1f9bc0;
            case 0x1F9BC4u: goto label_1f9bc4;
            case 0x1F9BC8u: goto label_1f9bc8;
            case 0x1F9BCCu: goto label_1f9bcc;
            case 0x1F9BD0u: goto label_1f9bd0;
            case 0x1F9BD4u: goto label_1f9bd4;
            case 0x1F9BD8u: goto label_1f9bd8;
            case 0x1F9BDCu: goto label_1f9bdc;
            case 0x1F9BE0u: goto label_1f9be0;
            case 0x1F9BE4u: goto label_1f9be4;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9BECu: goto label_1f9bec;
            case 0x1F9BF0u: goto label_1f9bf0;
            case 0x1F9BF4u: goto label_1f9bf4;
            case 0x1F9BF8u: goto label_1f9bf8;
            case 0x1F9BFCu: goto label_1f9bfc;
            case 0x1F9C00u: goto label_1f9c00;
            case 0x1F9C04u: goto label_1f9c04;
            case 0x1F9C08u: goto label_1f9c08;
            case 0x1F9C0Cu: goto label_1f9c0c;
            case 0x1F9C10u: goto label_1f9c10;
            case 0x1F9C14u: goto label_1f9c14;
            case 0x1F9C18u: goto label_1f9c18;
            case 0x1F9C1Cu: goto label_1f9c1c;
            case 0x1F9C20u: goto label_1f9c20;
            case 0x1F9C24u: goto label_1f9c24;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C2Cu: goto label_1f9c2c;
            case 0x1F9C30u: goto label_1f9c30;
            case 0x1F9C34u: goto label_1f9c34;
            case 0x1F9C38u: goto label_1f9c38;
            case 0x1F9C3Cu: goto label_1f9c3c;
            case 0x1F9C40u: goto label_1f9c40;
            case 0x1F9C44u: goto label_1f9c44;
            case 0x1F9C48u: goto label_1f9c48;
            case 0x1F9C4Cu: goto label_1f9c4c;
            case 0x1F9C50u: goto label_1f9c50;
            case 0x1F9C54u: goto label_1f9c54;
            case 0x1F9C58u: goto label_1f9c58;
            case 0x1F9C5Cu: goto label_1f9c5c;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9C64u: goto label_1f9c64;
            case 0x1F9C68u: goto label_1f9c68;
            case 0x1F9C6Cu: goto label_1f9c6c;
            case 0x1F9C70u: goto label_1f9c70;
            case 0x1F9C74u: goto label_1f9c74;
            case 0x1F9C78u: goto label_1f9c78;
            case 0x1F9C7Cu: goto label_1f9c7c;
            case 0x1F9C80u: goto label_1f9c80;
            case 0x1F9C84u: goto label_1f9c84;
            case 0x1F9C88u: goto label_1f9c88;
            case 0x1F9C8Cu: goto label_1f9c8c;
            case 0x1F9C90u: goto label_1f9c90;
            case 0x1F9C94u: goto label_1f9c94;
            case 0x1F9C98u: goto label_1f9c98;
            case 0x1F9C9Cu: goto label_1f9c9c;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CA4u: goto label_1f9ca4;
            case 0x1F9CA8u: goto label_1f9ca8;
            case 0x1F9CACu: goto label_1f9cac;
            case 0x1F9CB0u: goto label_1f9cb0;
            case 0x1F9CB4u: goto label_1f9cb4;
            case 0x1F9CB8u: goto label_1f9cb8;
            case 0x1F9CBCu: goto label_1f9cbc;
            case 0x1F9CC0u: goto label_1f9cc0;
            case 0x1F9CC4u: goto label_1f9cc4;
            case 0x1F9CC8u: goto label_1f9cc8;
            case 0x1F9CCCu: goto label_1f9ccc;
            case 0x1F9CD0u: goto label_1f9cd0;
            case 0x1F9CD4u: goto label_1f9cd4;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9CDCu: goto label_1f9cdc;
            case 0x1F9CE0u: goto label_1f9ce0;
            case 0x1F9CE4u: goto label_1f9ce4;
            case 0x1F9CE8u: goto label_1f9ce8;
            case 0x1F9CECu: goto label_1f9cec;
            case 0x1F9CF0u: goto label_1f9cf0;
            case 0x1F9CF4u: goto label_1f9cf4;
            case 0x1F9CF8u: goto label_1f9cf8;
            case 0x1F9CFCu: goto label_1f9cfc;
            case 0x1F9D00u: goto label_1f9d00;
            case 0x1F9D04u: goto label_1f9d04;
            case 0x1F9D08u: goto label_1f9d08;
            case 0x1F9D0Cu: goto label_1f9d0c;
            case 0x1F9D10u: goto label_1f9d10;
            case 0x1F9D14u: goto label_1f9d14;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D1Cu: goto label_1f9d1c;
            case 0x1F9D20u: goto label_1f9d20;
            case 0x1F9D24u: goto label_1f9d24;
            case 0x1F9D28u: goto label_1f9d28;
            case 0x1F9D2Cu: goto label_1f9d2c;
            case 0x1F9D30u: goto label_1f9d30;
            case 0x1F9D34u: goto label_1f9d34;
            case 0x1F9D38u: goto label_1f9d38;
            case 0x1F9D3Cu: goto label_1f9d3c;
            case 0x1F9D40u: goto label_1f9d40;
            case 0x1F9D44u: goto label_1f9d44;
            case 0x1F9D48u: goto label_1f9d48;
            case 0x1F9D4Cu: goto label_1f9d4c;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D54u: goto label_1f9d54;
            case 0x1F9D58u: goto label_1f9d58;
            case 0x1F9D5Cu: goto label_1f9d5c;
            case 0x1F9D60u: goto label_1f9d60;
            case 0x1F9D64u: goto label_1f9d64;
            case 0x1F9D68u: goto label_1f9d68;
            case 0x1F9D6Cu: goto label_1f9d6c;
            case 0x1F9D70u: goto label_1f9d70;
            case 0x1F9D74u: goto label_1f9d74;
            case 0x1F9D78u: goto label_1f9d78;
            case 0x1F9D7Cu: goto label_1f9d7c;
            case 0x1F9D80u: goto label_1f9d80;
            case 0x1F9D84u: goto label_1f9d84;
            case 0x1F9D88u: goto label_1f9d88;
            case 0x1F9D8Cu: goto label_1f9d8c;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9D94u: goto label_1f9d94;
            case 0x1F9D98u: goto label_1f9d98;
            case 0x1F9D9Cu: goto label_1f9d9c;
            case 0x1F9DA0u: goto label_1f9da0;
            case 0x1F9DA4u: goto label_1f9da4;
            case 0x1F9DA8u: goto label_1f9da8;
            case 0x1F9DACu: goto label_1f9dac;
            case 0x1F9DB0u: goto label_1f9db0;
            case 0x1F9DB4u: goto label_1f9db4;
            case 0x1F9DB8u: goto label_1f9db8;
            case 0x1F9DBCu: goto label_1f9dbc;
            case 0x1F9DC0u: goto label_1f9dc0;
            case 0x1F9DC4u: goto label_1f9dc4;
            case 0x1F9DC8u: goto label_1f9dc8;
            case 0x1F9DCCu: goto label_1f9dcc;
            case 0x1F9DD0u: goto label_1f9dd0;
            case 0x1F9DD4u: goto label_1f9dd4;
            case 0x1F9DD8u: goto label_1f9dd8;
            case 0x1F9DDCu: goto label_1f9ddc;
            case 0x1F9DE0u: goto label_1f9de0;
            case 0x1F9DE4u: goto label_1f9de4;
            case 0x1F9DE8u: goto label_1f9de8;
            case 0x1F9DECu: goto label_1f9dec;
            case 0x1F9DF0u: goto label_1f9df0;
            case 0x1F9DF4u: goto label_1f9df4;
            case 0x1F9DF8u: goto label_1f9df8;
            case 0x1F9DFCu: goto label_1f9dfc;
            case 0x1F9E00u: goto label_1f9e00;
            case 0x1F9E04u: goto label_1f9e04;
            case 0x1F9E08u: goto label_1f9e08;
            case 0x1F9E0Cu: goto label_1f9e0c;
            case 0x1F9E10u: goto label_1f9e10;
            case 0x1F9E14u: goto label_1f9e14;
            case 0x1F9E18u: goto label_1f9e18;
            case 0x1F9E1Cu: goto label_1f9e1c;
            case 0x1F9E20u: goto label_1f9e20;
            case 0x1F9E24u: goto label_1f9e24;
            case 0x1F9E28u: goto label_1f9e28;
            case 0x1F9E2Cu: goto label_1f9e2c;
            case 0x1F9E30u: goto label_1f9e30;
            case 0x1F9E34u: goto label_1f9e34;
            case 0x1F9E38u: goto label_1f9e38;
            case 0x1F9E3Cu: goto label_1f9e3c;
            case 0x1F9E40u: goto label_1f9e40;
            case 0x1F9E44u: goto label_1f9e44;
            case 0x1F9E48u: goto label_1f9e48;
            case 0x1F9E4Cu: goto label_1f9e4c;
            case 0x1F9E50u: goto label_1f9e50;
            case 0x1F9E54u: goto label_1f9e54;
            case 0x1F9E58u: goto label_1f9e58;
            case 0x1F9E5Cu: goto label_1f9e5c;
            case 0x1F9E60u: goto label_1f9e60;
            case 0x1F9E64u: goto label_1f9e64;
            case 0x1F9E68u: goto label_1f9e68;
            case 0x1F9E6Cu: goto label_1f9e6c;
            case 0x1F9E70u: goto label_1f9e70;
            case 0x1F9E74u: goto label_1f9e74;
            case 0x1F9E78u: goto label_1f9e78;
            case 0x1F9E7Cu: goto label_1f9e7c;
            case 0x1F9E80u: goto label_1f9e80;
            case 0x1F9E84u: goto label_1f9e84;
            case 0x1F9E88u: goto label_1f9e88;
            case 0x1F9E8Cu: goto label_1f9e8c;
            case 0x1F9E90u: goto label_1f9e90;
            case 0x1F9E94u: goto label_1f9e94;
            case 0x1F9E98u: goto label_1f9e98;
            case 0x1F9E9Cu: goto label_1f9e9c;
            case 0x1F9EA0u: goto label_1f9ea0;
            case 0x1F9EA4u: goto label_1f9ea4;
            case 0x1F9EA8u: goto label_1f9ea8;
            case 0x1F9EACu: goto label_1f9eac;
            case 0x1F9EB0u: goto label_1f9eb0;
            case 0x1F9EB4u: goto label_1f9eb4;
            case 0x1F9EB8u: goto label_1f9eb8;
            case 0x1F9EBCu: goto label_1f9ebc;
            case 0x1F9EC0u: goto label_1f9ec0;
            case 0x1F9EC4u: goto label_1f9ec4;
            case 0x1F9EC8u: goto label_1f9ec8;
            case 0x1F9ECCu: goto label_1f9ecc;
            case 0x1F9ED0u: goto label_1f9ed0;
            case 0x1F9ED4u: goto label_1f9ed4;
            case 0x1F9ED8u: goto label_1f9ed8;
            case 0x1F9EDCu: goto label_1f9edc;
            case 0x1F9EE0u: goto label_1f9ee0;
            case 0x1F9EE4u: goto label_1f9ee4;
            case 0x1F9EE8u: goto label_1f9ee8;
            case 0x1F9EECu: goto label_1f9eec;
            case 0x1F9EF0u: goto label_1f9ef0;
            case 0x1F9EF4u: goto label_1f9ef4;
            case 0x1F9EF8u: goto label_1f9ef8;
            case 0x1F9EFCu: goto label_1f9efc;
            case 0x1F9F00u: goto label_1f9f00;
            case 0x1F9F04u: goto label_1f9f04;
            case 0x1F9F08u: goto label_1f9f08;
            case 0x1F9F0Cu: goto label_1f9f0c;
            case 0x1F9F10u: goto label_1f9f10;
            case 0x1F9F14u: goto label_1f9f14;
            case 0x1F9F18u: goto label_1f9f18;
            case 0x1F9F1Cu: goto label_1f9f1c;
            case 0x1F9F20u: goto label_1f9f20;
            case 0x1F9F24u: goto label_1f9f24;
            case 0x1F9F28u: goto label_1f9f28;
            case 0x1F9F2Cu: goto label_1f9f2c;
            case 0x1F9F30u: goto label_1f9f30;
            case 0x1F9F34u: goto label_1f9f34;
            case 0x1F9F38u: goto label_1f9f38;
            case 0x1F9F3Cu: goto label_1f9f3c;
            case 0x1F9F40u: goto label_1f9f40;
            case 0x1F9F44u: goto label_1f9f44;
            case 0x1F9F48u: goto label_1f9f48;
            case 0x1F9F4Cu: goto label_1f9f4c;
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F54u: goto label_1f9f54;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F5Cu: goto label_1f9f5c;
            case 0x1F9F60u: goto label_1f9f60;
            case 0x1F9F64u: goto label_1f9f64;
            case 0x1F9F68u: goto label_1f9f68;
            case 0x1F9F6Cu: goto label_1f9f6c;
            case 0x1F9F70u: goto label_1f9f70;
            case 0x1F9F74u: goto label_1f9f74;
            case 0x1F9F78u: goto label_1f9f78;
            case 0x1F9F7Cu: goto label_1f9f7c;
            case 0x1F9F80u: goto label_1f9f80;
            case 0x1F9F84u: goto label_1f9f84;
            case 0x1F9F88u: goto label_1f9f88;
            case 0x1F9F8Cu: goto label_1f9f8c;
            case 0x1F9F90u: goto label_1f9f90;
            case 0x1F9F94u: goto label_1f9f94;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9F9Cu: goto label_1f9f9c;
            case 0x1F9FA0u: goto label_1f9fa0;
            case 0x1F9FA4u: goto label_1f9fa4;
            case 0x1F9FA8u: goto label_1f9fa8;
            case 0x1F9FACu: goto label_1f9fac;
            case 0x1F9FB0u: goto label_1f9fb0;
            case 0x1F9FB4u: goto label_1f9fb4;
            case 0x1F9FB8u: goto label_1f9fb8;
            case 0x1F9FBCu: goto label_1f9fbc;
            case 0x1F9FC0u: goto label_1f9fc0;
            case 0x1F9FC4u: goto label_1f9fc4;
            case 0x1F9FC8u: goto label_1f9fc8;
            case 0x1F9FCCu: goto label_1f9fcc;
            case 0x1F9FD0u: goto label_1f9fd0;
            case 0x1F9FD4u: goto label_1f9fd4;
            case 0x1F9FD8u: goto label_1f9fd8;
            case 0x1F9FDCu: goto label_1f9fdc;
            case 0x1F9FE0u: goto label_1f9fe0;
            case 0x1F9FE4u: goto label_1f9fe4;
            case 0x1F9FE8u: goto label_1f9fe8;
            case 0x1F9FECu: goto label_1f9fec;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF4u: goto label_1f9ff4;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1F9FFCu: goto label_1f9ffc;
            case 0x1FA000u: goto label_1fa000;
            case 0x1FA004u: goto label_1fa004;
            case 0x1FA008u: goto label_1fa008;
            case 0x1FA00Cu: goto label_1fa00c;
            case 0x1FA010u: goto label_1fa010;
            case 0x1FA014u: goto label_1fa014;
            case 0x1FA018u: goto label_1fa018;
            case 0x1FA01Cu: goto label_1fa01c;
            case 0x1FA020u: goto label_1fa020;
            case 0x1FA024u: goto label_1fa024;
            case 0x1FA028u: goto label_1fa028;
            case 0x1FA02Cu: goto label_1fa02c;
            case 0x1FA030u: goto label_1fa030;
            case 0x1FA034u: goto label_1fa034;
            case 0x1FA038u: goto label_1fa038;
            case 0x1FA03Cu: goto label_1fa03c;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA044u: goto label_1fa044;
            case 0x1FA048u: goto label_1fa048;
            case 0x1FA04Cu: goto label_1fa04c;
            case 0x1FA050u: goto label_1fa050;
            case 0x1FA054u: goto label_1fa054;
            case 0x1FA058u: goto label_1fa058;
            case 0x1FA05Cu: goto label_1fa05c;
            case 0x1FA060u: goto label_1fa060;
            case 0x1FA064u: goto label_1fa064;
            case 0x1FA068u: goto label_1fa068;
            case 0x1FA06Cu: goto label_1fa06c;
            case 0x1FA070u: goto label_1fa070;
            case 0x1FA074u: goto label_1fa074;
            case 0x1FA078u: goto label_1fa078;
            case 0x1FA07Cu: goto label_1fa07c;
            case 0x1FA080u: goto label_1fa080;
            case 0x1FA084u: goto label_1fa084;
            case 0x1FA088u: goto label_1fa088;
            case 0x1FA08Cu: goto label_1fa08c;
            case 0x1FA090u: goto label_1fa090;
            case 0x1FA094u: goto label_1fa094;
            case 0x1FA098u: goto label_1fa098;
            case 0x1FA09Cu: goto label_1fa09c;
            case 0x1FA0A0u: goto label_1fa0a0;
            case 0x1FA0A4u: goto label_1fa0a4;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0ACu: goto label_1fa0ac;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0B4u: goto label_1fa0b4;
            case 0x1FA0B8u: goto label_1fa0b8;
            case 0x1FA0BCu: goto label_1fa0bc;
            case 0x1FA0C0u: goto label_1fa0c0;
            case 0x1FA0C4u: goto label_1fa0c4;
            case 0x1FA0C8u: goto label_1fa0c8;
            case 0x1FA0CCu: goto label_1fa0cc;
            case 0x1FA0D0u: goto label_1fa0d0;
            case 0x1FA0D4u: goto label_1fa0d4;
            case 0x1FA0D8u: goto label_1fa0d8;
            case 0x1FA0DCu: goto label_1fa0dc;
            case 0x1FA0E0u: goto label_1fa0e0;
            case 0x1FA0E4u: goto label_1fa0e4;
            case 0x1FA0E8u: goto label_1fa0e8;
            case 0x1FA0ECu: goto label_1fa0ec;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA0F4u: goto label_1fa0f4;
            case 0x1FA0F8u: goto label_1fa0f8;
            case 0x1FA0FCu: goto label_1fa0fc;
            case 0x1FA100u: goto label_1fa100;
            case 0x1FA104u: goto label_1fa104;
            case 0x1FA108u: goto label_1fa108;
            case 0x1FA10Cu: goto label_1fa10c;
            case 0x1FA110u: goto label_1fa110;
            case 0x1FA114u: goto label_1fa114;
            case 0x1FA118u: goto label_1fa118;
            case 0x1FA11Cu: goto label_1fa11c;
            case 0x1FA120u: goto label_1fa120;
            case 0x1FA124u: goto label_1fa124;
            case 0x1FA128u: goto label_1fa128;
            case 0x1FA12Cu: goto label_1fa12c;
            case 0x1FA130u: goto label_1fa130;
            case 0x1FA134u: goto label_1fa134;
            case 0x1FA138u: goto label_1fa138;
            case 0x1FA13Cu: goto label_1fa13c;
            case 0x1FA140u: goto label_1fa140;
            case 0x1FA144u: goto label_1fa144;
            case 0x1FA148u: goto label_1fa148;
            case 0x1FA14Cu: goto label_1fa14c;
            case 0x1FA150u: goto label_1fa150;
            case 0x1FA154u: goto label_1fa154;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA15Cu: goto label_1fa15c;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA164u: goto label_1fa164;
            case 0x1FA168u: goto label_1fa168;
            case 0x1FA16Cu: goto label_1fa16c;
            case 0x1FA170u: goto label_1fa170;
            case 0x1FA174u: goto label_1fa174;
            case 0x1FA178u: goto label_1fa178;
            case 0x1FA17Cu: goto label_1fa17c;
            case 0x1FA180u: goto label_1fa180;
            case 0x1FA184u: goto label_1fa184;
            case 0x1FA188u: goto label_1fa188;
            case 0x1FA18Cu: goto label_1fa18c;
            case 0x1FA190u: goto label_1fa190;
            case 0x1FA194u: goto label_1fa194;
            case 0x1FA198u: goto label_1fa198;
            case 0x1FA19Cu: goto label_1fa19c;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA1A4u: goto label_1fa1a4;
            case 0x1FA1A8u: goto label_1fa1a8;
            case 0x1FA1ACu: goto label_1fa1ac;
            case 0x1FA1B0u: goto label_1fa1b0;
            case 0x1FA1B4u: goto label_1fa1b4;
            case 0x1FA1B8u: goto label_1fa1b8;
            case 0x1FA1BCu: goto label_1fa1bc;
            case 0x1FA1C0u: goto label_1fa1c0;
            case 0x1FA1C4u: goto label_1fa1c4;
            case 0x1FA1C8u: goto label_1fa1c8;
            case 0x1FA1CCu: goto label_1fa1cc;
            case 0x1FA1D0u: goto label_1fa1d0;
            case 0x1FA1D4u: goto label_1fa1d4;
            case 0x1FA1D8u: goto label_1fa1d8;
            case 0x1FA1DCu: goto label_1fa1dc;
            case 0x1FA1E0u: goto label_1fa1e0;
            case 0x1FA1E4u: goto label_1fa1e4;
            case 0x1FA1E8u: goto label_1fa1e8;
            case 0x1FA1ECu: goto label_1fa1ec;
            case 0x1FA1F0u: goto label_1fa1f0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DECu; }
            if (ctx->pc != 0x1F9DECu) { return; }
        }
    }
    ctx->pc = 0x1F9DECu;
label_1f9dec:
    // 0x1f9dec: 0xc6200040
    ctx->pc = 0x1f9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9df0:
    // 0x1f9df0: 0xe620004c
    ctx->pc = 0x1f9df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_1f9df4:
    // 0x1f9df4: 0xc6200044
    ctx->pc = 0x1f9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9df8:
    // 0x1f9df8: 0xe6200050
    ctx->pc = 0x1f9df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1f9dfc:
    // 0x1f9dfc: 0xc6200048
    ctx->pc = 0x1f9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9e00:
    // 0x1f9e00: 0xe6200054
    ctx->pc = 0x1f9e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_1f9e04:
    // 0x1f9e04: 0xc6200014
    ctx->pc = 0x1f9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9e08:
    // 0x1f9e08: 0xe620001c
    ctx->pc = 0x1f9e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f9e0c:
    // 0x1f9e0c: 0xc60d0004
    ctx->pc = 0x1f9e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f9e10:
    // 0x1f9e10: 0xc60e0008
    ctx->pc = 0x1f9e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f9e14:
    // 0x1f9e14: 0xc06c202
label_1f9e18:
    if (ctx->pc == 0x1F9E18u) {
        ctx->pc = 0x1F9E18u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9E1Cu;
        goto label_1f9e1c;
    }
    ctx->pc = 0x1F9E14u;
    SET_GPR_U32(ctx, 31, 0x1F9E1Cu);
    ctx->pc = 0x1F9E18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E1Cu; }
        else if (ctx->pc != 0x1F9E1Cu) { ctx->pc = 0x1F9E1Cu; }
    }
    if (ctx->pc != 0x1F9E1Cu) { return; }
    ctx->pc = 0x1F9E1Cu;
label_1f9e1c:
    // 0x1f9e1c: 0x8e231c98
    ctx->pc = 0x1f9e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7320)));
label_1f9e20:
    // 0x1f9e20: 0x24020004
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f9e24:
    // 0x1f9e24: 0x1062002b
label_1f9e28:
    if (ctx->pc == 0x1F9E28u) {
        ctx->pc = 0x1F9E28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F9E2Cu;
        goto label_1f9e2c;
    }
    ctx->pc = 0x1F9E24u;
    {
        const bool branch_taken_0x1f9e24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9E28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1f9e24) {
            ctx->pc = 0x1F9ED4u;
            goto label_1f9ed4;
        }
    }
    ctx->pc = 0x1F9E2Cu;
label_1f9e2c:
    // 0x1f9e2c: 0x10620021
label_1f9e30:
    if (ctx->pc == 0x1F9E30u) {
        ctx->pc = 0x1F9E30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F9E34u;
        goto label_1f9e34;
    }
    ctx->pc = 0x1F9E2Cu;
    {
        const bool branch_taken_0x1f9e2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9E30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f9e2c) {
            ctx->pc = 0x1F9EB4u;
            goto label_1f9eb4;
        }
    }
    ctx->pc = 0x1F9E34u;
label_1f9e34:
    // 0x1f9e34: 0x10620017
label_1f9e38:
    if (ctx->pc == 0x1F9E38u) {
        ctx->pc = 0x1F9E38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9E3Cu;
        goto label_1f9e3c;
    }
    ctx->pc = 0x1F9E34u;
    {
        const bool branch_taken_0x1f9e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F9E38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f9e34) {
            ctx->pc = 0x1F9E94u;
            goto label_1f9e94;
        }
    }
    ctx->pc = 0x1F9E3Cu;
label_1f9e3c:
    // 0x1f9e3c: 0x1062000d
label_1f9e40:
    if (ctx->pc == 0x1F9E40u) {
        ctx->pc = 0x1F9E44u;
        goto label_1f9e44;
    }
    ctx->pc = 0x1F9E3Cu;
    {
        const bool branch_taken_0x1f9e3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f9e3c) {
            ctx->pc = 0x1F9E74u;
            goto label_1f9e74;
        }
    }
    ctx->pc = 0x1F9E44u;
label_1f9e44:
    // 0x1f9e44: 0x10600003
label_1f9e48:
    if (ctx->pc == 0x1F9E48u) {
        ctx->pc = 0x1F9E4Cu;
        goto label_1f9e4c;
    }
    ctx->pc = 0x1F9E44u;
    {
        const bool branch_taken_0x1f9e44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9e44) {
            ctx->pc = 0x1F9E54u;
            goto label_1f9e54;
        }
    }
    ctx->pc = 0x1F9E4Cu;
label_1f9e4c:
    // 0x1f9e4c: 0x10000029
label_1f9e50:
    if (ctx->pc == 0x1F9E50u) {
        ctx->pc = 0x1F9E50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9E54u;
        goto label_1f9e54;
    }
    ctx->pc = 0x1F9E4Cu;
    {
        const bool branch_taken_0x1f9e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9E50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x1f9e4c) {
            ctx->pc = 0x1F9EF4u;
            goto label_1f9ef4;
        }
    }
    ctx->pc = 0x1F9E54u;
label_1f9e54:
    // 0x1f9e54: 0xc06c09f
label_1f9e58:
    if (ctx->pc == 0x1F9E58u) {
        ctx->pc = 0x1F9E58u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9E5Cu;
        goto label_1f9e5c;
    }
    ctx->pc = 0x1F9E54u;
    SET_GPR_U32(ctx, 31, 0x1F9E5Cu);
    ctx->pc = 0x1F9E58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E5Cu; }
        else if (ctx->pc != 0x1F9E5Cu) { ctx->pc = 0x1F9E5Cu; }
    }
    if (ctx->pc != 0x1F9E5Cu) { return; }
    ctx->pc = 0x1F9E5Cu;
label_1f9e5c:
    // 0x1f9e5c: 0xc06c0fb
label_1f9e60:
    if (ctx->pc == 0x1F9E60u) {
        ctx->pc = 0x1F9E60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9E64u;
        goto label_1f9e64;
    }
    ctx->pc = 0x1F9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9E64u);
    ctx->pc = 0x1F9E60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E64u; }
        else if (ctx->pc != 0x1F9E64u) { ctx->pc = 0x1F9E64u; }
    }
    if (ctx->pc != 0x1F9E64u) { return; }
    ctx->pc = 0x1F9E64u;
label_1f9e64:
    // 0x1f9e64: 0xc06c157
label_1f9e68:
    if (ctx->pc == 0x1F9E68u) {
        ctx->pc = 0x1F9E68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9E6Cu;
        goto label_1f9e6c;
    }
    ctx->pc = 0x1F9E64u;
    SET_GPR_U32(ctx, 31, 0x1F9E6Cu);
    ctx->pc = 0x1F9E68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E6Cu; }
        else if (ctx->pc != 0x1F9E6Cu) { ctx->pc = 0x1F9E6Cu; }
    }
    if (ctx->pc != 0x1F9E6Cu) { return; }
    ctx->pc = 0x1F9E6Cu;
label_1f9e6c:
    // 0x1f9e6c: 0x10000028
label_1f9e70:
    if (ctx->pc == 0x1F9E70u) {
        ctx->pc = 0x1F9E70u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9E74u;
        goto label_1f9e74;
    }
    ctx->pc = 0x1F9E6Cu;
    {
        const bool branch_taken_0x1f9e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F9E70u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x1f9e6c) {
            ctx->pc = 0x1F9F10u;
            goto label_1f9f10;
        }
    }
    ctx->pc = 0x1F9E74u;
label_1f9e74:
    // 0x1f9e74: 0xc06c09f
label_1f9e78:
    if (ctx->pc == 0x1F9E78u) {
        ctx->pc = 0x1F9E78u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9E7Cu;
        goto label_1f9e7c;
    }
    ctx->pc = 0x1F9E74u;
    SET_GPR_U32(ctx, 31, 0x1F9E7Cu);
    ctx->pc = 0x1F9E78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E7Cu; }
        else if (ctx->pc != 0x1F9E7Cu) { ctx->pc = 0x1F9E7Cu; }
    }
    if (ctx->pc != 0x1F9E7Cu) { return; }
    ctx->pc = 0x1F9E7Cu;
label_1f9e7c:
    // 0x1f9e7c: 0xc06c157
label_1f9e80:
    if (ctx->pc == 0x1F9E80u) {
        ctx->pc = 0x1F9E80u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9E84u;
        goto label_1f9e84;
    }
    ctx->pc = 0x1F9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F9E84u);
    ctx->pc = 0x1F9E80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E84u; }
        else if (ctx->pc != 0x1F9E84u) { ctx->pc = 0x1F9E84u; }
    }
    if (ctx->pc != 0x1F9E84u) { return; }
    ctx->pc = 0x1F9E84u;
label_1f9e84:
    // 0x1f9e84: 0xc06c0fb
label_1f9e88:
    if (ctx->pc == 0x1F9E88u) {
        ctx->pc = 0x1F9E88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9E8Cu;
        goto label_1f9e8c;
    }
    ctx->pc = 0x1F9E84u;
    SET_GPR_U32(ctx, 31, 0x1F9E8Cu);
    ctx->pc = 0x1F9E88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E8Cu; }
        else if (ctx->pc != 0x1F9E8Cu) { ctx->pc = 0x1F9E8Cu; }
    }
    if (ctx->pc != 0x1F9E8Cu) { return; }
    ctx->pc = 0x1F9E8Cu;
label_1f9e8c:
    // 0x1f9e8c: 0x1000001f
label_1f9e90:
    if (ctx->pc == 0x1F9E90u) {
        ctx->pc = 0x1F9E94u;
        goto label_1f9e94;
    }
    ctx->pc = 0x1F9E8Cu;
    {
        const bool branch_taken_0x1f9e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9e8c) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9E94u;
label_1f9e94:
    // 0x1f9e94: 0xc06c0fb
label_1f9e98:
    if (ctx->pc == 0x1F9E98u) {
        ctx->pc = 0x1F9E98u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9E9Cu;
        goto label_1f9e9c;
    }
    ctx->pc = 0x1F9E94u;
    SET_GPR_U32(ctx, 31, 0x1F9E9Cu);
    ctx->pc = 0x1F9E98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E9Cu; }
        else if (ctx->pc != 0x1F9E9Cu) { ctx->pc = 0x1F9E9Cu; }
    }
    if (ctx->pc != 0x1F9E9Cu) { return; }
    ctx->pc = 0x1F9E9Cu;
label_1f9e9c:
    // 0x1f9e9c: 0xc06c09f
label_1f9ea0:
    if (ctx->pc == 0x1F9EA0u) {
        ctx->pc = 0x1F9EA0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9EA4u;
        goto label_1f9ea4;
    }
    ctx->pc = 0x1F9E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F9EA4u);
    ctx->pc = 0x1F9EA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EA4u; }
        else if (ctx->pc != 0x1F9EA4u) { ctx->pc = 0x1F9EA4u; }
    }
    if (ctx->pc != 0x1F9EA4u) { return; }
    ctx->pc = 0x1F9EA4u;
label_1f9ea4:
    // 0x1f9ea4: 0xc06c157
label_1f9ea8:
    if (ctx->pc == 0x1F9EA8u) {
        ctx->pc = 0x1F9EA8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9EACu;
        goto label_1f9eac;
    }
    ctx->pc = 0x1F9EA4u;
    SET_GPR_U32(ctx, 31, 0x1F9EACu);
    ctx->pc = 0x1F9EA8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EACu; }
        else if (ctx->pc != 0x1F9EACu) { ctx->pc = 0x1F9EACu; }
    }
    if (ctx->pc != 0x1F9EACu) { return; }
    ctx->pc = 0x1F9EACu;
label_1f9eac:
    // 0x1f9eac: 0x10000017
label_1f9eb0:
    if (ctx->pc == 0x1F9EB0u) {
        ctx->pc = 0x1F9EB4u;
        goto label_1f9eb4;
    }
    ctx->pc = 0x1F9EACu;
    {
        const bool branch_taken_0x1f9eac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9eac) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9EB4u;
label_1f9eb4:
    // 0x1f9eb4: 0xc06c0fb
label_1f9eb8:
    if (ctx->pc == 0x1F9EB8u) {
        ctx->pc = 0x1F9EB8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9EBCu;
        goto label_1f9ebc;
    }
    ctx->pc = 0x1F9EB4u;
    SET_GPR_U32(ctx, 31, 0x1F9EBCu);
    ctx->pc = 0x1F9EB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EBCu; }
        else if (ctx->pc != 0x1F9EBCu) { ctx->pc = 0x1F9EBCu; }
    }
    if (ctx->pc != 0x1F9EBCu) { return; }
    ctx->pc = 0x1F9EBCu;
label_1f9ebc:
    // 0x1f9ebc: 0xc06c157
label_1f9ec0:
    if (ctx->pc == 0x1F9EC0u) {
        ctx->pc = 0x1F9EC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9EC4u;
        goto label_1f9ec4;
    }
    ctx->pc = 0x1F9EBCu;
    SET_GPR_U32(ctx, 31, 0x1F9EC4u);
    ctx->pc = 0x1F9EC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EC4u; }
        else if (ctx->pc != 0x1F9EC4u) { ctx->pc = 0x1F9EC4u; }
    }
    if (ctx->pc != 0x1F9EC4u) { return; }
    ctx->pc = 0x1F9EC4u;
label_1f9ec4:
    // 0x1f9ec4: 0xc06c09f
label_1f9ec8:
    if (ctx->pc == 0x1F9EC8u) {
        ctx->pc = 0x1F9EC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9ECCu;
        goto label_1f9ecc;
    }
    ctx->pc = 0x1F9EC4u;
    SET_GPR_U32(ctx, 31, 0x1F9ECCu);
    ctx->pc = 0x1F9EC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9ECCu; }
        else if (ctx->pc != 0x1F9ECCu) { ctx->pc = 0x1F9ECCu; }
    }
    if (ctx->pc != 0x1F9ECCu) { return; }
    ctx->pc = 0x1F9ECCu;
label_1f9ecc:
    // 0x1f9ecc: 0x1000000f
label_1f9ed0:
    if (ctx->pc == 0x1F9ED0u) {
        ctx->pc = 0x1F9ED4u;
        goto label_1f9ed4;
    }
    ctx->pc = 0x1F9ECCu;
    {
        const bool branch_taken_0x1f9ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9ecc) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9ED4u;
label_1f9ed4:
    // 0x1f9ed4: 0xc06c157
label_1f9ed8:
    if (ctx->pc == 0x1F9ED8u) {
        ctx->pc = 0x1F9ED8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1F9EDCu;
        goto label_1f9edc;
    }
    ctx->pc = 0x1F9ED4u;
    SET_GPR_U32(ctx, 31, 0x1F9EDCu);
    ctx->pc = 0x1F9ED8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EDCu; }
        else if (ctx->pc != 0x1F9EDCu) { ctx->pc = 0x1F9EDCu; }
    }
    if (ctx->pc != 0x1F9EDCu) { return; }
    ctx->pc = 0x1F9EDCu;
label_1f9edc:
    // 0x1f9edc: 0xc06c09f
label_1f9ee0:
    if (ctx->pc == 0x1F9EE0u) {
        ctx->pc = 0x1F9EE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9EE4u;
        goto label_1f9ee4;
    }
    ctx->pc = 0x1F9EDCu;
    SET_GPR_U32(ctx, 31, 0x1F9EE4u);
    ctx->pc = 0x1F9EE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EE4u; }
        else if (ctx->pc != 0x1F9EE4u) { ctx->pc = 0x1F9EE4u; }
    }
    if (ctx->pc != 0x1F9EE4u) { return; }
    ctx->pc = 0x1F9EE4u;
label_1f9ee4:
    // 0x1f9ee4: 0xc06c0fb
label_1f9ee8:
    if (ctx->pc == 0x1F9EE8u) {
        ctx->pc = 0x1F9EE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9EECu;
        goto label_1f9eec;
    }
    ctx->pc = 0x1F9EE4u;
    SET_GPR_U32(ctx, 31, 0x1F9EECu);
    ctx->pc = 0x1F9EE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EECu; }
        else if (ctx->pc != 0x1F9EECu) { ctx->pc = 0x1F9EECu; }
    }
    if (ctx->pc != 0x1F9EECu) { return; }
    ctx->pc = 0x1F9EECu;
label_1f9eec:
    // 0x1f9eec: 0x10000007
label_1f9ef0:
    if (ctx->pc == 0x1F9EF0u) {
        ctx->pc = 0x1F9EF4u;
        goto label_1f9ef4;
    }
    ctx->pc = 0x1F9EECu;
    {
        const bool branch_taken_0x1f9eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9eec) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9EF4u;
label_1f9ef4:
    // 0x1f9ef4: 0xc06c157
label_1f9ef8:
    if (ctx->pc == 0x1F9EF8u) {
        ctx->pc = 0x1F9EFCu;
        goto label_1f9efc;
    }
    ctx->pc = 0x1F9EF4u;
    SET_GPR_U32(ctx, 31, 0x1F9EFCu);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9EFCu; }
        else if (ctx->pc != 0x1F9EFCu) { ctx->pc = 0x1F9EFCu; }
    }
    if (ctx->pc != 0x1F9EFCu) { return; }
    ctx->pc = 0x1F9EFCu;
label_1f9efc:
    // 0x1f9efc: 0xc06c0fb
label_1f9f00:
    if (ctx->pc == 0x1F9F00u) {
        ctx->pc = 0x1F9F00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1F9F04u;
        goto label_1f9f04;
    }
    ctx->pc = 0x1F9EFCu;
    SET_GPR_U32(ctx, 31, 0x1F9F04u);
    ctx->pc = 0x1F9F00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F04u; }
        else if (ctx->pc != 0x1F9F04u) { ctx->pc = 0x1F9F04u; }
    }
    if (ctx->pc != 0x1F9F04u) { return; }
    ctx->pc = 0x1F9F04u;
label_1f9f04:
    // 0x1f9f04: 0xc06c09f
label_1f9f08:
    if (ctx->pc == 0x1F9F08u) {
        ctx->pc = 0x1F9F08u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1F9F0Cu;
        goto label_1f9f0c;
    }
    ctx->pc = 0x1F9F04u;
    SET_GPR_U32(ctx, 31, 0x1F9F0Cu);
    ctx->pc = 0x1F9F08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F0Cu; }
        else if (ctx->pc != 0x1F9F0Cu) { ctx->pc = 0x1F9F0Cu; }
    }
    if (ctx->pc != 0x1F9F0Cu) { return; }
    ctx->pc = 0x1F9F0Cu;
label_1f9f0c:
    // 0x1f9f0c: 0xc62c1ca0
    ctx->pc = 0x1f9f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f9f10:
    // 0x1f9f10: 0x46006346
    ctx->pc = 0x1f9f10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9f14:
    // 0x1f9f14: 0xc06c1b3
label_1f9f18:
    if (ctx->pc == 0x1F9F18u) {
        ctx->pc = 0x1F9F18u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9F1Cu;
        goto label_1f9f1c;
    }
    ctx->pc = 0x1F9F14u;
    SET_GPR_U32(ctx, 31, 0x1F9F1Cu);
    ctx->pc = 0x1F9F18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F1Cu; }
        else if (ctx->pc != 0x1F9F1Cu) { ctx->pc = 0x1F9F1Cu; }
    }
    if (ctx->pc != 0x1F9F1Cu) { return; }
    ctx->pc = 0x1F9F1Cu;
label_1f9f1c:
    // 0x1f9f1c: 0x8e231c9c
    ctx->pc = 0x1f9f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7324)));
label_1f9f20:
    // 0x1f9f20: 0x30620010
    ctx->pc = 0x1f9f20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1f9f24:
    // 0x1f9f24: 0x1440000f
label_1f9f28:
    if (ctx->pc == 0x1F9F28u) {
        ctx->pc = 0x1F9F28u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1F9F2Cu;
        goto label_1f9f2c;
    }
    ctx->pc = 0x1F9F24u;
    {
        const bool branch_taken_0x1f9f24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F9F28u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 120));
        if (branch_taken_0x1f9f24) {
            ctx->pc = 0x1F9F64u;
            goto label_1f9f64;
        }
    }
    ctx->pc = 0x1F9F2Cu;
label_1f9f2c:
    // 0x1f9f2c: 0x30620002
    ctx->pc = 0x1f9f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
label_1f9f30:
    // 0x1f9f30: 0x10400007
label_1f9f34:
    if (ctx->pc == 0x1F9F34u) {
        ctx->pc = 0x1F9F38u;
        goto label_1f9f38;
    }
    ctx->pc = 0x1F9F30u;
    {
        const bool branch_taken_0x1f9f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9f30) {
            ctx->pc = 0x1F9F50u;
            goto label_1f9f50;
        }
    }
    ctx->pc = 0x1F9F38u;
label_1f9f38:
    // 0x1f9f38: 0xc62d0044
    ctx->pc = 0x1f9f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f9f3c:
    // 0x1f9f3c: 0x44806000
    ctx->pc = 0x1f9f3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_1f9f40:
    // 0x1f9f40: 0xc06c202
label_1f9f44:
    if (ctx->pc == 0x1F9F44u) {
        ctx->pc = 0x1F9F44u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9F48u;
        goto label_1f9f48;
    }
    ctx->pc = 0x1F9F40u;
    SET_GPR_U32(ctx, 31, 0x1F9F48u);
    ctx->pc = 0x1F9F44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F48u; }
        else if (ctx->pc != 0x1F9F48u) { ctx->pc = 0x1F9F48u; }
    }
    if (ctx->pc != 0x1F9F48u) { return; }
    ctx->pc = 0x1F9F48u;
label_1f9f48:
    // 0x1f9f48: 0x10000005
label_1f9f4c:
    if (ctx->pc == 0x1F9F4Cu) {
        ctx->pc = 0x1F9F50u;
        goto label_1f9f50;
    }
    ctx->pc = 0x1F9F48u;
    {
        const bool branch_taken_0x1f9f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9f48) {
            ctx->pc = 0x1F9F60u;
            goto label_1f9f60;
        }
    }
    ctx->pc = 0x1F9F50u;
label_1f9f50:
    // 0x1f9f50: 0xc62d0044
    ctx->pc = 0x1f9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f9f54:
    // 0x1f9f54: 0xc62e0048
    ctx->pc = 0x1f9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f9f58:
    // 0x1f9f58: 0xc06c202
label_1f9f5c:
    if (ctx->pc == 0x1F9F5Cu) {
        ctx->pc = 0x1F9F5Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F9F60u;
        goto label_1f9f60;
    }
    ctx->pc = 0x1F9F58u;
    SET_GPR_U32(ctx, 31, 0x1F9F60u);
    ctx->pc = 0x1F9F5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F60u; }
        else if (ctx->pc != 0x1F9F60u) { ctx->pc = 0x1F9F60u; }
    }
    if (ctx->pc != 0x1F9F60u) { return; }
    ctx->pc = 0x1F9F60u;
label_1f9f60:
    // 0x1f9f60: 0x27b40078
    ctx->pc = 0x1f9f60u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 120));
label_1f9f64:
    // 0x1f9f64: 0xc06c157
label_1f9f68:
    if (ctx->pc == 0x1F9F68u) {
        ctx->pc = 0x1F9F68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1F9F6Cu;
        goto label_1f9f6c;
    }
    ctx->pc = 0x1F9F64u;
    SET_GPR_U32(ctx, 31, 0x1F9F6Cu);
    ctx->pc = 0x1F9F68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F6Cu; }
        else if (ctx->pc != 0x1F9F6Cu) { ctx->pc = 0x1F9F6Cu; }
    }
    if (ctx->pc != 0x1F9F6Cu) { return; }
    ctx->pc = 0x1F9F6Cu;
label_1f9f6c:
    // 0x1f9f6c: 0x27b00074
    ctx->pc = 0x1f9f6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 116));
label_1f9f70:
    // 0x1f9f70: 0xc06c0fb
label_1f9f74:
    if (ctx->pc == 0x1F9F74u) {
        ctx->pc = 0x1F9F74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1F9F78u;
        goto label_1f9f78;
    }
    ctx->pc = 0x1F9F70u;
    SET_GPR_U32(ctx, 31, 0x1F9F78u);
    ctx->pc = 0x1F9F74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F78u; }
        else if (ctx->pc != 0x1F9F78u) { ctx->pc = 0x1F9F78u; }
    }
    if (ctx->pc != 0x1F9F78u) { return; }
    ctx->pc = 0x1F9F78u;
label_1f9f78:
    // 0x1f9f78: 0xc06c09f
label_1f9f7c:
    if (ctx->pc == 0x1F9F7Cu) {
        ctx->pc = 0x1F9F7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1F9F80u;
        goto label_1f9f80;
    }
    ctx->pc = 0x1F9F78u;
    SET_GPR_U32(ctx, 31, 0x1F9F80u);
    ctx->pc = 0x1F9F7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F80u; }
        else if (ctx->pc != 0x1F9F80u) { ctx->pc = 0x1F9F80u; }
    }
    if (ctx->pc != 0x1F9F80u) { return; }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0x3c020050
    ctx->pc = 0x1f9f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f9f84:
    // 0x1f9f84: 0xc07ce18
label_1f9f88:
    if (ctx->pc == 0x1F9F88u) {
        ctx->pc = 0x1F9F88u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1F9F8Cu;
        goto label_1f9f8c;
    }
    ctx->pc = 0x1F9F84u;
    SET_GPR_U32(ctx, 31, 0x1F9F8Cu);
    ctx->pc = 0x1F9F88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F8Cu; }
        else if (ctx->pc != 0x1F9F8Cu) { ctx->pc = 0x1F9F8Cu; }
    }
    if (ctx->pc != 0x1F9F8Cu) { return; }
    ctx->pc = 0x1F9F8Cu;
label_1f9f8c:
    // 0x1f9f8c: 0x1c400008
label_1f9f90:
    if (ctx->pc == 0x1F9F90u) {
        ctx->pc = 0x1F9F94u;
        goto label_1f9f94;
    }
    ctx->pc = 0x1F9F8Cu;
    {
        const bool branch_taken_0x1f9f8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1f9f8c) {
            ctx->pc = 0x1F9FB0u;
            goto label_1f9fb0;
        }
    }
    ctx->pc = 0x1F9F94u;
label_1f9f94:
    // 0x1f9f94: 0x8e440000
    ctx->pc = 0x1f9f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9f98:
    // 0x1f9f98: 0x8fa30070
    ctx->pc = 0x1f9f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f9f9c:
    // 0x1f9f9c: 0xac830004
    ctx->pc = 0x1f9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f9fa0:
    // 0x1f9fa0: 0x8e030000
    ctx->pc = 0x1f9fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9fa4:
    // 0x1f9fa4: 0xac830008
    ctx->pc = 0x1f9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1f9fa8:
    // 0x1f9fa8: 0x8e830000
    ctx->pc = 0x1f9fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f9fac:
    // 0x1f9fac: 0xac83000c
    ctx->pc = 0x1f9facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1f9fb0:
    // 0x1f9fb0: 0x8224003c
    ctx->pc = 0x1f9fb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_1f9fb4:
    // 0x1f9fb4: 0x24030001
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f9fb8:
    // 0x1f9fb8: 0x1483005f
label_1f9fbc:
    if (ctx->pc == 0x1F9FBCu) {
        ctx->pc = 0x1F9FBCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F9FC0u;
        goto label_1f9fc0;
    }
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F9FBCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1FA138u;
            goto label_1fa138;
        }
    }
    ctx->pc = 0x1F9FC0u;
label_1f9fc0:
    // 0x1f9fc0: 0x8222003b
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1f9fc4:
    // 0x1f9fc4: 0x30420003
    ctx->pc = 0x1f9fc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_1f9fc8:
    // 0x1f9fc8: 0x14400014
label_1f9fcc:
    if (ctx->pc == 0x1F9FCCu) {
        ctx->pc = 0x1F9FD0u;
        goto label_1f9fd0;
    }
    ctx->pc = 0x1F9FC8u;
    {
        const bool branch_taken_0x1f9fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f9fc8) {
            ctx->pc = 0x1FA01Cu;
            goto label_1fa01c;
        }
    }
    ctx->pc = 0x1F9FD0u;
label_1f9fd0:
    // 0x1f9fd0: 0x8e220008
    ctx->pc = 0x1f9fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f9fd4:
    // 0x1f9fd4: 0x3c0101fb
    ctx->pc = 0x1f9fd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_1f9fd8:
    // 0x1f9fd8: 0xc6200010
    ctx->pc = 0x1f9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9fdc:
    // 0x1f9fdc: 0x21040
    ctx->pc = 0x1f9fdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1f9fe0:
    // 0x1f9fe0: 0x410821
    ctx->pc = 0x1f9fe0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f9fe4:
    // 0x1f9fe4: 0x842273e4
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_1f9fe8:
    // 0x1f9fe8: 0x44820800
    ctx->pc = 0x1f9fe8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1f9fec:
    // 0x1f9fec: 0x0
    ctx->pc = 0x1f9fecu;
    // NOP
label_1f9ff0:
    // 0x1f9ff0: 0x46800860
    ctx->pc = 0x1f9ff0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1f9ff4:
    // 0x1f9ff4: 0x46010034
    ctx->pc = 0x1f9ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9ff8:
    // 0x1f9ff8: 0x0
    ctx->pc = 0x1f9ff8u;
    // NOP
label_1f9ffc:
    // 0x1f9ffc: 0x45010007
label_1fa000:
    if (ctx->pc == 0x1FA000u) {
        ctx->pc = 0x1FA004u;
        goto label_1fa004;
    }
    ctx->pc = 0x1F9FFCu;
    {
        const bool branch_taken_0x1f9ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9ffc) {
            ctx->pc = 0x1FA01Cu;
            goto label_1fa01c;
        }
    }
    ctx->pc = 0x1FA004u;
label_1fa004:
    // 0x1fa004: 0xa6230030
    ctx->pc = 0x1fa004u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_1fa008:
    // 0x1fa008: 0x8222003b
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1fa00c:
    // 0x1fa00c: 0x34420005
    ctx->pc = 0x1fa00cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
label_1fa010:
    // 0x1fa010: 0xa222003b
    ctx->pc = 0x1fa010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 2));
label_1fa014:
    // 0x1fa014: 0x86220038
    ctx->pc = 0x1fa014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_1fa018:
    // 0x1fa018: 0xa6220034
    ctx->pc = 0x1fa018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_1fa01c:
    // 0x1fa01c: 0x8223003b
    ctx->pc = 0x1fa01cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1fa020:
    // 0x1fa020: 0x30620001
    ctx->pc = 0x1fa020u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_1fa024:
    // 0x1fa024: 0x1040003e
label_1fa028:
    if (ctx->pc == 0x1FA028u) {
        ctx->pc = 0x1FA028u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA02Cu;
        goto label_1fa02c;
    }
    ctx->pc = 0x1FA024u;
    {
        const bool branch_taken_0x1fa024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA028u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fa024) {
            ctx->pc = 0x1FA120u;
            goto label_1fa120;
        }
    }
    ctx->pc = 0x1FA02Cu;
label_1fa02c:
    // 0x1fa02c: 0x30620004
    ctx->pc = 0x1fa02cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_1fa030:
    // 0x1fa030: 0x1040001b
label_1fa034:
    if (ctx->pc == 0x1FA034u) {
        ctx->pc = 0x1FA034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        ctx->pc = 0x1FA038u;
        goto label_1fa038;
    }
    ctx->pc = 0x1FA030u;
    {
        const bool branch_taken_0x1fa030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1fa030) {
            ctx->pc = 0x1FA0A0u;
            goto label_1fa0a0;
        }
    }
    ctx->pc = 0x1FA038u;
label_1fa038:
    // 0x1fa038: 0x3c020050
    ctx->pc = 0x1fa038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1fa03c:
    // 0x1fa03c: 0xc07ce18
label_1fa040:
    if (ctx->pc == 0x1FA040u) {
        ctx->pc = 0x1FA040u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1FA044u;
        goto label_1fa044;
    }
    ctx->pc = 0x1FA03Cu;
    SET_GPR_U32(ctx, 31, 0x1FA044u);
    ctx->pc = 0x1FA040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA044u; }
        else if (ctx->pc != 0x1FA044u) { ctx->pc = 0x1FA044u; }
    }
    if (ctx->pc != 0x1FA044u) { return; }
    ctx->pc = 0x1FA044u;
label_1fa044:
    // 0x1fa044: 0x1c400011
label_1fa048:
    if (ctx->pc == 0x1FA048u) {
        ctx->pc = 0x1FA048u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA04Cu;
        goto label_1fa04c;
    }
    ctx->pc = 0x1FA044u;
    {
        const bool branch_taken_0x1fa044 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FA048u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fa044) {
            ctx->pc = 0x1FA08Cu;
            goto label_1fa08c;
        }
    }
    ctx->pc = 0x1FA04Cu;
label_1fa04c:
    // 0x1fa04c: 0x86230034
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_1fa050:
    // 0x1fa050: 0x86240030
    ctx->pc = 0x1fa050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_1fa054:
    // 0x1fa054: 0x2462ffff
    ctx->pc = 0x1fa054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fa058:
    // 0x1fa058: 0x1483000b
label_1fa05c:
    if (ctx->pc == 0x1FA05Cu) {
        ctx->pc = 0x1FA05Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FA060u;
        goto label_1fa060;
    }
    ctx->pc = 0x1FA058u;
    {
        const bool branch_taken_0x1fa058 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FA05Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1fa058) {
            ctx->pc = 0x1FA088u;
            goto label_1fa088;
        }
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0xa220003c
    ctx->pc = 0x1fa060u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
label_1fa064:
    // 0x1fa064: 0xae510004
    ctx->pc = 0x1fa064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1fa068:
    // 0x1fa068: 0x26220070
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 112));
label_1fa06c:
    // 0x1fa06c: 0xae420000
    ctx->pc = 0x1fa06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fa070:
    // 0x1fa070: 0x72402628
    ctx->pc = 0x1fa070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1fa074:
    // 0x1fa074: 0x70002e28
    ctx->pc = 0x1fa074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fa078:
    // 0x1fa078: 0xc07ec0c
label_1fa07c:
    if (ctx->pc == 0x1FA07Cu) {
        ctx->pc = 0x1FA07Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA080u;
        goto label_1fa080;
    }
    ctx->pc = 0x1FA078u;
    SET_GPR_U32(ctx, 31, 0x1FA080u);
    ctx->pc = 0x1FA07Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNum__12BodyMgrClassFii_0x1fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA080u; }
        else if (ctx->pc != 0x1FA080u) { ctx->pc = 0x1FA080u; }
    }
    if (ctx->pc != 0x1FA080u) { return; }
    ctx->pc = 0x1FA080u;
label_1fa080:
    // 0x1fa080: 0x1000002c
label_1fa084:
    if (ctx->pc == 0x1FA084u) {
        ctx->pc = 0x1FA088u;
        goto label_1fa088;
    }
    ctx->pc = 0x1FA080u;
    {
        const bool branch_taken_0x1fa080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa080) {
            ctx->pc = 0x1FA134u;
            goto label_1fa134;
        }
    }
    ctx->pc = 0x1FA088u;
label_1fa088:
    // 0x1fa088: 0x72402628
    ctx->pc = 0x1fa088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1fa08c:
    // 0x1fa08c: 0x24050001
    ctx->pc = 0x1fa08cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1fa090:
    // 0x1fa090: 0xc07eb74
label_1fa094:
    if (ctx->pc == 0x1FA094u) {
        ctx->pc = 0x1FA094u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA098u;
        goto label_1fa098;
    }
    ctx->pc = 0x1FA090u;
    SET_GPR_U32(ctx, 31, 0x1FA098u);
    ctx->pc = 0x1FA094u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FADD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSupplement__12BodyMgrClassFii_0x1fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA098u; }
        else if (ctx->pc != 0x1FA098u) { ctx->pc = 0x1FA098u; }
    }
    if (ctx->pc != 0x1FA098u) { return; }
    ctx->pc = 0x1FA098u;
label_1fa098:
    // 0x1fa098: 0x10000026
label_1fa09c:
    if (ctx->pc == 0x1FA09Cu) {
        ctx->pc = 0x1FA0A0u;
        goto label_1fa0a0;
    }
    ctx->pc = 0x1FA098u;
    {
        const bool branch_taken_0x1fa098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa098) {
            ctx->pc = 0x1FA134u;
            goto label_1fa134;
        }
    }
    ctx->pc = 0x1FA0A0u;
label_1fa0a0:
    // 0x1fa0a0: 0xc07ce18
label_1fa0a4:
    if (ctx->pc == 0x1FA0A4u) {
        ctx->pc = 0x1FA0A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1FA0A8u;
        goto label_1fa0a8;
    }
    ctx->pc = 0x1FA0A0u;
    SET_GPR_U32(ctx, 31, 0x1FA0A8u);
    ctx->pc = 0x1FA0A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA0A8u; }
        else if (ctx->pc != 0x1FA0A8u) { ctx->pc = 0x1FA0A8u; }
    }
    if (ctx->pc != 0x1FA0A8u) { return; }
    ctx->pc = 0x1FA0A8u;
label_1fa0a8:
    // 0x1fa0a8: 0x1c400022
label_1fa0ac:
    if (ctx->pc == 0x1FA0ACu) {
        ctx->pc = 0x1FA0B0u;
        goto label_1fa0b0;
    }
    ctx->pc = 0x1FA0A8u;
    {
        const bool branch_taken_0x1fa0a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fa0a8) {
            ctx->pc = 0x1FA134u;
            goto label_1fa134;
        }
    }
    ctx->pc = 0x1FA0B0u;
label_1fa0b0:
    // 0x1fa0b0: 0x86230030
    ctx->pc = 0x1fa0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_1fa0b4:
    // 0x1fa0b4: 0x24630001
    ctx->pc = 0x1fa0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1fa0b8:
    // 0x1fa0b8: 0x3243c
    ctx->pc = 0x1fa0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_1fa0bc:
    // 0x1fa0bc: 0xa6230030
    ctx->pc = 0x1fa0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_1fa0c0:
    // 0x1fa0c0: 0x86230034
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_1fa0c4:
    // 0x1fa0c4: 0x4243f
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1fa0c8:
    // 0x1fa0c8: 0x1483001a
label_1fa0cc:
    if (ctx->pc == 0x1FA0CCu) {
        ctx->pc = 0x1FA0D0u;
        goto label_1fa0d0;
    }
    ctx->pc = 0x1FA0C8u;
    {
        const bool branch_taken_0x1fa0c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fa0c8) {
            ctx->pc = 0x1FA134u;
            goto label_1fa134;
        }
    }
    ctx->pc = 0x1FA0D0u;
label_1fa0d0:
    // 0x1fa0d0: 0x8223003b
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1fa0d4:
    // 0x1fa0d4: 0x2402fffe
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_1fa0d8:
    // 0x1fa0d8: 0x621024
    ctx->pc = 0x1fa0d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fa0dc:
    // 0x1fa0dc: 0xa222003b
    ctx->pc = 0x1fa0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 2));
label_1fa0e0:
    // 0x1fa0e0: 0xc6200018
    ctx->pc = 0x1fa0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa0e4:
    // 0x1fa0e4: 0xe6200010
    ctx->pc = 0x1fa0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1fa0e8:
    // 0x1fa0e8: 0xc6200018
    ctx->pc = 0x1fa0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa0ec:
    // 0x1fa0ec: 0x46000024
    ctx->pc = 0x1fa0ecu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1fa0f0:
    // 0x1fa0f0: 0x44030000
    ctx->pc = 0x1fa0f0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_1fa0f4:
    // 0x1fa0f4: 0x0
    ctx->pc = 0x1fa0f4u;
    // NOP
label_1fa0f8:
    // 0x1fa0f8: 0x4610003
label_1fa0fc:
    if (ctx->pc == 0x1FA0FCu) {
        ctx->pc = 0x1FA0FCu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1FA100u;
        goto label_1fa100;
    }
    ctx->pc = 0x1FA0F8u;
    {
        const bool branch_taken_0x1fa0f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FA0FCu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1fa0f8) {
            ctx->pc = 0x1FA108u;
            goto label_1fa108;
        }
    }
    ctx->pc = 0x1FA100u;
label_1fa100:
    // 0x1fa100: 0x24620001
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1fa104:
    // 0x1fa104: 0x21043
    ctx->pc = 0x1fa104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1fa108:
    // 0x1fa108: 0xae220028
    ctx->pc = 0x1fa108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1fa10c:
    // 0x1fa10c: 0x72402628
    ctx->pc = 0x1fa10cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1fa110:
    // 0x1fa110: 0xc07e924
label_1fa114:
    if (ctx->pc == 0x1FA114u) {
        ctx->pc = 0x1FA114u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FA118u;
        goto label_1fa118;
    }
    ctx->pc = 0x1FA110u;
    SET_GPR_U32(ctx, 31, 0x1FA118u);
    ctx->pc = 0x1FA114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA118u; }
        else if (ctx->pc != 0x1FA118u) { ctx->pc = 0x1FA118u; }
    }
    if (ctx->pc != 0x1FA118u) { return; }
    ctx->pc = 0x1FA118u;
label_1fa118:
    // 0x1fa118: 0x10000006
label_1fa11c:
    if (ctx->pc == 0x1FA11Cu) {
        ctx->pc = 0x1FA120u;
        goto label_1fa120;
    }
    ctx->pc = 0x1FA118u;
    {
        const bool branch_taken_0x1fa118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa118) {
            ctx->pc = 0x1FA134u;
            goto label_1fa134;
        }
    }
    ctx->pc = 0x1FA120u;
label_1fa120:
    // 0x1fa120: 0xc07ec50
label_1fa124:
    if (ctx->pc == 0x1FA124u) {
        ctx->pc = 0x1FA124u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FA128u;
        goto label_1fa128;
    }
    ctx->pc = 0x1FA120u;
    SET_GPR_U32(ctx, 31, 0x1FA128u);
    ctx->pc = 0x1FA124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FB140u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrameNum__12BodyMgrClassFi_0x1fb140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA128u; }
        else if (ctx->pc != 0x1FA128u) { ctx->pc = 0x1FA128u; }
    }
    if (ctx->pc != 0x1FA128u) { return; }
    ctx->pc = 0x1FA128u;
label_1fa128:
    // 0x1fa128: 0x72402628
    ctx->pc = 0x1fa128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1fa12c:
    // 0x1fa12c: 0xc07e924
label_1fa130:
    if (ctx->pc == 0x1FA130u) {
        ctx->pc = 0x1FA130u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FA134u;
        goto label_1fa134;
    }
    ctx->pc = 0x1FA12Cu;
    SET_GPR_U32(ctx, 31, 0x1FA134u);
    ctx->pc = 0x1FA130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FA490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMotPtr__12BodyMgrClassFi_0x1fa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA134u; }
        else if (ctx->pc != 0x1FA134u) { ctx->pc = 0x1FA134u; }
    }
    if (ctx->pc != 0x1FA134u) { return; }
    ctx->pc = 0x1FA134u;
label_1fa134:
    // 0x1fa134: 0x70008628
    ctx->pc = 0x1fa134u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fa138:
    // 0x1fa138: 0x10000007
label_1fa13c:
    if (ctx->pc == 0x1FA13Cu) {
        ctx->pc = 0x1FA13Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA140u;
        goto label_1fa140;
    }
    ctx->pc = 0x1FA138u;
    {
        const bool branch_taken_0x1fa138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA13Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fa138) {
            ctx->pc = 0x1FA158u;
            goto label_1fa158;
        }
    }
    ctx->pc = 0x1FA140u;
label_1fa140:
    // 0x1fa140: 0x8e850024
    ctx->pc = 0x1fa140u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1fa144:
    // 0x1fa144: 0xc07ec84
label_1fa148:
    if (ctx->pc == 0x1FA148u) {
        ctx->pc = 0x1FA148u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA14Cu;
        goto label_1fa14c;
    }
    ctx->pc = 0x1FA144u;
    SET_GPR_U32(ctx, 31, 0x1FA14Cu);
    ctx->pc = 0x1FA148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB210u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMat_rcv__12BodyMgrClassFP7_BODYPT_0x1fb210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA14Cu; }
        else if (ctx->pc != 0x1FA14Cu) { ctx->pc = 0x1FA14Cu; }
    }
    if (ctx->pc != 0x1FA14Cu) { return; }
    ctx->pc = 0x1FA14Cu;
label_1fa14c:
    // 0x1fa14c: 0x26940004
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
label_1fa150:
    // 0x1fa150: 0x26100001
    ctx->pc = 0x1fa150u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1fa154:
    // 0x1fa154: 0x0
    ctx->pc = 0x1fa154u;
    // NOP
label_1fa158:
    // 0x1fa158: 0x86630022
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_1fa15c:
    // 0x1fa15c: 0x203182a
    ctx->pc = 0x1fa15cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_1fa160:
    // 0x1fa160: 0x1460fff7
label_1fa164:
    if (ctx->pc == 0x1FA164u) {
        ctx->pc = 0x1FA168u;
        goto label_1fa168;
    }
    ctx->pc = 0x1FA160u;
    {
        const bool branch_taken_0x1fa160 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fa160) {
            ctx->pc = 0x1FA140u;
            goto label_1fa140;
        }
    }
    ctx->pc = 0x1FA168u;
label_1fa168:
    // 0x1fa168: 0x4bff6b7e
    ctx->pc = 0x1fa168u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fa16c:
    // 0x1fa16c: 0x4bfe6b7e
    ctx->pc = 0x1fa16cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fa170:
    // 0x1fa170: 0x4bfd6b7e
    ctx->pc = 0x1fa170u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fa174:
    // 0x1fa174: 0x4bfc6b7e
    ctx->pc = 0x1fa174u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fa178:
    // 0x1fa178: 0x8624002c
    ctx->pc = 0x1fa178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1fa17c:
    // 0x1fa17c: 0x3c030027
    ctx->pc = 0x1fa17cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_1fa180:
    // 0x1fa180: 0x246323f0
    ctx->pc = 0x1fa180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9200));
label_1fa184:
    // 0x1fa184: 0x42080
    ctx->pc = 0x1fa184u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_1fa188:
    // 0x1fa188: 0x641821
    ctx->pc = 0x1fa188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fa18c:
    // 0x1fa18c: 0x8c630000
    ctx->pc = 0x1fa18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa190:
    // 0x1fa190: 0x1060000d
label_1fa194:
    if (ctx->pc == 0x1FA194u) {
        ctx->pc = 0x1FA198u;
        goto label_1fa198;
    }
    ctx->pc = 0x1FA190u;
    {
        const bool branch_taken_0x1fa190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fa190) {
            ctx->pc = 0x1FA1C8u;
            goto label_1fa1c8;
        }
    }
    ctx->pc = 0x1FA198u;
label_1fa198:
    // 0x1fa198: 0x8e231c9c
    ctx->pc = 0x1fa198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7324)));
label_1fa19c:
    // 0x1fa19c: 0x30630001
    ctx->pc = 0x1fa19cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_1fa1a0:
    // 0x1fa1a0: 0x10600009
label_1fa1a4:
    if (ctx->pc == 0x1FA1A4u) {
        ctx->pc = 0x1FA1A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FA1A8u;
        goto label_1fa1a8;
    }
    ctx->pc = 0x1FA1A0u;
    {
        const bool branch_taken_0x1fa1a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA1A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fa1a0) {
            ctx->pc = 0x1FA1C8u;
            goto label_1fa1c8;
        }
    }
    ctx->pc = 0x1FA1A8u;
label_1fa1a8:
    // 0x1fa1a8: 0xc06ac08
label_1fa1ac:
    if (ctx->pc == 0x1FA1ACu) {
        ctx->pc = 0x1FA1B0u;
        goto label_1fa1b0;
    }
    ctx->pc = 0x1FA1A8u;
    SET_GPR_U32(ctx, 31, 0x1FA1B0u);
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1B0u; }
        else if (ctx->pc != 0x1FA1B0u) { ctx->pc = 0x1FA1B0u; }
    }
    if (ctx->pc != 0x1FA1B0u) { return; }
    ctx->pc = 0x1FA1B0u;
label_1fa1b0:
    // 0x1fa1b0: 0x3c020051
    ctx->pc = 0x1fa1b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1fa1b4:
    // 0x1fa1b4: 0x72202e28
    ctx->pc = 0x1fa1b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1fa1b8:
    // 0x1fa1b8: 0xc07fac0
label_1fa1bc:
    if (ctx->pc == 0x1FA1BCu) {
        ctx->pc = 0x1FA1BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x1FA1C0u;
        goto label_1fa1c0;
    }
    ctx->pc = 0x1FA1B8u;
    SET_GPR_U32(ctx, 31, 0x1FA1C0u);
    ctx->pc = 0x1FA1BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FEB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__15OneSkinMgrClassFP10MotObjTask_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1C0u; }
        else if (ctx->pc != 0x1FA1C0u) { ctx->pc = 0x1FA1C0u; }
    }
    if (ctx->pc != 0x1FA1C0u) { return; }
    ctx->pc = 0x1FA1C0u;
label_1fa1c0:
    // 0x1fa1c0: 0xc06ac08
label_1fa1c4:
    if (ctx->pc == 0x1FA1C4u) {
        ctx->pc = 0x1FA1C4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FA1C8u;
        goto label_1fa1c8;
    }
    ctx->pc = 0x1FA1C0u;
    SET_GPR_U32(ctx, 31, 0x1FA1C8u);
    ctx->pc = 0x1FA1C4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1C8u; }
        else if (ctx->pc != 0x1FA1C8u) { ctx->pc = 0x1FA1C8u; }
    }
    if (ctx->pc != 0x1FA1C8u) { return; }
    ctx->pc = 0x1FA1C8u;
label_1fa1c8:
    // 0x1fa1c8: 0x7bbf0060
    ctx->pc = 0x1fa1c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fa1cc:
    // 0x1fa1cc: 0x7bb40050
    ctx->pc = 0x1fa1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fa1d0:
    // 0x1fa1d0: 0x7bb30040
    ctx->pc = 0x1fa1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa1d4:
    // 0x1fa1d4: 0x7bb20030
    ctx->pc = 0x1fa1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa1d8:
    // 0x1fa1d8: 0x7bb10020
    ctx->pc = 0x1fa1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa1dc:
    // 0x1fa1dc: 0x7bb00010
    ctx->pc = 0x1fa1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa1e0:
    // 0x1fa1e0: 0xc7b60008
    ctx->pc = 0x1fa1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fa1e4:
    // 0x1fa1e4: 0xc7b50004
    ctx->pc = 0x1fa1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fa1e8:
    // 0x1fa1e8: 0xc7b40000
    ctx->pc = 0x1fa1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa1ec:
    // 0x1fa1ec: 0x3e00008
label_1fa1f0:
    if (ctx->pc == 0x1FA1F0u) {
        ctx->pc = 0x1FA1F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1FA1F4u;
        goto label_fallthrough_0x1fa1ec;
    }
    ctx->pc = 0x1FA1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA1F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9200u: goto label_1f9200;
            case 0x1F9204u: goto label_1f9204;
            case 0x1F9208u: goto label_1f9208;
            case 0x1F920Cu: goto label_1f920c;
            case 0x1F9210u: goto label_1f9210;
            case 0x1F9214u: goto label_1f9214;
            case 0x1F9218u: goto label_1f9218;
            case 0x1F921Cu: goto label_1f921c;
            case 0x1F9220u: goto label_1f9220;
            case 0x1F9224u: goto label_1f9224;
            case 0x1F9228u: goto label_1f9228;
            case 0x1F922Cu: goto label_1f922c;
            case 0x1F9230u: goto label_1f9230;
            case 0x1F9234u: goto label_1f9234;
            case 0x1F9238u: goto label_1f9238;
            case 0x1F923Cu: goto label_1f923c;
            case 0x1F9240u: goto label_1f9240;
            case 0x1F9244u: goto label_1f9244;
            case 0x1F9248u: goto label_1f9248;
            case 0x1F924Cu: goto label_1f924c;
            case 0x1F9250u: goto label_1f9250;
            case 0x1F9254u: goto label_1f9254;
            case 0x1F9258u: goto label_1f9258;
            case 0x1F925Cu: goto label_1f925c;
            case 0x1F9260u: goto label_1f9260;
            case 0x1F9264u: goto label_1f9264;
            case 0x1F9268u: goto label_1f9268;
            case 0x1F926Cu: goto label_1f926c;
            case 0x1F9270u: goto label_1f9270;
            case 0x1F9274u: goto label_1f9274;
            case 0x1F9278u: goto label_1f9278;
            case 0x1F927Cu: goto label_1f927c;
            case 0x1F9280u: goto label_1f9280;
            case 0x1F9284u: goto label_1f9284;
            case 0x1F9288u: goto label_1f9288;
            case 0x1F928Cu: goto label_1f928c;
            case 0x1F9290u: goto label_1f9290;
            case 0x1F9294u: goto label_1f9294;
            case 0x1F9298u: goto label_1f9298;
            case 0x1F929Cu: goto label_1f929c;
            case 0x1F92A0u: goto label_1f92a0;
            case 0x1F92A4u: goto label_1f92a4;
            case 0x1F92A8u: goto label_1f92a8;
            case 0x1F92ACu: goto label_1f92ac;
            case 0x1F92B0u: goto label_1f92b0;
            case 0x1F92B4u: goto label_1f92b4;
            case 0x1F92B8u: goto label_1f92b8;
            case 0x1F92BCu: goto label_1f92bc;
            case 0x1F92C0u: goto label_1f92c0;
            case 0x1F92C4u: goto label_1f92c4;
            case 0x1F92C8u: goto label_1f92c8;
            case 0x1F92CCu: goto label_1f92cc;
            case 0x1F92D0u: goto label_1f92d0;
            case 0x1F92D4u: goto label_1f92d4;
            case 0x1F92D8u: goto label_1f92d8;
            case 0x1F92DCu: goto label_1f92dc;
            case 0x1F92E0u: goto label_1f92e0;
            case 0x1F92E4u: goto label_1f92e4;
            case 0x1F92E8u: goto label_1f92e8;
            case 0x1F92ECu: goto label_1f92ec;
            case 0x1F92F0u: goto label_1f92f0;
            case 0x1F92F4u: goto label_1f92f4;
            case 0x1F92F8u: goto label_1f92f8;
            case 0x1F92FCu: goto label_1f92fc;
            case 0x1F9300u: goto label_1f9300;
            case 0x1F9304u: goto label_1f9304;
            case 0x1F9308u: goto label_1f9308;
            case 0x1F930Cu: goto label_1f930c;
            case 0x1F9310u: goto label_1f9310;
            case 0x1F9314u: goto label_1f9314;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F931Cu: goto label_1f931c;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9324u: goto label_1f9324;
            case 0x1F9328u: goto label_1f9328;
            case 0x1F932Cu: goto label_1f932c;
            case 0x1F9330u: goto label_1f9330;
            case 0x1F9334u: goto label_1f9334;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F933Cu: goto label_1f933c;
            case 0x1F9340u: goto label_1f9340;
            case 0x1F9344u: goto label_1f9344;
            case 0x1F9348u: goto label_1f9348;
            case 0x1F934Cu: goto label_1f934c;
            case 0x1F9350u: goto label_1f9350;
            case 0x1F9354u: goto label_1f9354;
            case 0x1F9358u: goto label_1f9358;
            case 0x1F935Cu: goto label_1f935c;
            case 0x1F9360u: goto label_1f9360;
            case 0x1F9364u: goto label_1f9364;
            case 0x1F9368u: goto label_1f9368;
            case 0x1F936Cu: goto label_1f936c;
            case 0x1F9370u: goto label_1f9370;
            case 0x1F9374u: goto label_1f9374;
            case 0x1F9378u: goto label_1f9378;
            case 0x1F937Cu: goto label_1f937c;
            case 0x1F9380u: goto label_1f9380;
            case 0x1F9384u: goto label_1f9384;
            case 0x1F9388u: goto label_1f9388;
            case 0x1F938Cu: goto label_1f938c;
            case 0x1F9390u: goto label_1f9390;
            case 0x1F9394u: goto label_1f9394;
            case 0x1F9398u: goto label_1f9398;
            case 0x1F939Cu: goto label_1f939c;
            case 0x1F93A0u: goto label_1f93a0;
            case 0x1F93A4u: goto label_1f93a4;
            case 0x1F93A8u: goto label_1f93a8;
            case 0x1F93ACu: goto label_1f93ac;
            case 0x1F93B0u: goto label_1f93b0;
            case 0x1F93B4u: goto label_1f93b4;
            case 0x1F93B8u: goto label_1f93b8;
            case 0x1F93BCu: goto label_1f93bc;
            case 0x1F93C0u: goto label_1f93c0;
            case 0x1F93C4u: goto label_1f93c4;
            case 0x1F93C8u: goto label_1f93c8;
            case 0x1F93CCu: goto label_1f93cc;
            case 0x1F93D0u: goto label_1f93d0;
            case 0x1F93D4u: goto label_1f93d4;
            case 0x1F93D8u: goto label_1f93d8;
            case 0x1F93DCu: goto label_1f93dc;
            case 0x1F93E0u: goto label_1f93e0;
            case 0x1F93E4u: goto label_1f93e4;
            case 0x1F93E8u: goto label_1f93e8;
            case 0x1F93ECu: goto label_1f93ec;
            case 0x1F93F0u: goto label_1f93f0;
            case 0x1F93F4u: goto label_1f93f4;
            case 0x1F93F8u: goto label_1f93f8;
            case 0x1F93FCu: goto label_1f93fc;
            case 0x1F9400u: goto label_1f9400;
            case 0x1F9404u: goto label_1f9404;
            case 0x1F9408u: goto label_1f9408;
            case 0x1F940Cu: goto label_1f940c;
            case 0x1F9410u: goto label_1f9410;
            case 0x1F9414u: goto label_1f9414;
            case 0x1F9418u: goto label_1f9418;
            case 0x1F941Cu: goto label_1f941c;
            case 0x1F9420u: goto label_1f9420;
            case 0x1F9424u: goto label_1f9424;
            case 0x1F9428u: goto label_1f9428;
            case 0x1F942Cu: goto label_1f942c;
            case 0x1F9430u: goto label_1f9430;
            case 0x1F9434u: goto label_1f9434;
            case 0x1F9438u: goto label_1f9438;
            case 0x1F943Cu: goto label_1f943c;
            case 0x1F9440u: goto label_1f9440;
            case 0x1F9444u: goto label_1f9444;
            case 0x1F9448u: goto label_1f9448;
            case 0x1F944Cu: goto label_1f944c;
            case 0x1F9450u: goto label_1f9450;
            case 0x1F9454u: goto label_1f9454;
            case 0x1F9458u: goto label_1f9458;
            case 0x1F945Cu: goto label_1f945c;
            case 0x1F9460u: goto label_1f9460;
            case 0x1F9464u: goto label_1f9464;
            case 0x1F9468u: goto label_1f9468;
            case 0x1F946Cu: goto label_1f946c;
            case 0x1F9470u: goto label_1f9470;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9478u: goto label_1f9478;
            case 0x1F947Cu: goto label_1f947c;
            case 0x1F9480u: goto label_1f9480;
            case 0x1F9484u: goto label_1f9484;
            case 0x1F9488u: goto label_1f9488;
            case 0x1F948Cu: goto label_1f948c;
            case 0x1F9490u: goto label_1f9490;
            case 0x1F9494u: goto label_1f9494;
            case 0x1F9498u: goto label_1f9498;
            case 0x1F949Cu: goto label_1f949c;
            case 0x1F94A0u: goto label_1f94a0;
            case 0x1F94A4u: goto label_1f94a4;
            case 0x1F94A8u: goto label_1f94a8;
            case 0x1F94ACu: goto label_1f94ac;
            case 0x1F94B0u: goto label_1f94b0;
            case 0x1F94B4u: goto label_1f94b4;
            case 0x1F94B8u: goto label_1f94b8;
            case 0x1F94BCu: goto label_1f94bc;
            case 0x1F94C0u: goto label_1f94c0;
            case 0x1F94C4u: goto label_1f94c4;
            case 0x1F94C8u: goto label_1f94c8;
            case 0x1F94CCu: goto label_1f94cc;
            case 0x1F94D0u: goto label_1f94d0;
            case 0x1F94D4u: goto label_1f94d4;
            case 0x1F94D8u: goto label_1f94d8;
            case 0x1F94DCu: goto label_1f94dc;
            case 0x1F94E0u: goto label_1f94e0;
            case 0x1F94E4u: goto label_1f94e4;
            case 0x1F94E8u: goto label_1f94e8;
            case 0x1F94ECu: goto label_1f94ec;
            case 0x1F94F0u: goto label_1f94f0;
            case 0x1F94F4u: goto label_1f94f4;
            case 0x1F94F8u: goto label_1f94f8;
            case 0x1F94FCu: goto label_1f94fc;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9504u: goto label_1f9504;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F950Cu: goto label_1f950c;
            case 0x1F9510u: goto label_1f9510;
            case 0x1F9514u: goto label_1f9514;
            case 0x1F9518u: goto label_1f9518;
            case 0x1F951Cu: goto label_1f951c;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F9524u: goto label_1f9524;
            case 0x1F9528u: goto label_1f9528;
            case 0x1F952Cu: goto label_1f952c;
            case 0x1F9530u: goto label_1f9530;
            case 0x1F9534u: goto label_1f9534;
            case 0x1F9538u: goto label_1f9538;
            case 0x1F953Cu: goto label_1f953c;
            case 0x1F9540u: goto label_1f9540;
            case 0x1F9544u: goto label_1f9544;
            case 0x1F9548u: goto label_1f9548;
            case 0x1F954Cu: goto label_1f954c;
            case 0x1F9550u: goto label_1f9550;
            case 0x1F9554u: goto label_1f9554;
            case 0x1F9558u: goto label_1f9558;
            case 0x1F955Cu: goto label_1f955c;
            case 0x1F9560u: goto label_1f9560;
            case 0x1F9564u: goto label_1f9564;
            case 0x1F9568u: goto label_1f9568;
            case 0x1F956Cu: goto label_1f956c;
            case 0x1F9570u: goto label_1f9570;
            case 0x1F9574u: goto label_1f9574;
            case 0x1F9578u: goto label_1f9578;
            case 0x1F957Cu: goto label_1f957c;
            case 0x1F9580u: goto label_1f9580;
            case 0x1F9584u: goto label_1f9584;
            case 0x1F9588u: goto label_1f9588;
            case 0x1F958Cu: goto label_1f958c;
            case 0x1F9590u: goto label_1f9590;
            case 0x1F9594u: goto label_1f9594;
            case 0x1F9598u: goto label_1f9598;
            case 0x1F959Cu: goto label_1f959c;
            case 0x1F95A0u: goto label_1f95a0;
            case 0x1F95A4u: goto label_1f95a4;
            case 0x1F95A8u: goto label_1f95a8;
            case 0x1F95ACu: goto label_1f95ac;
            case 0x1F95B0u: goto label_1f95b0;
            case 0x1F95B4u: goto label_1f95b4;
            case 0x1F95B8u: goto label_1f95b8;
            case 0x1F95BCu: goto label_1f95bc;
            case 0x1F95C0u: goto label_1f95c0;
            case 0x1F95C4u: goto label_1f95c4;
            case 0x1F95C8u: goto label_1f95c8;
            case 0x1F95CCu: goto label_1f95cc;
            case 0x1F95D0u: goto label_1f95d0;
            case 0x1F95D4u: goto label_1f95d4;
            case 0x1F95D8u: goto label_1f95d8;
            case 0x1F95DCu: goto label_1f95dc;
            case 0x1F95E0u: goto label_1f95e0;
            case 0x1F95E4u: goto label_1f95e4;
            case 0x1F95E8u: goto label_1f95e8;
            case 0x1F95ECu: goto label_1f95ec;
            case 0x1F95F0u: goto label_1f95f0;
            case 0x1F95F4u: goto label_1f95f4;
            case 0x1F95F8u: goto label_1f95f8;
            case 0x1F95FCu: goto label_1f95fc;
            case 0x1F9600u: goto label_1f9600;
            case 0x1F9604u: goto label_1f9604;
            case 0x1F9608u: goto label_1f9608;
            case 0x1F960Cu: goto label_1f960c;
            case 0x1F9610u: goto label_1f9610;
            case 0x1F9614u: goto label_1f9614;
            case 0x1F9618u: goto label_1f9618;
            case 0x1F961Cu: goto label_1f961c;
            case 0x1F9620u: goto label_1f9620;
            case 0x1F9624u: goto label_1f9624;
            case 0x1F9628u: goto label_1f9628;
            case 0x1F962Cu: goto label_1f962c;
            case 0x1F9630u: goto label_1f9630;
            case 0x1F9634u: goto label_1f9634;
            case 0x1F9638u: goto label_1f9638;
            case 0x1F963Cu: goto label_1f963c;
            case 0x1F9640u: goto label_1f9640;
            case 0x1F9644u: goto label_1f9644;
            case 0x1F9648u: goto label_1f9648;
            case 0x1F964Cu: goto label_1f964c;
            case 0x1F9650u: goto label_1f9650;
            case 0x1F9654u: goto label_1f9654;
            case 0x1F9658u: goto label_1f9658;
            case 0x1F965Cu: goto label_1f965c;
            case 0x1F9660u: goto label_1f9660;
            case 0x1F9664u: goto label_1f9664;
            case 0x1F9668u: goto label_1f9668;
            case 0x1F966Cu: goto label_1f966c;
            case 0x1F9670u: goto label_1f9670;
            case 0x1F9674u: goto label_1f9674;
            case 0x1F9678u: goto label_1f9678;
            case 0x1F967Cu: goto label_1f967c;
            case 0x1F9680u: goto label_1f9680;
            case 0x1F9684u: goto label_1f9684;
            case 0x1F9688u: goto label_1f9688;
            case 0x1F968Cu: goto label_1f968c;
            case 0x1F9690u: goto label_1f9690;
            case 0x1F9694u: goto label_1f9694;
            case 0x1F9698u: goto label_1f9698;
            case 0x1F969Cu: goto label_1f969c;
            case 0x1F96A0u: goto label_1f96a0;
            case 0x1F96A4u: goto label_1f96a4;
            case 0x1F96A8u: goto label_1f96a8;
            case 0x1F96ACu: goto label_1f96ac;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B4u: goto label_1f96b4;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96BCu: goto label_1f96bc;
            case 0x1F96C0u: goto label_1f96c0;
            case 0x1F96C4u: goto label_1f96c4;
            case 0x1F96C8u: goto label_1f96c8;
            case 0x1F96CCu: goto label_1f96cc;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F96D4u: goto label_1f96d4;
            case 0x1F96D8u: goto label_1f96d8;
            case 0x1F96DCu: goto label_1f96dc;
            case 0x1F96E0u: goto label_1f96e0;
            case 0x1F96E4u: goto label_1f96e4;
            case 0x1F96E8u: goto label_1f96e8;
            case 0x1F96ECu: goto label_1f96ec;
            case 0x1F96F0u: goto label_1f96f0;
            case 0x1F96F4u: goto label_1f96f4;
            case 0x1F96F8u: goto label_1f96f8;
            case 0x1F96FCu: goto label_1f96fc;
            case 0x1F9700u: goto label_1f9700;
            case 0x1F9704u: goto label_1f9704;
            case 0x1F9708u: goto label_1f9708;
            case 0x1F970Cu: goto label_1f970c;
            case 0x1F9710u: goto label_1f9710;
            case 0x1F9714u: goto label_1f9714;
            case 0x1F9718u: goto label_1f9718;
            case 0x1F971Cu: goto label_1f971c;
            case 0x1F9720u: goto label_1f9720;
            case 0x1F9724u: goto label_1f9724;
            case 0x1F9728u: goto label_1f9728;
            case 0x1F972Cu: goto label_1f972c;
            case 0x1F9730u: goto label_1f9730;
            case 0x1F9734u: goto label_1f9734;
            case 0x1F9738u: goto label_1f9738;
            case 0x1F973Cu: goto label_1f973c;
            case 0x1F9740u: goto label_1f9740;
            case 0x1F9744u: goto label_1f9744;
            case 0x1F9748u: goto label_1f9748;
            case 0x1F974Cu: goto label_1f974c;
            case 0x1F9750u: goto label_1f9750;
            case 0x1F9754u: goto label_1f9754;
            case 0x1F9758u: goto label_1f9758;
            case 0x1F975Cu: goto label_1f975c;
            case 0x1F9760u: goto label_1f9760;
            case 0x1F9764u: goto label_1f9764;
            case 0x1F9768u: goto label_1f9768;
            case 0x1F976Cu: goto label_1f976c;
            case 0x1F9770u: goto label_1f9770;
            case 0x1F9774u: goto label_1f9774;
            case 0x1F9778u: goto label_1f9778;
            case 0x1F977Cu: goto label_1f977c;
            case 0x1F9780u: goto label_1f9780;
            case 0x1F9784u: goto label_1f9784;
            case 0x1F9788u: goto label_1f9788;
            case 0x1F978Cu: goto label_1f978c;
            case 0x1F9790u: goto label_1f9790;
            case 0x1F9794u: goto label_1f9794;
            case 0x1F9798u: goto label_1f9798;
            case 0x1F979Cu: goto label_1f979c;
            case 0x1F97A0u: goto label_1f97a0;
            case 0x1F97A4u: goto label_1f97a4;
            case 0x1F97A8u: goto label_1f97a8;
            case 0x1F97ACu: goto label_1f97ac;
            case 0x1F97B0u: goto label_1f97b0;
            case 0x1F97B4u: goto label_1f97b4;
            case 0x1F97B8u: goto label_1f97b8;
            case 0x1F97BCu: goto label_1f97bc;
            case 0x1F97C0u: goto label_1f97c0;
            case 0x1F97C4u: goto label_1f97c4;
            case 0x1F97C8u: goto label_1f97c8;
            case 0x1F97CCu: goto label_1f97cc;
            case 0x1F97D0u: goto label_1f97d0;
            case 0x1F97D4u: goto label_1f97d4;
            case 0x1F97D8u: goto label_1f97d8;
            case 0x1F97DCu: goto label_1f97dc;
            case 0x1F97E0u: goto label_1f97e0;
            case 0x1F97E4u: goto label_1f97e4;
            case 0x1F97E8u: goto label_1f97e8;
            case 0x1F97ECu: goto label_1f97ec;
            case 0x1F97F0u: goto label_1f97f0;
            case 0x1F97F4u: goto label_1f97f4;
            case 0x1F97F8u: goto label_1f97f8;
            case 0x1F97FCu: goto label_1f97fc;
            case 0x1F9800u: goto label_1f9800;
            case 0x1F9804u: goto label_1f9804;
            case 0x1F9808u: goto label_1f9808;
            case 0x1F980Cu: goto label_1f980c;
            case 0x1F9810u: goto label_1f9810;
            case 0x1F9814u: goto label_1f9814;
            case 0x1F9818u: goto label_1f9818;
            case 0x1F981Cu: goto label_1f981c;
            case 0x1F9820u: goto label_1f9820;
            case 0x1F9824u: goto label_1f9824;
            case 0x1F9828u: goto label_1f9828;
            case 0x1F982Cu: goto label_1f982c;
            case 0x1F9830u: goto label_1f9830;
            case 0x1F9834u: goto label_1f9834;
            case 0x1F9838u: goto label_1f9838;
            case 0x1F983Cu: goto label_1f983c;
            case 0x1F9840u: goto label_1f9840;
            case 0x1F9844u: goto label_1f9844;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F984Cu: goto label_1f984c;
            case 0x1F9850u: goto label_1f9850;
            case 0x1F9854u: goto label_1f9854;
            case 0x1F9858u: goto label_1f9858;
            case 0x1F985Cu: goto label_1f985c;
            case 0x1F9860u: goto label_1f9860;
            case 0x1F9864u: goto label_1f9864;
            case 0x1F9868u: goto label_1f9868;
            case 0x1F986Cu: goto label_1f986c;
            case 0x1F9870u: goto label_1f9870;
            case 0x1F9874u: goto label_1f9874;
            case 0x1F9878u: goto label_1f9878;
            case 0x1F987Cu: goto label_1f987c;
            case 0x1F9880u: goto label_1f9880;
            case 0x1F9884u: goto label_1f9884;
            case 0x1F9888u: goto label_1f9888;
            case 0x1F988Cu: goto label_1f988c;
            case 0x1F9890u: goto label_1f9890;
            case 0x1F9894u: goto label_1f9894;
            case 0x1F9898u: goto label_1f9898;
            case 0x1F989Cu: goto label_1f989c;
            case 0x1F98A0u: goto label_1f98a0;
            case 0x1F98A4u: goto label_1f98a4;
            case 0x1F98A8u: goto label_1f98a8;
            case 0x1F98ACu: goto label_1f98ac;
            case 0x1F98B0u: goto label_1f98b0;
            case 0x1F98B4u: goto label_1f98b4;
            case 0x1F98B8u: goto label_1f98b8;
            case 0x1F98BCu: goto label_1f98bc;
            case 0x1F98C0u: goto label_1f98c0;
            case 0x1F98C4u: goto label_1f98c4;
            case 0x1F98C8u: goto label_1f98c8;
            case 0x1F98CCu: goto label_1f98cc;
            case 0x1F98D0u: goto label_1f98d0;
            case 0x1F98D4u: goto label_1f98d4;
            case 0x1F98D8u: goto label_1f98d8;
            case 0x1F98DCu: goto label_1f98dc;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E4u: goto label_1f98e4;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F98ECu: goto label_1f98ec;
            case 0x1F98F0u: goto label_1f98f0;
            case 0x1F98F4u: goto label_1f98f4;
            case 0x1F98F8u: goto label_1f98f8;
            case 0x1F98FCu: goto label_1f98fc;
            case 0x1F9900u: goto label_1f9900;
            case 0x1F9904u: goto label_1f9904;
            case 0x1F9908u: goto label_1f9908;
            case 0x1F990Cu: goto label_1f990c;
            case 0x1F9910u: goto label_1f9910;
            case 0x1F9914u: goto label_1f9914;
            case 0x1F9918u: goto label_1f9918;
            case 0x1F991Cu: goto label_1f991c;
            case 0x1F9920u: goto label_1f9920;
            case 0x1F9924u: goto label_1f9924;
            case 0x1F9928u: goto label_1f9928;
            case 0x1F992Cu: goto label_1f992c;
            case 0x1F9930u: goto label_1f9930;
            case 0x1F9934u: goto label_1f9934;
            case 0x1F9938u: goto label_1f9938;
            case 0x1F993Cu: goto label_1f993c;
            case 0x1F9940u: goto label_1f9940;
            case 0x1F9944u: goto label_1f9944;
            case 0x1F9948u: goto label_1f9948;
            case 0x1F994Cu: goto label_1f994c;
            case 0x1F9950u: goto label_1f9950;
            case 0x1F9954u: goto label_1f9954;
            case 0x1F9958u: goto label_1f9958;
            case 0x1F995Cu: goto label_1f995c;
            case 0x1F9960u: goto label_1f9960;
            case 0x1F9964u: goto label_1f9964;
            case 0x1F9968u: goto label_1f9968;
            case 0x1F996Cu: goto label_1f996c;
            case 0x1F9970u: goto label_1f9970;
            case 0x1F9974u: goto label_1f9974;
            case 0x1F9978u: goto label_1f9978;
            case 0x1F997Cu: goto label_1f997c;
            case 0x1F9980u: goto label_1f9980;
            case 0x1F9984u: goto label_1f9984;
            case 0x1F9988u: goto label_1f9988;
            case 0x1F998Cu: goto label_1f998c;
            case 0x1F9990u: goto label_1f9990;
            case 0x1F9994u: goto label_1f9994;
            case 0x1F9998u: goto label_1f9998;
            case 0x1F999Cu: goto label_1f999c;
            case 0x1F99A0u: goto label_1f99a0;
            case 0x1F99A4u: goto label_1f99a4;
            case 0x1F99A8u: goto label_1f99a8;
            case 0x1F99ACu: goto label_1f99ac;
            case 0x1F99B0u: goto label_1f99b0;
            case 0x1F99B4u: goto label_1f99b4;
            case 0x1F99B8u: goto label_1f99b8;
            case 0x1F99BCu: goto label_1f99bc;
            case 0x1F99C0u: goto label_1f99c0;
            case 0x1F99C4u: goto label_1f99c4;
            case 0x1F99C8u: goto label_1f99c8;
            case 0x1F99CCu: goto label_1f99cc;
            case 0x1F99D0u: goto label_1f99d0;
            case 0x1F99D4u: goto label_1f99d4;
            case 0x1F99D8u: goto label_1f99d8;
            case 0x1F99DCu: goto label_1f99dc;
            case 0x1F99E0u: goto label_1f99e0;
            case 0x1F99E4u: goto label_1f99e4;
            case 0x1F99E8u: goto label_1f99e8;
            case 0x1F99ECu: goto label_1f99ec;
            case 0x1F99F0u: goto label_1f99f0;
            case 0x1F99F4u: goto label_1f99f4;
            case 0x1F99F8u: goto label_1f99f8;
            case 0x1F99FCu: goto label_1f99fc;
            case 0x1F9A00u: goto label_1f9a00;
            case 0x1F9A04u: goto label_1f9a04;
            case 0x1F9A08u: goto label_1f9a08;
            case 0x1F9A0Cu: goto label_1f9a0c;
            case 0x1F9A10u: goto label_1f9a10;
            case 0x1F9A14u: goto label_1f9a14;
            case 0x1F9A18u: goto label_1f9a18;
            case 0x1F9A1Cu: goto label_1f9a1c;
            case 0x1F9A20u: goto label_1f9a20;
            case 0x1F9A24u: goto label_1f9a24;
            case 0x1F9A28u: goto label_1f9a28;
            case 0x1F9A2Cu: goto label_1f9a2c;
            case 0x1F9A30u: goto label_1f9a30;
            case 0x1F9A34u: goto label_1f9a34;
            case 0x1F9A38u: goto label_1f9a38;
            case 0x1F9A3Cu: goto label_1f9a3c;
            case 0x1F9A40u: goto label_1f9a40;
            case 0x1F9A44u: goto label_1f9a44;
            case 0x1F9A48u: goto label_1f9a48;
            case 0x1F9A4Cu: goto label_1f9a4c;
            case 0x1F9A50u: goto label_1f9a50;
            case 0x1F9A54u: goto label_1f9a54;
            case 0x1F9A58u: goto label_1f9a58;
            case 0x1F9A5Cu: goto label_1f9a5c;
            case 0x1F9A60u: goto label_1f9a60;
            case 0x1F9A64u: goto label_1f9a64;
            case 0x1F9A68u: goto label_1f9a68;
            case 0x1F9A6Cu: goto label_1f9a6c;
            case 0x1F9A70u: goto label_1f9a70;
            case 0x1F9A74u: goto label_1f9a74;
            case 0x1F9A78u: goto label_1f9a78;
            case 0x1F9A7Cu: goto label_1f9a7c;
            case 0x1F9A80u: goto label_1f9a80;
            case 0x1F9A84u: goto label_1f9a84;
            case 0x1F9A88u: goto label_1f9a88;
            case 0x1F9A8Cu: goto label_1f9a8c;
            case 0x1F9A90u: goto label_1f9a90;
            case 0x1F9A94u: goto label_1f9a94;
            case 0x1F9A98u: goto label_1f9a98;
            case 0x1F9A9Cu: goto label_1f9a9c;
            case 0x1F9AA0u: goto label_1f9aa0;
            case 0x1F9AA4u: goto label_1f9aa4;
            case 0x1F9AA8u: goto label_1f9aa8;
            case 0x1F9AACu: goto label_1f9aac;
            case 0x1F9AB0u: goto label_1f9ab0;
            case 0x1F9AB4u: goto label_1f9ab4;
            case 0x1F9AB8u: goto label_1f9ab8;
            case 0x1F9ABCu: goto label_1f9abc;
            case 0x1F9AC0u: goto label_1f9ac0;
            case 0x1F9AC4u: goto label_1f9ac4;
            case 0x1F9AC8u: goto label_1f9ac8;
            case 0x1F9ACCu: goto label_1f9acc;
            case 0x1F9AD0u: goto label_1f9ad0;
            case 0x1F9AD4u: goto label_1f9ad4;
            case 0x1F9AD8u: goto label_1f9ad8;
            case 0x1F9ADCu: goto label_1f9adc;
            case 0x1F9AE0u: goto label_1f9ae0;
            case 0x1F9AE4u: goto label_1f9ae4;
            case 0x1F9AE8u: goto label_1f9ae8;
            case 0x1F9AECu: goto label_1f9aec;
            case 0x1F9AF0u: goto label_1f9af0;
            case 0x1F9AF4u: goto label_1f9af4;
            case 0x1F9AF8u: goto label_1f9af8;
            case 0x1F9AFCu: goto label_1f9afc;
            case 0x1F9B00u: goto label_1f9b00;
            case 0x1F9B04u: goto label_1f9b04;
            case 0x1F9B08u: goto label_1f9b08;
            case 0x1F9B0Cu: goto label_1f9b0c;
            case 0x1F9B10u: goto label_1f9b10;
            case 0x1F9B14u: goto label_1f9b14;
            case 0x1F9B18u: goto label_1f9b18;
            case 0x1F9B1Cu: goto label_1f9b1c;
            case 0x1F9B20u: goto label_1f9b20;
            case 0x1F9B24u: goto label_1f9b24;
            case 0x1F9B28u: goto label_1f9b28;
            case 0x1F9B2Cu: goto label_1f9b2c;
            case 0x1F9B30u: goto label_1f9b30;
            case 0x1F9B34u: goto label_1f9b34;
            case 0x1F9B38u: goto label_1f9b38;
            case 0x1F9B3Cu: goto label_1f9b3c;
            case 0x1F9B40u: goto label_1f9b40;
            case 0x1F9B44u: goto label_1f9b44;
            case 0x1F9B48u: goto label_1f9b48;
            case 0x1F9B4Cu: goto label_1f9b4c;
            case 0x1F9B50u: goto label_1f9b50;
            case 0x1F9B54u: goto label_1f9b54;
            case 0x1F9B58u: goto label_1f9b58;
            case 0x1F9B5Cu: goto label_1f9b5c;
            case 0x1F9B60u: goto label_1f9b60;
            case 0x1F9B64u: goto label_1f9b64;
            case 0x1F9B68u: goto label_1f9b68;
            case 0x1F9B6Cu: goto label_1f9b6c;
            case 0x1F9B70u: goto label_1f9b70;
            case 0x1F9B74u: goto label_1f9b74;
            case 0x1F9B78u: goto label_1f9b78;
            case 0x1F9B7Cu: goto label_1f9b7c;
            case 0x1F9B80u: goto label_1f9b80;
            case 0x1F9B84u: goto label_1f9b84;
            case 0x1F9B88u: goto label_1f9b88;
            case 0x1F9B8Cu: goto label_1f9b8c;
            case 0x1F9B90u: goto label_1f9b90;
            case 0x1F9B94u: goto label_1f9b94;
            case 0x1F9B98u: goto label_1f9b98;
            case 0x1F9B9Cu: goto label_1f9b9c;
            case 0x1F9BA0u: goto label_1f9ba0;
            case 0x1F9BA4u: goto label_1f9ba4;
            case 0x1F9BA8u: goto label_1f9ba8;
            case 0x1F9BACu: goto label_1f9bac;
            case 0x1F9BB0u: goto label_1f9bb0;
            case 0x1F9BB4u: goto label_1f9bb4;
            case 0x1F9BB8u: goto label_1f9bb8;
            case 0x1F9BBCu: goto label_1f9bbc;
            case 0x1F9BC0u: goto label_1f9bc0;
            case 0x1F9BC4u: goto label_1f9bc4;
            case 0x1F9BC8u: goto label_1f9bc8;
            case 0x1F9BCCu: goto label_1f9bcc;
            case 0x1F9BD0u: goto label_1f9bd0;
            case 0x1F9BD4u: goto label_1f9bd4;
            case 0x1F9BD8u: goto label_1f9bd8;
            case 0x1F9BDCu: goto label_1f9bdc;
            case 0x1F9BE0u: goto label_1f9be0;
            case 0x1F9BE4u: goto label_1f9be4;
            case 0x1F9BE8u: goto label_1f9be8;
            case 0x1F9BECu: goto label_1f9bec;
            case 0x1F9BF0u: goto label_1f9bf0;
            case 0x1F9BF4u: goto label_1f9bf4;
            case 0x1F9BF8u: goto label_1f9bf8;
            case 0x1F9BFCu: goto label_1f9bfc;
            case 0x1F9C00u: goto label_1f9c00;
            case 0x1F9C04u: goto label_1f9c04;
            case 0x1F9C08u: goto label_1f9c08;
            case 0x1F9C0Cu: goto label_1f9c0c;
            case 0x1F9C10u: goto label_1f9c10;
            case 0x1F9C14u: goto label_1f9c14;
            case 0x1F9C18u: goto label_1f9c18;
            case 0x1F9C1Cu: goto label_1f9c1c;
            case 0x1F9C20u: goto label_1f9c20;
            case 0x1F9C24u: goto label_1f9c24;
            case 0x1F9C28u: goto label_1f9c28;
            case 0x1F9C2Cu: goto label_1f9c2c;
            case 0x1F9C30u: goto label_1f9c30;
            case 0x1F9C34u: goto label_1f9c34;
            case 0x1F9C38u: goto label_1f9c38;
            case 0x1F9C3Cu: goto label_1f9c3c;
            case 0x1F9C40u: goto label_1f9c40;
            case 0x1F9C44u: goto label_1f9c44;
            case 0x1F9C48u: goto label_1f9c48;
            case 0x1F9C4Cu: goto label_1f9c4c;
            case 0x1F9C50u: goto label_1f9c50;
            case 0x1F9C54u: goto label_1f9c54;
            case 0x1F9C58u: goto label_1f9c58;
            case 0x1F9C5Cu: goto label_1f9c5c;
            case 0x1F9C60u: goto label_1f9c60;
            case 0x1F9C64u: goto label_1f9c64;
            case 0x1F9C68u: goto label_1f9c68;
            case 0x1F9C6Cu: goto label_1f9c6c;
            case 0x1F9C70u: goto label_1f9c70;
            case 0x1F9C74u: goto label_1f9c74;
            case 0x1F9C78u: goto label_1f9c78;
            case 0x1F9C7Cu: goto label_1f9c7c;
            case 0x1F9C80u: goto label_1f9c80;
            case 0x1F9C84u: goto label_1f9c84;
            case 0x1F9C88u: goto label_1f9c88;
            case 0x1F9C8Cu: goto label_1f9c8c;
            case 0x1F9C90u: goto label_1f9c90;
            case 0x1F9C94u: goto label_1f9c94;
            case 0x1F9C98u: goto label_1f9c98;
            case 0x1F9C9Cu: goto label_1f9c9c;
            case 0x1F9CA0u: goto label_1f9ca0;
            case 0x1F9CA4u: goto label_1f9ca4;
            case 0x1F9CA8u: goto label_1f9ca8;
            case 0x1F9CACu: goto label_1f9cac;
            case 0x1F9CB0u: goto label_1f9cb0;
            case 0x1F9CB4u: goto label_1f9cb4;
            case 0x1F9CB8u: goto label_1f9cb8;
            case 0x1F9CBCu: goto label_1f9cbc;
            case 0x1F9CC0u: goto label_1f9cc0;
            case 0x1F9CC4u: goto label_1f9cc4;
            case 0x1F9CC8u: goto label_1f9cc8;
            case 0x1F9CCCu: goto label_1f9ccc;
            case 0x1F9CD0u: goto label_1f9cd0;
            case 0x1F9CD4u: goto label_1f9cd4;
            case 0x1F9CD8u: goto label_1f9cd8;
            case 0x1F9CDCu: goto label_1f9cdc;
            case 0x1F9CE0u: goto label_1f9ce0;
            case 0x1F9CE4u: goto label_1f9ce4;
            case 0x1F9CE8u: goto label_1f9ce8;
            case 0x1F9CECu: goto label_1f9cec;
            case 0x1F9CF0u: goto label_1f9cf0;
            case 0x1F9CF4u: goto label_1f9cf4;
            case 0x1F9CF8u: goto label_1f9cf8;
            case 0x1F9CFCu: goto label_1f9cfc;
            case 0x1F9D00u: goto label_1f9d00;
            case 0x1F9D04u: goto label_1f9d04;
            case 0x1F9D08u: goto label_1f9d08;
            case 0x1F9D0Cu: goto label_1f9d0c;
            case 0x1F9D10u: goto label_1f9d10;
            case 0x1F9D14u: goto label_1f9d14;
            case 0x1F9D18u: goto label_1f9d18;
            case 0x1F9D1Cu: goto label_1f9d1c;
            case 0x1F9D20u: goto label_1f9d20;
            case 0x1F9D24u: goto label_1f9d24;
            case 0x1F9D28u: goto label_1f9d28;
            case 0x1F9D2Cu: goto label_1f9d2c;
            case 0x1F9D30u: goto label_1f9d30;
            case 0x1F9D34u: goto label_1f9d34;
            case 0x1F9D38u: goto label_1f9d38;
            case 0x1F9D3Cu: goto label_1f9d3c;
            case 0x1F9D40u: goto label_1f9d40;
            case 0x1F9D44u: goto label_1f9d44;
            case 0x1F9D48u: goto label_1f9d48;
            case 0x1F9D4Cu: goto label_1f9d4c;
            case 0x1F9D50u: goto label_1f9d50;
            case 0x1F9D54u: goto label_1f9d54;
            case 0x1F9D58u: goto label_1f9d58;
            case 0x1F9D5Cu: goto label_1f9d5c;
            case 0x1F9D60u: goto label_1f9d60;
            case 0x1F9D64u: goto label_1f9d64;
            case 0x1F9D68u: goto label_1f9d68;
            case 0x1F9D6Cu: goto label_1f9d6c;
            case 0x1F9D70u: goto label_1f9d70;
            case 0x1F9D74u: goto label_1f9d74;
            case 0x1F9D78u: goto label_1f9d78;
            case 0x1F9D7Cu: goto label_1f9d7c;
            case 0x1F9D80u: goto label_1f9d80;
            case 0x1F9D84u: goto label_1f9d84;
            case 0x1F9D88u: goto label_1f9d88;
            case 0x1F9D8Cu: goto label_1f9d8c;
            case 0x1F9D90u: goto label_1f9d90;
            case 0x1F9D94u: goto label_1f9d94;
            case 0x1F9D98u: goto label_1f9d98;
            case 0x1F9D9Cu: goto label_1f9d9c;
            case 0x1F9DA0u: goto label_1f9da0;
            case 0x1F9DA4u: goto label_1f9da4;
            case 0x1F9DA8u: goto label_1f9da8;
            case 0x1F9DACu: goto label_1f9dac;
            case 0x1F9DB0u: goto label_1f9db0;
            case 0x1F9DB4u: goto label_1f9db4;
            case 0x1F9DB8u: goto label_1f9db8;
            case 0x1F9DBCu: goto label_1f9dbc;
            case 0x1F9DC0u: goto label_1f9dc0;
            case 0x1F9DC4u: goto label_1f9dc4;
            case 0x1F9DC8u: goto label_1f9dc8;
            case 0x1F9DCCu: goto label_1f9dcc;
            case 0x1F9DD0u: goto label_1f9dd0;
            case 0x1F9DD4u: goto label_1f9dd4;
            case 0x1F9DD8u: goto label_1f9dd8;
            case 0x1F9DDCu: goto label_1f9ddc;
            case 0x1F9DE0u: goto label_1f9de0;
            case 0x1F9DE4u: goto label_1f9de4;
            case 0x1F9DE8u: goto label_1f9de8;
            case 0x1F9DECu: goto label_1f9dec;
            case 0x1F9DF0u: goto label_1f9df0;
            case 0x1F9DF4u: goto label_1f9df4;
            case 0x1F9DF8u: goto label_1f9df8;
            case 0x1F9DFCu: goto label_1f9dfc;
            case 0x1F9E00u: goto label_1f9e00;
            case 0x1F9E04u: goto label_1f9e04;
            case 0x1F9E08u: goto label_1f9e08;
            case 0x1F9E0Cu: goto label_1f9e0c;
            case 0x1F9E10u: goto label_1f9e10;
            case 0x1F9E14u: goto label_1f9e14;
            case 0x1F9E18u: goto label_1f9e18;
            case 0x1F9E1Cu: goto label_1f9e1c;
            case 0x1F9E20u: goto label_1f9e20;
            case 0x1F9E24u: goto label_1f9e24;
            case 0x1F9E28u: goto label_1f9e28;
            case 0x1F9E2Cu: goto label_1f9e2c;
            case 0x1F9E30u: goto label_1f9e30;
            case 0x1F9E34u: goto label_1f9e34;
            case 0x1F9E38u: goto label_1f9e38;
            case 0x1F9E3Cu: goto label_1f9e3c;
            case 0x1F9E40u: goto label_1f9e40;
            case 0x1F9E44u: goto label_1f9e44;
            case 0x1F9E48u: goto label_1f9e48;
            case 0x1F9E4Cu: goto label_1f9e4c;
            case 0x1F9E50u: goto label_1f9e50;
            case 0x1F9E54u: goto label_1f9e54;
            case 0x1F9E58u: goto label_1f9e58;
            case 0x1F9E5Cu: goto label_1f9e5c;
            case 0x1F9E60u: goto label_1f9e60;
            case 0x1F9E64u: goto label_1f9e64;
            case 0x1F9E68u: goto label_1f9e68;
            case 0x1F9E6Cu: goto label_1f9e6c;
            case 0x1F9E70u: goto label_1f9e70;
            case 0x1F9E74u: goto label_1f9e74;
            case 0x1F9E78u: goto label_1f9e78;
            case 0x1F9E7Cu: goto label_1f9e7c;
            case 0x1F9E80u: goto label_1f9e80;
            case 0x1F9E84u: goto label_1f9e84;
            case 0x1F9E88u: goto label_1f9e88;
            case 0x1F9E8Cu: goto label_1f9e8c;
            case 0x1F9E90u: goto label_1f9e90;
            case 0x1F9E94u: goto label_1f9e94;
            case 0x1F9E98u: goto label_1f9e98;
            case 0x1F9E9Cu: goto label_1f9e9c;
            case 0x1F9EA0u: goto label_1f9ea0;
            case 0x1F9EA4u: goto label_1f9ea4;
            case 0x1F9EA8u: goto label_1f9ea8;
            case 0x1F9EACu: goto label_1f9eac;
            case 0x1F9EB0u: goto label_1f9eb0;
            case 0x1F9EB4u: goto label_1f9eb4;
            case 0x1F9EB8u: goto label_1f9eb8;
            case 0x1F9EBCu: goto label_1f9ebc;
            case 0x1F9EC0u: goto label_1f9ec0;
            case 0x1F9EC4u: goto label_1f9ec4;
            case 0x1F9EC8u: goto label_1f9ec8;
            case 0x1F9ECCu: goto label_1f9ecc;
            case 0x1F9ED0u: goto label_1f9ed0;
            case 0x1F9ED4u: goto label_1f9ed4;
            case 0x1F9ED8u: goto label_1f9ed8;
            case 0x1F9EDCu: goto label_1f9edc;
            case 0x1F9EE0u: goto label_1f9ee0;
            case 0x1F9EE4u: goto label_1f9ee4;
            case 0x1F9EE8u: goto label_1f9ee8;
            case 0x1F9EECu: goto label_1f9eec;
            case 0x1F9EF0u: goto label_1f9ef0;
            case 0x1F9EF4u: goto label_1f9ef4;
            case 0x1F9EF8u: goto label_1f9ef8;
            case 0x1F9EFCu: goto label_1f9efc;
            case 0x1F9F00u: goto label_1f9f00;
            case 0x1F9F04u: goto label_1f9f04;
            case 0x1F9F08u: goto label_1f9f08;
            case 0x1F9F0Cu: goto label_1f9f0c;
            case 0x1F9F10u: goto label_1f9f10;
            case 0x1F9F14u: goto label_1f9f14;
            case 0x1F9F18u: goto label_1f9f18;
            case 0x1F9F1Cu: goto label_1f9f1c;
            case 0x1F9F20u: goto label_1f9f20;
            case 0x1F9F24u: goto label_1f9f24;
            case 0x1F9F28u: goto label_1f9f28;
            case 0x1F9F2Cu: goto label_1f9f2c;
            case 0x1F9F30u: goto label_1f9f30;
            case 0x1F9F34u: goto label_1f9f34;
            case 0x1F9F38u: goto label_1f9f38;
            case 0x1F9F3Cu: goto label_1f9f3c;
            case 0x1F9F40u: goto label_1f9f40;
            case 0x1F9F44u: goto label_1f9f44;
            case 0x1F9F48u: goto label_1f9f48;
            case 0x1F9F4Cu: goto label_1f9f4c;
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F54u: goto label_1f9f54;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F5Cu: goto label_1f9f5c;
            case 0x1F9F60u: goto label_1f9f60;
            case 0x1F9F64u: goto label_1f9f64;
            case 0x1F9F68u: goto label_1f9f68;
            case 0x1F9F6Cu: goto label_1f9f6c;
            case 0x1F9F70u: goto label_1f9f70;
            case 0x1F9F74u: goto label_1f9f74;
            case 0x1F9F78u: goto label_1f9f78;
            case 0x1F9F7Cu: goto label_1f9f7c;
            case 0x1F9F80u: goto label_1f9f80;
            case 0x1F9F84u: goto label_1f9f84;
            case 0x1F9F88u: goto label_1f9f88;
            case 0x1F9F8Cu: goto label_1f9f8c;
            case 0x1F9F90u: goto label_1f9f90;
            case 0x1F9F94u: goto label_1f9f94;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9F9Cu: goto label_1f9f9c;
            case 0x1F9FA0u: goto label_1f9fa0;
            case 0x1F9FA4u: goto label_1f9fa4;
            case 0x1F9FA8u: goto label_1f9fa8;
            case 0x1F9FACu: goto label_1f9fac;
            case 0x1F9FB0u: goto label_1f9fb0;
            case 0x1F9FB4u: goto label_1f9fb4;
            case 0x1F9FB8u: goto label_1f9fb8;
            case 0x1F9FBCu: goto label_1f9fbc;
            case 0x1F9FC0u: goto label_1f9fc0;
            case 0x1F9FC4u: goto label_1f9fc4;
            case 0x1F9FC8u: goto label_1f9fc8;
            case 0x1F9FCCu: goto label_1f9fcc;
            case 0x1F9FD0u: goto label_1f9fd0;
            case 0x1F9FD4u: goto label_1f9fd4;
            case 0x1F9FD8u: goto label_1f9fd8;
            case 0x1F9FDCu: goto label_1f9fdc;
            case 0x1F9FE0u: goto label_1f9fe0;
            case 0x1F9FE4u: goto label_1f9fe4;
            case 0x1F9FE8u: goto label_1f9fe8;
            case 0x1F9FECu: goto label_1f9fec;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF4u: goto label_1f9ff4;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1F9FFCu: goto label_1f9ffc;
            case 0x1FA000u: goto label_1fa000;
            case 0x1FA004u: goto label_1fa004;
            case 0x1FA008u: goto label_1fa008;
            case 0x1FA00Cu: goto label_1fa00c;
            case 0x1FA010u: goto label_1fa010;
            case 0x1FA014u: goto label_1fa014;
            case 0x1FA018u: goto label_1fa018;
            case 0x1FA01Cu: goto label_1fa01c;
            case 0x1FA020u: goto label_1fa020;
            case 0x1FA024u: goto label_1fa024;
            case 0x1FA028u: goto label_1fa028;
            case 0x1FA02Cu: goto label_1fa02c;
            case 0x1FA030u: goto label_1fa030;
            case 0x1FA034u: goto label_1fa034;
            case 0x1FA038u: goto label_1fa038;
            case 0x1FA03Cu: goto label_1fa03c;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA044u: goto label_1fa044;
            case 0x1FA048u: goto label_1fa048;
            case 0x1FA04Cu: goto label_1fa04c;
            case 0x1FA050u: goto label_1fa050;
            case 0x1FA054u: goto label_1fa054;
            case 0x1FA058u: goto label_1fa058;
            case 0x1FA05Cu: goto label_1fa05c;
            case 0x1FA060u: goto label_1fa060;
            case 0x1FA064u: goto label_1fa064;
            case 0x1FA068u: goto label_1fa068;
            case 0x1FA06Cu: goto label_1fa06c;
            case 0x1FA070u: goto label_1fa070;
            case 0x1FA074u: goto label_1fa074;
            case 0x1FA078u: goto label_1fa078;
            case 0x1FA07Cu: goto label_1fa07c;
            case 0x1FA080u: goto label_1fa080;
            case 0x1FA084u: goto label_1fa084;
            case 0x1FA088u: goto label_1fa088;
            case 0x1FA08Cu: goto label_1fa08c;
            case 0x1FA090u: goto label_1fa090;
            case 0x1FA094u: goto label_1fa094;
            case 0x1FA098u: goto label_1fa098;
            case 0x1FA09Cu: goto label_1fa09c;
            case 0x1FA0A0u: goto label_1fa0a0;
            case 0x1FA0A4u: goto label_1fa0a4;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0ACu: goto label_1fa0ac;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0B4u: goto label_1fa0b4;
            case 0x1FA0B8u: goto label_1fa0b8;
            case 0x1FA0BCu: goto label_1fa0bc;
            case 0x1FA0C0u: goto label_1fa0c0;
            case 0x1FA0C4u: goto label_1fa0c4;
            case 0x1FA0C8u: goto label_1fa0c8;
            case 0x1FA0CCu: goto label_1fa0cc;
            case 0x1FA0D0u: goto label_1fa0d0;
            case 0x1FA0D4u: goto label_1fa0d4;
            case 0x1FA0D8u: goto label_1fa0d8;
            case 0x1FA0DCu: goto label_1fa0dc;
            case 0x1FA0E0u: goto label_1fa0e0;
            case 0x1FA0E4u: goto label_1fa0e4;
            case 0x1FA0E8u: goto label_1fa0e8;
            case 0x1FA0ECu: goto label_1fa0ec;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA0F4u: goto label_1fa0f4;
            case 0x1FA0F8u: goto label_1fa0f8;
            case 0x1FA0FCu: goto label_1fa0fc;
            case 0x1FA100u: goto label_1fa100;
            case 0x1FA104u: goto label_1fa104;
            case 0x1FA108u: goto label_1fa108;
            case 0x1FA10Cu: goto label_1fa10c;
            case 0x1FA110u: goto label_1fa110;
            case 0x1FA114u: goto label_1fa114;
            case 0x1FA118u: goto label_1fa118;
            case 0x1FA11Cu: goto label_1fa11c;
            case 0x1FA120u: goto label_1fa120;
            case 0x1FA124u: goto label_1fa124;
            case 0x1FA128u: goto label_1fa128;
            case 0x1FA12Cu: goto label_1fa12c;
            case 0x1FA130u: goto label_1fa130;
            case 0x1FA134u: goto label_1fa134;
            case 0x1FA138u: goto label_1fa138;
            case 0x1FA13Cu: goto label_1fa13c;
            case 0x1FA140u: goto label_1fa140;
            case 0x1FA144u: goto label_1fa144;
            case 0x1FA148u: goto label_1fa148;
            case 0x1FA14Cu: goto label_1fa14c;
            case 0x1FA150u: goto label_1fa150;
            case 0x1FA154u: goto label_1fa154;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA15Cu: goto label_1fa15c;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA164u: goto label_1fa164;
            case 0x1FA168u: goto label_1fa168;
            case 0x1FA16Cu: goto label_1fa16c;
            case 0x1FA170u: goto label_1fa170;
            case 0x1FA174u: goto label_1fa174;
            case 0x1FA178u: goto label_1fa178;
            case 0x1FA17Cu: goto label_1fa17c;
            case 0x1FA180u: goto label_1fa180;
            case 0x1FA184u: goto label_1fa184;
            case 0x1FA188u: goto label_1fa188;
            case 0x1FA18Cu: goto label_1fa18c;
            case 0x1FA190u: goto label_1fa190;
            case 0x1FA194u: goto label_1fa194;
            case 0x1FA198u: goto label_1fa198;
            case 0x1FA19Cu: goto label_1fa19c;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA1A4u: goto label_1fa1a4;
            case 0x1FA1A8u: goto label_1fa1a8;
            case 0x1FA1ACu: goto label_1fa1ac;
            case 0x1FA1B0u: goto label_1fa1b0;
            case 0x1FA1B4u: goto label_1fa1b4;
            case 0x1FA1B8u: goto label_1fa1b8;
            case 0x1FA1BCu: goto label_1fa1bc;
            case 0x1FA1C0u: goto label_1fa1c0;
            case 0x1FA1C4u: goto label_1fa1c4;
            case 0x1FA1C8u: goto label_1fa1c8;
            case 0x1FA1CCu: goto label_1fa1cc;
            case 0x1FA1D0u: goto label_1fa1d0;
            case 0x1FA1D4u: goto label_1fa1d4;
            case 0x1FA1D8u: goto label_1fa1d8;
            case 0x1FA1DCu: goto label_1fa1dc;
            case 0x1FA1E0u: goto label_1fa1e0;
            case 0x1FA1E4u: goto label_1fa1e4;
            case 0x1FA1E8u: goto label_1fa1e8;
            case 0x1FA1ECu: goto label_1fa1ec;
            case 0x1FA1F0u: goto label_1fa1f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1fa1ec:
    ctx->pc = 0x1FA1F4u;
}
