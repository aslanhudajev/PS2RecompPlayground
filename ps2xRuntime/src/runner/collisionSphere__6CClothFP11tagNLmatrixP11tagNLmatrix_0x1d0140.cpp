#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: collisionSphere__6CClothFP11tagNLmatrixP11tagNLmatrix
// Address: 0x1d0140 - 0x1d0450
void collisionSphere__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("collisionSphere__6CClothFP11tagNLmatrixP11tagNLmatrix");


    ctx->pc = 0x1d0140u;

    // 0x1d0140: 0x27bdfea0
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d0144: 0x7fbf00b0
    ctx->pc = 0x1d0144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 31));
    // 0x1d0148: 0x7fbe00a0
    ctx->pc = 0x1d0148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d014c: 0x7fb70090
    ctx->pc = 0x1d014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d0150: 0x7fb60080
    ctx->pc = 0x1d0150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d0154: 0x7fb50070
    ctx->pc = 0x1d0154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d0158: 0x7fb40060
    ctx->pc = 0x1d0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d015c: 0x7fb30050
    ctx->pc = 0x1d015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d0160: 0x7fb20040
    ctx->pc = 0x1d0160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d0164: 0x7fb10030
    ctx->pc = 0x1d0164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d0168: 0x7fb00020
    ctx->pc = 0x1d0168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d016c: 0xe7bb001c
    ctx->pc = 0x1d016cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d0170: 0xe7ba0018
    ctx->pc = 0x1d0170u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d0174: 0xe7b90014
    ctx->pc = 0x1d0174u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d0178: 0xe7b80010
    ctx->pc = 0x1d0178u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d017c: 0xe7b7000c
    ctx->pc = 0x1d017cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d0180: 0xe7b60008
    ctx->pc = 0x1d0180u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d0184: 0xe7b50004
    ctx->pc = 0x1d0184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d0188: 0xe7b40000
    ctx->pc = 0x1d0188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d018c: 0xafa500e0
    ctx->pc = 0x1d018cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x1d0190: 0xafa600d0
    ctx->pc = 0x1d0190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x1d0194: 0xafa400ec
    ctx->pc = 0x1d0194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x1d0198: 0x84860018
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d019c: 0x8485001a
    ctx->pc = 0x1d019cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1d01a0: 0x2403000b
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d01a4: 0x8484001c
    ctx->pc = 0x1d01a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d01a8: 0x10830004
    ctx->pc = 0x1D01A8u;
    {
        const bool branch_taken_0x1d01a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D01ACu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1d01a8) {
            ctx->pc = 0x1D01BCu;
            goto label_1d01bc;
        }
    }
    ctx->pc = 0x1D01B0u;
    // 0x1d01b0: 0x2403000e
    ctx->pc = 0x1d01b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d01b4: 0x14830092
    ctx->pc = 0x1D01B4u;
    {
        const bool branch_taken_0x1d01b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d01b4) {
            ctx->pc = 0x1D0400u;
            goto label_1d0400;
        }
    }
    ctx->pc = 0x1D01BCu;
label_1d01bc:
    // 0x1d01bc: 0x2403000e
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d01c0: 0x14830008
    ctx->pc = 0x1D01C0u;
    {
        const bool branch_taken_0x1d01c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D01C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d01c0) {
            ctx->pc = 0x1D01E4u;
            goto label_1d01e4;
        }
    }
    ctx->pc = 0x1D01C8u;
    // 0x1d01c8: 0x2403000d
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d01cc: 0xafa300f0
    ctx->pc = 0x1d01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1d01d0: 0x24030010
    ctx->pc = 0x1d01d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d01d4: 0xafa300f4
    ctx->pc = 0x1d01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x1d01d8: 0x24030002
    ctx->pc = 0x1d01d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d01dc: 0x10000004
    ctx->pc = 0x1D01DCu;
    {
        const bool branch_taken_0x1d01dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D01E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x1d01dc) {
            ctx->pc = 0x1D01F0u;
            goto label_1d01f0;
        }
    }
    ctx->pc = 0x1D01E4u;
