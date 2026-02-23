#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcDynamicsMotion__FP9_XYZ_DYNAP9_DYNAMICSffii
// Address: 0x1d5430 - 0x1d564c
void calcDynamicsMotion__FP9_XYZ_DYNAP9_DYNAMICSffii_0x1d5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcDynamicsMotion__FP9_XYZ_DYNAP9_DYNAMICSffii");


    ctx->pc = 0x1d5430u;

    // 0x1d5430: 0x27bdff90
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d5434: 0x7fbf0030
    ctx->pc = 0x1d5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d5438: 0x7fb20020
    ctx->pc = 0x1d5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d543c: 0x7fb10010
    ctx->pc = 0x1d543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5440: 0x7fb00000
    ctx->pc = 0x1d5440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5444: 0x460d6034
    ctx->pc = 0x1d5444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5448: 0x0
    ctx->pc = 0x1d5448u;
    // NOP
    // 0x1d544c: 0x45010019
    ctx->pc = 0x1D544Cu;
    {
        const bool branch_taken_0x1d544c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5450u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d544c) {
            ctx->pc = 0x1D54B4u;
            goto label_1d54b4;
        }
    }
    ctx->pc = 0x1D5454u;
    // 0x1d5454: 0x46006824
    ctx->pc = 0x1d5454u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x1d5458: 0x71880
    ctx->pc = 0x1d5458u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d545c: 0x671821
    ctx->pc = 0x1d545cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d5460: 0x32080
    ctx->pc = 0x1d5460u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5464: 0x61880
    ctx->pc = 0x1d5464u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d5468: 0x661821
    ctx->pc = 0x1d5468u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d546c: 0x44060000
    ctx->pc = 0x1d546cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x1d5470: 0x33880
    ctx->pc = 0x1d5470u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5474: 0xc41818
    ctx->pc = 0x1d5474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d5478: 0xa31821
    ctx->pc = 0x1d5478u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d547c: 0x672021
    ctx->pc = 0x1d547cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d5480: 0xc4800000
    ctx->pc = 0x1d5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5484: 0xe6000000
    ctx->pc = 0x1d5484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d5488: 0xc4800004
    ctx->pc = 0x1d5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d548c: 0xe6000004
    ctx->pc = 0x1d548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d5490: 0xc4800008
    ctx->pc = 0x1d5490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5494: 0xe6000008
    ctx->pc = 0x1d5494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d5498: 0x9483000c
    ctx->pc = 0x1d5498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d549c: 0xa603000c
    ctx->pc = 0x1d549cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d54a0: 0x9483000e
    ctx->pc = 0x1d54a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1d54a4: 0xa603000e
    ctx->pc = 0x1d54a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d54a8: 0x94830010
    ctx->pc = 0x1d54a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d54ac: 0x10000061
    ctx->pc = 0x1D54ACu;
    {
        const bool branch_taken_0x1d54ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D54B0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d54ac) {
            ctx->pc = 0x1D5634u;
            goto label_1d5634;
        }
    }
    ctx->pc = 0x1D54B4u;
