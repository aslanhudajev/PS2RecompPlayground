#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlMakeModelProjectMatrix
// Address: 0x1abd40 - 0x1abd8c
void nlMakeModelProjectMatrix_0x1abd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlMakeModelProjectMatrix");


    ctx->pc = 0x1abd40u;

    // 0x1abd40: 0x27bdfff0
    ctx->pc = 0x1abd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abd44: 0x7fbf0000
    ctx->pc = 0x1abd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1abd48: 0x4bede37d
    ctx->pc = 0x1abd48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1abd4c: 0x4bedeb7d
    ctx->pc = 0x1abd4cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1abd50: 0x4bedf37d
    ctx->pc = 0x1abd50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1abd54: 0x4bedfb7d
    ctx->pc = 0x1abd54u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1abd58: 0x3c020030
    ctx->pc = 0x1abd58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1abd5c: 0xc06c06f
    ctx->pc = 0x1ABD5Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD64u);
    ctx->pc = 0x1ABD60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD64u; }
        else if (ctx->pc != 0x1ABD64u) { ctx->pc = 0x1ABD64u; }
    }
    if (ctx->pc != 0x1ABD64u) { return; }
    ctx->pc = 0x1ABD64u;
    // 0x1abd64: 0x3c020030
    ctx->pc = 0x1abd64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1abd68: 0xc06bf55
    ctx->pc = 0x1ABD68u;
    SET_GPR_U32(ctx, 31, 0x1ABD70u);
    ctx->pc = 0x1ABD6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21872));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD70u; }
        else if (ctx->pc != 0x1ABD70u) { ctx->pc = 0x1ABD70u; }
    }
    if (ctx->pc != 0x1ABD70u) { return; }
    ctx->pc = 0x1ABD70u;
    // 0x1abd70: 0x4bff6b7e
    ctx->pc = 0x1abd70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1abd74: 0x4bfe6b7e
    ctx->pc = 0x1abd74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1abd78: 0x4bfd6b7e
    ctx->pc = 0x1abd78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1abd7c: 0x4bfc6b7e
    ctx->pc = 0x1abd7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1abd80: 0x7bbf0000
    ctx->pc = 0x1abd80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abd84: 0x3e00008
    ctx->pc = 0x1ABD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABD8Cu;
}
