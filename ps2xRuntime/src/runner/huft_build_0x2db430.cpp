#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <iostream>

// Function: huft_build
// Address: 0x2db430 - 0x2dba34
void huft_build_0x2db430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2db430u;

label_2db430:
    // 0x2db430: 0x27bdf9e0
    ctx->pc = 0x2db430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965728));
label_2db434:
    // 0x2db434: 0xffbf0610
    ctx->pc = 0x2db434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 31));
label_2db438:
    // 0x2db438: 0xffbe0600
    ctx->pc = 0x2db438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 30));
label_2db43c:
    // 0x2db43c: 0xffb705f0
    ctx->pc = 0x2db43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 23));
label_2db440:
    // 0x2db440: 0xffb605e0
    ctx->pc = 0x2db440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1504), GPR_U64(ctx, 22));
label_2db444:
    // 0x2db444: 0xffb505d0
    ctx->pc = 0x2db444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 21));
label_2db448:
    // 0x2db448: 0xffb405c0
    ctx->pc = 0x2db448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1472), GPR_U64(ctx, 20));
label_2db44c:
    // 0x2db44c: 0xffb305b0
    ctx->pc = 0x2db44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1456), GPR_U64(ctx, 19));
label_2db450:
    // 0x2db450: 0xffb205a0
    ctx->pc = 0x2db450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 18));
label_2db454:
    // 0x2db454: 0xffb10590
    ctx->pc = 0x2db454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1424), GPR_U64(ctx, 17));
label_2db458:
    // 0x2db458: 0xffb00580
    ctx->pc = 0x2db458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1408), GPR_U64(ctx, 16));
label_2db45c:
    // 0x2db45c: 0xafa50550
    ctx->pc = 0x2db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 5));
label_2db460:
    // 0x2db460: 0xafa60554
    ctx->pc = 0x2db460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1364), GPR_U32(ctx, 6));
label_2db464:
    // 0x2db464: 0xafa70558
    ctx->pc = 0x2db464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1368), GPR_U32(ctx, 7));
label_2db468:
    // 0x2db468: 0xafa8055c
    ctx->pc = 0x2db468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 8));
label_2db46c:
    // 0x2db46c: 0xafa90560
    ctx->pc = 0x2db46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 9));
label_2db470:
    // 0x2db470: 0xafab0564
    ctx->pc = 0x2db470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1380), GPR_U32(ctx, 11));
label_2db474:
    // 0x2db474: 0xafa00000
    ctx->pc = 0x2db474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2db478:
    // 0x2db478: 0xafa00004
    ctx->pc = 0x2db478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2db47c:
    // 0x2db47c: 0xafa00008
    ctx->pc = 0x2db47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2db480:
    // 0x2db480: 0xafa0000c
    ctx->pc = 0x2db480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2db484:
    // 0x2db484: 0xafa00010
    ctx->pc = 0x2db484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2db488:
    // 0x2db488: 0xafa00014
    ctx->pc = 0x2db488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2db48c:
    // 0x2db48c: 0xafa00018
    ctx->pc = 0x2db48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2db490:
    // 0x2db490: 0xafa0001c
    ctx->pc = 0x2db490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2db494:
    // 0x2db494: 0xafa00020
    ctx->pc = 0x2db494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2db498:
    // 0x2db498: 0xafa00024
    ctx->pc = 0x2db498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2db49c:
    // 0x2db49c: 0xafa00028
    ctx->pc = 0x2db49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2db4a0:
    // 0x2db4a0: 0xafa0002c
    ctx->pc = 0x2db4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2db4a4:
    // 0x2db4a4: 0xafa00030
    ctx->pc = 0x2db4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2db4a8:
    // 0x2db4a8: 0xafa00034
    ctx->pc = 0x2db4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2db4ac:
    // 0x2db4ac: 0xafa00038
    ctx->pc = 0x2db4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2db4b0:
    // 0x2db4b0: 0xafa0003c
    ctx->pc = 0x2db4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2db4b4:
    // 0x2db4b4: 0x80982d
    ctx->pc = 0x2db4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db4b8:
    // 0x2db4b8: 0xa0882d
    ctx->pc = 0x2db4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2db4bc:
    // 0x2db4bc: 0x0
    ctx->pc = 0x2db4bcu;
    // NOP
label_2db4c0:
    // 0x2db4c0: 0x8e620000
    ctx->pc = 0x2db4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2db4c4:
    // 0x2db4c4: 0x21080
    ctx->pc = 0x2db4c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2db4c8:
    // 0x2db4c8: 0x3a21821
    ctx->pc = 0x2db4c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db4cc:
    // 0x2db4cc: 0x8c620000
    ctx->pc = 0x2db4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2db4d0:
    // 0x2db4d0: 0x24420001
    ctx->pc = 0x2db4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2db4d4:
    // 0x2db4d4: 0xac620000
    ctx->pc = 0x2db4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2db4d8:
    // 0x2db4d8: 0x2631ffff
    ctx->pc = 0x2db4d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2db4dc:
    // 0x2db4dc: 0x1620fff8
label_2db4e0:
    if (ctx->pc == 0x2DB4E0u) {
        ctx->pc = 0x2DB4E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2DB4E4u;
        goto label_2db4e4;
    }
    ctx->pc = 0x2DB4DCu;
    {
        const bool branch_taken_0x2db4dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB4E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2db4dc) {
            ctx->pc = 0x2DB4C0u;
            goto label_2db4c0;
        }
    }
    ctx->pc = 0x2DB4E4u;
label_2db4e4:
    // 0x2db4e4: 0x8fa20000
    ctx->pc = 0x2db4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2db4e8:
    // 0x2db4e8: 0x8fa30550
    ctx->pc = 0x2db4e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_2db4ec:
    // 0x2db4ec: 0x54430006
label_2db4f0:
    if (ctx->pc == 0x2DB4F0u) {
        ctx->pc = 0x2DB4F0u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->pc = 0x2DB4F4u;
        goto label_2db4f4;
    }
    ctx->pc = 0x2DB4ECu;
    {
        const bool branch_taken_0x2db4ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2db4ec) {
            ctx->pc = 0x2DB4F0u;
            SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->pc = 0x2DB508u;
            goto label_2db508;
        }
    }
    ctx->pc = 0x2DB4F4u;
label_2db4f4:
    // 0x2db4f4: 0x8fa40560
    ctx->pc = 0x2db4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_2db4f8:
    // 0x2db4f8: 0xac800000
    ctx->pc = 0x2db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2db4fc:
    // 0x2db4fc: 0xad400000
    ctx->pc = 0x2db4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_2db500:
    // 0x2db500: 0x10000140
label_2db504:
    if (ctx->pc == 0x2DB504u) {
        ctx->pc = 0x2DB504u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB508u;
        goto label_2db508;
    }
    ctx->pc = 0x2DB500u;
    {
        const bool branch_taken_0x2db500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB504u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db500) {
            ctx->pc = 0x2DBA04u;
            goto label_2dba04;
        }
    }
    ctx->pc = 0x2DB508u;
label_2db508:
    // 0x2db508: 0x8fa20004
    ctx->pc = 0x2db508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2db50c:
    // 0x2db50c: 0x14400009
label_2db510:
    if (ctx->pc == 0x2DB510u) {
        ctx->pc = 0x2DB510u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB514u;
        goto label_2db514;
    }
    ctx->pc = 0x2DB50Cu;
    {
        const bool branch_taken_0x2db50c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB510u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2db50c) {
            ctx->pc = 0x2DB534u;
            goto label_2db534;
        }
    }
    ctx->pc = 0x2DB514u;
label_2db514:
    // 0x2db514: 0x26100001
    ctx->pc = 0x2db514u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2db518:
    // 0x2db518: 0x2e020010
    ctx->pc = 0x2db518u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 16));
label_2db51c:
    // 0x2db51c: 0x10400005
label_2db520:
    if (ctx->pc == 0x2DB520u) {
        ctx->pc = 0x2DB520u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2DB524u;
        goto label_2db524;
    }
    ctx->pc = 0x2DB51Cu;
    {
        const bool branch_taken_0x2db51c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB520u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2db51c) {
            ctx->pc = 0x2DB534u;
            goto label_2db534;
        }
    }
    ctx->pc = 0x2DB524u;
label_2db524:
    // 0x2db524: 0x3a21021
    ctx->pc = 0x2db524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db528:
    // 0x2db528: 0x8c420000
    ctx->pc = 0x2db528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db52c:
    // 0x2db52c: 0x5040fffa
label_2db530:
    if (ctx->pc == 0x2DB530u) {
        ctx->pc = 0x2DB530u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2DB534u;
        goto label_2db534;
    }
    ctx->pc = 0x2DB52Cu;
    {
        const bool branch_taken_0x2db52c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2db52c) {
            ctx->pc = 0x2DB530u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2DB518u;
            goto label_2db518;
        }
    }
    ctx->pc = 0x2DB534u;
label_2db534:
    // 0x2db534: 0x200a02d
    ctx->pc = 0x2db534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db538:
    // 0x2db538: 0x2b4102b
    ctx->pc = 0x2db538u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_2db53c:
    // 0x2db53c: 0x282a80b
    ctx->pc = 0x2db53cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 20));
label_2db540:
    // 0x2db540: 0x8fa2003c
    ctx->pc = 0x2db540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2db544:
    // 0x2db544: 0x14400008
label_2db548:
    if (ctx->pc == 0x2DB548u) {
        ctx->pc = 0x2DB548u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2DB54Cu;
        goto label_2db54c;
    }
    ctx->pc = 0x2DB544u;
    {
        const bool branch_taken_0x2db544 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB548u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2db544) {
            ctx->pc = 0x2DB568u;
            goto label_2db568;
        }
    }
    ctx->pc = 0x2DB54Cu;
label_2db54c:
    // 0x2db54c: 0x2631ffff
    ctx->pc = 0x2db54cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2db550:
    // 0x2db550: 0x12200005
label_2db554:
    if (ctx->pc == 0x2DB554u) {
        ctx->pc = 0x2DB554u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2DB558u;
        goto label_2db558;
    }
    ctx->pc = 0x2DB550u;
    {
        const bool branch_taken_0x2db550 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB554u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2db550) {
            ctx->pc = 0x2DB568u;
            goto label_2db568;
        }
    }
    ctx->pc = 0x2DB558u;
label_2db558:
    // 0x2db558: 0x3a21021
    ctx->pc = 0x2db558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db55c:
    // 0x2db55c: 0x8c420000
    ctx->pc = 0x2db55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db560:
    // 0x2db560: 0x5040fffb
label_2db564:
    if (ctx->pc == 0x2DB564u) {
        ctx->pc = 0x2DB564u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x2DB568u;
        goto label_2db568;
    }
    ctx->pc = 0x2DB560u;
    {
        const bool branch_taken_0x2db560 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2db560) {
            ctx->pc = 0x2DB564u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x2DB550u;
            goto label_2db550;
        }
    }
    ctx->pc = 0x2DB568u;
label_2db568:
    // 0x2db568: 0xafb10568
    ctx->pc = 0x2db568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1384), GPR_U32(ctx, 17));
label_2db56c:
    // 0x2db56c: 0x235102b
    ctx->pc = 0x2db56cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2db570:
    // 0x2db570: 0x222a80b
    ctx->pc = 0x2db570u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 17));
label_2db574:
    // 0x2db574: 0xad550000
    ctx->pc = 0x2db574u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 21));
label_2db578:
    // 0x2db578: 0x24020001
    ctx->pc = 0x2db578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2db57c:
    // 0x2db57c: 0x2021004
    ctx->pc = 0x2db57cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_2db580:
    // 0x2db580: 0xafa2056c
    ctx->pc = 0x2db580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 2));
label_2db584:
    // 0x2db584: 0x8fa50568
    ctx->pc = 0x2db584u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2db588:
    // 0x2db588: 0x205102b
    ctx->pc = 0x2db588u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2db58c:
    // 0x2db58c: 0x1040000f
