#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AB198
// Address: 0x1ab198 - 0x1ab200
void sub_001AB198_0x1ab198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AB198");


    ctx->pc = 0x1ab198u;

    // 0x1ab198: 0x4a000070
    ctx->pc = 0x1ab198u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x1ab19c: 0x8c880000
    ctx->pc = 0x1ab19cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab1a0: 0x48c86801
    ctx->pc = 0x1ab1a0u;
    ctx->vu0_vpu_stat3 = GPR_U32(ctx, 8);
    // 0x1ab1a4: 0xd8980010
    ctx->pc = 0x1ab1a4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ab1a8: 0xd8990020
    ctx->pc = 0x1ab1a8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ab1ac: 0xd89a0030
    ctx->pc = 0x1ab1acu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ab1b0: 0xd89b0040
    ctx->pc = 0x1ab1b0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ab1b4: 0xd89c0050
    ctx->pc = 0x1ab1b4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1ab1b8: 0xd89d0060
    ctx->pc = 0x1ab1b8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ab1bc: 0xd89e0070
    ctx->pc = 0x1ab1bcu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1ab1c0: 0xd89f0080
    ctx->pc = 0x1ab1c0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1ab1c4: 0x20840090
    ctx->pc = 0x1ab1c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)144, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1ab1c8:
    // 0x1ab1c8: 0xd8810000
    ctx->pc = 0x1ab1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ab1cc: 0xd8820010
    ctx->pc = 0x1ab1ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ab1d0: 0xd8830020
    ctx->pc = 0x1ab1d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ab1d4: 0xd8840030
    ctx->pc = 0x1ab1d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ab1d8: 0x20a5ffff
    ctx->pc = 0x1ab1d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab1dc: 0x4be10b7d
    ctx->pc = 0x1ab1dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab1e0: 0x4be1137d
    ctx->pc = 0x1ab1e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[2] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[2] = (ctx->vi[2] + 1) & 0x3FF; }
    // 0x1ab1e4: 0x4be11b7d
    ctx->pc = 0x1ab1e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[3] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[3] = (ctx->vi[3] + 1) & 0x3FF; }
    // 0x1ab1e8: 0x4be1237d
    ctx->pc = 0x1ab1e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[4] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[4] = (ctx->vi[4] + 1) & 0x3FF; }
    // 0x1ab1ec: 0x1405fff6
    ctx->pc = 0x1AB1ECu;
    {
        const bool branch_taken_0x1ab1ec = (GPR_U32(ctx, 0) != GPR_U32(ctx, 5));
        ctx->pc = 0x1AB1F0u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab1ec) {
            ctx->pc = 0x1AB1C8u;
            goto label_1ab1c8;
        }
    }
    ctx->pc = 0x1AB1F4u;
    // 0x1ab1f4: 0x3e00008
    ctx->pc = 0x1AB1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB1C8u: goto label_1ab1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB1FCu;
    // 0x1ab1fc: 0x0
    ctx->pc = 0x1ab1fcu;
    // NOP
}
