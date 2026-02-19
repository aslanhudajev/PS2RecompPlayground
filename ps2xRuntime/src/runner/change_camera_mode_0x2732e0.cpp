#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: change_camera_mode
// Address: 0x2732e0 - 0x2735d0
void change_camera_mode_0x2732e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2732e0u;

    // 0x2732e0: 0x27bdff70
    ctx->pc = 0x2732e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2732e4: 0xffbf0080
    ctx->pc = 0x2732e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2732e8: 0xffb00070
    ctx->pc = 0x2732e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2732ec: 0x240301a0
    ctx->pc = 0x2732ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2732f0: 0x831818
    ctx->pc = 0x2732f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2732f4: 0x3c020034
    ctx->pc = 0x2732f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2732f8: 0x2442eb60
    ctx->pc = 0x2732f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2732fc: 0x628021
    ctx->pc = 0x2732fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273300: 0x3c020031
    ctx->pc = 0x273300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x273304: 0x8c430018
    ctx->pc = 0x273304u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x273308: 0x24024014
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16404));
    // 0x27330c: 0x10620044
    ctx->pc = 0x27330Cu;
    {
        const bool branch_taken_0x27330c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x273310u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16405));
        if (branch_taken_0x27330c) {
            ctx->pc = 0x273420u;
            goto label_273420;
        }
    }
    ctx->pc = 0x273314u;
    // 0x273314: 0x10400014
    ctx->pc = 0x273314u;
    {
        const bool branch_taken_0x273314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273318u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x273314) {
            ctx->pc = 0x273368u;
            goto label_273368;
        }
    }
    ctx->pc = 0x27331Cu;
    // 0x27331c: 0x106200a8
    ctx->pc = 0x27331Cu;
    {
        const bool branch_taken_0x27331c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x273320u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16398));
        if (branch_taken_0x27331c) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x273324u;
    // 0x273324: 0x10400007
    ctx->pc = 0x273324u;
    {
        const bool branch_taken_0x273324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273328u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        if (branch_taken_0x273324) {
            ctx->pc = 0x273344u;
            goto label_273344;
        }
    }
    ctx->pc = 0x27332Cu;
    // 0x27332c: 0x106200a4
    ctx->pc = 0x27332Cu;
    {
        const bool branch_taken_0x27332c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x273330u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
        if (branch_taken_0x27332c) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x273334u;
    // 0x273334: 0x1062003a
    ctx->pc = 0x273334u;
    {
        const bool branch_taken_0x273334 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x273334) {
            ctx->pc = 0x273420u;
            goto label_273420;
        }
    }
    ctx->pc = 0x27333Cu;
    // 0x27333c: 0x10000093
    ctx->pc = 0x27333Cu;
    {
        const bool branch_taken_0x27333c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27333c) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x273344u;
label_273344:
    // 0x273344: 0x24024010
    ctx->pc = 0x273344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x273348: 0x10620035
    ctx->pc = 0x273348u;
    {
        const bool branch_taken_0x273348 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27334Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16400));
        if (branch_taken_0x273348) {
            ctx->pc = 0x273420u;
            goto label_273420;
        }
    }
    ctx->pc = 0x273350u;
    // 0x273350: 0x1440008e
    ctx->pc = 0x273350u;
    {
        const bool branch_taken_0x273350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273354u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16402));
        if (branch_taken_0x273350) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x273358u;
    // 0x273358: 0x1440008c
    ctx->pc = 0x273358u;
    {
        const bool branch_taken_0x273358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27335Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x273358) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x273360u;
    // 0x273360: 0x10000099
    ctx->pc = 0x273360u;
    {
        const bool branch_taken_0x273360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273364u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x273360) {
            ctx->pc = 0x2735C8u;
            goto label_2735c8;
        }
    }
    ctx->pc = 0x273368u;
