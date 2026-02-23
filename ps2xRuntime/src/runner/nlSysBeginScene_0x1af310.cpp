#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSysBeginScene
// Address: 0x1af310 - 0x1af58c
void nlSysBeginScene_0x1af310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSysBeginScene");


    ctx->pc = 0x1af310u;

    // 0x1af310: 0x27bdff70
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1af314: 0x7fbf0080
    ctx->pc = 0x1af314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1af318: 0x7fb60070
    ctx->pc = 0x1af318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1af31c: 0x7fb50060
    ctx->pc = 0x1af31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1af320: 0x7fb40050
    ctx->pc = 0x1af320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1af324: 0x7fb30040
    ctx->pc = 0x1af324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1af328: 0x7fb20030
    ctx->pc = 0x1af328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1af32c: 0x7fb10020
    ctx->pc = 0x1af32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1af330: 0x7fb00010
    ctx->pc = 0x1af330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1af334: 0xe7b60008
    ctx->pc = 0x1af334u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1af338: 0xe7b50004
    ctx->pc = 0x1af338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1af33c: 0x10800005
    ctx->pc = 0x1AF33Cu;
    {
        const bool branch_taken_0x1af33c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF340u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        if (branch_taken_0x1af33c) {
            ctx->pc = 0x1AF354u;
            goto label_1af354;
        }
    }
    ctx->pc = 0x1AF344u;
    // 0x1af344: 0x3c020030
    ctx->pc = 0x1af344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1af348: 0x24423700
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1af34c: 0x1482001e
    ctx->pc = 0x1AF34Cu;
    {
        const bool branch_taken_0x1af34c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1af34c) {
            ctx->pc = 0x1AF3C8u;
            goto label_1af3c8;
        }
    }
    ctx->pc = 0x1AF354u;
label_1af354:
    // 0x1af354: 0x3c020030
    ctx->pc = 0x1af354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1af358: 0x24423700
    ctx->pc = 0x1af358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1af35c: 0xaf828a10
    ctx->pc = 0x1af35cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 2));
    // 0x1af360: 0x8f828a0c
    ctx->pc = 0x1af360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1af364: 0x30420001
    ctx->pc = 0x1af364u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1af368: 0x10400005
    ctx->pc = 0x1AF368u;
    {
        const bool branch_taken_0x1af368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af368) {
            ctx->pc = 0x1AF380u;
            goto label_1af380;
        }
    }
    ctx->pc = 0x1AF370u;
    // 0x1af370: 0x8f828a10
    ctx->pc = 0x1af370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1af374: 0x24500150
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 336));
    // 0x1af378: 0x10000004
    ctx->pc = 0x1AF378u;
    {
        const bool branch_taken_0x1af378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF37Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 352));
        if (branch_taken_0x1af378) {
            ctx->pc = 0x1AF38Cu;
            goto label_1af38c;
        }
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x8f828a10
    ctx->pc = 0x1af380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1af384: 0x24500060
    ctx->pc = 0x1af384u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 96));
    // 0x1af388: 0x24550070
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 112));
label_1af38c:
    // 0x1af38c: 0x3c010030
    ctx->pc = 0x1af38cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1af390: 0x84245838
    ctx->pc = 0x1af390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1af394: 0x3c010030
    ctx->pc = 0x1af394u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1af398: 0x84235834
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1af39c: 0x44840800
    ctx->pc = 0x1af39cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1af3a0: 0x0
    ctx->pc = 0x1af3a0u;
    // NOP
    // 0x1af3a4: 0x46800d20
    ctx->pc = 0x1af3a4u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1af3a8: 0x3c010030
    ctx->pc = 0x1af3a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1af3ac: 0x84225836
    ctx->pc = 0x1af3acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1af3b0: 0x44830000
    ctx->pc = 0x1af3b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1af3b4: 0x0
    ctx->pc = 0x1af3b4u;
    // NOP
    // 0x1af3b8: 0x46800560
    ctx->pc = 0x1af3b8u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1af3bc: 0x44820000
    ctx->pc = 0x1af3bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1af3c0: 0x10000013
    ctx->pc = 0x1AF3C0u;
    {
        const bool branch_taken_0x1af3c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF3C4u;
        ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1af3c0) {
            ctx->pc = 0x1AF410u;
            goto label_1af410;
        }
    }
    ctx->pc = 0x1AF3C8u;
label_1af3c8:
    // 0x1af3c8: 0x8c830000
    ctx->pc = 0x1af3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af3cc: 0x24020001
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af3d0: 0x14620004
    ctx->pc = 0x1AF3D0u;
    {
        const bool branch_taken_0x1af3d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AF3D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1af3d0) {
            ctx->pc = 0x1AF3E4u;
            goto label_1af3e4;
        }
    }
    ctx->pc = 0x1AF3D8u;
