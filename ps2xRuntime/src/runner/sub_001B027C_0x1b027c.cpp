#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B027C
// Address: 0x1b027c - 0x1b03ec
void sub_001B027C_0x1b027c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B027C");


    ctx->pc = 0x1b027cu;

    // 0x1b027c: 0x3084ffff
    ctx->pc = 0x1b027cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b0280: 0x4a25033c
    ctx->pc = 0x1b0280u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b0284: 0x20884000
    ctx->pc = 0x1b0284u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b0288: 0x84400
    ctx->pc = 0x1b0288u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b028c: 0x5010003
    ctx->pc = 0x1B028Cu;
    {
        const bool branch_taken_0x1b028c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b028c) {
            ctx->pc = 0x1B029Cu;
            goto label_1b029c;
        }
    }
    ctx->pc = 0x1B0294u;
    // 0x1b0294: 0x4a25bb3c
    ctx->pc = 0x1b0294u;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0298: 0x20848000
    ctx->pc = 0x1b0298u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b029c:
    // 0x1b029c: 0x42400
    ctx->pc = 0x1b029cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b02a0: 0x42403
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b02a4: 0x48a41001
    ctx->pc = 0x1b02a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b02a8: 0x4b04113c
    ctx->pc = 0x1b02a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b02ac: 0x4a8000c3
    ctx->pc = 0x1b02acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b02b0: 0x4a44b8d8
    ctx->pc = 0x1b02b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b02b4: 0x4b821b3d
    ctx->pc = 0x1b02b4u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b02b8: 0x4b8012bc
    ctx->pc = 0x1b02b8u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b02bc: 0x4a82112a
    ctx->pc = 0x1b02bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b02c0: 0x4b841099
    ctx->pc = 0x1b02c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b02c4: 0x4b82babd
    ctx->pc = 0x1b02c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b02c8: 0x4b841099
    ctx->pc = 0x1b02c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b02cc: 0x4b82b2bd
    ctx->pc = 0x1b02ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b02d0: 0x4b841099
    ctx->pc = 0x1b02d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b02d4: 0x4b82aabd
    ctx->pc = 0x1b02d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b02d8: 0x4b841099
    ctx->pc = 0x1b02d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b02dc: 0x4b82a0e9
    ctx->pc = 0x1b02dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b02e0: 0x4b85185b
    ctx->pc = 0x1b02e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b02e4: 0x4be2eb3c
    ctx->pc = 0x1b02e4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[29];
    // 0x1b02e8: 0x4be3f33c
    ctx->pc = 0x1b02e8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b02ec: 0x4be111bc
    ctx->pc = 0x1b02ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b02f0: 0x4be11f49
    ctx->pc = 0x1b02f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b02f4: 0x4be119bc
    ctx->pc = 0x1b02f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b02f8: 0x4be1178d
    ctx->pc = 0x1b02f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b02fc: 0x3e00008
    ctx->pc = 0x1B02FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B029Cu: goto label_1b029c;
            case 0x1B0354u: goto label_1b0354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0304u;
    // 0x1b0304: 0x27bdfff0
    ctx->pc = 0x1b0304u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0308: 0xe7ac0004
    ctx->pc = 0x1b0308u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b030c: 0xe7ad0000
    ctx->pc = 0x1b030cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b0310: 0xdba10000
    ctx->pc = 0x1b0310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0314: 0x4be2eb3c
    ctx->pc = 0x1b0314u;
    ctx->vu0_vf[2] = ctx->vu0_vf[29];
    // 0x1b0318: 0x4be3f33c
    ctx->pc = 0x1b0318u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b031c: 0x4be111bc
    ctx->pc = 0x1b031cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0320: 0x4be11f49
    ctx->pc = 0x1b0320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0324: 0x4be119bc
    ctx->pc = 0x1b0324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b0328: 0x4be1178d
    ctx->pc = 0x1b0328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b032c: 0x3e00008
    ctx->pc = 0x1B032Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B029Cu: goto label_1b029c;
            case 0x1B0354u: goto label_1b0354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0334u;
    // 0x1b0334: 0x3084ffff
    ctx->pc = 0x1b0334u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1b0338: 0x4a25033c
    ctx->pc = 0x1b0338u;
    ctx->vu0_vf[5] = ctx->vu0_vf[0];
    // 0x1b033c: 0x20884000
    ctx->pc = 0x1b033cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1b0340: 0x84400
    ctx->pc = 0x1b0340u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1b0344: 0x5010003
    ctx->pc = 0x1B0344u;
    {
        const bool branch_taken_0x1b0344 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1b0344) {
            ctx->pc = 0x1B0354u;
            goto label_1b0354;
        }
    }
    ctx->pc = 0x1B034Cu;
    // 0x1b034c: 0x4a25bb3c
    ctx->pc = 0x1b034cu;
    ctx->vu0_vf[5] = ctx->vu0_vf[23];
    // 0x1b0350: 0x20848000
    ctx->pc = 0x1b0350u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294934528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1b0354:
    // 0x1b0354: 0x42400
    ctx->pc = 0x1b0354u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1b0358: 0x42403
    ctx->pc = 0x1b0358u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1b035c: 0x48a41001
    ctx->pc = 0x1b035cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1b0360: 0x4b04113c
    ctx->pc = 0x1b0360u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0364: 0x4a8000c3
    ctx->pc = 0x1b0364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b0368: 0x4a44b8d8
    ctx->pc = 0x1b0368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1b036c: 0x4b821b3d
    ctx->pc = 0x1b036cu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1b0370: 0x4b8012bc
    ctx->pc = 0x1b0370u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x1b0374: 0x4a82112a
    ctx->pc = 0x1b0374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0378: 0x4b841099
    ctx->pc = 0x1b0378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b037c: 0x4b82babd
    ctx->pc = 0x1b037cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0380: 0x4b841099
    ctx->pc = 0x1b0380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0384: 0x4b82b2bd
    ctx->pc = 0x1b0384u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0388: 0x4b841099
    ctx->pc = 0x1b0388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b038c: 0x4b82aabd
    ctx->pc = 0x1b038cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], ctx->vu0_vf[2]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1b0390: 0x4b841099
    ctx->pc = 0x1b0390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b0394: 0x4b82a0e9
    ctx->pc = 0x1b0394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b0398: 0x4b85185b
    ctx->pc = 0x1b0398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b039c: 0x4be2eb3c
    ctx->pc = 0x1b039cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[29];
    // 0x1b03a0: 0x4be3f33c
    ctx->pc = 0x1b03a0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b03a4: 0x4be111bc
    ctx->pc = 0x1b03a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b03a8: 0x4be11f4d
    ctx->pc = 0x1b03a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b03ac: 0x4be119bc
    ctx->pc = 0x1b03acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b03b0: 0x4be11789
    ctx->pc = 0x1b03b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b03b4: 0x3e00008
    ctx->pc = 0x1B03B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B029Cu: goto label_1b029c;
            case 0x1B0354u: goto label_1b0354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B03BCu;
    // 0x1b03bc: 0x27bdfff0
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b03c0: 0xe7ac0004
    ctx->pc = 0x1b03c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b03c4: 0xe7ad0000
    ctx->pc = 0x1b03c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b03c8: 0xdba10000
    ctx->pc = 0x1b03c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03cc: 0x4be2eb3c
    ctx->pc = 0x1b03ccu;
    ctx->vu0_vf[2] = ctx->vu0_vf[29];
    // 0x1b03d0: 0x4be3f33c
    ctx->pc = 0x1b03d0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[30];
    // 0x1b03d4: 0x4be111bc
    ctx->pc = 0x1b03d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b03d8: 0x4be11f4d
    ctx->pc = 0x1b03d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b03dc: 0x4be119bc
    ctx->pc = 0x1b03dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1b03e0: 0x4be11789
    ctx->pc = 0x1b03e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1b03e4: 0x3e00008
    ctx->pc = 0x1B03E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B029Cu: goto label_1b029c;
            case 0x1B0354u: goto label_1b0354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B03ECu;
}