label_1d01e4:
    // 0x1d01e4: 0xafa300c0
    ctx->pc = 0x1d01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d01e8: 0x8fa300c0
    ctx->pc = 0x1d01e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d01ec: 0xafa300f0
    ctx->pc = 0x1d01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1d01f0:
    // 0x1d01f0: 0x8fa300c0
    ctx->pc = 0x1d01f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d01f4: 0x3082a
    ctx->pc = 0x1d01f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1d01f8: 0x10200081
    ctx->pc = 0x1D01F8u;
    {
        const bool branch_taken_0x1d01f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D01FCu;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d01f8) {
            ctx->pc = 0x1D0400u;
            goto label_1d0400;
        }
    }
    ctx->pc = 0x1D0200u;
    // 0x1d0200: 0x27be00f0
    ctx->pc = 0x1d0200u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 240));
label_1d0204:
    // 0x1d0204: 0x4bede37d
    ctx->pc = 0x1d0204u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d0208: 0x4bedeb7d
    ctx->pc = 0x1d0208u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d020c: 0x4bedf37d
    ctx->pc = 0x1d020cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d0210: 0x4bedfb7d
    ctx->pc = 0x1d0210u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d0214: 0x8fc20000
    ctx->pc = 0x1d0214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d0218: 0x21980
    ctx->pc = 0x1d0218u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d021c: 0x8fa200e0
    ctx->pc = 0x1d021cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d0220: 0xc06c038
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0228u; }
        else if (ctx->pc != 0x1D0228u) { ctx->pc = 0x1D0228u; }
    }
    if (ctx->pc != 0x1D0228u) { return; }
    ctx->pc = 0x1D0228u;
    // 0x1d0228: 0xc06c06f
    ctx->pc = 0x1D0228u;
    SET_GPR_U32(ctx, 31, 0x1D0230u);
    ctx->pc = 0x1D022Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0230u; }
        else if (ctx->pc != 0x1D0230u) { ctx->pc = 0x1D0230u; }
    }
    if (ctx->pc != 0x1D0230u) { return; }
    ctx->pc = 0x1D0230u;
    // 0x1d0230: 0xc06bf55
    ctx->pc = 0x1D0230u;
    SET_GPR_U32(ctx, 31, 0x1D0238u);
    ctx->pc = 0x1D0234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0238u; }
        else if (ctx->pc != 0x1D0238u) { ctx->pc = 0x1D0238u; }
    }
    if (ctx->pc != 0x1D0238u) { return; }
    ctx->pc = 0x1D0238u;
    // 0x1d0238: 0xc0691c4
    ctx->pc = 0x1D0238u;
    SET_GPR_U32(ctx, 31, 0x1D0240u);
    ctx->pc = 0x1D023Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0240u; }
        else if (ctx->pc != 0x1D0240u) { ctx->pc = 0x1D0240u; }
    }
    if (ctx->pc != 0x1D0240u) { return; }
    ctx->pc = 0x1D0240u;
    // 0x1d0240: 0x8fa300ec
    ctx->pc = 0x1d0240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d0244: 0x8464001c
    ctx->pc = 0x1d0244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d0248: 0x2403000e
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d024c: 0x14830012
    ctx->pc = 0x1D024Cu;
    {
        const bool branch_taken_0x1d024c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D0250u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16025 << 16));
        if (branch_taken_0x1d024c) {
            ctx->pc = 0x1D0298u;
            goto label_1d0298;
        }
    }
    ctx->pc = 0x1D0254u;
    // 0x1d0254: 0x16e00006
    ctx->pc = 0x1D0254u;
    {
        const bool branch_taken_0x1d0254 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D0258u;
        SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
        if (branch_taken_0x1d0254) {
            ctx->pc = 0x1D0270u;
            goto label_1d0270;
        }
    }
    ctx->pc = 0x1D025Cu;
    // 0x1d025c: 0x3c033f00
    ctx->pc = 0x1d025cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x1d0260: 0x4483b800
    ctx->pc = 0x1d0260u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
    // 0x1d0264: 0x10000005
    ctx->pc = 0x1D0264u;
    {
        const bool branch_taken_0x1d0264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0268u;
        SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
        if (branch_taken_0x1d0264) {
            ctx->pc = 0x1D027Cu;
            goto label_1d027c;
        }
    }
    ctx->pc = 0x1D026Cu;
    // 0x1d026c: 0x3c03bf00
    ctx->pc = 0x1d026cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
