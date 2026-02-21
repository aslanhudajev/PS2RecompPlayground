#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_optmenu
// Address: 0x20b3b0 - 0x20b5f4
void end_optmenu_0x20b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b3b0u;

    // 0x20b3b0: 0x27bdff90
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20b3b4: 0xffbf0060
    ctx->pc = 0x20b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20b3b8: 0xffb50050
    ctx->pc = 0x20b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20b3bc: 0xffb40040
    ctx->pc = 0x20b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20b3c0: 0xffb30030
    ctx->pc = 0x20b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20b3c4: 0xffb20020
    ctx->pc = 0x20b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20b3c8: 0xffb10010
    ctx->pc = 0x20b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20b3cc: 0xffb00000
    ctx->pc = 0x20b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b3d0: 0x80a02d
    ctx->pc = 0x20b3d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3d4: 0xa0982d
    ctx->pc = 0x20b3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3d8: 0x3c020032
    ctx->pc = 0x20b3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b3dc: 0x8c43f2f4
    ctx->pc = 0x20b3dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b3e0: 0x4600008
    ctx->pc = 0x20B3E0u;
    {
        const bool branch_taken_0x20b3e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20B3E4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20b3e0) {
            ctx->pc = 0x20B404u;
            goto label_20b404;
        }
    }
    ctx->pc = 0x20B3E8u;
    // 0x20b3e8: 0x3c02003c
    ctx->pc = 0x20b3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20b3ec: 0x2442c558
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x20b3f0: 0x31880
    ctx->pc = 0x20b3f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b3f4: 0x621821
    ctx->pc = 0x20b3f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b3f8: 0x8c620000
    ctx->pc = 0x20b3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b3fc: 0x14400005
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B414u;
            goto label_20b414;
        }
    }
    ctx->pc = 0x20B404u;
label_20b404:
    // 0x20b404: 0x3c04003a
    ctx->pc = 0x20b404u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20b408: 0x24845330
    ctx->pc = 0x20b408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21296));
    // 0x20b40c: 0xc0b49a6
    ctx->pc = 0x20B40Cu;
    SET_GPR_U32(ctx, 31, 0x20B414u);
    ctx->pc = 0x20B410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B414u; }
    }
    if (ctx->pc != 0x20B414u) { return; }
    ctx->pc = 0x20B414u;
label_20b414:
    // 0x20b414: 0x661001e
    ctx->pc = 0x20B414u;
    {
        const bool branch_taken_0x20b414 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x20B418u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20b414) {
            ctx->pc = 0x20B490u;
            goto label_20b490;
        }
    }
    ctx->pc = 0x20B41Cu;
    // 0x20b41c: 0x3c020032
    ctx->pc = 0x20b41cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b420: 0x8c42f2f4
    ctx->pc = 0x20b420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b424: 0x18400010
    ctx->pc = 0x20B424u;
    {
        const bool branch_taken_0x20b424 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20B428u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b424) {
            ctx->pc = 0x20B468u;
            goto label_20b468;
        }
    }
    ctx->pc = 0x20B42Cu;
    // 0x20b42c: 0x3c02003c
    ctx->pc = 0x20b42cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20b430: 0x2452c558
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x20b434: 0x3c110032
    ctx->pc = 0x20b434u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x20b438: 0x101080
    ctx->pc = 0x20b438u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x20b43c: 0x0
    ctx->pc = 0x20b43cu;
    // NOP
label_20b440:
    // 0x20b440: 0x521021
    ctx->pc = 0x20b440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20b444: 0x8c440000
    ctx->pc = 0x20b444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b448: 0x10800003
    ctx->pc = 0x20B448u;
    {
        const bool branch_taken_0x20b448 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B44Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x20b448) {
            ctx->pc = 0x20B458u;
            goto label_20b458;
        }
    }
    ctx->pc = 0x20B450u;
    // 0x20b450: 0xc082c8c
    ctx->pc = 0x20B450u;
    SET_GPR_U32(ctx, 31, 0x20B458u);
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B458u; }
    }
    if (ctx->pc != 0x20B458u) { return; }
    ctx->pc = 0x20B458u;
