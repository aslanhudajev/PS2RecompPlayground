#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMat_rcv__12BodyMgrClassFP7_BODYPT
// Address: 0x1fb210 - 0x1fb5cc
void putMat_rcv__12BodyMgrClassFP7_BODYPT_0x1fb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMat_rcv__12BodyMgrClassFP7_BODYPT");


    ctx->pc = 0x1fb210u;

label_1fb210:
    // 0x1fb210: 0x27bdff60
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fb214:
    // 0x1fb214: 0x7fbf0060
    ctx->pc = 0x1fb214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_1fb218:
    // 0x1fb218: 0x7fb50050
    ctx->pc = 0x1fb218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fb21c:
    // 0x1fb21c: 0x7fb40040
    ctx->pc = 0x1fb21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fb220:
    // 0x1fb220: 0x7fb30030
    ctx->pc = 0x1fb220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fb224:
    // 0x1fb224: 0x7fb20020
    ctx->pc = 0x1fb224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fb228:
    // 0x1fb228: 0x7fb10010
    ctx->pc = 0x1fb228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb22c:
    // 0x1fb22c: 0x7fb00000
    ctx->pc = 0x1fb22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb230:
    // 0x1fb230: 0x8c820000
    ctx->pc = 0x1fb230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb234:
    // 0x1fb234: 0x70809e28
    ctx->pc = 0x1fb234u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1fb238:
    // 0x1fb238: 0x70a09628
    ctx->pc = 0x1fb238u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1fb23c:
    // 0x1fb23c: 0x84a40020
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_1fb240:
    // 0x1fb240: 0x41900
    ctx->pc = 0x1fb240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_1fb244:
    // 0x1fb244: 0x641823
    ctx->pc = 0x1fb244u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb248:
    // 0x1fb248: 0x31900
    ctx->pc = 0x1fb248u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_1fb24c:
    // 0x1fb24c: 0x43a021
    ctx->pc = 0x1fb24cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb250:
    // 0x1fb250: 0x869000c0
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 192)));
label_1fb254:
    // 0x1fb254: 0x4bede37d
    ctx->pc = 0x1fb254u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fb258:
    // 0x1fb258: 0x4bedeb7d
    ctx->pc = 0x1fb258u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fb25c:
    // 0x1fb25c: 0x4bedf37d
    ctx->pc = 0x1fb25cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1fb260:
    // 0x1fb260: 0x4bedfb7d
    ctx->pc = 0x1fb260u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fb264:
    // 0x1fb264: 0xc4ad0008
    ctx->pc = 0x1fb264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb268:
    // 0x1fb268: 0xc4ae000c
    ctx->pc = 0x1fb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fb26c:
    // 0x1fb26c: 0xc06c202
label_1fb270:
    if (ctx->pc == 0x1FB270u) {
        ctx->pc = 0x1FB270u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1FB274u;
        goto label_1fb274;
    }
    ctx->pc = 0x1FB26Cu;
    SET_GPR_U32(ctx, 31, 0x1FB274u);
    ctx->pc = 0x1FB270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB274u; }
        else if (ctx->pc != 0x1FB274u) { ctx->pc = 0x1FB274u; }
    }
    if (ctx->pc != 0x1FB274u) { return; }
    ctx->pc = 0x1FB274u;
label_1fb274:
    // 0x1fb274: 0x8e630004
    ctx->pc = 0x1fb274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb278:
    // 0x1fb278: 0x2031021
    ctx->pc = 0x1fb278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1fb27c:
    // 0x1fb27c: 0x8042003a
    ctx->pc = 0x1fb27cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
label_1fb280:
    // 0x1fb280: 0x30420001
    ctx->pc = 0x1fb280u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1fb284:
    // 0x1fb284: 0x10400020
label_1fb288:
    if (ctx->pc == 0x1FB288u) {
        ctx->pc = 0x1FB28Cu;
        goto label_1fb28c;
    }
    ctx->pc = 0x1FB284u;
    {
        const bool branch_taken_0x1fb284 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb284) {
            ctx->pc = 0x1FB308u;
            goto label_1fb308;
        }
    }
    ctx->pc = 0x1FB28Cu;
label_1fb28c:
    // 0x1fb28c: 0x4bede37d
    ctx->pc = 0x1fb28cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fb290:
    // 0x1fb290: 0x4bedeb7d
    ctx->pc = 0x1fb290u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fb294:
    // 0x1fb294: 0x4bedf37d
    ctx->pc = 0x1fb294u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1fb298:
    // 0x1fb298: 0x4bedfb7d
    ctx->pc = 0x1fb298u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fb29c:
    // 0x1fb29c: 0x101040
    ctx->pc = 0x1fb29cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
label_1fb2a0:
    // 0x1fb2a0: 0x431021
    ctx->pc = 0x1fb2a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb2a4:
    // 0x1fb2a4: 0x8443002e
    ctx->pc = 0x1fb2a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_1fb2a8:
    // 0x1fb2a8: 0x72602628
    ctx->pc = 0x1fb2a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1fb2ac:
    // 0x1fb2ac: 0x26850010
    ctx->pc = 0x1fb2acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 16));
label_1fb2b0:
    // 0x1fb2b0: 0x2686001c
    ctx->pc = 0x1fb2b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 28));
label_1fb2b4:
    // 0x1fb2b4: 0x84420032
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_1fb2b8:
    // 0x1fb2b8: 0x44830800
    ctx->pc = 0x1fb2b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1fb2bc:
    // 0x1fb2bc: 0x0
    ctx->pc = 0x1fb2bcu;
    // NOP
label_1fb2c0:
    // 0x1fb2c0: 0x46800860
    ctx->pc = 0x1fb2c0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1fb2c4:
    // 0x1fb2c4: 0x44820000
    ctx->pc = 0x1fb2c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1fb2c8:
    // 0x1fb2c8: 0x0
    ctx->pc = 0x1fb2c8u;
    // NOP
label_1fb2cc:
    // 0x1fb2cc: 0x46800020
    ctx->pc = 0x1fb2ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1fb2d0:
    // 0x1fb2d0: 0x46000b03
    ctx->pc = 0x1fb2d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1fb2d4:
    // 0x1fb2d4: 0x0
    ctx->pc = 0x1fb2d4u;
    // NOP
label_1fb2d8:
    // 0x1fb2d8: 0x0
    ctx->pc = 0x1fb2d8u;
    // NOP
label_1fb2dc:
    // 0x1fb2dc: 0xc07ee9c
label_1fb2e0:
    if (ctx->pc == 0x1FB2E0u) {
        ctx->pc = 0x1FB2E4u;
        goto label_1fb2e4;
    }
    ctx->pc = 0x1FB2DCu;
    SET_GPR_U32(ctx, 31, 0x1FB2E4u);
    ctx->pc = 0x1FBA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf_0x1fba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2E4u; }
        else if (ctx->pc != 0x1FB2E4u) { ctx->pc = 0x1FB2E4u; }
    }
    if (ctx->pc != 0x1FB2E4u) { return; }
    ctx->pc = 0x1FB2E4u;
label_1fb2e4:
    // 0x1fb2e4: 0x27a40070
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
label_1fb2e8:
    // 0x1fb2e8: 0x27a50074
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 116));
label_1fb2ec:
    // 0x1fb2ec: 0xc0724f8
label_1fb2f0:
    if (ctx->pc == 0x1FB2F0u) {
        ctx->pc = 0x1FB2F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1FB2F4u;
        goto label_1fb2f4;
    }
    ctx->pc = 0x1FB2ECu;
    SET_GPR_U32(ctx, 31, 0x1FB2F4u);
    ctx->pc = 0x1FB2F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2F4u; }
        else if (ctx->pc != 0x1FB2F4u) { ctx->pc = 0x1FB2F4u; }
    }
    if (ctx->pc != 0x1FB2F4u) { return; }
    ctx->pc = 0x1FB2F4u;
