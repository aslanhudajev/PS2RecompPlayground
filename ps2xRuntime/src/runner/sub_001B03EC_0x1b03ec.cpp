#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B03EC
// Address: 0x1b03ec - 0x1b055c
void sub_001B03EC_0x1b03ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B03EC");


    ctx->pc = 0x1b03ecu;

    // 0x1b03ec: 0x3084ffff
    ctx->pc = 0x1b03ecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b03f0: 0x4a25033c
    ctx->pc = 0x1b03f0u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b03f4: 0x20884000
    ctx->pc = 0x1b03f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b03f8: 0x84400
    ctx->pc = 0x1b03f8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b03fc: 0x5010003
    ctx->pc = 0x1B03FCu;
    {
        const bool branch_taken_0x1b03fc = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b03fc) {
            ctx->pc = 0x1B040Cu;
            goto label_1b040c;
        }
    }
    ctx->pc = 0x1B0404u;
    // 0x1b0404: 0x4a25bb3c
    ctx->pc = 0x1b0404u;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0408: 0x20848000
    ctx->pc = 0x1b0408u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b040c:
    // 0x1b040c: 0x42400
    ctx->pc = 0x1b040cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b0410: 0x42403
    ctx->pc = 0x1b0410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b0414: 0x48a41001
    ctx->pc = 0x1b0414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b0418: 0x4b04113c
    ctx->pc = 0x1b0418u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b041c: 0x4a8000c3
    ctx->pc = 0x1b041cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0420: 0x4a44b8d8
    ctx->pc = 0x1b0420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0424: 0x4b821b3d
    ctx->pc = 0x1b0424u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0428: 0x4b8012bc
    ctx->pc = 0x1b0428u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b042c: 0x4a82112a
    ctx->pc = 0x1b042cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0430: 0x4b841099
    ctx->pc = 0x1b0430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0434: 0x4b82babd
    ctx->pc = 0x1b0434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0438: 0x4b841099
    ctx->pc = 0x1b0438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b043c: 0x4b82b2bd
    ctx->pc = 0x1b043cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0440: 0x4b841099
    ctx->pc = 0x1b0440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0444: 0x4b82aabd
    ctx->pc = 0x1b0444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0448: 0x4b841099
    ctx->pc = 0x1b0448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b044c: 0x4b82a0e9
    ctx->pc = 0x1b044cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0450: 0x4b85185b
    ctx->pc = 0x1b0450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b0454: 0x4be2e33c
    ctx->pc = 0x1b0454u;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b0458: 0x4be3f33c
    ctx->pc = 0x1b0458u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b045c: 0x4be111bc
    ctx->pc = 0x1b045cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0460: 0x4be11f0d
    ctx->pc = 0x1b0460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0464: 0x4be119bc
    ctx->pc = 0x1b0464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0468: 0x4be11789
    ctx->pc = 0x1b0468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b046c: 0x3e00008
    ctx->pc = 0x1B046Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B04C4u: goto label_1b04c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0474u;
    // 0x1b0474: 0x27bdfff0
    ctx->pc = 0x1b0474u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0478: 0xe7ac0004
    ctx->pc = 0x1b0478u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b047c: 0xe7ad0000
    ctx->pc = 0x1b047cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b0480: 0xdba10000
    ctx->pc = 0x1b0480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0484: 0x4be2e33c
    ctx->pc = 0x1b0484u;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b0488: 0x4be3f33c
    ctx->pc = 0x1b0488u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b048c: 0x4be111bc
    ctx->pc = 0x1b048cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0490: 0x4be11f0d
    ctx->pc = 0x1b0490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0494: 0x4be119bc
    ctx->pc = 0x1b0494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0498: 0x4be11789
    ctx->pc = 0x1b0498u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b049c: 0x3e00008
    ctx->pc = 0x1B049Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B04A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B04C4u: goto label_1b04c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B04A4u;
    // 0x1b04a4: 0x3084ffff
    ctx->pc = 0x1b04a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b04a8: 0x4a25033c
    ctx->pc = 0x1b04a8u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b04ac: 0x20884000
    ctx->pc = 0x1b04acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b04b0: 0x84400
    ctx->pc = 0x1b04b0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b04b4: 0x5010003
    ctx->pc = 0x1B04B4u;
    {
        const bool branch_taken_0x1b04b4 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b04b4) {
            ctx->pc = 0x1B04C4u;
            goto label_1b04c4;
        }
    }
    ctx->pc = 0x1B04BCu;
    // 0x1b04bc: 0x4a25bb3c
    ctx->pc = 0x1b04bcu;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b04c0: 0x20848000
    ctx->pc = 0x1b04c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b04c4:
    // 0x1b04c4: 0x42400
    ctx->pc = 0x1b04c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b04c8: 0x42403
    ctx->pc = 0x1b04c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b04cc: 0x48a41001
    ctx->pc = 0x1b04ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b04d0: 0x4b04113c
    ctx->pc = 0x1b04d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b04d4: 0x4a8000c3
    ctx->pc = 0x1b04d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b04d8: 0x4a44b8d8
    ctx->pc = 0x1b04d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b04dc: 0x4b821b3d
    ctx->pc = 0x1b04dcu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b04e0: 0x4b8012bc
    ctx->pc = 0x1b04e0u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b04e4: 0x4a82112a
    ctx->pc = 0x1b04e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b04e8: 0x4b841099
    ctx->pc = 0x1b04e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b04ec: 0x4b82babd
    ctx->pc = 0x1b04ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b04f0: 0x4b841099
    ctx->pc = 0x1b04f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b04f4: 0x4b82b2bd
    ctx->pc = 0x1b04f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b04f8: 0x4b841099
    ctx->pc = 0x1b04f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b04fc: 0x4b82aabd
    ctx->pc = 0x1b04fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0500: 0x4b841099
    ctx->pc = 0x1b0500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0504: 0x4b82a0e9
    ctx->pc = 0x1b0504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0508: 0x4b85185b
    ctx->pc = 0x1b0508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b050c: 0x4be2e33c
    ctx->pc = 0x1b050cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b0510: 0x4be3f33c
    ctx->pc = 0x1b0510u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b0514: 0x4be111bc
    ctx->pc = 0x1b0514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0518: 0x4be11f09
    ctx->pc = 0x1b0518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b051c: 0x4be119bc
    ctx->pc = 0x1b051cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0520: 0x4be1178d
    ctx->pc = 0x1b0520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0524: 0x3e00008
    ctx->pc = 0x1B0524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B04C4u: goto label_1b04c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B052Cu;
    // 0x1b052c: 0x27bdfff0
    ctx->pc = 0x1b052cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0530: 0xe7ac0004
    ctx->pc = 0x1b0530u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b0534: 0xe7ad0000
    ctx->pc = 0x1b0534u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b0538: 0xdba10000
    ctx->pc = 0x1b0538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b053c: 0x4be2e33c
    ctx->pc = 0x1b053cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[28];
    // 0x1b0540: 0x4be3f33c
    ctx->pc = 0x1b0540u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b0544: 0x4be111bc
    ctx->pc = 0x1b0544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0548: 0x4be11f09
    ctx->pc = 0x1b0548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b054c: 0x4be119bc
    ctx->pc = 0x1b054cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0550: 0x4be1178d
    ctx->pc = 0x1b0550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0554: 0x3e00008
    ctx->pc = 0x1B0554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B040Cu: goto label_1b040c;
            case 0x1B04C4u: goto label_1b04c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B055Cu;
}