label_1af3d8:
    // 0x1af3d8: 0x1000ffff
    ctx->pc = 0x1AF3D8u;
    {
        const bool branch_taken_0x1af3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af3d8) {
            ctx->pc = 0x1AF3D8u;
            goto label_1af3d8;
        }
    }
    ctx->pc = 0x1AF3E0u;
    // 0x1af3e0: 0x3c023f80
    ctx->pc = 0x1af3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1af3e4:
    // 0x1af3e4: 0x4482a000
    ctx->pc = 0x1af3e4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x1af3e8: 0xaf848a10
    ctx->pc = 0x1af3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 4));
    // 0x1af3ec: 0x84830004
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1af3f0: 0x84820006
    ctx->pc = 0x1af3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1af3f4: 0x24900010
    ctx->pc = 0x1af3f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1af3f8: 0x24950020
    ctx->pc = 0x1af3f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 4), 32));
    // 0x1af3fc: 0x44830800
    ctx->pc = 0x1af3fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1af400: 0x44820000
    ctx->pc = 0x1af400u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1af404: 0x0
    ctx->pc = 0x1af404u;
    // NOP
    // 0x1af408: 0x46800d60
    ctx->pc = 0x1af408u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1af40c: 0x468005a0
    ctx->pc = 0x1af40cu;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1af410:
    // 0x1af410: 0x96060000
    ctx->pc = 0x1af410u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af414: 0x24038000
    ctx->pc = 0x1af414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1af418: 0x8e140024
    ctx->pc = 0x1af418u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1af41c: 0x6404000d
    ctx->pc = 0x1af41cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)13);
    // 0x1af420: 0x2402fffe
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1af424: 0x26160024
    ctx->pc = 0x1af424u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 16), 36));
    // 0x1af428: 0xc31824
    ctx->pc = 0x1af428u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1af42c: 0x641825
    ctx->pc = 0x1af42cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af430: 0xa6030000
    ctx->pc = 0x1af430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1af434: 0x8e030024
    ctx->pc = 0x1af434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1af438: 0x30d37fff
    ctx->pc = 0x1af438u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 32767));
    // 0x1af43c: 0x621024
    ctx->pc = 0x1af43cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af440: 0xae020024
    ctx->pc = 0x1af440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1af444: 0x8e020024
    ctx->pc = 0x1af444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1af448: 0x451025
    ctx->pc = 0x1af448u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1af44c: 0xae020024
    ctx->pc = 0x1af44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1af450: 0x96020000
    ctx->pc = 0x1af450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af454: 0x30527fff
    ctx->pc = 0x1af454u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 32767));