label_1d0270:
    // 0x1d0270: 0x4483b800
    ctx->pc = 0x1d0270u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 3);
    // 0x1d0274: 0x0
    ctx->pc = 0x1d0274u;
    // NOP
    // 0x1d0278: 0x3c03bf00
    ctx->pc = 0x1d0278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48896 << 16));
label_1d027c:
    // 0x1d027c: 0x4483d000
    ctx->pc = 0x1d027cu;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 3);
    // 0x1d0280: 0x3c033fb3
    ctx->pc = 0x1d0280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16307 << 16));
    // 0x1d0284: 0x34633333
    ctx->pc = 0x1d0284u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13107));
    // 0x1d0288: 0x4483b000
    ctx->pc = 0x1d0288u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1d028c: 0x1000000a
    ctx->pc = 0x1D028Cu;
    {
        const bool branch_taken_0x1d028c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0290u;
        ctx->f[24] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x1d028c) {
            ctx->pc = 0x1D02B8u;
            goto label_1d02b8;
        }
    }
    ctx->pc = 0x1D0294u;
    // 0x1d0294: 0x3c033e99
    ctx->pc = 0x1d0294u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16025 << 16));
label_1d0298:
    // 0x1d0298: 0x3463999a
    ctx->pc = 0x1d0298u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1d029c: 0x4483d000
    ctx->pc = 0x1d029cu;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 3);
    // 0x1d02a0: 0x4480b800
    ctx->pc = 0x1d02a0u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1d02a4: 0x3c033f00
    ctx->pc = 0x1d02a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x1d02a8: 0x4483c000
    ctx->pc = 0x1d02a8u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 3);
    // 0x1d02ac: 0x3c034020
    ctx->pc = 0x1d02acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16416 << 16));
    // 0x1d02b0: 0x4483b000
    ctx->pc = 0x1d02b0u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x1d02b4: 0x0
    ctx->pc = 0x1d02b4u;
    // NOP
