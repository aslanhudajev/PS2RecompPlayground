#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: put__6COsageFP6MOPRTS
// Address: 0x200eb0 - 0x2016f4
void put__6COsageFP6MOPRTS_0x200eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__6COsageFP6MOPRTS");


    ctx->pc = 0x200eb0u;

    // 0x200eb0: 0x27bdfe10
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x200eb4: 0x7fbf00a0
    ctx->pc = 0x200eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x200eb8: 0x7fbe0090
    ctx->pc = 0x200eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x200ebc: 0x7fb70080
    ctx->pc = 0x200ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x200ec0: 0x7fb60070
    ctx->pc = 0x200ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x200ec4: 0x7fb50060
    ctx->pc = 0x200ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x200ec8: 0x7fb40050
    ctx->pc = 0x200ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x200ecc: 0x7fb30040
    ctx->pc = 0x200eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x200ed0: 0x7fb20030
    ctx->pc = 0x200ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x200ed4: 0x7fb10020
    ctx->pc = 0x200ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200ed8: 0x7fb00010
    ctx->pc = 0x200ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200edc: 0xe7b60008
    ctx->pc = 0x200edcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x200ee0: 0xe7b50004
    ctx->pc = 0x200ee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x200ee4: 0xe7b40000
    ctx->pc = 0x200ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x200ee8: 0x70808628
    ctx->pc = 0x200ee8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x200eec: 0x8c840880
    ctx->pc = 0x200eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2176)));
    // 0x200ef0: 0x24030002
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x200ef4: 0x148301f0
    ctx->pc = 0x200EF4u;
    {
        const bool branch_taken_0x200ef4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x200EF8u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x200ef4) {
            ctx->pc = 0x2016B8u;
            goto label_2016b8;
        }
    }
    ctx->pc = 0x200EFCu;
    // 0x200efc: 0xafa000c8
    ctx->pc = 0x200efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x200f00: 0x27b100cc
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 204));
    // 0x200f04: 0xae200000
    ctx->pc = 0x200f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x200f08: 0x27b200d0
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 208));
    // 0x200f0c: 0xae400000
    ctx->pc = 0x200f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x200f10: 0x4bede37d
    ctx->pc = 0x200f10u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x200f14: 0x4bedeb7d
    ctx->pc = 0x200f14u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x200f18: 0x4bedf37d
    ctx->pc = 0x200f18u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x200f1c: 0x4bedfb7d
    ctx->pc = 0x200f1cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x200f20: 0xc06c038
    ctx->pc = 0x200F20u;
    SET_GPR_U32(ctx, 31, 0x200F28u);
    ctx->pc = 0x200F24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 528));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F28u; }
        else if (ctx->pc != 0x200F28u) { ctx->pc = 0x200F28u; }
    }
    if (ctx->pc != 0x200F28u) { return; }
    ctx->pc = 0x200F28u;
    // 0x200f28: 0x8f848c48
    ctx->pc = 0x200f28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x200f2c: 0x8c830004
    ctx->pc = 0x200f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200f30: 0x31040
    ctx->pc = 0x200f30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x200f34: 0x431021
    ctx->pc = 0x200f34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200f38: 0x21080
    ctx->pc = 0x200f38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x200f3c: 0x431021
    ctx->pc = 0x200f3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200f40: 0x21100
    ctx->pc = 0x200f40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x200f44: 0x821021
    ctx->pc = 0x200f44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200f48: 0xc06c06f
    ctx->pc = 0x200F48u;
    SET_GPR_U32(ctx, 31, 0x200F50u);
    ctx->pc = 0x200F4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F50u; }
        else if (ctx->pc != 0x200F50u) { ctx->pc = 0x200F50u; }
    }
    if (ctx->pc != 0x200F50u) { return; }
    ctx->pc = 0x200F50u;
    // 0x200f50: 0x27a400c8
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 200));
    // 0x200f54: 0xc06bf00
    ctx->pc = 0x200F54u;
    SET_GPR_U32(ctx, 31, 0x200F5Cu);
    ctx->pc = 0x200F58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 216));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F5Cu; }
        else if (ctx->pc != 0x200F5Cu) { ctx->pc = 0x200F5Cu; }
    }
    if (ctx->pc != 0x200F5Cu) { return; }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0x4bff6b7e
    ctx->pc = 0x200f5cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x200f60: 0x4bfe6b7e
    ctx->pc = 0x200f60u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x200f64: 0x4bfd6b7e
    ctx->pc = 0x200f64u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x200f68: 0x4bfc6b7e
    ctx->pc = 0x200f68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x200f6c: 0x3c024033
    ctx->pc = 0x200f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16435 << 16));
    // 0x200f70: 0xafa000c8
    ctx->pc = 0x200f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x200f74: 0x34423333
    ctx->pc = 0x200f74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x200f78: 0xae220000
    ctx->pc = 0x200f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x200f7c: 0xae400000
    ctx->pc = 0x200f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x200f80: 0x4bede37d
    ctx->pc = 0x200f80u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x200f84: 0x4bedeb7d
    ctx->pc = 0x200f84u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x200f88: 0x4bedf37d
    ctx->pc = 0x200f88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x200f8c: 0x4bedfb7d
    ctx->pc = 0x200f8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x200f90: 0xc06c038
    ctx->pc = 0x200F90u;
    SET_GPR_U32(ctx, 31, 0x200F98u);
    ctx->pc = 0x200F94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 288));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F98u; }
        else if (ctx->pc != 0x200F98u) { ctx->pc = 0x200F98u; }
    }
    if (ctx->pc != 0x200F98u) { return; }
    ctx->pc = 0x200F98u;
    // 0x200f98: 0x8f848c48
    ctx->pc = 0x200f98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x200f9c: 0x8c830004
    ctx->pc = 0x200f9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200fa0: 0x31040
    ctx->pc = 0x200fa0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x200fa4: 0x431021
    ctx->pc = 0x200fa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200fa8: 0x21080
    ctx->pc = 0x200fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x200fac: 0x431021
    ctx->pc = 0x200facu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200fb0: 0x21100
    ctx->pc = 0x200fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x200fb4: 0x821021
    ctx->pc = 0x200fb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200fb8: 0xc06c06f
    ctx->pc = 0x200FB8u;
    SET_GPR_U32(ctx, 31, 0x200FC0u);
    ctx->pc = 0x200FBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FC0u; }
        else if (ctx->pc != 0x200FC0u) { ctx->pc = 0x200FC0u; }
    }
    if (ctx->pc != 0x200FC0u) { return; }
    ctx->pc = 0x200FC0u;
    // 0x200fc0: 0x27a400c8
    ctx->pc = 0x200fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 200));
    // 0x200fc4: 0xc06bf00
    ctx->pc = 0x200FC4u;
    SET_GPR_U32(ctx, 31, 0x200FCCu);
    ctx->pc = 0x200FC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 232));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FCCu; }
        else if (ctx->pc != 0x200FCCu) { ctx->pc = 0x200FCCu; }
    }
    if (ctx->pc != 0x200FCCu) { return; }
    ctx->pc = 0x200FCCu;
    // 0x200fcc: 0x4bff6b7e
    ctx->pc = 0x200fccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x200fd0: 0x4bfe6b7e
    ctx->pc = 0x200fd0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x200fd4: 0x4bfd6b7e
    ctx->pc = 0x200fd4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x200fd8: 0x4bfc6b7e
    ctx->pc = 0x200fd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x200fdc: 0xafa00138
    ctx->pc = 0x200fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x200fe0: 0xafa0013c
    ctx->pc = 0x200fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x200fe4: 0xafa00140
    ctx->pc = 0x200fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x200fe8: 0x4bede37d
    ctx->pc = 0x200fe8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x200fec: 0x4bedeb7d
    ctx->pc = 0x200fecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x200ff0: 0x4bedf37d
    ctx->pc = 0x200ff0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x200ff4: 0x4bedfb7d
    ctx->pc = 0x200ff4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x200ff8: 0xc06c038
    ctx->pc = 0x200FF8u;
    SET_GPR_U32(ctx, 31, 0x201000u);
    ctx->pc = 0x200FFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1008));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201000u; }
        else if (ctx->pc != 0x201000u) { ctx->pc = 0x201000u; }
    }
    if (ctx->pc != 0x201000u) { return; }
    ctx->pc = 0x201000u;
    // 0x201000: 0x8f848c48
    ctx->pc = 0x201000u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201004: 0x8c830004
    ctx->pc = 0x201004u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201008: 0x31040
    ctx->pc = 0x201008u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20100c: 0x431021
    ctx->pc = 0x20100cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201010: 0x21080
    ctx->pc = 0x201010u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x201014: 0x431021
    ctx->pc = 0x201014u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201018: 0x21100
    ctx->pc = 0x201018u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20101c: 0x821021
    ctx->pc = 0x20101cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201020: 0xc06c06f
    ctx->pc = 0x201020u;
    SET_GPR_U32(ctx, 31, 0x201028u);
    ctx->pc = 0x201024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201028u; }
        else if (ctx->pc != 0x201028u) { ctx->pc = 0x201028u; }
    }
    if (ctx->pc != 0x201028u) { return; }
    ctx->pc = 0x201028u;
    // 0x201028: 0x27a40138
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 312));
    // 0x20102c: 0xc06bf00
    ctx->pc = 0x20102Cu;
    SET_GPR_U32(ctx, 31, 0x201034u);
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 328));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201034u; }
        else if (ctx->pc != 0x201034u) { ctx->pc = 0x201034u; }
    }
    if (ctx->pc != 0x201034u) { return; }
    ctx->pc = 0x201034u;
    // 0x201034: 0x4bff6b7e
    ctx->pc = 0x201034u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x201038: 0x4bfe6b7e
    ctx->pc = 0x201038u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20103c: 0x4bfd6b7e
    ctx->pc = 0x20103cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x201040: 0x4bfc6b7e
    ctx->pc = 0x201040u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x201044: 0xafa00158
    ctx->pc = 0x201044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x201048: 0xafa0015c
    ctx->pc = 0x201048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x20104c: 0xafa00160
    ctx->pc = 0x20104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x201050: 0x4bede37d
    ctx->pc = 0x201050u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x201054: 0x4bedeb7d
    ctx->pc = 0x201054u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x201058: 0x4bedf37d
    ctx->pc = 0x201058u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20105c: 0x4bedfb7d
    ctx->pc = 0x20105cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x201060: 0xc06c038
    ctx->pc = 0x201060u;
    SET_GPR_U32(ctx, 31, 0x201068u);
    ctx->pc = 0x201064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 1968));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201068u; }
        else if (ctx->pc != 0x201068u) { ctx->pc = 0x201068u; }
    }
    if (ctx->pc != 0x201068u) { return; }
    ctx->pc = 0x201068u;
    // 0x201068: 0x8f848c48
    ctx->pc = 0x201068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20106c: 0x8c830004
    ctx->pc = 0x20106cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201070: 0x31040
    ctx->pc = 0x201070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x201074: 0x431021
    ctx->pc = 0x201074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201078: 0x21080
    ctx->pc = 0x201078u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20107c: 0x431021
    ctx->pc = 0x20107cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201080: 0x21100
    ctx->pc = 0x201080u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x201084: 0x821021
    ctx->pc = 0x201084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201088: 0xc06c06f
    ctx->pc = 0x201088u;
    SET_GPR_U32(ctx, 31, 0x201090u);
    ctx->pc = 0x20108Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201090u; }
        else if (ctx->pc != 0x201090u) { ctx->pc = 0x201090u; }
    }
    if (ctx->pc != 0x201090u) { return; }
    ctx->pc = 0x201090u;
    // 0x201090: 0x27a40158
    ctx->pc = 0x201090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 344));
    // 0x201094: 0xc06bf00
    ctx->pc = 0x201094u;
    SET_GPR_U32(ctx, 31, 0x20109Cu);
    ctx->pc = 0x201098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 360));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20109Cu; }
        else if (ctx->pc != 0x20109Cu) { ctx->pc = 0x20109Cu; }
    }
    if (ctx->pc != 0x20109Cu) { return; }
    ctx->pc = 0x20109Cu;
    // 0x20109c: 0x4bff6b7e
    ctx->pc = 0x20109cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2010a0: 0x4bfe6b7e
    ctx->pc = 0x2010a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2010a4: 0x4bfd6b7e
    ctx->pc = 0x2010a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2010a8: 0x4bfc6b7e
    ctx->pc = 0x2010a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2010ac: 0x3c020050
    ctx->pc = 0x2010acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2010b0: 0xc07ce18
    ctx->pc = 0x2010B0u;
    SET_GPR_U32(ctx, 31, 0x2010B8u);
    ctx->pc = 0x2010B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010B8u; }
        else if (ctx->pc != 0x2010B8u) { ctx->pc = 0x2010B8u; }
    }
    if (ctx->pc != 0x2010B8u) { return; }
    ctx->pc = 0x2010B8u;
    // 0x2010b8: 0x1c40010a
    ctx->pc = 0x2010B8u;
    {
        const bool branch_taken_0x2010b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2010BCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2010b8) {
            ctx->pc = 0x2014E4u;
            goto label_2014e4;
        }
    }
    ctx->pc = 0x2010C0u;
    // 0x2010c0: 0x3c023f3d
    ctx->pc = 0x2010c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16189 << 16));
    // 0x2010c4: 0x3442d2f2
    ctx->pc = 0x2010c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54002));
    // 0x2010c8: 0xafa200f8
    ctx->pc = 0x2010c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2010cc: 0x3c023d88
    ctx->pc = 0x2010ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15752 << 16));
    // 0x2010d0: 0x34449a02
    ctx->pc = 0x2010d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 39426));
    // 0x2010d4: 0x3c023df2
    ctx->pc = 0x2010d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15858 << 16));
    // 0x2010d8: 0x3443b022
    ctx->pc = 0x2010d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 45090));
    // 0x2010dc: 0x3c02bf3d
    ctx->pc = 0x2010dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48957 << 16));
    // 0x2010e0: 0x3442d2f2
    ctx->pc = 0x2010e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54002));
    // 0x2010e4: 0xafa20118
    ctx->pc = 0x2010e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2010e8: 0xafa400fc
    ctx->pc = 0x2010e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x2010ec: 0xafa4011c
    ctx->pc = 0x2010ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x2010f0: 0xafa30100
    ctx->pc = 0x2010f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2010f4: 0xafa30120
    ctx->pc = 0x2010f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x2010f8: 0x4bede37d
    ctx->pc = 0x2010f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2010fc: 0x4bedeb7d
    ctx->pc = 0x2010fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x201100: 0x4bedf37d
    ctx->pc = 0x201100u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x201104: 0x4bedfb7d
    ctx->pc = 0x201104u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x201108: 0xc06c038
    ctx->pc = 0x201108u;
    SET_GPR_U32(ctx, 31, 0x201110u);
    ctx->pc = 0x20110Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 528));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201110u; }
        else if (ctx->pc != 0x201110u) { ctx->pc = 0x201110u; }
    }
    if (ctx->pc != 0x201110u) { return; }
    ctx->pc = 0x201110u;
    // 0x201110: 0x8f848c48
    ctx->pc = 0x201110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201114: 0x8c830004
    ctx->pc = 0x201114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201118: 0x31040
    ctx->pc = 0x201118u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20111c: 0x431021
    ctx->pc = 0x20111cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201120: 0x21080
    ctx->pc = 0x201120u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x201124: 0x431021
    ctx->pc = 0x201124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201128: 0x21100
    ctx->pc = 0x201128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20112c: 0x821021
    ctx->pc = 0x20112cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201130: 0xc06c06f
    ctx->pc = 0x201130u;
    SET_GPR_U32(ctx, 31, 0x201138u);
    ctx->pc = 0x201134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201138u; }
        else if (ctx->pc != 0x201138u) { ctx->pc = 0x201138u; }
    }
    if (ctx->pc != 0x201138u) { return; }
    ctx->pc = 0x201138u;
    // 0x201138: 0x27a400f8
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 248));
    // 0x20113c: 0xc06bf00
    ctx->pc = 0x20113Cu;
    SET_GPR_U32(ctx, 31, 0x201144u);
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 264));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201144u; }
        else if (ctx->pc != 0x201144u) { ctx->pc = 0x201144u; }
    }
    if (ctx->pc != 0x201144u) { return; }
    ctx->pc = 0x201144u;
    // 0x201144: 0x27a40118
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 280));
    // 0x201148: 0xc06bf00
    ctx->pc = 0x201148u;
    SET_GPR_U32(ctx, 31, 0x201150u);
    ctx->pc = 0x20114Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 296));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201150u; }
        else if (ctx->pc != 0x201150u) { ctx->pc = 0x201150u; }
    }
    if (ctx->pc != 0x201150u) { return; }
    ctx->pc = 0x201150u;
    // 0x201150: 0x4bff6b7e
    ctx->pc = 0x201150u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x201154: 0x4bfe6b7e
    ctx->pc = 0x201154u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x201158: 0x4bfd6b7e
    ctx->pc = 0x201158u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20115c: 0x4bfc6b7e
    ctx->pc = 0x20115cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x201160: 0x8f858c48
    ctx->pc = 0x201160u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201164: 0x24020117
    ctx->pc = 0x201164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 279));
    // 0x201168: 0x8ca40004
    ctx->pc = 0x201168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20116c: 0x41840
    ctx->pc = 0x20116cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x201170: 0x641821
    ctx->pc = 0x201170u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201174: 0x31880
    ctx->pc = 0x201174u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x201178: 0x641821
    ctx->pc = 0x201178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20117c: 0x31900
    ctx->pc = 0x20117cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x201180: 0x651821
    ctx->pc = 0x201180u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x201184: 0x846400d0
    ctx->pc = 0x201184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x201188: 0x14820028
    ctx->pc = 0x201188u;
    {
        const bool branch_taken_0x201188 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20118Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 278));
        if (branch_taken_0x201188) {
            ctx->pc = 0x20122Cu;
            goto label_20122c;
        }
    }
    ctx->pc = 0x201190u;
    // 0x201190: 0xc46100c0
    ctx->pc = 0x201190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201194: 0x3c0243e3
    ctx->pc = 0x201194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17379 << 16));
    // 0x201198: 0x34428000
    ctx->pc = 0x201198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x20119c: 0x44820000
    ctx->pc = 0x20119cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2011a0: 0x0
    ctx->pc = 0x2011a0u;
    // NOP
    // 0x2011a4: 0x46000834
    ctx->pc = 0x2011a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2011a8: 0x0
    ctx->pc = 0x2011a8u;
    // NOP
    // 0x2011ac: 0x4501001e
    ctx->pc = 0x2011ACu;
    {
        const bool branch_taken_0x2011ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2011B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17389 << 16));
        if (branch_taken_0x2011ac) {
            ctx->pc = 0x201228u;
            goto label_201228;
        }
    }
    ctx->pc = 0x2011B4u;
    // 0x2011b4: 0x34428000
    ctx->pc = 0x2011b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2011b8: 0x44820000
    ctx->pc = 0x2011b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2011bc: 0x0
    ctx->pc = 0x2011bcu;
    // NOP
    // 0x2011c0: 0x46000836
    ctx->pc = 0x2011c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2011c4: 0x0
    ctx->pc = 0x2011c4u;
    // NOP
    // 0x2011c8: 0x45000017
    ctx->pc = 0x2011C8u;
    {
        const bool branch_taken_0x2011c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2011CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15749 << 16));
        if (branch_taken_0x2011c8) {
            ctx->pc = 0x201228u;
            goto label_201228;
        }
    }
    ctx->pc = 0x2011D0u;
    // 0x2011d0: 0x34421eb8
    ctx->pc = 0x2011d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 7864));
    // 0x2011d4: 0xafa20178
    ctx->pc = 0x2011d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2011d8: 0x3c023c75
    ctx->pc = 0x2011d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15477 << 16));
    // 0x2011dc: 0x3442c28f
    ctx->pc = 0x2011dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49807));
    // 0x2011e0: 0xafa2017c
    ctx->pc = 0x2011e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x2011e4: 0x3c023ca3
    ctx->pc = 0x2011e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15523 << 16));
    // 0x2011e8: 0x3442d70a
    ctx->pc = 0x2011e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x2011ec: 0xafa20180
    ctx->pc = 0x2011ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x2011f0: 0x70008e28
    ctx->pc = 0x2011f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2011f4: 0x72009628
    ctx->pc = 0x2011f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2011f8:
    // 0x2011f8: 0x26440440
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1088));
    // 0x2011fc: 0xc080198
    ctx->pc = 0x2011FCu;
    SET_GPR_U32(ctx, 31, 0x201204u);
    ctx->pc = 0x201200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 376));
    ctx->pc = 0x200660u;
    {
        const uint32_t __entryPc = ctx->pc;
        addVel__6CChainF11tagNLpoint3_0x200660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201204u; }
        else if (ctx->pc != 0x201204u) { ctx->pc = 0x201204u; }
    }
    if (ctx->pc != 0x201204u) { return; }
    ctx->pc = 0x201204u;
    // 0x201204: 0x72402628
    ctx->pc = 0x201204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x201208: 0xc080198
    ctx->pc = 0x201208u;
    SET_GPR_U32(ctx, 31, 0x201210u);
    ctx->pc = 0x20120Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 376));
    ctx->pc = 0x200660u;
    {
        const uint32_t __entryPc = ctx->pc;
        addVel__6CChainF11tagNLpoint3_0x200660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201210u; }
        else if (ctx->pc != 0x201210u) { ctx->pc = 0x201210u; }
    }
    if (ctx->pc != 0x201210u) { return; }
    ctx->pc = 0x201210u;
    // 0x201210: 0x26310001
    ctx->pc = 0x201210u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x201214: 0x2a220008
    ctx->pc = 0x201214u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x201218: 0x1440fff7
    ctx->pc = 0x201218u;
    {
        const bool branch_taken_0x201218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20121Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 136));
        if (branch_taken_0x201218) {
            ctx->pc = 0x2011F8u;
            goto label_2011f8;
        }
    }
    ctx->pc = 0x201220u;
    // 0x201220: 0x10000034
    ctx->pc = 0x201220u;
    {
        const bool branch_taken_0x201220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201224u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x201220) {
            ctx->pc = 0x2012F4u;
            goto label_2012f4;
        }
    }
    ctx->pc = 0x201228u;
