#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initEndCP__14CTrnKomonoBaseFPii
// Address: 0x21b390 - 0x21b59c
void initEndCP__14CTrnKomonoBaseFPii_0x21b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initEndCP__14CTrnKomonoBaseFPii");


    ctx->pc = 0x21b390u;

    // 0x21b390: 0x27bdffd0
    ctx->pc = 0x21b390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b394: 0x7fb20020
    ctx->pc = 0x21b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21b398: 0x7fb10010
    ctx->pc = 0x21b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b39c: 0x7fb00000
    ctx->pc = 0x21b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21b3a0: 0x6082a
    ctx->pc = 0x21b3a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 6)));
    // 0x21b3a4: 0xac860000
    ctx->pc = 0x21b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x21b3a8: 0x70007628
    ctx->pc = 0x21b3a8u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b3ac: 0x10200076
    ctx->pc = 0x21B3ACu;
    {
        const bool branch_taken_0x21b3ac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B3B0u;
        SET_GPR_VEC(ctx, 13, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b3ac) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B3B4u;
    // 0x21b3b4: 0x28c10009
    ctx->pc = 0x21b3b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 9));
    // 0x21b3b8: 0x1420005f
    ctx->pc = 0x21B3B8u;
    {
        const bool branch_taken_0x21b3b8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B3BCu;
        SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 6), 4294967288));
        if (branch_taken_0x21b3b8) {
            ctx->pc = 0x21B538u;
            goto label_21b538;
        }
    }
    ctx->pc = 0x21B3C0u;
    // 0x21b3c0: 0x7080c628
    ctx->pc = 0x21b3c0u;
    SET_GPR_VEC(ctx, 24, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_21b3c4:
    // 0x21b3c4: 0xe1880
    ctx->pc = 0x21b3c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 14), 2));
    // 0x21b3c8: 0xa31821
    ctx->pc = 0x21b3c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b3cc: 0x8c680000
    ctx->pc = 0x21b3ccu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b3d0: 0x25d0000c
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 14), 12));
    // 0x21b3d4: 0x108080
    ctx->pc = 0x21b3d4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x21b3d8: 0x25ad0008
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
    // 0x21b3dc: 0x25c30001
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 1));
    // 0x21b3e0: 0x31880
    ctx->pc = 0x21b3e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b3e4: 0xa33821
    ctx->pc = 0x21b3e4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b3e8: 0xaf080004
    ctx->pc = 0x21b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 8));
    // 0x21b3ec: 0xc4e00000
    ctx->pc = 0x21b3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b3f0: 0x25c30002
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 2));
    // 0x21b3f4: 0x31880
    ctx->pc = 0x21b3f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b3f8: 0xa34821
    ctx->pc = 0x21b3f8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b3fc: 0x25c30003
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 3));
    // 0x21b400: 0x31880
    ctx->pc = 0x21b400u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b404: 0x46800020
    ctx->pc = 0x21b404u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b408: 0xa34021
    ctx->pc = 0x21b408u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b40c: 0x25c30004
    ctx->pc = 0x21b40cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 4));
    // 0x21b410: 0x31880
    ctx->pc = 0x21b410u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b414: 0x25c70005
    ctx->pc = 0x21b414u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 5));
    // 0x21b418: 0x73880
    ctx->pc = 0x21b418u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b41c: 0xe7000018
    ctx->pc = 0x21b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 24), bits); }
    // 0x21b420: 0x8d290000
    ctx->pc = 0x21b420u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21b424: 0xa76021
    ctx->pc = 0x21b424u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b428: 0x25c70006
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 6));
    // 0x21b42c: 0x73880
    ctx->pc = 0x21b42cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b430: 0xa75821
    ctx->pc = 0x21b430u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b434: 0x25c70007
    ctx->pc = 0x21b434u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 7));
    // 0x21b438: 0xaf090008
    ctx->pc = 0x21b438u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 9));
    // 0x21b43c: 0xc5000000
    ctx->pc = 0x21b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b440: 0x73880
    ctx->pc = 0x21b440u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b444: 0xa75021
    ctx->pc = 0x21b444u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b448: 0x25c70008
    ctx->pc = 0x21b448u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 8));
    // 0x21b44c: 0x73880
    ctx->pc = 0x21b44cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b450: 0xa74821
    ctx->pc = 0x21b450u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b454: 0x46800020
    ctx->pc = 0x21b454u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b458: 0x25c70009
    ctx->pc = 0x21b458u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 9));
    // 0x21b45c: 0x73880
    ctx->pc = 0x21b45cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b460: 0xa74021
    ctx->pc = 0x21b460u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b464: 0x25c7000a
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 14), 10));
    // 0x21b468: 0xa31821
    ctx->pc = 0x21b468u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b46c: 0xe700001c
    ctx->pc = 0x21b46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 28), bits); }
    // 0x21b470: 0x8c710000
    ctx->pc = 0x21b470u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b474: 0x73880
    ctx->pc = 0x21b474u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21b478: 0xa73821
    ctx->pc = 0x21b478u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x21b47c: 0xaf11000c
    ctx->pc = 0x21b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 17));
    // 0x21b480: 0xc5800000
    ctx->pc = 0x21b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b484: 0x25c3000b
    ctx->pc = 0x21b484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 11));
    // 0x21b488: 0x31880
    ctx->pc = 0x21b488u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b48c: 0xa31821
    ctx->pc = 0x21b48cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b490: 0xb08821
    ctx->pc = 0x21b490u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21b494: 0x46800020
    ctx->pc = 0x21b494u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b498: 0x25cc000d
    ctx->pc = 0x21b498u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 13));
    // 0x21b49c: 0xc6080
    ctx->pc = 0x21b49cu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 2));
    // 0x21b4a0: 0xac8021
    ctx->pc = 0x21b4a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x21b4a4: 0x25cc000e
    ctx->pc = 0x21b4a4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 14));
    // 0x21b4a8: 0xc6080
    ctx->pc = 0x21b4a8u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 2));
    // 0x21b4ac: 0xe7000020
    ctx->pc = 0x21b4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x21b4b0: 0x8d720000
    ctx->pc = 0x21b4b0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x21b4b4: 0xacc821
    ctx->pc = 0x21b4b4u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x21b4b8: 0x25cc000f
    ctx->pc = 0x21b4b8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 15));
    // 0x21b4bc: 0xc6080
    ctx->pc = 0x21b4bcu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 2));
    // 0x21b4c0: 0xac6021
    ctx->pc = 0x21b4c0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x21b4c4: 0x25ce0010
    ctx->pc = 0x21b4c4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 16));
    // 0x21b4c8: 0xaf120010
    ctx->pc = 0x21b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
    // 0x21b4cc: 0xc5400000
    ctx->pc = 0x21b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b4d0: 0x1af582a
    ctx->pc = 0x21b4d0u;
    SET_GPR_U32(ctx, 11, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 15)));
    // 0x21b4d4: 0x46800020
    ctx->pc = 0x21b4d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b4d8: 0xe7000024
    ctx->pc = 0x21b4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 36), bits); }
    // 0x21b4dc: 0x8d290000
    ctx->pc = 0x21b4dcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21b4e0: 0xaf090014
    ctx->pc = 0x21b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 9));
    // 0x21b4e4: 0xc5000000
    ctx->pc = 0x21b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b4e8: 0x46800020
    ctx->pc = 0x21b4e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b4ec: 0xe7000028
    ctx->pc = 0x21b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 40), bits); }
    // 0x21b4f0: 0x8ce70000
    ctx->pc = 0x21b4f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b4f4: 0xaf070018
    ctx->pc = 0x21b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 7));
    // 0x21b4f8: 0xc4600000
    ctx->pc = 0x21b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b4fc: 0x46800020
    ctx->pc = 0x21b4fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b500: 0xe700002c
    ctx->pc = 0x21b500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 44), bits); }
    // 0x21b504: 0x8e230000
    ctx->pc = 0x21b504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b508: 0xaf03001c
    ctx->pc = 0x21b508u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 3));
    // 0x21b50c: 0xc6000000
    ctx->pc = 0x21b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b510: 0x46800020
    ctx->pc = 0x21b510u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b514: 0xe7000030
    ctx->pc = 0x21b514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 48), bits); }
    // 0x21b518: 0x8f230000
    ctx->pc = 0x21b518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x21b51c: 0xaf030020
    ctx->pc = 0x21b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 3));
    // 0x21b520: 0xc5800000
    ctx->pc = 0x21b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b524: 0x46800020
    ctx->pc = 0x21b524u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b528: 0xe7000034
    ctx->pc = 0x21b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 52), bits); }
    // 0x21b52c: 0x1560ffa5
    ctx->pc = 0x21B52Cu;
    {
        const bool branch_taken_0x21b52c = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B530u;
        SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 32));
        if (branch_taken_0x21b52c) {
            ctx->pc = 0x21B3C4u;
            goto label_21b3c4;
        }
    }
    ctx->pc = 0x21B534u;
    // 0x21b534: 0x0
    ctx->pc = 0x21b534u;
    // NOP