label_2db590:
    if (ctx->pc == 0x2DB590u) {
        ctx->pc = 0x2DB590u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2DB594u;
        goto label_2db594;
    }
    ctx->pc = 0x2DB58Cu;
    {
        const bool branch_taken_0x2db58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB590u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2db58c) {
            ctx->pc = 0x2DB5CCu;
            goto label_2db5cc;
        }
    }
    ctx->pc = 0x2DB594u;
label_2db594:
    // 0x2db594: 0x0
    ctx->pc = 0x2db594u;
    // NOP
label_2db598:
    // 0x2db598: 0x101080
    ctx->pc = 0x2db598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2db59c:
    // 0x2db59c: 0x3a21021
    ctx->pc = 0x2db59cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db5a0:
    // 0x2db5a0: 0x8c420000
    ctx->pc = 0x2db5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db5a4:
    // 0x2db5a4: 0x8fa7056c
    ctx->pc = 0x2db5a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_2db5a8:
    // 0x2db5a8: 0xe23823
    ctx->pc = 0x2db5a8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2db5ac:
    // 0x2db5ac: 0x4e0000d
label_2db5b0:
    if (ctx->pc == 0x2DB5B0u) {
        ctx->pc = 0x2DB5B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 7));
        ctx->pc = 0x2DB5B4u;
        goto label_2db5b4;
    }
    ctx->pc = 0x2DB5ACu;
    {
        const bool branch_taken_0x2db5ac = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2DB5B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 7));
        if (branch_taken_0x2db5ac) {
            ctx->pc = 0x2DB5E4u;
            goto label_2db5e4;
        }
    }
    ctx->pc = 0x2DB5B4u;
label_2db5b4:
    // 0x2db5b4: 0x26100001
    ctx->pc = 0x2db5b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2db5b8:
    // 0x2db5b8: 0x73840
    ctx->pc = 0x2db5b8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
label_2db5bc:
    // 0x2db5bc: 0x211102b
    ctx->pc = 0x2db5bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2db5c0:
    // 0x2db5c0: 0x1440fff5
label_2db5c4:
    if (ctx->pc == 0x2DB5C4u) {
        ctx->pc = 0x2DB5C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 7));
        ctx->pc = 0x2DB5C8u;
        goto label_2db5c8;
    }
    ctx->pc = 0x2DB5C0u;
    {
        const bool branch_taken_0x2db5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB5C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 7));
        if (branch_taken_0x2db5c0) {
            ctx->pc = 0x2DB598u;
            goto label_2db598;
        }
    }
    ctx->pc = 0x2DB5C8u;
label_2db5c8:
    // 0x2db5c8: 0x111080
    ctx->pc = 0x2db5c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2db5cc:
    // 0x2db5cc: 0x3a21021
    ctx->pc = 0x2db5ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db5d0:
    // 0x2db5d0: 0x8c420000
    ctx->pc = 0x2db5d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db5d4:
    // 0x2db5d4: 0x8fa8056c
    ctx->pc = 0x2db5d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_2db5d8:
    // 0x2db5d8: 0x1024023
    ctx->pc = 0x2db5d8u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_2db5dc:
    // 0x2db5dc: 0x5010003
label_2db5e0:
    if (ctx->pc == 0x2DB5E0u) {
        ctx->pc = 0x2DB5E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 8));
        ctx->pc = 0x2DB5E4u;
        goto label_2db5e4;
    }
    ctx->pc = 0x2DB5DCu;
    {
        const bool branch_taken_0x2db5dc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2DB5E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1388), GPR_U32(ctx, 8));
        if (branch_taken_0x2db5dc) {
            ctx->pc = 0x2DB5ECu;
            goto label_2db5ec;
        }
    }
    ctx->pc = 0x2DB5E4u;
label_2db5e4:
    // 0x2db5e4: Z_DATA_ERROR path (oversubscribed). Log once to debug wrong code-length counts.
    {
        static int log_count = 0;
        if (log_count++ < 3) {
            std::cerr << "[huft_build] -3 oversubscribed: reg7=" << (int32_t)GPR_S32(ctx, 7)
                      << " reg8=" << (int32_t)GPR_S32(ctx, 8)
                      << " subtracted(v0)=" << (int32_t)GPR_S32(ctx, 2)
                      << " s0(min)=" << (int)GPR_U32(ctx, 16)
                      << " s1(max)=" << (int)GPR_U32(ctx, 17) << "\n";
        }
    }
    // 0x2db5e4: 0x10000107
label_2db5e8:
    if (ctx->pc == 0x2DB5E8u) {
        ctx->pc = 0x2DB5E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2DB5ECu;
        goto label_2db5ec;
    }
    ctx->pc = 0x2DB5E4u;
    {
        const bool branch_taken_0x2db5e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB5E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2db5e4) {
            ctx->pc = 0x2DBA04u;
            goto label_2dba04;
        }
    }
    ctx->pc = 0x2DB5ECu;
label_2db5ec:
    // 0x2db5ec: 0x111080
    ctx->pc = 0x2db5ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2db5f0:
    // 0x2db5f0: 0x3a21821
    ctx->pc = 0x2db5f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db5f4:
    // 0x2db5f4: 0x8c620000
    ctx->pc = 0x2db5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2db5f8:
    // 0x2db5f8: 0x8fa5056c
    ctx->pc = 0x2db5f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_2db5fc:
    // 0x2db5fc: 0xa21021
    ctx->pc = 0x2db5fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2db600:
    // 0x2db600: 0xac620000
    ctx->pc = 0x2db600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2db604:
    // 0x2db604: 0x802d
    ctx->pc = 0x2db604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db608:
    // 0x2db608: 0xafa00514
    ctx->pc = 0x2db608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 0));
label_2db60c:
    // 0x2db60c: 0x27b30004
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 4));
label_2db610:
    // 0x2db610: 0x2631ffff
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2db614:
    // 0x2db614: 0x1220000a
label_2db618:
    if (ctx->pc == 0x2DB618u) {
        ctx->pc = 0x2DB618u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1304));
        ctx->pc = 0x2DB61Cu;
        goto label_2db61c;
    }
    ctx->pc = 0x2DB614u;
    {
        const bool branch_taken_0x2db614 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB618u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1304));
        if (branch_taken_0x2db614) {
            ctx->pc = 0x2DB640u;
            goto label_2db640;
        }
    }
    ctx->pc = 0x2DB61Cu;
label_2db61c:
    // 0x2db61c: 0x0
    ctx->pc = 0x2db61cu;
    // NOP
label_2db620:
    // 0x2db620: 0x8e620000
    ctx->pc = 0x2db620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2db624:
    // 0x2db624: 0x2028021
    ctx->pc = 0x2db624u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2db628:
    // 0x2db628: 0xacb00000
    ctx->pc = 0x2db628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_2db62c:
    // 0x2db62c: 0x26730004
    ctx->pc = 0x2db62cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_2db630:
    // 0x2db630: 0x24a50004
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_2db634:
    // 0x2db634: 0x2631ffff
    ctx->pc = 0x2db634u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2db638:
    // 0x2db638: 0x1620fff9
label_2db63c:
    if (ctx->pc == 0x2DB63Cu) {
        ctx->pc = 0x2DB640u;
        goto label_2db640;
    }
    ctx->pc = 0x2DB638u;
    {
        const bool branch_taken_0x2db638 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db638) {
            ctx->pc = 0x2DB620u;
            goto label_2db620;
        }
    }
    ctx->pc = 0x2DB640u;
label_2db640:
    // 0x2db640: 0x80982d
    ctx->pc = 0x2db640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db644:
    // 0x2db644: 0x882d
    ctx->pc = 0x2db644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db648:
    // 0x2db648: 0x27a60510
    ctx->pc = 0x2db648u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1296));
label_2db64c:
    // 0x2db64c: 0x27a50090
    ctx->pc = 0x2db64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
label_2db650:
    // 0x2db650: 0x8e700000
    ctx->pc = 0x2db650u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2db654:
    // 0x2db654: 0x0
    ctx->pc = 0x2db654u;
    // NOP
label_2db658:
    // 0x2db658: 0x12000009
label_2db65c:
    if (ctx->pc == 0x2DB65Cu) {
        ctx->pc = 0x2DB65Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2DB660u;
        goto label_2db660;
    }
    ctx->pc = 0x2DB658u;
    {
        const bool branch_taken_0x2db658 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB65Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2db658) {
            ctx->pc = 0x2DB680u;
            goto label_2db680;
        }
    }
    ctx->pc = 0x2DB660u;
label_2db660:
    // 0x2db660: 0x102080
    ctx->pc = 0x2db660u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
label_2db664:
    // 0x2db664: 0xc42021
    ctx->pc = 0x2db664u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2db668:
    // 0x2db668: 0x8c830000
    ctx->pc = 0x2db668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2db66c:
    // 0x2db66c: 0x31080
    ctx->pc = 0x2db66cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2db670:
    // 0x2db670: 0xa21021
    ctx->pc = 0x2db670u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2db674:
    // 0x2db674: 0xac510000
    ctx->pc = 0x2db674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_2db678:
    // 0x2db678: 0x24630001
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2db67c:
    // 0x2db67c: 0xac830000
    ctx->pc = 0x2db67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2db680:
    // 0x2db680: 0x26310001
    ctx->pc = 0x2db680u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2db684:
    // 0x2db684: 0x8fa70550
    ctx->pc = 0x2db684u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_2db688:
    // 0x2db688: 0x227102b
    ctx->pc = 0x2db688u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_2db68c:
    // 0x2db68c: 0x5440fff2
label_2db690:
    if (ctx->pc == 0x2DB690u) {
        ctx->pc = 0x2DB690u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2DB694u;
        goto label_2db694;
    }
    ctx->pc = 0x2DB68Cu;
    {
        const bool branch_taken_0x2db68c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db68c) {
            ctx->pc = 0x2DB690u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x2DB658u;
            goto label_2db658;
        }
    }
    ctx->pc = 0x2DB694u;
label_2db694:
    // 0x2db694: 0x882d
    ctx->pc = 0x2db694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db698:
    // 0x2db698: 0xafa00510
    ctx->pc = 0x2db698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 0));
label_2db69c:
    // 0x2db69c: 0x27b30090
    ctx->pc = 0x2db69cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 144));
label_2db6a0:
    // 0x2db6a0: 0x241effff
    ctx->pc = 0x2db6a0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2db6a4:
    // 0x2db6a4: 0x159023
    ctx->pc = 0x2db6a4u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_2db6a8:
    // 0x2db6a8: 0xafa00050
    ctx->pc = 0x2db6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2db6ac:
    // 0x2db6ac: 0x302d
    ctx->pc = 0x2db6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db6b0:
    // 0x2db6b0: 0x8fa80568
    ctx->pc = 0x2db6b0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2db6b4:
    // 0x2db6b4: 0x114102a
    ctx->pc = 0x2db6b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 20)));
label_2db6b8:
    // 0x2db6b8: 0x144000ca
label_2db6bc:
    if (ctx->pc == 0x2DB6BCu) {
        ctx->pc = 0x2DB6BCu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6C0u;
        goto label_2db6c0;
    }
    ctx->pc = 0x2DB6B8u;
    {
        const bool branch_taken_0x2db6b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB6BCu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db6b8) {
            ctx->pc = 0x2DB9E4u;
            goto label_2db9e4;
        }
    }
    ctx->pc = 0x2DB6C0u;
label_2db6c0:
    // 0x2db6c0: 0x141080
    ctx->pc = 0x2db6c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_2db6c4:
    // 0x2db6c4: 0x0
    ctx->pc = 0x2db6c4u;
    // NOP
label_2db6c8:
    // 0x2db6c8: 0x3a21021
    ctx->pc = 0x2db6c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db6cc:
    // 0x2db6cc: 0x8c570000
    ctx->pc = 0x2db6ccu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db6d0:
    // 0x2db6d0: 0x26f7ffff
    ctx->pc = 0x2db6d0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
