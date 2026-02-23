#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sunChgCtrl__13LightCtrlTaskFPiPiiif
// Address: 0x1f28a0 - 0x1f2a68
void sunChgCtrl__13LightCtrlTaskFPiPiiif_0x1f28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sunChgCtrl__13LightCtrlTaskFPiPiiif");


    ctx->pc = 0x1f28a0u;

    // 0x1f28a0: 0x27bdff40
    ctx->pc = 0x1f28a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f28a4: 0x7fbf0060
    ctx->pc = 0x1f28a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1f28a8: 0x7fb30050
    ctx->pc = 0x1f28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f28ac: 0x7fb20040
    ctx->pc = 0x1f28acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f28b0: 0x7fb10030
    ctx->pc = 0x1f28b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f28b4: 0x7fb00020
    ctx->pc = 0x1f28b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f28b8: 0xe7b80010
    ctx->pc = 0x1f28b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f28bc: 0x3c033f80
    ctx->pc = 0x1f28bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1f28c0: 0xe7b7000c
    ctx->pc = 0x1f28c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f28c4: 0xe7b60008
    ctx->pc = 0x1f28c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f28c8: 0xe7b50004
    ctx->pc = 0x1f28c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f28cc: 0x44830000
    ctx->pc = 0x1f28ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1f28d0: 0x46006606
    ctx->pc = 0x1f28d0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x1f28d4: 0x46180032
    ctx->pc = 0x1f28d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f28d8: 0xe7b40000
    ctx->pc = 0x1f28d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f28dc: 0x70a09e28
    ctx->pc = 0x1f28dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f28e0: 0x70c09628
    ctx->pc = 0x1f28e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1f28e4: 0x70e08e28
    ctx->pc = 0x1f28e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f28e8: 0x45000004
    ctx->pc = 0x1F28E8u;
    {
        const bool branch_taken_0x1f28e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F28ECu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f28e8) {
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28F0u;
    // 0x1f28f0: 0xae710000
    ctx->pc = 0x1f28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1f28f4: 0x10000050
    ctx->pc = 0x1F28F4u;
    {
        const bool branch_taken_0x1f28f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F28F8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x1f28f4) {
            ctx->pc = 0x1F2A38u;
            goto label_1f2a38;
        }
    }
    ctx->pc = 0x1F28FCu;