label_1fb2f4:
    // 0x1fb2f4: 0x4bff6b7e
    ctx->pc = 0x1fb2f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fb2f8:
    // 0x1fb2f8: 0x4bfe6b7e
    ctx->pc = 0x1fb2f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fb2fc:
    // 0x1fb2fc: 0x4bfd6b7e
    ctx->pc = 0x1fb2fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fb300:
    // 0x1fb300: 0x1000000f
label_1fb304:
    if (ctx->pc == 0x1FB304u) {
        ctx->pc = 0x1FB304u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1FB308u;
        goto label_1fb308;
    }
    ctx->pc = 0x1FB300u;
    {
        const bool branch_taken_0x1fb300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB304u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1fb300) {
            ctx->pc = 0x1FB340u;
            goto label_1fb340;
        }
    }
    ctx->pc = 0x1FB308u;
label_1fb308:
    // 0x1fb308: 0x86440020
    ctx->pc = 0x1fb308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_1fb30c:
    // 0x1fb30c: 0x101080
    ctx->pc = 0x1fb30cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1fb310:
    // 0x1fb310: 0x531021
    ctx->pc = 0x1fb310u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fb314:
    // 0x1fb314: 0x8c420064
    ctx->pc = 0x1fb314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1fb318:
    // 0x1fb318: 0x41840
    ctx->pc = 0x1fb318u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_1fb31c:
    // 0x1fb31c: 0x641821
    ctx->pc = 0x1fb31cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb320:
    // 0x1fb320: 0x31840
    ctx->pc = 0x1fb320u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_1fb324:
    // 0x1fb324: 0x431821
    ctx->pc = 0x1fb324u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb328:
    // 0x1fb328: 0x8462000c
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1fb32c:
    // 0x1fb32c: 0xafa20070
    ctx->pc = 0x1fb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1fb330:
    // 0x1fb330: 0x8462000e
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1fb334:
    // 0x1fb334: 0xafa20074
    ctx->pc = 0x1fb334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fb338:
    // 0x1fb338: 0x84620010
    ctx->pc = 0x1fb338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fb33c:
    // 0x1fb33c: 0xafa20078
    ctx->pc = 0x1fb33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fb340:
    // 0x1fb340: 0x27b10078
    ctx->pc = 0x1fb340u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 120));
label_1fb344:
    // 0x1fb344: 0xc06c157
label_1fb348:
    if (ctx->pc == 0x1FB348u) {
        ctx->pc = 0x1FB348u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1FB34Cu;
        goto label_1fb34c;
    }
    ctx->pc = 0x1FB344u;
    SET_GPR_U32(ctx, 31, 0x1FB34Cu);
    ctx->pc = 0x1FB348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB34Cu; }
        else if (ctx->pc != 0x1FB34Cu) { ctx->pc = 0x1FB34Cu; }
    }
    if (ctx->pc != 0x1FB34Cu) { return; }
    ctx->pc = 0x1FB34Cu;
label_1fb34c:
    // 0x1fb34c: 0x27b00074
    ctx->pc = 0x1fb34cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 116));
label_1fb350:
    // 0x1fb350: 0xc06c0fb
label_1fb354:
    if (ctx->pc == 0x1FB354u) {
        ctx->pc = 0x1FB354u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1FB358u;
        goto label_1fb358;
    }
    ctx->pc = 0x1FB350u;
    SET_GPR_U32(ctx, 31, 0x1FB358u);
    ctx->pc = 0x1FB354u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB358u; }
        else if (ctx->pc != 0x1FB358u) { ctx->pc = 0x1FB358u; }
    }
    if (ctx->pc != 0x1FB358u) { return; }
    ctx->pc = 0x1FB358u;
label_1fb358:
    // 0x1fb358: 0xc06c09f
label_1fb35c:
    if (ctx->pc == 0x1FB35Cu) {
        ctx->pc = 0x1FB35Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1FB360u;
        goto label_1fb360;
    }
    ctx->pc = 0x1FB358u;
    SET_GPR_U32(ctx, 31, 0x1FB360u);
    ctx->pc = 0x1FB35Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB360u; }
        else if (ctx->pc != 0x1FB360u) { ctx->pc = 0x1FB360u; }
    }
    if (ctx->pc != 0x1FB360u) { return; }
    ctx->pc = 0x1FB360u;
label_1fb360:
    // 0x1fb360: 0x3c020050
    ctx->pc = 0x1fb360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1fb364:
    // 0x1fb364: 0xc07ce18
label_1fb368:
    if (ctx->pc == 0x1FB368u) {
        ctx->pc = 0x1FB368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1FB36Cu;
        goto label_1fb36c;
    }
    ctx->pc = 0x1FB364u;
    SET_GPR_U32(ctx, 31, 0x1FB36Cu);
    ctx->pc = 0x1FB368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB36Cu; }
        else if (ctx->pc != 0x1FB36Cu) { ctx->pc = 0x1FB36Cu; }
    }
    if (ctx->pc != 0x1FB36Cu) { return; }
    ctx->pc = 0x1FB36Cu;
label_1fb36c:
    // 0x1fb36c: 0x1c400007
label_1fb370:
    if (ctx->pc == 0x1FB370u) {
        ctx->pc = 0x1FB370u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x1FB374u;
        goto label_1fb374;
    }
    ctx->pc = 0x1FB36Cu;
    {
        const bool branch_taken_0x1fb36c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FB370u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 48));
        if (branch_taken_0x1fb36c) {
            ctx->pc = 0x1FB38Cu;
            goto label_1fb38c;
        }
    }
    ctx->pc = 0x1FB374u;
label_1fb374:
    // 0x1fb374: 0x8fa20070
    ctx->pc = 0x1fb374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb378:
    // 0x1fb378: 0xae820004
    ctx->pc = 0x1fb378u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1fb37c:
    // 0x1fb37c: 0x8e020000
    ctx->pc = 0x1fb37cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fb380:
    // 0x1fb380: 0xae820008
    ctx->pc = 0x1fb380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1fb384:
    // 0x1fb384: 0x8e220000
    ctx->pc = 0x1fb384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fb388:
    // 0x1fb388: 0xae82000c
    ctx->pc = 0x1fb388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_1fb38c:
    // 0x1fb38c: 0xc06bf55
label_1fb390:
    if (ctx->pc == 0x1FB390u) {
        ctx->pc = 0x1FB394u;
        goto label_1fb394;
    }
    ctx->pc = 0x1FB38Cu;
    SET_GPR_U32(ctx, 31, 0x1FB394u);
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB394u; }
        else if (ctx->pc != 0x1FB394u) { ctx->pc = 0x1FB394u; }
    }
    if (ctx->pc != 0x1FB394u) { return; }
    ctx->pc = 0x1FB394u;
label_1fb394:
    // 0x1fb394: 0xc68000d8
    ctx->pc = 0x1fb394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb398:
    // 0x1fb398: 0x27a40080
    ctx->pc = 0x1fb398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1fb39c:
    // 0x1fb39c: 0x27a50090
    ctx->pc = 0x1fb39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_1fb3a0:
    // 0x1fb3a0: 0xe7a00080
    ctx->pc = 0x1fb3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fb3a4:
    // 0x1fb3a4: 0xc68000dc
    ctx->pc = 0x1fb3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3a8:
    // 0x1fb3a8: 0xe7a00084
    ctx->pc = 0x1fb3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fb3ac:
    // 0x1fb3ac: 0xc68000e0
    ctx->pc = 0x1fb3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3b0:
    // 0x1fb3b0: 0xc06bf00