label_2db6d4:
    // 0x2db6d4: 0x3c02ffff
    ctx->pc = 0x2db6d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2db6d8:
    // 0x2db6d8: 0x3442ffff
    ctx->pc = 0x2db6d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2db6dc:
    // 0x2db6dc: 0x12e200bc
label_2db6e0:
    if (ctx->pc == 0x2DB6E0u) {
        ctx->pc = 0x2DB6E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 1296));
        ctx->pc = 0x2DB6E4u;
        goto label_2db6e4;
    }
    ctx->pc = 0x2DB6DCu;
    {
        const bool branch_taken_0x2db6dc = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DB6E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 1296));
        if (branch_taken_0x2db6dc) {
            ctx->pc = 0x2DB9D0u;
            goto label_2db9d0;
        }
    }
    ctx->pc = 0x2DB6E4u;
label_2db6e4:
    // 0x2db6e4: 0xafa30570
    ctx->pc = 0x2db6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 3));
label_2db6e8:
    // 0x2db6e8: 0x27a30090
    ctx->pc = 0x2db6e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 144));
label_2db6ec:
    // 0x2db6ec: 0x8fa40550
    ctx->pc = 0x2db6ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_2db6f0:
    // 0x2db6f0: 0x41080
    ctx->pc = 0x2db6f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2db6f4:
    // 0x2db6f4: 0x621821
    ctx->pc = 0x2db6f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2db6f8:
    // 0x2db6f8: 0xafa30574
    ctx->pc = 0x2db6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1396), GPR_U32(ctx, 3));
label_2db6fc:
    // 0x2db6fc: 0x2551021
    ctx->pc = 0x2db6fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2db700:
    // 0x2db700: 0x40182d
    ctx->pc = 0x2db700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db704:
    // 0x2db704: 0x54102a
    ctx->pc = 0x2db704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_2db708:
    // 0x2db708: 0x10400054
label_2db70c:
    if (ctx->pc == 0x2DB70Cu) {
        ctx->pc = 0x2DB70Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x2DB710u;
        goto label_2db710;
    }
    ctx->pc = 0x2DB708u;
    {
        const bool branch_taken_0x2db708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB70Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x2db708) {
            ctx->pc = 0x2DB85Cu;
            goto label_2db85c;
        }
    }
    ctx->pc = 0x2DB710u;
label_2db710:
    // 0x2db710: 0x60902d
    ctx->pc = 0x2db710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2db714:
    // 0x2db714: 0x0
    ctx->pc = 0x2db714u;
    // NOP
label_2db718:
    // 0x2db718: 0x8fa50568
    ctx->pc = 0x2db718u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2db71c:
    // 0x2db71c: 0xb2b023
    ctx->pc = 0x2db71cu;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2db720:
    // 0x2db720: 0x2b6102b
    ctx->pc = 0x2db720u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_2db724:
    // 0x2db724: 0x2a2b00b
    ctx->pc = 0x2db724u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 21));
label_2db728:
    // 0x2db728: 0x2928023
    ctx->pc = 0x2db728u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2db72c:
    // 0x2db72c: 0x24070001
    ctx->pc = 0x2db72cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2db730:
    // 0x2db730: 0x2071804
    ctx->pc = 0x2db730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
label_2db734:
    // 0x2db734: 0x26e20001
    ctx->pc = 0x2db734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 1));
label_2db738:
    // 0x2db738: 0x43102b
    ctx->pc = 0x2db738u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2db73c:
    // 0x2db73c: 0x10400014
label_2db740:
    if (ctx->pc == 0x2DB740u) {
        ctx->pc = 0x2DB740u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2DB744u;
        goto label_2db744;
    }
    ctx->pc = 0x2DB73Cu;
    {
        const bool branch_taken_0x2db73c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB740u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x2db73c) {
            ctx->pc = 0x2DB790u;
            goto label_2db790;
        }
    }
    ctx->pc = 0x2DB744u;
label_2db744:
    // 0x2db744: 0x2462ffff
    ctx->pc = 0x2db744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2db748:
    // 0x2db748: 0x571823
    ctx->pc = 0x2db748u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2db74c:
    // 0x2db74c: 0x141080
    ctx->pc = 0x2db74cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_2db750:
    // 0x2db750: 0x3a22821
    ctx->pc = 0x2db750u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2db754:
    // 0x2db754: 0x216102b
    ctx->pc = 0x2db754u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2db758:
    // 0x2db758: 0x1040000e
label_2db75c:
    if (ctx->pc == 0x2DB75Cu) {
        ctx->pc = 0x2DB75Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB760u;
        goto label_2db760;
    }
    ctx->pc = 0x2DB758u;
    {
        const bool branch_taken_0x2db758 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB75Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2db758) {
            ctx->pc = 0x2DB794u;
            goto label_2db794;
        }
    }
    ctx->pc = 0x2DB760u;
label_2db760:
    // 0x2db760: 0x10000003
label_2db764:
    if (ctx->pc == 0x2DB764u) {
        ctx->pc = 0x2DB764u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2DB768u;
        goto label_2db768;
    }
    ctx->pc = 0x2DB760u;
    {
        const bool branch_taken_0x2db760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB764u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2db760) {
            ctx->pc = 0x2DB770u;
            goto label_2db770;
        }
    }
    ctx->pc = 0x2DB768u;
label_2db768:
    // 0x2db768: 0x621823
    ctx->pc = 0x2db768u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2db76c:
    // 0x2db76c: 0x26100001
    ctx->pc = 0x2db76cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2db770:
    // 0x2db770: 0x216102b
    ctx->pc = 0x2db770u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2db774:
    // 0x2db774: 0x10400006
label_2db778:
    if (ctx->pc == 0x2DB778u) {
        ctx->pc = 0x2DB778u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2DB77Cu;
        goto label_2db77c;
    }
    ctx->pc = 0x2DB774u;
    {
        const bool branch_taken_0x2db774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB778u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2db774) {
            ctx->pc = 0x2DB790u;
            goto label_2db790;
        }
    }
    ctx->pc = 0x2DB77Cu;
label_2db77c:
    // 0x2db77c: 0x24a50004
    ctx->pc = 0x2db77cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_2db780:
    // 0x2db780: 0x8ca20000
    ctx->pc = 0x2db780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2db784:
    // 0x2db784: 0x43102b
    ctx->pc = 0x2db784u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2db788:
    // 0x2db788: 0x5440fff7
label_2db78c:
    if (ctx->pc == 0x2DB78Cu) {
        ctx->pc = 0x2DB78Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2DB790u;
        goto label_2db790;
    }
    ctx->pc = 0x2DB788u;
    {
        const bool branch_taken_0x2db788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db788) {
            ctx->pc = 0x2DB78Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2DB768u;
            goto label_2db768;
        }
    }
    ctx->pc = 0x2DB790u;
label_2db790:
    // 0x2db790: 0x24080001
    ctx->pc = 0x2db790u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_2db794:
    // 0x2db794: 0x208b004
    ctx->pc = 0x2db794u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 16) & 0x1F));
label_2db798:
    // 0x2db798: 0x8fa30564
    ctx->pc = 0x2db798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1380)));
label_2db79c:
    // 0x2db79c: 0x8c620020
    ctx->pc = 0x2db79cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2db7a0:
    // 0x2db7a0: 0x8c640028
    ctx->pc = 0x2db7a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2db7a4:
    // 0x2db7a4: 0x26c50001
    ctx->pc = 0x2db7a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 1));
label_2db7a8:
    // 0x2db7a8: 0x40f809
