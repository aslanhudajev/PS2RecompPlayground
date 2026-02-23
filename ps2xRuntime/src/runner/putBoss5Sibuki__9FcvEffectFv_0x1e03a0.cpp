#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss5Sibuki__9FcvEffectFv
// Address: 0x1e03a0 - 0x1e04a8
void putBoss5Sibuki__9FcvEffectFv_0x1e03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss5Sibuki__9FcvEffectFv");


    ctx->pc = 0x1e03a0u;

    // 0x1e03a0: 0x27bdffc0
    ctx->pc = 0x1e03a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e03a4: 0x7fbf0030
    ctx->pc = 0x1e03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e03a8: 0x7fb20020
    ctx->pc = 0x1e03a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e03ac: 0x7fb10010
    ctx->pc = 0x1e03acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e03b0: 0x7fb00000
    ctx->pc = 0x1e03b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e03b4: 0x70808628
    ctx->pc = 0x1e03b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e03b8: 0x4bede37d
    ctx->pc = 0x1e03b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e03bc: 0x4bedeb7d
    ctx->pc = 0x1e03bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e03c0: 0x4bedf37d
    ctx->pc = 0x1e03c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e03c4: 0x4bedfb7d
    ctx->pc = 0x1e03c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e03c8: 0xc48d0040
    ctx->pc = 0x1e03c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e03cc: 0xc48e0044
    ctx->pc = 0x1e03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e03d0: 0xc06c202
    ctx->pc = 0x1E03D0u;
    SET_GPR_U32(ctx, 31, 0x1E03D8u);
    ctx->pc = 0x1E03D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03D8u; }
        else if (ctx->pc != 0x1E03D8u) { ctx->pc = 0x1E03D8u; }
    }
    if (ctx->pc != 0x1E03D8u) { return; }
    ctx->pc = 0x1E03D8u;
    // 0x1e03d8: 0xc06c0fb
    ctx->pc = 0x1E03D8u;
    SET_GPR_U32(ctx, 31, 0x1E03E0u);
    ctx->pc = 0x1E03DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03E0u; }
        else if (ctx->pc != 0x1E03E0u) { ctx->pc = 0x1E03E0u; }
    }
    if (ctx->pc != 0x1E03E0u) { return; }
    ctx->pc = 0x1E03E0u;
    // 0x1e03e0: 0xc06c09f
    ctx->pc = 0x1E03E0u;
    SET_GPR_U32(ctx, 31, 0x1E03E8u);
    ctx->pc = 0x1E03E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03E8u; }
        else if (ctx->pc != 0x1E03E8u) { ctx->pc = 0x1E03E8u; }
    }
    if (ctx->pc != 0x1E03E8u) { return; }
    ctx->pc = 0x1E03E8u;
    // 0x1e03e8: 0xc06c157
    ctx->pc = 0x1E03E8u;
    SET_GPR_U32(ctx, 31, 0x1E03F0u);
    ctx->pc = 0x1E03ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03F0u; }
        else if (ctx->pc != 0x1E03F0u) { ctx->pc = 0x1E03F0u; }
    }
    if (ctx->pc != 0x1E03F0u) { return; }
    ctx->pc = 0x1E03F0u;
    // 0x1e03f0: 0xc60c002c
    ctx->pc = 0x1e03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e03f4: 0x3c033f80
    ctx->pc = 0x1e03f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e03f8: 0x44830000
    ctx->pc = 0x1e03f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e03fc: 0x0
    ctx->pc = 0x1e03fcu;
    // NOP
    // 0x1e0400: 0x460c0032
    ctx->pc = 0x1e0400u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0404: 0x0
    ctx->pc = 0x1e0404u;
    // NOP
    // 0x1e0408: 0x45010007
    ctx->pc = 0x1E0408u;
    {
        const bool branch_taken_0x1e0408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E040Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0408) {
            ctx->pc = 0x1E0428u;
            goto label_1e0428;
        }
    }
    ctx->pc = 0x1E0410u;
    // 0x1e0410: 0x46006346
    ctx->pc = 0x1e0410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0414: 0xc06c1b3
    ctx->pc = 0x1E0414u;
    SET_GPR_U32(ctx, 31, 0x1E041Cu);
    ctx->pc = 0x1E0418u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E041Cu; }
        else if (ctx->pc != 0x1E041Cu) { ctx->pc = 0x1E041Cu; }
    }
    if (ctx->pc != 0x1E041Cu) { return; }
    ctx->pc = 0x1E041Cu;
    // 0x1e041c: 0xc06b218
    ctx->pc = 0x1E041Cu;
    SET_GPR_U32(ctx, 31, 0x1E0424u);
    ctx->pc = 0x1E0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0424u; }
        else if (ctx->pc != 0x1E0424u) { ctx->pc = 0x1E0424u; }
    }
    if (ctx->pc != 0x1E0424u) { return; }
    ctx->pc = 0x1E0424u;
    // 0x1e0424: 0x70008e28
    ctx->pc = 0x1e0424u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0428:
    // 0x1e0428: 0x10000011
    ctx->pc = 0x1E0428u;
    {
        const bool branch_taken_0x1e0428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E042Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0428) {
            ctx->pc = 0x1E0470u;
            goto label_1e0470;
        }
    }
    ctx->pc = 0x1E0430u;