label_1f28fc:
    // 0x1f28fc: 0x4bede37d
    ctx->pc = 0x1f28fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1f2900: 0x4bedeb7d
    ctx->pc = 0x1f2900u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1f2904: 0x4bedf37d
    ctx->pc = 0x1f2904u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1f2908: 0xc06c20d
    ctx->pc = 0x1F2908u;
    SET_GPR_U32(ctx, 31, 0x1F2910u);
    ctx->pc = 0x1F290Cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2910u; }
        else if (ctx->pc != 0x1F2910u) { ctx->pc = 0x1F2910u; }
    }
    if (ctx->pc != 0x1F2910u) { return; }
    ctx->pc = 0x1F2910u;
    // 0x1f2910: 0x8e620000
    ctx->pc = 0x1f2910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f2914: 0xc06c09f
    ctx->pc = 0x1F2914u;
    SET_GPR_U32(ctx, 31, 0x1F291Cu);
    ctx->pc = 0x1F2918u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F291Cu; }
        else if (ctx->pc != 0x1F291Cu) { ctx->pc = 0x1F291Cu; }
    }
    if (ctx->pc != 0x1F291Cu) { return; }
    ctx->pc = 0x1F291Cu;
    // 0x1f291c: 0x8e420000
    ctx->pc = 0x1f291cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f2920: 0xc06c0fb
    ctx->pc = 0x1F2920u;
    SET_GPR_U32(ctx, 31, 0x1F2928u);
    ctx->pc = 0x1F2924u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2928u; }
        else if (ctx->pc != 0x1F2928u) { ctx->pc = 0x1F2928u; }
    }
    if (ctx->pc != 0x1F2928u) { return; }
    ctx->pc = 0x1F2928u;
    // 0x1f2928: 0xc06c09f
    ctx->pc = 0x1F2928u;
    SET_GPR_U32(ctx, 31, 0x1F2930u);
    ctx->pc = 0x1F292Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2930u; }
        else if (ctx->pc != 0x1F2930u) { ctx->pc = 0x1F2930u; }
    }
    if (ctx->pc != 0x1F2930u) { return; }
    ctx->pc = 0x1F2930u;
    // 0x1f2930: 0xafa00080
    ctx->pc = 0x1f2930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1f2934: 0xafa00084
    ctx->pc = 0x1f2934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1f2938: 0x3c023f80
    ctx->pc = 0x1f2938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f293c: 0xafa20088
    ctx->pc = 0x1f293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1f2940: 0x27a40080
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f2944: 0xc06bf00
    ctx->pc = 0x1F2944u;
    SET_GPR_U32(ctx, 31, 0x1F294Cu);
    ctx->pc = 0x1F2948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F294Cu; }
        else if (ctx->pc != 0x1F294Cu) { ctx->pc = 0x1F294Cu; }
    }
    if (ctx->pc != 0x1F294Cu) { return; }
    ctx->pc = 0x1F294Cu;
    // 0x1f294c: 0xc7b70090
    ctx->pc = 0x1f294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f2950: 0xc7b50094
    ctx->pc = 0x1f2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f2954: 0xc7b60098
    ctx->pc = 0x1f2954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f2958: 0x4617b81a
    ctx->pc = 0x1f2958u;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x1f295c: 0xc06c2a8
    ctx->pc = 0x1F295Cu;
    SET_GPR_U32(ctx, 31, 0x1F2964u);
    ctx->pc = 0x1F2960u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2964u; }
        else if (ctx->pc != 0x1F2964u) { ctx->pc = 0x1F2964u; }
    }
    if (ctx->pc != 0x1F2964u) { return; }
    ctx->pc = 0x1F2964u;
    // 0x1f2964: 0x46000506
    ctx->pc = 0x1f2964u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f2968: 0x4600b346
    ctx->pc = 0x1f2968u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1f296c: 0xc069e68
    ctx->pc = 0x1F296Cu;
    SET_GPR_U32(ctx, 31, 0x1F2974u);
    ctx->pc = 0x1F2970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2974u; }
        else if (ctx->pc != 0x1F2974u) { ctx->pc = 0x1F2974u; }
    }
    if (ctx->pc != 0x1F2974u) { return; }
    ctx->pc = 0x1F2974u;
    // 0x1f2974: 0x2843c
    ctx->pc = 0x1f2974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2978: 0x10843f
    ctx->pc = 0x1f2978u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1f297c: 0x1200002a
    ctx->pc = 0x1F297Cu;
    {
        const bool branch_taken_0x1f297c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f297c) {
            ctx->pc = 0x1F2A28u;
            goto label_1f2a28;
        }
    }
    ctx->pc = 0x1F2984u;
    // 0x1f2984: 0x24028000
    ctx->pc = 0x1f2984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1f2988: 0x16020006
    ctx->pc = 0x1F2988u;
    {
        const bool branch_taken_0x1f2988 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F298Cu;
        ctx->f[0] = FPU_NEG_S(ctx->f[21]);
        if (branch_taken_0x1f2988) {
            ctx->pc = 0x1F29A4u;
            goto label_1f29a4;
        }
    }
    ctx->pc = 0x1F2990u;
    // 0x1f2990: 0xafa00070
    ctx->pc = 0x1f2990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1f2994: 0x3c023f80
    ctx->pc = 0x1f2994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f2998: 0xafa20074
    ctx->pc = 0x1f2998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1f299c: 0x10000007
    ctx->pc = 0x1F299Cu;
    {
        const bool branch_taken_0x1f299c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F29A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        if (branch_taken_0x1f299c) {
            ctx->pc = 0x1F29BCu;
            goto label_1f29bc;
        }
    }
    ctx->pc = 0x1F29A4u;
