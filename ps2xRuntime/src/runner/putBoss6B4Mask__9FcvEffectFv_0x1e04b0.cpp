#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss6B4Mask__9FcvEffectFv
// Address: 0x1e04b0 - 0x1e07c8
void putBoss6B4Mask__9FcvEffectFv_0x1e04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss6B4Mask__9FcvEffectFv");


    ctx->pc = 0x1e04b0u;

    // 0x1e04b0: 0x27bdffb0
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e04b4: 0x7fbf0030
    ctx->pc = 0x1e04b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e04b8: 0x7fb20020
    ctx->pc = 0x1e04b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e04bc: 0x7fb10010
    ctx->pc = 0x1e04bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e04c0: 0x70809628
    ctx->pc = 0x1e04c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e04c4: 0x7fb00000
    ctx->pc = 0x1e04c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e04c8: 0xc64c0024
    ctx->pc = 0x1e04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e04cc: 0x264400bc
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 188));
    // 0x1e04d0: 0xc079bd4
    ctx->pc = 0x1E04D0u;
    SET_GPR_U32(ctx, 31, 0x1E04D8u);
    ctx->pc = 0x1E04D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E04D8u; }
        else if (ctx->pc != 0x1E04D8u) { ctx->pc = 0x1E04D8u; }
    }
    if (ctx->pc != 0x1E04D8u) { return; }
    ctx->pc = 0x1E04D8u;
    // 0x1e04d8: 0x8e420018
    ctx->pc = 0x1e04d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e04dc: 0x14400009
    ctx->pc = 0x1E04DCu;
    {
        const bool branch_taken_0x1e04dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E04E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x1e04dc) {
            ctx->pc = 0x1E0504u;
            goto label_1e0504;
        }
    }
    ctx->pc = 0x1E04E4u;
    // 0x1e04e4: 0x3c020027
    ctx->pc = 0x1e04e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e04e8: 0x24458fd0
    ctx->pc = 0x1e04e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294938576));
    // 0x1e04ec: 0x3c020027
    ctx->pc = 0x1e04ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e04f0: 0x24469170
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294938992));
    // 0x1e04f4: 0x3c020022
    ctx->pc = 0x1e04f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1e04f8: 0x24030066
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1e04fc: 0x10000007
    ctx->pc = 0x1E04FCu;
    {
        const bool branch_taken_0x1e04fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0500u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), 603));
        if (branch_taken_0x1e04fc) {
            ctx->pc = 0x1E051Cu;
            goto label_1e051c;
        }
    }
    ctx->pc = 0x1E0504u;
label_1e0504:
    // 0x1e0504: 0x24459360
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294939488));
    // 0x1e0508: 0x3c020027
    ctx->pc = 0x1e0508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e050c: 0x24469500
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x1e0510: 0x3c020022
    ctx->pc = 0x1e0510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1e0514: 0x24030066
    ctx->pc = 0x1e0514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1e0518: 0x3451025d
    ctx->pc = 0x1e0518u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), 605));