label_201228:
    // 0x201228: 0x24020116
    ctx->pc = 0x201228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 278));
label_20122c:
    // 0x20122c: 0x14820030
    ctx->pc = 0x20122Cu;
    {
        const bool branch_taken_0x20122c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x20122c) {
            ctx->pc = 0x2012F0u;
            goto label_2012f0;
        }
    }
    ctx->pc = 0x201234u;
    // 0x201234: 0xc06c24e
    ctx->pc = 0x201234u;
    SET_GPR_U32(ctx, 31, 0x20123Cu);
    ctx->pc = 0x201238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2180)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20123Cu; }
        else if (ctx->pc != 0x20123Cu) { ctx->pc = 0x20123Cu; }
    }
    if (ctx->pc != 0x20123Cu) { return; }
    ctx->pc = 0x20123Cu;
    // 0x20123c: 0x3c023bc4
    ctx->pc = 0x20123cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15300 << 16));
    // 0x201240: 0x34429ba6
    ctx->pc = 0x201240u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x201244: 0x44820800
    ctx->pc = 0x201244u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x201248: 0x0
    ctx->pc = 0x201248u;
    // NOP
    // 0x20124c: 0x46000802
    ctx->pc = 0x20124cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201250: 0xe7a00188
    ctx->pc = 0x201250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x201254: 0xafa0018c
    ctx->pc = 0x201254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x201258: 0xc06c24e
    ctx->pc = 0x201258u;
    SET_GPR_U32(ctx, 31, 0x201260u);
    ctx->pc = 0x20125Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2180)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201260u; }
        else if (ctx->pc != 0x201260u) { ctx->pc = 0x201260u; }
    }
    if (ctx->pc != 0x201260u) { return; }
    ctx->pc = 0x201260u;
    // 0x201260: 0x3c023b44
    ctx->pc = 0x201260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15172 << 16));
    // 0x201264: 0x34429ba6
    ctx->pc = 0x201264u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x201268: 0x44820800
    ctx->pc = 0x201268u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20126c: 0x27a30190
    ctx->pc = 0x20126cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 400));
    // 0x201270: 0x46000802
    ctx->pc = 0x201270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x201274: 0xe4600000
    ctx->pc = 0x201274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x201278: 0x8e020884
    ctx->pc = 0x201278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2180)));
    // 0x20127c: 0x44800000
    ctx->pc = 0x20127cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x201280: 0x24420100
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 256));
    // 0x201284: 0xae020884
    ctx->pc = 0x201284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2180), GPR_U32(ctx, 2));
    // 0x201288: 0xc7a10188
    ctx->pc = 0x201288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20128c: 0x46000834
    ctx->pc = 0x20128cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201290: 0x0
    ctx->pc = 0x201290u;
    // NOP
    // 0x201294: 0x45000002
    ctx->pc = 0x201294u;
    {
        const bool branch_taken_0x201294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x201294) {
            ctx->pc = 0x2012A0u;
            goto label_2012a0;
        }
    }
    ctx->pc = 0x20129Cu;
    // 0x20129c: 0xe7a00188
    ctx->pc = 0x20129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2012a0:
    // 0x2012a0: 0xc4610000
    ctx->pc = 0x2012a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2012a4: 0x44800000
    ctx->pc = 0x2012a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2012a8: 0x0
    ctx->pc = 0x2012a8u;
    // NOP
    // 0x2012ac: 0x46000834
    ctx->pc = 0x2012acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2012b0: 0x0
    ctx->pc = 0x2012b0u;
    // NOP
    // 0x2012b4: 0x45000002
    ctx->pc = 0x2012B4u;
    {
        const bool branch_taken_0x2012b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2012B8u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2012b4) {
            ctx->pc = 0x2012C0u;
            goto label_2012c0;
        }
    }
    ctx->pc = 0x2012BCu;
    // 0x2012bc: 0xe4600000
    ctx->pc = 0x2012bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2012c0:
    // 0x2012c0: 0x72008e28
    ctx->pc = 0x2012c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2012c4:
    // 0x2012c4: 0x26240440
    ctx->pc = 0x2012c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    // 0x2012c8: 0xc080198
    ctx->pc = 0x2012C8u;
    SET_GPR_U32(ctx, 31, 0x2012D0u);
    ctx->pc = 0x2012CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 392));
    ctx->pc = 0x200660u;
    {
        const uint32_t __entryPc = ctx->pc;
        addVel__6CChainF11tagNLpoint3_0x200660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012D0u; }
        else if (ctx->pc != 0x2012D0u) { ctx->pc = 0x2012D0u; }
    }
    if (ctx->pc != 0x2012D0u) { return; }
    ctx->pc = 0x2012D0u;
    // 0x2012d0: 0x72202628
    ctx->pc = 0x2012d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2012d4: 0xc080198
    ctx->pc = 0x2012D4u;
    SET_GPR_U32(ctx, 31, 0x2012DCu);
    ctx->pc = 0x2012D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 392));
    ctx->pc = 0x200660u;
    {
        const uint32_t __entryPc = ctx->pc;
        addVel__6CChainF11tagNLpoint3_0x200660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012DCu; }
        else if (ctx->pc != 0x2012DCu) { ctx->pc = 0x2012DCu; }
    }
    if (ctx->pc != 0x2012DCu) { return; }
    ctx->pc = 0x2012DCu;
    // 0x2012dc: 0x26520001
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2012e0: 0x2a420008
    ctx->pc = 0x2012e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
    // 0x2012e4: 0x1440fff7
    ctx->pc = 0x2012E4u;
    {
        const bool branch_taken_0x2012e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2012E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x2012e4) {
            ctx->pc = 0x2012C4u;
            goto label_2012c4;
        }
    }
    ctx->pc = 0x2012ECu;
    // 0x2012ec: 0x0
    ctx->pc = 0x2012ecu;
    // NOP