label_2db7ac:
    if (ctx->pc == 0x2DB7ACu) {
        ctx->pc = 0x2DB7ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2DB7B0u;
        goto label_2db7b0;
    }
    ctx->pc = 0x2DB7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB7B0u);
        ctx->pc = 0x2DB7ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DB430u: goto label_2db430;
            case 0x2DB434u: goto label_2db434;
            case 0x2DB438u: goto label_2db438;
            case 0x2DB43Cu: goto label_2db43c;
            case 0x2DB440u: goto label_2db440;
            case 0x2DB444u: goto label_2db444;
            case 0x2DB448u: goto label_2db448;
            case 0x2DB44Cu: goto label_2db44c;
            case 0x2DB450u: goto label_2db450;
            case 0x2DB454u: goto label_2db454;
            case 0x2DB458u: goto label_2db458;
            case 0x2DB45Cu: goto label_2db45c;
            case 0x2DB460u: goto label_2db460;
            case 0x2DB464u: goto label_2db464;
            case 0x2DB468u: goto label_2db468;
            case 0x2DB46Cu: goto label_2db46c;
            case 0x2DB470u: goto label_2db470;
            case 0x2DB474u: goto label_2db474;
            case 0x2DB478u: goto label_2db478;
            case 0x2DB47Cu: goto label_2db47c;
            case 0x2DB480u: goto label_2db480;
            case 0x2DB484u: goto label_2db484;
            case 0x2DB488u: goto label_2db488;
            case 0x2DB48Cu: goto label_2db48c;
            case 0x2DB490u: goto label_2db490;
            case 0x2DB494u: goto label_2db494;
            case 0x2DB498u: goto label_2db498;
            case 0x2DB49Cu: goto label_2db49c;
            case 0x2DB4A0u: goto label_2db4a0;
            case 0x2DB4A4u: goto label_2db4a4;
            case 0x2DB4A8u: goto label_2db4a8;
            case 0x2DB4ACu: goto label_2db4ac;
            case 0x2DB4B0u: goto label_2db4b0;
            case 0x2DB4B4u: goto label_2db4b4;
            case 0x2DB4B8u: goto label_2db4b8;
            case 0x2DB4BCu: goto label_2db4bc;
            case 0x2DB4C0u: goto label_2db4c0;
            case 0x2DB4C4u: goto label_2db4c4;
            case 0x2DB4C8u: goto label_2db4c8;
            case 0x2DB4CCu: goto label_2db4cc;
            case 0x2DB4D0u: goto label_2db4d0;
            case 0x2DB4D4u: goto label_2db4d4;
            case 0x2DB4D8u: goto label_2db4d8;
            case 0x2DB4DCu: goto label_2db4dc;
            case 0x2DB4E0u: goto label_2db4e0;
            case 0x2DB4E4u: goto label_2db4e4;
            case 0x2DB4E8u: goto label_2db4e8;
            case 0x2DB4ECu: goto label_2db4ec;
            case 0x2DB4F0u: goto label_2db4f0;
            case 0x2DB4F4u: goto label_2db4f4;
            case 0x2DB4F8u: goto label_2db4f8;
            case 0x2DB4FCu: goto label_2db4fc;
            case 0x2DB500u: goto label_2db500;
            case 0x2DB504u: goto label_2db504;
            case 0x2DB508u: goto label_2db508;
            case 0x2DB50Cu: goto label_2db50c;
            case 0x2DB510u: goto label_2db510;
            case 0x2DB514u: goto label_2db514;
            case 0x2DB518u: goto label_2db518;
            case 0x2DB51Cu: goto label_2db51c;
            case 0x2DB520u: goto label_2db520;
            case 0x2DB524u: goto label_2db524;
            case 0x2DB528u: goto label_2db528;
            case 0x2DB52Cu: goto label_2db52c;
            case 0x2DB530u: goto label_2db530;
            case 0x2DB534u: goto label_2db534;
            case 0x2DB538u: goto label_2db538;
            case 0x2DB53Cu: goto label_2db53c;
            case 0x2DB540u: goto label_2db540;
            case 0x2DB544u: goto label_2db544;
            case 0x2DB548u: goto label_2db548;
            case 0x2DB54Cu: goto label_2db54c;
            case 0x2DB550u: goto label_2db550;
            case 0x2DB554u: goto label_2db554;
            case 0x2DB558u: goto label_2db558;
            case 0x2DB55Cu: goto label_2db55c;
            case 0x2DB560u: goto label_2db560;
            case 0x2DB564u: goto label_2db564;
            case 0x2DB568u: goto label_2db568;
            case 0x2DB56Cu: goto label_2db56c;
            case 0x2DB570u: goto label_2db570;
            case 0x2DB574u: goto label_2db574;
            case 0x2DB578u: goto label_2db578;
            case 0x2DB57Cu: goto label_2db57c;
            case 0x2DB580u: goto label_2db580;
            case 0x2DB584u: goto label_2db584;
            case 0x2DB588u: goto label_2db588;
            case 0x2DB58Cu: goto label_2db58c;
            case 0x2DB590u: goto label_2db590;
            case 0x2DB594u: goto label_2db594;
            case 0x2DB598u: goto label_2db598;
            case 0x2DB59Cu: goto label_2db59c;
            case 0x2DB5A0u: goto label_2db5a0;
            case 0x2DB5A4u: goto label_2db5a4;
            case 0x2DB5A8u: goto label_2db5a8;
            case 0x2DB5ACu: goto label_2db5ac;
            case 0x2DB5B0u: goto label_2db5b0;
            case 0x2DB5B4u: goto label_2db5b4;
            case 0x2DB5B8u: goto label_2db5b8;
            case 0x2DB5BCu: goto label_2db5bc;
            case 0x2DB5C0u: goto label_2db5c0;
            case 0x2DB5C4u: goto label_2db5c4;
            case 0x2DB5C8u: goto label_2db5c8;
            case 0x2DB5CCu: goto label_2db5cc;
            case 0x2DB5D0u: goto label_2db5d0;
            case 0x2DB5D4u: goto label_2db5d4;
            case 0x2DB5D8u: goto label_2db5d8;
            case 0x2DB5DCu: goto label_2db5dc;
            case 0x2DB5E0u: goto label_2db5e0;
            case 0x2DB5E4u: goto label_2db5e4;
            case 0x2DB5E8u: goto label_2db5e8;
            case 0x2DB5ECu: goto label_2db5ec;
            case 0x2DB5F0u: goto label_2db5f0;
            case 0x2DB5F4u: goto label_2db5f4;
            case 0x2DB5F8u: goto label_2db5f8;
            case 0x2DB5FCu: goto label_2db5fc;
            case 0x2DB600u: goto label_2db600;
            case 0x2DB604u: goto label_2db604;
            case 0x2DB608u: goto label_2db608;
            case 0x2DB60Cu: goto label_2db60c;
            case 0x2DB610u: goto label_2db610;
            case 0x2DB614u: goto label_2db614;
            case 0x2DB618u: goto label_2db618;
            case 0x2DB61Cu: goto label_2db61c;
            case 0x2DB620u: goto label_2db620;
            case 0x2DB624u: goto label_2db624;
            case 0x2DB628u: goto label_2db628;
            case 0x2DB62Cu: goto label_2db62c;
            case 0x2DB630u: goto label_2db630;
            case 0x2DB634u: goto label_2db634;
            case 0x2DB638u: goto label_2db638;
            case 0x2DB63Cu: goto label_2db63c;
            case 0x2DB640u: goto label_2db640;
            case 0x2DB644u: goto label_2db644;
            case 0x2DB648u: goto label_2db648;
            case 0x2DB64Cu: goto label_2db64c;
            case 0x2DB650u: goto label_2db650;
            case 0x2DB654u: goto label_2db654;
            case 0x2DB658u: goto label_2db658;
            case 0x2DB65Cu: goto label_2db65c;
            case 0x2DB660u: goto label_2db660;
            case 0x2DB664u: goto label_2db664;
            case 0x2DB668u: goto label_2db668;
            case 0x2DB66Cu: goto label_2db66c;
            case 0x2DB670u: goto label_2db670;
            case 0x2DB674u: goto label_2db674;
            case 0x2DB678u: goto label_2db678;
            case 0x2DB67Cu: goto label_2db67c;
            case 0x2DB680u: goto label_2db680;
            case 0x2DB684u: goto label_2db684;
            case 0x2DB688u: goto label_2db688;
            case 0x2DB68Cu: goto label_2db68c;
            case 0x2DB690u: goto label_2db690;
            case 0x2DB694u: goto label_2db694;
            case 0x2DB698u: goto label_2db698;
            case 0x2DB69Cu: goto label_2db69c;
            case 0x2DB6A0u: goto label_2db6a0;
            case 0x2DB6A4u: goto label_2db6a4;
            case 0x2DB6A8u: goto label_2db6a8;
            case 0x2DB6ACu: goto label_2db6ac;
            case 0x2DB6B0u: goto label_2db6b0;
            case 0x2DB6B4u: goto label_2db6b4;
            case 0x2DB6B8u: goto label_2db6b8;
            case 0x2DB6BCu: goto label_2db6bc;
            case 0x2DB6C0u: goto label_2db6c0;
            case 0x2DB6C4u: goto label_2db6c4;
            case 0x2DB6C8u: goto label_2db6c8;
            case 0x2DB6CCu: goto label_2db6cc;
            case 0x2DB6D0u: goto label_2db6d0;
            case 0x2DB6D4u: goto label_2db6d4;
            case 0x2DB6D8u: goto label_2db6d8;
            case 0x2DB6DCu: goto label_2db6dc;
            case 0x2DB6E0u: goto label_2db6e0;
            case 0x2DB6E4u: goto label_2db6e4;
            case 0x2DB6E8u: goto label_2db6e8;
            case 0x2DB6ECu: goto label_2db6ec;
            case 0x2DB6F0u: goto label_2db6f0;
            case 0x2DB6F4u: goto label_2db6f4;
            case 0x2DB6F8u: goto label_2db6f8;
            case 0x2DB6FCu: goto label_2db6fc;
            case 0x2DB700u: goto label_2db700;
            case 0x2DB704u: goto label_2db704;
            case 0x2DB708u: goto label_2db708;
            case 0x2DB70Cu: goto label_2db70c;
            case 0x2DB710u: goto label_2db710;
            case 0x2DB714u: goto label_2db714;
            case 0x2DB718u: goto label_2db718;
            case 0x2DB71Cu: goto label_2db71c;
            case 0x2DB720u: goto label_2db720;
            case 0x2DB724u: goto label_2db724;
            case 0x2DB728u: goto label_2db728;
            case 0x2DB72Cu: goto label_2db72c;
            case 0x2DB730u: goto label_2db730;
            case 0x2DB734u: goto label_2db734;
            case 0x2DB738u: goto label_2db738;
            case 0x2DB73Cu: goto label_2db73c;
            case 0x2DB740u: goto label_2db740;
            case 0x2DB744u: goto label_2db744;
            case 0x2DB748u: goto label_2db748;
            case 0x2DB74Cu: goto label_2db74c;
            case 0x2DB750u: goto label_2db750;
            case 0x2DB754u: goto label_2db754;
            case 0x2DB758u: goto label_2db758;
            case 0x2DB75Cu: goto label_2db75c;
            case 0x2DB760u: goto label_2db760;
            case 0x2DB764u: goto label_2db764;
            case 0x2DB768u: goto label_2db768;
            case 0x2DB76Cu: goto label_2db76c;
            case 0x2DB770u: goto label_2db770;
            case 0x2DB774u: goto label_2db774;
            case 0x2DB778u: goto label_2db778;
            case 0x2DB77Cu: goto label_2db77c;
            case 0x2DB780u: goto label_2db780;
            case 0x2DB784u: goto label_2db784;
            case 0x2DB788u: goto label_2db788;
            case 0x2DB78Cu: goto label_2db78c;
            case 0x2DB790u: goto label_2db790;
            case 0x2DB794u: goto label_2db794;
            case 0x2DB798u: goto label_2db798;
            case 0x2DB79Cu: goto label_2db79c;
            case 0x2DB7A0u: goto label_2db7a0;
            case 0x2DB7A4u: goto label_2db7a4;
            case 0x2DB7A8u: goto label_2db7a8;
            case 0x2DB7ACu: goto label_2db7ac;
            case 0x2DB7B0u: goto label_2db7b0;
            case 0x2DB7B4u: goto label_2db7b4;
            case 0x2DB7B8u: goto label_2db7b8;
            case 0x2DB7BCu: goto label_2db7bc;
            case 0x2DB7C0u: goto label_2db7c0;
            case 0x2DB7C4u: goto label_2db7c4;
            case 0x2DB7C8u: goto label_2db7c8;
            case 0x2DB7CCu: goto label_2db7cc;
            case 0x2DB7D0u: goto label_2db7d0;
            case 0x2DB7D4u: goto label_2db7d4;
            case 0x2DB7D8u: goto label_2db7d8;
            case 0x2DB7DCu: goto label_2db7dc;
            case 0x2DB7E0u: goto label_2db7e0;
            case 0x2DB7E4u: goto label_2db7e4;
            case 0x2DB7E8u: goto label_2db7e8;
            case 0x2DB7ECu: goto label_2db7ec;
            case 0x2DB7F0u: goto label_2db7f0;
            case 0x2DB7F4u: goto label_2db7f4;
            case 0x2DB7F8u: goto label_2db7f8;
            case 0x2DB7FCu: goto label_2db7fc;
            case 0x2DB800u: goto label_2db800;
            case 0x2DB804u: goto label_2db804;
            case 0x2DB808u: goto label_2db808;
            case 0x2DB80Cu: goto label_2db80c;
            case 0x2DB810u: goto label_2db810;
            case 0x2DB814u: goto label_2db814;
            case 0x2DB818u: goto label_2db818;
            case 0x2DB81Cu: goto label_2db81c;
            case 0x2DB820u: goto label_2db820;
            case 0x2DB824u: goto label_2db824;
            case 0x2DB828u: goto label_2db828;
            case 0x2DB82Cu: goto label_2db82c;
            case 0x2DB830u: goto label_2db830;
            case 0x2DB834u: goto label_2db834;
            case 0x2DB838u: goto label_2db838;
            case 0x2DB83Cu: goto label_2db83c;
            case 0x2DB840u: goto label_2db840;
            case 0x2DB844u: goto label_2db844;
            case 0x2DB848u: goto label_2db848;
            case 0x2DB84Cu: goto label_2db84c;
            case 0x2DB850u: goto label_2db850;
            case 0x2DB854u: goto label_2db854;
            case 0x2DB858u: goto label_2db858;
            case 0x2DB85Cu: goto label_2db85c;
            case 0x2DB860u: goto label_2db860;
            case 0x2DB864u: goto label_2db864;
            case 0x2DB868u: goto label_2db868;
            case 0x2DB86Cu: goto label_2db86c;
            case 0x2DB870u: goto label_2db870;
            case 0x2DB874u: goto label_2db874;
            case 0x2DB878u: goto label_2db878;
            case 0x2DB87Cu: goto label_2db87c;
            case 0x2DB880u: goto label_2db880;
            case 0x2DB884u: goto label_2db884;
            case 0x2DB888u: goto label_2db888;
            case 0x2DB88Cu: goto label_2db88c;
            case 0x2DB890u: goto label_2db890;
            case 0x2DB894u: goto label_2db894;
            case 0x2DB898u: goto label_2db898;
            case 0x2DB89Cu: goto label_2db89c;
            case 0x2DB8A0u: goto label_2db8a0;
            case 0x2DB8A4u: goto label_2db8a4;
            case 0x2DB8A8u: goto label_2db8a8;
            case 0x2DB8ACu: goto label_2db8ac;
            case 0x2DB8B0u: goto label_2db8b0;
            case 0x2DB8B4u: goto label_2db8b4;
            case 0x2DB8B8u: goto label_2db8b8;
            case 0x2DB8BCu: goto label_2db8bc;
            case 0x2DB8C0u: goto label_2db8c0;
            case 0x2DB8C4u: goto label_2db8c4;
            case 0x2DB8C8u: goto label_2db8c8;
            case 0x2DB8CCu: goto label_2db8cc;
            case 0x2DB8D0u: goto label_2db8d0;
            case 0x2DB8D4u: goto label_2db8d4;
            case 0x2DB8D8u: goto label_2db8d8;
            case 0x2DB8DCu: goto label_2db8dc;
            case 0x2DB8E0u: goto label_2db8e0;
            case 0x2DB8E4u: goto label_2db8e4;
            case 0x2DB8E8u: goto label_2db8e8;
            case 0x2DB8ECu: goto label_2db8ec;
            case 0x2DB8F0u: goto label_2db8f0;
            case 0x2DB8F4u: goto label_2db8f4;
            case 0x2DB8F8u: goto label_2db8f8;
            case 0x2DB8FCu: goto label_2db8fc;
            case 0x2DB900u: goto label_2db900;
            case 0x2DB904u: goto label_2db904;
            case 0x2DB908u: goto label_2db908;
            case 0x2DB90Cu: goto label_2db90c;
            case 0x2DB910u: goto label_2db910;
            case 0x2DB914u: goto label_2db914;
            case 0x2DB918u: goto label_2db918;
            case 0x2DB91Cu: goto label_2db91c;
            case 0x2DB920u: goto label_2db920;
            case 0x2DB924u: goto label_2db924;
            case 0x2DB928u: goto label_2db928;
            case 0x2DB92Cu: goto label_2db92c;
            case 0x2DB930u: goto label_2db930;
            case 0x2DB934u: goto label_2db934;
            case 0x2DB938u: goto label_2db938;
            case 0x2DB93Cu: goto label_2db93c;
            case 0x2DB940u: goto label_2db940;
            case 0x2DB944u: goto label_2db944;
            case 0x2DB948u: goto label_2db948;
            case 0x2DB94Cu: goto label_2db94c;
            case 0x2DB950u: goto label_2db950;
            case 0x2DB954u: goto label_2db954;
            case 0x2DB958u: goto label_2db958;
            case 0x2DB95Cu: goto label_2db95c;
            case 0x2DB960u: goto label_2db960;
            case 0x2DB964u: goto label_2db964;
            case 0x2DB968u: goto label_2db968;
            case 0x2DB96Cu: goto label_2db96c;
            case 0x2DB970u: goto label_2db970;
            case 0x2DB974u: goto label_2db974;
            case 0x2DB978u: goto label_2db978;
            case 0x2DB97Cu: goto label_2db97c;
            case 0x2DB980u: goto label_2db980;
            case 0x2DB984u: goto label_2db984;
            case 0x2DB988u: goto label_2db988;
            case 0x2DB98Cu: goto label_2db98c;
            case 0x2DB990u: goto label_2db990;
            case 0x2DB994u: goto label_2db994;
            case 0x2DB998u: goto label_2db998;
            case 0x2DB99Cu: goto label_2db99c;
            case 0x2DB9A0u: goto label_2db9a0;
            case 0x2DB9A4u: goto label_2db9a4;
            case 0x2DB9A8u: goto label_2db9a8;
            case 0x2DB9ACu: goto label_2db9ac;
            case 0x2DB9B0u: goto label_2db9b0;
            case 0x2DB9B4u: goto label_2db9b4;
            case 0x2DB9B8u: goto label_2db9b8;
            case 0x2DB9BCu: goto label_2db9bc;
            case 0x2DB9C0u: goto label_2db9c0;
            case 0x2DB9C4u: goto label_2db9c4;
            case 0x2DB9C8u: goto label_2db9c8;
            case 0x2DB9CCu: goto label_2db9cc;
            case 0x2DB9D0u: goto label_2db9d0;
            case 0x2DB9D4u: goto label_2db9d4;
            case 0x2DB9D8u: goto label_2db9d8;
            case 0x2DB9DCu: goto label_2db9dc;
            case 0x2DB9E0u: goto label_2db9e0;
            case 0x2DB9E4u: goto label_2db9e4;
            case 0x2DB9E8u: goto label_2db9e8;
            case 0x2DB9ECu: goto label_2db9ec;
            case 0x2DB9F0u: goto label_2db9f0;
            case 0x2DB9F4u: goto label_2db9f4;
            case 0x2DB9F8u: goto label_2db9f8;
            case 0x2DB9FCu: goto label_2db9fc;
            case 0x2DBA00u: goto label_2dba00;
            case 0x2DBA04u: goto label_2dba04;
            case 0x2DBA08u: goto label_2dba08;
            case 0x2DBA0Cu: goto label_2dba0c;
            case 0x2DBA10u: goto label_2dba10;
            case 0x2DBA14u: goto label_2dba14;
            case 0x2DBA18u: goto label_2dba18;
            case 0x2DBA1Cu: goto label_2dba1c;
            case 0x2DBA20u: goto label_2dba20;
            case 0x2DBA24u: goto label_2dba24;
            case 0x2DBA28u: goto label_2dba28;
            case 0x2DBA2Cu: goto label_2dba2c;
            case 0x2DBA30u: goto label_2dba30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7B0u; }
            if (ctx->pc != 0x2DB7B0u) { return; }
        }
    }
    ctx->pc = 0x2DB7B0u;