label_1e051c:
    // 0x1e051c: 0x8e500030
    ctx->pc = 0x1e051cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1e0520: 0x3082a
    ctx->pc = 0x1e0520u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1e0524: 0x1020005a
    ctx->pc = 0x1E0524u;
    {
        const bool branch_taken_0x1e0524 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0528u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0524) {
            ctx->pc = 0x1E0690u;
            goto label_1e0690;
        }
    }
    ctx->pc = 0x1E052Cu;
    // 0x1e052c: 0x28610009
    ctx->pc = 0x1e052cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 9));
    // 0x1e0530: 0x14200043
    ctx->pc = 0x1E0530u;
    {
        const bool branch_taken_0x1e0530 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0534u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294967288));
        if (branch_taken_0x1e0530) {
            ctx->pc = 0x1E0640u;
            goto label_1e0640;
        }
    }
    ctx->pc = 0x1E0538u;
    // 0x1e0538: 0x70c04628
    ctx->pc = 0x1e0538u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e053c: 0x70a04e28
    ctx->pc = 0x1e053cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e0540: 0x72005628
    ctx->pc = 0x1e0540u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0544: 0x27ab0044
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 68));
label_1e0548:
    // 0x1e0548: 0xc7a30040
    ctx->pc = 0x1e0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e054c: 0xc5220000
    ctx->pc = 0x1e054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0550: 0xc5610000
    ctx->pc = 0x1e0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0554: 0xc5000000
    ctx->pc = 0x1e0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0558: 0x24840008
    ctx->pc = 0x1e0558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e055c: 0x87102a
    ctx->pc = 0x1e055cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x1e0560: 0x4602181a
    ctx->pc = 0x1e0560u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e0564: 0x4600081c
    ctx->pc = 0x1e0564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e0568: 0xe5400000
    ctx->pc = 0x1e0568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1e056c: 0xc7a30040
    ctx->pc = 0x1e056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0570: 0xc5220004
    ctx->pc = 0x1e0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0574: 0xc5610000
    ctx->pc = 0x1e0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0578: 0xc5000004
    ctx->pc = 0x1e0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e057c: 0x4602181a
    ctx->pc = 0x1e057cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e0580: 0x4600081c
    ctx->pc = 0x1e0580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e0584: 0xe5400004
    ctx->pc = 0x1e0584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1e0588: 0xc7a30040
    ctx->pc = 0x1e0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e058c: 0xc5220008
    ctx->pc = 0x1e058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0590: 0xc5610000
    ctx->pc = 0x1e0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0594: 0xc5000008
    ctx->pc = 0x1e0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0598: 0x4602181a
    ctx->pc = 0x1e0598u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e059c: 0x4600081c
    ctx->pc = 0x1e059cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e05a0: 0xe5400008
    ctx->pc = 0x1e05a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1e05a4: 0xc7a30040
    ctx->pc = 0x1e05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e05a8: 0xc522000c
    ctx->pc = 0x1e05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e05ac: 0xc5610000
    ctx->pc = 0x1e05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05b0: 0xc500000c
    ctx->pc = 0x1e05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05b4: 0x4602181a
    ctx->pc = 0x1e05b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e05b8: 0x4600081c
    ctx->pc = 0x1e05b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e05bc: 0xe540000c
    ctx->pc = 0x1e05bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1e05c0: 0xc7a30040
    ctx->pc = 0x1e05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e05c4: 0xc5220010
    ctx->pc = 0x1e05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e05c8: 0xc5610000
    ctx->pc = 0x1e05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05cc: 0xc5000010
    ctx->pc = 0x1e05ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05d0: 0x4602181a
    ctx->pc = 0x1e05d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e05d4: 0x4600081c
    ctx->pc = 0x1e05d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e05d8: 0xe5400010
    ctx->pc = 0x1e05d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1e05dc: 0xc7a30040
    ctx->pc = 0x1e05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e05e0: 0xc5220014
    ctx->pc = 0x1e05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e05e4: 0xc5610000
    ctx->pc = 0x1e05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05e8: 0xc5000014
    ctx->pc = 0x1e05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05ec: 0x4602181a
    ctx->pc = 0x1e05ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e05f0: 0x4600081c
    ctx->pc = 0x1e05f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e05f4: 0xe5400014
    ctx->pc = 0x1e05f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x1e05f8: 0xc7a30040
    ctx->pc = 0x1e05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e05fc: 0xc5220018
    ctx->pc = 0x1e05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0600: 0xc5610000
    ctx->pc = 0x1e0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0604: 0xc5000018
    ctx->pc = 0x1e0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0608: 0x4602181a
    ctx->pc = 0x1e0608u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e060c: 0x4600081c
    ctx->pc = 0x1e060cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e0610: 0xe5400018
    ctx->pc = 0x1e0610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x1e0614: 0xc522001c
    ctx->pc = 0x1e0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0618: 0xc7a30040
    ctx->pc = 0x1e0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e061c: 0xc500001c
    ctx->pc = 0x1e061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0620: 0xc5610000
    ctx->pc = 0x1e0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0624: 0x25290020
    ctx->pc = 0x1e0624u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
    // 0x1e0628: 0x4602181a
    ctx->pc = 0x1e0628u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e062c: 0x25080020
    ctx->pc = 0x1e062cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e0630: 0x4600081c
    ctx->pc = 0x1e0630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e0634: 0xe540001c
    ctx->pc = 0x1e0634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x1e0638: 0x1440ffc3
    ctx->pc = 0x1E0638u;
    {
        const bool branch_taken_0x1e0638 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E063Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32));
        if (branch_taken_0x1e0638) {
            ctx->pc = 0x1E0548u;
            goto label_1e0548;
        }
    }
    ctx->pc = 0x1E0640u;