label_20b458:
    // 0x20b458: 0x8e22f2f4
    ctx->pc = 0x20b458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294963956)));
    // 0x20b45c: 0x202102a
    ctx->pc = 0x20b45cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x20b460: 0x1440fff7
    ctx->pc = 0x20B460u;
    {
        const bool branch_taken_0x20b460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20B464u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x20b460) {
            ctx->pc = 0x20B440u;
            goto label_20b440;
        }
    }
    ctx->pc = 0x20B468u;
label_20b468:
    // 0x20b468: 0x3c05003c
    ctx->pc = 0x20b468u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x20b46c: 0x24a3c558
    ctx->pc = 0x20b46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294952280));
    // 0x20b470: 0x3c040032
    ctx->pc = 0x20b470u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20b474: 0x8c82f2f4
    ctx->pc = 0x20b474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963956)));
    // 0x20b478: 0x21080
    ctx->pc = 0x20b478u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b47c: 0x431021
    ctx->pc = 0x20b47cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b480: 0x8c420000
    ctx->pc = 0x20b480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b484: 0xaca2c558
    ctx->pc = 0x20b484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952280), GPR_U32(ctx, 2));
    // 0x20b488: 0xac80f2f4
    ctx->pc = 0x20b488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963956), GPR_U32(ctx, 0));
    // 0x20b48c: 0x3c03003c
    ctx->pc = 0x20b48cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20b490:
    // 0x20b490: 0x2463c558
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
    // 0x20b494: 0x3c020032
    ctx->pc = 0x20b494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b498: 0x8c42f2f4
    ctx->pc = 0x20b498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b49c: 0x21080
    ctx->pc = 0x20b49cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b4a0: 0x431021
    ctx->pc = 0x20b4a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b4a4: 0x8c500000
    ctx->pc = 0x20b4a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b4a8: 0xc08496c
    ctx->pc = 0x20B4A8u;
    SET_GPR_U32(ctx, 31, 0x20B4B0u);
    ctx->pc = 0x20B4ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 140));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4B0u; }
    }
    if (ctx->pc != 0x20B4B0u) { return; }
    ctx->pc = 0x20B4B0u;
    // 0x20b4b0: 0x8e040088
    ctx->pc = 0x20b4b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x20b4b4: 0x50800005
    ctx->pc = 0x20B4B4u;
    {
        const bool branch_taken_0x20b4b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b4b4) {
            ctx->pc = 0x20B4B8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x20B4CCu;
            goto label_20b4cc;
        }
    }
    ctx->pc = 0x20B4BCu;
    // 0x20b4bc: 0xc0b3f1a
    ctx->pc = 0x20B4BCu;
    SET_GPR_U32(ctx, 31, 0x20B4C4u);
    ctx->pc = 0x20B4C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4C4u; }
    }
    if (ctx->pc != 0x20B4C4u) { return; }
    ctx->pc = 0x20B4C4u;
    // 0x20b4c4: 0xae020088
    ctx->pc = 0x20b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x20b4c8: 0x8e0400e0
    ctx->pc = 0x20b4c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_20b4cc:
    // 0x20b4cc: 0x10800004
    ctx->pc = 0x20B4CCu;
    {
        const bool branch_taken_0x20b4cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b4cc) {
            ctx->pc = 0x20B4E0u;
            goto label_20b4e0;
        }
    }
    ctx->pc = 0x20B4D4u;
    // 0x20b4d4: 0xc0b0b38
    ctx->pc = 0x20B4D4u;
    SET_GPR_U32(ctx, 31, 0x20B4DCu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4DCu; }
    }
    if (ctx->pc != 0x20B4DCu) { return; }
    ctx->pc = 0x20B4DCu;
    // 0x20b4dc: 0xae0200e0
    ctx->pc = 0x20b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_20b4e0:
    // 0x20b4e0: 0x1e600007
    ctx->pc = 0x20B4E0u;
    {
        const bool branch_taken_0x20b4e0 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x20b4e0) {
            ctx->pc = 0x20B500u;
            goto label_20b500;
        }
    }
    ctx->pc = 0x20B4E8u;
    // 0x20b4e8: 0x8e020020
    ctx->pc = 0x20b4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20b4ec: 0x30420020
    ctx->pc = 0x20b4ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x20b4f0: 0x10400003
    ctx->pc = 0x20B4F0u;
    {
        const bool branch_taken_0x20b4f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B4F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20b4f0) {
            ctx->pc = 0x20B500u;
            goto label_20b500;
        }
    }
    ctx->pc = 0x20B4F8u;
    // 0x20b4f8: 0x10000003
    ctx->pc = 0x20B4F8u;
    {
        const bool branch_taken_0x20b4f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B4FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        if (branch_taken_0x20b4f8) {
            ctx->pc = 0x20B508u;
            goto label_20b508;
        }
    }
    ctx->pc = 0x20B500u;