label_1d02b8:
    // 0x1d02b8: 0x8fa300ec
    ctx->pc = 0x1d02b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d02bc: 0x12082a
    ctx->pc = 0x1d02bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
    // 0x1d02c0: 0x8c710000
    ctx->pc = 0x1d02c0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d02c4: 0x10200044
    ctx->pc = 0x1D02C4u;
    {
        const bool branch_taken_0x1d02c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D02C8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d02c4) {
            ctx->pc = 0x1D03D8u;
            goto label_1d03d8;
        }
    }
    ctx->pc = 0x1D02CCu;
    // 0x1d02cc: 0x4616b642
    ctx->pc = 0x1d02ccu;
    ctx->f[25] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_1d02d0:
    // 0x1d02d0: 0xc6200000
    ctx->pc = 0x1d02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d02d4: 0x27b60144
    ctx->pc = 0x1d02d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 324));
    // 0x1d02d8: 0x27b30148
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 328));
    // 0x1d02dc: 0x27a40140
    ctx->pc = 0x1d02dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d02e0: 0x27a50150
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d02e4: 0xe7a00140
    ctx->pc = 0x1d02e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d02e8: 0xc6200004
    ctx->pc = 0x1d02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d02ec: 0xe6c00000
    ctx->pc = 0x1d02ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1d02f0: 0xc6200008
    ctx->pc = 0x1d02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d02f4: 0xc06bf00
    ctx->pc = 0x1D02F4u;
    SET_GPR_U32(ctx, 31, 0x1D02FCu);
    ctx->pc = 0x1D02F8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02FCu; }
        else if (ctx->pc != 0x1D02FCu) { ctx->pc = 0x1D02FCu; }
    }
    if (ctx->pc != 0x1D02FCu) { return; }
    ctx->pc = 0x1D02FCu;
    // 0x1d02fc: 0x27b40154
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 340));
    // 0x1d0300: 0x27b50158
    ctx->pc = 0x1d0300u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 344));
    // 0x1d0304: 0xc7a20150
    ctx->pc = 0x1d0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0308: 0xc6810000
    ctx->pc = 0x1d0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d030c: 0xc6a00000
    ctx->pc = 0x1d030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0310: 0x461716c1
    ctx->pc = 0x1d0310u;
    ctx->f[27] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x1d0314: 0x461a0d01
    ctx->pc = 0x1d0314u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x1d0318: 0x46180541
    ctx->pc = 0x1d0318u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1d031c: 0x461bd842
    ctx->pc = 0x1d031cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[27]);
    // 0x1d0320: 0x4614a002
    ctx->pc = 0x1d0320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1d0324: 0x46000818
    ctx->pc = 0x1d0324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d0328: 0x4615ab1c
    ctx->pc = 0x1d0328u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x1d032c: 0x46196034
    ctx->pc = 0x1d032cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0330: 0x0
    ctx->pc = 0x1d0330u;
    // NOP
    // 0x1d0334: 0x45020025
    ctx->pc = 0x1D0334u;
    {
        const bool branch_taken_0x1d0334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0334) {
            ctx->pc = 0x1D0338u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1D03CCu;
            goto label_1d03cc;
        }
    }
    ctx->pc = 0x1D033Cu;
    // 0x1d033c: 0xc06c2a8
    ctx->pc = 0x1D033Cu;
    SET_GPR_U32(ctx, 31, 0x1D0344u);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0344u; }
        else if (ctx->pc != 0x1D0344u) { ctx->pc = 0x1D0344u; }
    }
    if (ctx->pc != 0x1D0344u) { return; }
    ctx->pc = 0x1D0344u;
    // 0x1d0344: 0x0
    ctx->pc = 0x1d0344u;
    // NOP
    // 0x1d0348: 0x0
    ctx->pc = 0x1d0348u;
    // NOP
    // 0x1d034c: 0x4600dec3
    ctx->pc = 0x1d034cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = copysignf(INFINITY, ctx->f[27] * 0.0f); } else ctx->f[27] = ctx->f[27] / ctx->f[0];
    // 0x1d0350: 0x4616d842
    ctx->pc = 0x1d0350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[22]);
    // 0x1d0354: 0x4601b840
    ctx->pc = 0x1d0354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x1d0358: 0x4600a503
    ctx->pc = 0x1d0358u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1d035c: 0xe7a10140
    ctx->pc = 0x1d035cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d0360: 0x4600ad43
    ctx->pc = 0x1d0360u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x1d0364: 0x4616a002
    ctx->pc = 0x1d0364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1d0368: 0x4600d000
    ctx->pc = 0x1d0368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x1d036c: 0xe6c00000
    ctx->pc = 0x1d036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1d0370: 0x4616a802
    ctx->pc = 0x1d0370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x1d0374: 0x4600c000
    ctx->pc = 0x1d0374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x1d0378: 0xe6600000
    ctx->pc = 0x1d0378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d037c: 0x4bede37d
    ctx->pc = 0x1d037cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d0380: 0x4bedeb7d
    ctx->pc = 0x1d0380u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d0384: 0x4bedf37d
    ctx->pc = 0x1d0384u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d0388: 0x4bedfb7d
    ctx->pc = 0x1d0388u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d038c: 0xc06c038
    ctx->pc = 0x1D038Cu;
    SET_GPR_U32(ctx, 31, 0x1D0394u);
    ctx->pc = 0x1D0390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0394u; }
        else if (ctx->pc != 0x1D0394u) { ctx->pc = 0x1D0394u; }
    }
    if (ctx->pc != 0x1D0394u) { return; }
    ctx->pc = 0x1D0394u;
    // 0x1d0394: 0x27a40140
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d0398: 0xc06bf00
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x1D039Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03A0u; }
        else if (ctx->pc != 0x1D03A0u) { ctx->pc = 0x1D03A0u; }
    }
    if (ctx->pc != 0x1D03A0u) { return; }
    ctx->pc = 0x1D03A0u;
    // 0x1d03a0: 0xc7a00150
    ctx->pc = 0x1d03a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03a4: 0xe6200000
    ctx->pc = 0x1d03a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d03a8: 0xc6800000
    ctx->pc = 0x1d03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03ac: 0xe6200004
    ctx->pc = 0x1d03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d03b0: 0xc6a00000
    ctx->pc = 0x1d03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03b4: 0xe6200008
    ctx->pc = 0x1d03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1d03b8: 0x4bff6b7e
    ctx->pc = 0x1d03b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d03bc: 0x4bfe6b7e
    ctx->pc = 0x1d03bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d03c0: 0x4bfd6b7e
    ctx->pc = 0x1d03c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d03c4: 0x4bfc6b7e
    ctx->pc = 0x1d03c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d03c8: 0x26100001
    ctx->pc = 0x1d03c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d03cc:
    // 0x1d03cc: 0x212182a
    ctx->pc = 0x1d03ccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x1d03d0: 0x1460ffbf
    ctx->pc = 0x1D03D0u;
    {
        const bool branch_taken_0x1d03d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D03D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1d03d0) {
            ctx->pc = 0x1D02D0u;
            goto label_1d02d0;
        }
    }
    ctx->pc = 0x1D03D8u;
