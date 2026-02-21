#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dualPrimeVector
// Address: 0x2f1310 - 0x2f1498
void _dualPrimeVector_0x2f1310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1310u;

    // 0x2f1310: 0x3c08003a
    ctx->pc = 0x2f1310u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f1314: 0x24020003
    ctx->pc = 0x2f1314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1318: 0x8d0331ec
    ctx->pc = 0x2f1318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 12780)));
    // 0x2f131c: 0x14620045
    ctx->pc = 0x2F131Cu;
    {
        const bool branch_taken_0x2f131c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F1320u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f131c) {
            ctx->pc = 0x2F1434u;
            goto label_2f1434;
        }
    }
    ctx->pc = 0x2F1324u;
    // 0x2f1324: 0x8c4331f0
    ctx->pc = 0x2f1324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12784)));
    // 0x2f1328: 0x50600024
    ctx->pc = 0x2F1328u;
    {
        const bool branch_taken_0x2f1328 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f1328) {
            ctx->pc = 0x2F132Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x2F13BCu;
            goto label_2f13bc;
        }
    }
    ctx->pc = 0x2F1330u;
    // 0x2f1330: 0x18c00004
    ctx->pc = 0x2F1330u;
    {
        const bool branch_taken_0x2f1330 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F1334u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2f1330) {
            ctx->pc = 0x2F1344u;
            goto label_2f1344;
        }
    }
    ctx->pc = 0x2F1338u;
    // 0x2f1338: 0x24c20001
    ctx->pc = 0x2f1338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f133c: 0x10000002
    ctx->pc = 0x2F133Cu;
    {
        const bool branch_taken_0x2f133c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1340u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2f133c) {
            ctx->pc = 0x2F1348u;
            goto label_2f1348;
        }
    }
    ctx->pc = 0x2F1344u;
label_2f1344:
    // 0x2f1344: 0x61043
    ctx->pc = 0x2f1344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_2f1348:
    // 0x2f1348: 0x431021
    ctx->pc = 0x2f1348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f134c: 0xac820000
    ctx->pc = 0x2f134cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f1350: 0x18e00004
    ctx->pc = 0x2F1350u;
    {
        const bool branch_taken_0x2f1350 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F1354u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f1350) {
            ctx->pc = 0x2F1364u;
            goto label_2f1364;
        }
    }
    ctx->pc = 0x2F1358u;
    // 0x2f1358: 0x24e20001
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f135c: 0x10000002
    ctx->pc = 0x2F135Cu;
    {
        const bool branch_taken_0x2f135c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1360u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2f135c) {
            ctx->pc = 0x2F1368u;
            goto label_2f1368;
        }
    }
    ctx->pc = 0x2F1364u;
label_2f1364:
    // 0x2f1364: 0x71043
    ctx->pc = 0x2f1364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_2f1368:
    // 0x2f1368: 0x431021
    ctx->pc = 0x2f1368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f136c: 0x2442ffff
    ctx->pc = 0x2f136cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f1370: 0xac820004
    ctx->pc = 0x2f1370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2f1374: 0x61040
    ctx->pc = 0x2f1374u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2f1378: 0x461021
    ctx->pc = 0x2f1378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f137c: 0x18c00002
    ctx->pc = 0x2F137Cu;
    {
        const bool branch_taken_0x2f137c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F1380u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2f137c) {
            ctx->pc = 0x2F1388u;
            goto label_2f1388;
        }
    }
    ctx->pc = 0x2F1384u;
    // 0x2f1384: 0x24420001
    ctx->pc = 0x2f1384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2f1388:
    // 0x2f1388: 0x21043
    ctx->pc = 0x2f1388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f138c: 0x431021
    ctx->pc = 0x2f138cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1390: 0xac820008
    ctx->pc = 0x2f1390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f1394: 0x71040
    ctx->pc = 0x2f1394u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x2f1398: 0x471021
    ctx->pc = 0x2f1398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f139c: 0x18e00002
    ctx->pc = 0x2F139Cu;
    {
        const bool branch_taken_0x2f139c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F13A0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f139c) {
            ctx->pc = 0x2F13A8u;
            goto label_2f13a8;
        }
    }
    ctx->pc = 0x2F13A4u;
    // 0x2f13a4: 0x24420001
    ctx->pc = 0x2f13a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2f13a8:
    // 0x2f13a8: 0x21043
    ctx->pc = 0x2f13a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2f13ac:
    // 0x2f13ac: 0x451021
    ctx->pc = 0x2f13acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f13b0: 0x24420001
    ctx->pc = 0x2f13b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f13b4: 0x3e00008
    ctx->pc = 0x2F13B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F13B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1344u: goto label_2f1344;
            case 0x2F1348u: goto label_2f1348;
            case 0x2F1364u: goto label_2f1364;
            case 0x2F1368u: goto label_2f1368;
            case 0x2F1388u: goto label_2f1388;
            case 0x2F13A8u: goto label_2f13a8;
            case 0x2F13ACu: goto label_2f13ac;
            case 0x2F13BCu: goto label_2f13bc;
            case 0x2F13CCu: goto label_2f13cc;
            case 0x2F13ECu: goto label_2f13ec;
            case 0x2F1410u: goto label_2f1410;
            case 0x2F1414u: goto label_2f1414;
            case 0x2F142Cu: goto label_2f142c;
            case 0x2F1434u: goto label_2f1434;
            case 0x2F1448u: goto label_2f1448;
            case 0x2F144Cu: goto label_2f144c;
            case 0x2F1468u: goto label_2f1468;
            case 0x2F146Cu: goto label_2f146c;
            case 0x2F148Cu: goto label_2f148c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F13BCu;