label_1fb3b4:
    if (ctx->pc == 0x1FB3B4u) {
        ctx->pc = 0x1FB3B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1FB3B8u;
        goto label_1fb3b8;
    }
    ctx->pc = 0x1FB3B0u;
    SET_GPR_U32(ctx, 31, 0x1FB3B8u);
    ctx->pc = 0x1FB3B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB3B8u; }
        else if (ctx->pc != 0x1FB3B8u) { ctx->pc = 0x1FB3B8u; }
    }
    if (ctx->pc != 0x1FB3B8u) { return; }
    ctx->pc = 0x1FB3B8u;
label_1fb3b8:
    // 0x1fb3b8: 0xc7a00090
    ctx->pc = 0x1fb3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3bc:
    // 0x1fb3bc: 0xe68000cc
    ctx->pc = 0x1fb3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 204), bits); }
label_1fb3c0:
    // 0x1fb3c0: 0xc7a00094
    ctx->pc = 0x1fb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3c4:
    // 0x1fb3c4: 0xe68000d0
    ctx->pc = 0x1fb3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
label_1fb3c8:
    // 0x1fb3c8: 0xc7a00098
    ctx->pc = 0x1fb3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3cc:
    // 0x1fb3cc: 0xe68000d4
    ctx->pc = 0x1fb3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
label_1fb3d0:
    // 0x1fb3d0: 0x8e830000
    ctx->pc = 0x1fb3d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fb3d4:
    // 0x1fb3d4: 0x1060000a
label_1fb3d8:
    if (ctx->pc == 0x1FB3D8u) {
        ctx->pc = 0x1FB3DCu;
        goto label_1fb3dc;
    }
    ctx->pc = 0x1FB3D4u;
    {
        const bool branch_taken_0x1fb3d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb3d4) {
            ctx->pc = 0x1FB400u;
            goto label_1fb400;
        }
    }
    ctx->pc = 0x1FB3DCu;
label_1fb3dc:
    // 0x1fb3dc: 0x8e640004
    ctx->pc = 0x1fb3dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb3e0:
    // 0x1fb3e0: 0x8c831c9c
    ctx->pc = 0x1fb3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7324)));
label_1fb3e4:
    // 0x1fb3e4: 0x30630001
    ctx->pc = 0x1fb3e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_1fb3e8:
    // 0x1fb3e8: 0x10600005
label_1fb3ec:
    if (ctx->pc == 0x1FB3ECu) {
        ctx->pc = 0x1FB3F0u;
        goto label_1fb3f0;
    }
    ctx->pc = 0x1FB3E8u;
    {
        const bool branch_taken_0x1fb3e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb3e8) {
            ctx->pc = 0x1FB400u;
            goto label_1fb400;
        }
    }
    ctx->pc = 0x1FB3F0u;
label_1fb3f0:
    // 0x1fb3f0: 0x8c991ca4
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 7332)));
label_1fb3f4:
    // 0x1fb3f4: 0x8f390008
    ctx->pc = 0x1fb3f4u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1fb3f8:
    // 0x1fb3f8: 0x320f809