label_21b538:
    // 0x21b538: 0x1a6082a
    ctx->pc = 0x21b538u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x21b53c: 0x10200012
    ctx->pc = 0x21B53Cu;
    {
        const bool branch_taken_0x21b53c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B540u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 14), 2));
        if (branch_taken_0x21b53c) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B544u;
    // 0x21b544: 0xa33821
    ctx->pc = 0x21b544u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b548: 0xd1880
    ctx->pc = 0x21b548u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 2));
    // 0x21b54c: 0x834021
    ctx->pc = 0x21b54cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21b550:
    // 0x21b550: 0x8ce40000
    ctx->pc = 0x21b550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b554: 0x25c30001
    ctx->pc = 0x21b554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 14), 1));
    // 0x21b558: 0x31880
    ctx->pc = 0x21b558u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b55c: 0xa31821
    ctx->pc = 0x21b55cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b560: 0x25ad0001
    ctx->pc = 0x21b560u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x21b564: 0x25ce0002
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 2));
    // 0x21b568: 0xad040004
    ctx->pc = 0x21b568u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x21b56c: 0xc4600000
    ctx->pc = 0x21b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b570: 0x24e70008
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x21b574: 0x46800020
    ctx->pc = 0x21b574u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b578: 0x1a6182a
    ctx->pc = 0x21b578u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x21b57c: 0xe5000018
    ctx->pc = 0x21b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x21b580: 0x1460fff3
    ctx->pc = 0x21B580u;
    {
        const bool branch_taken_0x21b580 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B584u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x21b580) {
            ctx->pc = 0x21B550u;
            goto label_21b550;
        }
    }
    ctx->pc = 0x21B588u;
label_21b588:
    // 0x21b588: 0x7bb20020
    ctx->pc = 0x21b588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b58c: 0x7bb10010
    ctx->pc = 0x21b58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b590: 0x7bb00000
    ctx->pc = 0x21b590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b594: 0x3e00008
    ctx->pc = 0x21B594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B3C4u: goto label_21b3c4;
            case 0x21B538u: goto label_21b538;
            case 0x21B550u: goto label_21b550;
            case 0x21B588u: goto label_21b588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B59Cu;
}