label_20b500:
    // 0x20b500: 0xc082c8c
    ctx->pc = 0x20B500u;
    SET_GPR_U32(ctx, 31, 0x20B508u);
    ctx->pc = 0x20B504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B508u; }
    }
    if (ctx->pc != 0x20B508u) { return; }
    ctx->pc = 0x20B508u;
label_20b508:
    // 0x20b508: 0x6810029
    ctx->pc = 0x20B508u;
    {
        const bool branch_taken_0x20b508 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x20B50Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20b508) {
            ctx->pc = 0x20B5B0u;
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B510u;
    // 0x20b510: 0x8c44f2f4
    ctx->pc = 0x20b510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b514: 0x2484ffff
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20b518: 0xac44f2f4
    ctx->pc = 0x20b518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963956), GPR_U32(ctx, 4));
    // 0x20b51c: 0x3c03003c
    ctx->pc = 0x20b51cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x20b520: 0x2463c558
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
    // 0x20b524: 0x41080
    ctx->pc = 0x20b524u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b528: 0x431021
    ctx->pc = 0x20b528u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b52c: 0x4800004
    ctx->pc = 0x20B52Cu;
    {
        const bool branch_taken_0x20b52c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20B530u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x20b52c) {
            ctx->pc = 0x20B540u;
            goto label_20b540;
        }
    }
    ctx->pc = 0x20B534u;
    // 0x20b534: 0x3c030032
    ctx->pc = 0x20b534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20b538: 0x10000003
    ctx->pc = 0x20B538u;
    {
        const bool branch_taken_0x20b538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B53Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x20b538) {
            ctx->pc = 0x20B548u;
            goto label_20b548;
        }
    }
    ctx->pc = 0x20B540u;
