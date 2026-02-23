#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispIncrease__7BudTaskFv
// Address: 0x205070 - 0x2051c0
void PreDispIncrease__7BudTaskFv_0x205070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispIncrease__7BudTaskFv");


    ctx->pc = 0x205070u;

    // 0x205070: 0x27bdffc0
    ctx->pc = 0x205070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205074: 0x7fbf0010
    ctx->pc = 0x205074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x205078: 0x7fb00000
    ctx->pc = 0x205078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20507c: 0x70808628
    ctx->pc = 0x20507cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x205080: 0x4bede37d
    ctx->pc = 0x205080u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x205084: 0x4bedeb7d
    ctx->pc = 0x205084u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x205088: 0x4bedf37d
    ctx->pc = 0x205088u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20508c: 0x4bedfb7d
    ctx->pc = 0x20508cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x205090: 0x8f848c48
    ctx->pc = 0x205090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x205094: 0x8c830004
    ctx->pc = 0x205094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x205098: 0x31040
    ctx->pc = 0x205098u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20509c: 0x431021
    ctx->pc = 0x20509cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2050a0: 0x21080
    ctx->pc = 0x2050a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2050a4: 0x431021
    ctx->pc = 0x2050a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2050a8: 0x21100
    ctx->pc = 0x2050a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2050ac: 0x821021
    ctx->pc = 0x2050acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2050b0: 0xc06c038
    ctx->pc = 0x2050B0u;
    SET_GPR_U32(ctx, 31, 0x2050B8u);
    ctx->pc = 0x2050B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050B8u; }
        else if (ctx->pc != 0x2050B8u) { ctx->pc = 0x2050B8u; }
    }
    if (ctx->pc != 0x2050B8u) { return; }
    ctx->pc = 0x2050B8u;
    // 0x2050b8: 0xc06c04e
    ctx->pc = 0x2050B8u;
    SET_GPR_U32(ctx, 31, 0x2050C0u);
    ctx->pc = 0x2050BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050C0u; }
        else if (ctx->pc != 0x2050C0u) { ctx->pc = 0x2050C0u; }
    }
    if (ctx->pc != 0x2050C0u) { return; }
    ctx->pc = 0x2050C0u;
    // 0x2050c0: 0x8e02014c
    ctx->pc = 0x2050c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x2050c4: 0xc44d001c
    ctx->pc = 0x2050c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2050c8: 0xc44e0020
    ctx->pc = 0x2050c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2050cc: 0xc06c202
    ctx->pc = 0x2050CCu;
    SET_GPR_U32(ctx, 31, 0x2050D4u);
    ctx->pc = 0x2050D0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050D4u; }
        else if (ctx->pc != 0x2050D4u) { ctx->pc = 0x2050D4u; }
    }
    if (ctx->pc != 0x2050D4u) { return; }
    ctx->pc = 0x2050D4u;
    // 0x2050d4: 0xc06bfd2
    ctx->pc = 0x2050D4u;
    SET_GPR_U32(ctx, 31, 0x2050DCu);
    ctx->pc = 0x2050D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050DCu; }
        else if (ctx->pc != 0x2050DCu) { ctx->pc = 0x2050DCu; }
    }
    if (ctx->pc != 0x2050DCu) { return; }
    ctx->pc = 0x2050DCu;
    // 0x2050dc: 0xc06c20d
    ctx->pc = 0x2050DCu;
    SET_GPR_U32(ctx, 31, 0x2050E4u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050E4u; }
        else if (ctx->pc != 0x2050E4u) { ctx->pc = 0x2050E4u; }
    }
    if (ctx->pc != 0x2050E4u) { return; }
    ctx->pc = 0x2050E4u;
    // 0x2050e4: 0x8e020150
    ctx->pc = 0x2050e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2050e8: 0xc06c157
    ctx->pc = 0x2050E8u;
    SET_GPR_U32(ctx, 31, 0x2050F0u);
    ctx->pc = 0x2050ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 172)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050F0u; }
        else if (ctx->pc != 0x2050F0u) { ctx->pc = 0x2050F0u; }
    }
    if (ctx->pc != 0x2050F0u) { return; }
    ctx->pc = 0x2050F0u;
    // 0x2050f0: 0x8e020150
    ctx->pc = 0x2050f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2050f4: 0xc06c0fb
    ctx->pc = 0x2050F4u;
    SET_GPR_U32(ctx, 31, 0x2050FCu);
    ctx->pc = 0x2050F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 168)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2050FCu; }
        else if (ctx->pc != 0x2050FCu) { ctx->pc = 0x2050FCu; }
    }
    if (ctx->pc != 0x2050FCu) { return; }
    ctx->pc = 0x2050FCu;
    // 0x2050fc: 0x8e020150
    ctx->pc = 0x2050fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x205100: 0xc06c09f
    ctx->pc = 0x205100u;
    SET_GPR_U32(ctx, 31, 0x205108u);
    ctx->pc = 0x205104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205108u; }
        else if (ctx->pc != 0x205108u) { ctx->pc = 0x205108u; }
    }
    if (ctx->pc != 0x205108u) { return; }
    ctx->pc = 0x205108u;
    // 0x205108: 0x8e020150
    ctx->pc = 0x205108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x20510c: 0xc06c157
    ctx->pc = 0x20510Cu;
    SET_GPR_U32(ctx, 31, 0x205114u);
    ctx->pc = 0x205110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 412)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205114u; }
        else if (ctx->pc != 0x205114u) { ctx->pc = 0x205114u; }
    }
    if (ctx->pc != 0x205114u) { return; }
    ctx->pc = 0x205114u;
    // 0x205114: 0x8e020150
    ctx->pc = 0x205114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x205118: 0xc06c0fb
    ctx->pc = 0x205118u;
    SET_GPR_U32(ctx, 31, 0x205120u);
    ctx->pc = 0x20511Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 408)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205120u; }
        else if (ctx->pc != 0x205120u) { ctx->pc = 0x205120u; }
    }
    if (ctx->pc != 0x205120u) { return; }
    ctx->pc = 0x205120u;
    // 0x205120: 0x8e020150
    ctx->pc = 0x205120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x205124: 0xc06c09f
    ctx->pc = 0x205124u;
    SET_GPR_U32(ctx, 31, 0x20512Cu);
    ctx->pc = 0x205128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 404)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20512Cu; }
        else if (ctx->pc != 0x20512Cu) { ctx->pc = 0x20512Cu; }
    }
    if (ctx->pc != 0x20512Cu) { return; }
    ctx->pc = 0x20512Cu;
    // 0x20512c: 0xafa00020
    ctx->pc = 0x20512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x205130: 0xafa00024
    ctx->pc = 0x205130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x205134: 0x3c023f80
    ctx->pc = 0x205134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x205138: 0xafa20028
    ctx->pc = 0x205138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20513c: 0x27a40020
    ctx->pc = 0x20513cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x205140: 0xc06bf00
    ctx->pc = 0x205140u;
    SET_GPR_U32(ctx, 31, 0x205148u);
    ctx->pc = 0x205144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205148u; }
        else if (ctx->pc != 0x205148u) { ctx->pc = 0x205148u; }
    }
    if (ctx->pc != 0x205148u) { return; }
    ctx->pc = 0x205148u;
    // 0x205148: 0xc7ad0038
    ctx->pc = 0x205148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20514c: 0xc069e68
    ctx->pc = 0x20514Cu;
    SET_GPR_U32(ctx, 31, 0x205154u);
    ctx->pc = 0x205150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205154u; }
        else if (ctx->pc != 0x205154u) { ctx->pc = 0x205154u; }
    }
    if (ctx->pc != 0x205154u) { return; }
    ctx->pc = 0x205154u;
    // 0x205154: 0x8e030150
    ctx->pc = 0x205154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x205158: 0x2243c
    ctx->pc = 0x205158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20515c: 0x8e020148
    ctx->pc = 0x20515cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x205160: 0x4243f
    ctx->pc = 0x205160u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x205164: 0x8c630030
    ctx->pc = 0x205164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x205168: 0x8c630028
    ctx->pc = 0x205168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x20516c: 0x641821
    ctx->pc = 0x20516cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205170: 0xac430010
    ctx->pc = 0x205170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x205174: 0x4bff6b7e
    ctx->pc = 0x205174u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x205178: 0x4bfe6b7e
    ctx->pc = 0x205178u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20517c: 0x4bfd6b7e
    ctx->pc = 0x20517cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x205180: 0x4bfc6b7e
    ctx->pc = 0x205180u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x205184: 0x3c020050
    ctx->pc = 0x205184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x205188: 0xc07ce18
    ctx->pc = 0x205188u;
    SET_GPR_U32(ctx, 31, 0x205190u);
    ctx->pc = 0x20518Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205190u; }
        else if (ctx->pc != 0x205190u) { ctx->pc = 0x205190u; }
    }
    if (ctx->pc != 0x205190u) { return; }
    ctx->pc = 0x205190u;
    // 0x205190: 0x1c400007
    ctx->pc = 0x205190u;
    {
        const bool branch_taken_0x205190 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x205190) {
            ctx->pc = 0x2051B0u;
            goto label_2051b0;
        }
    }
    ctx->pc = 0x205198u;
    // 0x205198: 0xc6010044
    ctx->pc = 0x205198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20519c: 0x3c033f80
    ctx->pc = 0x20519cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x2051a0: 0x44830000
    ctx->pc = 0x2051a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2051a4: 0x0
    ctx->pc = 0x2051a4u;
    // NOP
    // 0x2051a8: 0x46000800
    ctx->pc = 0x2051a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2051ac: 0xe6000044
    ctx->pc = 0x2051acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2051b0:
    // 0x2051b0: 0x7bbf0010
    ctx->pc = 0x2051b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2051b4: 0x7bb00000
    ctx->pc = 0x2051b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2051b8: 0x3e00008
    ctx->pc = 0x2051B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2051BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2051B0u: goto label_2051b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2051C0u;
}