label_1d03d8:
    // 0x1d03d8: 0x4bff6b7e
    ctx->pc = 0x1d03d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d03dc: 0x4bfe6b7e
    ctx->pc = 0x1d03dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d03e0: 0x4bfd6b7e
    ctx->pc = 0x1d03e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d03e4: 0x4bfc6b7e
    ctx->pc = 0x1d03e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d03e8: 0x8fa300c0
    ctx->pc = 0x1d03e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d03ec: 0x26f70001
    ctx->pc = 0x1d03ecu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d03f0: 0x2e3182a
    ctx->pc = 0x1d03f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 3)));
    // 0x1d03f4: 0x1460ff83
    ctx->pc = 0x1D03F4u;
    {
        const bool branch_taken_0x1d03f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D03F8u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x1d03f4) {
            ctx->pc = 0x1D0204u;
            goto label_1d0204;
        }
    }
    ctx->pc = 0x1D03FCu;
    // 0x1d03fc: 0x0
    ctx->pc = 0x1d03fcu;
    // NOP
label_1d0400:
    // 0x1d0400: 0x7bbf00b0
    ctx->pc = 0x1d0400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0404: 0x7bbe00a0
    ctx->pc = 0x1d0404u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d0408: 0x7bb70090
    ctx->pc = 0x1d0408u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d040c: 0x7bb60080
    ctx->pc = 0x1d040cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0410: 0x7bb50070
    ctx->pc = 0x1d0410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0414: 0x7bb40060
    ctx->pc = 0x1d0414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0418: 0x7bb30050
    ctx->pc = 0x1d0418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d041c: 0x7bb20040
    ctx->pc = 0x1d041cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0420: 0x7bb10030
    ctx->pc = 0x1d0420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0424: 0x7bb00020
    ctx->pc = 0x1d0424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0428: 0xc7bb001c
    ctx->pc = 0x1d0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1d042c: 0xc7ba0018
    ctx->pc = 0x1d042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d0430: 0xc7b90014
    ctx->pc = 0x1d0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d0434: 0xc7b80010
    ctx->pc = 0x1d0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d0438: 0xc7b7000c
    ctx->pc = 0x1d0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d043c: 0xc7b60008
    ctx->pc = 0x1d043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d0440: 0xc7b50004
    ctx->pc = 0x1d0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d0444: 0xc7b40000
    ctx->pc = 0x1d0444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d0448: 0x3e00008
    ctx->pc = 0x1D0448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D044Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D01BCu: goto label_1d01bc;
            case 0x1D01E4u: goto label_1d01e4;
            case 0x1D01F0u: goto label_1d01f0;
            case 0x1D0204u: goto label_1d0204;
            case 0x1D0270u: goto label_1d0270;
            case 0x1D027Cu: goto label_1d027c;
            case 0x1D0298u: goto label_1d0298;
            case 0x1D02B8u: goto label_1d02b8;
            case 0x1D02D0u: goto label_1d02d0;
            case 0x1D03CCu: goto label_1d03cc;
            case 0x1D03D8u: goto label_1d03d8;
            case 0x1D0400u: goto label_1d0400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0450u;
}