label_2012f0:
    // 0x2012f0: 0x70009628
    ctx->pc = 0x2012f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2012f4:
    // 0x2012f4: 0x72008e28
    ctx->pc = 0x2012f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2012f8:
    // 0x2012f8: 0xc0801b8
    ctx->pc = 0x2012F8u;
    SET_GPR_U32(ctx, 31, 0x201300u);
    ctx->pc = 0x2012FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x2006E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        preMove__6CChainFv_0x2006e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201300u; }
        else if (ctx->pc != 0x201300u) { ctx->pc = 0x201300u; }
    }
    if (ctx->pc != 0x201300u) { return; }
    ctx->pc = 0x201300u;
    // 0x201300: 0xc0801b8
    ctx->pc = 0x201300u;
    SET_GPR_U32(ctx, 31, 0x201308u);
    ctx->pc = 0x201304u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2006E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        preMove__6CChainFv_0x2006e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201308u; }
        else if (ctx->pc != 0x201308u) { ctx->pc = 0x201308u; }
    }
    if (ctx->pc != 0x201308u) { return; }
    ctx->pc = 0x201308u;
    // 0x201308: 0x26520001
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x20130c: 0x2a420008
    ctx->pc = 0x20130cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
    // 0x201310: 0x1440fff9
    ctx->pc = 0x201310u;
    {
        const bool branch_taken_0x201310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x201314u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x201310) {
            ctx->pc = 0x2012F8u;
            goto label_2012f8;
        }
    }
    ctx->pc = 0x201318u;
    // 0x201318: 0xafa000b0
    ctx->pc = 0x201318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x20131c: 0x7000ae28
    ctx->pc = 0x20131cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_201320:
    // 0x201320: 0x72008e28
    ctx->pc = 0x201320u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x201324: 0x0
    ctx->pc = 0x201324u;
    // NOP