label_1d54b4:
    // 0x1d54b4: 0x71880
    ctx->pc = 0x1d54b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d54b8: 0x671821
    ctx->pc = 0x1d54b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d54bc: 0x3c043f80
    ctx->pc = 0x1d54bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)16256 << 16));
    // 0x1d54c0: 0x35080
    ctx->pc = 0x1d54c0u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d54c4: 0x61880
    ctx->pc = 0x1d54c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d54c8: 0x44842800
    ctx->pc = 0x1d54c8u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 4);
    // 0x1d54cc: 0x661821
    ctx->pc = 0x1d54ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d54d0: 0x46006024
    ctx->pc = 0x1d54d0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x1d54d4: 0x32080
    ctx->pc = 0x1d54d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d54d8: 0x44030000
    ctx->pc = 0x1d54d8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1d54dc: 0x460c2840
    ctx->pc = 0x1d54dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    // 0x1d54e0: 0x6a1818
    ctx->pc = 0x1d54e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d54e4: 0x46800020
    ctx->pc = 0x1d54e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d54e8: 0xa31821
    ctx->pc = 0x1d54e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d54ec: 0x641821
    ctx->pc = 0x1d54ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d54f0: 0xc4620000
    ctx->pc = 0x1d54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d54f4: 0xc4630004
    ctx->pc = 0x1d54f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d54f8: 0xc4640008
    ctx->pc = 0x1d54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d54fc: 0x46006301
    ctx->pc = 0x1d54fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1d5500: 0x9469000c
    ctx->pc = 0x1d5500u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d5504: 0x9468000e
    ctx->pc = 0x1d5504u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1d5508: 0x94670010
    ctx->pc = 0x1d5508u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d550c: 0x46000864
    ctx->pc = 0x1d550cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1d5510: 0x44030800
    ctx->pc = 0x1d5510u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1d5514: 0x460c2832
    ctx->pc = 0x1d5514u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5518: 0x706a1818
    ctx->pc = 0x1d5518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1d551c: 0xa31821
    ctx->pc = 0x1d551cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5520: 0x833021
    ctx->pc = 0x1d5520u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5524: 0xc4c10000
    ctx->pc = 0x1d5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5528: 0xc4c00004
    ctx->pc = 0x1d5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d552c: 0xc4c50008
    ctx->pc = 0x1d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d5530: 0x94c5000c
    ctx->pc = 0x1d5530u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d5534: 0x94c4000e
    ctx->pc = 0x1d5534u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1d5538: 0x94c30010
    ctx->pc = 0x1d5538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d553c: 0x46020841
    ctx->pc = 0x1d553cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d5540: 0x46030001
    ctx->pc = 0x1d5540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1d5544: 0x46016042
    ctx->pc = 0x1d5544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1d5548: 0x46006002
    ctx->pc = 0x1d5548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1d554c: 0x46011040
    ctx->pc = 0x1d554cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1d5550: 0x46001800
    ctx->pc = 0x1d5550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1d5554: 0xe6010000
    ctx->pc = 0x1d5554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d5558: 0xe6000004
    ctx->pc = 0x1d5558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d555c: 0x46042801
    ctx->pc = 0x1d555cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1d5560: 0x46006002
    ctx->pc = 0x1d5560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1d5564: 0x46002000
    ctx->pc = 0x1d5564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1d5568: 0x45000005
    ctx->pc = 0x1D5568u;
    {
        const bool branch_taken_0x1d5568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D556Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x1d5568) {
            ctx->pc = 0x1D5580u;
            goto label_1d5580;
        }
    }
    ctx->pc = 0x1D5570u;
    // 0x1d5570: 0xa605000c
    ctx->pc = 0x1d5570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5574: 0xa604000e
    ctx->pc = 0x1d5574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d5578: 0x1000002e
    ctx->pc = 0x1D5578u;
    {
        const bool branch_taken_0x1d5578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D557Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d5578) {
            ctx->pc = 0x1D5634u;
            goto label_1d5634;
        }
    }
    ctx->pc = 0x1D5580u;
label_1d5580:
    // 0x1d5580: 0x44800000
    ctx->pc = 0x1d5580u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d5584: 0x0
    ctx->pc = 0x1d5584u;
    // NOP
    // 0x1d5588: 0x460c0032
    ctx->pc = 0x1d5588u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d558c: 0x0
    ctx->pc = 0x1d558cu;
    // NOP
    // 0x1d5590: 0x45000005
    ctx->pc = 0x1D5590u;
    {
        const bool branch_taken_0x1d5590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5590) {
            ctx->pc = 0x1D55A8u;
            goto label_1d55a8;
        }
    }
    ctx->pc = 0x1D5598u;
    // 0x1d5598: 0xa609000c
    ctx->pc = 0x1d5598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x1d559c: 0xa608000e
    ctx->pc = 0x1d559cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x1d55a0: 0x10000024
    ctx->pc = 0x1D55A0u;
    {
        const bool branch_taken_0x1d55a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D55A4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x1d55a0) {
            ctx->pc = 0x1D5634u;
            goto label_1d5634;
        }
    }
    ctx->pc = 0x1D55A8u;
