#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B00E0
// Address: 0x1b00e0 - 0x1b0138
void sub_001B00E0_0x1b00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B00E0");


    ctx->pc = 0x1b00e0u;

    // 0x1b00e0: 0x24010000
    ctx->pc = 0x1b00e0u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b00e4: 0x14810007
    ctx->pc = 0x1B00E4u;
    {
        const bool branch_taken_0x1b00e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 1));
        if (branch_taken_0x1b00e4) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B00ECu;
    // 0x1b00ec: 0x4bfc6b7c
    ctx->pc = 0x1b00ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1b00f0: 0x4bfd6b7c
    ctx->pc = 0x1b00f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1b00f4: 0x4bfe6b7c
    ctx->pc = 0x1b00f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1b00f8: 0x4bff6b7c
    ctx->pc = 0x1b00f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1b00fc: 0x3e00008
    ctx->pc = 0x1B00FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0100u;
        ctx->vi[13] = ctx->vi[13] + -4;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0104u: goto label_1b0104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0104u;
label_1b0104:
    // 0x1b0104: 0xd89c0000
    ctx->pc = 0x1b0104u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0108: 0xd89d0010
    ctx->pc = 0x1b0108u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b010c: 0xd89e0020
    ctx->pc = 0x1b010cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b0110: 0xd89f0030
    ctx->pc = 0x1b0110u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b0114: 0x3e00008
    ctx->pc = 0x1B0114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0104u: goto label_1b0104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B011Cu;
    // 0x1b011c: 0x48c40801
    ctx->pc = 0x1b011cu;
    ctx->vu0_mac_flags = GPR_U32(ctx, 4);
    // 0x1b0120: 0x4bfc0b7c
    ctx->pc = 0x1b0120u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b0124: 0x4bfd0b7c
    ctx->pc = 0x1b0124u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b0128: 0x4bfe0b7c
    ctx->pc = 0x1b0128u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b012c: 0x4bff0b7c
    ctx->pc = 0x1b012cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1b0130: 0x3e00008
    ctx->pc = 0x1B0130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0104u: goto label_1b0104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0138u;
}
