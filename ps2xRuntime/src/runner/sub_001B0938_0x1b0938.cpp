#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B0938
// Address: 0x1b0938 - 0x1b09b4
void sub_001B0938_0x1b0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B0938");


    ctx->pc = 0x1b0938u;

    // 0x1b0938: 0x27bdfff0
    ctx->pc = 0x1b0938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b093c: 0x3084ffff
    ctx->pc = 0x1b093cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b0940: 0x4a25033c
    ctx->pc = 0x1b0940u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b0944: 0x20884000
    ctx->pc = 0x1b0944u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b0948: 0x84400
    ctx->pc = 0x1b0948u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b094c: 0x5010003
    ctx->pc = 0x1B094Cu;
    {
        const bool branch_taken_0x1b094c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b094c) {
            ctx->pc = 0x1B095Cu;
            goto label_1b095c;
        }
    }
    ctx->pc = 0x1B0954u;
    // 0x1b0954: 0x4a25bb3c
    ctx->pc = 0x1b0954u;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0958: 0x20848000
    ctx->pc = 0x1b0958u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b095c:
    // 0x1b095c: 0x42400
    ctx->pc = 0x1b095cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b0960: 0x42403
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b0964: 0x48a41001
    ctx->pc = 0x1b0964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b0968: 0x4b04113c
    ctx->pc = 0x1b0968u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b096c: 0x4a8000c3
    ctx->pc = 0x1b096cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0970: 0x4a44b8d8
    ctx->pc = 0x1b0970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0974: 0x4b821b3d
    ctx->pc = 0x1b0974u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0978: 0x4b8012bc
    ctx->pc = 0x1b0978u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b097c: 0x4a82112a
    ctx->pc = 0x1b097cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0980: 0x4b841099
    ctx->pc = 0x1b0980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0984: 0x4b82babd
    ctx->pc = 0x1b0984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0988: 0x4b841099
    ctx->pc = 0x1b0988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b098c: 0x4b82b2bd
    ctx->pc = 0x1b098cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0990: 0x4b841099
    ctx->pc = 0x1b0990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0994: 0x4b82aabd
    ctx->pc = 0x1b0994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0998: 0x4b841099
    ctx->pc = 0x1b0998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b099c: 0x4b82a0e9
    ctx->pc = 0x1b099cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b09a0: 0x4b85185b
    ctx->pc = 0x1b09a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b09a4: 0xfba10000
    ctx->pc = 0x1b09a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b09a8: 0xc7a00004
    ctx->pc = 0x1b09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b09ac: 0x3e00008
    ctx->pc = 0x1B09ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B09B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B095Cu: goto label_1b095c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B09B4u;
}