label_1fb3fc:
    if (ctx->pc == 0x1FB3FCu) {
        ctx->pc = 0x1FB3FCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB400u;
        goto label_1fb400;
    }
    ctx->pc = 0x1FB3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB400u);
        ctx->pc = 0x1FB3FCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB210u: goto label_1fb210;
            case 0x1FB214u: goto label_1fb214;
            case 0x1FB218u: goto label_1fb218;
            case 0x1FB21Cu: goto label_1fb21c;
            case 0x1FB220u: goto label_1fb220;
            case 0x1FB224u: goto label_1fb224;
            case 0x1FB228u: goto label_1fb228;
            case 0x1FB22Cu: goto label_1fb22c;
            case 0x1FB230u: goto label_1fb230;
            case 0x1FB234u: goto label_1fb234;
            case 0x1FB238u: goto label_1fb238;
            case 0x1FB23Cu: goto label_1fb23c;
            case 0x1FB240u: goto label_1fb240;
            case 0x1FB244u: goto label_1fb244;
            case 0x1FB248u: goto label_1fb248;
            case 0x1FB24Cu: goto label_1fb24c;
            case 0x1FB250u: goto label_1fb250;
            case 0x1FB254u: goto label_1fb254;
            case 0x1FB258u: goto label_1fb258;
            case 0x1FB25Cu: goto label_1fb25c;
            case 0x1FB260u: goto label_1fb260;
            case 0x1FB264u: goto label_1fb264;
            case 0x1FB268u: goto label_1fb268;
            case 0x1FB26Cu: goto label_1fb26c;
            case 0x1FB270u: goto label_1fb270;
            case 0x1FB274u: goto label_1fb274;
            case 0x1FB278u: goto label_1fb278;
            case 0x1FB27Cu: goto label_1fb27c;
            case 0x1FB280u: goto label_1fb280;
            case 0x1FB284u: goto label_1fb284;
            case 0x1FB288u: goto label_1fb288;
            case 0x1FB28Cu: goto label_1fb28c;
            case 0x1FB290u: goto label_1fb290;
            case 0x1FB294u: goto label_1fb294;
            case 0x1FB298u: goto label_1fb298;
            case 0x1FB29Cu: goto label_1fb29c;
            case 0x1FB2A0u: goto label_1fb2a0;
            case 0x1FB2A4u: goto label_1fb2a4;
            case 0x1FB2A8u: goto label_1fb2a8;
            case 0x1FB2ACu: goto label_1fb2ac;
            case 0x1FB2B0u: goto label_1fb2b0;
            case 0x1FB2B4u: goto label_1fb2b4;
            case 0x1FB2B8u: goto label_1fb2b8;
            case 0x1FB2BCu: goto label_1fb2bc;
            case 0x1FB2C0u: goto label_1fb2c0;
            case 0x1FB2C4u: goto label_1fb2c4;
            case 0x1FB2C8u: goto label_1fb2c8;
            case 0x1FB2CCu: goto label_1fb2cc;
            case 0x1FB2D0u: goto label_1fb2d0;
            case 0x1FB2D4u: goto label_1fb2d4;
            case 0x1FB2D8u: goto label_1fb2d8;
            case 0x1FB2DCu: goto label_1fb2dc;
            case 0x1FB2E0u: goto label_1fb2e0;
            case 0x1FB2E4u: goto label_1fb2e4;
            case 0x1FB2E8u: goto label_1fb2e8;
            case 0x1FB2ECu: goto label_1fb2ec;
            case 0x1FB2F0u: goto label_1fb2f0;
            case 0x1FB2F4u: goto label_1fb2f4;
            case 0x1FB2F8u: goto label_1fb2f8;
            case 0x1FB2FCu: goto label_1fb2fc;
            case 0x1FB300u: goto label_1fb300;
            case 0x1FB304u: goto label_1fb304;
            case 0x1FB308u: goto label_1fb308;
            case 0x1FB30Cu: goto label_1fb30c;
            case 0x1FB310u: goto label_1fb310;
            case 0x1FB314u: goto label_1fb314;
            case 0x1FB318u: goto label_1fb318;
            case 0x1FB31Cu: goto label_1fb31c;
            case 0x1FB320u: goto label_1fb320;
            case 0x1FB324u: goto label_1fb324;
            case 0x1FB328u: goto label_1fb328;
            case 0x1FB32Cu: goto label_1fb32c;
            case 0x1FB330u: goto label_1fb330;
            case 0x1FB334u: goto label_1fb334;
            case 0x1FB338u: goto label_1fb338;
            case 0x1FB33Cu: goto label_1fb33c;
            case 0x1FB340u: goto label_1fb340;
            case 0x1FB344u: goto label_1fb344;
            case 0x1FB348u: goto label_1fb348;
            case 0x1FB34Cu: goto label_1fb34c;
            case 0x1FB350u: goto label_1fb350;
            case 0x1FB354u: goto label_1fb354;
            case 0x1FB358u: goto label_1fb358;
            case 0x1FB35Cu: goto label_1fb35c;
            case 0x1FB360u: goto label_1fb360;
            case 0x1FB364u: goto label_1fb364;
            case 0x1FB368u: goto label_1fb368;
            case 0x1FB36Cu: goto label_1fb36c;
            case 0x1FB370u: goto label_1fb370;
            case 0x1FB374u: goto label_1fb374;
            case 0x1FB378u: goto label_1fb378;
            case 0x1FB37Cu: goto label_1fb37c;
            case 0x1FB380u: goto label_1fb380;
            case 0x1FB384u: goto label_1fb384;
            case 0x1FB388u: goto label_1fb388;
            case 0x1FB38Cu: goto label_1fb38c;
            case 0x1FB390u: goto label_1fb390;
            case 0x1FB394u: goto label_1fb394;
            case 0x1FB398u: goto label_1fb398;
            case 0x1FB39Cu: goto label_1fb39c;
            case 0x1FB3A0u: goto label_1fb3a0;
            case 0x1FB3A4u: goto label_1fb3a4;
            case 0x1FB3A8u: goto label_1fb3a8;
            case 0x1FB3ACu: goto label_1fb3ac;
            case 0x1FB3B0u: goto label_1fb3b0;
            case 0x1FB3B4u: goto label_1fb3b4;
            case 0x1FB3B8u: goto label_1fb3b8;
            case 0x1FB3BCu: goto label_1fb3bc;
            case 0x1FB3C0u: goto label_1fb3c0;
            case 0x1FB3C4u: goto label_1fb3c4;
            case 0x1FB3C8u: goto label_1fb3c8;
            case 0x1FB3CCu: goto label_1fb3cc;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB3D4u: goto label_1fb3d4;
            case 0x1FB3D8u: goto label_1fb3d8;
            case 0x1FB3DCu: goto label_1fb3dc;
            case 0x1FB3E0u: goto label_1fb3e0;
            case 0x1FB3E4u: goto label_1fb3e4;
            case 0x1FB3E8u: goto label_1fb3e8;
            case 0x1FB3ECu: goto label_1fb3ec;
            case 0x1FB3F0u: goto label_1fb3f0;
            case 0x1FB3F4u: goto label_1fb3f4;
            case 0x1FB3F8u: goto label_1fb3f8;
            case 0x1FB3FCu: goto label_1fb3fc;
            case 0x1FB400u: goto label_1fb400;
            case 0x1FB404u: goto label_1fb404;
            case 0x1FB408u: goto label_1fb408;
            case 0x1FB40Cu: goto label_1fb40c;
            case 0x1FB410u: goto label_1fb410;
            case 0x1FB414u: goto label_1fb414;
            case 0x1FB418u: goto label_1fb418;
            case 0x1FB41Cu: goto label_1fb41c;
            case 0x1FB420u: goto label_1fb420;
            case 0x1FB424u: goto label_1fb424;
            case 0x1FB428u: goto label_1fb428;
            case 0x1FB42Cu: goto label_1fb42c;
            case 0x1FB430u: goto label_1fb430;
            case 0x1FB434u: goto label_1fb434;
            case 0x1FB438u: goto label_1fb438;
            case 0x1FB43Cu: goto label_1fb43c;
            case 0x1FB440u: goto label_1fb440;
            case 0x1FB444u: goto label_1fb444;
            case 0x1FB448u: goto label_1fb448;
            case 0x1FB44Cu: goto label_1fb44c;
            case 0x1FB450u: goto label_1fb450;
            case 0x1FB454u: goto label_1fb454;
            case 0x1FB458u: goto label_1fb458;
            case 0x1FB45Cu: goto label_1fb45c;
            case 0x1FB460u: goto label_1fb460;
            case 0x1FB464u: goto label_1fb464;
            case 0x1FB468u: goto label_1fb468;
            case 0x1FB46Cu: goto label_1fb46c;
            case 0x1FB470u: goto label_1fb470;
            case 0x1FB474u: goto label_1fb474;
            case 0x1FB478u: goto label_1fb478;
            case 0x1FB47Cu: goto label_1fb47c;
            case 0x1FB480u: goto label_1fb480;
            case 0x1FB484u: goto label_1fb484;
            case 0x1FB488u: goto label_1fb488;
            case 0x1FB48Cu: goto label_1fb48c;
            case 0x1FB490u: goto label_1fb490;
            case 0x1FB494u: goto label_1fb494;
            case 0x1FB498u: goto label_1fb498;
            case 0x1FB49Cu: goto label_1fb49c;
            case 0x1FB4A0u: goto label_1fb4a0;
            case 0x1FB4A4u: goto label_1fb4a4;
            case 0x1FB4A8u: goto label_1fb4a8;
            case 0x1FB4ACu: goto label_1fb4ac;
            case 0x1FB4B0u: goto label_1fb4b0;
            case 0x1FB4B4u: goto label_1fb4b4;
            case 0x1FB4B8u: goto label_1fb4b8;
            case 0x1FB4BCu: goto label_1fb4bc;
            case 0x1FB4C0u: goto label_1fb4c0;
            case 0x1FB4C4u: goto label_1fb4c4;
            case 0x1FB4C8u: goto label_1fb4c8;
            case 0x1FB4CCu: goto label_1fb4cc;
            case 0x1FB4D0u: goto label_1fb4d0;
            case 0x1FB4D4u: goto label_1fb4d4;
            case 0x1FB4D8u: goto label_1fb4d8;
            case 0x1FB4DCu: goto label_1fb4dc;
            case 0x1FB4E0u: goto label_1fb4e0;
            case 0x1FB4E4u: goto label_1fb4e4;
            case 0x1FB4E8u: goto label_1fb4e8;
            case 0x1FB4ECu: goto label_1fb4ec;
            case 0x1FB4F0u: goto label_1fb4f0;
            case 0x1FB4F4u: goto label_1fb4f4;
            case 0x1FB4F8u: goto label_1fb4f8;
            case 0x1FB4FCu: goto label_1fb4fc;
            case 0x1FB500u: goto label_1fb500;
            case 0x1FB504u: goto label_1fb504;
            case 0x1FB508u: goto label_1fb508;
            case 0x1FB50Cu: goto label_1fb50c;
            case 0x1FB510u: goto label_1fb510;
            case 0x1FB514u: goto label_1fb514;
            case 0x1FB518u: goto label_1fb518;
            case 0x1FB51Cu: goto label_1fb51c;
            case 0x1FB520u: goto label_1fb520;
            case 0x1FB524u: goto label_1fb524;
            case 0x1FB528u: goto label_1fb528;
            case 0x1FB52Cu: goto label_1fb52c;
            case 0x1FB530u: goto label_1fb530;
            case 0x1FB534u: goto label_1fb534;
            case 0x1FB538u: goto label_1fb538;
            case 0x1FB53Cu: goto label_1fb53c;
            case 0x1FB540u: goto label_1fb540;
            case 0x1FB544u: goto label_1fb544;
            case 0x1FB548u: goto label_1fb548;
            case 0x1FB54Cu: goto label_1fb54c;
            case 0x1FB550u: goto label_1fb550;
            case 0x1FB554u: goto label_1fb554;
            case 0x1FB558u: goto label_1fb558;
            case 0x1FB55Cu: goto label_1fb55c;
            case 0x1FB560u: goto label_1fb560;
            case 0x1FB564u: goto label_1fb564;
            case 0x1FB568u: goto label_1fb568;
            case 0x1FB56Cu: goto label_1fb56c;
            case 0x1FB570u: goto label_1fb570;
            case 0x1FB574u: goto label_1fb574;
            case 0x1FB578u: goto label_1fb578;
            case 0x1FB57Cu: goto label_1fb57c;
            case 0x1FB580u: goto label_1fb580;
            case 0x1FB584u: goto label_1fb584;
            case 0x1FB588u: goto label_1fb588;
            case 0x1FB58Cu: goto label_1fb58c;
            case 0x1FB590u: goto label_1fb590;
            case 0x1FB594u: goto label_1fb594;
            case 0x1FB598u: goto label_1fb598;
            case 0x1FB59Cu: goto label_1fb59c;
            case 0x1FB5A0u: goto label_1fb5a0;
            case 0x1FB5A4u: goto label_1fb5a4;
            case 0x1FB5A8u: goto label_1fb5a8;
            case 0x1FB5ACu: goto label_1fb5ac;
            case 0x1FB5B0u: goto label_1fb5b0;
            case 0x1FB5B4u: goto label_1fb5b4;
            case 0x1FB5B8u: goto label_1fb5b8;
            case 0x1FB5BCu: goto label_1fb5bc;
            case 0x1FB5C0u: goto label_1fb5c0;
            case 0x1FB5C4u: goto label_1fb5c4;
            case 0x1FB5C8u: goto label_1fb5c8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB400u; }
            if (ctx->pc != 0x1FB400u) { return; }
        }
    }
    ctx->pc = 0x1FB400u;