label_2db7b0:
    // 0x2db7b0: 0x40302d
    ctx->pc = 0x2db7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db7b4:
    // 0x2db7b4: 0x14c00007
label_2db7b8:
    if (ctx->pc == 0x2DB7B8u) {
        ctx->pc = 0x2DB7B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x2DB7BCu;
        goto label_2db7bc;
    }
    ctx->pc = 0x2DB7B4u;
    {
        const bool branch_taken_0x2db7b4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB7B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x2db7b4) {
            ctx->pc = 0x2DB7D4u;
            goto label_2db7d4;
        }
    }
    ctx->pc = 0x2DB7BCu;
label_2db7bc:
    // 0x2db7bc: 0x13c00003
label_2db7c0:
    if (ctx->pc == 0x2DB7C0u) {
        ctx->pc = 0x2DB7C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2DB7C4u;
        goto label_2db7c4;
    }
    ctx->pc = 0x2DB7BCu;
    {
        const bool branch_taken_0x2db7bc = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB7C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2db7bc) {
            ctx->pc = 0x2DB7CCu;
            goto label_2db7cc;
        }
    }
    ctx->pc = 0x2DB7C4u;
label_2db7c4:
    // 0x2db7c4: 0xc0b6f98
label_2db7c8:
    if (ctx->pc == 0x2DB7C8u) {
        ctx->pc = 0x2DB7C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1380)));
        ctx->pc = 0x2DB7CCu;
        goto label_2db7cc;
    }
    ctx->pc = 0x2DB7C4u;
    SET_GPR_U32(ctx, 31, 0x2DB7CCu);
    ctx->pc = 0x2DB7C8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1380)));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB7CCu; }
    }
    if (ctx->pc != 0x2DB7CCu) { return; }
    ctx->pc = 0x2DB7CCu;
label_2db7cc:
    // 0x2db7cc: 0x1000008d
label_2db7d0:
    if (ctx->pc == 0x2DB7D0u) {
        ctx->pc = 0x2DB7D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2DB7D4u;
        goto label_2db7d4;
    }
    ctx->pc = 0x2DB7CCu;
    {
        const bool branch_taken_0x2db7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB7D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2db7cc) {
            ctx->pc = 0x2DBA04u;
            goto label_2dba04;
        }
    }
    ctx->pc = 0x2DB7D4u;
label_2db7d4:
    // 0x2db7d4: 0x8fa40560
    ctx->pc = 0x2db7d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_2db7d8:
    // 0x2db7d8: 0xac830000
    ctx->pc = 0x2db7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2db7dc:
    // 0x2db7dc: 0x24c50004
    ctx->pc = 0x2db7dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4));
label_2db7e0:
    // 0x2db7e0: 0xafa50560
    ctx->pc = 0x2db7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 5));
label_2db7e4:
    // 0x2db7e4: 0xacc00004
    ctx->pc = 0x2db7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2db7e8:
    // 0x2db7e8: 0x1e2080
    ctx->pc = 0x2db7e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 30), 2));
label_2db7ec:
    // 0x2db7ec: 0x27a50050
    ctx->pc = 0x2db7ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
label_2db7f0:
    // 0x2db7f0: 0xa41021
    ctx->pc = 0x2db7f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2db7f4:
    // 0x2db7f4: 0x60302d
    ctx->pc = 0x2db7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2db7f8:
    // 0x2db7f8: 0x13c00013
label_2db7fc:
    if (ctx->pc == 0x2DB7FCu) {
        ctx->pc = 0x2DB7FCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x2DB800u;
        goto label_2db800;
    }
    ctx->pc = 0x2DB7F8u;
    {
        const bool branch_taken_0x2db7f8 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB7FCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x2db7f8) {
            ctx->pc = 0x2DB848u;
            goto label_2db848;
        }
    }
    ctx->pc = 0x2DB800u;
label_2db800:
    // 0x2db800: 0x8fa70570
    ctx->pc = 0x2db800u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_2db804:
    // 0x2db804: 0xe41021
    ctx->pc = 0x2db804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2db808:
    // 0x2db808: 0xac510000
    ctx->pc = 0x2db808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_2db80c:
    // 0x2db80c: 0xa3b50041
    ctx->pc = 0x2db80cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 21));
label_2db810:
    // 0x2db810: 0xa3b00040
    ctx->pc = 0x2db810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 16));
label_2db814:
    // 0x2db814: 0xafa60044
    ctx->pc = 0x2db814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_2db818:
    // 0x2db818: 0x2551023
    ctx->pc = 0x2db818u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2db81c:
    // 0x2db81c: 0x518006
    ctx->pc = 0x2db81cu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_2db820:
    // 0x2db820: 0x27c2ffff
    ctx->pc = 0x2db820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4294967295));
label_2db824:
    // 0x2db824: 0x21080
    ctx->pc = 0x2db824u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2db828:
    // 0x2db828: 0xa21021
    ctx->pc = 0x2db828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2db82c:
    // 0x2db82c: 0x8c430000
    ctx->pc = 0x2db82cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db830:
    // 0x2db830: 0x1010c0
    ctx->pc = 0x2db830u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_2db834:
    // 0x2db834: 0x431021
    ctx->pc = 0x2db834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2db838:
    // 0x2db838: 0x6ba80047
    ctx->pc = 0x2db838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_2db83c:
    // 0x2db83c: 0x6fa80040
    ctx->pc = 0x2db83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2db840:
    // 0x2db840: 0xb0480007
    ctx->pc = 0x2db840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2db844:
    // 0x2db844: 0xb4480000
    ctx->pc = 0x2db844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2db848:
    // 0x2db848: 0x2551821
    ctx->pc = 0x2db848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2db84c:
    // 0x2db84c: 0x74102a
    ctx->pc = 0x2db84cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 20)));
label_2db850:
    // 0x2db850: 0x5440ffb1
label_2db854:
    if (ctx->pc == 0x2DB854u) {
        ctx->pc = 0x2DB854u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB858u;
        goto label_2db858;
    }
    ctx->pc = 0x2DB850u;
    {
        const bool branch_taken_0x2db850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db850) {
            ctx->pc = 0x2DB854u;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DB718u;
            goto label_2db718;
        }
    }
    ctx->pc = 0x2DB858u;
label_2db858:
    // 0x2db858: 0x2921023
    ctx->pc = 0x2db858u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2db85c:
    // 0x2db85c: 0xa3a20041
    ctx->pc = 0x2db85cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
label_2db860:
    // 0x2db860: 0x8fa70574
    ctx->pc = 0x2db860u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1396)));
label_2db864:
    // 0x2db864: 0x267102b
    ctx->pc = 0x2db864u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_2db868:
    // 0x2db868: 0x54400004
label_2db86c:
    if (ctx->pc == 0x2DB86Cu) {
        ctx->pc = 0x2DB86Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2DB870u;
        goto label_2db870;
    }
    ctx->pc = 0x2DB868u;
    {
        const bool branch_taken_0x2db868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db868) {
            ctx->pc = 0x2DB86Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x2DB87Cu;
            goto label_2db87c;
        }
    }
    ctx->pc = 0x2DB870u;
label_2db870:
    // 0x2db870: 0x240200c0
    ctx->pc = 0x2db870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
label_2db874:
    // 0x2db874: 0x1000001c
