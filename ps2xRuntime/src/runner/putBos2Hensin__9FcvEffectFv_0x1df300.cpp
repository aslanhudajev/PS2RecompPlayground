#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBos2Hensin__9FcvEffectFv
// Address: 0x1df300 - 0x1df440
void putBos2Hensin__9FcvEffectFv_0x1df300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBos2Hensin__9FcvEffectFv");


    ctx->pc = 0x1df300u;

    // 0x1df300: 0x27bdffc0
    ctx->pc = 0x1df300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df304: 0x7fbf0030
    ctx->pc = 0x1df304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df308: 0x7fb20020
    ctx->pc = 0x1df308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df30c: 0x7fb10010
    ctx->pc = 0x1df30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df310: 0x7fb00000
    ctx->pc = 0x1df310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df314: 0x70809628
    ctx->pc = 0x1df314u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df318: 0x4bede37d
    ctx->pc = 0x1df318u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df31c: 0x4bedeb7d
    ctx->pc = 0x1df31cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df320: 0x4bedf37d
    ctx->pc = 0x1df320u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df324: 0x4bedfb7d
    ctx->pc = 0x1df324u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df328: 0xc48d0040
    ctx->pc = 0x1df328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df32c: 0xc48e0044
    ctx->pc = 0x1df32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df330: 0xc06c202
    ctx->pc = 0x1DF330u;
    SET_GPR_U32(ctx, 31, 0x1DF338u);
    ctx->pc = 0x1DF334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF338u; }
        else if (ctx->pc != 0x1DF338u) { ctx->pc = 0x1DF338u; }
    }
    if (ctx->pc != 0x1DF338u) { return; }
    ctx->pc = 0x1DF338u;
    // 0x1df338: 0xc06c0fb
    ctx->pc = 0x1DF338u;
    SET_GPR_U32(ctx, 31, 0x1DF340u);
    ctx->pc = 0x1DF33Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF340u; }
        else if (ctx->pc != 0x1DF340u) { ctx->pc = 0x1DF340u; }
    }
    if (ctx->pc != 0x1DF340u) { return; }
    ctx->pc = 0x1DF340u;
    // 0x1df340: 0xc06c09f
    ctx->pc = 0x1DF340u;
    SET_GPR_U32(ctx, 31, 0x1DF348u);
    ctx->pc = 0x1DF344u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF348u; }
        else if (ctx->pc != 0x1DF348u) { ctx->pc = 0x1DF348u; }
    }
    if (ctx->pc != 0x1DF348u) { return; }
    ctx->pc = 0x1DF348u;
    // 0x1df348: 0xc06c157
    ctx->pc = 0x1DF348u;
    SET_GPR_U32(ctx, 31, 0x1DF350u);
    ctx->pc = 0x1DF34Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF350u; }
        else if (ctx->pc != 0x1DF350u) { ctx->pc = 0x1DF350u; }
    }
    if (ctx->pc != 0x1DF350u) { return; }
    ctx->pc = 0x1DF350u;
    // 0x1df350: 0x70008628
    ctx->pc = 0x1df350u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df354: 0x10000008
    ctx->pc = 0x1DF354u;
    {
        const bool branch_taken_0x1df354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF358u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df354) {
            ctx->pc = 0x1DF378u;
            goto label_1df378;
        }
    }
    ctx->pc = 0x1DF35Cu;
label_1df35c:
    // 0x1df35c: 0x8e420058
    ctx->pc = 0x1df35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1df360: 0xc64c0024
    ctx->pc = 0x1df360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df364: 0xc07a42c
    ctx->pc = 0x1DF364u;
    SET_GPR_U32(ctx, 31, 0x1DF36Cu);
    ctx->pc = 0x1DF368u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF36Cu; }
        else if (ctx->pc != 0x1DF36Cu) { ctx->pc = 0x1DF36Cu; }
    }
    if (ctx->pc != 0x1DF36Cu) { return; }
    ctx->pc = 0x1DF36Cu;
    // 0x1df36c: 0x263100f0
    ctx->pc = 0x1df36cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1df370: 0x26100001
    ctx->pc = 0x1df370u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1df374: 0x0
    ctx->pc = 0x1df374u;
    // NOP
