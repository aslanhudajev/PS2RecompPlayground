#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: partsInit_rcv__12BodyMgrClassFP7_BODYPT
// Address: 0x1fb6f0 - 0x1fb8bc
void partsInit_rcv__12BodyMgrClassFP7_BODYPT_0x1fb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("partsInit_rcv__12BodyMgrClassFP7_BODYPT");


    ctx->pc = 0x1fb6f0u;

label_1fb6f0:
    // 0x1fb6f0: 0x27bdffb0
    ctx->pc = 0x1fb6f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fb6f4: 0x7fbf0040
    ctx->pc = 0x1fb6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fb6f8: 0x7fb30030
    ctx->pc = 0x1fb6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fb6fc: 0x7fb20020
    ctx->pc = 0x1fb6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb700: 0x7fb10010
    ctx->pc = 0x1fb700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb704: 0x7fb00000
    ctx->pc = 0x1fb704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb708: 0x84aa0020
    ctx->pc = 0x1fb708u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fb70c: 0x8c880060
    ctx->pc = 0x1fb70cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1fb710: 0x8c870000
    ctx->pc = 0x1fb710u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb714: 0x8ca60000
    ctx->pc = 0x1fb714u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb718: 0x3c033f80
    ctx->pc = 0x1fb718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1fb71c: 0x24020021
    ctx->pc = 0x1fb71cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1fb720: 0xa4840
    ctx->pc = 0x1fb720u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 10), 1));
    // 0x1fb724: 0x12a4821
    ctx->pc = 0x1fb724u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1fb728: 0x94840
    ctx->pc = 0x1fb728u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1fb72c: 0x1098021
    ctx->pc = 0x1fb72cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1fb730: 0xa4100
    ctx->pc = 0x1fb730u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 4));
    // 0x1fb734: 0x10a4023
    ctx->pc = 0x1fb734u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1fb738: 0x84100
    ctx->pc = 0x1fb738u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 4));
    // 0x1fb73c: 0xe88821
    ctx->pc = 0x1fb73cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1fb740: 0xae260000
    ctx->pc = 0x1fb740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1fb744: 0xa62000c8
    ctx->pc = 0x1fb744u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 200), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb748: 0xae2300b8
    ctx->pc = 0x1fb748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1fb74c: 0xae2300b8
    ctx->pc = 0x1fb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1fb750: 0xae2300bc
    ctx->pc = 0x1fb750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x1fb754: 0xae2200b0
    ctx->pc = 0x1fb754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x1fb758: 0xae2000b4
    ctx->pc = 0x1fb758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x1fb75c: 0xae2000ec
    ctx->pc = 0x1fb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x1fb760: 0x8c870004
    ctx->pc = 0x1fb760u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb764: 0x8ca60000
    ctx->pc = 0x1fb764u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb768: 0x84a30020
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fb76c: 0x70a09628
    ctx->pc = 0x1fb76cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fb770: 0x70809e28
    ctx->pc = 0x1fb770u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fb774: 0x3c02009b
    ctx->pc = 0x1fb774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)155 << 16));
    // 0x1fb778: 0x24443580
    ctx->pc = 0x1fb778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13696));
    // 0x1fb77c: 0x84e5002c
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1fb780: 0x31080
    ctx->pc = 0x1fb780u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb784: 0x431021
    ctx->pc = 0x1fb784u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb788: 0x21880
    ctx->pc = 0x1fb788u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb78c: 0x51080
    ctx->pc = 0x1fb78cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fb790: 0x821021
    ctx->pc = 0x1fb790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb794: 0x8c420000
    ctx->pc = 0x1fb794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb798: 0x621821
    ctx->pc = 0x1fb798u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb79c: 0x8c62ffec
    ctx->pc = 0x1fb79cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967276)));
    // 0x1fb7a0: 0x14c20019
    ctx->pc = 0x1FB7A0u;
    {
        const bool branch_taken_0x1fb7a0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x1fb7a0) {
            ctx->pc = 0x1FB808u;
            goto label_1fb808;
        }
    }
    ctx->pc = 0x1FB7A8u;
    // 0x1fb7a8: 0xc4e11ca0
    ctx->pc = 0x1fb7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb7ac: 0xc460fffc
    ctx->pc = 0x1fb7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb7b0: 0x3c02009b
    ctx->pc = 0x1fb7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)155 << 16));
    // 0x1fb7b4: 0x24443580
    ctx->pc = 0x1fb7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13696));
    // 0x1fb7b8: 0x46000802
    ctx->pc = 0x1fb7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fb7bc: 0xe62000e4
    ctx->pc = 0x1fb7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x1fb7c0: 0x8e630004
    ctx->pc = 0x1fb7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1fb7c4: 0x86420020
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fb7c8: 0x8465002c
    ctx->pc = 0x1fb7c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1fb7cc: 0x2443ffff
    ctx->pc = 0x1fb7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fb7d0: 0x31080
    ctx->pc = 0x1fb7d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb7d4: 0x431021
    ctx->pc = 0x1fb7d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb7d8: 0x21880
    ctx->pc = 0x1fb7d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb7dc: 0x51080
    ctx->pc = 0x1fb7dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fb7e0: 0x821021
    ctx->pc = 0x1fb7e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb7e4: 0x8c420000
    ctx->pc = 0x1fb7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb7e8: 0x431021
    ctx->pc = 0x1fb7e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb7ec: 0xc4400004
    ctx->pc = 0x1fb7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb7f0: 0xe62000d8
    ctx->pc = 0x1fb7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x1fb7f4: 0xc4400008
    ctx->pc = 0x1fb7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb7f8: 0xe62000dc
    ctx->pc = 0x1fb7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x1fb7fc: 0xc440000c
    ctx->pc = 0x1fb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb800: 0x10000005
    ctx->pc = 0x1FB800u;
    {
        const bool branch_taken_0x1fb800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB804u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        if (branch_taken_0x1fb800) {
            ctx->pc = 0x1FB818u;
            goto label_1fb818;
        }
    }
    ctx->pc = 0x1FB808u;