label_1d55a8:
    // 0x1d55a8: 0x4bede37d
    ctx->pc = 0x1d55a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d55ac: 0x4bedeb7d
    ctx->pc = 0x1d55acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d55b0: 0x4bedf37d
    ctx->pc = 0x1d55b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d55b4: 0x4bedfb7d
    ctx->pc = 0x1d55b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d55b8: 0x3122ffff
    ctx->pc = 0x1d55b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1d55bc: 0xafa20040
    ctx->pc = 0x1d55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1d55c0: 0x3102ffff
    ctx->pc = 0x1d55c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 65535));
    // 0x1d55c4: 0xafa20044
    ctx->pc = 0x1d55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d55c8: 0x30e2ffff
    ctx->pc = 0x1d55c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1d55cc: 0xafa20048
    ctx->pc = 0x1d55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1d55d0: 0x30a2ffff
    ctx->pc = 0x1d55d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1d55d4: 0xafa20050
    ctx->pc = 0x1d55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1d55d8: 0x3082ffff
    ctx->pc = 0x1d55d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1d55dc: 0xafa20054
    ctx->pc = 0x1d55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1d55e0: 0x3062ffff
    ctx->pc = 0x1d55e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1d55e4: 0xafa20058
    ctx->pc = 0x1d55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1d55e8: 0x27a40040
    ctx->pc = 0x1d55e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d55ec: 0xc075474
    ctx->pc = 0x1D55ECu;
    SET_GPR_U32(ctx, 31, 0x1D55F4u);
    ctx->pc = 0x1D55F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1D51D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__FP4XYZAP4XYZAf_0x1d51d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55F4u; }
        else if (ctx->pc != 0x1D55F4u) { ctx->pc = 0x1D55F4u; }
    }
    if (ctx->pc != 0x1D55F4u) { return; }
    ctx->pc = 0x1D55F4u;
    // 0x1d55f4: 0x27b10064
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 100));
    // 0x1d55f8: 0x27b20068
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d55fc: 0x27a40060
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d5600: 0x72202e28
    ctx->pc = 0x1d5600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d5604: 0xc0724f8
    ctx->pc = 0x1D5604u;
    SET_GPR_U32(ctx, 31, 0x1D560Cu);
    ctx->pc = 0x1D5608u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D560Cu; }
        else if (ctx->pc != 0x1D560Cu) { ctx->pc = 0x1D560Cu; }
    }
    if (ctx->pc != 0x1D560Cu) { return; }
    ctx->pc = 0x1D560Cu;
    // 0x1d560c: 0x4bff6b7e
    ctx->pc = 0x1d560cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d5610: 0x4bfe6b7e
    ctx->pc = 0x1d5610u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d5614: 0x4bfd6b7e
    ctx->pc = 0x1d5614u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d5618: 0x4bfc6b7e
    ctx->pc = 0x1d5618u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d561c: 0x87a30060
    ctx->pc = 0x1d561cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5620: 0xa603000c
    ctx->pc = 0x1d5620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5624: 0x86230000
    ctx->pc = 0x1d5624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5628: 0xa603000e
    ctx->pc = 0x1d5628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d562c: 0x86430000
    ctx->pc = 0x1d562cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5630: 0xa6030010
    ctx->pc = 0x1d5630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_1d5634:
    // 0x1d5634: 0x7bbf0030
    ctx->pc = 0x1d5634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5638: 0x7bb20020
    ctx->pc = 0x1d5638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d563c: 0x7bb10010
    ctx->pc = 0x1d563cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5640: 0x7bb00000
    ctx->pc = 0x1d5640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5644: 0x3e00008
    ctx->pc = 0x1D5644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D54B4u: goto label_1d54b4;
            case 0x1D5580u: goto label_1d5580;
            case 0x1D55A8u: goto label_1d55a8;
            case 0x1D5634u: goto label_1d5634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D564Cu;
}
