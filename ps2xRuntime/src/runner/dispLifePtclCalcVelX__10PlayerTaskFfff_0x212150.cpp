#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLifePtclCalcVelX__10PlayerTaskFfff
// Address: 0x212150 - 0x21228c
void dispLifePtclCalcVelX__10PlayerTaskFfff_0x212150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLifePtclCalcVelX__10PlayerTaskFfff");


    ctx->pc = 0x212150u;

    // 0x212150: 0x27bdff90
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212154: 0x7fbf0040
    ctx->pc = 0x212154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x212158: 0x7fb20030
    ctx->pc = 0x212158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21215c: 0x7fb10020
    ctx->pc = 0x21215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x212160: 0x7fb00010
    ctx->pc = 0x212160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x212164: 0xe7b40000
    ctx->pc = 0x212164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x212168: 0xc48024c4
    ctx->pc = 0x212168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21216c: 0x27b10054
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 84));
    // 0x212170: 0x27b20058
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 88));
    // 0x212174: 0x249024c4
    ctx->pc = 0x212174u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 9412));
    // 0x212178: 0x46006506
    ctx->pc = 0x212178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21217c: 0xe48024d0
    ctx->pc = 0x21217cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 9424), bits); }
    // 0x212180: 0xc48024c8
    ctx->pc = 0x212180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212184: 0xe48024d4
    ctx->pc = 0x212184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 9428), bits); }
    // 0x212188: 0xc48024cc
    ctx->pc = 0x212188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21218c: 0xe48024d8
    ctx->pc = 0x21218cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 9432), bits); }
    // 0x212190: 0xe7ac0050
    ctx->pc = 0x212190u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x212194: 0xe62d0000
    ctx->pc = 0x212194u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x212198: 0xe64e0000
    ctx->pc = 0x212198u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21219c: 0x4bede37d
    ctx->pc = 0x21219cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2121a0: 0x4bedeb7d
    ctx->pc = 0x2121a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2121a4: 0x4bedf37d
    ctx->pc = 0x2121a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2121a8: 0x4bedfb7d
    ctx->pc = 0x2121a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2121ac: 0x8f848c48
    ctx->pc = 0x2121acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2121b0: 0x8c830004
    ctx->pc = 0x2121b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2121b4: 0x31040
    ctx->pc = 0x2121b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2121b8: 0x431021
    ctx->pc = 0x2121b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2121bc: 0x21080
    ctx->pc = 0x2121bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2121c0: 0x431021
    ctx->pc = 0x2121c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2121c4: 0x21100
    ctx->pc = 0x2121c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2121c8: 0x821021
    ctx->pc = 0x2121c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2121cc: 0xc06c038
    ctx->pc = 0x2121CCu;
    SET_GPR_U32(ctx, 31, 0x2121D4u);
    ctx->pc = 0x2121D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121D4u; }
        else if (ctx->pc != 0x2121D4u) { ctx->pc = 0x2121D4u; }
    }
    if (ctx->pc != 0x2121D4u) { return; }
    ctx->pc = 0x2121D4u;
    // 0x2121d4: 0x27a40050
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2121d8: 0xc06bf00
    ctx->pc = 0x2121D8u;
    SET_GPR_U32(ctx, 31, 0x2121E0u);
    ctx->pc = 0x2121DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121E0u; }
        else if (ctx->pc != 0x2121E0u) { ctx->pc = 0x2121E0u; }
    }
    if (ctx->pc != 0x2121E0u) { return; }
    ctx->pc = 0x2121E0u;
    // 0x2121e0: 0x4bff6b7e
    ctx->pc = 0x2121e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2121e4: 0x4bfe6b7e
    ctx->pc = 0x2121e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2121e8: 0x4bfd6b7e
    ctx->pc = 0x2121e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2121ec: 0x4bfc6b7e
    ctx->pc = 0x2121ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2121f0: 0xc7a00060
    ctx->pc = 0x2121f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121f4: 0xe6000000
    ctx->pc = 0x2121f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2121f8: 0xc7a00064
    ctx->pc = 0x2121f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121fc: 0xe6000004
    ctx->pc = 0x2121fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x212200: 0xc7a00068
    ctx->pc = 0x212200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212204: 0xe6000008
    ctx->pc = 0x212204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x212208: 0xc600000c
    ctx->pc = 0x212208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21220c: 0xe7a00050
    ctx->pc = 0x21220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x212210: 0xc6000010
    ctx->pc = 0x212210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212214: 0xe6200000
    ctx->pc = 0x212214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x212218: 0xc6000014
    ctx->pc = 0x212218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21221c: 0xe6400000
    ctx->pc = 0x21221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x212220: 0x4bede37d
    ctx->pc = 0x212220u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x212224: 0x4bedeb7d
    ctx->pc = 0x212224u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x212228: 0x4bedf37d
    ctx->pc = 0x212228u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21222c: 0x4bedfb7d
    ctx->pc = 0x21222cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x212230: 0x27a40050
    ctx->pc = 0x212230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x212234: 0xc06bf00
    ctx->pc = 0x212234u;
    SET_GPR_U32(ctx, 31, 0x21223Cu);
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21223Cu; }
        else if (ctx->pc != 0x21223Cu) { ctx->pc = 0x21223Cu; }
    }
    if (ctx->pc != 0x21223Cu) { return; }
    ctx->pc = 0x21223Cu;
    // 0x21223c: 0x4bff6b7e
    ctx->pc = 0x21223cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x212240: 0x4bfe6b7e
    ctx->pc = 0x212240u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x212244: 0x4bfd6b7e
    ctx->pc = 0x212244u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x212248: 0x4bfc6b7e
    ctx->pc = 0x212248u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21224c: 0xc7a10060
    ctx->pc = 0x21224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212250: 0x3c0338d1
    ctx->pc = 0x212250u;
    SET_GPR_U32(ctx, 3, ((uint32_t)14545 << 16));
    // 0x212254: 0x3463b717
    ctx->pc = 0x212254u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46871));
    // 0x212258: 0x44830000
    ctx->pc = 0x212258u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21225c: 0x0
    ctx->pc = 0x21225cu;
    // NOP
    // 0x212260: 0x4601a041
    ctx->pc = 0x212260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x212264: 0x46000847
    ctx->pc = 0x212264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x212268: 0x46010002
    ctx->pc = 0x212268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21226c: 0xe6000018
    ctx->pc = 0x21226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x212270: 0x7bbf0040
    ctx->pc = 0x212270u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212274: 0x7bb20030
    ctx->pc = 0x212274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212278: 0x7bb10020
    ctx->pc = 0x212278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21227c: 0x7bb00010
    ctx->pc = 0x21227cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212280: 0xc7b40000
    ctx->pc = 0x212280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x212284: 0x3e00008
    ctx->pc = 0x212284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21228Cu;
}