label_2f13bc:
    // 0x2f13bc: 0x8ca30000
    ctx->pc = 0x2f13bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f13c0: 0x18c00002
    ctx->pc = 0x2F13C0u;
    {
        const bool branch_taken_0x2f13c0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F13C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x2f13c0) {
            ctx->pc = 0x2F13CCu;
            goto label_2f13cc;
        }
    }
    ctx->pc = 0x2F13C8u;
    // 0x2f13c8: 0x24420001
    ctx->pc = 0x2f13c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2f13cc:
    // 0x2f13cc: 0x21043
    ctx->pc = 0x2f13ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f13d0: 0x431021
    ctx->pc = 0x2f13d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f13d4: 0xac820000
    ctx->pc = 0x2f13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f13d8: 0x71040
    ctx->pc = 0x2f13d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x2f13dc: 0x471021
    ctx->pc = 0x2f13dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f13e0: 0x18e00002
    ctx->pc = 0x2F13E0u;
    {
        const bool branch_taken_0x2f13e0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F13E4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f13e0) {
            ctx->pc = 0x2F13ECu;
            goto label_2f13ec;
        }
    }
    ctx->pc = 0x2F13E8u;
    // 0x2f13e8: 0x24420001
    ctx->pc = 0x2f13e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2f13ec:
    // 0x2f13ec: 0x21043
    ctx->pc = 0x2f13ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f13f0: 0x431021
    ctx->pc = 0x2f13f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f13f4: 0x2442ffff
    ctx->pc = 0x2f13f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f13f8: 0xac820004
    ctx->pc = 0x2f13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2f13fc: 0x18c00004
    ctx->pc = 0x2F13FCu;
    {
        const bool branch_taken_0x2f13fc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F1400u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2f13fc) {
            ctx->pc = 0x2F1410u;
            goto label_2f1410;
        }
    }
    ctx->pc = 0x2F1404u;
    // 0x2f1404: 0x24c20001
    ctx->pc = 0x2f1404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f1408: 0x10000002
    ctx->pc = 0x2F1408u;
    {
        const bool branch_taken_0x2f1408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F140Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2f1408) {
            ctx->pc = 0x2F1414u;
            goto label_2f1414;
        }
    }
    ctx->pc = 0x2F1410u;
label_2f1410:
    // 0x2f1410: 0x61043
    ctx->pc = 0x2f1410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_2f1414:
    // 0x2f1414: 0x431021
    ctx->pc = 0x2f1414u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1418: 0xac820008
    ctx->pc = 0x2f1418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f141c: 0x18e00003
    ctx->pc = 0x2F141Cu;
    {
        const bool branch_taken_0x2f141c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F1420u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f141c) {
            ctx->pc = 0x2F142Cu;
            goto label_2f142c;
        }
    }
    ctx->pc = 0x2F1424u;
    // 0x2f1424: 0x1000ffe0
    ctx->pc = 0x2F1424u;
    {
        const bool branch_taken_0x2f1424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1428u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x2f1424) {
            ctx->pc = 0x2F13A8u;
            goto label_2f13a8;
        }
    }
    ctx->pc = 0x2F142Cu;
label_2f142c:
    // 0x2f142c: 0x1000ffdf
    ctx->pc = 0x2F142Cu;
    {
        const bool branch_taken_0x2f142c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1430u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        if (branch_taken_0x2f142c) {
            ctx->pc = 0x2F13ACu;
            goto label_2f13ac;
        }
    }
    ctx->pc = 0x2F1434u;
