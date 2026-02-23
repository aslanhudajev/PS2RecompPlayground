#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__13NoGameHitTaskFv
// Address: 0x203760 - 0x203838
void ctrl__13NoGameHitTaskFv_0x203760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__13NoGameHitTaskFv");


    ctx->pc = 0x203760u;

    // 0x203760: 0x27bdffd0
    ctx->pc = 0x203760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203764: 0x7fbf0020
    ctx->pc = 0x203764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x203768: 0x7fb00010
    ctx->pc = 0x203768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20376c: 0xe7b40000
    ctx->pc = 0x20376cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x203770: 0x70808628
    ctx->pc = 0x203770u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x203774: 0x4bede37d
    ctx->pc = 0x203774u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x203778: 0x4bedeb7d
    ctx->pc = 0x203778u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20377c: 0x4bedf37d
    ctx->pc = 0x20377cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x203780: 0xc06c20d
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 31, 0x203788u);
    ctx->pc = 0x203784u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203788u; }
        else if (ctx->pc != 0x203788u) { ctx->pc = 0x203788u; }
    }
    if (ctx->pc != 0x203788u) { return; }
    ctx->pc = 0x203788u;
    // 0x203788: 0xc60d0010
    ctx->pc = 0x203788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20378c: 0xc60e0014
    ctx->pc = 0x20378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x203790: 0xc06c202
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 31, 0x203798u);
    ctx->pc = 0x203794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203798u; }
        else if (ctx->pc != 0x203798u) { ctx->pc = 0x203798u; }
    }
    if (ctx->pc != 0x203798u) { return; }
    ctx->pc = 0x203798u;
    // 0x203798: 0xc6010014
    ctx->pc = 0x203798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20379c: 0x3c02bdcc
    ctx->pc = 0x20379cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48588 << 16));
    // 0x2037a0: 0x3442cccd
    ctx->pc = 0x2037a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x2037a4: 0x44820000
    ctx->pc = 0x2037a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2037a8: 0x0
    ctx->pc = 0x2037a8u;
    // NOP
    // 0x2037ac: 0x46000834
    ctx->pc = 0x2037acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2037b0: 0x0
    ctx->pc = 0x2037b0u;
    // NOP
    // 0x2037b4: 0x45000007
    ctx->pc = 0x2037B4u;
    {
        const bool branch_taken_0x2037b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2037B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15759 << 16));
        if (branch_taken_0x2037b4) {
            ctx->pc = 0x2037D4u;
            goto label_2037d4;
        }
    }
    ctx->pc = 0x2037BCu;
    // 0x2037bc: 0x3c023f33
    ctx->pc = 0x2037bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x2037c0: 0x46000807
    ctx->pc = 0x2037c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2037c4: 0x34423333
    ctx->pc = 0x2037c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x2037c8: 0x44820800
    ctx->pc = 0x2037c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2037cc: 0x10000003
    ctx->pc = 0x2037CCu;
    {
        const bool branch_taken_0x2037cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2037D0u;
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2037cc) {
            ctx->pc = 0x2037DCu;
            goto label_2037dc;
        }
    }
    ctx->pc = 0x2037D4u;
label_2037d4:
    // 0x2037d4: 0x34425c29
    ctx->pc = 0x2037d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 23593));
    // 0x2037d8: 0x4482a000
    ctx->pc = 0x2037d8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
label_2037dc:
    // 0x2037dc: 0x4600a306
    ctx->pc = 0x2037dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2037e0: 0x4600a346
    ctx->pc = 0x2037e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2037e4: 0xc06c1b3
    ctx->pc = 0x2037E4u;
    SET_GPR_U32(ctx, 31, 0x2037ECu);
    ctx->pc = 0x2037E8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037ECu; }
        else if (ctx->pc != 0x2037ECu) { ctx->pc = 0x2037ECu; }
    }
    if (ctx->pc != 0x2037ECu) { return; }
    ctx->pc = 0x2037ECu;
    // 0x2037ec: 0xc06b218
    ctx->pc = 0x2037ECu;
    SET_GPR_U32(ctx, 31, 0x2037F4u);
    ctx->pc = 0x2037F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037F4u; }
        else if (ctx->pc != 0x2037F4u) { ctx->pc = 0x2037F4u; }
    }
    if (ctx->pc != 0x2037F4u) { return; }
    ctx->pc = 0x2037F4u;
    // 0x2037f4: 0x8e040008
    ctx->pc = 0x2037f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2037f8: 0x278283f0
    ctx->pc = 0x2037f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935536));
    // 0x2037fc: 0x8e030004
    ctx->pc = 0x2037fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x203800: 0x42080
    ctx->pc = 0x203800u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x203804: 0x441021
    ctx->pc = 0x203804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x203808: 0x8c420000
    ctx->pc = 0x203808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20380c: 0xc0853ac
    ctx->pc = 0x20380Cu;
    SET_GPR_U32(ctx, 31, 0x203814u);
    ctx->pc = 0x203810u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203814u; }
        else if (ctx->pc != 0x203814u) { ctx->pc = 0x203814u; }
    }
    if (ctx->pc != 0x203814u) { return; }
    ctx->pc = 0x203814u;
    // 0x203814: 0x4bff6b7e
    ctx->pc = 0x203814u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x203818: 0x4bfe6b7e
    ctx->pc = 0x203818u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20381c: 0x4bfd6b7e
    ctx->pc = 0x20381cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x203820: 0x4bfc6b7e
    ctx->pc = 0x203820u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x203824: 0x7bbf0020
    ctx->pc = 0x203824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203828: 0x7bb00010
    ctx->pc = 0x203828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20382c: 0xc7b40000
    ctx->pc = 0x20382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203830: 0x3e00008
    ctx->pc = 0x203830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203834u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2037D4u: goto label_2037d4;
            case 0x2037DCu: goto label_2037dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203838u;
}