label_273368:
    // 0x273368: 0x34028007
    ctx->pc = 0x273368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32775));
    // 0x27336c: 0x43102b
    ctx->pc = 0x27336cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273370: 0x1440000c
    ctx->pc = 0x273370u;
    {
        const bool branch_taken_0x273370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273374u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
        if (branch_taken_0x273370) {
            ctx->pc = 0x2733A4u;
            goto label_2733a4;
        }
    }
    ctx->pc = 0x273378u;
    // 0x273378: 0x34028006
    ctx->pc = 0x273378u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
    // 0x27337c: 0x62102b
    ctx->pc = 0x27337cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273380: 0x1040008f
    ctx->pc = 0x273380u;
    {
        const bool branch_taken_0x273380 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273384u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16408));
        if (branch_taken_0x273380) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x273388u;
    // 0x273388: 0x1440008e
    ctx->pc = 0x273388u;
    {
        const bool branch_taken_0x273388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27338Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x273388) {
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x273390u;
    // 0x273390: 0x34028003
    ctx->pc = 0x273390u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
    // 0x273394: 0x1062008c
    ctx->pc = 0x273394u;
    {
        const bool branch_taken_0x273394 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x273398u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x273394) {
            ctx->pc = 0x2735C8u;
            goto label_2735c8;
        }
    }
    ctx->pc = 0x27339Cu;
    // 0x27339c: 0x1000007b
    ctx->pc = 0x27339Cu;
    {
        const bool branch_taken_0x27339c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27339c) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x2733A4u;
label_2733a4:
    // 0x2733a4: 0x10620005
    ctx->pc = 0x2733A4u;
    {
        const bool branch_taken_0x2733a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2733A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32778));
        if (branch_taken_0x2733a4) {
            ctx->pc = 0x2733BCu;
            goto label_2733bc;
        }
    }
    ctx->pc = 0x2733ACu;
    // 0x2733ac: 0x14620077
    ctx->pc = 0x2733ACu;
    {
        const bool branch_taken_0x2733ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2733B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2733ac) {
            ctx->pc = 0x27358Cu;
            goto label_27358c;
        }
    }
    ctx->pc = 0x2733B4u;
    // 0x2733b4: 0x10000084
    ctx->pc = 0x2733B4u;
    {
        const bool branch_taken_0x2733b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2733B8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2733b4) {
            ctx->pc = 0x2735C8u;
            goto label_2735c8;
        }
    }
    ctx->pc = 0x2733BCu;
label_2733bc:
    // 0x2733bc: 0x1480000c
    ctx->pc = 0x2733BCu;
    {
        const bool branch_taken_0x2733bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2733C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2733bc) {
            ctx->pc = 0x2733F0u;
            goto label_2733f0;
        }
    }
    ctx->pc = 0x2733C4u;
    // 0x2733c4: 0x8e0400dc
    ctx->pc = 0x2733c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2733c8: 0x28820002
    ctx->pc = 0x2733c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2733cc: 0x10400078
    ctx->pc = 0x2733CCu;
    {
        const bool branch_taken_0x2733cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2733D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2733cc) {
            ctx->pc = 0x2735B0u;
            goto label_2735b0;
        }
    }
    ctx->pc = 0x2733D4u;
    // 0x2733d4: 0x4800075
    ctx->pc = 0x2733D4u;
    {
        const bool branch_taken_0x2733d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2733D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2733d4) {
            ctx->pc = 0x2735ACu;
            goto label_2735ac;
        }
    }
    ctx->pc = 0x2733DCu;
    // 0x2733dc: 0x24030001
    ctx->pc = 0x2733dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2733e0: 0xac43ffbc
    ctx->pc = 0x2733e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967228), GPR_U32(ctx, 3));
    // 0x2733e4: 0x24820001
    ctx->pc = 0x2733e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2733e8: 0x10000070
    ctx->pc = 0x2733E8u;
    {
        const bool branch_taken_0x2733e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2733ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        if (branch_taken_0x2733e8) {
            ctx->pc = 0x2735ACu;
            goto label_2735ac;
        }
    }
    ctx->pc = 0x2733F0u;