label_2db878:
    if (ctx->pc == 0x2DB878u) {
        ctx->pc = 0x2DB878u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2DB87Cu;
        goto label_2db87c;
    }
    ctx->pc = 0x2DB874u;
    {
        const bool branch_taken_0x2db874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB878u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2db874) {
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB87Cu;
label_2db87c:
    // 0x2db87c: 0x8fa80554
    ctx->pc = 0x2db87cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1364)));
label_2db880:
    // 0x2db880: 0x68102b
    ctx->pc = 0x2db880u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2db884:
    // 0x2db884: 0x10400007
label_2db888:
    if (ctx->pc == 0x2DB888u) {
        ctx->pc = 0x2DB888u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 256));
        ctx->pc = 0x2DB88Cu;
        goto label_2db88c;
    }
    ctx->pc = 0x2DB884u;
    {
        const bool branch_taken_0x2db884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB888u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x2db884) {
            ctx->pc = 0x2DB8A4u;
            goto label_2db8a4;
        }
    }
    ctx->pc = 0x2DB88Cu;
label_2db88c:
    // 0x2db88c: 0x14400002
label_2db890:
    if (ctx->pc == 0x2DB890u) {
        ctx->pc = 0x2DB890u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB894u;
        goto label_2db894;
    }
    ctx->pc = 0x2DB88Cu;
    {
        const bool branch_taken_0x2db88c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB890u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db88c) {
            ctx->pc = 0x2DB898u;
            goto label_2db898;
        }
    }
    ctx->pc = 0x2DB894u;
label_2db894:
    // 0x2db894: 0x24030060
    ctx->pc = 0x2db894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
label_2db898:
    // 0x2db898: 0xa3a30040
    ctx->pc = 0x2db898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_2db89c:
    // 0x2db89c: 0x10000010
label_2db8a0:
    if (ctx->pc == 0x2DB8A0u) {
        ctx->pc = 0x2DB8A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2DB8A4u;
        goto label_2db8a4;
    }
    ctx->pc = 0x2DB89Cu;
    {
        const bool branch_taken_0x2db89c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB8A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x2db89c) {
            ctx->pc = 0x2DB8E0u;
            goto label_2db8e0;
        }
    }
    ctx->pc = 0x2DB8A4u;
label_2db8a4:
    // 0x2db8a4: 0x8e620000
    ctx->pc = 0x2db8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2db8a8:
    // 0x2db8a8: 0x8fa30554
    ctx->pc = 0x2db8a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 1364)));
label_2db8ac:
    // 0x2db8ac: 0x431023
    ctx->pc = 0x2db8acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2db8b0:
    // 0x2db8b0: 0x21080
    ctx->pc = 0x2db8b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2db8b4:
    // 0x2db8b4: 0x8fa4055c
    ctx->pc = 0x2db8b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_2db8b8:
    // 0x2db8b8: 0x441021
    ctx->pc = 0x2db8b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2db8bc:
    // 0x2db8bc: 0x90420000
    ctx->pc = 0x2db8bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2db8c0:
    // 0x2db8c0: 0x24420050
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 80));
label_2db8c4:
    // 0x2db8c4: 0xa3a20040
    ctx->pc = 0x2db8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_2db8c8:
    // 0x2db8c8: 0x8e620000
    ctx->pc = 0x2db8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2db8cc:
    // 0x2db8cc: 0x431023
    ctx->pc = 0x2db8ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2db8d0:
    // 0x2db8d0: 0x21080
    ctx->pc = 0x2db8d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2db8d4:
    // 0x2db8d4: 0x8fa50558
    ctx->pc = 0x2db8d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_2db8d8:
    // 0x2db8d8: 0x451021
    ctx->pc = 0x2db8d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2db8dc:
    // 0x2db8dc: 0x8c420000
    ctx->pc = 0x2db8dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2db8e0:
    // 0x2db8e0: 0xafa20044
    ctx->pc = 0x2db8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2db8e4:
    // 0x2db8e4: 0x26730004
    ctx->pc = 0x2db8e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_2db8e8:
    // 0x2db8e8: 0x2921023
    ctx->pc = 0x2db8e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2db8ec:
    // 0x2db8ec: 0x24070001
    ctx->pc = 0x2db8ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2db8f0:
    // 0x2db8f0: 0x471804
    ctx->pc = 0x2db8f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_2db8f4:
    // 0x2db8f4: 0x2518006
    ctx->pc = 0x2db8f4u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
label_2db8f8:
    // 0x2db8f8: 0x216102b
    ctx->pc = 0x2db8f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2db8fc:
    // 0x2db8fc: 0x1040000d
label_2db900:
    if (ctx->pc == 0x2DB900u) {
        ctx->pc = 0x2DB900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x2DB904u;
        goto label_2db904;
    }
    ctx->pc = 0x2DB8FCu;
    {
        const bool branch_taken_0x2db8fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
        if (branch_taken_0x2db8fc) {
            ctx->pc = 0x2DB934u;
            goto label_2db934;
        }
    }
    ctx->pc = 0x2DB904u;
label_2db904:
    // 0x2db904: 0x0
    ctx->pc = 0x2db904u;
    // NOP
label_2db908:
    // 0x2db908: 0x1010c0
    ctx->pc = 0x2db908u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_2db90c:
    // 0x2db90c: 0x461021
    ctx->pc = 0x2db90cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2db910:
    // 0x2db910: 0x6ba80047
    ctx->pc = 0x2db910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_2db914:
    // 0x2db914: 0x6fa80040
    ctx->pc = 0x2db914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2db918:
    // 0x2db918: 0xb0480007
    ctx->pc = 0x2db918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2db91c:
    // 0x2db91c: 0xb4480000
    ctx->pc = 0x2db91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2db920:
    // 0x2db920: 0x2038021
    ctx->pc = 0x2db920u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2db924:
    // 0x2db924: 0x216102b
    ctx->pc = 0x2db924u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2db928:
    // 0x2db928: 0x1440fff7
label_2db92c:
    if (ctx->pc == 0x2DB92Cu) {
        ctx->pc = 0x2DB930u;
        goto label_2db930;
    }
    ctx->pc = 0x2DB928u;
    {
        const bool branch_taken_0x2db928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db928) {
            ctx->pc = 0x2DB908u;
            goto label_2db908;
        }
    }
    ctx->pc = 0x2DB930u;
label_2db930:
    // 0x2db930: 0x2682ffff
    ctx->pc = 0x2db930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
label_2db934:
    // 0x2db934: 0x24080001
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_2db938:
    // 0x2db938: 0x488004
    ctx->pc = 0x2db938u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
label_2db93c:
    // 0x2db93c: 0x2301024
    ctx->pc = 0x2db93cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db940:
    // 0x2db940: 0x50400009
label_2db944:
    if (ctx->pc == 0x2DB944u) {
        ctx->pc = 0x2DB944u;
        SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x2DB948u;
        goto label_2db948;
    }
    ctx->pc = 0x2DB940u;
    {
        const bool branch_taken_0x2db940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2db940) {
            ctx->pc = 0x2DB944u;
            SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB948u;
label_2db948:
    // 0x2db948: 0x2308826
    ctx->pc = 0x2db948u;
    SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db94c:
    // 0x2db94c: 0x108042
    ctx->pc = 0x2db94cu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 1));
label_2db950:
    // 0x2db950: 0x2301024
    ctx->pc = 0x2db950u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db954:
    // 0x2db954: 0x0
    ctx->pc = 0x2db954u;
    // NOP
label_2db958:
    // 0x2db958: 0x0
    ctx->pc = 0x2db958u;
    // NOP
label_2db95c:
    // 0x2db95c: 0x1440fffa
label_2db960:
    if (ctx->pc == 0x2DB960u) {
        ctx->pc = 0x2DB964u;
        goto label_2db964;
    }
    ctx->pc = 0x2DB95Cu;
    {
        const bool branch_taken_0x2db95c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db95c) {
            ctx->pc = 0x2DB948u;
            goto label_2db948;
        }
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x2308826
    ctx->pc = 0x2db964u;
    SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db968:
    // 0x2db968: 0x24030001
    ctx->pc = 0x2db968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2db96c:
    // 0x2db96c: 0x2431004
    ctx->pc = 0x2db96cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_2db970:
    // 0x2db970: 0x2442ffff
    ctx->pc = 0x2db970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2db974:
    // 0x2db974: 0x2221024
    ctx->pc = 0x2db974u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2db978:
    // 0x2db978: 0x1e1880
    ctx->pc = 0x2db978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
label_2db97c:
    // 0x2db97c: 0x8fa40570
    ctx->pc = 0x2db97cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_2db980:
    // 0x2db980: 0x831821
    ctx->pc = 0x2db980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2db984:
    // 0x2db984: 0x8c630000
    ctx->pc = 0x2db984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2db988:
    // 0x2db988: 0x5043000d
label_2db98c:
    if (ctx->pc == 0x2DB98Cu) {
        ctx->pc = 0x2DB98Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2DB990u;
        goto label_2db990;
    }
    ctx->pc = 0x2DB988u;
    {
        const bool branch_taken_0x2db988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2db988) {
            ctx->pc = 0x2DB98Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
            ctx->pc = 0x2DB9C0u;
            goto label_2db9c0;
        }
    }
    ctx->pc = 0x2DB990u;
label_2db990:
    // 0x2db990: 0x24050001
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2db994:
    // 0x2db994: 0x27deffff
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967295));
label_2db998:
    // 0x2db998: 0x2559023
    ctx->pc = 0x2db998u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2db99c:
    // 0x2db99c: 0x2451004
    ctx->pc = 0x2db99cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
label_2db9a0:
    // 0x2db9a0: 0x2442ffff
    ctx->pc = 0x2db9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2db9a4:
    // 0x2db9a4: 0x2221024
    ctx->pc = 0x2db9a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2db9a8:
    // 0x2db9a8: 0x1e1880
    ctx->pc = 0x2db9a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 2));
label_2db9ac:
    // 0x2db9ac: 0x831821
    ctx->pc = 0x2db9acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2db9b0:
    // 0x2db9b0: 0x8c630000
    ctx->pc = 0x2db9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2db9b4:
    // 0x2db9b4: 0x5443fff8
label_2db9b8:
    if (ctx->pc == 0x2DB9B8u) {
        ctx->pc = 0x2DB9B8u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->pc = 0x2DB9BCu;
        goto label_2db9bc;
    }
    ctx->pc = 0x2DB9B4u;
    {
        const bool branch_taken_0x2db9b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2db9b4) {
            ctx->pc = 0x2DB9B8u;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967295));
            ctx->pc = 0x2DB998u;
            goto label_2db998;
        }
    }
    ctx->pc = 0x2DB9BCu;
label_2db9bc:
    // 0x2db9bc: 0x26f7ffff
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
label_2db9c0:
    // 0x2db9c0: 0x3c04ffff
    ctx->pc = 0x2db9c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_2db9c4:
    // 0x2db9c4: 0x3484ffff
    ctx->pc = 0x2db9c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
label_2db9c8:
    // 0x2db9c8: 0x16e4ff4d
label_2db9cc:
    if (ctx->pc == 0x2DB9CCu) {
        ctx->pc = 0x2DB9CCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->pc = 0x2DB9D0u;
        goto label_2db9d0;
    }
    ctx->pc = 0x2DB9C8u;
    {
        const bool branch_taken_0x2db9c8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 4));
        ctx->pc = 0x2DB9CCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        if (branch_taken_0x2db9c8) {
            ctx->pc = 0x2DB700u;
            goto label_2db700;
        }
    }
    ctx->pc = 0x2DB9D0u;
label_2db9d0:
    // 0x2db9d0: 0x26940001
    ctx->pc = 0x2db9d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_2db9d4:
    // 0x2db9d4: 0x8fa50568
    ctx->pc = 0x2db9d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2db9d8:
    // 0x2db9d8: 0xb4102a
    ctx->pc = 0x2db9d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
label_2db9dc:
    // 0x2db9dc: 0x1040ff3a