label_1fb400:
    // 0x1fb400: 0x8e650004
    ctx->pc = 0x1fb400u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb404:
    // 0x1fb404: 0x80a41c90
    ctx->pc = 0x1fb404u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7312)));
label_1fb408:
    // 0x1fb408: 0x28830004
    ctx->pc = 0x1fb408u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4));
label_1fb40c:
    // 0x1fb40c: 0x14600036
label_1fb410:
    if (ctx->pc == 0x1FB410u) {
        ctx->pc = 0x1FB410u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x1FB414u;
        goto label_1fb414;
    }
    ctx->pc = 0x1FB40Cu;
    {
        const bool branch_taken_0x1fb40c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FB410u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x1fb40c) {
            ctx->pc = 0x1FB4E8u;
            goto label_1fb4e8;
        }
    }
    ctx->pc = 0x1FB414u;
label_1fb414:
    // 0x1fb414: 0x84a4002c
    ctx->pc = 0x1fb414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_1fb418:
    // 0x1fb418: 0x86430020
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_1fb41c:
    // 0x1fb41c: 0x3c0101f2
    ctx->pc = 0x1fb41cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)498 << 16));
label_1fb420:
    // 0x1fb420: 0x42880
    ctx->pc = 0x1fb420u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_1fb424:
    // 0x1fb424: 0x32040
    ctx->pc = 0x1fb424u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
label_1fb428:
    // 0x1fb428: 0xa10821
    ctx->pc = 0x1fb428u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1fb42c:
    // 0x1fb42c: 0x8c23a000
    ctx->pc = 0x1fb42cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294942720)));
label_1fb430:
    // 0x1fb430: 0x641821
    ctx->pc = 0x1fb430u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb434:
    // 0x1fb434: 0x84630000
    ctx->pc = 0x1fb434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb438:
    // 0x1fb438: 0x1060004b
label_1fb43c:
    if (ctx->pc == 0x1FB43Cu) {
        ctx->pc = 0x1FB43Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB440u;
        goto label_1fb440;
    }
    ctx->pc = 0x1FB438u;
    {
        const bool branch_taken_0x1fb438 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB43Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb438) {
            ctx->pc = 0x1FB568u;
            goto label_1fb568;
        }
    }
    ctx->pc = 0x1FB440u;
label_1fb440:
    // 0x1fb440: 0xa6a30040
    ctx->pc = 0x1fb440u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 3));
label_1fb444:
    // 0x1fb444: 0x4bede37d
    ctx->pc = 0x1fb444u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fb448:
    // 0x1fb448: 0x4bedeb7d
    ctx->pc = 0x1fb448u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fb44c:
    // 0x1fb44c: 0x4bedf37d
    ctx->pc = 0x1fb44cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1fb450:
    // 0x1fb450: 0x4bedfb7d
    ctx->pc = 0x1fb450u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fb454:
    // 0x1fb454: 0x8f848c48
    ctx->pc = 0x1fb454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_1fb458:
    // 0x1fb458: 0x8c830004
    ctx->pc = 0x1fb458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fb45c:
    // 0x1fb45c: 0x31040
    ctx->pc = 0x1fb45cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1fb460:
    // 0x1fb460: 0x431021
    ctx->pc = 0x1fb460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb464:
    // 0x1fb464: 0x21080
    ctx->pc = 0x1fb464u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1fb468:
    // 0x1fb468: 0x431021
    ctx->pc = 0x1fb468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb46c:
    // 0x1fb46c: 0x21100
    ctx->pc = 0x1fb46cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1fb470:
    // 0x1fb470: 0x821021
    ctx->pc = 0x1fb470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fb474:
    // 0x1fb474: 0xc06c06f
label_1fb478:
    if (ctx->pc == 0x1FB478u) {
        ctx->pc = 0x1FB478u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x1FB47Cu;
        goto label_1fb47c;
    }
    ctx->pc = 0x1FB474u;
    SET_GPR_U32(ctx, 31, 0x1FB47Cu);
    ctx->pc = 0x1FB478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB47Cu; }
        else if (ctx->pc != 0x1FB47Cu) { ctx->pc = 0x1FB47Cu; }
    }
    if (ctx->pc != 0x1FB47Cu) { return; }
    ctx->pc = 0x1FB47Cu;
label_1fb47c:
    // 0x1fb47c: 0x8e630004
    ctx->pc = 0x1fb47cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb480:
    // 0x1fb480: 0x24020004
    ctx->pc = 0x1fb480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1fb484:
    // 0x1fb484: 0xc4601ca0
    ctx->pc = 0x1fb484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb488:
    // 0x1fb488: 0xe6a0004c
    ctx->pc = 0x1fb488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
label_1fb48c:
    // 0x1fb48c: 0x8e630004
    ctx->pc = 0x1fb48cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb490:
    // 0x1fb490: 0xc4601c94
    ctx->pc = 0x1fb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb494:
    // 0x1fb494: 0xe6a00048
    ctx->pc = 0x1fb494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
label_1fb498:
    // 0x1fb498: 0x8e630004
    ctx->pc = 0x1fb498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fb49c:
    // 0x1fb49c: 0x80631c90
    ctx->pc = 0x1fb49cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7312)));
label_1fb4a0:
    // 0x1fb4a0: 0x14620008
label_1fb4a4:
    if (ctx->pc == 0x1FB4A4u) {
        ctx->pc = 0x1FB4A8u;
        goto label_1fb4a8;
    }
    ctx->pc = 0x1FB4A0u;
    {
        const bool branch_taken_0x1fb4a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1fb4a0) {
            ctx->pc = 0x1FB4C4u;
            goto label_1fb4c4;
        }
    }
    ctx->pc = 0x1FB4A8u;
label_1fb4a8:
    // 0x1fb4a8: 0x8f828d44
    ctx->pc = 0x1fb4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
label_1fb4ac:
    // 0x1fb4ac: 0x84420048
    ctx->pc = 0x1fb4acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1fb4b0:
    // 0x1fb4b0: 0xa6a20042
    ctx->pc = 0x1fb4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 66), (uint16_t)GPR_U32(ctx, 2));
label_1fb4b4:
    // 0x1fb4b4: 0x8f828d44
    ctx->pc = 0x1fb4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
label_1fb4b8:
    // 0x1fb4b8: 0x8442004c
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
label_1fb4bc:
    // 0x1fb4bc: 0x10000003