label_2733f0:
    // 0x2733f0: 0x14820074
    ctx->pc = 0x2733F0u;
    {
        const bool branch_taken_0x2733f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2733F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2733f0) {
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x2733F8u;
    // 0x2733f8: 0x3c100034
    ctx->pc = 0x2733f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2733fc: 0x2610eb60
    ctx->pc = 0x2733fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x273400: 0x24040001
    ctx->pc = 0x273400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x273404: 0x282d
    ctx->pc = 0x273404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273408: 0xc099c34
    ctx->pc = 0x273408u;
    SET_GPR_U32(ctx, 31, 0x273410u);
    ctx->pc = 0x27340Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273410u; }
    }
    if (ctx->pc != 0x273410u) { return; }
    ctx->pc = 0x273410u;
    // 0x273410: 0xae0001a0
    ctx->pc = 0x273410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x273414: 0x3c020034
    ctx->pc = 0x273414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273418: 0x10000069
    ctx->pc = 0x273418u;
    {
        const bool branch_taken_0x273418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27341Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
        if (branch_taken_0x273418) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x273420u;
label_273420:
    // 0x273420: 0x14800068
    ctx->pc = 0x273420u;
    {
        const bool branch_taken_0x273420 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x273424u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x273420) {
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x273428u;
    // 0x273428: 0x3c020032
    ctx->pc = 0x273428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27342c: 0x8c42080c
    ctx->pc = 0x27342cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x273430: 0x54400065
    ctx->pc = 0x273430u;
    {
        const bool branch_taken_0x273430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x273430) {
            ctx->pc = 0x273434u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x2735C8u;
            goto label_2735c8;
        }
    }
    ctx->pc = 0x273438u;
    // 0x273438: 0x3c020036
    ctx->pc = 0x273438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x27343c: 0x8c45d934
    ctx->pc = 0x27343cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x273440: 0x4a0003b
    ctx->pc = 0x273440u;
    {
        const bool branch_taken_0x273440 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x273444u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x273440) {
            ctx->pc = 0x273530u;
            goto label_273530;
        }
    }
    ctx->pc = 0x273448u;
    // 0x273448: 0x8c42f9cc
    ctx->pc = 0x273448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965708)));
    // 0x27344c: 0x10400038
    ctx->pc = 0x27344Cu;
    {
        const bool branch_taken_0x27344c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273450u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 34));
        if (branch_taken_0x27344c) {
            ctx->pc = 0x273530u;
            goto label_273530;
        }
    }
    ctx->pc = 0x273454u;
    // 0x273454: 0x1440000a
    ctx->pc = 0x273454u;
    {
        const bool branch_taken_0x273454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273458u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967262));
        if (branch_taken_0x273454) {
            ctx->pc = 0x273480u;
            goto label_273480;
        }
    }
    ctx->pc = 0x27345Cu;
    // 0x27345c: 0x28a20028
    ctx->pc = 0x27345cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 40));
    // 0x273460: 0x1440000e
    ctx->pc = 0x273460u;
    {
        const bool branch_taken_0x273460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x273460) {
            ctx->pc = 0x27349Cu;
            goto label_27349c;
        }
    }
    ctx->pc = 0x273468u;
    // 0x273468: 0x28a2002c
    ctx->pc = 0x273468u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 44));
    // 0x27346c: 0x10400004
    ctx->pc = 0x27346Cu;
    {
        const bool branch_taken_0x27346c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273470u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 42));
        if (branch_taken_0x27346c) {
            ctx->pc = 0x273480u;
            goto label_273480;
        }
    }
    ctx->pc = 0x273474u;
    // 0x273474: 0x10400009
    ctx->pc = 0x273474u;
    {
        const bool branch_taken_0x273474 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273478u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x273474) {
            ctx->pc = 0x27349Cu;
            goto label_27349c;
        }
    }
    ctx->pc = 0x27347Cu;
    // 0x27347c: 0x0
    ctx->pc = 0x27347cu;
    // NOP
label_273480:
    // 0x273480: 0x3c020034
    ctx->pc = 0x273480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273484: 0x2442eb40
    ctx->pc = 0x273484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961984));
    // 0x273488: 0x31880
    ctx->pc = 0x273488u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x27348c: 0x621821
    ctx->pc = 0x27348cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273490: 0x8c650000
    ctx->pc = 0x273490u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273494: 0x10000041
    ctx->pc = 0x273494u;
    {
        const bool branch_taken_0x273494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273498u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x273494) {
            ctx->pc = 0x27359Cu;
            goto label_27359c;
        }
    }
    ctx->pc = 0x27349Cu;
label_27349c:
    // 0x27349c: 0x8c42f9cc
    ctx->pc = 0x27349cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965708)));
    // 0x2734a0: 0x1040000c
    ctx->pc = 0x2734A0u;
    {
        const bool branch_taken_0x2734a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2734A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2734a0) {
            ctx->pc = 0x2734D4u;
            goto label_2734d4;
        }
    }
    ctx->pc = 0x2734A8u;
    // 0x2734a8: 0x8c42f8fc
    ctx->pc = 0x2734a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x2734ac: 0x28420002
    ctx->pc = 0x2734acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2734b0: 0x14400009
    ctx->pc = 0x2734B0u;
    {
        const bool branch_taken_0x2734b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2734B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2734b0) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734B8u;
    // 0x2734b8: 0x3c020034
    ctx->pc = 0x2734b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2734bc: 0x2442eb40
    ctx->pc = 0x2734bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961984));
    // 0x2734c0: 0x31880
    ctx->pc = 0x2734c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2734c4: 0x621821
    ctx->pc = 0x2734c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2734c8: 0x8c650000
    ctx->pc = 0x2734c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2734cc: 0x10000033
    ctx->pc = 0x2734CCu;
    {
        const bool branch_taken_0x2734cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2734D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2734cc) {
            ctx->pc = 0x27359Cu;
            goto label_27359c;
        }
    }
    ctx->pc = 0x2734D4u;