label_20b540:
    // 0x20b540: 0x3c030032
    ctx->pc = 0x20b540u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20b544: 0x24020001
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20b548:
    // 0x20b548: 0x1e600019
    ctx->pc = 0x20B548u;
    {
        const bool branch_taken_0x20b548 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x20B54Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955864), GPR_U32(ctx, 2));
        if (branch_taken_0x20b548) {
            ctx->pc = 0x20B5B0u;
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B550u;
    // 0x20b550: 0x8e0200dc
    ctx->pc = 0x20b550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x20b554: 0x10400016
    ctx->pc = 0x20B554u;
    {
        const bool branch_taken_0x20b554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b554) {
            ctx->pc = 0x20B5B0u;
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B55Cu;
    // 0x20b55c: 0x6600007
    ctx->pc = 0x20B55Cu;
    {
        const bool branch_taken_0x20b55c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x20B560u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20b55c) {
            ctx->pc = 0x20B57Cu;
            goto label_20b57c;
        }
    }
    ctx->pc = 0x20B564u;
    // 0x20b564: 0x8c42f2f4
    ctx->pc = 0x20b564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b568: 0x4420005
    ctx->pc = 0x20B568u;
    {
        const bool branch_taken_0x20b568 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b568) {
            ctx->pc = 0x20B56Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x20B580u;
            goto label_20b580;
        }
    }
    ctx->pc = 0x20B570u;
    // 0x20b570: 0x8ca20044
    ctx->pc = 0x20b570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x20b574: 0x1440000e
    ctx->pc = 0x20B574u;
    {
        const bool branch_taken_0x20b574 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b574) {
            ctx->pc = 0x20B5B0u;
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B57Cu;
label_20b57c:
    // 0x20b57c: 0x8e040044
    ctx->pc = 0x20b57cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_20b580:
    // 0x20b580: 0x2405ffff
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b584: 0x8e060048
    ctx->pc = 0x20b584u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20b588: 0x8e07004c
    ctx->pc = 0x20b588u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20b58c: 0x8e080050
    ctx->pc = 0x20b58cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20b590: 0x8e090054
    ctx->pc = 0x20b590u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x20b594: 0x44806000
    ctx->pc = 0x20b594u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x20b598: 0xc08a334
    ctx->pc = 0x20B598u;
    SET_GPR_U32(ctx, 31, 0x20B5A0u);
    ctx->pc = 0x20B59Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x228CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFireScroll_0x228cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5A0u; }
    }
    if (ctx->pc != 0x20B5A0u) { return; }
    ctx->pc = 0x20B5A0u;
    // 0x20b5a0: 0x40202d
    ctx->pc = 0x20b5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5a4: 0xc0b0ba0
    ctx->pc = 0x20B5A4u;
    SET_GPR_U32(ctx, 31, 0x20B5ACu);
    ctx->pc = 0x20B5A8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->pc = 0x2C2E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitOrder_0x2c2e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5ACu; }
    }
    if (ctx->pc != 0x20B5ACu) { return; }
    ctx->pc = 0x20B5ACu;
    // 0x20b5ac: 0xa82d
    ctx->pc = 0x20b5acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b5b0:
    // 0x20b5b0: 0x12a00008
    ctx->pc = 0x20B5B0u;
    {
        const bool branch_taken_0x20b5b0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B5B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x20b5b0) {
            ctx->pc = 0x20B5D4u;
            goto label_20b5d4;
        }
    }
    ctx->pc = 0x20B5B8u;
    // 0x20b5b8: 0x8e0400dc
    ctx->pc = 0x20b5b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x20b5bc: 0x10800006
    ctx->pc = 0x20B5BCu;
    {
        const bool branch_taken_0x20b5bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B5C0u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x20b5bc) {
            ctx->pc = 0x20B5D8u;
            goto label_20b5d8;
        }
    }
    ctx->pc = 0x20B5C4u;
    // 0x20b5c4: 0xc0b0b38
    ctx->pc = 0x20B5C4u;
    SET_GPR_U32(ctx, 31, 0x20B5CCu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5CCu; }
    }
    if (ctx->pc != 0x20B5CCu) { return; }
    ctx->pc = 0x20B5CCu;
    // 0x20b5cc: 0xae0200dc
    ctx->pc = 0x20b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x20b5d0: 0xdfbf0060
    ctx->pc = 0x20b5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20b5d4:
    // 0x20b5d4: 0xdfb50050
    ctx->pc = 0x20b5d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20b5d8:
    // 0x20b5d8: 0xdfb40040
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b5dc: 0xdfb30030
    ctx->pc = 0x20b5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b5e0: 0xdfb20020
    ctx->pc = 0x20b5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b5e4: 0xdfb10010
    ctx->pc = 0x20b5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b5e8: 0xdfb00000
    ctx->pc = 0x20b5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b5ec: 0x3e00008
    ctx->pc = 0x20B5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B404u: goto label_20b404;
            case 0x20B414u: goto label_20b414;
            case 0x20B440u: goto label_20b440;
            case 0x20B458u: goto label_20b458;
            case 0x20B468u: goto label_20b468;
            case 0x20B490u: goto label_20b490;
            case 0x20B4CCu: goto label_20b4cc;
            case 0x20B4E0u: goto label_20b4e0;
            case 0x20B500u: goto label_20b500;
            case 0x20B508u: goto label_20b508;
            case 0x20B540u: goto label_20b540;
            case 0x20B548u: goto label_20b548;
            case 0x20B57Cu: goto label_20b57c;
            case 0x20B580u: goto label_20b580;
            case 0x20B5B0u: goto label_20b5b0;
            case 0x20B5D4u: goto label_20b5d4;
            case 0x20B5D8u: goto label_20b5d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B5F4u;
}