label_1fb4c0:
    if (ctx->pc == 0x1FB4C0u) {
        ctx->pc = 0x1FB4C0u;
        WRITE16(ADD32(GPR_U32(ctx, 21), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FB4C4u;
        goto label_1fb4c4;
    }
    ctx->pc = 0x1FB4BCu;
    {
        const bool branch_taken_0x1fb4bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB4C0u;
        WRITE16(ADD32(GPR_U32(ctx, 21), 68), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1fb4bc) {
            ctx->pc = 0x1FB4CCu;
            goto label_1fb4cc;
        }
    }
    ctx->pc = 0x1FB4C4u;
label_1fb4c4:
    // 0x1fb4c4: 0xa6a00042
    ctx->pc = 0x1fb4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 66), (uint16_t)GPR_U32(ctx, 0));
label_1fb4c8:
    // 0x1fb4c8: 0xa6a00044
    ctx->pc = 0x1fb4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 68), (uint16_t)GPR_U32(ctx, 0));
label_1fb4cc:
    // 0x1fb4cc: 0xc06bf55
label_1fb4d0:
    if (ctx->pc == 0x1FB4D0u) {
        ctx->pc = 0x1FB4D0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB4D4u;
        goto label_1fb4d4;
    }
    ctx->pc = 0x1FB4CCu;
    SET_GPR_U32(ctx, 31, 0x1FB4D4u);
    ctx->pc = 0x1FB4D0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB4D4u; }
        else if (ctx->pc != 0x1FB4D4u) { ctx->pc = 0x1FB4D4u; }
    }
    if (ctx->pc != 0x1FB4D4u) { return; }
    ctx->pc = 0x1FB4D4u;
label_1fb4d4:
    // 0x1fb4d4: 0x4bff6b7e
    ctx->pc = 0x1fb4d4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fb4d8:
    // 0x1fb4d8: 0x4bfe6b7e
    ctx->pc = 0x1fb4d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fb4dc:
    // 0x1fb4dc: 0x4bfd6b7e
    ctx->pc = 0x1fb4dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fb4e0:
    // 0x1fb4e0: 0x10000020
label_1fb4e4:
    if (ctx->pc == 0x1FB4E4u) {
        ctx->pc = 0x1FB4E4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x1FB4E8u;
        goto label_1fb4e8;
    }
    ctx->pc = 0x1FB4E0u;
    {
        const bool branch_taken_0x1fb4e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB4E4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1fb4e0) {
            ctx->pc = 0x1FB564u;
            goto label_1fb564;
        }
    }
    ctx->pc = 0x1FB4E8u;
label_1fb4e8:
    // 0x1fb4e8: 0x1460001e
label_1fb4ec:
    if (ctx->pc == 0x1FB4ECu) {
        ctx->pc = 0x1FB4F0u;
        goto label_1fb4f0;
    }
    ctx->pc = 0x1FB4E8u;
    {
        const bool branch_taken_0x1fb4e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fb4e8) {
            ctx->pc = 0x1FB564u;
            goto label_1fb564;
        }
    }
    ctx->pc = 0x1FB4F0u;
label_1fb4f0:
    // 0x1fb4f0: 0x84a4002c
    ctx->pc = 0x1fb4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_1fb4f4:
    // 0x1fb4f4: 0x86430020
    ctx->pc = 0x1fb4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_1fb4f8:
    // 0x1fb4f8: 0x3c0101f2
    ctx->pc = 0x1fb4f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)498 << 16));
label_1fb4fc:
    // 0x1fb4fc: 0x42880
    ctx->pc = 0x1fb4fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_1fb500:
    // 0x1fb500: 0x32040
    ctx->pc = 0x1fb500u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
label_1fb504:
    // 0x1fb504: 0xa10821
    ctx->pc = 0x1fb504u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1fb508:
    // 0x1fb508: 0x8c23a130
    ctx->pc = 0x1fb508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294943024)));
label_1fb50c:
    // 0x1fb50c: 0x641821
    ctx->pc = 0x1fb50cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb510:
    // 0x1fb510: 0x84630000
    ctx->pc = 0x1fb510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb514:
    // 0x1fb514: 0x10600013
label_1fb518:
    if (ctx->pc == 0x1FB518u) {
        ctx->pc = 0x1FB51Cu;
        goto label_1fb51c;
    }
    ctx->pc = 0x1FB514u;
    {
        const bool branch_taken_0x1fb514 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fb514) {
            ctx->pc = 0x1FB564u;
            goto label_1fb564;
        }
    }
    ctx->pc = 0x1FB51Cu;
label_1fb51c:
    // 0x1fb51c: 0x4bede37d
    ctx->pc = 0x1fb51cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fb520:
    // 0x1fb520: 0x4bedeb7d
    ctx->pc = 0x1fb520u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fb524:
    // 0x1fb524: 0x4bedf37d
    ctx->pc = 0x1fb524u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1fb528:
    // 0x1fb528: 0x4bedfb7d
    ctx->pc = 0x1fb528u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fb52c:
    // 0x1fb52c: 0x8f848c48
    ctx->pc = 0x1fb52cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_1fb530:
    // 0x1fb530: 0x8c830004
    ctx->pc = 0x1fb530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fb534:
    // 0x1fb534: 0x31040
    ctx->pc = 0x1fb534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1fb538:
    // 0x1fb538: 0x431021
    ctx->pc = 0x1fb538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb53c:
    // 0x1fb53c: 0x21080
    ctx->pc = 0x1fb53cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1fb540:
    // 0x1fb540: 0x431021
    ctx->pc = 0x1fb540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb544:
    // 0x1fb544: 0x21100
    ctx->pc = 0x1fb544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1fb548:
    // 0x1fb548: 0x821021
    ctx->pc = 0x1fb548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fb54c:
    // 0x1fb54c: 0xc06c06f
label_1fb550:
    if (ctx->pc == 0x1FB550u) {
        ctx->pc = 0x1FB550u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x1FB554u;
        goto label_1fb554;
    }
    ctx->pc = 0x1FB54Cu;
    SET_GPR_U32(ctx, 31, 0x1FB554u);
    ctx->pc = 0x1FB550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB554u; }
        else if (ctx->pc != 0x1FB554u) { ctx->pc = 0x1FB554u; }
    }
    if (ctx->pc != 0x1FB554u) { return; }
    ctx->pc = 0x1FB554u;
label_1fb554:
    // 0x1fb554: 0x4bff6b7e
    ctx->pc = 0x1fb554u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fb558:
    // 0x1fb558: 0x4bfe6b7e
    ctx->pc = 0x1fb558u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fb55c:
    // 0x1fb55c: 0x4bfd6b7e
    ctx->pc = 0x1fb55cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fb560:
    // 0x1fb560: 0x4bfc6b7e
    ctx->pc = 0x1fb560u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fb564:
    // 0x1fb564: 0x70008628
    ctx->pc = 0x1fb564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fb568:
    // 0x1fb568: 0x10000007
label_1fb56c:
    if (ctx->pc == 0x1FB56Cu) {
        ctx->pc = 0x1FB56Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB570u;
        goto label_1fb570;
    }
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB56Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB588u;
            goto label_1fb588;
        }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0x8e250024
    ctx->pc = 0x1fb570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fb574:
    // 0x1fb574: 0xc07ec84
label_1fb578:
    if (ctx->pc == 0x1FB578u) {
        ctx->pc = 0x1FB578u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FB57Cu;
        goto label_1fb57c;
    }
    ctx->pc = 0x1FB574u;
    SET_GPR_U32(ctx, 31, 0x1FB57Cu);
    ctx->pc = 0x1FB578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB210u;
    goto label_1fb210;
    ctx->pc = 0x1FB57Cu;
label_1fb57c:
    // 0x1fb57c: 0x26310004
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1fb580:
    // 0x1fb580: 0x26100001
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1fb584:
    // 0x1fb584: 0x0
    ctx->pc = 0x1fb584u;
    // NOP
label_1fb588:
    // 0x1fb588: 0x86430022
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
label_1fb58c:
    // 0x1fb58c: 0x203182a
    ctx->pc = 0x1fb58cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_1fb590:
    // 0x1fb590: 0x1460fff7