label_1f29a4:
    // 0x1f29a4: 0x0
    ctx->pc = 0x1f29a4u;
    // NOP
    // 0x1f29a8: 0x46140043
    ctx->pc = 0x1f29a8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[20];
    // 0x1f29ac: 0x4614b803
    ctx->pc = 0x1f29acu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[20];
    // 0x1f29b0: 0xe7a10070
    ctx->pc = 0x1f29b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f29b4: 0xe7a00074
    ctx->pc = 0x1f29b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f29b8: 0xafa00078
    ctx->pc = 0x1f29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_1f29bc:
    // 0x1f29bc: 0xc06c20d
    ctx->pc = 0x1F29BCu;
    SET_GPR_U32(ctx, 31, 0x1F29C4u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29C4u; }
        else if (ctx->pc != 0x1F29C4u) { ctx->pc = 0x1F29C4u; }
    }
    if (ctx->pc != 0x1F29C4u) { return; }
    ctx->pc = 0x1F29C4u;
    // 0x1f29c4: 0xc06c0fb
    ctx->pc = 0x1F29C4u;
    SET_GPR_U32(ctx, 31, 0x1F29CCu);
    ctx->pc = 0x1F29C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29CCu; }
        else if (ctx->pc != 0x1F29CCu) { ctx->pc = 0x1F29CCu; }
    }
    if (ctx->pc != 0x1F29CCu) { return; }
    ctx->pc = 0x1F29CCu;
    // 0x1f29cc: 0xc06c09f
    ctx->pc = 0x1F29CCu;
    SET_GPR_U32(ctx, 31, 0x1F29D4u);
    ctx->pc = 0x1F29D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29D4u; }
        else if (ctx->pc != 0x1F29D4u) { ctx->pc = 0x1F29D4u; }
    }
    if (ctx->pc != 0x1F29D4u) { return; }
    ctx->pc = 0x1F29D4u;
    // 0x1f29d4: 0x44900000
    ctx->pc = 0x1f29d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x1f29d8: 0x0
    ctx->pc = 0x1f29d8u;
    // NOP
    // 0x1f29dc: 0x46800020
    ctx->pc = 0x1f29dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1f29e0: 0x46180002
    ctx->pc = 0x1f29e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1f29e4: 0x46000024
    ctx->pc = 0x1f29e4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1f29e8: 0x44050000
    ctx->pc = 0x1f29e8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1f29ec: 0xc06940c
    ctx->pc = 0x1F29ECu;
    SET_GPR_U32(ctx, 31, 0x1F29F4u);
    ctx->pc = 0x1F29F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1A5030u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxe_0x1a5030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F29F4u; }
        else if (ctx->pc != 0x1F29F4u) { ctx->pc = 0x1F29F4u; }
    }
    if (ctx->pc != 0x1F29F4u) { return; }
    ctx->pc = 0x1F29F4u;
    // 0x1f29f4: 0xafa000a0
    ctx->pc = 0x1f29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1f29f8: 0xafa000a4
    ctx->pc = 0x1f29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1f29fc: 0x3c023f80
    ctx->pc = 0x1f29fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f2a00: 0xafa200a8
    ctx->pc = 0x1f2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1f2a04: 0x27a400a0
    ctx->pc = 0x1f2a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f2a08: 0xc06bf00
    ctx->pc = 0x1F2A08u;
    SET_GPR_U32(ctx, 31, 0x1F2A10u);
    ctx->pc = 0x1F2A0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A10u; }
        else if (ctx->pc != 0x1F2A10u) { ctx->pc = 0x1F2A10u; }
    }
    if (ctx->pc != 0x1F2A10u) { return; }
    ctx->pc = 0x1F2A10u;
    // 0x1f2a10: 0xc7ac00b0
    ctx->pc = 0x1f2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f2a14: 0xc7ad00b4
    ctx->pc = 0x1f2a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f2a18: 0xc7ae00b8
    ctx->pc = 0x1f2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f2a1c: 0x72602628
    ctx->pc = 0x1f2a1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1f2a20: 0xc072348
    ctx->pc = 0x1F2A20u;
    SET_GPR_U32(ctx, 31, 0x1F2A28u);
    ctx->pc = 0x1F2A24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A28u; }
        else if (ctx->pc != 0x1F2A28u) { ctx->pc = 0x1F2A28u; }
    }
    if (ctx->pc != 0x1F2A28u) { return; }
    ctx->pc = 0x1F2A28u;
label_1f2a28:
    // 0x1f2a28: 0x4bff6b7e
    ctx->pc = 0x1f2a28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a2c: 0x4bfe6b7e
    ctx->pc = 0x1f2a2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a30: 0x4bfd6b7e
    ctx->pc = 0x1f2a30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1f2a34: 0x4bfc6b7e
    ctx->pc = 0x1f2a34u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1f2a38:
    // 0x1f2a38: 0x7bbf0060
    ctx->pc = 0x1f2a38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2a3c: 0x7bb30050
    ctx->pc = 0x1f2a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2a40: 0x7bb20040
    ctx->pc = 0x1f2a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2a44: 0x7bb10030
    ctx->pc = 0x1f2a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2a48: 0x7bb00020
    ctx->pc = 0x1f2a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2a4c: 0xc7b80010
    ctx->pc = 0x1f2a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f2a50: 0xc7b7000c
    ctx->pc = 0x1f2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f2a54: 0xc7b60008
    ctx->pc = 0x1f2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f2a58: 0xc7b50004
    ctx->pc = 0x1f2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f2a5c: 0xc7b40000
    ctx->pc = 0x1f2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f2a60: 0x3e00008
    ctx->pc = 0x1F2A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2A64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F28FCu: goto label_1f28fc;
            case 0x1F29A4u: goto label_1f29a4;
            case 0x1F29BCu: goto label_1f29bc;
            case 0x1F2A28u: goto label_1f2a28;
            case 0x1F2A38u: goto label_1f2a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2A68u;
}