label_1af458:
    // 0x1af458: 0x3c011001
    ctx->pc = 0x1af458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1af45c: 0x8c22d000
    ctx->pc = 0x1af45cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1af460: 0x30420100
    ctx->pc = 0x1af460u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1af464: 0x0
    ctx->pc = 0x1af464u;
    // NOP
    // 0x1af468: 0x0
    ctx->pc = 0x1af468u;
    // NOP
    // 0x1af46c: 0x1440fffa
    ctx->pc = 0x1AF46Cu;
    {
        const bool branch_taken_0x1af46c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af46c) {
            ctx->pc = 0x1AF458u;
            goto label_1af458;
        }
    }
    ctx->pc = 0x1AF474u;
    // 0x1af474: 0xc069528
    ctx->pc = 0x1AF474u;
    SET_GPR_U32(ctx, 31, 0x1AF47Cu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF47Cu; }
        else if (ctx->pc != 0x1AF47Cu) { ctx->pc = 0x1AF47Cu; }
    }
    if (ctx->pc != 0x1AF47Cu) { return; }
    ctx->pc = 0x1AF47Cu;
    // 0x1af47c: 0x26450001
    ctx->pc = 0x1af47cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af480: 0x3c041000
    ctx->pc = 0x1af480u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1af484: 0xa41825
    ctx->pc = 0x1af484u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1af488: 0xac430000
    ctx->pc = 0x1af488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1af48c: 0xac400004
    ctx->pc = 0x1af48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1af490: 0x3c035100
    ctx->pc = 0x1af490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1af494: 0xa31825
    ctx->pc = 0x1af494u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1af498: 0xac440008
    ctx->pc = 0x1af498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1af49c: 0x70408e28
    ctx->pc = 0x1af49cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1af4a0: 0xac43000c
    ctx->pc = 0x1af4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1af4a4: 0x26240010
    ctx->pc = 0x1af4a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1af4a8: 0x72002e28
    ctx->pc = 0x1af4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1af4ac: 0xc06ac36
    ctx->pc = 0x1AF4ACu;
    SET_GPR_U32(ctx, 31, 0x1AF4B4u);
    ctx->pc = 0x1AF4B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4B4u; }
        else if (ctx->pc != 0x1AF4B4u) { ctx->pc = 0x1AF4B4u; }
    }
    if (ctx->pc != 0x1AF4B4u) { return; }
    ctx->pc = 0x1AF4B4u;
    // 0x1af4b4: 0xdea80000
    ctx->pc = 0x1af4b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1af4b8: 0x2407004d
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 77));
    // 0x1af4bc: 0x2406004f
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 79));
    // 0x1af4c0: 0x24050019
    ctx->pc = 0x1af4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1af4c4: 0x24030041
    ctx->pc = 0x1af4c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1af4c8: 0x24020048
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x1af4cc: 0xfe2800a0
    ctx->pc = 0x1af4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 8));
    // 0x1af4d0: 0xfe2700a8
    ctx->pc = 0x1af4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 168), GPR_U64(ctx, 7));
    // 0x1af4d4: 0xdea70010
    ctx->pc = 0x1af4d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1af4d8: 0x26440002
    ctx->pc = 0x1af4d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 2));
    // 0x1af4dc: 0xfe2700b0
    ctx->pc = 0x1af4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 176), GPR_U64(ctx, 7));
    // 0x1af4e0: 0xfe2600b8
    ctx->pc = 0x1af4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 184), GPR_U64(ctx, 6));
    // 0x1af4e4: 0xdea60020
    ctx->pc = 0x1af4e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af4e8: 0xfe2600c0
    ctx->pc = 0x1af4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 6));
    // 0x1af4ec: 0xfe2500c8
    ctx->pc = 0x1af4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 5));
    // 0x1af4f0: 0xdea50030
    ctx->pc = 0x1af4f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1af4f4: 0xfe2500d0
    ctx->pc = 0x1af4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 5));
    // 0x1af4f8: 0xfe2300d8
    ctx->pc = 0x1af4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 216), GPR_U64(ctx, 3));
    // 0x1af4fc: 0xdea30070
    ctx->pc = 0x1af4fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1af500: 0xfe2300e0
    ctx->pc = 0x1af500u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 3));
    // 0x1af504: 0xc06952c
    ctx->pc = 0x1AF504u;
    SET_GPR_U32(ctx, 31, 0x1AF50Cu);
    ctx->pc = 0x1AF508u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 232), GPR_U64(ctx, 2));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF50Cu; }
        else if (ctx->pc != 0x1AF50Cu) { ctx->pc = 0x1AF50Cu; }
    }
    if (ctx->pc != 0x1AF50Cu) { return; }
    ctx->pc = 0x1AF50Cu;
    // 0x1af50c: 0x3c023f00
    ctx->pc = 0x1af50cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1af510: 0x44820800
    ctx->pc = 0x1af510u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1af514: 0x4600ab86
    ctx->pc = 0x1af514u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1af518: 0x46150802
    ctx->pc = 0x1af518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1af51c: 0x3c024500
    ctx->pc = 0x1af51cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17664 << 16));
    // 0x1af520: 0x44821000
    ctx->pc = 0x1af520u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1af524: 0x4600b3c6
    ctx->pc = 0x1af524u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1af528: 0x4614101a
    ctx->pc = 0x1af528u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1af52c: 0x46001301
    ctx->pc = 0x1af52cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1af530: 0xc06b158
    ctx->pc = 0x1AF530u;
    SET_GPR_U32(ctx, 31, 0x1AF538u);
    ctx->pc = 0x1AF534u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
    ctx->pc = 0x1AC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetWindowSize_0x1ac560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF538u; }
        else if (ctx->pc != 0x1AF538u) { ctx->pc = 0x1AF538u; }
    }
    if (ctx->pc != 0x1AF538u) { return; }
    ctx->pc = 0x1AF538u;
    // 0x1af538: 0x96050000
    ctx->pc = 0x1af538u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af53c: 0x24038000
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1af540: 0x32647fff
    ctx->pc = 0x1af540u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 32767));
    // 0x1af544: 0x70001628
    ctx->pc = 0x1af544u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af548: 0xa31824
    ctx->pc = 0x1af548u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1af54c: 0x641825
    ctx->pc = 0x1af54cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af550: 0xa6030000
    ctx->pc = 0x1af550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1af554: 0xaed40000
    ctx->pc = 0x1af554u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1af558: 0x7bbf0080
    ctx->pc = 0x1af558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af55c: 0x7bb60070
    ctx->pc = 0x1af55cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af560: 0x7bb50060
    ctx->pc = 0x1af560u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af564: 0x7bb40050
    ctx->pc = 0x1af564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af568: 0x7bb30040
    ctx->pc = 0x1af568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af56c: 0x7bb20030
    ctx->pc = 0x1af56cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af570: 0x7bb10020
    ctx->pc = 0x1af570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af574: 0x7bb00010
    ctx->pc = 0x1af574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af578: 0xc7b60008
    ctx->pc = 0x1af578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1af57c: 0xc7b50004
    ctx->pc = 0x1af57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1af580: 0xc7b40000
    ctx->pc = 0x1af580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af584: 0x3e00008
    ctx->pc = 0x1AF584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF354u: goto label_1af354;
            case 0x1AF380u: goto label_1af380;
            case 0x1AF38Cu: goto label_1af38c;
            case 0x1AF3C8u: goto label_1af3c8;
            case 0x1AF3D8u: goto label_1af3d8;
            case 0x1AF3E4u: goto label_1af3e4;
            case 0x1AF410u: goto label_1af410;
            case 0x1AF458u: goto label_1af458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF58Cu;
}