label_1fb594:
    if (ctx->pc == 0x1FB594u) {
        ctx->pc = 0x1FB598u;
        goto label_1fb598;
    }
    ctx->pc = 0x1FB590u;
    {
        const bool branch_taken_0x1fb590 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fb590) {
            ctx->pc = 0x1FB570u;
            goto label_1fb570;
        }
    }
    ctx->pc = 0x1FB598u;
label_1fb598:
    // 0x1fb598: 0x4bff6b7e
    ctx->pc = 0x1fb598u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fb59c:
    // 0x1fb59c: 0x4bfe6b7e
    ctx->pc = 0x1fb59cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fb5a0:
    // 0x1fb5a0: 0x4bfd6b7e
    ctx->pc = 0x1fb5a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fb5a4:
    // 0x1fb5a4: 0x4bfc6b7e
    ctx->pc = 0x1fb5a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fb5a8:
    // 0x1fb5a8: 0x7bbf0060
    ctx->pc = 0x1fb5a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb5ac:
    // 0x1fb5ac: 0x7bb50050
    ctx->pc = 0x1fb5acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb5b0:
    // 0x1fb5b0: 0x7bb40040
    ctx->pc = 0x1fb5b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb5b4:
    // 0x1fb5b4: 0x7bb30030
    ctx->pc = 0x1fb5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb5b8:
    // 0x1fb5b8: 0x7bb20020
    ctx->pc = 0x1fb5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb5bc:
    // 0x1fb5bc: 0x7bb10010
    ctx->pc = 0x1fb5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb5c0:
    // 0x1fb5c0: 0x7bb00000
    ctx->pc = 0x1fb5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb5c4:
    // 0x1fb5c4: 0x3e00008