label_2734d4:
    // 0x2734d4: 0x24050003
    ctx->pc = 0x2734d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_2734d8:
    // 0x2734d8: 0xc099c34
    ctx->pc = 0x2734D8u;
    SET_GPR_U32(ctx, 31, 0x2734E0u);
    ctx->pc = 0x2734DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734E0u; }
    }
    if (ctx->pc != 0x2734E0u) { return; }
    ctx->pc = 0x2734E0u;
    // 0x2734e0: 0x10400037
    ctx->pc = 0x2734E0u;
    {
        const bool branch_taken_0x2734e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2734E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2734e0) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x2734E8u;
    // 0x2734e8: 0x8c430018
    ctx->pc = 0x2734e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2734ec: 0x2402400c
    ctx->pc = 0x2734ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x2734f0: 0x54620003
    ctx->pc = 0x2734F0u;
    {
        const bool branch_taken_0x2734f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2734f0) {
            ctx->pc = 0x2734F4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->pc = 0x273500u;
            goto label_273500;
        }
    }
    ctx->pc = 0x2734F8u;
    // 0x2734f8: 0x10000006
    ctx->pc = 0x2734F8u;
    {
        const bool branch_taken_0x2734f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2734FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2734f8) {
            ctx->pc = 0x273514u;
            goto label_273514;
        }
    }
    ctx->pc = 0x273500u;
label_273500:
    // 0x273500: 0x24020004
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x273504: 0x14620003
    ctx->pc = 0x273504u;
    {
        const bool branch_taken_0x273504 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x273508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x273504) {
            ctx->pc = 0x273514u;
            goto label_273514;
        }
    }
    ctx->pc = 0x27350Cu;
    // 0x27350c: 0x10000002
    ctx->pc = 0x27350Cu;
    {
        const bool branch_taken_0x27350c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273510u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        if (branch_taken_0x27350c) {
            ctx->pc = 0x273518u;
            goto label_273518;
        }
    }
    ctx->pc = 0x273514u;
label_273514:
    // 0x273514: 0xae0200d4
    ctx->pc = 0x273514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_273518:
    // 0x273518: 0xc09aba6
    ctx->pc = 0x273518u;
    SET_GPR_U32(ctx, 31, 0x273520u);
    ctx->pc = 0x27351Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273520u; }
    }
    if (ctx->pc != 0x273520u) { return; }
    ctx->pc = 0x273520u;
    // 0x273520: 0x3c020034
    ctx->pc = 0x273520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273524: 0x2403ffff
    ctx->pc = 0x273524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273528: 0x10000020
    ctx->pc = 0x273528u;
    {
        const bool branch_taken_0x273528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27352Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965552), GPR_U32(ctx, 3));
        if (branch_taken_0x273528) {
            ctx->pc = 0x2735ACu;
            goto label_2735ac;
        }
    }
    ctx->pc = 0x273530u;
label_273530:
    // 0x273530: 0x24050003
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x273534: 0xc099c34
    ctx->pc = 0x273534u;
    SET_GPR_U32(ctx, 31, 0x27353Cu);
    ctx->pc = 0x273538u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27353Cu; }
    }
    if (ctx->pc != 0x27353Cu) { return; }
    ctx->pc = 0x27353Cu;
    // 0x27353c: 0x10400020
    ctx->pc = 0x27353Cu;
    {
        const bool branch_taken_0x27353c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x273540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27353c) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x273544u;
    // 0x273544: 0x8c430018
    ctx->pc = 0x273544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x273548: 0x2402400c
    ctx->pc = 0x273548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x27354c: 0x54620003
    ctx->pc = 0x27354Cu;
    {
        const bool branch_taken_0x27354c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27354c) {
            ctx->pc = 0x273550u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->pc = 0x27355Cu;
            goto label_27355c;
        }
    }
    ctx->pc = 0x273554u;
    // 0x273554: 0x10000006
    ctx->pc = 0x273554u;
    {
        const bool branch_taken_0x273554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x273554) {
            ctx->pc = 0x273570u;
            goto label_273570;
        }
    }
    ctx->pc = 0x27355Cu;