label_201328:
    // 0x201328: 0xc0801e8
    ctx->pc = 0x201328u;
    SET_GPR_U32(ctx, 31, 0x201330u);
    ctx->pc = 0x20132Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x2007A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move__6CChainFv_0x2007a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201330u; }
        else if (ctx->pc != 0x201330u) { ctx->pc = 0x201330u; }
    }
    if (ctx->pc != 0x201330u) { return; }
    ctx->pc = 0x201330u;
    // 0x201330: 0x3c023f33
    ctx->pc = 0x201330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x201334: 0x34423333
    ctx->pc = 0x201334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x201338: 0x44827800
    ctx->pc = 0x201338u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x20133c: 0xc7ac00d8
    ctx->pc = 0x20133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201340: 0x27a200dc
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 220));
    // 0x201344: 0xc44d0000
    ctx->pc = 0x201344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201348: 0x27a200e0
    ctx->pc = 0x201348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 224));
    // 0x20134c: 0xc44e0000
    ctx->pc = 0x20134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201350: 0xc080250
    ctx->pc = 0x201350u;
    SET_GPR_U32(ctx, 31, 0x201358u);
    ctx->pc = 0x201354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201358u; }
        else if (ctx->pc != 0x201358u) { ctx->pc = 0x201358u; }
    }
    if (ctx->pc != 0x201358u) { return; }
    ctx->pc = 0x201358u;
    // 0x201358: 0x27b700ec
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 236));
    // 0x20135c: 0x27be00f0
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 240));
    // 0x201360: 0xc7ac00e8
    ctx->pc = 0x201360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201364: 0x3c023f99
    ctx->pc = 0x201364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x201368: 0x3442999a
    ctx->pc = 0x201368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x20136c: 0xc6ed0000
    ctx->pc = 0x20136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201370: 0xc7ce0000
    ctx->pc = 0x201370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201374: 0x44827800
    ctx->pc = 0x201374u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x201378: 0xc080250
    ctx->pc = 0x201378u;
    SET_GPR_U32(ctx, 31, 0x201380u);
    ctx->pc = 0x20137Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201380u; }
        else if (ctx->pc != 0x201380u) { ctx->pc = 0x201380u; }
    }
    if (ctx->pc != 0x201380u) { return; }
    ctx->pc = 0x201380u;
    // 0x201380: 0x27b2014c
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 332));
    // 0x201384: 0x27b60150
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 336));
    // 0x201388: 0xc7ac0148
    ctx->pc = 0x201388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20138c: 0x3c023f19
    ctx->pc = 0x20138cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x201390: 0x3442999a
    ctx->pc = 0x201390u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x201394: 0xc64d0000
    ctx->pc = 0x201394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201398: 0xc6ce0000
    ctx->pc = 0x201398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20139c: 0x44827800
    ctx->pc = 0x20139cu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2013a0: 0xc080250
    ctx->pc = 0x2013A0u;
    SET_GPR_U32(ctx, 31, 0x2013A8u);
    ctx->pc = 0x2013A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013A8u; }
        else if (ctx->pc != 0x2013A8u) { ctx->pc = 0x2013A8u; }
    }
    if (ctx->pc != 0x2013A8u) { return; }
    ctx->pc = 0x2013A8u;
    // 0x2013a8: 0x27b4016c
    ctx->pc = 0x2013a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 364));
    // 0x2013ac: 0x27b30170
    ctx->pc = 0x2013acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 368));
    // 0x2013b0: 0xc7ac0168
    ctx->pc = 0x2013b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2013b4: 0x3c023f19
    ctx->pc = 0x2013b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x2013b8: 0x3442999a
    ctx->pc = 0x2013b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x2013bc: 0xc68d0000
    ctx->pc = 0x2013bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2013c0: 0xc66e0000
    ctx->pc = 0x2013c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2013c4: 0x44827800
    ctx->pc = 0x2013c4u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2013c8: 0xc080250
    ctx->pc = 0x2013C8u;
    SET_GPR_U32(ctx, 31, 0x2013D0u);
    ctx->pc = 0x2013CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013D0u; }
        else if (ctx->pc != 0x2013D0u) { ctx->pc = 0x2013D0u; }
    }
    if (ctx->pc != 0x2013D0u) { return; }
    ctx->pc = 0x2013D0u;
    // 0x2013d0: 0xc0801e8
    ctx->pc = 0x2013D0u;
    SET_GPR_U32(ctx, 31, 0x2013D8u);
    ctx->pc = 0x2013D4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2007A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move__6CChainFv_0x2007a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013D8u; }
        else if (ctx->pc != 0x2013D8u) { ctx->pc = 0x2013D8u; }
    }
    if (ctx->pc != 0x2013D8u) { return; }
    ctx->pc = 0x2013D8u;
    // 0x2013d8: 0x27a200dc
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 220));
    // 0x2013dc: 0xc44d0000
    ctx->pc = 0x2013dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2013e0: 0xc7ac00d8
    ctx->pc = 0x2013e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2013e4: 0x27a200e0
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 224));
    // 0x2013e8: 0xc44e0000
    ctx->pc = 0x2013e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2013ec: 0x3c023f33
    ctx->pc = 0x2013ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
    // 0x2013f0: 0x34423333
    ctx->pc = 0x2013f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x2013f4: 0x44827800
    ctx->pc = 0x2013f4u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2013f8: 0xc080250
    ctx->pc = 0x2013F8u;
    SET_GPR_U32(ctx, 31, 0x201400u);
    ctx->pc = 0x2013FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201400u; }
        else if (ctx->pc != 0x201400u) { ctx->pc = 0x201400u; }
    }
    if (ctx->pc != 0x201400u) { return; }
    ctx->pc = 0x201400u;
    // 0x201400: 0xc6ed0000
    ctx->pc = 0x201400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201404: 0xc7ce0000
    ctx->pc = 0x201404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201408: 0x3c023f99
    ctx->pc = 0x201408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x20140c: 0x3442999a
    ctx->pc = 0x20140cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x201410: 0xc7ac00e8
    ctx->pc = 0x201410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201414: 0x44827800
    ctx->pc = 0x201414u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x201418: 0xc080250
    ctx->pc = 0x201418u;
    SET_GPR_U32(ctx, 31, 0x201420u);
    ctx->pc = 0x20141Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201420u; }
        else if (ctx->pc != 0x201420u) { ctx->pc = 0x201420u; }
    }
    if (ctx->pc != 0x201420u) { return; }
    ctx->pc = 0x201420u;
    // 0x201420: 0xc64d0000
    ctx->pc = 0x201420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201424: 0xc6ce0000
    ctx->pc = 0x201424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201428: 0x3c023f19
    ctx->pc = 0x201428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x20142c: 0x3442999a
    ctx->pc = 0x20142cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x201430: 0xc7ac0148
    ctx->pc = 0x201430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201434: 0x44827800
    ctx->pc = 0x201434u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x201438: 0xc080250
    ctx->pc = 0x201438u;
    SET_GPR_U32(ctx, 31, 0x201440u);
    ctx->pc = 0x20143Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201440u; }
        else if (ctx->pc != 0x201440u) { ctx->pc = 0x201440u; }
    }
    if (ctx->pc != 0x201440u) { return; }
    ctx->pc = 0x201440u;
    // 0x201440: 0xc68d0000
    ctx->pc = 0x201440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201444: 0xc66e0000
    ctx->pc = 0x201444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201448: 0x3c023f19
    ctx->pc = 0x201448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x20144c: 0x3442999a
    ctx->pc = 0x20144cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x201450: 0xc7ac0168
    ctx->pc = 0x201450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201454: 0x44827800
    ctx->pc = 0x201454u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x201458: 0xc080250
    ctx->pc = 0x201458u;
    SET_GPR_U32(ctx, 31, 0x201460u);
    ctx->pc = 0x20145Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200940u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkColli__6CChainFffff_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201460u; }
        else if (ctx->pc != 0x201460u) { ctx->pc = 0x201460u; }
    }
    if (ctx->pc != 0x201460u) { return; }
    ctx->pc = 0x201460u;
    // 0x201460: 0x26b50001
    ctx->pc = 0x201460u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x201464: 0x2aa20008
    ctx->pc = 0x201464u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 8));
    // 0x201468: 0x1440ffaf
    ctx->pc = 0x201468u;
    {
        const bool branch_taken_0x201468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20146Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x201468) {
            ctx->pc = 0x201328u;
            goto label_201328;
        }
    }
    ctx->pc = 0x201470u;
    // 0x201470: 0xc7ac0108
    ctx->pc = 0x201470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201474: 0xc7ad010c
    ctx->pc = 0x201474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x201478: 0xc7ae0110
    ctx->pc = 0x201478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20147c: 0xc080134
    ctx->pc = 0x20147Cu;
    SET_GPR_U32(ctx, 31, 0x201484u);
    ctx->pc = 0x201480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1088));
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201484u; }
        else if (ctx->pc != 0x201484u) { ctx->pc = 0x201484u; }
    }
    if (ctx->pc != 0x201484u) { return; }
    ctx->pc = 0x201484u;
    // 0x201484: 0xc7ac0128
    ctx->pc = 0x201484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201488: 0xc7ad012c
    ctx->pc = 0x201488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20148c: 0xc7ae0130
    ctx->pc = 0x20148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201490: 0xc080134
    ctx->pc = 0x201490u;
    SET_GPR_U32(ctx, 31, 0x201498u);
    ctx->pc = 0x201494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2004D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initPos__6CChainFfff_0x2004d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201498u; }
        else if (ctx->pc != 0x201498u) { ctx->pc = 0x201498u; }
    }
    if (ctx->pc != 0x201498u) { return; }
    ctx->pc = 0x201498u;
    // 0x201498: 0x8fa200b0
    ctx->pc = 0x201498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20149c: 0x24420001
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2014a0: 0xafa200b0
    ctx->pc = 0x2014a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2014a4: 0x8fa200b0
    ctx->pc = 0x2014a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2014a8: 0x28420008
    ctx->pc = 0x2014a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x2014ac: 0x1440ff9c
    ctx->pc = 0x2014ACu;
    {
        const bool branch_taken_0x2014ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2014B0u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2014ac) {
            ctx->pc = 0x201320u;
            goto label_201320;
        }
    }
    ctx->pc = 0x2014B4u;
    // 0x2014b4: 0x70009628
    ctx->pc = 0x2014b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2014b8: 0x72008e28
    ctx->pc = 0x2014b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2014bc:
    // 0x2014bc: 0xc080288
    ctx->pc = 0x2014BCu;
    SET_GPR_U32(ctx, 31, 0x2014C4u);
    ctx->pc = 0x2014C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        postMove__6CChainFv_0x200a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014C4u; }
        else if (ctx->pc != 0x2014C4u) { ctx->pc = 0x2014C4u; }
    }
    if (ctx->pc != 0x2014C4u) { return; }
    ctx->pc = 0x2014C4u;
    // 0x2014c4: 0xc080288
    ctx->pc = 0x2014C4u;
    SET_GPR_U32(ctx, 31, 0x2014CCu);
    ctx->pc = 0x2014C8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        postMove__6CChainFv_0x200a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014CCu; }
        else if (ctx->pc != 0x2014CCu) { ctx->pc = 0x2014CCu; }
    }
    if (ctx->pc != 0x2014CCu) { return; }
    ctx->pc = 0x2014CCu;
    // 0x2014cc: 0x26520001
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2014d0: 0x2a420008
    ctx->pc = 0x2014d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
    // 0x2014d4: 0x1440fff9
    ctx->pc = 0x2014D4u;
    {
        const bool branch_taken_0x2014d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2014D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x2014d4) {
            ctx->pc = 0x2014BCu;
            goto label_2014bc;
        }
    }
    ctx->pc = 0x2014DCu;
    // 0x2014dc: 0x0
    ctx->pc = 0x2014dcu;
    // NOP
    // 0x2014e0: 0x70008e28
    ctx->pc = 0x2014e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2014e4:
    // 0x2014e4: 0x72009628
    ctx->pc = 0x2014e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2014e8:
    // 0x2014e8: 0x27a401a8
    ctx->pc = 0x2014e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 424));
    // 0x2014ec: 0xc08012c
    ctx->pc = 0x2014ECu;
    SET_GPR_U32(ctx, 31, 0x2014F4u);
    ctx->pc = 0x2014F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 1088));
    ctx->pc = 0x2004B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPos__6CChainFv_0x2004b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2014F4u; }
        else if (ctx->pc != 0x2014F4u) { ctx->pc = 0x2014F4u; }
    }
    if (ctx->pc != 0x2014F4u) { return; }
    ctx->pc = 0x2014F4u;
    // 0x2014f4: 0x26230001
    ctx->pc = 0x2014f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2014f8: 0x31100
    ctx->pc = 0x2014f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2014fc: 0x431021
    ctx->pc = 0x2014fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201500: 0x210c0
    ctx->pc = 0x201500u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x201504: 0x202a821
    ctx->pc = 0x201504u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x201508: 0xc7b401a8
    ctx->pc = 0x201508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20150c: 0xc7b501ac
    ctx->pc = 0x20150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x201510: 0xc7b601b0
    ctx->pc = 0x201510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x201514: 0x27a401b8
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 440));
    // 0x201518: 0xc08012c
    ctx->pc = 0x201518u;
    SET_GPR_U32(ctx, 31, 0x201520u);
    ctx->pc = 0x20151Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 1088));
    ctx->pc = 0x2004B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPos__6CChainFv_0x2004b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201520u; }
        else if (ctx->pc != 0x201520u) { ctx->pc = 0x201520u; }
    }
    if (ctx->pc != 0x201520u) { return; }
    ctx->pc = 0x201520u;
    // 0x201520: 0xc7a201b8
    ctx->pc = 0x201520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201524: 0xc7a101bc
    ctx->pc = 0x201524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201528: 0xc7a001c0
    ctx->pc = 0x201528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20152c: 0x27b4019c
    ctx->pc = 0x20152cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 412));
    // 0x201530: 0x27b301a0
    ctx->pc = 0x201530u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 416));
    // 0x201534: 0x27a40198
    ctx->pc = 0x201534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 408));
    // 0x201538: 0x4602a081
    ctx->pc = 0x201538u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x20153c: 0x4601a841
    ctx->pc = 0x20153cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x201540: 0xe7a20198
    ctx->pc = 0x201540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x201544: 0x4600b001
    ctx->pc = 0x201544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x201548: 0xe6810000
    ctx->pc = 0x201548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20154c: 0xc06be7f
    ctx->pc = 0x20154Cu;
    SET_GPR_U32(ctx, 31, 0x201554u);
    ctx->pc = 0x201550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201554u; }
        else if (ctx->pc != 0x201554u) { ctx->pc = 0x201554u; }
    }
    if (ctx->pc != 0x201554u) { return; }
    ctx->pc = 0x201554u;
    // 0x201554: 0xc7ac0198
    ctx->pc = 0x201554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201558: 0xc68d0000
    ctx->pc = 0x201558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20155c: 0xc66e0000
    ctx->pc = 0x20155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201560: 0x27a401e8
    ctx->pc = 0x201560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 488));
    // 0x201564: 0xc072418
    ctx->pc = 0x201564u;
    SET_GPR_U32(ctx, 31, 0x20156Cu);
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 492));
    ctx->pc = 0x1C9060u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleXZ__FfffPiPi_0x1c9060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20156Cu; }
        else if (ctx->pc != 0x20156Cu) { ctx->pc = 0x20156Cu; }
    }
    if (ctx->pc != 0x20156Cu) { return; }
    ctx->pc = 0x20156Cu;
    // 0x20156c: 0x4bede37d
    ctx->pc = 0x20156cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x201570: 0x4bedeb7d
    ctx->pc = 0x201570u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x201574: 0x4bedf37d
    ctx->pc = 0x201574u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x201578: 0x4bedfb7d
    ctx->pc = 0x201578u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x20157c: 0x4600a306
    ctx->pc = 0x20157cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x201580: 0x4600ab46
    ctx->pc = 0x201580u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x201584: 0xc06c202
    ctx->pc = 0x201584u;
    SET_GPR_U32(ctx, 31, 0x20158Cu);
    ctx->pc = 0x201588u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20158Cu; }
        else if (ctx->pc != 0x20158Cu) { ctx->pc = 0x20158Cu; }
    }
    if (ctx->pc != 0x20158Cu) { return; }
    ctx->pc = 0x20158Cu;
    // 0x20158c: 0xc06c09f
    ctx->pc = 0x20158Cu;
    SET_GPR_U32(ctx, 31, 0x201594u);
    ctx->pc = 0x201590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201594u; }
        else if (ctx->pc != 0x201594u) { ctx->pc = 0x201594u; }
    }
    if (ctx->pc != 0x201594u) { return; }
    ctx->pc = 0x201594u;
    // 0x201594: 0xc06c157
    ctx->pc = 0x201594u;
    SET_GPR_U32(ctx, 31, 0x20159Cu);
    ctx->pc = 0x201598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20159Cu; }
        else if (ctx->pc != 0x20159Cu) { ctx->pc = 0x20159Cu; }
    }
    if (ctx->pc != 0x20159Cu) { return; }
    ctx->pc = 0x20159Cu;
    // 0x20159c: 0x24020006
    ctx->pc = 0x20159cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2015a0: 0x16220006
    ctx->pc = 0x2015A0u;
    {
        const bool branch_taken_0x2015a0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2015A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)174 << 16));
        if (branch_taken_0x2015a0) {
            ctx->pc = 0x2015BCu;
            goto label_2015bc;
        }
    }
    ctx->pc = 0x2015A8u;
    // 0x2015a8: 0xc0853ac
    ctx->pc = 0x2015A8u;
    SET_GPR_U32(ctx, 31, 0x2015B0u);
    ctx->pc = 0x2015ACu;
    SET_GPR_U32(ctx, 4, ((uint32_t)174 << 16));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015B0u; }
        else if (ctx->pc != 0x2015B0u) { ctx->pc = 0x2015B0u; }
    }
    if (ctx->pc != 0x2015B0u) { return; }
    ctx->pc = 0x2015B0u;
    // 0x2015b0: 0x10000006
    ctx->pc = 0x2015B0u;
    {
        const bool branch_taken_0x2015b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2015B4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x2015b0) {
            ctx->pc = 0x2015CCu;
            goto label_2015cc;
        }
    }
    ctx->pc = 0x2015B8u;
    // 0x2015b8: 0x3c0200ae
    ctx->pc = 0x2015b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)174 << 16));