label_2db9e0:
    if (ctx->pc == 0x2DB9E0u) {
        ctx->pc = 0x2DB9E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x2DB9E4u;
        goto label_2db9e4;
    }
    ctx->pc = 0x2DB9DCu;
    {
        const bool branch_taken_0x2db9dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB9E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x2db9dc) {
            ctx->pc = 0x2DB6C8u;
            goto label_2db6c8;
        }
    }
    ctx->pc = 0x2DB9E4u;
label_2db9e4:
    // 0x2db9e4: 0x8fa7056c
    ctx->pc = 0x2db9e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1388)));
label_2db9e8:
    // 0x2db9e8: 0x10e00006
label_2db9ec:
    if (ctx->pc == 0x2DB9ECu) {
        ctx->pc = 0x2DB9ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9F0u;
        goto label_2db9f0;
    }
    ctx->pc = 0x2DB9E8u;
    {
        const bool branch_taken_0x2db9e8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB9ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db9e8) {
            ctx->pc = 0x2DBA04u;
            goto label_2dba04;
        }
    }
    ctx->pc = 0x2DB9F0u;
label_2db9f0:
    // 0x2db9f0: 0x2403fffb
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
label_2db9f4:
    // 0x2db9f4: 0x8fa80568
    ctx->pc = 0x2db9f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1384)));
label_2db9f8:
    // 0x2db9f8: 0x39020001
    ctx->pc = 0x2db9f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 8), 1));
label_2db9fc:
    // 0x2db9fc: 0x2180a
    ctx->pc = 0x2db9fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_2dba00:
    // 0x2dba00: 0x60102d
    ctx->pc = 0x2dba00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2dba04:
    // 0x2dba04: 0xdfbf0610
    ctx->pc = 0x2dba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_2dba08:
    // 0x2dba08: 0xdfbe0600
    ctx->pc = 0x2dba08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_2dba0c:
    // 0x2dba0c: 0xdfb705f0
    ctx->pc = 0x2dba0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_2dba10:
    // 0x2dba10: 0xdfb605e0
    ctx->pc = 0x2dba10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1504)));
label_2dba14:
    // 0x2dba14: 0xdfb505d0
    ctx->pc = 0x2dba14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
label_2dba18:
    // 0x2dba18: 0xdfb405c0
    ctx->pc = 0x2dba18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1472)));
label_2dba1c:
    // 0x2dba1c: 0xdfb305b0
    ctx->pc = 0x2dba1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1456)));
label_2dba20:
    // 0x2dba20: 0xdfb205a0
    ctx->pc = 0x2dba20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
label_2dba24:
    // 0x2dba24: 0xdfb10590
    ctx->pc = 0x2dba24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1424)));
label_2dba28:
    // 0x2dba28: 0xdfb00580
    ctx->pc = 0x2dba28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1408)));
label_2dba2c:
    // 0x2dba2c: 0x3e00008
