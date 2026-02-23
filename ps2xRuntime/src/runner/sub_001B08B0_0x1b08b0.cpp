#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B08B0
// Address: 0x1b08b0 - 0x1b0938
void sub_001B08B0_0x1b08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B08B0");


    ctx->pc = 0x1b08b0u;

    // 0x1b08b0: 0x27bdfff0
    ctx->pc = 0x1b08b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b08b4: 0x3084ffff
    ctx->pc = 0x1b08b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b08b8: 0x4a25033c
    ctx->pc = 0x1b08b8u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b08bc: 0x20884000
    ctx->pc = 0x1b08bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b08c0: 0x84400
    ctx->pc = 0x1b08c0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b08c4: 0x5010003
    ctx->pc = 0x1B08C4u;
    {
        const bool branch_taken_0x1b08c4 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b08c4) {
            ctx->pc = 0x1B08D4u;
            goto label_1b08d4;
        }
    }
    ctx->pc = 0x1B08CCu;
    // 0x1b08cc: 0x4a25bb3c
    ctx->pc = 0x1b08ccu;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b08d0: 0x20848000
    ctx->pc = 0x1b08d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b08d4:
    // 0x1b08d4: 0x42400
    ctx->pc = 0x1b08d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b08d8: 0x42403
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b08dc: 0x48a41001
    ctx->pc = 0x1b08dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b08e0: 0x4b04113c
    ctx->pc = 0x1b08e0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b08e4: 0x4a8000c3
    ctx->pc = 0x1b08e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b08e8: 0x4a44b8d8
    ctx->pc = 0x1b08e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b08ec: 0x4b821b3d
    ctx->pc = 0x1b08ecu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b08f0: 0x4b8012bc
    ctx->pc = 0x1b08f0u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b08f4: 0x4a82112a
    ctx->pc = 0x1b08f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b08f8: 0x4b841099
    ctx->pc = 0x1b08f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b08fc: 0x4b82babd
    ctx->pc = 0x1b08fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0900: 0x4b841099
    ctx->pc = 0x1b0900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0904: 0x4b82b2bd
    ctx->pc = 0x1b0904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0908: 0x4b841099
    ctx->pc = 0x1b0908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b090c: 0x4b82aabd
    ctx->pc = 0x1b090cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0910: 0x4b841099
    ctx->pc = 0x1b0910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0914: 0x4b82a0e9
    ctx->pc = 0x1b0914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0918: 0x4b85185b
    ctx->pc = 0x1b0918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b091c: 0xfba10000
    ctx->pc = 0x1b091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b0920: 0x8fa80004
    ctx->pc = 0x1b0920u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b0924: 0x8fa90000
    ctx->pc = 0x1b0924u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0928: 0xaca80000
    ctx->pc = 0x1b0928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1b092c: 0xacc90000
    ctx->pc = 0x1b092cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1b0930: 0x3e00008
    ctx->pc = 0x1B0930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B08D4u: goto label_1b08d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0938u;
}