label_1e0640:
    // 0x1e0640: 0x83082a
    ctx->pc = 0x1e0640u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1e0644: 0x10200012
    ctx->pc = 0x1E0644u;
    {
        const bool branch_taken_0x1e0644 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0648u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1e0644) {
            ctx->pc = 0x1E0690u;
            goto label_1e0690;
        }
    }
    ctx->pc = 0x1E064Cu;
    // 0x1e064c: 0xc23021
    ctx->pc = 0x1e064cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e0650: 0xa22821
    ctx->pc = 0x1e0650u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e0654: 0x2023821
    ctx->pc = 0x1e0654u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e0658:
    // 0x1e0658: 0xc4a20000
    ctx->pc = 0x1e0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e065c: 0xc7a30040
    ctx->pc = 0x1e065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0660: 0xc4c00000
    ctx->pc = 0x1e0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0664: 0xc7a10044
    ctx->pc = 0x1e0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0668: 0x24840001
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e066c: 0x83102a
    ctx->pc = 0x1e066cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1e0670: 0x24a50004
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e0674: 0x4602181a
    ctx->pc = 0x1e0674u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e0678: 0x24c60004
    ctx->pc = 0x1e0678u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e067c: 0x4600081c
    ctx->pc = 0x1e067cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1e0680: 0xe4e00000
    ctx->pc = 0x1e0680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1e0684: 0x1440fff4
    ctx->pc = 0x1E0684u;
    {
        const bool branch_taken_0x1e0684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0688u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1e0684) {
            ctx->pc = 0x1E0658u;
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E068Cu;
    // 0x1e068c: 0x0
    ctx->pc = 0x1e068cu;
    // NOP
label_1e0690:
    // 0x1e0690: 0x4bede37d
    ctx->pc = 0x1e0690u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0694: 0x4bedeb7d
    ctx->pc = 0x1e0694u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0698: 0x4bedf37d
    ctx->pc = 0x1e0698u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e069c: 0x4bedfb7d
    ctx->pc = 0x1e069cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e06a0: 0x8f848c48
    ctx->pc = 0x1e06a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e06a4: 0x8c830004
    ctx->pc = 0x1e06a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e06a8: 0x31040
    ctx->pc = 0x1e06a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e06ac: 0x431021
    ctx->pc = 0x1e06acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06b0: 0x21080
    ctx->pc = 0x1e06b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e06b4: 0x431021
    ctx->pc = 0x1e06b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06b8: 0x21100
    ctx->pc = 0x1e06b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e06bc: 0x821021
    ctx->pc = 0x1e06bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e06c0: 0xc06c038
    ctx->pc = 0x1E06C0u;
    SET_GPR_U32(ctx, 31, 0x1E06C8u);
    ctx->pc = 0x1E06C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06C8u; }
        else if (ctx->pc != 0x1E06C8u) { ctx->pc = 0x1E06C8u; }
    }
    if (ctx->pc != 0x1E06C8u) { return; }
    ctx->pc = 0x1E06C8u;
    // 0x1e06c8: 0xc64d0040
    ctx->pc = 0x1e06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e06cc: 0xc64e0044
    ctx->pc = 0x1e06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e06d0: 0xc06c202
    ctx->pc = 0x1E06D0u;
    SET_GPR_U32(ctx, 31, 0x1E06D8u);
    ctx->pc = 0x1E06D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06D8u; }
        else if (ctx->pc != 0x1E06D8u) { ctx->pc = 0x1E06D8u; }
    }
    if (ctx->pc != 0x1E06D8u) { return; }
    ctx->pc = 0x1E06D8u;
    // 0x1e06d8: 0xc06c0fb
    ctx->pc = 0x1E06D8u;
    SET_GPR_U32(ctx, 31, 0x1E06E0u);
    ctx->pc = 0x1E06DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06E0u; }
        else if (ctx->pc != 0x1E06E0u) { ctx->pc = 0x1E06E0u; }
    }
    if (ctx->pc != 0x1E06E0u) { return; }
    ctx->pc = 0x1E06E0u;
    // 0x1e06e0: 0xc06c09f
    ctx->pc = 0x1E06E0u;
    SET_GPR_U32(ctx, 31, 0x1E06E8u);
    ctx->pc = 0x1E06E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06E8u; }
        else if (ctx->pc != 0x1E06E8u) { ctx->pc = 0x1E06E8u; }
    }
    if (ctx->pc != 0x1E06E8u) { return; }
    ctx->pc = 0x1E06E8u;
    // 0x1e06e8: 0xc06c157
    ctx->pc = 0x1E06E8u;
    SET_GPR_U32(ctx, 31, 0x1E06F0u);
    ctx->pc = 0x1E06ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06F0u; }
        else if (ctx->pc != 0x1E06F0u) { ctx->pc = 0x1E06F0u; }
    }
    if (ctx->pc != 0x1E06F0u) { return; }
    ctx->pc = 0x1E06F0u;
    // 0x1e06f0: 0x72002e28
    ctx->pc = 0x1e06f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e06f4: 0xc24af74
    ctx->pc = 0x1E06F4u;
    SET_GPR_U32(ctx, 31, 0x1E06FCu);
    ctx->pc = 0x1E06F8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92BDD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphShape__FiPf_0x92bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06FCu; }
        else if (ctx->pc != 0x1E06FCu) { ctx->pc = 0x1E06FCu; }
    }
    if (ctx->pc != 0x1E06FCu) { return; }
    ctx->pc = 0x1E06FCu;
    // 0x1e06fc: 0xc0552d8
    ctx->pc = 0x1E06FCu;
    SET_GPR_U32(ctx, 31, 0x1E0704u);
    ctx->pc = 0x1E0700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0704u; }
        else if (ctx->pc != 0x1E0704u) { ctx->pc = 0x1E0704u; }
    }
    if (ctx->pc != 0x1E0704u) { return; }
    ctx->pc = 0x1E0704u;
    // 0x1e0704: 0xc64c002c
    ctx->pc = 0x1e0704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0708: 0x3c023f80
    ctx->pc = 0x1e0708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e070c: 0x44820000
    ctx->pc = 0x1e070cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0710: 0x0
    ctx->pc = 0x1e0710u;
    // NOP
    // 0x1e0714: 0x460c0032
    ctx->pc = 0x1e0714u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0718: 0x0
    ctx->pc = 0x1e0718u;
    // NOP
    // 0x1e071c: 0x45010003
    ctx->pc = 0x1E071Cu;
    {
        const bool branch_taken_0x1e071c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0720u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1e071c) {
            ctx->pc = 0x1E072Cu;
            goto label_1e072c;
        }
    }
    ctx->pc = 0x1E0724u;
    // 0x1e0724: 0xc06c1b3
    ctx->pc = 0x1E0724u;
    SET_GPR_U32(ctx, 31, 0x1E072Cu);
    ctx->pc = 0x1E0728u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E072Cu; }
        else if (ctx->pc != 0x1E072Cu) { ctx->pc = 0x1E072Cu; }
    }
    if (ctx->pc != 0x1E072Cu) { return; }
    ctx->pc = 0x1E072Cu;
