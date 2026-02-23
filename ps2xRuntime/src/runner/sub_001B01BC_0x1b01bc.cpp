#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B01BC
// Address: 0x1b01bc - 0x1b027c
void sub_001B01BC_0x1b01bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B01BC");


    ctx->pc = 0x1b01bcu;

    // 0x1b01bc: 0xd8830000
    ctx->pc = 0x1b01bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b01c0: 0xd8840010
    ctx->pc = 0x1b01c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b01c4: 0xd8850020
    ctx->pc = 0x1b01c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b01c8: 0xd8860030
    ctx->pc = 0x1b01c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b01cc: 0x4be7e33c
    ctx->pc = 0x1b01ccu;
    ctx->vu0_vf[7] = ctx->vu0_vf[28];
    // 0x1b01d0: 0x4be8eb3c
    ctx->pc = 0x1b01d0u;
    ctx->vu0_vf[8] = ctx->vu0_vf[29];
    // 0x1b01d4: 0x4be9f33c
    ctx->pc = 0x1b01d4u;
    ctx->vu0_vf[9] = ctx->vu0_vf[30];
    // 0x1b01d8: 0x4beafb3c
    ctx->pc = 0x1b01d8u;
    ctx->vu0_vf[10] = ctx->vu0_vf[31];
    // 0x1b01dc: 0x806c056
    ctx->pc = 0x1B01DCu;
    ctx->pc = 0x1B0158u;
    entry_1b0158_0x1b01bc(rdram, ctx, runtime); return;
    ctx->pc = 0x1B01E4u;
    // 0x1b01e4: 0x48c40801
    ctx->pc = 0x1b01e4u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 4);
    // 0x1b01e8: 0x4be30b7c
    ctx->pc = 0x1b01e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b01ec: 0x4be40b7c
    ctx->pc = 0x1b01ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b01f0: 0x4be50b7c
    ctx->pc = 0x1b01f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = ps2_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b01f4: 0x4be60b7c
    ctx->pc = 0x1b01f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = ps2_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b01f8: 0x4be7e33c
    ctx->pc = 0x1b01f8u;
    ctx->vu0_vf[7] = ctx->vu0_vf[28];
    // 0x1b01fc: 0x4be8eb3c
    ctx->pc = 0x1b01fcu;
    ctx->vu0_vf[8] = ctx->vu0_vf[29];
    // 0x1b0200: 0x4be9f33c
    ctx->pc = 0x1b0200u;
    ctx->vu0_vf[9] = ctx->vu0_vf[30];
    // 0x1b0204: 0x4beafb3c
    ctx->pc = 0x1b0204u;
    ctx->vu0_vf[10] = ctx->vu0_vf[31];
    // 0x1b0208: 0x806c056
    ctx->pc = 0x1B0208u;
    ctx->pc = 0x1B0158u;
    entry_1b0158_0x1b01bc(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0210u;
    // 0x1b0210: 0x4be0006c
    ctx->pc = 0x1b0210u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b0214: 0x4bfd0f6c
    ctx->pc = 0x1b0214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1b0218: 0x4bfe0fac
    ctx->pc = 0x1b0218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1b021c: 0x3e00008
    ctx->pc = 0x1B021Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0224u;
    // 0x1b0224: 0x4be0006c
    ctx->pc = 0x1b0224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b0228: 0x4bfe0fac
    ctx->pc = 0x1b0228u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1b022c: 0x3e00008
    ctx->pc = 0x1B022Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0234u;
    // 0x1b0234: 0x4be0006c
    ctx->pc = 0x1b0234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b0238: 0x4bfc0f2c
    ctx->pc = 0x1b0238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1b023c: 0x4bfe0fac
    ctx->pc = 0x1b023cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[30]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1b0240: 0x3e00008
    ctx->pc = 0x1B0240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0248u;
    // 0x1b0248: 0x4be0006c
    ctx->pc = 0x1b0248u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b024c: 0x4bfc0f2c
    ctx->pc = 0x1b024cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1b0250: 0x3e00008
    ctx->pc = 0x1B0250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0258u;
    // 0x1b0258: 0x4be0006c
    ctx->pc = 0x1b0258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b025c: 0x4bfc0f2c
    ctx->pc = 0x1b025cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1b0260: 0x4bfd0f6c
    ctx->pc = 0x1b0260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1b0264: 0x3e00008
    ctx->pc = 0x1B0264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0x4be0006c
    ctx->pc = 0x1b026cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b0270: 0x4bfd0f6c
    ctx->pc = 0x1b0270u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1b0274: 0x3e00008
    ctx->pc = 0x1B0274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B027Cu;
}