label_2015bc:
    // 0x2015bc: 0xc0853ac
    ctx->pc = 0x2015BCu;
    SET_GPR_U32(ctx, 31, 0x2015C4u);
    ctx->pc = 0x2015C0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015C4u; }
        else if (ctx->pc != 0x2015C4u) { ctx->pc = 0x2015C4u; }
    }
    if (ctx->pc != 0x2015C4u) { return; }
    ctx->pc = 0x2015C4u;
    // 0x2015c4: 0x0
    ctx->pc = 0x2015c4u;
    // NOP
    // 0x2015c8: 0x4bff6b7e
    ctx->pc = 0x2015c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2015cc:
    // 0x2015cc: 0x4bfe6b7e
    ctx->pc = 0x2015ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2015d0: 0x4bfd6b7e
    ctx->pc = 0x2015d0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2015d4: 0x4bfc6b7e
    ctx->pc = 0x2015d4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2015d8: 0x27a401c8
    ctx->pc = 0x2015d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 456));
    // 0x2015dc: 0xc08012c
    ctx->pc = 0x2015DCu;
    SET_GPR_U32(ctx, 31, 0x2015E4u);
    ctx->pc = 0x2015E0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2004B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPos__6CChainFv_0x2004b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015E4u; }
        else if (ctx->pc != 0x2015E4u) { ctx->pc = 0x2015E4u; }
    }
    if (ctx->pc != 0x2015E4u) { return; }
    ctx->pc = 0x2015E4u;
    // 0x2015e4: 0xc7b401c8
    ctx->pc = 0x2015e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2015e8: 0xc7b501cc
    ctx->pc = 0x2015e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2015ec: 0xc7b601d0
    ctx->pc = 0x2015ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2015f0: 0x72a02e28
    ctx->pc = 0x2015f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2015f4: 0xc08012c
    ctx->pc = 0x2015F4u;
    SET_GPR_U32(ctx, 31, 0x2015FCu);
    ctx->pc = 0x2015F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 472));
    ctx->pc = 0x2004B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPos__6CChainFv_0x2004b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015FCu; }
        else if (ctx->pc != 0x2015FCu) { ctx->pc = 0x2015FCu; }
    }
    if (ctx->pc != 0x2015FCu) { return; }
    ctx->pc = 0x2015FCu;
    // 0x2015fc: 0xc7a201d8
    ctx->pc = 0x2015fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201600: 0xc7a101dc
    ctx->pc = 0x201600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201604: 0xc7a001e0
    ctx->pc = 0x201604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201608: 0x27a40198
    ctx->pc = 0x201608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 408));
    // 0x20160c: 0x4602a081
    ctx->pc = 0x20160cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x201610: 0x4601a841
    ctx->pc = 0x201610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x201614: 0xe7a20198
    ctx->pc = 0x201614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x201618: 0x4600b001
    ctx->pc = 0x201618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x20161c: 0xe6810000
    ctx->pc = 0x20161cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x201620: 0xc06be7f
    ctx->pc = 0x201620u;
    SET_GPR_U32(ctx, 31, 0x201628u);
    ctx->pc = 0x201624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201628u; }
        else if (ctx->pc != 0x201628u) { ctx->pc = 0x201628u; }
    }
    if (ctx->pc != 0x201628u) { return; }
    ctx->pc = 0x201628u;
    // 0x201628: 0xc68d0000
    ctx->pc = 0x201628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20162c: 0xc66e0000
    ctx->pc = 0x20162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x201630: 0xc7ac0198
    ctx->pc = 0x201630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201634: 0x27a401e8
    ctx->pc = 0x201634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 488));
    // 0x201638: 0xc072418
    ctx->pc = 0x201638u;
    SET_GPR_U32(ctx, 31, 0x201640u);
    ctx->pc = 0x20163Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 492));
    ctx->pc = 0x1C9060u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleXZ__FfffPiPi_0x1c9060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201640u; }
        else if (ctx->pc != 0x201640u) { ctx->pc = 0x201640u; }
    }
    if (ctx->pc != 0x201640u) { return; }
    ctx->pc = 0x201640u;
    // 0x201640: 0x4bede37d
    ctx->pc = 0x201640u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x201644: 0x4bedeb7d
    ctx->pc = 0x201644u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x201648: 0x4bedf37d
    ctx->pc = 0x201648u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20164c: 0x4bedfb7d
    ctx->pc = 0x20164cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x201650: 0x4600a306
    ctx->pc = 0x201650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x201654: 0x4600ab46
    ctx->pc = 0x201654u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x201658: 0xc06c202
    ctx->pc = 0x201658u;
    SET_GPR_U32(ctx, 31, 0x201660u);
    ctx->pc = 0x20165Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201660u; }
        else if (ctx->pc != 0x201660u) { ctx->pc = 0x201660u; }
    }
    if (ctx->pc != 0x201660u) { return; }
    ctx->pc = 0x201660u;
    // 0x201660: 0xc06c09f
    ctx->pc = 0x201660u;
    SET_GPR_U32(ctx, 31, 0x201668u);
    ctx->pc = 0x201664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201668u; }
        else if (ctx->pc != 0x201668u) { ctx->pc = 0x201668u; }
    }
    if (ctx->pc != 0x201668u) { return; }
    ctx->pc = 0x201668u;
    // 0x201668: 0xc06c157
    ctx->pc = 0x201668u;
    SET_GPR_U32(ctx, 31, 0x201670u);
    ctx->pc = 0x20166Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201670u; }
        else if (ctx->pc != 0x201670u) { ctx->pc = 0x201670u; }
    }
    if (ctx->pc != 0x201670u) { return; }
    ctx->pc = 0x201670u;
    // 0x201670: 0x24020006
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x201674: 0x16220006
    ctx->pc = 0x201674u;
    {
        const bool branch_taken_0x201674 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x201678u;
        SET_GPR_U32(ctx, 2, ((uint32_t)174 << 16));
        if (branch_taken_0x201674) {
            ctx->pc = 0x201690u;
            goto label_201690;
        }
    }
    ctx->pc = 0x20167Cu;
    // 0x20167c: 0xc0853ac
    ctx->pc = 0x20167Cu;
    SET_GPR_U32(ctx, 31, 0x201684u);
    ctx->pc = 0x201680u;
    SET_GPR_U32(ctx, 4, ((uint32_t)174 << 16));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201684u; }
        else if (ctx->pc != 0x201684u) { ctx->pc = 0x201684u; }
    }
    if (ctx->pc != 0x201684u) { return; }
    ctx->pc = 0x201684u;
    // 0x201684: 0x10000005
    ctx->pc = 0x201684u;
    {
        const bool branch_taken_0x201684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201688u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x201684) {
            ctx->pc = 0x20169Cu;
            goto label_20169c;
        }
    }
    ctx->pc = 0x20168Cu;
    // 0x20168c: 0x3c0200ae
    ctx->pc = 0x20168cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)174 << 16));