label_27355c:
    // 0x27355c: 0x24020004
    ctx->pc = 0x27355cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x273560: 0x14620003
    ctx->pc = 0x273560u;
    {
        const bool branch_taken_0x273560 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x273564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x273560) {
            ctx->pc = 0x273570u;
            goto label_273570;
        }
    }
    ctx->pc = 0x273568u;
    // 0x273568: 0x10000002
    ctx->pc = 0x273568u;
    {
        const bool branch_taken_0x273568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27356Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        if (branch_taken_0x273568) {
            ctx->pc = 0x273574u;
            goto label_273574;
        }
    }
    ctx->pc = 0x273570u;
label_273570:
    // 0x273570: 0xae0200d4
    ctx->pc = 0x273570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_273574:
    // 0x273574: 0xc09aba6
    ctx->pc = 0x273574u;
    SET_GPR_U32(ctx, 31, 0x27357Cu);
    ctx->pc = 0x273578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27357Cu; }
    }
    if (ctx->pc != 0x27357Cu) { return; }
    ctx->pc = 0x27357Cu;
    // 0x27357c: 0x3c020034
    ctx->pc = 0x27357cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273580: 0x2403ffff
    ctx->pc = 0x273580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273584: 0x10000009
    ctx->pc = 0x273584u;
    {
        const bool branch_taken_0x273584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273588u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965552), GPR_U32(ctx, 3));
        if (branch_taken_0x273584) {
            ctx->pc = 0x2735ACu;
            goto label_2735ac;
        }
    }
    ctx->pc = 0x27358Cu;
label_27358c:
    // 0x27358c: 0x1480000a
    ctx->pc = 0x27358Cu;
    {
        const bool branch_taken_0x27358c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x273590u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27358c) {
            ctx->pc = 0x2735B8u;
            goto label_2735b8;
        }
    }
    ctx->pc = 0x273594u;
    // 0x273594: 0x202d
    ctx->pc = 0x273594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273598: 0x302d
    ctx->pc = 0x273598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27359c:
    // 0x27359c: 0xc099c34
    ctx->pc = 0x27359Cu;
    SET_GPR_U32(ctx, 31, 0x2735A4u);
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735A4u; }
    }
    if (ctx->pc != 0x2735A4u) { return; }
    ctx->pc = 0x2735A4u;
    // 0x2735a4: 0x10400007
    ctx->pc = 0x2735A4u;
    {
        const bool branch_taken_0x2735a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2735A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2735a4) {
            ctx->pc = 0x2735C4u;
            goto label_2735c4;
        }
    }
    ctx->pc = 0x2735ACu;
label_2735ac:
    // 0x2735ac: 0x3c020032
    ctx->pc = 0x2735acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2735b0:
    // 0x2735b0: 0x10000003
    ctx->pc = 0x2735B0u;
    {
        const bool branch_taken_0x2735b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2735B4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
        if (branch_taken_0x2735b0) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0xc099c34
    ctx->pc = 0x2735B8u;
    SET_GPR_U32(ctx, 31, 0x2735C0u);
    ctx->pc = 0x2735BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735C0u; }
    }
    if (ctx->pc != 0x2735C0u) { return; }
    ctx->pc = 0x2735C0u;
label_2735c0:
    // 0x2735c0: 0xdfbf0080
    ctx->pc = 0x2735c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2735c4:
    // 0x2735c4: 0xdfb00070
    ctx->pc = 0x2735c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2735c8:
    // 0x2735c8: 0x3e00008
    ctx->pc = 0x2735C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2735CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273344u: goto label_273344;
            case 0x273368u: goto label_273368;
            case 0x2733A4u: goto label_2733a4;
            case 0x2733BCu: goto label_2733bc;
            case 0x2733F0u: goto label_2733f0;
            case 0x273420u: goto label_273420;
            case 0x273480u: goto label_273480;
            case 0x27349Cu: goto label_27349c;
            case 0x2734D4u: goto label_2734d4;
            case 0x2734D8u: goto label_2734d8;
            case 0x273500u: goto label_273500;
            case 0x273514u: goto label_273514;
            case 0x273518u: goto label_273518;
            case 0x273530u: goto label_273530;
            case 0x27355Cu: goto label_27355c;
            case 0x273570u: goto label_273570;
            case 0x273574u: goto label_273574;
            case 0x27358Cu: goto label_27358c;
            case 0x27359Cu: goto label_27359c;
            case 0x2735ACu: goto label_2735ac;
            case 0x2735B0u: goto label_2735b0;
            case 0x2735B8u: goto label_2735b8;
            case 0x2735C0u: goto label_2735c0;
            case 0x2735C4u: goto label_2735c4;
            case 0x2735C8u: goto label_2735c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2735D0u;
}