label_1df378:
    // 0x1df378: 0x8e430004
    ctx->pc = 0x1df378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1df37c: 0x203182a
    ctx->pc = 0x1df37cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1df380: 0x1460fff6
    ctx->pc = 0x1DF380u;
    {
        const bool branch_taken_0x1df380 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df380) {
            ctx->pc = 0x1DF35Cu;
            goto label_1df35c;
        }
    }
    ctx->pc = 0x1DF388u;
    // 0x1df388: 0x70008e28
    ctx->pc = 0x1df388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df38c: 0x10000008
    ctx->pc = 0x1DF38Cu;
    {
        const bool branch_taken_0x1df38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF390u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df38c) {
            ctx->pc = 0x1DF3B0u;
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF394u;
label_1df394:
    // 0x1df394: 0x8e42005c
    ctx->pc = 0x1df394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1df398: 0xc64c0024
    ctx->pc = 0x1df398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df39c: 0xc07a42c
    ctx->pc = 0x1DF39Cu;
    SET_GPR_U32(ctx, 31, 0x1DF3A4u);
    ctx->pc = 0x1DF3A0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF3A4u; }
        else if (ctx->pc != 0x1DF3A4u) { ctx->pc = 0x1DF3A4u; }
    }
    if (ctx->pc != 0x1DF3A4u) { return; }
    ctx->pc = 0x1DF3A4u;
    // 0x1df3a4: 0x261000f0
    ctx->pc = 0x1df3a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
    // 0x1df3a8: 0x26310001
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1df3ac: 0x0
    ctx->pc = 0x1df3acu;
    // NOP
label_1df3b0:
    // 0x1df3b0: 0x8e430008
    ctx->pc = 0x1df3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1df3b4: 0x223182a
    ctx->pc = 0x1df3b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df3b8: 0x1460fff6
    ctx->pc = 0x1DF3B8u;
    {
        const bool branch_taken_0x1df3b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df3b8) {
            ctx->pc = 0x1DF394u;
            goto label_1df394;
        }
    }
    ctx->pc = 0x1DF3C0u;
    // 0x1df3c0: 0x70008e28
    ctx->pc = 0x1df3c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df3c4: 0x10000010
    ctx->pc = 0x1DF3C4u;
    {
        const bool branch_taken_0x1df3c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF3C8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df3c4) {
            ctx->pc = 0x1DF408u;
            goto label_1df408;
        }
    }
    ctx->pc = 0x1DF3CCu;
label_1df3cc:
    // 0x1df3cc: 0xc6400024
    ctx->pc = 0x1df3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df3d0: 0x3c023f99
    ctx->pc = 0x1df3d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x1df3d4: 0x3442999a
    ctx->pc = 0x1df3d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1df3d8: 0x44820800
    ctx->pc = 0x1df3d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1df3dc: 0x8e430060
    ctx->pc = 0x1df3dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1df3e0: 0x3c023f80
    ctx->pc = 0x1df3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df3e4: 0x46010303
    ctx->pc = 0x1df3e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x1df3e8: 0x44826800
    ctx->pc = 0x1df3e8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df3ec: 0x0
    ctx->pc = 0x1df3ecu;
    // NOP
    // 0x1df3f0: 0x0
    ctx->pc = 0x1df3f0u;
    // NOP
    // 0x1df3f4: 0xc079f30
    ctx->pc = 0x1DF3F4u;
    SET_GPR_U32(ctx, 31, 0x1DF3FCu);
    ctx->pc = 0x1DF3F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF3FCu; }
        else if (ctx->pc != 0x1DF3FCu) { ctx->pc = 0x1DF3FCu; }
    }
    if (ctx->pc != 0x1DF3FCu) { return; }
    ctx->pc = 0x1DF3FCu;
    // 0x1df3fc: 0x261000f0
    ctx->pc = 0x1df3fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
    // 0x1df400: 0x26310001
    ctx->pc = 0x1df400u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1df404: 0x0
    ctx->pc = 0x1df404u;
    // NOP
label_1df408:
    // 0x1df408: 0x8e43000c
    ctx->pc = 0x1df408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1df40c: 0x223182a
    ctx->pc = 0x1df40cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df410: 0x1460ffee
    ctx->pc = 0x1DF410u;
    {
        const bool branch_taken_0x1df410 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df410) {
            ctx->pc = 0x1DF3CCu;
            goto label_1df3cc;
        }
    }
    ctx->pc = 0x1DF418u;
    // 0x1df418: 0x4bff6b7e
    ctx->pc = 0x1df418u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df41c: 0x4bfe6b7e
    ctx->pc = 0x1df41cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df420: 0x4bfd6b7e
    ctx->pc = 0x1df420u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df424: 0x4bfc6b7e
    ctx->pc = 0x1df424u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df428: 0x7bbf0030
    ctx->pc = 0x1df428u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df42c: 0x7bb20020
    ctx->pc = 0x1df42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df430: 0x7bb10010
    ctx->pc = 0x1df430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df434: 0x7bb00000
    ctx->pc = 0x1df434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df438: 0x3e00008
    ctx->pc = 0x1DF438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF43Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF35Cu: goto label_1df35c;
            case 0x1DF378u: goto label_1df378;
            case 0x1DF394u: goto label_1df394;
            case 0x1DF3B0u: goto label_1df3b0;
            case 0x1DF3CCu: goto label_1df3cc;
            case 0x1DF408u: goto label_1df408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF440u;
}