label_201690:
    // 0x201690: 0xc0853ac
    ctx->pc = 0x201690u;
    SET_GPR_U32(ctx, 31, 0x201698u);
    ctx->pc = 0x201694u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201698u; }
        else if (ctx->pc != 0x201698u) { ctx->pc = 0x201698u; }
    }
    if (ctx->pc != 0x201698u) { return; }
    ctx->pc = 0x201698u;
    // 0x201698: 0x4bff6b7e
    ctx->pc = 0x201698u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20169c:
    // 0x20169c: 0x4bfe6b7e
    ctx->pc = 0x20169cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2016a0: 0x4bfd6b7e
    ctx->pc = 0x2016a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2016a4: 0x4bfc6b7e
    ctx->pc = 0x2016a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2016a8: 0x26310001
    ctx->pc = 0x2016a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2016ac: 0x2a230007
    ctx->pc = 0x2016acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 7));
    // 0x2016b0: 0x1460ff8d
    ctx->pc = 0x2016B0u;
    {
        const bool branch_taken_0x2016b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2016B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 136));
        if (branch_taken_0x2016b0) {
            ctx->pc = 0x2014E8u;
            goto label_2014e8;
        }
    }
    ctx->pc = 0x2016B8u;
label_2016b8:
    // 0x2016b8: 0x7bbf00a0
    ctx->pc = 0x2016b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2016bc: 0x7bbe0090
    ctx->pc = 0x2016bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2016c0: 0x7bb70080
    ctx->pc = 0x2016c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2016c4: 0x7bb60070
    ctx->pc = 0x2016c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2016c8: 0x7bb50060
    ctx->pc = 0x2016c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2016cc: 0x7bb40050
    ctx->pc = 0x2016ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2016d0: 0x7bb30040
    ctx->pc = 0x2016d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2016d4: 0x7bb20030
    ctx->pc = 0x2016d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2016d8: 0x7bb10020
    ctx->pc = 0x2016d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2016dc: 0x7bb00010
    ctx->pc = 0x2016dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2016e0: 0xc7b60008
    ctx->pc = 0x2016e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2016e4: 0xc7b50004
    ctx->pc = 0x2016e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2016e8: 0xc7b40000
    ctx->pc = 0x2016e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2016ec: 0x3e00008
    ctx->pc = 0x2016ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2016F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2011F8u: goto label_2011f8;
            case 0x201228u: goto label_201228;
            case 0x20122Cu: goto label_20122c;
            case 0x2012A0u: goto label_2012a0;
            case 0x2012C0u: goto label_2012c0;
            case 0x2012C4u: goto label_2012c4;
            case 0x2012F0u: goto label_2012f0;
            case 0x2012F4u: goto label_2012f4;
            case 0x2012F8u: goto label_2012f8;
            case 0x201320u: goto label_201320;
            case 0x201328u: goto label_201328;
            case 0x2014BCu: goto label_2014bc;
            case 0x2014E4u: goto label_2014e4;
            case 0x2014E8u: goto label_2014e8;
            case 0x2015BCu: goto label_2015bc;
            case 0x2015CCu: goto label_2015cc;
            case 0x201690u: goto label_201690;
            case 0x20169Cu: goto label_20169c;
            case 0x2016B8u: goto label_2016b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2016F4u;
}