label_1fb5c8:
    if (ctx->pc == 0x1FB5C8u) {
        ctx->pc = 0x1FB5C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FB5CCu;
        goto label_fallthrough_0x1fb5c4;
    }
    ctx->pc = 0x1FB5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB5C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB210u: goto label_1fb210;
            case 0x1FB214u: goto label_1fb214;
            case 0x1FB218u: goto label_1fb218;
            case 0x1FB21Cu: goto label_1fb21c;
            case 0x1FB220u: goto label_1fb220;
            case 0x1FB224u: goto label_1fb224;
            case 0x1FB228u: goto label_1fb228;
            case 0x1FB22Cu: goto label_1fb22c;
            case 0x1FB230u: goto label_1fb230;
            case 0x1FB234u: goto label_1fb234;
            case 0x1FB238u: goto label_1fb238;
            case 0x1FB23Cu: goto label_1fb23c;
            case 0x1FB240u: goto label_1fb240;
            case 0x1FB244u: goto label_1fb244;
            case 0x1FB248u: goto label_1fb248;
            case 0x1FB24Cu: goto label_1fb24c;
            case 0x1FB250u: goto label_1fb250;
            case 0x1FB254u: goto label_1fb254;
            case 0x1FB258u: goto label_1fb258;
            case 0x1FB25Cu: goto label_1fb25c;
            case 0x1FB260u: goto label_1fb260;
            case 0x1FB264u: goto label_1fb264;
            case 0x1FB268u: goto label_1fb268;
            case 0x1FB26Cu: goto label_1fb26c;
            case 0x1FB270u: goto label_1fb270;
            case 0x1FB274u: goto label_1fb274;
            case 0x1FB278u: goto label_1fb278;
            case 0x1FB27Cu: goto label_1fb27c;
            case 0x1FB280u: goto label_1fb280;
            case 0x1FB284u: goto label_1fb284;
            case 0x1FB288u: goto label_1fb288;
            case 0x1FB28Cu: goto label_1fb28c;
            case 0x1FB290u: goto label_1fb290;
            case 0x1FB294u: goto label_1fb294;
            case 0x1FB298u: goto label_1fb298;
            case 0x1FB29Cu: goto label_1fb29c;
            case 0x1FB2A0u: goto label_1fb2a0;
            case 0x1FB2A4u: goto label_1fb2a4;
            case 0x1FB2A8u: goto label_1fb2a8;
            case 0x1FB2ACu: goto label_1fb2ac;
            case 0x1FB2B0u: goto label_1fb2b0;
            case 0x1FB2B4u: goto label_1fb2b4;
            case 0x1FB2B8u: goto label_1fb2b8;
            case 0x1FB2BCu: goto label_1fb2bc;
            case 0x1FB2C0u: goto label_1fb2c0;
            case 0x1FB2C4u: goto label_1fb2c4;
            case 0x1FB2C8u: goto label_1fb2c8;
            case 0x1FB2CCu: goto label_1fb2cc;
            case 0x1FB2D0u: goto label_1fb2d0;
            case 0x1FB2D4u: goto label_1fb2d4;
            case 0x1FB2D8u: goto label_1fb2d8;
            case 0x1FB2DCu: goto label_1fb2dc;
            case 0x1FB2E0u: goto label_1fb2e0;
            case 0x1FB2E4u: goto label_1fb2e4;
            case 0x1FB2E8u: goto label_1fb2e8;
            case 0x1FB2ECu: goto label_1fb2ec;
            case 0x1FB2F0u: goto label_1fb2f0;
            case 0x1FB2F4u: goto label_1fb2f4;
            case 0x1FB2F8u: goto label_1fb2f8;
            case 0x1FB2FCu: goto label_1fb2fc;
            case 0x1FB300u: goto label_1fb300;
            case 0x1FB304u: goto label_1fb304;
            case 0x1FB308u: goto label_1fb308;
            case 0x1FB30Cu: goto label_1fb30c;
            case 0x1FB310u: goto label_1fb310;
            case 0x1FB314u: goto label_1fb314;
            case 0x1FB318u: goto label_1fb318;
            case 0x1FB31Cu: goto label_1fb31c;
            case 0x1FB320u: goto label_1fb320;
            case 0x1FB324u: goto label_1fb324;
            case 0x1FB328u: goto label_1fb328;
            case 0x1FB32Cu: goto label_1fb32c;
            case 0x1FB330u: goto label_1fb330;
            case 0x1FB334u: goto label_1fb334;
            case 0x1FB338u: goto label_1fb338;
            case 0x1FB33Cu: goto label_1fb33c;
            case 0x1FB340u: goto label_1fb340;
            case 0x1FB344u: goto label_1fb344;
            case 0x1FB348u: goto label_1fb348;
            case 0x1FB34Cu: goto label_1fb34c;
            case 0x1FB350u: goto label_1fb350;
            case 0x1FB354u: goto label_1fb354;
            case 0x1FB358u: goto label_1fb358;
            case 0x1FB35Cu: goto label_1fb35c;
            case 0x1FB360u: goto label_1fb360;
            case 0x1FB364u: goto label_1fb364;
            case 0x1FB368u: goto label_1fb368;
            case 0x1FB36Cu: goto label_1fb36c;
            case 0x1FB370u: goto label_1fb370;
            case 0x1FB374u: goto label_1fb374;
            case 0x1FB378u: goto label_1fb378;
            case 0x1FB37Cu: goto label_1fb37c;
            case 0x1FB380u: goto label_1fb380;
            case 0x1FB384u: goto label_1fb384;
            case 0x1FB388u: goto label_1fb388;
            case 0x1FB38Cu: goto label_1fb38c;
            case 0x1FB390u: goto label_1fb390;
            case 0x1FB394u: goto label_1fb394;
            case 0x1FB398u: goto label_1fb398;
            case 0x1FB39Cu: goto label_1fb39c;
            case 0x1FB3A0u: goto label_1fb3a0;
            case 0x1FB3A4u: goto label_1fb3a4;
            case 0x1FB3A8u: goto label_1fb3a8;
            case 0x1FB3ACu: goto label_1fb3ac;
            case 0x1FB3B0u: goto label_1fb3b0;
            case 0x1FB3B4u: goto label_1fb3b4;
            case 0x1FB3B8u: goto label_1fb3b8;
            case 0x1FB3BCu: goto label_1fb3bc;
            case 0x1FB3C0u: goto label_1fb3c0;
            case 0x1FB3C4u: goto label_1fb3c4;
            case 0x1FB3C8u: goto label_1fb3c8;
            case 0x1FB3CCu: goto label_1fb3cc;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB3D4u: goto label_1fb3d4;
            case 0x1FB3D8u: goto label_1fb3d8;
            case 0x1FB3DCu: goto label_1fb3dc;
            case 0x1FB3E0u: goto label_1fb3e0;
            case 0x1FB3E4u: goto label_1fb3e4;
            case 0x1FB3E8u: goto label_1fb3e8;
            case 0x1FB3ECu: goto label_1fb3ec;
            case 0x1FB3F0u: goto label_1fb3f0;
            case 0x1FB3F4u: goto label_1fb3f4;
            case 0x1FB3F8u: goto label_1fb3f8;
            case 0x1FB3FCu: goto label_1fb3fc;
            case 0x1FB400u: goto label_1fb400;
            case 0x1FB404u: goto label_1fb404;
            case 0x1FB408u: goto label_1fb408;
            case 0x1FB40Cu: goto label_1fb40c;
            case 0x1FB410u: goto label_1fb410;
            case 0x1FB414u: goto label_1fb414;
            case 0x1FB418u: goto label_1fb418;
            case 0x1FB41Cu: goto label_1fb41c;
            case 0x1FB420u: goto label_1fb420;
            case 0x1FB424u: goto label_1fb424;
            case 0x1FB428u: goto label_1fb428;
            case 0x1FB42Cu: goto label_1fb42c;
            case 0x1FB430u: goto label_1fb430;
            case 0x1FB434u: goto label_1fb434;
            case 0x1FB438u: goto label_1fb438;
            case 0x1FB43Cu: goto label_1fb43c;
            case 0x1FB440u: goto label_1fb440;
            case 0x1FB444u: goto label_1fb444;
            case 0x1FB448u: goto label_1fb448;
            case 0x1FB44Cu: goto label_1fb44c;
            case 0x1FB450u: goto label_1fb450;
            case 0x1FB454u: goto label_1fb454;
            case 0x1FB458u: goto label_1fb458;
            case 0x1FB45Cu: goto label_1fb45c;
            case 0x1FB460u: goto label_1fb460;
            case 0x1FB464u: goto label_1fb464;
            case 0x1FB468u: goto label_1fb468;
            case 0x1FB46Cu: goto label_1fb46c;
            case 0x1FB470u: goto label_1fb470;
            case 0x1FB474u: goto label_1fb474;
            case 0x1FB478u: goto label_1fb478;
            case 0x1FB47Cu: goto label_1fb47c;
            case 0x1FB480u: goto label_1fb480;
            case 0x1FB484u: goto label_1fb484;
            case 0x1FB488u: goto label_1fb488;
            case 0x1FB48Cu: goto label_1fb48c;
            case 0x1FB490u: goto label_1fb490;
            case 0x1FB494u: goto label_1fb494;
            case 0x1FB498u: goto label_1fb498;
            case 0x1FB49Cu: goto label_1fb49c;
            case 0x1FB4A0u: goto label_1fb4a0;
            case 0x1FB4A4u: goto label_1fb4a4;
            case 0x1FB4A8u: goto label_1fb4a8;
            case 0x1FB4ACu: goto label_1fb4ac;
            case 0x1FB4B0u: goto label_1fb4b0;
            case 0x1FB4B4u: goto label_1fb4b4;
            case 0x1FB4B8u: goto label_1fb4b8;
            case 0x1FB4BCu: goto label_1fb4bc;
            case 0x1FB4C0u: goto label_1fb4c0;
            case 0x1FB4C4u: goto label_1fb4c4;
            case 0x1FB4C8u: goto label_1fb4c8;
            case 0x1FB4CCu: goto label_1fb4cc;
            case 0x1FB4D0u: goto label_1fb4d0;
            case 0x1FB4D4u: goto label_1fb4d4;
            case 0x1FB4D8u: goto label_1fb4d8;
            case 0x1FB4DCu: goto label_1fb4dc;
            case 0x1FB4E0u: goto label_1fb4e0;
            case 0x1FB4E4u: goto label_1fb4e4;
            case 0x1FB4E8u: goto label_1fb4e8;
            case 0x1FB4ECu: goto label_1fb4ec;
            case 0x1FB4F0u: goto label_1fb4f0;
            case 0x1FB4F4u: goto label_1fb4f4;
            case 0x1FB4F8u: goto label_1fb4f8;
            case 0x1FB4FCu: goto label_1fb4fc;
            case 0x1FB500u: goto label_1fb500;
            case 0x1FB504u: goto label_1fb504;
            case 0x1FB508u: goto label_1fb508;
            case 0x1FB50Cu: goto label_1fb50c;
            case 0x1FB510u: goto label_1fb510;
            case 0x1FB514u: goto label_1fb514;
            case 0x1FB518u: goto label_1fb518;
            case 0x1FB51Cu: goto label_1fb51c;
            case 0x1FB520u: goto label_1fb520;
            case 0x1FB524u: goto label_1fb524;
            case 0x1FB528u: goto label_1fb528;
            case 0x1FB52Cu: goto label_1fb52c;
            case 0x1FB530u: goto label_1fb530;
            case 0x1FB534u: goto label_1fb534;
            case 0x1FB538u: goto label_1fb538;
            case 0x1FB53Cu: goto label_1fb53c;
            case 0x1FB540u: goto label_1fb540;
            case 0x1FB544u: goto label_1fb544;
            case 0x1FB548u: goto label_1fb548;
            case 0x1FB54Cu: goto label_1fb54c;
            case 0x1FB550u: goto label_1fb550;
            case 0x1FB554u: goto label_1fb554;
            case 0x1FB558u: goto label_1fb558;
            case 0x1FB55Cu: goto label_1fb55c;
            case 0x1FB560u: goto label_1fb560;
            case 0x1FB564u: goto label_1fb564;
            case 0x1FB568u: goto label_1fb568;
            case 0x1FB56Cu: goto label_1fb56c;
            case 0x1FB570u: goto label_1fb570;
            case 0x1FB574u: goto label_1fb574;
            case 0x1FB578u: goto label_1fb578;
            case 0x1FB57Cu: goto label_1fb57c;
            case 0x1FB580u: goto label_1fb580;
            case 0x1FB584u: goto label_1fb584;
            case 0x1FB588u: goto label_1fb588;
            case 0x1FB58Cu: goto label_1fb58c;
            case 0x1FB590u: goto label_1fb590;
            case 0x1FB594u: goto label_1fb594;
            case 0x1FB598u: goto label_1fb598;
            case 0x1FB59Cu: goto label_1fb59c;
            case 0x1FB5A0u: goto label_1fb5a0;
            case 0x1FB5A4u: goto label_1fb5a4;
            case 0x1FB5A8u: goto label_1fb5a8;
            case 0x1FB5ACu: goto label_1fb5ac;
            case 0x1FB5B0u: goto label_1fb5b0;
            case 0x1FB5B4u: goto label_1fb5b4;
            case 0x1FB5B8u: goto label_1fb5b8;
            case 0x1FB5BCu: goto label_1fb5bc;
            case 0x1FB5C0u: goto label_1fb5c0;
            case 0x1FB5C4u: goto label_1fb5c4;
            case 0x1FB5C8u: goto label_1fb5c8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1fb5c4:
    ctx->pc = 0x1FB5CCu;
}