label_1e0430:
    // 0x1e0430: 0x16220008
    ctx->pc = 0x1E0430u;
    {
        const bool branch_taken_0x1e0430 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E0434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e0430) {
            ctx->pc = 0x1E0454u;
            goto label_1e0454;
        }
    }
    ctx->pc = 0x1E0438u;
    // 0x1e0438: 0x8e020054
    ctx->pc = 0x1e0438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e043c: 0xc60c0024
    ctx->pc = 0x1e043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0440: 0xc07a42c
    ctx->pc = 0x1E0440u;
    SET_GPR_U32(ctx, 31, 0x1E0448u);
    ctx->pc = 0x1E0444u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0448u; }
        else if (ctx->pc != 0x1E0448u) { ctx->pc = 0x1E0448u; }
    }
    if (ctx->pc != 0x1E0448u) { return; }
    ctx->pc = 0x1E0448u;
    // 0x1e0448: 0x10000008
    ctx->pc = 0x1E0448u;
    {
        const bool branch_taken_0x1e0448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E044Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0448) {
            ctx->pc = 0x1E046Cu;
            goto label_1e046c;
        }
    }
    ctx->pc = 0x1E0450u;
    // 0x1e0450: 0x3c023f80
    ctx->pc = 0x1e0450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e0454:
    // 0x1e0454: 0x44826800
    ctx->pc = 0x1e0454u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0458: 0xc60c0024
    ctx->pc = 0x1e0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e045c: 0x8e020054
    ctx->pc = 0x1e045cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0460: 0xc079f30
    ctx->pc = 0x1E0460u;
    SET_GPR_U32(ctx, 31, 0x1E0468u);
    ctx->pc = 0x1E0464u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0468u; }
        else if (ctx->pc != 0x1E0468u) { ctx->pc = 0x1E0468u; }
    }
    if (ctx->pc != 0x1E0468u) { return; }
    ctx->pc = 0x1E0468u;
    // 0x1e0468: 0x265200f0
    ctx->pc = 0x1e0468u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1e046c:
    // 0x1e046c: 0x26310001
    ctx->pc = 0x1e046cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e0470:
    // 0x1e0470: 0x8e040000
    ctx->pc = 0x1e0470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0474: 0x224182a
    ctx->pc = 0x1e0474u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x1e0478: 0x5460ffed
    ctx->pc = 0x1E0478u;
    {
        const bool branch_taken_0x1e0478 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e0478) {
            ctx->pc = 0x1E047Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->pc = 0x1E0430u;
            goto label_1e0430;
        }
    }
    ctx->pc = 0x1E0480u;
    // 0x1e0480: 0x4bff6b7e
    ctx->pc = 0x1e0480u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0484: 0x4bfe6b7e
    ctx->pc = 0x1e0484u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0488: 0x4bfd6b7e
    ctx->pc = 0x1e0488u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e048c: 0x4bfc6b7e
    ctx->pc = 0x1e048cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0490: 0x7bbf0030
    ctx->pc = 0x1e0490u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0494: 0x7bb20020
    ctx->pc = 0x1e0494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0498: 0x7bb10010
    ctx->pc = 0x1e0498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e049c: 0x7bb00000
    ctx->pc = 0x1e049cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e04a0: 0x3e00008
    ctx->pc = 0x1E04A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E04A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0428u: goto label_1e0428;
            case 0x1E0430u: goto label_1e0430;
            case 0x1E0454u: goto label_1e0454;
            case 0x1E046Cu: goto label_1e046c;
            case 0x1E0470u: goto label_1e0470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E04A8u;
}