label_1fb808:
    // 0x1fb808: 0xae2000e4
    ctx->pc = 0x1fb808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x1fb80c: 0xae2000e0
    ctx->pc = 0x1fb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x1fb810: 0xae2000dc
    ctx->pc = 0x1fb810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1fb814: 0xae2000d8
    ctx->pc = 0x1fb814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_1fb818:
    // 0x1fb818: 0x4bede37d
    ctx->pc = 0x1fb818u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fb81c: 0x4bedeb7d
    ctx->pc = 0x1fb81cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fb820: 0x4bedf37d
    ctx->pc = 0x1fb820u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fb824: 0x4bedfb7d
    ctx->pc = 0x1fb824u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1fb828: 0xc06c157
    ctx->pc = 0x1FB828u;
    SET_GPR_U32(ctx, 31, 0x1FB830u);
    ctx->pc = 0x1FB82Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB830u; }
        else if (ctx->pc != 0x1FB830u) { ctx->pc = 0x1FB830u; }
    }
    if (ctx->pc != 0x1FB830u) { return; }
    ctx->pc = 0x1FB830u;
    // 0x1fb830: 0xc06c0fb
    ctx->pc = 0x1FB830u;
    SET_GPR_U32(ctx, 31, 0x1FB838u);
    ctx->pc = 0x1FB834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB838u; }
        else if (ctx->pc != 0x1FB838u) { ctx->pc = 0x1FB838u; }
    }
    if (ctx->pc != 0x1FB838u) { return; }
    ctx->pc = 0x1FB838u;
    // 0x1fb838: 0xc06c09f
    ctx->pc = 0x1FB838u;
    SET_GPR_U32(ctx, 31, 0x1FB840u);
    ctx->pc = 0x1FB83Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB840u; }
        else if (ctx->pc != 0x1FB840u) { ctx->pc = 0x1FB840u; }
    }
    if (ctx->pc != 0x1FB840u) { return; }
    ctx->pc = 0x1FB840u;
    // 0x1fb840: 0x86020000
    ctx->pc = 0x1fb840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb844: 0x26240030
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fb848: 0xae220004
    ctx->pc = 0x1fb848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1fb84c: 0x86020002
    ctx->pc = 0x1fb84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1fb850: 0xae220008
    ctx->pc = 0x1fb850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1fb854: 0x86020004
    ctx->pc = 0x1fb854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fb858: 0xc06bf55
    ctx->pc = 0x1FB858u;
    SET_GPR_U32(ctx, 31, 0x1FB860u);
    ctx->pc = 0x1FB85Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB860u; }
        else if (ctx->pc != 0x1FB860u) { ctx->pc = 0x1FB860u; }
    }
    if (ctx->pc != 0x1FB860u) { return; }
    ctx->pc = 0x1FB860u;
    // 0x1fb860: 0x70008628
    ctx->pc = 0x1fb860u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb864: 0x10000006
    ctx->pc = 0x1FB864u;
    {
        const bool branch_taken_0x1fb864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB868u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb864) {
            ctx->pc = 0x1FB880u;
            goto label_1fb880;
        }
    }
    ctx->pc = 0x1FB86Cu;
label_1fb86c:
    // 0x1fb86c: 0x8e250024
    ctx->pc = 0x1fb86cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1fb870: 0xc07edbc
    ctx->pc = 0x1FB870u;
    SET_GPR_U32(ctx, 31, 0x1FB878u);
    ctx->pc = 0x1FB874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB6F0u;
    goto label_1fb6f0;
    ctx->pc = 0x1FB878u;
label_1fb878:
    // 0x1fb878: 0x26310004
    ctx->pc = 0x1fb878u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fb87c: 0x26100001
    ctx->pc = 0x1fb87cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1fb880:
    // 0x1fb880: 0x86430022
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1fb884: 0x203182a
    ctx->pc = 0x1fb884u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1fb888: 0x1460fff8
    ctx->pc = 0x1FB888u;
    {
        const bool branch_taken_0x1fb888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fb888) {
            ctx->pc = 0x1FB86Cu;
            goto label_1fb86c;
        }
    }
    ctx->pc = 0x1FB890u;
    // 0x1fb890: 0x4bff6b7e
    ctx->pc = 0x1fb890u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fb894: 0x4bfe6b7e
    ctx->pc = 0x1fb894u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fb898: 0x4bfd6b7e
    ctx->pc = 0x1fb898u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fb89c: 0x4bfc6b7e
    ctx->pc = 0x1fb89cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fb8a0: 0x7bbf0040
    ctx->pc = 0x1fb8a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb8a4: 0x7bb30030
    ctx->pc = 0x1fb8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb8a8: 0x7bb20020
    ctx->pc = 0x1fb8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb8ac: 0x7bb10010
    ctx->pc = 0x1fb8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb8b0: 0x7bb00000
    ctx->pc = 0x1fb8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb8b4: 0x3e00008
    ctx->pc = 0x1FB8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB6F0u: goto label_1fb6f0;
            case 0x1FB808u: goto label_1fb808;
            case 0x1FB818u: goto label_1fb818;
            case 0x1FB86Cu: goto label_1fb86c;
            case 0x1FB878u: goto label_1fb878;
            case 0x1FB880u: goto label_1fb880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FB8BCu;
}