label_2dba30:
    if (ctx->pc == 0x2DBA30u) {
        ctx->pc = 0x2DBA30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1568));
        ctx->pc = 0x2DBA34u;
        goto label_fallthrough_0x2dba2c;
    }
    ctx->pc = 0x2DBA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1568));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DB430u: goto label_2db430;
            case 0x2DB434u: goto label_2db434;
            case 0x2DB438u: goto label_2db438;
            case 0x2DB43Cu: goto label_2db43c;
            case 0x2DB440u: goto label_2db440;
            case 0x2DB444u: goto label_2db444;
            case 0x2DB448u: goto label_2db448;
            case 0x2DB44Cu: goto label_2db44c;
            case 0x2DB450u: goto label_2db450;
            case 0x2DB454u: goto label_2db454;
            case 0x2DB458u: goto label_2db458;
            case 0x2DB45Cu: goto label_2db45c;
            case 0x2DB460u: goto label_2db460;
            case 0x2DB464u: goto label_2db464;
            case 0x2DB468u: goto label_2db468;
            case 0x2DB46Cu: goto label_2db46c;
            case 0x2DB470u: goto label_2db470;
            case 0x2DB474u: goto label_2db474;
            case 0x2DB478u: goto label_2db478;
            case 0x2DB47Cu: goto label_2db47c;
            case 0x2DB480u: goto label_2db480;
            case 0x2DB484u: goto label_2db484;
            case 0x2DB488u: goto label_2db488;
            case 0x2DB48Cu: goto label_2db48c;
            case 0x2DB490u: goto label_2db490;
            case 0x2DB494u: goto label_2db494;
            case 0x2DB498u: goto label_2db498;
            case 0x2DB49Cu: goto label_2db49c;
            case 0x2DB4A0u: goto label_2db4a0;
            case 0x2DB4A4u: goto label_2db4a4;
            case 0x2DB4A8u: goto label_2db4a8;
            case 0x2DB4ACu: goto label_2db4ac;
            case 0x2DB4B0u: goto label_2db4b0;
            case 0x2DB4B4u: goto label_2db4b4;
            case 0x2DB4B8u: goto label_2db4b8;
            case 0x2DB4BCu: goto label_2db4bc;
            case 0x2DB4C0u: goto label_2db4c0;
            case 0x2DB4C4u: goto label_2db4c4;
            case 0x2DB4C8u: goto label_2db4c8;
            case 0x2DB4CCu: goto label_2db4cc;
            case 0x2DB4D0u: goto label_2db4d0;
            case 0x2DB4D4u: goto label_2db4d4;
            case 0x2DB4D8u: goto label_2db4d8;
            case 0x2DB4DCu: goto label_2db4dc;
            case 0x2DB4E0u: goto label_2db4e0;
            case 0x2DB4E4u: goto label_2db4e4;
            case 0x2DB4E8u: goto label_2db4e8;
            case 0x2DB4ECu: goto label_2db4ec;
            case 0x2DB4F0u: goto label_2db4f0;
            case 0x2DB4F4u: goto label_2db4f4;
            case 0x2DB4F8u: goto label_2db4f8;
            case 0x2DB4FCu: goto label_2db4fc;
            case 0x2DB500u: goto label_2db500;
            case 0x2DB504u: goto label_2db504;
            case 0x2DB508u: goto label_2db508;
            case 0x2DB50Cu: goto label_2db50c;
            case 0x2DB510u: goto label_2db510;
            case 0x2DB514u: goto label_2db514;
            case 0x2DB518u: goto label_2db518;
            case 0x2DB51Cu: goto label_2db51c;
            case 0x2DB520u: goto label_2db520;
            case 0x2DB524u: goto label_2db524;
            case 0x2DB528u: goto label_2db528;
            case 0x2DB52Cu: goto label_2db52c;
            case 0x2DB530u: goto label_2db530;
            case 0x2DB534u: goto label_2db534;
            case 0x2DB538u: goto label_2db538;
            case 0x2DB53Cu: goto label_2db53c;
            case 0x2DB540u: goto label_2db540;
            case 0x2DB544u: goto label_2db544;
            case 0x2DB548u: goto label_2db548;
            case 0x2DB54Cu: goto label_2db54c;
            case 0x2DB550u: goto label_2db550;
            case 0x2DB554u: goto label_2db554;
            case 0x2DB558u: goto label_2db558;
            case 0x2DB55Cu: goto label_2db55c;
            case 0x2DB560u: goto label_2db560;
            case 0x2DB564u: goto label_2db564;
            case 0x2DB568u: goto label_2db568;
            case 0x2DB56Cu: goto label_2db56c;
            case 0x2DB570u: goto label_2db570;
            case 0x2DB574u: goto label_2db574;
            case 0x2DB578u: goto label_2db578;
            case 0x2DB57Cu: goto label_2db57c;
            case 0x2DB580u: goto label_2db580;
            case 0x2DB584u: goto label_2db584;
            case 0x2DB588u: goto label_2db588;
            case 0x2DB58Cu: goto label_2db58c;
            case 0x2DB590u: goto label_2db590;
            case 0x2DB594u: goto label_2db594;
            case 0x2DB598u: goto label_2db598;
            case 0x2DB59Cu: goto label_2db59c;
            case 0x2DB5A0u: goto label_2db5a0;
            case 0x2DB5A4u: goto label_2db5a4;
            case 0x2DB5A8u: goto label_2db5a8;
            case 0x2DB5ACu: goto label_2db5ac;
            case 0x2DB5B0u: goto label_2db5b0;
            case 0x2DB5B4u: goto label_2db5b4;
            case 0x2DB5B8u: goto label_2db5b8;
            case 0x2DB5BCu: goto label_2db5bc;
            case 0x2DB5C0u: goto label_2db5c0;
            case 0x2DB5C4u: goto label_2db5c4;
            case 0x2DB5C8u: goto label_2db5c8;
            case 0x2DB5CCu: goto label_2db5cc;
            case 0x2DB5D0u: goto label_2db5d0;
            case 0x2DB5D4u: goto label_2db5d4;
            case 0x2DB5D8u: goto label_2db5d8;
            case 0x2DB5DCu: goto label_2db5dc;
            case 0x2DB5E0u: goto label_2db5e0;
            case 0x2DB5E4u: goto label_2db5e4;
            case 0x2DB5E8u: goto label_2db5e8;
            case 0x2DB5ECu: goto label_2db5ec;
            case 0x2DB5F0u: goto label_2db5f0;
            case 0x2DB5F4u: goto label_2db5f4;
            case 0x2DB5F8u: goto label_2db5f8;
            case 0x2DB5FCu: goto label_2db5fc;
            case 0x2DB600u: goto label_2db600;
            case 0x2DB604u: goto label_2db604;
            case 0x2DB608u: goto label_2db608;
            case 0x2DB60Cu: goto label_2db60c;
            case 0x2DB610u: goto label_2db610;
            case 0x2DB614u: goto label_2db614;
            case 0x2DB618u: goto label_2db618;
            case 0x2DB61Cu: goto label_2db61c;
            case 0x2DB620u: goto label_2db620;
            case 0x2DB624u: goto label_2db624;
            case 0x2DB628u: goto label_2db628;
            case 0x2DB62Cu: goto label_2db62c;
            case 0x2DB630u: goto label_2db630;
            case 0x2DB634u: goto label_2db634;
            case 0x2DB638u: goto label_2db638;
            case 0x2DB63Cu: goto label_2db63c;
            case 0x2DB640u: goto label_2db640;
            case 0x2DB644u: goto label_2db644;
            case 0x2DB648u: goto label_2db648;
            case 0x2DB64Cu: goto label_2db64c;
            case 0x2DB650u: goto label_2db650;
            case 0x2DB654u: goto label_2db654;
            case 0x2DB658u: goto label_2db658;
            case 0x2DB65Cu: goto label_2db65c;
            case 0x2DB660u: goto label_2db660;
            case 0x2DB664u: goto label_2db664;
            case 0x2DB668u: goto label_2db668;
            case 0x2DB66Cu: goto label_2db66c;
            case 0x2DB670u: goto label_2db670;
            case 0x2DB674u: goto label_2db674;
            case 0x2DB678u: goto label_2db678;
            case 0x2DB67Cu: goto label_2db67c;
            case 0x2DB680u: goto label_2db680;
            case 0x2DB684u: goto label_2db684;
            case 0x2DB688u: goto label_2db688;
            case 0x2DB68Cu: goto label_2db68c;
            case 0x2DB690u: goto label_2db690;
            case 0x2DB694u: goto label_2db694;
            case 0x2DB698u: goto label_2db698;
            case 0x2DB69Cu: goto label_2db69c;
            case 0x2DB6A0u: goto label_2db6a0;
            case 0x2DB6A4u: goto label_2db6a4;
            case 0x2DB6A8u: goto label_2db6a8;
            case 0x2DB6ACu: goto label_2db6ac;
            case 0x2DB6B0u: goto label_2db6b0;
            case 0x2DB6B4u: goto label_2db6b4;
            case 0x2DB6B8u: goto label_2db6b8;
            case 0x2DB6BCu: goto label_2db6bc;
            case 0x2DB6C0u: goto label_2db6c0;
            case 0x2DB6C4u: goto label_2db6c4;
            case 0x2DB6C8u: goto label_2db6c8;
            case 0x2DB6CCu: goto label_2db6cc;
            case 0x2DB6D0u: goto label_2db6d0;
            case 0x2DB6D4u: goto label_2db6d4;
            case 0x2DB6D8u: goto label_2db6d8;
            case 0x2DB6DCu: goto label_2db6dc;
            case 0x2DB6E0u: goto label_2db6e0;
            case 0x2DB6E4u: goto label_2db6e4;
            case 0x2DB6E8u: goto label_2db6e8;
            case 0x2DB6ECu: goto label_2db6ec;
            case 0x2DB6F0u: goto label_2db6f0;
            case 0x2DB6F4u: goto label_2db6f4;
            case 0x2DB6F8u: goto label_2db6f8;
            case 0x2DB6FCu: goto label_2db6fc;
            case 0x2DB700u: goto label_2db700;
            case 0x2DB704u: goto label_2db704;
            case 0x2DB708u: goto label_2db708;
            case 0x2DB70Cu: goto label_2db70c;
            case 0x2DB710u: goto label_2db710;
            case 0x2DB714u: goto label_2db714;
            case 0x2DB718u: goto label_2db718;
            case 0x2DB71Cu: goto label_2db71c;
            case 0x2DB720u: goto label_2db720;
            case 0x2DB724u: goto label_2db724;
            case 0x2DB728u: goto label_2db728;
            case 0x2DB72Cu: goto label_2db72c;
            case 0x2DB730u: goto label_2db730;
            case 0x2DB734u: goto label_2db734;
            case 0x2DB738u: goto label_2db738;
            case 0x2DB73Cu: goto label_2db73c;
            case 0x2DB740u: goto label_2db740;
            case 0x2DB744u: goto label_2db744;
            case 0x2DB748u: goto label_2db748;
            case 0x2DB74Cu: goto label_2db74c;
            case 0x2DB750u: goto label_2db750;
            case 0x2DB754u: goto label_2db754;
            case 0x2DB758u: goto label_2db758;
            case 0x2DB75Cu: goto label_2db75c;
            case 0x2DB760u: goto label_2db760;
            case 0x2DB764u: goto label_2db764;
            case 0x2DB768u: goto label_2db768;
            case 0x2DB76Cu: goto label_2db76c;
            case 0x2DB770u: goto label_2db770;
            case 0x2DB774u: goto label_2db774;
            case 0x2DB778u: goto label_2db778;
            case 0x2DB77Cu: goto label_2db77c;
            case 0x2DB780u: goto label_2db780;
            case 0x2DB784u: goto label_2db784;
            case 0x2DB788u: goto label_2db788;
            case 0x2DB78Cu: goto label_2db78c;
            case 0x2DB790u: goto label_2db790;
            case 0x2DB794u: goto label_2db794;
            case 0x2DB798u: goto label_2db798;
            case 0x2DB79Cu: goto label_2db79c;
            case 0x2DB7A0u: goto label_2db7a0;
            case 0x2DB7A4u: goto label_2db7a4;
            case 0x2DB7A8u: goto label_2db7a8;
            case 0x2DB7ACu: goto label_2db7ac;
            case 0x2DB7B0u: goto label_2db7b0;
            case 0x2DB7B4u: goto label_2db7b4;
            case 0x2DB7B8u: goto label_2db7b8;
            case 0x2DB7BCu: goto label_2db7bc;
            case 0x2DB7C0u: goto label_2db7c0;
            case 0x2DB7C4u: goto label_2db7c4;
            case 0x2DB7C8u: goto label_2db7c8;
            case 0x2DB7CCu: goto label_2db7cc;
            case 0x2DB7D0u: goto label_2db7d0;
            case 0x2DB7D4u: goto label_2db7d4;
            case 0x2DB7D8u: goto label_2db7d8;
            case 0x2DB7DCu: goto label_2db7dc;
            case 0x2DB7E0u: goto label_2db7e0;
            case 0x2DB7E4u: goto label_2db7e4;
            case 0x2DB7E8u: goto label_2db7e8;
            case 0x2DB7ECu: goto label_2db7ec;
            case 0x2DB7F0u: goto label_2db7f0;
            case 0x2DB7F4u: goto label_2db7f4;
            case 0x2DB7F8u: goto label_2db7f8;
            case 0x2DB7FCu: goto label_2db7fc;
            case 0x2DB800u: goto label_2db800;
            case 0x2DB804u: goto label_2db804;
            case 0x2DB808u: goto label_2db808;
            case 0x2DB80Cu: goto label_2db80c;
            case 0x2DB810u: goto label_2db810;
            case 0x2DB814u: goto label_2db814;
            case 0x2DB818u: goto label_2db818;
            case 0x2DB81Cu: goto label_2db81c;
            case 0x2DB820u: goto label_2db820;
            case 0x2DB824u: goto label_2db824;
            case 0x2DB828u: goto label_2db828;
            case 0x2DB82Cu: goto label_2db82c;
            case 0x2DB830u: goto label_2db830;
            case 0x2DB834u: goto label_2db834;
            case 0x2DB838u: goto label_2db838;
            case 0x2DB83Cu: goto label_2db83c;
            case 0x2DB840u: goto label_2db840;
            case 0x2DB844u: goto label_2db844;
            case 0x2DB848u: goto label_2db848;
            case 0x2DB84Cu: goto label_2db84c;
            case 0x2DB850u: goto label_2db850;
            case 0x2DB854u: goto label_2db854;
            case 0x2DB858u: goto label_2db858;
            case 0x2DB85Cu: goto label_2db85c;
            case 0x2DB860u: goto label_2db860;
            case 0x2DB864u: goto label_2db864;
            case 0x2DB868u: goto label_2db868;
            case 0x2DB86Cu: goto label_2db86c;
            case 0x2DB870u: goto label_2db870;
            case 0x2DB874u: goto label_2db874;
            case 0x2DB878u: goto label_2db878;
            case 0x2DB87Cu: goto label_2db87c;
            case 0x2DB880u: goto label_2db880;
            case 0x2DB884u: goto label_2db884;
            case 0x2DB888u: goto label_2db888;
            case 0x2DB88Cu: goto label_2db88c;
            case 0x2DB890u: goto label_2db890;
            case 0x2DB894u: goto label_2db894;
            case 0x2DB898u: goto label_2db898;
            case 0x2DB89Cu: goto label_2db89c;
            case 0x2DB8A0u: goto label_2db8a0;
            case 0x2DB8A4u: goto label_2db8a4;
            case 0x2DB8A8u: goto label_2db8a8;
            case 0x2DB8ACu: goto label_2db8ac;
            case 0x2DB8B0u: goto label_2db8b0;
            case 0x2DB8B4u: goto label_2db8b4;
            case 0x2DB8B8u: goto label_2db8b8;
            case 0x2DB8BCu: goto label_2db8bc;
            case 0x2DB8C0u: goto label_2db8c0;
            case 0x2DB8C4u: goto label_2db8c4;
            case 0x2DB8C8u: goto label_2db8c8;
            case 0x2DB8CCu: goto label_2db8cc;
            case 0x2DB8D0u: goto label_2db8d0;
            case 0x2DB8D4u: goto label_2db8d4;
            case 0x2DB8D8u: goto label_2db8d8;
            case 0x2DB8DCu: goto label_2db8dc;
            case 0x2DB8E0u: goto label_2db8e0;
            case 0x2DB8E4u: goto label_2db8e4;
            case 0x2DB8E8u: goto label_2db8e8;
            case 0x2DB8ECu: goto label_2db8ec;
            case 0x2DB8F0u: goto label_2db8f0;
            case 0x2DB8F4u: goto label_2db8f4;
            case 0x2DB8F8u: goto label_2db8f8;
            case 0x2DB8FCu: goto label_2db8fc;
            case 0x2DB900u: goto label_2db900;
            case 0x2DB904u: goto label_2db904;
            case 0x2DB908u: goto label_2db908;
            case 0x2DB90Cu: goto label_2db90c;
            case 0x2DB910u: goto label_2db910;
            case 0x2DB914u: goto label_2db914;
            case 0x2DB918u: goto label_2db918;
            case 0x2DB91Cu: goto label_2db91c;
            case 0x2DB920u: goto label_2db920;
            case 0x2DB924u: goto label_2db924;
            case 0x2DB928u: goto label_2db928;
            case 0x2DB92Cu: goto label_2db92c;
            case 0x2DB930u: goto label_2db930;
            case 0x2DB934u: goto label_2db934;
            case 0x2DB938u: goto label_2db938;
            case 0x2DB93Cu: goto label_2db93c;
            case 0x2DB940u: goto label_2db940;
            case 0x2DB944u: goto label_2db944;
            case 0x2DB948u: goto label_2db948;
            case 0x2DB94Cu: goto label_2db94c;
            case 0x2DB950u: goto label_2db950;
            case 0x2DB954u: goto label_2db954;
            case 0x2DB958u: goto label_2db958;
            case 0x2DB95Cu: goto label_2db95c;
            case 0x2DB960u: goto label_2db960;
            case 0x2DB964u: goto label_2db964;
            case 0x2DB968u: goto label_2db968;
            case 0x2DB96Cu: goto label_2db96c;
            case 0x2DB970u: goto label_2db970;
            case 0x2DB974u: goto label_2db974;
            case 0x2DB978u: goto label_2db978;
            case 0x2DB97Cu: goto label_2db97c;
            case 0x2DB980u: goto label_2db980;
            case 0x2DB984u: goto label_2db984;
            case 0x2DB988u: goto label_2db988;
            case 0x2DB98Cu: goto label_2db98c;
            case 0x2DB990u: goto label_2db990;
            case 0x2DB994u: goto label_2db994;
            case 0x2DB998u: goto label_2db998;
            case 0x2DB99Cu: goto label_2db99c;
            case 0x2DB9A0u: goto label_2db9a0;
            case 0x2DB9A4u: goto label_2db9a4;
            case 0x2DB9A8u: goto label_2db9a8;
            case 0x2DB9ACu: goto label_2db9ac;
            case 0x2DB9B0u: goto label_2db9b0;
            case 0x2DB9B4u: goto label_2db9b4;
            case 0x2DB9B8u: goto label_2db9b8;
            case 0x2DB9BCu: goto label_2db9bc;
            case 0x2DB9C0u: goto label_2db9c0;
            case 0x2DB9C4u: goto label_2db9c4;
            case 0x2DB9C8u: goto label_2db9c8;
            case 0x2DB9CCu: goto label_2db9cc;
            case 0x2DB9D0u: goto label_2db9d0;
            case 0x2DB9D4u: goto label_2db9d4;
            case 0x2DB9D8u: goto label_2db9d8;
            case 0x2DB9DCu: goto label_2db9dc;
            case 0x2DB9E0u: goto label_2db9e0;
            case 0x2DB9E4u: goto label_2db9e4;
            case 0x2DB9E8u: goto label_2db9e8;
            case 0x2DB9ECu: goto label_2db9ec;
            case 0x2DB9F0u: goto label_2db9f0;
            case 0x2DB9F4u: goto label_2db9f4;
            case 0x2DB9F8u: goto label_2db9f8;
            case 0x2DB9FCu: goto label_2db9fc;
            case 0x2DBA00u: goto label_2dba00;
            case 0x2DBA04u: goto label_2dba04;
            case 0x2DBA08u: goto label_2dba08;
            case 0x2DBA0Cu: goto label_2dba0c;
            case 0x2DBA10u: goto label_2dba10;
            case 0x2DBA14u: goto label_2dba14;
            case 0x2DBA18u: goto label_2dba18;
            case 0x2DBA1Cu: goto label_2dba1c;
            case 0x2DBA20u: goto label_2dba20;
            case 0x2DBA24u: goto label_2dba24;
            case 0x2DBA28u: goto label_2dba28;
            case 0x2DBA2Cu: goto label_2dba2c;
            case 0x2DBA30u: goto label_2dba30;
            default: break;
        }
        return;
    }
label_fallthrough_0x2dba2c:
    ctx->pc = 0x2DBA34u;
}