label_2f1434:
    // 0x2f1434: 0x18c00004
    ctx->pc = 0x2F1434u;
    {
        const bool branch_taken_0x2f1434 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F1438u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2f1434) {
            ctx->pc = 0x2F1448u;
            goto label_2f1448;
        }
    }
    ctx->pc = 0x2F143Cu;
    // 0x2f143c: 0x24c20001
    ctx->pc = 0x2f143cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f1440: 0x10000002
    ctx->pc = 0x2F1440u;
    {
        const bool branch_taken_0x2f1440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1444u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2f1440) {
            ctx->pc = 0x2F144Cu;
            goto label_2f144c;
        }
    }
    ctx->pc = 0x2F1448u;
label_2f1448:
    // 0x2f1448: 0x61043
    ctx->pc = 0x2f1448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_2f144c:
    // 0x2f144c: 0x431021
    ctx->pc = 0x2f144cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1450: 0xac820000
    ctx->pc = 0x2f1450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f1454: 0x18e00004
    ctx->pc = 0x2F1454u;
    {
        const bool branch_taken_0x2f1454 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F1458u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f1454) {
            ctx->pc = 0x2F1468u;
            goto label_2f1468;
        }
    }
    ctx->pc = 0x2F145Cu;
    // 0x2f145c: 0x24e20001
    ctx->pc = 0x2f145cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f1460: 0x10000002
    ctx->pc = 0x2F1460u;
    {
        const bool branch_taken_0x2f1460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1464u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2f1460) {
            ctx->pc = 0x2F146Cu;
            goto label_2f146c;
        }
    }
    ctx->pc = 0x2F1468u;
label_2f1468:
    // 0x2f1468: 0x71043
    ctx->pc = 0x2f1468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_2f146c:
    // 0x2f146c: 0x452821
    ctx->pc = 0x2f146cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f1470: 0x8d0331ec
    ctx->pc = 0x2f1470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 12780)));
    // 0x2f1474: 0x24020001
    ctx->pc = 0x2f1474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1478: 0x14620004
    ctx->pc = 0x2F1478u;
    {
        const bool branch_taken_0x2f1478 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F147Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x2f1478) {
            ctx->pc = 0x2F148Cu;
            goto label_2f148c;
        }
    }
    ctx->pc = 0x2F1480u;
    // 0x2f1480: 0x24a2ffff
    ctx->pc = 0x2f1480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f1484: 0x3e00008
    ctx->pc = 0x2F1484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1488u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1344u: goto label_2f1344;
            case 0x2F1348u: goto label_2f1348;
            case 0x2F1364u: goto label_2f1364;
            case 0x2F1368u: goto label_2f1368;
            case 0x2F1388u: goto label_2f1388;
            case 0x2F13A8u: goto label_2f13a8;
            case 0x2F13ACu: goto label_2f13ac;
            case 0x2F13BCu: goto label_2f13bc;
            case 0x2F13CCu: goto label_2f13cc;
            case 0x2F13ECu: goto label_2f13ec;
            case 0x2F1410u: goto label_2f1410;
            case 0x2F1414u: goto label_2f1414;
            case 0x2F142Cu: goto label_2f142c;
            case 0x2F1434u: goto label_2f1434;
            case 0x2F1448u: goto label_2f1448;
            case 0x2F144Cu: goto label_2f144c;
            case 0x2F1468u: goto label_2f1468;
            case 0x2F146Cu: goto label_2f146c;
            case 0x2F148Cu: goto label_2f148c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F148Cu;
label_2f148c:
    // 0x2f148c: 0x24a20001
    ctx->pc = 0x2f148cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1490: 0x3e00008
    ctx->pc = 0x2F1490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1494u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1344u: goto label_2f1344;
            case 0x2F1348u: goto label_2f1348;
            case 0x2F1364u: goto label_2f1364;
            case 0x2F1368u: goto label_2f1368;
            case 0x2F1388u: goto label_2f1388;
            case 0x2F13A8u: goto label_2f13a8;
            case 0x2F13ACu: goto label_2f13ac;
            case 0x2F13BCu: goto label_2f13bc;
            case 0x2F13CCu: goto label_2f13cc;
            case 0x2F13ECu: goto label_2f13ec;
            case 0x2F1410u: goto label_2f1410;
            case 0x2F1414u: goto label_2f1414;
            case 0x2F142Cu: goto label_2f142c;
            case 0x2F1434u: goto label_2f1434;
            case 0x2F1448u: goto label_2f1448;
            case 0x2F144Cu: goto label_2f144c;
            case 0x2F1468u: goto label_2f1468;
            case 0x2F146Cu: goto label_2f146c;
            case 0x2F148Cu: goto label_2f148c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F1498u;
}
