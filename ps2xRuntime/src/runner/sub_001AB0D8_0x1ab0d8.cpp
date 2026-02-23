#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AB0D8
// Address: 0x1ab0d8 - 0x1ab134
void sub_001AB0D8_0x1ab0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AB0D8");


    ctx->pc = 0x1ab0d8u;

label_1ab0d8:
    // 0x1ab0d8: 0x78a20000
    ctx->pc = 0x1ab0d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab0dc: 0x20c6ffff
    ctx->pc = 0x1ab0dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab0e0: 0x20a50010
    ctx->pc = 0x1ab0e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab0e4: 0x7c820000
    ctx->pc = 0x1ab0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1ab0e8: 0x0
    ctx->pc = 0x1ab0e8u;
    // NOP
    // 0x1ab0ec: 0x1406fffa
    ctx->pc = 0x1AB0ECu;
    {
        const bool branch_taken_0x1ab0ec = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB0F0u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab0ec) {
            ctx->pc = 0x1AB0D8u;
            goto label_1ab0d8;
        }
    }
    ctx->pc = 0x1AB0F4u;
    // 0x1ab0f4: 0x3e00008
    ctx->pc = 0x1AB0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB100u: goto label_1ab100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB0FCu;
    // 0x1ab0fc: 0x48c50801
    ctx->pc = 0x1ab0fcu;
    ctx->vu0_mac_flags = GPR_U32(ctx, 5);
label_1ab100:
    // 0x1ab100: 0x4be10b7c
    ctx->pc = 0x1ab100u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab104: 0x4be20b7c
    ctx->pc = 0x1ab104u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab108: 0x4be30b7c
    ctx->pc = 0x1ab108u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab10c: 0x4be40b7c
    ctx->pc = 0x1ab10cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab110: 0x20c6fffc
    ctx->pc = 0x1ab110u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1ab114: 0xf8810000
    ctx->pc = 0x1ab114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ab118: 0xf8820010
    ctx->pc = 0x1ab118u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ab11c: 0xf8830020
    ctx->pc = 0x1ab11cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ab120: 0xf8840030
    ctx->pc = 0x1ab120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ab124: 0x1406fff6
    ctx->pc = 0x1AB124u;
    {
        const bool branch_taken_0x1ab124 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AB128u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab124) {
            ctx->pc = 0x1AB100u;
            goto label_1ab100;
        }
    }
    ctx->pc = 0x1AB12Cu;
    // 0x1ab12c: 0x3e00008
    ctx->pc = 0x1AB12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB100u: goto label_1ab100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB134u;
}