label_1e072c:
    // 0x1e072c: 0xc06b218
    ctx->pc = 0x1E072Cu;
    SET_GPR_U32(ctx, 31, 0x1E0734u);
    ctx->pc = 0x1E0730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0734u; }
        else if (ctx->pc != 0x1E0734u) { ctx->pc = 0x1E0734u; }
    }
    if (ctx->pc != 0x1E0734u) { return; }
    ctx->pc = 0x1E0734u;
    // 0x1e0734: 0xc0853c8
    ctx->pc = 0x1E0734u;
    SET_GPR_U32(ctx, 31, 0x1E073Cu);
    ctx->pc = 0x1E0738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E073Cu; }
        else if (ctx->pc != 0x1E073Cu) { ctx->pc = 0x1E073Cu; }
    }
    if (ctx->pc != 0x1E073Cu) { return; }
    ctx->pc = 0x1E073Cu;
    // 0x1e073c: 0x4bff6b7e
    ctx->pc = 0x1e073cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0740: 0x4bfe6b7e
    ctx->pc = 0x1e0740u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0744: 0x4bfd6b7e
    ctx->pc = 0x1e0744u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0748: 0x4bfc6b7e
    ctx->pc = 0x1e0748u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e074c: 0x4bede37d
    ctx->pc = 0x1e074cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0750: 0x4bedeb7d
    ctx->pc = 0x1e0750u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0754: 0x4bedf37d
    ctx->pc = 0x1e0754u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0758: 0x4bedfb7d
    ctx->pc = 0x1e0758u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e075c: 0x3c023f80
    ctx->pc = 0x1e075cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0760: 0xc64c002c
    ctx->pc = 0x1e0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0764: 0x44820000
    ctx->pc = 0x1e0764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e0768: 0x0
    ctx->pc = 0x1e0768u;
    // NOP
    // 0x1e076c: 0x460c0032
    ctx->pc = 0x1e076cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0770: 0x0
    ctx->pc = 0x1e0770u;
    // NOP
    // 0x1e0774: 0x45010003
    ctx->pc = 0x1E0774u;
    {
        const bool branch_taken_0x1e0774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0778u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1e0774) {
            ctx->pc = 0x1E0784u;
            goto label_1e0784;
        }
    }
    ctx->pc = 0x1E077Cu;
    // 0x1e077c: 0xc06c1b3
    ctx->pc = 0x1E077Cu;
    SET_GPR_U32(ctx, 31, 0x1E0784u);
    ctx->pc = 0x1E0780u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0784u; }
        else if (ctx->pc != 0x1E0784u) { ctx->pc = 0x1E0784u; }
    }
    if (ctx->pc != 0x1E0784u) { return; }
    ctx->pc = 0x1E0784u;
