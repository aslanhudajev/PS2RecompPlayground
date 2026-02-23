#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B055C
// Address: 0x1b055c - 0x1b06cc
void sub_001B055C_0x1b055c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B055C");


    ctx->pc = 0x1b055cu;

    // 0x1b055c: 0x3084ffff
    ctx->pc = 0x1b055cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b0560: 0x4a25033c
    ctx->pc = 0x1b0560u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b0564: 0x20884000
    ctx->pc = 0x1b0564u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b0568: 0x84400
    ctx->pc = 0x1b0568u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b056c: 0x5010003
    ctx->pc = 0x1B056Cu;
    {
        const bool branch_taken_0x1b056c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b056c) {
            ctx->pc = 0x1B057Cu;
            goto label_1b057c;
        }
    }
    ctx->pc = 0x1B0574u;
    // 0x1b0574: 0x4a25bb3c
    ctx->pc = 0x1b0574u;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0578: 0x20848000
    ctx->pc = 0x1b0578u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b057c:
    // 0x1b057c: 0x42400
    ctx->pc = 0x1b057cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b0580: 0x42403
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b0584: 0x48a41001
    ctx->pc = 0x1b0584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b0588: 0x4b04113c
    ctx->pc = 0x1b0588u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b058c: 0x4a8000c3
    ctx->pc = 0x1b058cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0590: 0x4a44b8d8
    ctx->pc = 0x1b0590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0594: 0x4b821b3d
    ctx->pc = 0x1b0594u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0598: 0x4b8012bc
    ctx->pc = 0x1b0598u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b059c: 0x4a82112a
    ctx->pc = 0x1b059cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b05a0: 0x4b841099
    ctx->pc = 0x1b05a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b05a4: 0x4b82babd
    ctx->pc = 0x1b05a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b05a8: 0x4b841099
    ctx->pc = 0x1b05a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b05ac: 0x4b82b2bd
    ctx->pc = 0x1b05acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b05b0: 0x4b841099
    ctx->pc = 0x1b05b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b05b4: 0x4b82aabd
    ctx->pc = 0x1b05b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b05b8: 0x4b841099
    ctx->pc = 0x1b05b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b05bc: 0x4b82a0e9
    ctx->pc = 0x1b05bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b05c0: 0x4b85185b
    ctx->pc = 0x1b05c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b05c4: 0x4be2e33c
    ctx->pc = 0x1b05c4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b05c8: 0x4be3eb3c
    ctx->pc = 0x1b05c8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[29];
    // 0x1b05cc: 0x4be111bc
    ctx->pc = 0x1b05ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b05d0: 0x4be11f09
    ctx->pc = 0x1b05d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b05d4: 0x4be119bc
    ctx->pc = 0x1b05d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b05d8: 0x4be1174d
    ctx->pc = 0x1b05d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b05dc: 0x3e00008
    ctx->pc = 0x1B05DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0634u: goto label_1b0634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B05E4u;
    // 0x1b05e4: 0x27bdfff0
    ctx->pc = 0x1b05e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b05e8: 0xe7ac0004
    ctx->pc = 0x1b05e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b05ec: 0xe7ad0000
    ctx->pc = 0x1b05ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b05f0: 0xdba10000
    ctx->pc = 0x1b05f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b05f4: 0x4be2e33c
    ctx->pc = 0x1b05f4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b05f8: 0x4be3eb3c
    ctx->pc = 0x1b05f8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[29];
    // 0x1b05fc: 0x4be111bc
    ctx->pc = 0x1b05fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0600: 0x4be11f09
    ctx->pc = 0x1b0600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0604: 0x4be119bc
    ctx->pc = 0x1b0604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0608: 0x4be1174d
    ctx->pc = 0x1b0608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b060c: 0x3e00008
    ctx->pc = 0x1B060Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0634u: goto label_1b0634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0614u;
    // 0x1b0614: 0x3084ffff
    ctx->pc = 0x1b0614u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b0618: 0x4a25033c
    ctx->pc = 0x1b0618u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b061c: 0x20884000
    ctx->pc = 0x1b061cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b0620: 0x84400
    ctx->pc = 0x1b0620u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b0624: 0x5010003
    ctx->pc = 0x1B0624u;
    {
        const bool branch_taken_0x1b0624 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b0624) {
            ctx->pc = 0x1B0634u;
            goto label_1b0634;
        }
    }
    ctx->pc = 0x1B062Cu;
    // 0x1b062c: 0x4a25bb3c
    ctx->pc = 0x1b062cu;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0630: 0x20848000
    ctx->pc = 0x1b0630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b0634:
    // 0x1b0634: 0x42400
    ctx->pc = 0x1b0634u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b0638: 0x42403
    ctx->pc = 0x1b0638u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b063c: 0x48a41001
    ctx->pc = 0x1b063cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b0640: 0x4b04113c
    ctx->pc = 0x1b0640u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0644: 0x4a8000c3
    ctx->pc = 0x1b0644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0648: 0x4a44b8d8
    ctx->pc = 0x1b0648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b064c: 0x4b821b3d
    ctx->pc = 0x1b064cu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0650: 0x4b8012bc
    ctx->pc = 0x1b0650u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b0654: 0x4a82112a
    ctx->pc = 0x1b0654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0658: 0x4b841099
    ctx->pc = 0x1b0658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b065c: 0x4b82babd
    ctx->pc = 0x1b065cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0660: 0x4b841099
    ctx->pc = 0x1b0660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0664: 0x4b82b2bd
    ctx->pc = 0x1b0664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0668: 0x4b841099
    ctx->pc = 0x1b0668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b066c: 0x4b82aabd
    ctx->pc = 0x1b066cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0670: 0x4b841099
    ctx->pc = 0x1b0670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0674: 0x4b82a0e9
    ctx->pc = 0x1b0674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0678: 0x4b85185b
    ctx->pc = 0x1b0678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b067c: 0x4be2e33c
    ctx->pc = 0x1b067cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b0680: 0x4be3eb3c
    ctx->pc = 0x1b0680u;
    ctx->vu0_vf[3] = ctx->vu0_vf[29];
    // 0x1b0684: 0x4be111bc
    ctx->pc = 0x1b0684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0688: 0x4be11f0d
    ctx->pc = 0x1b0688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b068c: 0x4be119bc
    ctx->pc = 0x1b068cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0690: 0x4be11749
    ctx->pc = 0x1b0690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0694: 0x3e00008
    ctx->pc = 0x1B0694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0634u: goto label_1b0634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B069Cu;
    // 0x1b069c: 0x27bdfff0
    ctx->pc = 0x1b069cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b06a0: 0xe7ac0004
    ctx->pc = 0x1b06a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b06a4: 0xe7ad0000
    ctx->pc = 0x1b06a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b06a8: 0xdba10000
    ctx->pc = 0x1b06a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b06ac: 0x4be2e33c
    ctx->pc = 0x1b06acu;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b06b0: 0x4be3eb3c
    ctx->pc = 0x1b06b0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[29];
    // 0x1b06b4: 0x4be111bc
    ctx->pc = 0x1b06b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b06b8: 0x4be11f0d
    ctx->pc = 0x1b06b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b06bc: 0x4be119bc
    ctx->pc = 0x1b06bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b06c0: 0x4be11749
    ctx->pc = 0x1b06c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b06c4: 0x3e00008
    ctx->pc = 0x1B06C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B06C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0634u: goto label_1b0634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B06CCu;
}