label_1e0784:
    // 0x1e0784: 0xc06b218
    ctx->pc = 0x1E0784u;
    SET_GPR_U32(ctx, 31, 0x1E078Cu);
    ctx->pc = 0x1E0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E078Cu; }
        else if (ctx->pc != 0x1E078Cu) { ctx->pc = 0x1E078Cu; }
    }
    if (ctx->pc != 0x1E078Cu) { return; }
    ctx->pc = 0x1E078Cu;
    // 0x1e078c: 0xc64c0024
    ctx->pc = 0x1e078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0790: 0x3c023f80
    ctx->pc = 0x1e0790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e0794: 0x44826800
    ctx->pc = 0x1e0794u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e0798: 0xc079f30
    ctx->pc = 0x1E0798u;
    SET_GPR_U32(ctx, 31, 0x1E07A0u);
    ctx->pc = 0x1E079Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07A0u; }
        else if (ctx->pc != 0x1E07A0u) { ctx->pc = 0x1E07A0u; }
    }
    if (ctx->pc != 0x1E07A0u) { return; }
    ctx->pc = 0x1E07A0u;
    // 0x1e07a0: 0x4bff6b7e
    ctx->pc = 0x1e07a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e07a4: 0x4bfe6b7e
    ctx->pc = 0x1e07a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e07a8: 0x4bfd6b7e
    ctx->pc = 0x1e07a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e07ac: 0x4bfc6b7e
    ctx->pc = 0x1e07acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e07b0: 0x7bbf0030
    ctx->pc = 0x1e07b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e07b4: 0x7bb20020
    ctx->pc = 0x1e07b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e07b8: 0x7bb10010
    ctx->pc = 0x1e07b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e07bc: 0x7bb00000
    ctx->pc = 0x1e07bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e07c0: 0x3e00008
    ctx->pc = 0x1E07C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E07C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0504u: goto label_1e0504;
            case 0x1E051Cu: goto label_1e051c;
            case 0x1E0548u: goto label_1e0548;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E0690u: goto label_1e0690;
            case 0x1E072Cu: goto label_1e072c;
            case 0x1E0784u: goto label_1e0784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E07C8u;
}
