#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eCHGLIGHT__13LightCtrlTaskFPUi
// Address: 0x1f12f0 - 0x1f289c
void eCHGLIGHT__13LightCtrlTaskFPUi_0x1f12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eCHGLIGHT__13LightCtrlTaskFPUi");


    ctx->pc = 0x1f12f0u;

label_1f12f0:
    // 0x1f12f0: 0x8c86000c
    ctx->pc = 0x1f12f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f12f4:
    // 0x1f12f4: 0x8ca20004
    ctx->pc = 0x1f12f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f12f8:
    // 0x1f12f8: 0x61840
    ctx->pc = 0x1f12f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
label_1f12fc:
    // 0x1f12fc: 0x661821
    ctx->pc = 0x1f12fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1300:
    // 0x1f1300: 0x318c0
    ctx->pc = 0x1f1300u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f1304:
    // 0x1f1304: 0x661823
    ctx->pc = 0x1f1304u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1308:
    // 0x1f1308: 0x31880
    ctx->pc = 0x1f1308u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f130c:
    // 0x1f130c: 0x831821
    ctx->pc = 0x1f130cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f1310:
    // 0x1f1310: 0x2c410009
    ctx->pc = 0x1f1310u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 9));
label_1f1314:
    // 0x1f1314: 0x10200008
label_1f1318:
    if (ctx->pc == 0x1F1318u) {
        ctx->pc = 0x1F1318u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1F131Cu;
        goto label_1f131c;
    }
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1318u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1338u;
            goto label_1f1338;
        }
    }
    ctx->pc = 0x1F131Cu;
label_1f131c:
    // 0x1f131c: 0x3c03002c
    ctx->pc = 0x1f131cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_1f1320:
    // 0x1f1320: 0x21080
    ctx->pc = 0x1f1320u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1f1324:
    // 0x1f1324: 0x2463f8f0
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965488));
label_1f1328:
    // 0x1f1328: 0x431021
    ctx->pc = 0x1f1328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f132c:
    // 0x1f132c: 0x8c420000
    ctx->pc = 0x1f132cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1330:
    // 0x1f1330: 0x400008
label_1f1334:
    if (ctx->pc == 0x1F1334u) {
        ctx->pc = 0x1F1338u;
        goto label_1f1338;
    }
    ctx->pc = 0x1F1330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F12F0u: goto label_1f12f0;
            case 0x1F12F4u: goto label_1f12f4;
            case 0x1F12F8u: goto label_1f12f8;
            case 0x1F12FCu: goto label_1f12fc;
            case 0x1F1300u: goto label_1f1300;
            case 0x1F1304u: goto label_1f1304;
            case 0x1F1308u: goto label_1f1308;
            case 0x1F130Cu: goto label_1f130c;
            case 0x1F1310u: goto label_1f1310;
            case 0x1F1314u: goto label_1f1314;
            case 0x1F1318u: goto label_1f1318;
            case 0x1F131Cu: goto label_1f131c;
            case 0x1F1320u: goto label_1f1320;
            case 0x1F1324u: goto label_1f1324;
            case 0x1F1328u: goto label_1f1328;
            case 0x1F132Cu: goto label_1f132c;
            case 0x1F1330u: goto label_1f1330;
            case 0x1F1334u: goto label_1f1334;
            case 0x1F1338u: goto label_1f1338;
            case 0x1F133Cu: goto label_1f133c;
            case 0x1F1340u: goto label_1f1340;
            case 0x1F1344u: goto label_1f1344;
            case 0x1F1348u: goto label_1f1348;
            case 0x1F134Cu: goto label_1f134c;
            case 0x1F1350u: goto label_1f1350;
            case 0x1F1354u: goto label_1f1354;
            case 0x1F1358u: goto label_1f1358;
            case 0x1F135Cu: goto label_1f135c;
            case 0x1F1360u: goto label_1f1360;
            case 0x1F1364u: goto label_1f1364;
            case 0x1F1368u: goto label_1f1368;
            case 0x1F136Cu: goto label_1f136c;
            case 0x1F1370u: goto label_1f1370;
            case 0x1F1374u: goto label_1f1374;
            case 0x1F1378u: goto label_1f1378;
            case 0x1F137Cu: goto label_1f137c;
            case 0x1F1380u: goto label_1f1380;
            case 0x1F1384u: goto label_1f1384;
            case 0x1F1388u: goto label_1f1388;
            case 0x1F138Cu: goto label_1f138c;
            case 0x1F1390u: goto label_1f1390;
            case 0x1F1394u: goto label_1f1394;
            case 0x1F1398u: goto label_1f1398;
            case 0x1F139Cu: goto label_1f139c;
            case 0x1F13A0u: goto label_1f13a0;
            case 0x1F13A4u: goto label_1f13a4;
            case 0x1F13A8u: goto label_1f13a8;
            case 0x1F13ACu: goto label_1f13ac;
            case 0x1F13B0u: goto label_1f13b0;
            case 0x1F13B4u: goto label_1f13b4;
            case 0x1F13B8u: goto label_1f13b8;
            case 0x1F13BCu: goto label_1f13bc;
            case 0x1F13C0u: goto label_1f13c0;
            case 0x1F13C4u: goto label_1f13c4;
            case 0x1F13C8u: goto label_1f13c8;
            case 0x1F13CCu: goto label_1f13cc;
            case 0x1F13D0u: goto label_1f13d0;
            case 0x1F13D4u: goto label_1f13d4;
            case 0x1F13D8u: goto label_1f13d8;
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13E0u: goto label_1f13e0;
            case 0x1F13E4u: goto label_1f13e4;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F13F0u: goto label_1f13f0;
            case 0x1F13F4u: goto label_1f13f4;
            case 0x1F13F8u: goto label_1f13f8;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F1400u: goto label_1f1400;
            case 0x1F1404u: goto label_1f1404;
            case 0x1F1408u: goto label_1f1408;
            case 0x1F140Cu: goto label_1f140c;
            case 0x1F1410u: goto label_1f1410;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F1420u: goto label_1f1420;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1428u: goto label_1f1428;
            case 0x1F142Cu: goto label_1f142c;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1434u: goto label_1f1434;
            case 0x1F1438u: goto label_1f1438;
            case 0x1F143Cu: goto label_1f143c;
            case 0x1F1440u: goto label_1f1440;
            case 0x1F1444u: goto label_1f1444;
            case 0x1F1448u: goto label_1f1448;
            case 0x1F144Cu: goto label_1f144c;
            case 0x1F1450u: goto label_1f1450;
            case 0x1F1454u: goto label_1f1454;
            case 0x1F1458u: goto label_1f1458;
            case 0x1F145Cu: goto label_1f145c;
            case 0x1F1460u: goto label_1f1460;
            case 0x1F1464u: goto label_1f1464;
            case 0x1F1468u: goto label_1f1468;
            case 0x1F146Cu: goto label_1f146c;
            case 0x1F1470u: goto label_1f1470;
            case 0x1F1474u: goto label_1f1474;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F147Cu: goto label_1f147c;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1484u: goto label_1f1484;
            case 0x1F1488u: goto label_1f1488;
            case 0x1F148Cu: goto label_1f148c;
            case 0x1F1490u: goto label_1f1490;
            case 0x1F1494u: goto label_1f1494;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F149Cu: goto label_1f149c;
            case 0x1F14A0u: goto label_1f14a0;
            case 0x1F14A4u: goto label_1f14a4;
            case 0x1F14A8u: goto label_1f14a8;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14B0u: goto label_1f14b0;
            case 0x1F14B4u: goto label_1f14b4;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14C0u: goto label_1f14c0;
            case 0x1F14C4u: goto label_1f14c4;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F14D4u: goto label_1f14d4;
            case 0x1F14D8u: goto label_1f14d8;
            case 0x1F14DCu: goto label_1f14dc;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14E4u: goto label_1f14e4;
            case 0x1F14E8u: goto label_1f14e8;
            case 0x1F14ECu: goto label_1f14ec;
            case 0x1F14F0u: goto label_1f14f0;
            case 0x1F14F4u: goto label_1f14f4;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F14FCu: goto label_1f14fc;
            case 0x1F1500u: goto label_1f1500;
            case 0x1F1504u: goto label_1f1504;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F150Cu: goto label_1f150c;
            case 0x1F1510u: goto label_1f1510;
            case 0x1F1514u: goto label_1f1514;
            case 0x1F1518u: goto label_1f1518;
            case 0x1F151Cu: goto label_1f151c;
            case 0x1F1520u: goto label_1f1520;
            case 0x1F1524u: goto label_1f1524;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F152Cu: goto label_1f152c;
            case 0x1F1530u: goto label_1f1530;
            case 0x1F1534u: goto label_1f1534;
            case 0x1F1538u: goto label_1f1538;
            case 0x1F153Cu: goto label_1f153c;
            case 0x1F1540u: goto label_1f1540;
            case 0x1F1544u: goto label_1f1544;
            case 0x1F1548u: goto label_1f1548;
            case 0x1F154Cu: goto label_1f154c;
            case 0x1F1550u: goto label_1f1550;
            case 0x1F1554u: goto label_1f1554;
            case 0x1F1558u: goto label_1f1558;
            case 0x1F155Cu: goto label_1f155c;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1564u: goto label_1f1564;
            case 0x1F1568u: goto label_1f1568;
            case 0x1F156Cu: goto label_1f156c;
            case 0x1F1570u: goto label_1f1570;
            case 0x1F1574u: goto label_1f1574;
            case 0x1F1578u: goto label_1f1578;
            case 0x1F157Cu: goto label_1f157c;
            case 0x1F1580u: goto label_1f1580;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F1588u: goto label_1f1588;
            case 0x1F158Cu: goto label_1f158c;
            case 0x1F1590u: goto label_1f1590;
            case 0x1F1594u: goto label_1f1594;
            case 0x1F1598u: goto label_1f1598;
            case 0x1F159Cu: goto label_1f159c;
            case 0x1F15A0u: goto label_1f15a0;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15A8u: goto label_1f15a8;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15B0u: goto label_1f15b0;
            case 0x1F15B4u: goto label_1f15b4;
            case 0x1F15B8u: goto label_1f15b8;
            case 0x1F15BCu: goto label_1f15bc;
            case 0x1F15C0u: goto label_1f15c0;
            case 0x1F15C4u: goto label_1f15c4;
            case 0x1F15C8u: goto label_1f15c8;
            case 0x1F15CCu: goto label_1f15cc;
            case 0x1F15D0u: goto label_1f15d0;
            case 0x1F15D4u: goto label_1f15d4;
            case 0x1F15D8u: goto label_1f15d8;
            case 0x1F15DCu: goto label_1f15dc;
            case 0x1F15E0u: goto label_1f15e0;
            case 0x1F15E4u: goto label_1f15e4;
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F15ECu: goto label_1f15ec;
            case 0x1F15F0u: goto label_1f15f0;
            case 0x1F15F4u: goto label_1f15f4;
            case 0x1F15F8u: goto label_1f15f8;
            case 0x1F15FCu: goto label_1f15fc;
            case 0x1F1600u: goto label_1f1600;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F160Cu: goto label_1f160c;
            case 0x1F1610u: goto label_1f1610;
            case 0x1F1614u: goto label_1f1614;
            case 0x1F1618u: goto label_1f1618;
            case 0x1F161Cu: goto label_1f161c;
            case 0x1F1620u: goto label_1f1620;
            case 0x1F1624u: goto label_1f1624;
            case 0x1F1628u: goto label_1f1628;
            case 0x1F162Cu: goto label_1f162c;
            case 0x1F1630u: goto label_1f1630;
            case 0x1F1634u: goto label_1f1634;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1640u: goto label_1f1640;
            case 0x1F1644u: goto label_1f1644;
            case 0x1F1648u: goto label_1f1648;
            case 0x1F164Cu: goto label_1f164c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F1654u: goto label_1f1654;
            case 0x1F1658u: goto label_1f1658;
            case 0x1F165Cu: goto label_1f165c;
            case 0x1F1660u: goto label_1f1660;
            case 0x1F1664u: goto label_1f1664;
            case 0x1F1668u: goto label_1f1668;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1670u: goto label_1f1670;
            case 0x1F1674u: goto label_1f1674;
            case 0x1F1678u: goto label_1f1678;
            case 0x1F167Cu: goto label_1f167c;
            case 0x1F1680u: goto label_1f1680;
            case 0x1F1684u: goto label_1f1684;
            case 0x1F1688u: goto label_1f1688;
            case 0x1F168Cu: goto label_1f168c;
            case 0x1F1690u: goto label_1f1690;
            case 0x1F1694u: goto label_1f1694;
            case 0x1F1698u: goto label_1f1698;
            case 0x1F169Cu: goto label_1f169c;
            case 0x1F16A0u: goto label_1f16a0;
            case 0x1F16A4u: goto label_1f16a4;
            case 0x1F16A8u: goto label_1f16a8;
            case 0x1F16ACu: goto label_1f16ac;
            case 0x1F16B0u: goto label_1f16b0;
            case 0x1F16B4u: goto label_1f16b4;
            case 0x1F16B8u: goto label_1f16b8;
            case 0x1F16BCu: goto label_1f16bc;
            case 0x1F16C0u: goto label_1f16c0;
            case 0x1F16C4u: goto label_1f16c4;
            case 0x1F16C8u: goto label_1f16c8;
            case 0x1F16CCu: goto label_1f16cc;
            case 0x1F16D0u: goto label_1f16d0;
            case 0x1F16D4u: goto label_1f16d4;
            case 0x1F16D8u: goto label_1f16d8;
            case 0x1F16DCu: goto label_1f16dc;
            case 0x1F16E0u: goto label_1f16e0;
            case 0x1F16E4u: goto label_1f16e4;
            case 0x1F16E8u: goto label_1f16e8;
            case 0x1F16ECu: goto label_1f16ec;
            case 0x1F16F0u: goto label_1f16f0;
            case 0x1F16F4u: goto label_1f16f4;
            case 0x1F16F8u: goto label_1f16f8;
            case 0x1F16FCu: goto label_1f16fc;
            case 0x1F1700u: goto label_1f1700;
            case 0x1F1704u: goto label_1f1704;
            case 0x1F1708u: goto label_1f1708;
            case 0x1F170Cu: goto label_1f170c;
            case 0x1F1710u: goto label_1f1710;
            case 0x1F1714u: goto label_1f1714;
            case 0x1F1718u: goto label_1f1718;
            case 0x1F171Cu: goto label_1f171c;
            case 0x1F1720u: goto label_1f1720;
            case 0x1F1724u: goto label_1f1724;
            case 0x1F1728u: goto label_1f1728;
            case 0x1F172Cu: goto label_1f172c;
            case 0x1F1730u: goto label_1f1730;
            case 0x1F1734u: goto label_1f1734;
            case 0x1F1738u: goto label_1f1738;
            case 0x1F173Cu: goto label_1f173c;
            case 0x1F1740u: goto label_1f1740;
            case 0x1F1744u: goto label_1f1744;
            case 0x1F1748u: goto label_1f1748;
            case 0x1F174Cu: goto label_1f174c;
            case 0x1F1750u: goto label_1f1750;
            case 0x1F1754u: goto label_1f1754;
            case 0x1F1758u: goto label_1f1758;
            case 0x1F175Cu: goto label_1f175c;
            case 0x1F1760u: goto label_1f1760;
            case 0x1F1764u: goto label_1f1764;
            case 0x1F1768u: goto label_1f1768;
            case 0x1F176Cu: goto label_1f176c;
            case 0x1F1770u: goto label_1f1770;
            case 0x1F1774u: goto label_1f1774;
            case 0x1F1778u: goto label_1f1778;
            case 0x1F177Cu: goto label_1f177c;
            case 0x1F1780u: goto label_1f1780;
            case 0x1F1784u: goto label_1f1784;
            case 0x1F1788u: goto label_1f1788;
            case 0x1F178Cu: goto label_1f178c;
            case 0x1F1790u: goto label_1f1790;
            case 0x1F1794u: goto label_1f1794;
            case 0x1F1798u: goto label_1f1798;
            case 0x1F179Cu: goto label_1f179c;
            case 0x1F17A0u: goto label_1f17a0;
            case 0x1F17A4u: goto label_1f17a4;
            case 0x1F17A8u: goto label_1f17a8;
            case 0x1F17ACu: goto label_1f17ac;
            case 0x1F17B0u: goto label_1f17b0;
            case 0x1F17B4u: goto label_1f17b4;
            case 0x1F17B8u: goto label_1f17b8;
            case 0x1F17BCu: goto label_1f17bc;
            case 0x1F17C0u: goto label_1f17c0;
            case 0x1F17C4u: goto label_1f17c4;
            case 0x1F17C8u: goto label_1f17c8;
            case 0x1F17CCu: goto label_1f17cc;
            case 0x1F17D0u: goto label_1f17d0;
            case 0x1F17D4u: goto label_1f17d4;
            case 0x1F17D8u: goto label_1f17d8;
            case 0x1F17DCu: goto label_1f17dc;
            case 0x1F17E0u: goto label_1f17e0;
            case 0x1F17E4u: goto label_1f17e4;
            case 0x1F17E8u: goto label_1f17e8;
            case 0x1F17ECu: goto label_1f17ec;
            case 0x1F17F0u: goto label_1f17f0;
            case 0x1F17F4u: goto label_1f17f4;
            case 0x1F17F8u: goto label_1f17f8;
            case 0x1F17FCu: goto label_1f17fc;
            case 0x1F1800u: goto label_1f1800;
            case 0x1F1804u: goto label_1f1804;
            case 0x1F1808u: goto label_1f1808;
            case 0x1F180Cu: goto label_1f180c;
            case 0x1F1810u: goto label_1f1810;
            case 0x1F1814u: goto label_1f1814;
            case 0x1F1818u: goto label_1f1818;
            case 0x1F181Cu: goto label_1f181c;
            case 0x1F1820u: goto label_1f1820;
            case 0x1F1824u: goto label_1f1824;
            case 0x1F1828u: goto label_1f1828;
            case 0x1F182Cu: goto label_1f182c;
            case 0x1F1830u: goto label_1f1830;
            case 0x1F1834u: goto label_1f1834;
            case 0x1F1838u: goto label_1f1838;
            case 0x1F183Cu: goto label_1f183c;
            case 0x1F1840u: goto label_1f1840;
            case 0x1F1844u: goto label_1f1844;
            case 0x1F1848u: goto label_1f1848;
            case 0x1F184Cu: goto label_1f184c;
            case 0x1F1850u: goto label_1f1850;
            case 0x1F1854u: goto label_1f1854;
            case 0x1F1858u: goto label_1f1858;
            case 0x1F185Cu: goto label_1f185c;
            case 0x1F1860u: goto label_1f1860;
            case 0x1F1864u: goto label_1f1864;
            case 0x1F1868u: goto label_1f1868;
            case 0x1F186Cu: goto label_1f186c;
            case 0x1F1870u: goto label_1f1870;
            case 0x1F1874u: goto label_1f1874;
            case 0x1F1878u: goto label_1f1878;
            case 0x1F187Cu: goto label_1f187c;
            case 0x1F1880u: goto label_1f1880;
            case 0x1F1884u: goto label_1f1884;
            case 0x1F1888u: goto label_1f1888;
            case 0x1F188Cu: goto label_1f188c;
            case 0x1F1890u: goto label_1f1890;
            case 0x1F1894u: goto label_1f1894;
            case 0x1F1898u: goto label_1f1898;
            case 0x1F189Cu: goto label_1f189c;
            case 0x1F18A0u: goto label_1f18a0;
            case 0x1F18A4u: goto label_1f18a4;
            case 0x1F18A8u: goto label_1f18a8;
            case 0x1F18ACu: goto label_1f18ac;
            case 0x1F18B0u: goto label_1f18b0;
            case 0x1F18B4u: goto label_1f18b4;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18BCu: goto label_1f18bc;
            case 0x1F18C0u: goto label_1f18c0;
            case 0x1F18C4u: goto label_1f18c4;
            case 0x1F18C8u: goto label_1f18c8;
            case 0x1F18CCu: goto label_1f18cc;
            case 0x1F18D0u: goto label_1f18d0;
            case 0x1F18D4u: goto label_1f18d4;
            case 0x1F18D8u: goto label_1f18d8;
            case 0x1F18DCu: goto label_1f18dc;
            case 0x1F18E0u: goto label_1f18e0;
            case 0x1F18E4u: goto label_1f18e4;
            case 0x1F18E8u: goto label_1f18e8;
            case 0x1F18ECu: goto label_1f18ec;
            case 0x1F18F0u: goto label_1f18f0;
            case 0x1F18F4u: goto label_1f18f4;
            case 0x1F18F8u: goto label_1f18f8;
            case 0x1F18FCu: goto label_1f18fc;
            case 0x1F1900u: goto label_1f1900;
            case 0x1F1904u: goto label_1f1904;
            case 0x1F1908u: goto label_1f1908;
            case 0x1F190Cu: goto label_1f190c;
            case 0x1F1910u: goto label_1f1910;
            case 0x1F1914u: goto label_1f1914;
            case 0x1F1918u: goto label_1f1918;
            case 0x1F191Cu: goto label_1f191c;
            case 0x1F1920u: goto label_1f1920;
            case 0x1F1924u: goto label_1f1924;
            case 0x1F1928u: goto label_1f1928;
            case 0x1F192Cu: goto label_1f192c;
            case 0x1F1930u: goto label_1f1930;
            case 0x1F1934u: goto label_1f1934;
            case 0x1F1938u: goto label_1f1938;
            case 0x1F193Cu: goto label_1f193c;
            case 0x1F1940u: goto label_1f1940;
            case 0x1F1944u: goto label_1f1944;
            case 0x1F1948u: goto label_1f1948;
            case 0x1F194Cu: goto label_1f194c;
            case 0x1F1950u: goto label_1f1950;
            case 0x1F1954u: goto label_1f1954;
            case 0x1F1958u: goto label_1f1958;
            case 0x1F195Cu: goto label_1f195c;
            case 0x1F1960u: goto label_1f1960;
            case 0x1F1964u: goto label_1f1964;
            case 0x1F1968u: goto label_1f1968;
            case 0x1F196Cu: goto label_1f196c;
            case 0x1F1970u: goto label_1f1970;
            case 0x1F1974u: goto label_1f1974;
            case 0x1F1978u: goto label_1f1978;
            case 0x1F197Cu: goto label_1f197c;
            case 0x1F1980u: goto label_1f1980;
            case 0x1F1984u: goto label_1f1984;
            case 0x1F1988u: goto label_1f1988;
            case 0x1F198Cu: goto label_1f198c;
            case 0x1F1990u: goto label_1f1990;
            case 0x1F1994u: goto label_1f1994;
            case 0x1F1998u: goto label_1f1998;
            case 0x1F199Cu: goto label_1f199c;
            case 0x1F19A0u: goto label_1f19a0;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            case 0x1F19ACu: goto label_1f19ac;
            case 0x1F19B0u: goto label_1f19b0;
            case 0x1F19B4u: goto label_1f19b4;
            case 0x1F19B8u: goto label_1f19b8;
            case 0x1F19BCu: goto label_1f19bc;
            case 0x1F19C0u: goto label_1f19c0;
            case 0x1F19C4u: goto label_1f19c4;
            case 0x1F19C8u: goto label_1f19c8;
            case 0x1F19CCu: goto label_1f19cc;
            case 0x1F19D0u: goto label_1f19d0;
            case 0x1F19D4u: goto label_1f19d4;
            case 0x1F19D8u: goto label_1f19d8;
            case 0x1F19DCu: goto label_1f19dc;
            case 0x1F19E0u: goto label_1f19e0;
            case 0x1F19E4u: goto label_1f19e4;
            case 0x1F19E8u: goto label_1f19e8;
            case 0x1F19ECu: goto label_1f19ec;
            case 0x1F19F0u: goto label_1f19f0;
            case 0x1F19F4u: goto label_1f19f4;
            case 0x1F19F8u: goto label_1f19f8;
            case 0x1F19FCu: goto label_1f19fc;
            case 0x1F1A00u: goto label_1f1a00;
            case 0x1F1A04u: goto label_1f1a04;
            case 0x1F1A08u: goto label_1f1a08;
            case 0x1F1A0Cu: goto label_1f1a0c;
            case 0x1F1A10u: goto label_1f1a10;
            case 0x1F1A14u: goto label_1f1a14;
            case 0x1F1A18u: goto label_1f1a18;
            case 0x1F1A1Cu: goto label_1f1a1c;
            case 0x1F1A20u: goto label_1f1a20;
            case 0x1F1A24u: goto label_1f1a24;
            case 0x1F1A28u: goto label_1f1a28;
            case 0x1F1A2Cu: goto label_1f1a2c;
            case 0x1F1A30u: goto label_1f1a30;
            case 0x1F1A34u: goto label_1f1a34;
            case 0x1F1A38u: goto label_1f1a38;
            case 0x1F1A3Cu: goto label_1f1a3c;
            case 0x1F1A40u: goto label_1f1a40;
            case 0x1F1A44u: goto label_1f1a44;
            case 0x1F1A48u: goto label_1f1a48;
            case 0x1F1A4Cu: goto label_1f1a4c;
            case 0x1F1A50u: goto label_1f1a50;
            case 0x1F1A54u: goto label_1f1a54;
            case 0x1F1A58u: goto label_1f1a58;
            case 0x1F1A5Cu: goto label_1f1a5c;
            case 0x1F1A60u: goto label_1f1a60;
            case 0x1F1A64u: goto label_1f1a64;
            case 0x1F1A68u: goto label_1f1a68;
            case 0x1F1A6Cu: goto label_1f1a6c;
            case 0x1F1A70u: goto label_1f1a70;
            case 0x1F1A74u: goto label_1f1a74;
            case 0x1F1A78u: goto label_1f1a78;
            case 0x1F1A7Cu: goto label_1f1a7c;
            case 0x1F1A80u: goto label_1f1a80;
            case 0x1F1A84u: goto label_1f1a84;
            case 0x1F1A88u: goto label_1f1a88;
            case 0x1F1A8Cu: goto label_1f1a8c;
            case 0x1F1A90u: goto label_1f1a90;
            case 0x1F1A94u: goto label_1f1a94;
            case 0x1F1A98u: goto label_1f1a98;
            case 0x1F1A9Cu: goto label_1f1a9c;
            case 0x1F1AA0u: goto label_1f1aa0;
            case 0x1F1AA4u: goto label_1f1aa4;
            case 0x1F1AA8u: goto label_1f1aa8;
            case 0x1F1AACu: goto label_1f1aac;
            case 0x1F1AB0u: goto label_1f1ab0;
            case 0x1F1AB4u: goto label_1f1ab4;
            case 0x1F1AB8u: goto label_1f1ab8;
            case 0x1F1ABCu: goto label_1f1abc;
            case 0x1F1AC0u: goto label_1f1ac0;
            case 0x1F1AC4u: goto label_1f1ac4;
            case 0x1F1AC8u: goto label_1f1ac8;
            case 0x1F1ACCu: goto label_1f1acc;
            case 0x1F1AD0u: goto label_1f1ad0;
            case 0x1F1AD4u: goto label_1f1ad4;
            case 0x1F1AD8u: goto label_1f1ad8;
            case 0x1F1ADCu: goto label_1f1adc;
            case 0x1F1AE0u: goto label_1f1ae0;
            case 0x1F1AE4u: goto label_1f1ae4;
            case 0x1F1AE8u: goto label_1f1ae8;
            case 0x1F1AECu: goto label_1f1aec;
            case 0x1F1AF0u: goto label_1f1af0;
            case 0x1F1AF4u: goto label_1f1af4;
            case 0x1F1AF8u: goto label_1f1af8;
            case 0x1F1AFCu: goto label_1f1afc;
            case 0x1F1B00u: goto label_1f1b00;
            case 0x1F1B04u: goto label_1f1b04;
            case 0x1F1B08u: goto label_1f1b08;
            case 0x1F1B0Cu: goto label_1f1b0c;
            case 0x1F1B10u: goto label_1f1b10;
            case 0x1F1B14u: goto label_1f1b14;
            case 0x1F1B18u: goto label_1f1b18;
            case 0x1F1B1Cu: goto label_1f1b1c;
            case 0x1F1B20u: goto label_1f1b20;
            case 0x1F1B24u: goto label_1f1b24;
            case 0x1F1B28u: goto label_1f1b28;
            case 0x1F1B2Cu: goto label_1f1b2c;
            case 0x1F1B30u: goto label_1f1b30;
            case 0x1F1B34u: goto label_1f1b34;
            case 0x1F1B38u: goto label_1f1b38;
            case 0x1F1B3Cu: goto label_1f1b3c;
            case 0x1F1B40u: goto label_1f1b40;
            case 0x1F1B44u: goto label_1f1b44;
            case 0x1F1B48u: goto label_1f1b48;
            case 0x1F1B4Cu: goto label_1f1b4c;
            case 0x1F1B50u: goto label_1f1b50;
            case 0x1F1B54u: goto label_1f1b54;
            case 0x1F1B58u: goto label_1f1b58;
            case 0x1F1B5Cu: goto label_1f1b5c;
            case 0x1F1B60u: goto label_1f1b60;
            case 0x1F1B64u: goto label_1f1b64;
            case 0x1F1B68u: goto label_1f1b68;
            case 0x1F1B6Cu: goto label_1f1b6c;
            case 0x1F1B70u: goto label_1f1b70;
            case 0x1F1B74u: goto label_1f1b74;
            case 0x1F1B78u: goto label_1f1b78;
            case 0x1F1B7Cu: goto label_1f1b7c;
            case 0x1F1B80u: goto label_1f1b80;
            case 0x1F1B84u: goto label_1f1b84;
            case 0x1F1B88u: goto label_1f1b88;
            case 0x1F1B8Cu: goto label_1f1b8c;
            case 0x1F1B90u: goto label_1f1b90;
            case 0x1F1B94u: goto label_1f1b94;
            case 0x1F1B98u: goto label_1f1b98;
            case 0x1F1B9Cu: goto label_1f1b9c;
            case 0x1F1BA0u: goto label_1f1ba0;
            case 0x1F1BA4u: goto label_1f1ba4;
            case 0x1F1BA8u: goto label_1f1ba8;
            case 0x1F1BACu: goto label_1f1bac;
            case 0x1F1BB0u: goto label_1f1bb0;
            case 0x1F1BB4u: goto label_1f1bb4;
            case 0x1F1BB8u: goto label_1f1bb8;
            case 0x1F1BBCu: goto label_1f1bbc;
            case 0x1F1BC0u: goto label_1f1bc0;
            case 0x1F1BC4u: goto label_1f1bc4;
            case 0x1F1BC8u: goto label_1f1bc8;
            case 0x1F1BCCu: goto label_1f1bcc;
            case 0x1F1BD0u: goto label_1f1bd0;
            case 0x1F1BD4u: goto label_1f1bd4;
            case 0x1F1BD8u: goto label_1f1bd8;
            case 0x1F1BDCu: goto label_1f1bdc;
            case 0x1F1BE0u: goto label_1f1be0;
            case 0x1F1BE4u: goto label_1f1be4;
            case 0x1F1BE8u: goto label_1f1be8;
            case 0x1F1BECu: goto label_1f1bec;
            case 0x1F1BF0u: goto label_1f1bf0;
            case 0x1F1BF4u: goto label_1f1bf4;
            case 0x1F1BF8u: goto label_1f1bf8;
            case 0x1F1BFCu: goto label_1f1bfc;
            case 0x1F1C00u: goto label_1f1c00;
            case 0x1F1C04u: goto label_1f1c04;
            case 0x1F1C08u: goto label_1f1c08;
            case 0x1F1C0Cu: goto label_1f1c0c;
            case 0x1F1C10u: goto label_1f1c10;
            case 0x1F1C14u: goto label_1f1c14;
            case 0x1F1C18u: goto label_1f1c18;
            case 0x1F1C1Cu: goto label_1f1c1c;
            case 0x1F1C20u: goto label_1f1c20;
            case 0x1F1C24u: goto label_1f1c24;
            case 0x1F1C28u: goto label_1f1c28;
            case 0x1F1C2Cu: goto label_1f1c2c;
            case 0x1F1C30u: goto label_1f1c30;
            case 0x1F1C34u: goto label_1f1c34;
            case 0x1F1C38u: goto label_1f1c38;
            case 0x1F1C3Cu: goto label_1f1c3c;
            case 0x1F1C40u: goto label_1f1c40;
            case 0x1F1C44u: goto label_1f1c44;
            case 0x1F1C48u: goto label_1f1c48;
            case 0x1F1C4Cu: goto label_1f1c4c;
            case 0x1F1C50u: goto label_1f1c50;
            case 0x1F1C54u: goto label_1f1c54;
            case 0x1F1C58u: goto label_1f1c58;
            case 0x1F1C5Cu: goto label_1f1c5c;
            case 0x1F1C60u: goto label_1f1c60;
            case 0x1F1C64u: goto label_1f1c64;
            case 0x1F1C68u: goto label_1f1c68;
            case 0x1F1C6Cu: goto label_1f1c6c;
            case 0x1F1C70u: goto label_1f1c70;
            case 0x1F1C74u: goto label_1f1c74;
            case 0x1F1C78u: goto label_1f1c78;
            case 0x1F1C7Cu: goto label_1f1c7c;
            case 0x1F1C80u: goto label_1f1c80;
            case 0x1F1C84u: goto label_1f1c84;
            case 0x1F1C88u: goto label_1f1c88;
            case 0x1F1C8Cu: goto label_1f1c8c;
            case 0x1F1C90u: goto label_1f1c90;
            case 0x1F1C94u: goto label_1f1c94;
            case 0x1F1C98u: goto label_1f1c98;
            case 0x1F1C9Cu: goto label_1f1c9c;
            case 0x1F1CA0u: goto label_1f1ca0;
            case 0x1F1CA4u: goto label_1f1ca4;
            case 0x1F1CA8u: goto label_1f1ca8;
            case 0x1F1CACu: goto label_1f1cac;
            case 0x1F1CB0u: goto label_1f1cb0;
            case 0x1F1CB4u: goto label_1f1cb4;
            case 0x1F1CB8u: goto label_1f1cb8;
            case 0x1F1CBCu: goto label_1f1cbc;
            case 0x1F1CC0u: goto label_1f1cc0;
            case 0x1F1CC4u: goto label_1f1cc4;
            case 0x1F1CC8u: goto label_1f1cc8;
            case 0x1F1CCCu: goto label_1f1ccc;
            case 0x1F1CD0u: goto label_1f1cd0;
            case 0x1F1CD4u: goto label_1f1cd4;
            case 0x1F1CD8u: goto label_1f1cd8;
            case 0x1F1CDCu: goto label_1f1cdc;
            case 0x1F1CE0u: goto label_1f1ce0;
            case 0x1F1CE4u: goto label_1f1ce4;
            case 0x1F1CE8u: goto label_1f1ce8;
            case 0x1F1CECu: goto label_1f1cec;
            case 0x1F1CF0u: goto label_1f1cf0;
            case 0x1F1CF4u: goto label_1f1cf4;
            case 0x1F1CF8u: goto label_1f1cf8;
            case 0x1F1CFCu: goto label_1f1cfc;
            case 0x1F1D00u: goto label_1f1d00;
            case 0x1F1D04u: goto label_1f1d04;
            case 0x1F1D08u: goto label_1f1d08;
            case 0x1F1D0Cu: goto label_1f1d0c;
            case 0x1F1D10u: goto label_1f1d10;
            case 0x1F1D14u: goto label_1f1d14;
            case 0x1F1D18u: goto label_1f1d18;
            case 0x1F1D1Cu: goto label_1f1d1c;
            case 0x1F1D20u: goto label_1f1d20;
            case 0x1F1D24u: goto label_1f1d24;
            case 0x1F1D28u: goto label_1f1d28;
            case 0x1F1D2Cu: goto label_1f1d2c;
            case 0x1F1D30u: goto label_1f1d30;
            case 0x1F1D34u: goto label_1f1d34;
            case 0x1F1D38u: goto label_1f1d38;
            case 0x1F1D3Cu: goto label_1f1d3c;
            case 0x1F1D40u: goto label_1f1d40;
            case 0x1F1D44u: goto label_1f1d44;
            case 0x1F1D48u: goto label_1f1d48;
            case 0x1F1D4Cu: goto label_1f1d4c;
            case 0x1F1D50u: goto label_1f1d50;
            case 0x1F1D54u: goto label_1f1d54;
            case 0x1F1D58u: goto label_1f1d58;
            case 0x1F1D5Cu: goto label_1f1d5c;
            case 0x1F1D60u: goto label_1f1d60;
            case 0x1F1D64u: goto label_1f1d64;
            case 0x1F1D68u: goto label_1f1d68;
            case 0x1F1D6Cu: goto label_1f1d6c;
            case 0x1F1D70u: goto label_1f1d70;
            case 0x1F1D74u: goto label_1f1d74;
            case 0x1F1D78u: goto label_1f1d78;
            case 0x1F1D7Cu: goto label_1f1d7c;
            case 0x1F1D80u: goto label_1f1d80;
            case 0x1F1D84u: goto label_1f1d84;
            case 0x1F1D88u: goto label_1f1d88;
            case 0x1F1D8Cu: goto label_1f1d8c;
            case 0x1F1D90u: goto label_1f1d90;
            case 0x1F1D94u: goto label_1f1d94;
            case 0x1F1D98u: goto label_1f1d98;
            case 0x1F1D9Cu: goto label_1f1d9c;
            case 0x1F1DA0u: goto label_1f1da0;
            case 0x1F1DA4u: goto label_1f1da4;
            case 0x1F1DA8u: goto label_1f1da8;
            case 0x1F1DACu: goto label_1f1dac;
            case 0x1F1DB0u: goto label_1f1db0;
            case 0x1F1DB4u: goto label_1f1db4;
            case 0x1F1DB8u: goto label_1f1db8;
            case 0x1F1DBCu: goto label_1f1dbc;
            case 0x1F1DC0u: goto label_1f1dc0;
            case 0x1F1DC4u: goto label_1f1dc4;
            case 0x1F1DC8u: goto label_1f1dc8;
            case 0x1F1DCCu: goto label_1f1dcc;
            case 0x1F1DD0u: goto label_1f1dd0;
            case 0x1F1DD4u: goto label_1f1dd4;
            case 0x1F1DD8u: goto label_1f1dd8;
            case 0x1F1DDCu: goto label_1f1ddc;
            case 0x1F1DE0u: goto label_1f1de0;
            case 0x1F1DE4u: goto label_1f1de4;
            case 0x1F1DE8u: goto label_1f1de8;
            case 0x1F1DECu: goto label_1f1dec;
            case 0x1F1DF0u: goto label_1f1df0;
            case 0x1F1DF4u: goto label_1f1df4;
            case 0x1F1DF8u: goto label_1f1df8;
            case 0x1F1DFCu: goto label_1f1dfc;
            case 0x1F1E00u: goto label_1f1e00;
            case 0x1F1E04u: goto label_1f1e04;
            case 0x1F1E08u: goto label_1f1e08;
            case 0x1F1E0Cu: goto label_1f1e0c;
            case 0x1F1E10u: goto label_1f1e10;
            case 0x1F1E14u: goto label_1f1e14;
            case 0x1F1E18u: goto label_1f1e18;
            case 0x1F1E1Cu: goto label_1f1e1c;
            case 0x1F1E20u: goto label_1f1e20;
            case 0x1F1E24u: goto label_1f1e24;
            case 0x1F1E28u: goto label_1f1e28;
            case 0x1F1E2Cu: goto label_1f1e2c;
            case 0x1F1E30u: goto label_1f1e30;
            case 0x1F1E34u: goto label_1f1e34;
            case 0x1F1E38u: goto label_1f1e38;
            case 0x1F1E3Cu: goto label_1f1e3c;
            case 0x1F1E40u: goto label_1f1e40;
            case 0x1F1E44u: goto label_1f1e44;
            case 0x1F1E48u: goto label_1f1e48;
            case 0x1F1E4Cu: goto label_1f1e4c;
            case 0x1F1E50u: goto label_1f1e50;
            case 0x1F1E54u: goto label_1f1e54;
            case 0x1F1E58u: goto label_1f1e58;
            case 0x1F1E5Cu: goto label_1f1e5c;
            case 0x1F1E60u: goto label_1f1e60;
            case 0x1F1E64u: goto label_1f1e64;
            case 0x1F1E68u: goto label_1f1e68;
            case 0x1F1E6Cu: goto label_1f1e6c;
            case 0x1F1E70u: goto label_1f1e70;
            case 0x1F1E74u: goto label_1f1e74;
            case 0x1F1E78u: goto label_1f1e78;
            case 0x1F1E7Cu: goto label_1f1e7c;
            case 0x1F1E80u: goto label_1f1e80;
            case 0x1F1E84u: goto label_1f1e84;
            case 0x1F1E88u: goto label_1f1e88;
            case 0x1F1E8Cu: goto label_1f1e8c;
            case 0x1F1E90u: goto label_1f1e90;
            case 0x1F1E94u: goto label_1f1e94;
            case 0x1F1E98u: goto label_1f1e98;
            case 0x1F1E9Cu: goto label_1f1e9c;
            case 0x1F1EA0u: goto label_1f1ea0;
            case 0x1F1EA4u: goto label_1f1ea4;
            case 0x1F1EA8u: goto label_1f1ea8;
            case 0x1F1EACu: goto label_1f1eac;
            case 0x1F1EB0u: goto label_1f1eb0;
            case 0x1F1EB4u: goto label_1f1eb4;
            case 0x1F1EB8u: goto label_1f1eb8;
            case 0x1F1EBCu: goto label_1f1ebc;
            case 0x1F1EC0u: goto label_1f1ec0;
            case 0x1F1EC4u: goto label_1f1ec4;
            case 0x1F1EC8u: goto label_1f1ec8;
            case 0x1F1ECCu: goto label_1f1ecc;
            case 0x1F1ED0u: goto label_1f1ed0;
            case 0x1F1ED4u: goto label_1f1ed4;
            case 0x1F1ED8u: goto label_1f1ed8;
            case 0x1F1EDCu: goto label_1f1edc;
            case 0x1F1EE0u: goto label_1f1ee0;
            case 0x1F1EE4u: goto label_1f1ee4;
            case 0x1F1EE8u: goto label_1f1ee8;
            case 0x1F1EECu: goto label_1f1eec;
            case 0x1F1EF0u: goto label_1f1ef0;
            case 0x1F1EF4u: goto label_1f1ef4;
            case 0x1F1EF8u: goto label_1f1ef8;
            case 0x1F1EFCu: goto label_1f1efc;
            case 0x1F1F00u: goto label_1f1f00;
            case 0x1F1F04u: goto label_1f1f04;
            case 0x1F1F08u: goto label_1f1f08;
            case 0x1F1F0Cu: goto label_1f1f0c;
            case 0x1F1F10u: goto label_1f1f10;
            case 0x1F1F14u: goto label_1f1f14;
            case 0x1F1F18u: goto label_1f1f18;
            case 0x1F1F1Cu: goto label_1f1f1c;
            case 0x1F1F20u: goto label_1f1f20;
            case 0x1F1F24u: goto label_1f1f24;
            case 0x1F1F28u: goto label_1f1f28;
            case 0x1F1F2Cu: goto label_1f1f2c;
            case 0x1F1F30u: goto label_1f1f30;
            case 0x1F1F34u: goto label_1f1f34;
            case 0x1F1F38u: goto label_1f1f38;
            case 0x1F1F3Cu: goto label_1f1f3c;
            case 0x1F1F40u: goto label_1f1f40;
            case 0x1F1F44u: goto label_1f1f44;
            case 0x1F1F48u: goto label_1f1f48;
            case 0x1F1F4Cu: goto label_1f1f4c;
            case 0x1F1F50u: goto label_1f1f50;
            case 0x1F1F54u: goto label_1f1f54;
            case 0x1F1F58u: goto label_1f1f58;
            case 0x1F1F5Cu: goto label_1f1f5c;
            case 0x1F1F60u: goto label_1f1f60;
            case 0x1F1F64u: goto label_1f1f64;
            case 0x1F1F68u: goto label_1f1f68;
            case 0x1F1F6Cu: goto label_1f1f6c;
            case 0x1F1F70u: goto label_1f1f70;
            case 0x1F1F74u: goto label_1f1f74;
            case 0x1F1F78u: goto label_1f1f78;
            case 0x1F1F7Cu: goto label_1f1f7c;
            case 0x1F1F80u: goto label_1f1f80;
            case 0x1F1F84u: goto label_1f1f84;
            case 0x1F1F88u: goto label_1f1f88;
            case 0x1F1F8Cu: goto label_1f1f8c;
            case 0x1F1F90u: goto label_1f1f90;
            case 0x1F1F94u: goto label_1f1f94;
            case 0x1F1F98u: goto label_1f1f98;
            case 0x1F1F9Cu: goto label_1f1f9c;
            case 0x1F1FA0u: goto label_1f1fa0;
            case 0x1F1FA4u: goto label_1f1fa4;
            case 0x1F1FA8u: goto label_1f1fa8;
            case 0x1F1FACu: goto label_1f1fac;
            case 0x1F1FB0u: goto label_1f1fb0;
            case 0x1F1FB4u: goto label_1f1fb4;
            case 0x1F1FB8u: goto label_1f1fb8;
            case 0x1F1FBCu: goto label_1f1fbc;
            case 0x1F1FC0u: goto label_1f1fc0;
            case 0x1F1FC4u: goto label_1f1fc4;
            case 0x1F1FC8u: goto label_1f1fc8;
            case 0x1F1FCCu: goto label_1f1fcc;
            case 0x1F1FD0u: goto label_1f1fd0;
            case 0x1F1FD4u: goto label_1f1fd4;
            case 0x1F1FD8u: goto label_1f1fd8;
            case 0x1F1FDCu: goto label_1f1fdc;
            case 0x1F1FE0u: goto label_1f1fe0;
            case 0x1F1FE4u: goto label_1f1fe4;
            case 0x1F1FE8u: goto label_1f1fe8;
            case 0x1F1FECu: goto label_1f1fec;
            case 0x1F1FF0u: goto label_1f1ff0;
            case 0x1F1FF4u: goto label_1f1ff4;
            case 0x1F1FF8u: goto label_1f1ff8;
            case 0x1F1FFCu: goto label_1f1ffc;
            case 0x1F2000u: goto label_1f2000;
            case 0x1F2004u: goto label_1f2004;
            case 0x1F2008u: goto label_1f2008;
            case 0x1F200Cu: goto label_1f200c;
            case 0x1F2010u: goto label_1f2010;
            case 0x1F2014u: goto label_1f2014;
            case 0x1F2018u: goto label_1f2018;
            case 0x1F201Cu: goto label_1f201c;
            case 0x1F2020u: goto label_1f2020;
            case 0x1F2024u: goto label_1f2024;
            case 0x1F2028u: goto label_1f2028;
            case 0x1F202Cu: goto label_1f202c;
            case 0x1F2030u: goto label_1f2030;
            case 0x1F2034u: goto label_1f2034;
            case 0x1F2038u: goto label_1f2038;
            case 0x1F203Cu: goto label_1f203c;
            case 0x1F2040u: goto label_1f2040;
            case 0x1F2044u: goto label_1f2044;
            case 0x1F2048u: goto label_1f2048;
            case 0x1F204Cu: goto label_1f204c;
            case 0x1F2050u: goto label_1f2050;
            case 0x1F2054u: goto label_1f2054;
            case 0x1F2058u: goto label_1f2058;
            case 0x1F205Cu: goto label_1f205c;
            case 0x1F2060u: goto label_1f2060;
            case 0x1F2064u: goto label_1f2064;
            case 0x1F2068u: goto label_1f2068;
            case 0x1F206Cu: goto label_1f206c;
            case 0x1F2070u: goto label_1f2070;
            case 0x1F2074u: goto label_1f2074;
            case 0x1F2078u: goto label_1f2078;
            case 0x1F207Cu: goto label_1f207c;
            case 0x1F2080u: goto label_1f2080;
            case 0x1F2084u: goto label_1f2084;
            case 0x1F2088u: goto label_1f2088;
            case 0x1F208Cu: goto label_1f208c;
            case 0x1F2090u: goto label_1f2090;
            case 0x1F2094u: goto label_1f2094;
            case 0x1F2098u: goto label_1f2098;
            case 0x1F209Cu: goto label_1f209c;
            case 0x1F20A0u: goto label_1f20a0;
            case 0x1F20A4u: goto label_1f20a4;
            case 0x1F20A8u: goto label_1f20a8;
            case 0x1F20ACu: goto label_1f20ac;
            case 0x1F20B0u: goto label_1f20b0;
            case 0x1F20B4u: goto label_1f20b4;
            case 0x1F20B8u: goto label_1f20b8;
            case 0x1F20BCu: goto label_1f20bc;
            case 0x1F20C0u: goto label_1f20c0;
            case 0x1F20C4u: goto label_1f20c4;
            case 0x1F20C8u: goto label_1f20c8;
            case 0x1F20CCu: goto label_1f20cc;
            case 0x1F20D0u: goto label_1f20d0;
            case 0x1F20D4u: goto label_1f20d4;
            case 0x1F20D8u: goto label_1f20d8;
            case 0x1F20DCu: goto label_1f20dc;
            case 0x1F20E0u: goto label_1f20e0;
            case 0x1F20E4u: goto label_1f20e4;
            case 0x1F20E8u: goto label_1f20e8;
            case 0x1F20ECu: goto label_1f20ec;
            case 0x1F20F0u: goto label_1f20f0;
            case 0x1F20F4u: goto label_1f20f4;
            case 0x1F20F8u: goto label_1f20f8;
            case 0x1F20FCu: goto label_1f20fc;
            case 0x1F2100u: goto label_1f2100;
            case 0x1F2104u: goto label_1f2104;
            case 0x1F2108u: goto label_1f2108;
            case 0x1F210Cu: goto label_1f210c;
            case 0x1F2110u: goto label_1f2110;
            case 0x1F2114u: goto label_1f2114;
            case 0x1F2118u: goto label_1f2118;
            case 0x1F211Cu: goto label_1f211c;
            case 0x1F2120u: goto label_1f2120;
            case 0x1F2124u: goto label_1f2124;
            case 0x1F2128u: goto label_1f2128;
            case 0x1F212Cu: goto label_1f212c;
            case 0x1F2130u: goto label_1f2130;
            case 0x1F2134u: goto label_1f2134;
            case 0x1F2138u: goto label_1f2138;
            case 0x1F213Cu: goto label_1f213c;
            case 0x1F2140u: goto label_1f2140;
            case 0x1F2144u: goto label_1f2144;
            case 0x1F2148u: goto label_1f2148;
            case 0x1F214Cu: goto label_1f214c;
            case 0x1F2150u: goto label_1f2150;
            case 0x1F2154u: goto label_1f2154;
            case 0x1F2158u: goto label_1f2158;
            case 0x1F215Cu: goto label_1f215c;
            case 0x1F2160u: goto label_1f2160;
            case 0x1F2164u: goto label_1f2164;
            case 0x1F2168u: goto label_1f2168;
            case 0x1F216Cu: goto label_1f216c;
            case 0x1F2170u: goto label_1f2170;
            case 0x1F2174u: goto label_1f2174;
            case 0x1F2178u: goto label_1f2178;
            case 0x1F217Cu: goto label_1f217c;
            case 0x1F2180u: goto label_1f2180;
            case 0x1F2184u: goto label_1f2184;
            case 0x1F2188u: goto label_1f2188;
            case 0x1F218Cu: goto label_1f218c;
            case 0x1F2190u: goto label_1f2190;
            case 0x1F2194u: goto label_1f2194;
            case 0x1F2198u: goto label_1f2198;
            case 0x1F219Cu: goto label_1f219c;
            case 0x1F21A0u: goto label_1f21a0;
            case 0x1F21A4u: goto label_1f21a4;
            case 0x1F21A8u: goto label_1f21a8;
            case 0x1F21ACu: goto label_1f21ac;
            case 0x1F21B0u: goto label_1f21b0;
            case 0x1F21B4u: goto label_1f21b4;
            case 0x1F21B8u: goto label_1f21b8;
            case 0x1F21BCu: goto label_1f21bc;
            case 0x1F21C0u: goto label_1f21c0;
            case 0x1F21C4u: goto label_1f21c4;
            case 0x1F21C8u: goto label_1f21c8;
            case 0x1F21CCu: goto label_1f21cc;
            case 0x1F21D0u: goto label_1f21d0;
            case 0x1F21D4u: goto label_1f21d4;
            case 0x1F21D8u: goto label_1f21d8;
            case 0x1F21DCu: goto label_1f21dc;
            case 0x1F21E0u: goto label_1f21e0;
            case 0x1F21E4u: goto label_1f21e4;
            case 0x1F21E8u: goto label_1f21e8;
            case 0x1F21ECu: goto label_1f21ec;
            case 0x1F21F0u: goto label_1f21f0;
            case 0x1F21F4u: goto label_1f21f4;
            case 0x1F21F8u: goto label_1f21f8;
            case 0x1F21FCu: goto label_1f21fc;
            case 0x1F2200u: goto label_1f2200;
            case 0x1F2204u: goto label_1f2204;
            case 0x1F2208u: goto label_1f2208;
            case 0x1F220Cu: goto label_1f220c;
            case 0x1F2210u: goto label_1f2210;
            case 0x1F2214u: goto label_1f2214;
            case 0x1F2218u: goto label_1f2218;
            case 0x1F221Cu: goto label_1f221c;
            case 0x1F2220u: goto label_1f2220;
            case 0x1F2224u: goto label_1f2224;
            case 0x1F2228u: goto label_1f2228;
            case 0x1F222Cu: goto label_1f222c;
            case 0x1F2230u: goto label_1f2230;
            case 0x1F2234u: goto label_1f2234;
            case 0x1F2238u: goto label_1f2238;
            case 0x1F223Cu: goto label_1f223c;
            case 0x1F2240u: goto label_1f2240;
            case 0x1F2244u: goto label_1f2244;
            case 0x1F2248u: goto label_1f2248;
            case 0x1F224Cu: goto label_1f224c;
            case 0x1F2250u: goto label_1f2250;
            case 0x1F2254u: goto label_1f2254;
            case 0x1F2258u: goto label_1f2258;
            case 0x1F225Cu: goto label_1f225c;
            case 0x1F2260u: goto label_1f2260;
            case 0x1F2264u: goto label_1f2264;
            case 0x1F2268u: goto label_1f2268;
            case 0x1F226Cu: goto label_1f226c;
            case 0x1F2270u: goto label_1f2270;
            case 0x1F2274u: goto label_1f2274;
            case 0x1F2278u: goto label_1f2278;
            case 0x1F227Cu: goto label_1f227c;
            case 0x1F2280u: goto label_1f2280;
            case 0x1F2284u: goto label_1f2284;
            case 0x1F2288u: goto label_1f2288;
            case 0x1F228Cu: goto label_1f228c;
            case 0x1F2290u: goto label_1f2290;
            case 0x1F2294u: goto label_1f2294;
            case 0x1F2298u: goto label_1f2298;
            case 0x1F229Cu: goto label_1f229c;
            case 0x1F22A0u: goto label_1f22a0;
            case 0x1F22A4u: goto label_1f22a4;
            case 0x1F22A8u: goto label_1f22a8;
            case 0x1F22ACu: goto label_1f22ac;
            case 0x1F22B0u: goto label_1f22b0;
            case 0x1F22B4u: goto label_1f22b4;
            case 0x1F22B8u: goto label_1f22b8;
            case 0x1F22BCu: goto label_1f22bc;
            case 0x1F22C0u: goto label_1f22c0;
            case 0x1F22C4u: goto label_1f22c4;
            case 0x1F22C8u: goto label_1f22c8;
            case 0x1F22CCu: goto label_1f22cc;
            case 0x1F22D0u: goto label_1f22d0;
            case 0x1F22D4u: goto label_1f22d4;
            case 0x1F22D8u: goto label_1f22d8;
            case 0x1F22DCu: goto label_1f22dc;
            case 0x1F22E0u: goto label_1f22e0;
            case 0x1F22E4u: goto label_1f22e4;
            case 0x1F22E8u: goto label_1f22e8;
            case 0x1F22ECu: goto label_1f22ec;
            case 0x1F22F0u: goto label_1f22f0;
            case 0x1F22F4u: goto label_1f22f4;
            case 0x1F22F8u: goto label_1f22f8;
            case 0x1F22FCu: goto label_1f22fc;
            case 0x1F2300u: goto label_1f2300;
            case 0x1F2304u: goto label_1f2304;
            case 0x1F2308u: goto label_1f2308;
            case 0x1F230Cu: goto label_1f230c;
            case 0x1F2310u: goto label_1f2310;
            case 0x1F2314u: goto label_1f2314;
            case 0x1F2318u: goto label_1f2318;
            case 0x1F231Cu: goto label_1f231c;
            case 0x1F2320u: goto label_1f2320;
            case 0x1F2324u: goto label_1f2324;
            case 0x1F2328u: goto label_1f2328;
            case 0x1F232Cu: goto label_1f232c;
            case 0x1F2330u: goto label_1f2330;
            case 0x1F2334u: goto label_1f2334;
            case 0x1F2338u: goto label_1f2338;
            case 0x1F233Cu: goto label_1f233c;
            case 0x1F2340u: goto label_1f2340;
            case 0x1F2344u: goto label_1f2344;
            case 0x1F2348u: goto label_1f2348;
            case 0x1F234Cu: goto label_1f234c;
            case 0x1F2350u: goto label_1f2350;
            case 0x1F2354u: goto label_1f2354;
            case 0x1F2358u: goto label_1f2358;
            case 0x1F235Cu: goto label_1f235c;
            case 0x1F2360u: goto label_1f2360;
            case 0x1F2364u: goto label_1f2364;
            case 0x1F2368u: goto label_1f2368;
            case 0x1F236Cu: goto label_1f236c;
            case 0x1F2370u: goto label_1f2370;
            case 0x1F2374u: goto label_1f2374;
            case 0x1F2378u: goto label_1f2378;
            case 0x1F237Cu: goto label_1f237c;
            case 0x1F2380u: goto label_1f2380;
            case 0x1F2384u: goto label_1f2384;
            case 0x1F2388u: goto label_1f2388;
            case 0x1F238Cu: goto label_1f238c;
            case 0x1F2390u: goto label_1f2390;
            case 0x1F2394u: goto label_1f2394;
            case 0x1F2398u: goto label_1f2398;
            case 0x1F239Cu: goto label_1f239c;
            case 0x1F23A0u: goto label_1f23a0;
            case 0x1F23A4u: goto label_1f23a4;
            case 0x1F23A8u: goto label_1f23a8;
            case 0x1F23ACu: goto label_1f23ac;
            case 0x1F23B0u: goto label_1f23b0;
            case 0x1F23B4u: goto label_1f23b4;
            case 0x1F23B8u: goto label_1f23b8;
            case 0x1F23BCu: goto label_1f23bc;
            case 0x1F23C0u: goto label_1f23c0;
            case 0x1F23C4u: goto label_1f23c4;
            case 0x1F23C8u: goto label_1f23c8;
            case 0x1F23CCu: goto label_1f23cc;
            case 0x1F23D0u: goto label_1f23d0;
            case 0x1F23D4u: goto label_1f23d4;
            case 0x1F23D8u: goto label_1f23d8;
            case 0x1F23DCu: goto label_1f23dc;
            case 0x1F23E0u: goto label_1f23e0;
            case 0x1F23E4u: goto label_1f23e4;
            case 0x1F23E8u: goto label_1f23e8;
            case 0x1F23ECu: goto label_1f23ec;
            case 0x1F23F0u: goto label_1f23f0;
            case 0x1F23F4u: goto label_1f23f4;
            case 0x1F23F8u: goto label_1f23f8;
            case 0x1F23FCu: goto label_1f23fc;
            case 0x1F2400u: goto label_1f2400;
            case 0x1F2404u: goto label_1f2404;
            case 0x1F2408u: goto label_1f2408;
            case 0x1F240Cu: goto label_1f240c;
            case 0x1F2410u: goto label_1f2410;
            case 0x1F2414u: goto label_1f2414;
            case 0x1F2418u: goto label_1f2418;
            case 0x1F241Cu: goto label_1f241c;
            case 0x1F2420u: goto label_1f2420;
            case 0x1F2424u: goto label_1f2424;
            case 0x1F2428u: goto label_1f2428;
            case 0x1F242Cu: goto label_1f242c;
            case 0x1F2430u: goto label_1f2430;
            case 0x1F2434u: goto label_1f2434;
            case 0x1F2438u: goto label_1f2438;
            case 0x1F243Cu: goto label_1f243c;
            case 0x1F2440u: goto label_1f2440;
            case 0x1F2444u: goto label_1f2444;
            case 0x1F2448u: goto label_1f2448;
            case 0x1F244Cu: goto label_1f244c;
            case 0x1F2450u: goto label_1f2450;
            case 0x1F2454u: goto label_1f2454;
            case 0x1F2458u: goto label_1f2458;
            case 0x1F245Cu: goto label_1f245c;
            case 0x1F2460u: goto label_1f2460;
            case 0x1F2464u: goto label_1f2464;
            case 0x1F2468u: goto label_1f2468;
            case 0x1F246Cu: goto label_1f246c;
            case 0x1F2470u: goto label_1f2470;
            case 0x1F2474u: goto label_1f2474;
            case 0x1F2478u: goto label_1f2478;
            case 0x1F247Cu: goto label_1f247c;
            case 0x1F2480u: goto label_1f2480;
            case 0x1F2484u: goto label_1f2484;
            case 0x1F2488u: goto label_1f2488;
            case 0x1F248Cu: goto label_1f248c;
            case 0x1F2490u: goto label_1f2490;
            case 0x1F2494u: goto label_1f2494;
            case 0x1F2498u: goto label_1f2498;
            case 0x1F249Cu: goto label_1f249c;
            case 0x1F24A0u: goto label_1f24a0;
            case 0x1F24A4u: goto label_1f24a4;
            case 0x1F24A8u: goto label_1f24a8;
            case 0x1F24ACu: goto label_1f24ac;
            case 0x1F24B0u: goto label_1f24b0;
            case 0x1F24B4u: goto label_1f24b4;
            case 0x1F24B8u: goto label_1f24b8;
            case 0x1F24BCu: goto label_1f24bc;
            case 0x1F24C0u: goto label_1f24c0;
            case 0x1F24C4u: goto label_1f24c4;
            case 0x1F24C8u: goto label_1f24c8;
            case 0x1F24CCu: goto label_1f24cc;
            case 0x1F24D0u: goto label_1f24d0;
            case 0x1F24D4u: goto label_1f24d4;
            case 0x1F24D8u: goto label_1f24d8;
            case 0x1F24DCu: goto label_1f24dc;
            case 0x1F24E0u: goto label_1f24e0;
            case 0x1F24E4u: goto label_1f24e4;
            case 0x1F24E8u: goto label_1f24e8;
            case 0x1F24ECu: goto label_1f24ec;
            case 0x1F24F0u: goto label_1f24f0;
            case 0x1F24F4u: goto label_1f24f4;
            case 0x1F24F8u: goto label_1f24f8;
            case 0x1F24FCu: goto label_1f24fc;
            case 0x1F2500u: goto label_1f2500;
            case 0x1F2504u: goto label_1f2504;
            case 0x1F2508u: goto label_1f2508;
            case 0x1F250Cu: goto label_1f250c;
            case 0x1F2510u: goto label_1f2510;
            case 0x1F2514u: goto label_1f2514;
            case 0x1F2518u: goto label_1f2518;
            case 0x1F251Cu: goto label_1f251c;
            case 0x1F2520u: goto label_1f2520;
            case 0x1F2524u: goto label_1f2524;
            case 0x1F2528u: goto label_1f2528;
            case 0x1F252Cu: goto label_1f252c;
            case 0x1F2530u: goto label_1f2530;
            case 0x1F2534u: goto label_1f2534;
            case 0x1F2538u: goto label_1f2538;
            case 0x1F253Cu: goto label_1f253c;
            case 0x1F2540u: goto label_1f2540;
            case 0x1F2544u: goto label_1f2544;
            case 0x1F2548u: goto label_1f2548;
            case 0x1F254Cu: goto label_1f254c;
            case 0x1F2550u: goto label_1f2550;
            case 0x1F2554u: goto label_1f2554;
            case 0x1F2558u: goto label_1f2558;
            case 0x1F255Cu: goto label_1f255c;
            case 0x1F2560u: goto label_1f2560;
            case 0x1F2564u: goto label_1f2564;
            case 0x1F2568u: goto label_1f2568;
            case 0x1F256Cu: goto label_1f256c;
            case 0x1F2570u: goto label_1f2570;
            case 0x1F2574u: goto label_1f2574;
            case 0x1F2578u: goto label_1f2578;
            case 0x1F257Cu: goto label_1f257c;
            case 0x1F2580u: goto label_1f2580;
            case 0x1F2584u: goto label_1f2584;
            case 0x1F2588u: goto label_1f2588;
            case 0x1F258Cu: goto label_1f258c;
            case 0x1F2590u: goto label_1f2590;
            case 0x1F2594u: goto label_1f2594;
            case 0x1F2598u: goto label_1f2598;
            case 0x1F259Cu: goto label_1f259c;
            case 0x1F25A0u: goto label_1f25a0;
            case 0x1F25A4u: goto label_1f25a4;
            case 0x1F25A8u: goto label_1f25a8;
            case 0x1F25ACu: goto label_1f25ac;
            case 0x1F25B0u: goto label_1f25b0;
            case 0x1F25B4u: goto label_1f25b4;
            case 0x1F25B8u: goto label_1f25b8;
            case 0x1F25BCu: goto label_1f25bc;
            case 0x1F25C0u: goto label_1f25c0;
            case 0x1F25C4u: goto label_1f25c4;
            case 0x1F25C8u: goto label_1f25c8;
            case 0x1F25CCu: goto label_1f25cc;
            case 0x1F25D0u: goto label_1f25d0;
            case 0x1F25D4u: goto label_1f25d4;
            case 0x1F25D8u: goto label_1f25d8;
            case 0x1F25DCu: goto label_1f25dc;
            case 0x1F25E0u: goto label_1f25e0;
            case 0x1F25E4u: goto label_1f25e4;
            case 0x1F25E8u: goto label_1f25e8;
            case 0x1F25ECu: goto label_1f25ec;
            case 0x1F25F0u: goto label_1f25f0;
            case 0x1F25F4u: goto label_1f25f4;
            case 0x1F25F8u: goto label_1f25f8;
            case 0x1F25FCu: goto label_1f25fc;
            case 0x1F2600u: goto label_1f2600;
            case 0x1F2604u: goto label_1f2604;
            case 0x1F2608u: goto label_1f2608;
            case 0x1F260Cu: goto label_1f260c;
            case 0x1F2610u: goto label_1f2610;
            case 0x1F2614u: goto label_1f2614;
            case 0x1F2618u: goto label_1f2618;
            case 0x1F261Cu: goto label_1f261c;
            case 0x1F2620u: goto label_1f2620;
            case 0x1F2624u: goto label_1f2624;
            case 0x1F2628u: goto label_1f2628;
            case 0x1F262Cu: goto label_1f262c;
            case 0x1F2630u: goto label_1f2630;
            case 0x1F2634u: goto label_1f2634;
            case 0x1F2638u: goto label_1f2638;
            case 0x1F263Cu: goto label_1f263c;
            case 0x1F2640u: goto label_1f2640;
            case 0x1F2644u: goto label_1f2644;
            case 0x1F2648u: goto label_1f2648;
            case 0x1F264Cu: goto label_1f264c;
            case 0x1F2650u: goto label_1f2650;
            case 0x1F2654u: goto label_1f2654;
            case 0x1F2658u: goto label_1f2658;
            case 0x1F265Cu: goto label_1f265c;
            case 0x1F2660u: goto label_1f2660;
            case 0x1F2664u: goto label_1f2664;
            case 0x1F2668u: goto label_1f2668;
            case 0x1F266Cu: goto label_1f266c;
            case 0x1F2670u: goto label_1f2670;
            case 0x1F2674u: goto label_1f2674;
            case 0x1F2678u: goto label_1f2678;
            case 0x1F267Cu: goto label_1f267c;
            case 0x1F2680u: goto label_1f2680;
            case 0x1F2684u: goto label_1f2684;
            case 0x1F2688u: goto label_1f2688;
            case 0x1F268Cu: goto label_1f268c;
            case 0x1F2690u: goto label_1f2690;
            case 0x1F2694u: goto label_1f2694;
            case 0x1F2698u: goto label_1f2698;
            case 0x1F269Cu: goto label_1f269c;
            case 0x1F26A0u: goto label_1f26a0;
            case 0x1F26A4u: goto label_1f26a4;
            case 0x1F26A8u: goto label_1f26a8;
            case 0x1F26ACu: goto label_1f26ac;
            case 0x1F26B0u: goto label_1f26b0;
            case 0x1F26B4u: goto label_1f26b4;
            case 0x1F26B8u: goto label_1f26b8;
            case 0x1F26BCu: goto label_1f26bc;
            case 0x1F26C0u: goto label_1f26c0;
            case 0x1F26C4u: goto label_1f26c4;
            case 0x1F26C8u: goto label_1f26c8;
            case 0x1F26CCu: goto label_1f26cc;
            case 0x1F26D0u: goto label_1f26d0;
            case 0x1F26D4u: goto label_1f26d4;
            case 0x1F26D8u: goto label_1f26d8;
            case 0x1F26DCu: goto label_1f26dc;
            case 0x1F26E0u: goto label_1f26e0;
            case 0x1F26E4u: goto label_1f26e4;
            case 0x1F26E8u: goto label_1f26e8;
            case 0x1F26ECu: goto label_1f26ec;
            case 0x1F26F0u: goto label_1f26f0;
            case 0x1F26F4u: goto label_1f26f4;
            case 0x1F26F8u: goto label_1f26f8;
            case 0x1F26FCu: goto label_1f26fc;
            case 0x1F2700u: goto label_1f2700;
            case 0x1F2704u: goto label_1f2704;
            case 0x1F2708u: goto label_1f2708;
            case 0x1F270Cu: goto label_1f270c;
            case 0x1F2710u: goto label_1f2710;
            case 0x1F2714u: goto label_1f2714;
            case 0x1F2718u: goto label_1f2718;
            case 0x1F271Cu: goto label_1f271c;
            case 0x1F2720u: goto label_1f2720;
            case 0x1F2724u: goto label_1f2724;
            case 0x1F2728u: goto label_1f2728;
            case 0x1F272Cu: goto label_1f272c;
            case 0x1F2730u: goto label_1f2730;
            case 0x1F2734u: goto label_1f2734;
            case 0x1F2738u: goto label_1f2738;
            case 0x1F273Cu: goto label_1f273c;
            case 0x1F2740u: goto label_1f2740;
            case 0x1F2744u: goto label_1f2744;
            case 0x1F2748u: goto label_1f2748;
            case 0x1F274Cu: goto label_1f274c;
            case 0x1F2750u: goto label_1f2750;
            case 0x1F2754u: goto label_1f2754;
            case 0x1F2758u: goto label_1f2758;
            case 0x1F275Cu: goto label_1f275c;
            case 0x1F2760u: goto label_1f2760;
            case 0x1F2764u: goto label_1f2764;
            case 0x1F2768u: goto label_1f2768;
            case 0x1F276Cu: goto label_1f276c;
            case 0x1F2770u: goto label_1f2770;
            case 0x1F2774u: goto label_1f2774;
            case 0x1F2778u: goto label_1f2778;
            case 0x1F277Cu: goto label_1f277c;
            case 0x1F2780u: goto label_1f2780;
            case 0x1F2784u: goto label_1f2784;
            case 0x1F2788u: goto label_1f2788;
            case 0x1F278Cu: goto label_1f278c;
            case 0x1F2790u: goto label_1f2790;
            case 0x1F2794u: goto label_1f2794;
            case 0x1F2798u: goto label_1f2798;
            case 0x1F279Cu: goto label_1f279c;
            case 0x1F27A0u: goto label_1f27a0;
            case 0x1F27A4u: goto label_1f27a4;
            case 0x1F27A8u: goto label_1f27a8;
            case 0x1F27ACu: goto label_1f27ac;
            case 0x1F27B0u: goto label_1f27b0;
            case 0x1F27B4u: goto label_1f27b4;
            case 0x1F27B8u: goto label_1f27b8;
            case 0x1F27BCu: goto label_1f27bc;
            case 0x1F27C0u: goto label_1f27c0;
            case 0x1F27C4u: goto label_1f27c4;
            case 0x1F27C8u: goto label_1f27c8;
            case 0x1F27CCu: goto label_1f27cc;
            case 0x1F27D0u: goto label_1f27d0;
            case 0x1F27D4u: goto label_1f27d4;
            case 0x1F27D8u: goto label_1f27d8;
            case 0x1F27DCu: goto label_1f27dc;
            case 0x1F27E0u: goto label_1f27e0;
            case 0x1F27E4u: goto label_1f27e4;
            case 0x1F27E8u: goto label_1f27e8;
            case 0x1F27ECu: goto label_1f27ec;
            case 0x1F27F0u: goto label_1f27f0;
            case 0x1F27F4u: goto label_1f27f4;
            case 0x1F27F8u: goto label_1f27f8;
            case 0x1F27FCu: goto label_1f27fc;
            case 0x1F2800u: goto label_1f2800;
            case 0x1F2804u: goto label_1f2804;
            case 0x1F2808u: goto label_1f2808;
            case 0x1F280Cu: goto label_1f280c;
            case 0x1F2810u: goto label_1f2810;
            case 0x1F2814u: goto label_1f2814;
            case 0x1F2818u: goto label_1f2818;
            case 0x1F281Cu: goto label_1f281c;
            case 0x1F2820u: goto label_1f2820;
            case 0x1F2824u: goto label_1f2824;
            case 0x1F2828u: goto label_1f2828;
            case 0x1F282Cu: goto label_1f282c;
            case 0x1F2830u: goto label_1f2830;
            case 0x1F2834u: goto label_1f2834;
            case 0x1F2838u: goto label_1f2838;
            case 0x1F283Cu: goto label_1f283c;
            case 0x1F2840u: goto label_1f2840;
            case 0x1F2844u: goto label_1f2844;
            case 0x1F2848u: goto label_1f2848;
            case 0x1F284Cu: goto label_1f284c;
            case 0x1F2850u: goto label_1f2850;
            case 0x1F2854u: goto label_1f2854;
            case 0x1F2858u: goto label_1f2858;
            case 0x1F285Cu: goto label_1f285c;
            case 0x1F2860u: goto label_1f2860;
            case 0x1F2864u: goto label_1f2864;
            case 0x1F2868u: goto label_1f2868;
            case 0x1F286Cu: goto label_1f286c;
            case 0x1F2870u: goto label_1f2870;
            case 0x1F2874u: goto label_1f2874;
            case 0x1F2878u: goto label_1f2878;
            case 0x1F287Cu: goto label_1f287c;
            case 0x1F2880u: goto label_1f2880;
            case 0x1F2884u: goto label_1f2884;
            case 0x1F2888u: goto label_1f2888;
            case 0x1F288Cu: goto label_1f288c;
            case 0x1F2890u: goto label_1f2890;
            case 0x1F2894u: goto label_1f2894;
            case 0x1F2898u: goto label_1f2898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1338u;
label_1f1338:
    // 0x1f1338: 0x24030001
    ctx->pc = 0x1f1338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f133c:
    // 0x1f133c: 0xac830394
    ctx->pc = 0x1f133cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
label_1f1340:
    // 0x1f1340: 0xc4e00004
    ctx->pc = 0x1f1340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1344:
    // 0x1f1344: 0xe4800398
    ctx->pc = 0x1f1344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
label_1f1348:
    // 0x1f1348: 0x8ca20008
    ctx->pc = 0x1f1348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f134c:
    // 0x1f134c: 0xc4400000
    ctx->pc = 0x1f134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1350:
    // 0x1f1350: 0xe480039c
    ctx->pc = 0x1f1350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
label_1f1354:
    // 0x1f1354: 0x8ca7000c
    ctx->pc = 0x1f1354u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f1358:
    // 0x1f1358: 0x10e00052
label_1f135c:
    if (ctx->pc == 0x1F135Cu) {
        ctx->pc = 0x1F1360u;
        goto label_1f1360;
    }
    ctx->pc = 0x1F1358u;
    {
        const bool branch_taken_0x1f1358 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1358) {
            ctx->pc = 0x1F14A4u;
            goto label_1f14a4;
        }
    }
    ctx->pc = 0x1F1360u;
label_1f1360:
    // 0x1f1360: 0x14e30003
label_1f1364:
    if (ctx->pc == 0x1F1364u) {
        ctx->pc = 0x1F1364u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1368u;
        goto label_1f1368;
    }
    ctx->pc = 0x1F1360u;
    {
        const bool branch_taken_0x1f1360 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F1364u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1f1360) {
            ctx->pc = 0x1F1370u;
            goto label_1f1370;
        }
    }
    ctx->pc = 0x1F1368u;
label_1f1368:
    // 0x1f1368: 0x1000000f
label_1f136c:
    if (ctx->pc == 0x1F136Cu) {
        ctx->pc = 0x1F136Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F1370u;
        goto label_1f1370;
    }
    ctx->pc = 0x1F1368u;
    {
        const bool branch_taken_0x1f1368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F136Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x1f1368) {
            ctx->pc = 0x1F13A8u;
            goto label_1f13a8;
        }
    }
    ctx->pc = 0x1F1370u;
label_1f1370:
    // 0x1f1370: 0x471821
    ctx->pc = 0x1f1370u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1374:
    // 0x1f1374: 0x31080
    ctx->pc = 0x1f1374u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1378:
    // 0x1f1378: 0x621021
    ctx->pc = 0x1f1378u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f137c:
    // 0x1f137c: 0x23040
    ctx->pc = 0x1f137cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1380:
    // 0x1f1380: 0x3c028888
    ctx->pc = 0x1f1380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1384:
    // 0x1f1384: 0x34428889
    ctx->pc = 0x1f1384u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1388:
    // 0x1f1388: 0x460018
    ctx->pc = 0x1f1388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f138c:
    // 0x1f138c: 0x61fc2
    ctx->pc = 0x1f138cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1390:
    // 0x1f1390: 0x0
    ctx->pc = 0x1f1390u;
    // NOP
label_1f1394:
    // 0x1f1394: 0x1010
    ctx->pc = 0x1f1394u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1398:
    // 0x1f1398: 0x461021
    ctx->pc = 0x1f1398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f139c:
    // 0x1f139c: 0x21143
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f13a0:
    // 0x1f13a0: 0x431821
    ctx->pc = 0x1f13a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f13a4:
    // 0x1f13a4: 0xc482039c
    ctx->pc = 0x1f13a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f13a8:
    // 0x1f13a8: 0xc4810398
    ctx->pc = 0x1f13a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f13ac:
    // 0x1f13ac: 0x44830000
    ctx->pc = 0x1f13acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f13b0:
    // 0x1f13b0: 0x0
    ctx->pc = 0x1f13b0u;
    // NOP
label_1f13b4:
    // 0x1f13b4: 0x468000e0
    ctx->pc = 0x1f13b4u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f13b8:
    // 0x1f13b8: 0x46011081
    ctx->pc = 0x1f13b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f13bc:
    // 0x1f13bc: 0x46031043
    ctx->pc = 0x1f13bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_1f13c0:
    // 0x1f13c0: 0x44800000
    ctx->pc = 0x1f13c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f13c4:
    // 0x1f13c4: 0x0
    ctx->pc = 0x1f13c4u;
    // NOP
label_1f13c8:
    // 0x1f13c8: 0x0
    ctx->pc = 0x1f13c8u;
    // NOP
label_1f13cc:
    // 0x1f13cc: 0x46000834
    ctx->pc = 0x1f13ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f13d0:
    // 0x1f13d0: 0x0
    ctx->pc = 0x1f13d0u;
    // NOP
label_1f13d4:
    // 0x1f13d4: 0x4500001c
label_1f13d8:
    if (ctx->pc == 0x1F13D8u) {
        ctx->pc = 0x1F13D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F13DCu;
        goto label_1f13dc;
    }
    ctx->pc = 0x1F13D4u;
    {
        const bool branch_taken_0x1f13d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F13D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f13d4) {
            ctx->pc = 0x1F1448u;
            goto label_1f1448;
        }
    }
    ctx->pc = 0x1F13DCu;
label_1f13dc:
    // 0x1f13dc: 0x24020001
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f13e0:
    // 0x1f13e0: 0x54e20003
label_1f13e4:
    if (ctx->pc == 0x1F13E4u) {
        ctx->pc = 0x1F13E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F13E8u;
        goto label_1f13e8;
    }
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F13E4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F13F0u;
            goto label_1f13f0;
        }
    }
    ctx->pc = 0x1F13E8u;
label_1f13e8:
    // 0x1f13e8: 0x1000000e
label_1f13ec:
    if (ctx->pc == 0x1F13ECu) {
        ctx->pc = 0x1F13F0u;
        goto label_1f13f0;
    }
    ctx->pc = 0x1F13E8u;
    {
        const bool branch_taken_0x1f13e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f13e8) {
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F13F0u;
label_1f13f0:
    // 0x1f13f0: 0x471821
    ctx->pc = 0x1f13f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f13f4:
    // 0x1f13f4: 0x31080
    ctx->pc = 0x1f13f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f13f8:
    // 0x1f13f8: 0x621021
    ctx->pc = 0x1f13f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f13fc:
    // 0x1f13fc: 0x23040
    ctx->pc = 0x1f13fcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1400:
    // 0x1f1400: 0x3c028888
    ctx->pc = 0x1f1400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1404:
    // 0x1f1404: 0x34428889
    ctx->pc = 0x1f1404u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1408:
    // 0x1f1408: 0x460018
    ctx->pc = 0x1f1408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f140c:
    // 0x1f140c: 0x61fc2
    ctx->pc = 0x1f140cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1410:
    // 0x1f1410: 0x0
    ctx->pc = 0x1f1410u;
    // NOP
label_1f1414:
    // 0x1f1414: 0x1010
    ctx->pc = 0x1f1414u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1418:
    // 0x1f1418: 0x461021
    ctx->pc = 0x1f1418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f141c:
    // 0x1f141c: 0x21143
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1420:
    // 0x1f1420: 0x431021
    ctx->pc = 0x1f1420u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1424:
    // 0x1f1424: 0x44820000
    ctx->pc = 0x1f1424u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1428:
    // 0x1f1428: 0x0
    ctx->pc = 0x1f1428u;
    // NOP
label_1f142c:
    // 0x1f142c: 0x46800020
    ctx->pc = 0x1f142cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1430:
    // 0x1f1430: 0x3c02bf80
    ctx->pc = 0x1f1430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f1434:
    // 0x1f1434: 0x46001043
    ctx->pc = 0x1f1434u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f1438:
    // 0x1f1438: 0x0
    ctx->pc = 0x1f1438u;
    // NOP
label_1f143c:
    // 0x1f143c: 0x44820000
    ctx->pc = 0x1f143cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1440:
    // 0x1f1440: 0x10000016
label_1f1444:
    if (ctx->pc == 0x1F1444u) {
        ctx->pc = 0x1F1444u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1448u;
        goto label_1f1448;
    }
    ctx->pc = 0x1F1440u;
    {
        const bool branch_taken_0x1f1440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1444u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1440) {
            ctx->pc = 0x1F149Cu;
            goto label_1f149c;
        }
    }
    ctx->pc = 0x1F1448u;
label_1f1448:
    // 0x1f1448: 0x54e20003
label_1f144c:
    if (ctx->pc == 0x1F144Cu) {
        ctx->pc = 0x1F144Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1450u;
        goto label_1f1450;
    }
    ctx->pc = 0x1F1448u;
    {
        const bool branch_taken_0x1f1448 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1448) {
            ctx->pc = 0x1F144Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F1450u;
label_1f1450:
    // 0x1f1450: 0x1000000e
label_1f1454:
    if (ctx->pc == 0x1F1454u) {
        ctx->pc = 0x1F1458u;
        goto label_1f1458;
    }
    ctx->pc = 0x1F1450u;
    {
        const bool branch_taken_0x1f1450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1450) {
            ctx->pc = 0x1F148Cu;
            goto label_1f148c;
        }
    }
    ctx->pc = 0x1F1458u;
label_1f1458:
    // 0x1f1458: 0x471821
    ctx->pc = 0x1f1458u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f145c:
    // 0x1f145c: 0x31080
    ctx->pc = 0x1f145cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1460:
    // 0x1f1460: 0x621021
    ctx->pc = 0x1f1460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1464:
    // 0x1f1464: 0x23040
    ctx->pc = 0x1f1464u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1468:
    // 0x1f1468: 0x3c028888
    ctx->pc = 0x1f1468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f146c:
    // 0x1f146c: 0x34428889
    ctx->pc = 0x1f146cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1470:
    // 0x1f1470: 0x460018
    ctx->pc = 0x1f1470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1474:
    // 0x1f1474: 0x61fc2
    ctx->pc = 0x1f1474u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1478:
    // 0x1f1478: 0x0
    ctx->pc = 0x1f1478u;
    // NOP
label_1f147c:
    // 0x1f147c: 0x1010
    ctx->pc = 0x1f147cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1480:
    // 0x1f1480: 0x461021
    ctx->pc = 0x1f1480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1484:
    // 0x1f1484: 0x21143
    ctx->pc = 0x1f1484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1488:
    // 0x1f1488: 0x431021
    ctx->pc = 0x1f1488u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f148c:
    // 0x1f148c: 0x44820000
    ctx->pc = 0x1f148cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1490:
    // 0x1f1490: 0x0
    ctx->pc = 0x1f1490u;
    // NOP
label_1f1494:
    // 0x1f1494: 0x46800020
    ctx->pc = 0x1f1494u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1498:
    // 0x1f1498: 0x46001003
    ctx->pc = 0x1f1498u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f149c:
    // 0x1f149c: 0x1000000e
label_1f14a0:
    if (ctx->pc == 0x1F14A0u) {
        ctx->pc = 0x1F14A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
        ctx->pc = 0x1F14A4u;
        goto label_1f14a4;
    }
    ctx->pc = 0x1F149Cu;
    {
        const bool branch_taken_0x1f149c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F14A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
        if (branch_taken_0x1f149c) {
            ctx->pc = 0x1F14D8u;
            goto label_1f14d8;
        }
    }
    ctx->pc = 0x1F14A4u;
label_1f14a4:
    // 0x1f14a4: 0xc482039c
    ctx->pc = 0x1f14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f14a8:
    // 0x1f14a8: 0xc4810398
    ctx->pc = 0x1f14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f14ac:
    // 0x1f14ac: 0x44800000
    ctx->pc = 0x1f14acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f14b0:
    // 0x1f14b0: 0x0
    ctx->pc = 0x1f14b0u;
    // NOP
label_1f14b4:
    // 0x1f14b4: 0x46011041
    ctx->pc = 0x1f14b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f14b8:
    // 0x1f14b8: 0x46000834
    ctx->pc = 0x1f14b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f14bc:
    // 0x1f14bc: 0x0
    ctx->pc = 0x1f14bcu;
    // NOP
label_1f14c0:
    // 0x1f14c0: 0x45000004
label_1f14c4:
    if (ctx->pc == 0x1F14C4u) {
        ctx->pc = 0x1F14C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F14C8u;
        goto label_1f14c8;
    }
    ctx->pc = 0x1F14C0u;
    {
        const bool branch_taken_0x1f14c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F14C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f14c0) {
            ctx->pc = 0x1F14D4u;
            goto label_1f14d4;
        }
    }
    ctx->pc = 0x1F14C8u;
label_1f14c8:
    // 0x1f14c8: 0x44820000
    ctx->pc = 0x1f14c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f14cc:
    // 0x1f14cc: 0x0
    ctx->pc = 0x1f14ccu;
    // NOP
label_1f14d0:
    // 0x1f14d0: 0x46010042
    ctx->pc = 0x1f14d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f14d4:
    // 0x1f14d4: 0xe48103a0
    ctx->pc = 0x1f14d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
label_1f14d8:
    // 0x1f14d8: 0x100004ee
label_1f14dc:
    if (ctx->pc == 0x1F14DCu) {
        ctx->pc = 0x1F14DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1F14E0u;
        goto label_1f14e0;
    }
    ctx->pc = 0x1F14D8u;
    {
        const bool branch_taken_0x1f14d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F14DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1f14d8) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F14E0u;
label_1f14e0:
    // 0x1f14e0: 0x24030001
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f14e4:
    // 0x1f14e4: 0xac8303a4
    ctx->pc = 0x1f14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 3));
label_1f14e8:
    // 0x1f14e8: 0xc4e00008
    ctx->pc = 0x1f14e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f14ec:
    // 0x1f14ec: 0xe48003a8
    ctx->pc = 0x1f14ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_1f14f0:
    // 0x1f14f0: 0x8ca20008
    ctx->pc = 0x1f14f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f14f4:
    // 0x1f14f4: 0xc4400000
    ctx->pc = 0x1f14f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f14f8:
    // 0x1f14f8: 0xe48003ac
    ctx->pc = 0x1f14f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 940), bits); }
label_1f14fc:
    // 0x1f14fc: 0x8ca7000c
    ctx->pc = 0x1f14fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f1500:
    // 0x1f1500: 0x10e00052
label_1f1504:
    if (ctx->pc == 0x1F1504u) {
        ctx->pc = 0x1F1508u;
        goto label_1f1508;
    }
    ctx->pc = 0x1F1500u;
    {
        const bool branch_taken_0x1f1500 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1500) {
            ctx->pc = 0x1F164Cu;
            goto label_1f164c;
        }
    }
    ctx->pc = 0x1F1508u;
label_1f1508:
    // 0x1f1508: 0x14e30003
label_1f150c:
    if (ctx->pc == 0x1F150Cu) {
        ctx->pc = 0x1F150Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1510u;
        goto label_1f1510;
    }
    ctx->pc = 0x1F1508u;
    {
        const bool branch_taken_0x1f1508 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F150Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1f1508) {
            ctx->pc = 0x1F1518u;
            goto label_1f1518;
        }
    }
    ctx->pc = 0x1F1510u;
label_1f1510:
    // 0x1f1510: 0x1000000f
label_1f1514:
    if (ctx->pc == 0x1F1514u) {
        ctx->pc = 0x1F1514u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F1518u;
        goto label_1f1518;
    }
    ctx->pc = 0x1F1510u;
    {
        const bool branch_taken_0x1f1510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1514u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x1f1510) {
            ctx->pc = 0x1F1550u;
            goto label_1f1550;
        }
    }
    ctx->pc = 0x1F1518u;
label_1f1518:
    // 0x1f1518: 0x471821
    ctx->pc = 0x1f1518u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f151c:
    // 0x1f151c: 0x31080
    ctx->pc = 0x1f151cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1520:
    // 0x1f1520: 0x621021
    ctx->pc = 0x1f1520u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1524:
    // 0x1f1524: 0x23040
    ctx->pc = 0x1f1524u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1528:
    // 0x1f1528: 0x3c028888
    ctx->pc = 0x1f1528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f152c:
    // 0x1f152c: 0x34428889
    ctx->pc = 0x1f152cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1530:
    // 0x1f1530: 0x460018
    ctx->pc = 0x1f1530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1534:
    // 0x1f1534: 0x61fc2
    ctx->pc = 0x1f1534u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1538:
    // 0x1f1538: 0x0
    ctx->pc = 0x1f1538u;
    // NOP
label_1f153c:
    // 0x1f153c: 0x1010
    ctx->pc = 0x1f153cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1540:
    // 0x1f1540: 0x461021
    ctx->pc = 0x1f1540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1544:
    // 0x1f1544: 0x21143
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1548:
    // 0x1f1548: 0x431821
    ctx->pc = 0x1f1548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f154c:
    // 0x1f154c: 0xc48203ac
    ctx->pc = 0x1f154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1550:
    // 0x1f1550: 0xc48103a8
    ctx->pc = 0x1f1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1554:
    // 0x1f1554: 0x44830000
    ctx->pc = 0x1f1554u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1558:
    // 0x1f1558: 0x0
    ctx->pc = 0x1f1558u;
    // NOP
label_1f155c:
    // 0x1f155c: 0x468000e0
    ctx->pc = 0x1f155cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1560:
    // 0x1f1560: 0x46011081
    ctx->pc = 0x1f1560u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f1564:
    // 0x1f1564: 0x46031043
    ctx->pc = 0x1f1564u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_1f1568:
    // 0x1f1568: 0x44800000
    ctx->pc = 0x1f1568u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f156c:
    // 0x1f156c: 0x0
    ctx->pc = 0x1f156cu;
    // NOP
label_1f1570:
    // 0x1f1570: 0x0
    ctx->pc = 0x1f1570u;
    // NOP
label_1f1574:
    // 0x1f1574: 0x46000834
    ctx->pc = 0x1f1574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1578:
    // 0x1f1578: 0x0
    ctx->pc = 0x1f1578u;
    // NOP
label_1f157c:
    // 0x1f157c: 0x4500001c
label_1f1580:
    if (ctx->pc == 0x1F1580u) {
        ctx->pc = 0x1F1580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1584u;
        goto label_1f1584;
    }
    ctx->pc = 0x1F157Cu;
    {
        const bool branch_taken_0x1f157c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f157c) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F1584u;
label_1f1584:
    // 0x1f1584: 0x24020001
    ctx->pc = 0x1f1584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f1588:
    // 0x1f1588: 0x54e20003
label_1f158c:
    if (ctx->pc == 0x1F158Cu) {
        ctx->pc = 0x1F158Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1590u;
        goto label_1f1590;
    }
    ctx->pc = 0x1F1588u;
    {
        const bool branch_taken_0x1f1588 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1588) {
            ctx->pc = 0x1F158Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1598u;
            goto label_1f1598;
        }
    }
    ctx->pc = 0x1F1590u;
label_1f1590:
    // 0x1f1590: 0x1000000e
label_1f1594:
    if (ctx->pc == 0x1F1594u) {
        ctx->pc = 0x1F1598u;
        goto label_1f1598;
    }
    ctx->pc = 0x1F1590u;
    {
        const bool branch_taken_0x1f1590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1590) {
            ctx->pc = 0x1F15CCu;
            goto label_1f15cc;
        }
    }
    ctx->pc = 0x1F1598u;
label_1f1598:
    // 0x1f1598: 0x471821
    ctx->pc = 0x1f1598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f159c:
    // 0x1f159c: 0x31080
    ctx->pc = 0x1f159cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f15a0:
    // 0x1f15a0: 0x621021
    ctx->pc = 0x1f15a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f15a4:
    // 0x1f15a4: 0x23040
    ctx->pc = 0x1f15a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f15a8:
    // 0x1f15a8: 0x3c028888
    ctx->pc = 0x1f15a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f15ac:
    // 0x1f15ac: 0x34428889
    ctx->pc = 0x1f15acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f15b0:
    // 0x1f15b0: 0x460018
    ctx->pc = 0x1f15b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f15b4:
    // 0x1f15b4: 0x61fc2
    ctx->pc = 0x1f15b4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f15b8:
    // 0x1f15b8: 0x0
    ctx->pc = 0x1f15b8u;
    // NOP
label_1f15bc:
    // 0x1f15bc: 0x1010
    ctx->pc = 0x1f15bcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f15c0:
    // 0x1f15c0: 0x461021
    ctx->pc = 0x1f15c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f15c4:
    // 0x1f15c4: 0x21143
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f15c8:
    // 0x1f15c8: 0x431021
    ctx->pc = 0x1f15c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f15cc:
    // 0x1f15cc: 0x44820000
    ctx->pc = 0x1f15ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f15d0:
    // 0x1f15d0: 0x0
    ctx->pc = 0x1f15d0u;
    // NOP
label_1f15d4:
    // 0x1f15d4: 0x46800020
    ctx->pc = 0x1f15d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f15d8:
    // 0x1f15d8: 0x3c02bf80
    ctx->pc = 0x1f15d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f15dc:
    // 0x1f15dc: 0x46001043
    ctx->pc = 0x1f15dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f15e0:
    // 0x1f15e0: 0x0
    ctx->pc = 0x1f15e0u;
    // NOP
label_1f15e4:
    // 0x1f15e4: 0x44820000
    ctx->pc = 0x1f15e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f15e8:
    // 0x1f15e8: 0x10000016
label_1f15ec:
    if (ctx->pc == 0x1F15ECu) {
        ctx->pc = 0x1F15ECu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F15F0u;
        goto label_1f15f0;
    }
    ctx->pc = 0x1F15E8u;
    {
        const bool branch_taken_0x1f15e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F15ECu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f15e8) {
            ctx->pc = 0x1F1644u;
            goto label_1f1644;
        }
    }
    ctx->pc = 0x1F15F0u;
label_1f15f0:
    // 0x1f15f0: 0x54e20003
label_1f15f4:
    if (ctx->pc == 0x1F15F4u) {
        ctx->pc = 0x1F15F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F15F8u;
        goto label_1f15f8;
    }
    ctx->pc = 0x1F15F0u;
    {
        const bool branch_taken_0x1f15f0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f15f0) {
            ctx->pc = 0x1F15F4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1600u;
            goto label_1f1600;
        }
    }
    ctx->pc = 0x1F15F8u;
label_1f15f8:
    // 0x1f15f8: 0x1000000e
label_1f15fc:
    if (ctx->pc == 0x1F15FCu) {
        ctx->pc = 0x1F1600u;
        goto label_1f1600;
    }
    ctx->pc = 0x1F15F8u;
    {
        const bool branch_taken_0x1f15f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f15f8) {
            ctx->pc = 0x1F1634u;
            goto label_1f1634;
        }
    }
    ctx->pc = 0x1F1600u;
label_1f1600:
    // 0x1f1600: 0x471821
    ctx->pc = 0x1f1600u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1604:
    // 0x1f1604: 0x31080
    ctx->pc = 0x1f1604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1608:
    // 0x1f1608: 0x621021
    ctx->pc = 0x1f1608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f160c:
    // 0x1f160c: 0x23040
    ctx->pc = 0x1f160cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1610:
    // 0x1f1610: 0x3c028888
    ctx->pc = 0x1f1610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1614:
    // 0x1f1614: 0x34428889
    ctx->pc = 0x1f1614u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1618:
    // 0x1f1618: 0x460018
    ctx->pc = 0x1f1618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f161c:
    // 0x1f161c: 0x61fc2
    ctx->pc = 0x1f161cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1620:
    // 0x1f1620: 0x0
    ctx->pc = 0x1f1620u;
    // NOP
label_1f1624:
    // 0x1f1624: 0x1010
    ctx->pc = 0x1f1624u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1628:
    // 0x1f1628: 0x461021
    ctx->pc = 0x1f1628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f162c:
    // 0x1f162c: 0x21143
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1630:
    // 0x1f1630: 0x431021
    ctx->pc = 0x1f1630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1634:
    // 0x1f1634: 0x44820000
    ctx->pc = 0x1f1634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1638:
    // 0x1f1638: 0x0
    ctx->pc = 0x1f1638u;
    // NOP
label_1f163c:
    // 0x1f163c: 0x46800020
    ctx->pc = 0x1f163cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1640:
    // 0x1f1640: 0x46001003
    ctx->pc = 0x1f1640u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f1644:
    // 0x1f1644: 0x1000000e
label_1f1648:
    if (ctx->pc == 0x1F1648u) {
        ctx->pc = 0x1F1648u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
        ctx->pc = 0x1F164Cu;
        goto label_1f164c;
    }
    ctx->pc = 0x1F1644u;
    {
        const bool branch_taken_0x1f1644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1648u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
        if (branch_taken_0x1f1644) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F164Cu;
label_1f164c:
    // 0x1f164c: 0xc48203ac
    ctx->pc = 0x1f164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1650:
    // 0x1f1650: 0xc48103a8
    ctx->pc = 0x1f1650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1654:
    // 0x1f1654: 0x44800000
    ctx->pc = 0x1f1654u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1658:
    // 0x1f1658: 0x0
    ctx->pc = 0x1f1658u;
    // NOP
label_1f165c:
    // 0x1f165c: 0x46011041
    ctx->pc = 0x1f165cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f1660:
    // 0x1f1660: 0x46000834
    ctx->pc = 0x1f1660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1664:
    // 0x1f1664: 0x0
    ctx->pc = 0x1f1664u;
    // NOP
label_1f1668:
    // 0x1f1668: 0x45000004
label_1f166c:
    if (ctx->pc == 0x1F166Cu) {
        ctx->pc = 0x1F166Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F1670u;
        goto label_1f1670;
    }
    ctx->pc = 0x1F1668u;
    {
        const bool branch_taken_0x1f1668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F166Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f1668) {
            ctx->pc = 0x1F167Cu;
            goto label_1f167c;
        }
    }
    ctx->pc = 0x1F1670u;
label_1f1670:
    // 0x1f1670: 0x44820000
    ctx->pc = 0x1f1670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1674:
    // 0x1f1674: 0x0
    ctx->pc = 0x1f1674u;
    // NOP
label_1f1678:
    // 0x1f1678: 0x46010042
    ctx->pc = 0x1f1678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f167c:
    // 0x1f167c: 0xe48103b0
    ctx->pc = 0x1f167cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
label_1f1680:
    // 0x1f1680: 0x10000484
label_1f1684:
    if (ctx->pc == 0x1F1684u) {
        ctx->pc = 0x1F1684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1F1688u;
        goto label_1f1688;
    }
    ctx->pc = 0x1F1680u;
    {
        const bool branch_taken_0x1f1680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1f1680) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F1688u;
label_1f1688:
    // 0x1f1688: 0x24030001
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f168c:
    // 0x1f168c: 0xac8303b4
    ctx->pc = 0x1f168cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 3));
label_1f1690:
    // 0x1f1690: 0xc4e0000c
    ctx->pc = 0x1f1690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1694:
    // 0x1f1694: 0xe48003b8
    ctx->pc = 0x1f1694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 952), bits); }
label_1f1698:
    // 0x1f1698: 0x8ca20008
    ctx->pc = 0x1f1698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f169c:
    // 0x1f169c: 0xc4400000
    ctx->pc = 0x1f169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f16a0:
    // 0x1f16a0: 0xe48003bc
    ctx->pc = 0x1f16a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 956), bits); }
label_1f16a4:
    // 0x1f16a4: 0x8ca7000c
    ctx->pc = 0x1f16a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f16a8:
    // 0x1f16a8: 0x10e00052
label_1f16ac:
    if (ctx->pc == 0x1F16ACu) {
        ctx->pc = 0x1F16B0u;
        goto label_1f16b0;
    }
    ctx->pc = 0x1F16A8u;
    {
        const bool branch_taken_0x1f16a8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f16a8) {
            ctx->pc = 0x1F17F4u;
            goto label_1f17f4;
        }
    }
    ctx->pc = 0x1F16B0u;
label_1f16b0:
    // 0x1f16b0: 0x14e30003
label_1f16b4:
    if (ctx->pc == 0x1F16B4u) {
        ctx->pc = 0x1F16B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F16B8u;
        goto label_1f16b8;
    }
    ctx->pc = 0x1F16B0u;
    {
        const bool branch_taken_0x1f16b0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F16B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1f16b0) {
            ctx->pc = 0x1F16C0u;
            goto label_1f16c0;
        }
    }
    ctx->pc = 0x1F16B8u;
label_1f16b8:
    // 0x1f16b8: 0x1000000f
label_1f16bc:
    if (ctx->pc == 0x1F16BCu) {
        ctx->pc = 0x1F16BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F16C0u;
        goto label_1f16c0;
    }
    ctx->pc = 0x1F16B8u;
    {
        const bool branch_taken_0x1f16b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F16BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x1f16b8) {
            ctx->pc = 0x1F16F8u;
            goto label_1f16f8;
        }
    }
    ctx->pc = 0x1F16C0u;
label_1f16c0:
    // 0x1f16c0: 0x471821
    ctx->pc = 0x1f16c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f16c4:
    // 0x1f16c4: 0x31080
    ctx->pc = 0x1f16c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f16c8:
    // 0x1f16c8: 0x621021
    ctx->pc = 0x1f16c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f16cc:
    // 0x1f16cc: 0x23040
    ctx->pc = 0x1f16ccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f16d0:
    // 0x1f16d0: 0x3c028888
    ctx->pc = 0x1f16d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f16d4:
    // 0x1f16d4: 0x34428889
    ctx->pc = 0x1f16d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f16d8:
    // 0x1f16d8: 0x460018
    ctx->pc = 0x1f16d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f16dc:
    // 0x1f16dc: 0x61fc2
    ctx->pc = 0x1f16dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f16e0:
    // 0x1f16e0: 0x0
    ctx->pc = 0x1f16e0u;
    // NOP
label_1f16e4:
    // 0x1f16e4: 0x1010
    ctx->pc = 0x1f16e4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f16e8:
    // 0x1f16e8: 0x461021
    ctx->pc = 0x1f16e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f16ec:
    // 0x1f16ec: 0x21143
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f16f0:
    // 0x1f16f0: 0x431821
    ctx->pc = 0x1f16f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f16f4:
    // 0x1f16f4: 0xc48203bc
    ctx->pc = 0x1f16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f16f8:
    // 0x1f16f8: 0xc48103b8
    ctx->pc = 0x1f16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f16fc:
    // 0x1f16fc: 0x44830000
    ctx->pc = 0x1f16fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1700:
    // 0x1f1700: 0x0
    ctx->pc = 0x1f1700u;
    // NOP
label_1f1704:
    // 0x1f1704: 0x468000e0
    ctx->pc = 0x1f1704u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1708:
    // 0x1f1708: 0x46011081
    ctx->pc = 0x1f1708u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f170c:
    // 0x1f170c: 0x46031043
    ctx->pc = 0x1f170cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_1f1710:
    // 0x1f1710: 0x44800000
    ctx->pc = 0x1f1710u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1714:
    // 0x1f1714: 0x0
    ctx->pc = 0x1f1714u;
    // NOP
label_1f1718:
    // 0x1f1718: 0x0
    ctx->pc = 0x1f1718u;
    // NOP
label_1f171c:
    // 0x1f171c: 0x46000834
    ctx->pc = 0x1f171cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1720:
    // 0x1f1720: 0x0
    ctx->pc = 0x1f1720u;
    // NOP
label_1f1724:
    // 0x1f1724: 0x4500001c
label_1f1728:
    if (ctx->pc == 0x1F1728u) {
        ctx->pc = 0x1F1728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F172Cu;
        goto label_1f172c;
    }
    ctx->pc = 0x1F1724u;
    {
        const bool branch_taken_0x1f1724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f1724) {
            ctx->pc = 0x1F1798u;
            goto label_1f1798;
        }
    }
    ctx->pc = 0x1F172Cu;
label_1f172c:
    // 0x1f172c: 0x24020001
    ctx->pc = 0x1f172cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f1730:
    // 0x1f1730: 0x54e20003
label_1f1734:
    if (ctx->pc == 0x1F1734u) {
        ctx->pc = 0x1F1734u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1738u;
        goto label_1f1738;
    }
    ctx->pc = 0x1F1730u;
    {
        const bool branch_taken_0x1f1730 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1730) {
            ctx->pc = 0x1F1734u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1740u;
            goto label_1f1740;
        }
    }
    ctx->pc = 0x1F1738u;
label_1f1738:
    // 0x1f1738: 0x1000000e
label_1f173c:
    if (ctx->pc == 0x1F173Cu) {
        ctx->pc = 0x1F1740u;
        goto label_1f1740;
    }
    ctx->pc = 0x1F1738u;
    {
        const bool branch_taken_0x1f1738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1738) {
            ctx->pc = 0x1F1774u;
            goto label_1f1774;
        }
    }
    ctx->pc = 0x1F1740u;
label_1f1740:
    // 0x1f1740: 0x471821
    ctx->pc = 0x1f1740u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1744:
    // 0x1f1744: 0x31080
    ctx->pc = 0x1f1744u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1748:
    // 0x1f1748: 0x621021
    ctx->pc = 0x1f1748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f174c:
    // 0x1f174c: 0x23040
    ctx->pc = 0x1f174cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1750:
    // 0x1f1750: 0x3c028888
    ctx->pc = 0x1f1750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1754:
    // 0x1f1754: 0x34428889
    ctx->pc = 0x1f1754u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1758:
    // 0x1f1758: 0x460018
    ctx->pc = 0x1f1758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f175c:
    // 0x1f175c: 0x61fc2
    ctx->pc = 0x1f175cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1760:
    // 0x1f1760: 0x0
    ctx->pc = 0x1f1760u;
    // NOP
label_1f1764:
    // 0x1f1764: 0x1010
    ctx->pc = 0x1f1764u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1768:
    // 0x1f1768: 0x461021
    ctx->pc = 0x1f1768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f176c:
    // 0x1f176c: 0x21143
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1770:
    // 0x1f1770: 0x431021
    ctx->pc = 0x1f1770u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1774:
    // 0x1f1774: 0x44820000
    ctx->pc = 0x1f1774u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1778:
    // 0x1f1778: 0x0
    ctx->pc = 0x1f1778u;
    // NOP
label_1f177c:
    // 0x1f177c: 0x46800020
    ctx->pc = 0x1f177cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1780:
    // 0x1f1780: 0x3c02bf80
    ctx->pc = 0x1f1780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f1784:
    // 0x1f1784: 0x46001043
    ctx->pc = 0x1f1784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f1788:
    // 0x1f1788: 0x0
    ctx->pc = 0x1f1788u;
    // NOP
label_1f178c:
    // 0x1f178c: 0x44820000
    ctx->pc = 0x1f178cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1790:
    // 0x1f1790: 0x10000016
label_1f1794:
    if (ctx->pc == 0x1F1794u) {
        ctx->pc = 0x1F1794u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1798u;
        goto label_1f1798;
    }
    ctx->pc = 0x1F1790u;
    {
        const bool branch_taken_0x1f1790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1794u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1790) {
            ctx->pc = 0x1F17ECu;
            goto label_1f17ec;
        }
    }
    ctx->pc = 0x1F1798u;
label_1f1798:
    // 0x1f1798: 0x54e20003
label_1f179c:
    if (ctx->pc == 0x1F179Cu) {
        ctx->pc = 0x1F179Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F17A0u;
        goto label_1f17a0;
    }
    ctx->pc = 0x1F1798u;
    {
        const bool branch_taken_0x1f1798 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1798) {
            ctx->pc = 0x1F179Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F17A8u;
            goto label_1f17a8;
        }
    }
    ctx->pc = 0x1F17A0u;
label_1f17a0:
    // 0x1f17a0: 0x1000000e
label_1f17a4:
    if (ctx->pc == 0x1F17A4u) {
        ctx->pc = 0x1F17A8u;
        goto label_1f17a8;
    }
    ctx->pc = 0x1F17A0u;
    {
        const bool branch_taken_0x1f17a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f17a0) {
            ctx->pc = 0x1F17DCu;
            goto label_1f17dc;
        }
    }
    ctx->pc = 0x1F17A8u;
label_1f17a8:
    // 0x1f17a8: 0x471821
    ctx->pc = 0x1f17a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f17ac:
    // 0x1f17ac: 0x31080
    ctx->pc = 0x1f17acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f17b0:
    // 0x1f17b0: 0x621021
    ctx->pc = 0x1f17b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f17b4:
    // 0x1f17b4: 0x23040
    ctx->pc = 0x1f17b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f17b8:
    // 0x1f17b8: 0x3c028888
    ctx->pc = 0x1f17b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f17bc:
    // 0x1f17bc: 0x34428889
    ctx->pc = 0x1f17bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f17c0:
    // 0x1f17c0: 0x460018
    ctx->pc = 0x1f17c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f17c4:
    // 0x1f17c4: 0x61fc2
    ctx->pc = 0x1f17c4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f17c8:
    // 0x1f17c8: 0x0
    ctx->pc = 0x1f17c8u;
    // NOP
label_1f17cc:
    // 0x1f17cc: 0x1010
    ctx->pc = 0x1f17ccu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f17d0:
    // 0x1f17d0: 0x461021
    ctx->pc = 0x1f17d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f17d4:
    // 0x1f17d4: 0x21143
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f17d8:
    // 0x1f17d8: 0x431021
    ctx->pc = 0x1f17d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f17dc:
    // 0x1f17dc: 0x44820000
    ctx->pc = 0x1f17dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f17e0:
    // 0x1f17e0: 0x0
    ctx->pc = 0x1f17e0u;
    // NOP
label_1f17e4:
    // 0x1f17e4: 0x46800020
    ctx->pc = 0x1f17e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f17e8:
    // 0x1f17e8: 0x46001003
    ctx->pc = 0x1f17e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f17ec:
    // 0x1f17ec: 0x1000000e
label_1f17f0:
    if (ctx->pc == 0x1F17F0u) {
        ctx->pc = 0x1F17F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
        ctx->pc = 0x1F17F4u;
        goto label_1f17f4;
    }
    ctx->pc = 0x1F17ECu;
    {
        const bool branch_taken_0x1f17ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F17F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
        if (branch_taken_0x1f17ec) {
            ctx->pc = 0x1F1828u;
            goto label_1f1828;
        }
    }
    ctx->pc = 0x1F17F4u;
label_1f17f4:
    // 0x1f17f4: 0xc48203bc
    ctx->pc = 0x1f17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f17f8:
    // 0x1f17f8: 0xc48103b8
    ctx->pc = 0x1f17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f17fc:
    // 0x1f17fc: 0x44800000
    ctx->pc = 0x1f17fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1800:
    // 0x1f1800: 0x0
    ctx->pc = 0x1f1800u;
    // NOP
label_1f1804:
    // 0x1f1804: 0x46011041
    ctx->pc = 0x1f1804u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f1808:
    // 0x1f1808: 0x46000834
    ctx->pc = 0x1f1808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f180c:
    // 0x1f180c: 0x0
    ctx->pc = 0x1f180cu;
    // NOP
label_1f1810:
    // 0x1f1810: 0x45000004
label_1f1814:
    if (ctx->pc == 0x1F1814u) {
        ctx->pc = 0x1F1814u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F1818u;
        goto label_1f1818;
    }
    ctx->pc = 0x1F1810u;
    {
        const bool branch_taken_0x1f1810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1814u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f1810) {
            ctx->pc = 0x1F1824u;
            goto label_1f1824;
        }
    }
    ctx->pc = 0x1F1818u;
label_1f1818:
    // 0x1f1818: 0x44820000
    ctx->pc = 0x1f1818u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f181c:
    // 0x1f181c: 0x0
    ctx->pc = 0x1f181cu;
    // NOP
label_1f1820:
    // 0x1f1820: 0x46010042
    ctx->pc = 0x1f1820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f1824:
    // 0x1f1824: 0xe48103c0
    ctx->pc = 0x1f1824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
label_1f1828:
    // 0x1f1828: 0x1000041a
label_1f182c:
    if (ctx->pc == 0x1F182Cu) {
        ctx->pc = 0x1F182Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1F1830u;
        goto label_1f1830;
    }
    ctx->pc = 0x1F1828u;
    {
        const bool branch_taken_0x1f1828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F182Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1f1828) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F1830u;
label_1f1830:
    // 0x1f1830: 0x24060001
    ctx->pc = 0x1f1830u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1f1834:
    // 0x1f1834: 0xac8603b4
    ctx->pc = 0x1f1834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 6));
label_1f1838:
    // 0x1f1838: 0xac8603a4
    ctx->pc = 0x1f1838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 6));
label_1f183c:
    // 0x1f183c: 0xac860394
    ctx->pc = 0x1f183cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 6));
label_1f1840:
    // 0x1f1840: 0xc4e00004
    ctx->pc = 0x1f1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1844:
    // 0x1f1844: 0xe4800398
    ctx->pc = 0x1f1844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
label_1f1848:
    // 0x1f1848: 0xc4e00008
    ctx->pc = 0x1f1848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f184c:
    // 0x1f184c: 0xe48003a8
    ctx->pc = 0x1f184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
label_1f1850:
    // 0x1f1850: 0xc4e0000c
    ctx->pc = 0x1f1850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1854:
    // 0x1f1854: 0xe48003b8
    ctx->pc = 0x1f1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 952), bits); }
label_1f1858:
    // 0x1f1858: 0x8ca30008
    ctx->pc = 0x1f1858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f185c:
    // 0x1f185c: 0xc4600000
    ctx->pc = 0x1f185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1860:
    // 0x1f1860: 0xe480039c
    ctx->pc = 0x1f1860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
label_1f1864:
    // 0x1f1864: 0x8ca3000c
    ctx->pc = 0x1f1864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f1868:
    // 0x1f1868: 0xc4600000
    ctx->pc = 0x1f1868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f186c:
    // 0x1f186c: 0xe48003ac
    ctx->pc = 0x1f186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 940), bits); }
label_1f1870:
    // 0x1f1870: 0x8ca30010
    ctx->pc = 0x1f1870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1f1874:
    // 0x1f1874: 0xc4600000
    ctx->pc = 0x1f1874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1878:
    // 0x1f1878: 0xe48003bc
    ctx->pc = 0x1f1878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 956), bits); }
label_1f187c:
    // 0x1f187c: 0x8ca80014
    ctx->pc = 0x1f187cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1f1880:
    // 0x1f1880: 0x110000f5
label_1f1884:
    if (ctx->pc == 0x1F1884u) {
        ctx->pc = 0x1F1884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        ctx->pc = 0x1F1888u;
        goto label_1f1888;
    }
    ctx->pc = 0x1F1880u;
    {
        const bool branch_taken_0x1f1880 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x1f1880) {
            ctx->pc = 0x1F1C58u;
            goto label_1f1c58;
        }
    }
    ctx->pc = 0x1F1888u;
label_1f1888:
    // 0x1f1888: 0x15060003
label_1f188c:
    if (ctx->pc == 0x1F188Cu) {
        ctx->pc = 0x1F188Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1890u;
        goto label_1f1890;
    }
    ctx->pc = 0x1F1888u;
    {
        const bool branch_taken_0x1f1888 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 6));
        ctx->pc = 0x1F188Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1f1888) {
            ctx->pc = 0x1F1898u;
            goto label_1f1898;
        }
    }
    ctx->pc = 0x1F1890u;
label_1f1890:
    // 0x1f1890: 0x1000000e
label_1f1894:
    if (ctx->pc == 0x1F1894u) {
        ctx->pc = 0x1F1898u;
        goto label_1f1898;
    }
    ctx->pc = 0x1F1890u;
    {
        const bool branch_taken_0x1f1890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1890) {
            ctx->pc = 0x1F18CCu;
            goto label_1f18cc;
        }
    }
    ctx->pc = 0x1F1898u;
label_1f1898:
    // 0x1f1898: 0x683021
    ctx->pc = 0x1f1898u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f189c:
    // 0x1f189c: 0x61880
    ctx->pc = 0x1f189cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f18a0:
    // 0x1f18a0: 0xc31821
    ctx->pc = 0x1f18a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f18a4:
    // 0x1f18a4: 0x33840
    ctx->pc = 0x1f18a4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f18a8:
    // 0x1f18a8: 0x3c038888
    ctx->pc = 0x1f18a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f18ac:
    // 0x1f18ac: 0x34638889
    ctx->pc = 0x1f18acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f18b0:
    // 0x1f18b0: 0x670018
    ctx->pc = 0x1f18b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f18b4:
    // 0x1f18b4: 0x737c2
    ctx->pc = 0x1f18b4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f18b8:
    // 0x1f18b8: 0x0
    ctx->pc = 0x1f18b8u;
    // NOP
label_1f18bc:
    // 0x1f18bc: 0x1810
    ctx->pc = 0x1f18bcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f18c0:
    // 0x1f18c0: 0x671821
    ctx->pc = 0x1f18c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f18c4:
    // 0x1f18c4: 0x31943
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f18c8:
    // 0x1f18c8: 0x663021
    ctx->pc = 0x1f18c8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f18cc:
    // 0x1f18cc: 0x44860000
    ctx->pc = 0x1f18ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
label_1f18d0:
    // 0x1f18d0: 0xc481039c
    ctx->pc = 0x1f18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f18d4:
    // 0x1f18d4: 0x468000a0
    ctx->pc = 0x1f18d4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f18d8:
    // 0x1f18d8: 0xc4800398
    ctx->pc = 0x1f18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f18dc:
    // 0x1f18dc: 0x44801800
    ctx->pc = 0x1f18dcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_1f18e0:
    // 0x1f18e0: 0x46000841
    ctx->pc = 0x1f18e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f18e4:
    // 0x1f18e4: 0x46020803
    ctx->pc = 0x1f18e4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
label_1f18e8:
    // 0x1f18e8: 0x0
    ctx->pc = 0x1f18e8u;
    // NOP
label_1f18ec:
    // 0x1f18ec: 0x0
    ctx->pc = 0x1f18ecu;
    // NOP
label_1f18f0:
    // 0x1f18f0: 0x46030034
    ctx->pc = 0x1f18f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f18f4:
    // 0x1f18f4: 0x0
    ctx->pc = 0x1f18f4u;
    // NOP
label_1f18f8:
    // 0x1f18f8: 0x4500001c
label_1f18fc:
    if (ctx->pc == 0x1F18FCu) {
        ctx->pc = 0x1F18FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1900u;
        goto label_1f1900;
    }
    ctx->pc = 0x1F18F8u;
    {
        const bool branch_taken_0x1f18f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F18FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f18f8) {
            ctx->pc = 0x1F196Cu;
            goto label_1f196c;
        }
    }
    ctx->pc = 0x1F1900u;
label_1f1900:
    // 0x1f1900: 0x24030001
    ctx->pc = 0x1f1900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f1904:
    // 0x1f1904: 0x55030003
label_1f1908:
    if (ctx->pc == 0x1F1908u) {
        ctx->pc = 0x1F1908u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F190Cu;
        goto label_1f190c;
    }
    ctx->pc = 0x1F1904u;
    {
        const bool branch_taken_0x1f1904 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1904) {
            ctx->pc = 0x1F1908u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1914u;
            goto label_1f1914;
        }
    }
    ctx->pc = 0x1F190Cu;
label_1f190c:
    // 0x1f190c: 0x1000000e
label_1f1910:
    if (ctx->pc == 0x1F1910u) {
        ctx->pc = 0x1F1914u;
        goto label_1f1914;
    }
    ctx->pc = 0x1F190Cu;
    {
        const bool branch_taken_0x1f190c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f190c) {
            ctx->pc = 0x1F1948u;
            goto label_1f1948;
        }
    }
    ctx->pc = 0x1F1914u;
label_1f1914:
    // 0x1f1914: 0x683021
    ctx->pc = 0x1f1914u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1918:
    // 0x1f1918: 0x61880
    ctx->pc = 0x1f1918u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f191c:
    // 0x1f191c: 0xc31821
    ctx->pc = 0x1f191cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1920:
    // 0x1f1920: 0x33840
    ctx->pc = 0x1f1920u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1924:
    // 0x1f1924: 0x3c038888
    ctx->pc = 0x1f1924u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1928:
    // 0x1f1928: 0x34638889
    ctx->pc = 0x1f1928u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f192c:
    // 0x1f192c: 0x670018
    ctx->pc = 0x1f192cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1930:
    // 0x1f1930: 0x737c2
    ctx->pc = 0x1f1930u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1934:
    // 0x1f1934: 0x0
    ctx->pc = 0x1f1934u;
    // NOP
label_1f1938:
    // 0x1f1938: 0x1810
    ctx->pc = 0x1f1938u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f193c:
    // 0x1f193c: 0x671821
    ctx->pc = 0x1f193cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1940:
    // 0x1f1940: 0x31943
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1944:
    // 0x1f1944: 0x661821
    ctx->pc = 0x1f1944u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1948:
    // 0x1f1948: 0x44830000
    ctx->pc = 0x1f1948u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f194c:
    // 0x1f194c: 0x0
    ctx->pc = 0x1f194cu;
    // NOP
label_1f1950:
    // 0x1f1950: 0x46800020
    ctx->pc = 0x1f1950u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1954:
    // 0x1f1954: 0x3c03bf80
    ctx->pc = 0x1f1954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f1958:
    // 0x1f1958: 0x46000843
    ctx->pc = 0x1f1958u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f195c:
    // 0x1f195c: 0x0
    ctx->pc = 0x1f195cu;
    // NOP
label_1f1960:
    // 0x1f1960: 0x44830000
    ctx->pc = 0x1f1960u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1964:
    // 0x1f1964: 0x10000016
label_1f1968:
    if (ctx->pc == 0x1F1968u) {
        ctx->pc = 0x1F1968u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F196Cu;
        goto label_1f196c;
    }
    ctx->pc = 0x1F1964u;
    {
        const bool branch_taken_0x1f1964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1968u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1964) {
            ctx->pc = 0x1F19C0u;
            goto label_1f19c0;
        }
    }
    ctx->pc = 0x1F196Cu;
label_1f196c:
    // 0x1f196c: 0x55030003
label_1f1970:
    if (ctx->pc == 0x1F1970u) {
        ctx->pc = 0x1F1970u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1974u;
        goto label_1f1974;
    }
    ctx->pc = 0x1F196Cu;
    {
        const bool branch_taken_0x1f196c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f196c) {
            ctx->pc = 0x1F1970u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F197Cu;
            goto label_1f197c;
        }
    }
    ctx->pc = 0x1F1974u;
label_1f1974:
    // 0x1f1974: 0x1000000e
label_1f1978:
    if (ctx->pc == 0x1F1978u) {
        ctx->pc = 0x1F197Cu;
        goto label_1f197c;
    }
    ctx->pc = 0x1F1974u;
    {
        const bool branch_taken_0x1f1974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1974) {
            ctx->pc = 0x1F19B0u;
            goto label_1f19b0;
        }
    }
    ctx->pc = 0x1F197Cu;
label_1f197c:
    // 0x1f197c: 0x683021
    ctx->pc = 0x1f197cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1980:
    // 0x1f1980: 0x61880
    ctx->pc = 0x1f1980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1984:
    // 0x1f1984: 0xc31821
    ctx->pc = 0x1f1984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1988:
    // 0x1f1988: 0x33840
    ctx->pc = 0x1f1988u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f198c:
    // 0x1f198c: 0x3c038888
    ctx->pc = 0x1f198cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1990:
    // 0x1f1990: 0x34638889
    ctx->pc = 0x1f1990u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1994:
    // 0x1f1994: 0x670018
    ctx->pc = 0x1f1994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1998:
    // 0x1f1998: 0x737c2
    ctx->pc = 0x1f1998u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f199c:
    // 0x1f199c: 0x0
    ctx->pc = 0x1f199cu;
    // NOP
label_1f19a0:
    // 0x1f19a0: 0x1810
    ctx->pc = 0x1f19a0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f19a4:
    // 0x1f19a4: 0x671821
    ctx->pc = 0x1f19a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f19a8:
    // 0x1f19a8: 0x31943
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f19ac:
    // 0x1f19ac: 0x661821
    ctx->pc = 0x1f19acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f19b0:
    // 0x1f19b0: 0x44830000
    ctx->pc = 0x1f19b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f19b4:
    // 0x1f19b4: 0x0
    ctx->pc = 0x1f19b4u;
    // NOP
label_1f19b8:
    // 0x1f19b8: 0x46800020
    ctx->pc = 0x1f19b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f19bc:
    // 0x1f19bc: 0x46000803
    ctx->pc = 0x1f19bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1f19c0:
    // 0x1f19c0: 0xe48003a0
    ctx->pc = 0x1f19c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
label_1f19c4:
    // 0x1f19c4: 0x8c480000
    ctx->pc = 0x1f19c4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f19c8:
    // 0x1f19c8: 0x24030001
    ctx->pc = 0x1f19c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f19cc:
    // 0x1f19cc: 0x55030003
label_1f19d0:
    if (ctx->pc == 0x1F19D0u) {
        ctx->pc = 0x1F19D0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F19D4u;
        goto label_1f19d4;
    }
    ctx->pc = 0x1F19CCu;
    {
        const bool branch_taken_0x1f19cc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f19cc) {
            ctx->pc = 0x1F19D0u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F19DCu;
            goto label_1f19dc;
        }
    }
    ctx->pc = 0x1F19D4u;
label_1f19d4:
    // 0x1f19d4: 0x1000000f
label_1f19d8:
    if (ctx->pc == 0x1F19D8u) {
        ctx->pc = 0x1F19D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F19DCu;
        goto label_1f19dc;
    }
    ctx->pc = 0x1F19D4u;
    {
        const bool branch_taken_0x1f19d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F19D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f19d4) {
            ctx->pc = 0x1F1A14u;
            goto label_1f1a14;
        }
    }
    ctx->pc = 0x1F19DCu;
label_1f19dc:
    // 0x1f19dc: 0x683021
    ctx->pc = 0x1f19dcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f19e0:
    // 0x1f19e0: 0x61880
    ctx->pc = 0x1f19e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f19e4:
    // 0x1f19e4: 0xc31821
    ctx->pc = 0x1f19e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f19e8:
    // 0x1f19e8: 0x33840
    ctx->pc = 0x1f19e8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f19ec:
    // 0x1f19ec: 0x3c038888
    ctx->pc = 0x1f19ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f19f0:
    // 0x1f19f0: 0x34638889
    ctx->pc = 0x1f19f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f19f4:
    // 0x1f19f4: 0x670018
    ctx->pc = 0x1f19f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f19f8:
    // 0x1f19f8: 0x737c2
    ctx->pc = 0x1f19f8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f19fc:
    // 0x1f19fc: 0x0
    ctx->pc = 0x1f19fcu;
    // NOP
label_1f1a00:
    // 0x1f1a00: 0x1810
    ctx->pc = 0x1f1a00u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1a04:
    // 0x1f1a04: 0x671821
    ctx->pc = 0x1f1a04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1a08:
    // 0x1f1a08: 0x31943
    ctx->pc = 0x1f1a08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1a0c:
    // 0x1f1a0c: 0x661821
    ctx->pc = 0x1f1a0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1a10:
    // 0x1f1a10: 0xc48303ac
    ctx->pc = 0x1f1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1a14:
    // 0x1f1a14: 0xc48203a8
    ctx->pc = 0x1f1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1a18:
    // 0x1f1a18: 0x44830000
    ctx->pc = 0x1f1a18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1a1c:
    // 0x1f1a1c: 0x0
    ctx->pc = 0x1f1a1cu;
    // NOP
label_1f1a20:
    // 0x1f1a20: 0x46800060
    ctx->pc = 0x1f1a20u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1a24:
    // 0x1f1a24: 0x46021881
    ctx->pc = 0x1f1a24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f1a28:
    // 0x1f1a28: 0x46011043
    ctx->pc = 0x1f1a28u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f1a2c:
    // 0x1f1a2c: 0x44800000
    ctx->pc = 0x1f1a2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1a30:
    // 0x1f1a30: 0x0
    ctx->pc = 0x1f1a30u;
    // NOP
label_1f1a34:
    // 0x1f1a34: 0x0
    ctx->pc = 0x1f1a34u;
    // NOP
label_1f1a38:
    // 0x1f1a38: 0x46000834
    ctx->pc = 0x1f1a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1a3c:
    // 0x1f1a3c: 0x0
    ctx->pc = 0x1f1a3cu;
    // NOP
label_1f1a40:
    // 0x1f1a40: 0x4500001c
label_1f1a44:
    if (ctx->pc == 0x1F1A44u) {
        ctx->pc = 0x1F1A44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1A48u;
        goto label_1f1a48;
    }
    ctx->pc = 0x1F1A40u;
    {
        const bool branch_taken_0x1f1a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1A44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f1a40) {
            ctx->pc = 0x1F1AB4u;
            goto label_1f1ab4;
        }
    }
    ctx->pc = 0x1F1A48u;
label_1f1a48:
    // 0x1f1a48: 0x24030001
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f1a4c:
    // 0x1f1a4c: 0x55030003
label_1f1a50:
    if (ctx->pc == 0x1F1A50u) {
        ctx->pc = 0x1F1A50u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1A54u;
        goto label_1f1a54;
    }
    ctx->pc = 0x1F1A4Cu;
    {
        const bool branch_taken_0x1f1a4c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1a4c) {
            ctx->pc = 0x1F1A50u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1A5Cu;
            goto label_1f1a5c;
        }
    }
    ctx->pc = 0x1F1A54u;
label_1f1a54:
    // 0x1f1a54: 0x1000000e
label_1f1a58:
    if (ctx->pc == 0x1F1A58u) {
        ctx->pc = 0x1F1A5Cu;
        goto label_1f1a5c;
    }
    ctx->pc = 0x1F1A54u;
    {
        const bool branch_taken_0x1f1a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1a54) {
            ctx->pc = 0x1F1A90u;
            goto label_1f1a90;
        }
    }
    ctx->pc = 0x1F1A5Cu;
label_1f1a5c:
    // 0x1f1a5c: 0x683021
    ctx->pc = 0x1f1a5cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1a60:
    // 0x1f1a60: 0x61880
    ctx->pc = 0x1f1a60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1a64:
    // 0x1f1a64: 0xc31821
    ctx->pc = 0x1f1a64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1a68:
    // 0x1f1a68: 0x33840
    ctx->pc = 0x1f1a68u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1a6c:
    // 0x1f1a6c: 0x3c038888
    ctx->pc = 0x1f1a6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1a70:
    // 0x1f1a70: 0x34638889
    ctx->pc = 0x1f1a70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1a74:
    // 0x1f1a74: 0x670018
    ctx->pc = 0x1f1a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1a78:
    // 0x1f1a78: 0x737c2
    ctx->pc = 0x1f1a78u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1a7c:
    // 0x1f1a7c: 0x0
    ctx->pc = 0x1f1a7cu;
    // NOP
label_1f1a80:
    // 0x1f1a80: 0x1810
    ctx->pc = 0x1f1a80u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1a84:
    // 0x1f1a84: 0x671821
    ctx->pc = 0x1f1a84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1a88:
    // 0x1f1a88: 0x31943
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1a8c:
    // 0x1f1a8c: 0x661821
    ctx->pc = 0x1f1a8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1a90:
    // 0x1f1a90: 0x44830000
    ctx->pc = 0x1f1a90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1a94:
    // 0x1f1a94: 0x0
    ctx->pc = 0x1f1a94u;
    // NOP
label_1f1a98:
    // 0x1f1a98: 0x46800020
    ctx->pc = 0x1f1a98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1a9c:
    // 0x1f1a9c: 0x3c03bf80
    ctx->pc = 0x1f1a9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f1aa0:
    // 0x1f1aa0: 0x46001043
    ctx->pc = 0x1f1aa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f1aa4:
    // 0x1f1aa4: 0x0
    ctx->pc = 0x1f1aa4u;
    // NOP
label_1f1aa8:
    // 0x1f1aa8: 0x44830000
    ctx->pc = 0x1f1aa8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1aac:
    // 0x1f1aac: 0x10000016
label_1f1ab0:
    if (ctx->pc == 0x1F1AB0u) {
        ctx->pc = 0x1F1AB0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1AB4u;
        goto label_1f1ab4;
    }
    ctx->pc = 0x1F1AACu;
    {
        const bool branch_taken_0x1f1aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1AB0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1aac) {
            ctx->pc = 0x1F1B08u;
            goto label_1f1b08;
        }
    }
    ctx->pc = 0x1F1AB4u;
label_1f1ab4:
    // 0x1f1ab4: 0x55030003
label_1f1ab8:
    if (ctx->pc == 0x1F1AB8u) {
        ctx->pc = 0x1F1AB8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1ABCu;
        goto label_1f1abc;
    }
    ctx->pc = 0x1F1AB4u;
    {
        const bool branch_taken_0x1f1ab4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1ab4) {
            ctx->pc = 0x1F1AB8u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1AC4u;
            goto label_1f1ac4;
        }
    }
    ctx->pc = 0x1F1ABCu;
label_1f1abc:
    // 0x1f1abc: 0x1000000e
label_1f1ac0:
    if (ctx->pc == 0x1F1AC0u) {
        ctx->pc = 0x1F1AC4u;
        goto label_1f1ac4;
    }
    ctx->pc = 0x1F1ABCu;
    {
        const bool branch_taken_0x1f1abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1abc) {
            ctx->pc = 0x1F1AF8u;
            goto label_1f1af8;
        }
    }
    ctx->pc = 0x1F1AC4u;
label_1f1ac4:
    // 0x1f1ac4: 0x683021
    ctx->pc = 0x1f1ac4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1ac8:
    // 0x1f1ac8: 0x61880
    ctx->pc = 0x1f1ac8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1acc:
    // 0x1f1acc: 0xc31821
    ctx->pc = 0x1f1accu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1ad0:
    // 0x1f1ad0: 0x33840
    ctx->pc = 0x1f1ad0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1ad4:
    // 0x1f1ad4: 0x3c038888
    ctx->pc = 0x1f1ad4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1ad8:
    // 0x1f1ad8: 0x34638889
    ctx->pc = 0x1f1ad8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1adc:
    // 0x1f1adc: 0x670018
    ctx->pc = 0x1f1adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1ae0:
    // 0x1f1ae0: 0x737c2
    ctx->pc = 0x1f1ae0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1ae4:
    // 0x1f1ae4: 0x0
    ctx->pc = 0x1f1ae4u;
    // NOP
label_1f1ae8:
    // 0x1f1ae8: 0x1810
    ctx->pc = 0x1f1ae8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1aec:
    // 0x1f1aec: 0x671821
    ctx->pc = 0x1f1aecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1af0:
    // 0x1f1af0: 0x31943
    ctx->pc = 0x1f1af0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1af4:
    // 0x1f1af4: 0x661821
    ctx->pc = 0x1f1af4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1af8:
    // 0x1f1af8: 0x44830000
    ctx->pc = 0x1f1af8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1afc:
    // 0x1f1afc: 0x0
    ctx->pc = 0x1f1afcu;
    // NOP
label_1f1b00:
    // 0x1f1b00: 0x46800020
    ctx->pc = 0x1f1b00u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1b04:
    // 0x1f1b04: 0x46001003
    ctx->pc = 0x1f1b04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f1b08:
    // 0x1f1b08: 0xe48003b0
    ctx->pc = 0x1f1b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
label_1f1b0c:
    // 0x1f1b0c: 0x8c470000
    ctx->pc = 0x1f1b0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1b10:
    // 0x1f1b10: 0x24020001
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f1b14:
    // 0x1f1b14: 0x54e20003
label_1f1b18:
    if (ctx->pc == 0x1F1B18u) {
        ctx->pc = 0x1F1B18u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1B1Cu;
        goto label_1f1b1c;
    }
    ctx->pc = 0x1F1B14u;
    {
        const bool branch_taken_0x1f1b14 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1b14) {
            ctx->pc = 0x1F1B18u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1B24u;
            goto label_1f1b24;
        }
    }
    ctx->pc = 0x1F1B1Cu;
label_1f1b1c:
    // 0x1f1b1c: 0x1000000f
label_1f1b20:
    if (ctx->pc == 0x1F1B20u) {
        ctx->pc = 0x1F1B20u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F1B24u;
        goto label_1f1b24;
    }
    ctx->pc = 0x1F1B1Cu;
    {
        const bool branch_taken_0x1f1b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1B20u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f1b1c) {
            ctx->pc = 0x1F1B5Cu;
            goto label_1f1b5c;
        }
    }
    ctx->pc = 0x1F1B24u;
label_1f1b24:
    // 0x1f1b24: 0x471821
    ctx->pc = 0x1f1b24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1b28:
    // 0x1f1b28: 0x31080
    ctx->pc = 0x1f1b28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1b2c:
    // 0x1f1b2c: 0x621021
    ctx->pc = 0x1f1b2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1b30:
    // 0x1f1b30: 0x23040
    ctx->pc = 0x1f1b30u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1b34:
    // 0x1f1b34: 0x3c028888
    ctx->pc = 0x1f1b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1b38:
    // 0x1f1b38: 0x34428889
    ctx->pc = 0x1f1b38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1b3c:
    // 0x1f1b3c: 0x460018
    ctx->pc = 0x1f1b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1b40:
    // 0x1f1b40: 0x61fc2
    ctx->pc = 0x1f1b40u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1b44:
    // 0x1f1b44: 0x0
    ctx->pc = 0x1f1b44u;
    // NOP
label_1f1b48:
    // 0x1f1b48: 0x1010
    ctx->pc = 0x1f1b48u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1b4c:
    // 0x1f1b4c: 0x461021
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1b50:
    // 0x1f1b50: 0x21143
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1b54:
    // 0x1f1b54: 0x431021
    ctx->pc = 0x1f1b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1b58:
    // 0x1f1b58: 0xc48303bc
    ctx->pc = 0x1f1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1b5c:
    // 0x1f1b5c: 0xc48203b8
    ctx->pc = 0x1f1b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1b60:
    // 0x1f1b60: 0x44820000
    ctx->pc = 0x1f1b60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1b64:
    // 0x1f1b64: 0x0
    ctx->pc = 0x1f1b64u;
    // NOP
label_1f1b68:
    // 0x1f1b68: 0x46800060
    ctx->pc = 0x1f1b68u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1b6c:
    // 0x1f1b6c: 0x46021881
    ctx->pc = 0x1f1b6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f1b70:
    // 0x1f1b70: 0x46011043
    ctx->pc = 0x1f1b70u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f1b74:
    // 0x1f1b74: 0x44800000
    ctx->pc = 0x1f1b74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1b78:
    // 0x1f1b78: 0x0
    ctx->pc = 0x1f1b78u;
    // NOP
label_1f1b7c:
    // 0x1f1b7c: 0x0
    ctx->pc = 0x1f1b7cu;
    // NOP
label_1f1b80:
    // 0x1f1b80: 0x46000834
    ctx->pc = 0x1f1b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1b84:
    // 0x1f1b84: 0x0
    ctx->pc = 0x1f1b84u;
    // NOP
label_1f1b88:
    // 0x1f1b88: 0x4500001c
label_1f1b8c:
    if (ctx->pc == 0x1F1B8Cu) {
        ctx->pc = 0x1F1B8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1B90u;
        goto label_1f1b90;
    }
    ctx->pc = 0x1F1B88u;
    {
        const bool branch_taken_0x1f1b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1B8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f1b88) {
            ctx->pc = 0x1F1BFCu;
            goto label_1f1bfc;
        }
    }
    ctx->pc = 0x1F1B90u;
label_1f1b90:
    // 0x1f1b90: 0x24020001
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f1b94:
    // 0x1f1b94: 0x54e20003
label_1f1b98:
    if (ctx->pc == 0x1F1B98u) {
        ctx->pc = 0x1F1B98u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1B9Cu;
        goto label_1f1b9c;
    }
    ctx->pc = 0x1F1B94u;
    {
        const bool branch_taken_0x1f1b94 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1b94) {
            ctx->pc = 0x1F1B98u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1BA4u;
            goto label_1f1ba4;
        }
    }
    ctx->pc = 0x1F1B9Cu;
label_1f1b9c:
    // 0x1f1b9c: 0x1000000e
label_1f1ba0:
    if (ctx->pc == 0x1F1BA0u) {
        ctx->pc = 0x1F1BA4u;
        goto label_1f1ba4;
    }
    ctx->pc = 0x1F1B9Cu;
    {
        const bool branch_taken_0x1f1b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1b9c) {
            ctx->pc = 0x1F1BD8u;
            goto label_1f1bd8;
        }
    }
    ctx->pc = 0x1F1BA4u;
label_1f1ba4:
    // 0x1f1ba4: 0x471821
    ctx->pc = 0x1f1ba4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1ba8:
    // 0x1f1ba8: 0x31080
    ctx->pc = 0x1f1ba8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1bac:
    // 0x1f1bac: 0x621021
    ctx->pc = 0x1f1bacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1bb0:
    // 0x1f1bb0: 0x23040
    ctx->pc = 0x1f1bb0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1bb4:
    // 0x1f1bb4: 0x3c028888
    ctx->pc = 0x1f1bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1bb8:
    // 0x1f1bb8: 0x34428889
    ctx->pc = 0x1f1bb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1bbc:
    // 0x1f1bbc: 0x460018
    ctx->pc = 0x1f1bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1bc0:
    // 0x1f1bc0: 0x61fc2
    ctx->pc = 0x1f1bc0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1bc4:
    // 0x1f1bc4: 0x0
    ctx->pc = 0x1f1bc4u;
    // NOP
label_1f1bc8:
    // 0x1f1bc8: 0x1010
    ctx->pc = 0x1f1bc8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1bcc:
    // 0x1f1bcc: 0x461021
    ctx->pc = 0x1f1bccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1bd0:
    // 0x1f1bd0: 0x21143
    ctx->pc = 0x1f1bd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1bd4:
    // 0x1f1bd4: 0x431021
    ctx->pc = 0x1f1bd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1bd8:
    // 0x1f1bd8: 0x44820000
    ctx->pc = 0x1f1bd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1bdc:
    // 0x1f1bdc: 0x0
    ctx->pc = 0x1f1bdcu;
    // NOP
label_1f1be0:
    // 0x1f1be0: 0x46800020
    ctx->pc = 0x1f1be0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1be4:
    // 0x1f1be4: 0x3c02bf80
    ctx->pc = 0x1f1be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f1be8:
    // 0x1f1be8: 0x46001043
    ctx->pc = 0x1f1be8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f1bec:
    // 0x1f1bec: 0x0
    ctx->pc = 0x1f1becu;
    // NOP
label_1f1bf0:
    // 0x1f1bf0: 0x44820000
    ctx->pc = 0x1f1bf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1bf4:
    // 0x1f1bf4: 0x10000016
label_1f1bf8:
    if (ctx->pc == 0x1F1BF8u) {
        ctx->pc = 0x1F1BF8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1BFCu;
        goto label_1f1bfc;
    }
    ctx->pc = 0x1F1BF4u;
    {
        const bool branch_taken_0x1f1bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1BF8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1bf4) {
            ctx->pc = 0x1F1C50u;
            goto label_1f1c50;
        }
    }
    ctx->pc = 0x1F1BFCu;
label_1f1bfc:
    // 0x1f1bfc: 0x54e20003
label_1f1c00:
    if (ctx->pc == 0x1F1C00u) {
        ctx->pc = 0x1F1C00u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1C04u;
        goto label_1f1c04;
    }
    ctx->pc = 0x1F1BFCu;
    {
        const bool branch_taken_0x1f1bfc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1bfc) {
            ctx->pc = 0x1F1C00u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1C0Cu;
            goto label_1f1c0c;
        }
    }
    ctx->pc = 0x1F1C04u;
label_1f1c04:
    // 0x1f1c04: 0x1000000e
label_1f1c08:
    if (ctx->pc == 0x1F1C08u) {
        ctx->pc = 0x1F1C0Cu;
        goto label_1f1c0c;
    }
    ctx->pc = 0x1F1C04u;
    {
        const bool branch_taken_0x1f1c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1c04) {
            ctx->pc = 0x1F1C40u;
            goto label_1f1c40;
        }
    }
    ctx->pc = 0x1F1C0Cu;
label_1f1c0c:
    // 0x1f1c0c: 0x471821
    ctx->pc = 0x1f1c0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1c10:
    // 0x1f1c10: 0x31080
    ctx->pc = 0x1f1c10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1c14:
    // 0x1f1c14: 0x621021
    ctx->pc = 0x1f1c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1c18:
    // 0x1f1c18: 0x23040
    ctx->pc = 0x1f1c18u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1c1c:
    // 0x1f1c1c: 0x3c028888
    ctx->pc = 0x1f1c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f1c20:
    // 0x1f1c20: 0x34428889
    ctx->pc = 0x1f1c20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f1c24:
    // 0x1f1c24: 0x460018
    ctx->pc = 0x1f1c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1c28:
    // 0x1f1c28: 0x61fc2
    ctx->pc = 0x1f1c28u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f1c2c:
    // 0x1f1c2c: 0x0
    ctx->pc = 0x1f1c2cu;
    // NOP
label_1f1c30:
    // 0x1f1c30: 0x1010
    ctx->pc = 0x1f1c30u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f1c34:
    // 0x1f1c34: 0x461021
    ctx->pc = 0x1f1c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f1c38:
    // 0x1f1c38: 0x21143
    ctx->pc = 0x1f1c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f1c3c:
    // 0x1f1c3c: 0x431021
    ctx->pc = 0x1f1c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1c40:
    // 0x1f1c40: 0x44820000
    ctx->pc = 0x1f1c40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1c44:
    // 0x1f1c44: 0x0
    ctx->pc = 0x1f1c44u;
    // NOP
label_1f1c48:
    // 0x1f1c48: 0x46800020
    ctx->pc = 0x1f1c48u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1c4c:
    // 0x1f1c4c: 0x46001003
    ctx->pc = 0x1f1c4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f1c50:
    // 0x1f1c50: 0x10000027
label_1f1c54:
    if (ctx->pc == 0x1F1C54u) {
        ctx->pc = 0x1F1C54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
        ctx->pc = 0x1F1C58u;
        goto label_1f1c58;
    }
    ctx->pc = 0x1F1C50u;
    {
        const bool branch_taken_0x1f1c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1C54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
        if (branch_taken_0x1f1c50) {
            ctx->pc = 0x1F1CF0u;
            goto label_1f1cf0;
        }
    }
    ctx->pc = 0x1F1C58u;
label_1f1c58:
    // 0x1f1c58: 0xc481039c
    ctx->pc = 0x1f1c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1c5c:
    // 0x1f1c5c: 0xc4800398
    ctx->pc = 0x1f1c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1c60:
    // 0x1f1c60: 0x44801000
    ctx->pc = 0x1f1c60u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1f1c64:
    // 0x1f1c64: 0x46000841
    ctx->pc = 0x1f1c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f1c68:
    // 0x1f1c68: 0x46020834
    ctx->pc = 0x1f1c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1c6c:
    // 0x1f1c6c: 0x0
    ctx->pc = 0x1f1c6cu;
    // NOP
label_1f1c70:
    // 0x1f1c70: 0x45000004
label_1f1c74:
    if (ctx->pc == 0x1F1C74u) {
        ctx->pc = 0x1F1C74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F1C78u;
        goto label_1f1c78;
    }
    ctx->pc = 0x1F1C70u;
    {
        const bool branch_taken_0x1f1c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1C74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f1c70) {
            ctx->pc = 0x1F1C84u;
            goto label_1f1c84;
        }
    }
    ctx->pc = 0x1F1C78u;
label_1f1c78:
    // 0x1f1c78: 0x44820000
    ctx->pc = 0x1f1c78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1c7c:
    // 0x1f1c7c: 0x0
    ctx->pc = 0x1f1c7cu;
    // NOP
label_1f1c80:
    // 0x1f1c80: 0x46010042
    ctx->pc = 0x1f1c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f1c84:
    // 0x1f1c84: 0xe48103a0
    ctx->pc = 0x1f1c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
label_1f1c88:
    // 0x1f1c88: 0xc48203ac
    ctx->pc = 0x1f1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1c8c:
    // 0x1f1c8c: 0xc48103a8
    ctx->pc = 0x1f1c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1c90:
    // 0x1f1c90: 0x44800000
    ctx->pc = 0x1f1c90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1c94:
    // 0x1f1c94: 0x0
    ctx->pc = 0x1f1c94u;
    // NOP
label_1f1c98:
    // 0x1f1c98: 0x46011041
    ctx->pc = 0x1f1c98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f1c9c:
    // 0x1f1c9c: 0x46000834
    ctx->pc = 0x1f1c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1ca0:
    // 0x1f1ca0: 0x0
    ctx->pc = 0x1f1ca0u;
    // NOP
label_1f1ca4:
    // 0x1f1ca4: 0x45000004
label_1f1ca8:
    if (ctx->pc == 0x1F1CA8u) {
        ctx->pc = 0x1F1CA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F1CACu;
        goto label_1f1cac;
    }
    ctx->pc = 0x1F1CA4u;
    {
        const bool branch_taken_0x1f1ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1CA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f1ca4) {
            ctx->pc = 0x1F1CB8u;
            goto label_1f1cb8;
        }
    }
    ctx->pc = 0x1F1CACu;
label_1f1cac:
    // 0x1f1cac: 0x44820000
    ctx->pc = 0x1f1cacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1cb0:
    // 0x1f1cb0: 0x0
    ctx->pc = 0x1f1cb0u;
    // NOP
label_1f1cb4:
    // 0x1f1cb4: 0x46010042
    ctx->pc = 0x1f1cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f1cb8:
    // 0x1f1cb8: 0xe48103b0
    ctx->pc = 0x1f1cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 944), bits); }
label_1f1cbc:
    // 0x1f1cbc: 0xc48203bc
    ctx->pc = 0x1f1cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1cc0:
    // 0x1f1cc0: 0xc48103b8
    ctx->pc = 0x1f1cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1cc4:
    // 0x1f1cc4: 0x44800000
    ctx->pc = 0x1f1cc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1cc8:
    // 0x1f1cc8: 0x0
    ctx->pc = 0x1f1cc8u;
    // NOP
label_1f1ccc:
    // 0x1f1ccc: 0x46011041
    ctx->pc = 0x1f1cccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f1cd0:
    // 0x1f1cd0: 0x46000834
    ctx->pc = 0x1f1cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1cd4:
    // 0x1f1cd4: 0x0
    ctx->pc = 0x1f1cd4u;
    // NOP
label_1f1cd8:
    // 0x1f1cd8: 0x45000004
label_1f1cdc:
    if (ctx->pc == 0x1F1CDCu) {
        ctx->pc = 0x1F1CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F1CE0u;
        goto label_1f1ce0;
    }
    ctx->pc = 0x1F1CD8u;
    {
        const bool branch_taken_0x1f1cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f1cd8) {
            ctx->pc = 0x1F1CECu;
            goto label_1f1cec;
        }
    }
    ctx->pc = 0x1F1CE0u;
label_1f1ce0:
    // 0x1f1ce0: 0x44820000
    ctx->pc = 0x1f1ce0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f1ce4:
    // 0x1f1ce4: 0x0
    ctx->pc = 0x1f1ce4u;
    // NOP
label_1f1ce8:
    // 0x1f1ce8: 0x46010042
    ctx->pc = 0x1f1ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f1cec:
    // 0x1f1cec: 0xe48103c0
    ctx->pc = 0x1f1cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
label_1f1cf0:
    // 0x1f1cf0: 0x100002e8
label_1f1cf4:
    if (ctx->pc == 0x1F1CF4u) {
        ctx->pc = 0x1F1CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        ctx->pc = 0x1F1CF8u;
        goto label_1f1cf8;
    }
    ctx->pc = 0x1F1CF0u;
    {
        const bool branch_taken_0x1f1cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x1f1cf0) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F1CF8u;
label_1f1cf8:
    // 0x1f1cf8: 0x24060001
    ctx->pc = 0x1f1cf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1f1cfc:
    // 0x1f1cfc: 0xac8603e4
    ctx->pc = 0x1f1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 6));
label_1f1d00:
    // 0x1f1d00: 0xac8603d4
    ctx->pc = 0x1f1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 980), GPR_U32(ctx, 6));
label_1f1d04:
    // 0x1f1d04: 0xac8603c4
    ctx->pc = 0x1f1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 964), GPR_U32(ctx, 6));
label_1f1d08:
    // 0x1f1d08: 0xc4e0001c
    ctx->pc = 0x1f1d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d0c:
    // 0x1f1d0c: 0xe48003c8
    ctx->pc = 0x1f1d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 968), bits); }
label_1f1d10:
    // 0x1f1d10: 0xc4e00020
    ctx->pc = 0x1f1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d14:
    // 0x1f1d14: 0xe48003d8
    ctx->pc = 0x1f1d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 984), bits); }
label_1f1d18:
    // 0x1f1d18: 0xc4e00024
    ctx->pc = 0x1f1d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d1c:
    // 0x1f1d1c: 0xe48003e8
    ctx->pc = 0x1f1d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1000), bits); }
label_1f1d20:
    // 0x1f1d20: 0x8ca30008
    ctx->pc = 0x1f1d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f1d24:
    // 0x1f1d24: 0xc4600000
    ctx->pc = 0x1f1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d28:
    // 0x1f1d28: 0xe48003cc
    ctx->pc = 0x1f1d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 972), bits); }
label_1f1d2c:
    // 0x1f1d2c: 0x8ca3000c
    ctx->pc = 0x1f1d2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f1d30:
    // 0x1f1d30: 0xc4600000
    ctx->pc = 0x1f1d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d34:
    // 0x1f1d34: 0xe48003dc
    ctx->pc = 0x1f1d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 988), bits); }
label_1f1d38:
    // 0x1f1d38: 0x8ca30010
    ctx->pc = 0x1f1d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1f1d3c:
    // 0x1f1d3c: 0xc4600000
    ctx->pc = 0x1f1d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1d40:
    // 0x1f1d40: 0xe48003ec
    ctx->pc = 0x1f1d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1004), bits); }
label_1f1d44:
    // 0x1f1d44: 0x8ca80014
    ctx->pc = 0x1f1d44u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1f1d48:
    // 0x1f1d48: 0x110000f5
label_1f1d4c:
    if (ctx->pc == 0x1F1D4Cu) {
        ctx->pc = 0x1F1D4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        ctx->pc = 0x1F1D50u;
        goto label_1f1d50;
    }
    ctx->pc = 0x1F1D48u;
    {
        const bool branch_taken_0x1f1d48 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1D4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x1f1d48) {
            ctx->pc = 0x1F2120u;
            goto label_1f2120;
        }
    }
    ctx->pc = 0x1F1D50u;
label_1f1d50:
    // 0x1f1d50: 0x15060003
label_1f1d54:
    if (ctx->pc == 0x1F1D54u) {
        ctx->pc = 0x1F1D54u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1D58u;
        goto label_1f1d58;
    }
    ctx->pc = 0x1F1D50u;
    {
        const bool branch_taken_0x1f1d50 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 6));
        ctx->pc = 0x1F1D54u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1f1d50) {
            ctx->pc = 0x1F1D60u;
            goto label_1f1d60;
        }
    }
    ctx->pc = 0x1F1D58u;
label_1f1d58:
    // 0x1f1d58: 0x1000000e
label_1f1d5c:
    if (ctx->pc == 0x1F1D5Cu) {
        ctx->pc = 0x1F1D60u;
        goto label_1f1d60;
    }
    ctx->pc = 0x1F1D58u;
    {
        const bool branch_taken_0x1f1d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1d58) {
            ctx->pc = 0x1F1D94u;
            goto label_1f1d94;
        }
    }
    ctx->pc = 0x1F1D60u;
label_1f1d60:
    // 0x1f1d60: 0x683021
    ctx->pc = 0x1f1d60u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1d64:
    // 0x1f1d64: 0x61880
    ctx->pc = 0x1f1d64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1d68:
    // 0x1f1d68: 0xc31821
    ctx->pc = 0x1f1d68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1d6c:
    // 0x1f1d6c: 0x33840
    ctx->pc = 0x1f1d6cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1d70:
    // 0x1f1d70: 0x3c038888
    ctx->pc = 0x1f1d70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1d74:
    // 0x1f1d74: 0x34638889
    ctx->pc = 0x1f1d74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1d78:
    // 0x1f1d78: 0x670018
    ctx->pc = 0x1f1d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1d7c:
    // 0x1f1d7c: 0x737c2
    ctx->pc = 0x1f1d7cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1d80:
    // 0x1f1d80: 0x0
    ctx->pc = 0x1f1d80u;
    // NOP
label_1f1d84:
    // 0x1f1d84: 0x1810
    ctx->pc = 0x1f1d84u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1d88:
    // 0x1f1d88: 0x671821
    ctx->pc = 0x1f1d88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1d8c:
    // 0x1f1d8c: 0x31943
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1d90:
    // 0x1f1d90: 0x663021
    ctx->pc = 0x1f1d90u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1d94:
    // 0x1f1d94: 0x44860000
    ctx->pc = 0x1f1d94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
label_1f1d98:
    // 0x1f1d98: 0xc48103cc
    ctx->pc = 0x1f1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1d9c:
    // 0x1f1d9c: 0x468000a0
    ctx->pc = 0x1f1d9cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1da0:
    // 0x1f1da0: 0xc48003c8
    ctx->pc = 0x1f1da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1da4:
    // 0x1f1da4: 0x44801800
    ctx->pc = 0x1f1da4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_1f1da8:
    // 0x1f1da8: 0x46000841
    ctx->pc = 0x1f1da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f1dac:
    // 0x1f1dac: 0x46020803
    ctx->pc = 0x1f1dacu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
label_1f1db0:
    // 0x1f1db0: 0x0
    ctx->pc = 0x1f1db0u;
    // NOP
label_1f1db4:
    // 0x1f1db4: 0x0
    ctx->pc = 0x1f1db4u;
    // NOP
label_1f1db8:
    // 0x1f1db8: 0x46030034
    ctx->pc = 0x1f1db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1dbc:
    // 0x1f1dbc: 0x0
    ctx->pc = 0x1f1dbcu;
    // NOP
label_1f1dc0:
    // 0x1f1dc0: 0x4500001c
label_1f1dc4:
    if (ctx->pc == 0x1F1DC4u) {
        ctx->pc = 0x1F1DC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1DC8u;
        goto label_1f1dc8;
    }
    ctx->pc = 0x1F1DC0u;
    {
        const bool branch_taken_0x1f1dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1DC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f1dc0) {
            ctx->pc = 0x1F1E34u;
            goto label_1f1e34;
        }
    }
    ctx->pc = 0x1F1DC8u;
label_1f1dc8:
    // 0x1f1dc8: 0x24030001
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f1dcc:
    // 0x1f1dcc: 0x55030003
label_1f1dd0:
    if (ctx->pc == 0x1F1DD0u) {
        ctx->pc = 0x1F1DD0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1DD4u;
        goto label_1f1dd4;
    }
    ctx->pc = 0x1F1DCCu;
    {
        const bool branch_taken_0x1f1dcc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1dcc) {
            ctx->pc = 0x1F1DD0u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1DDCu;
            goto label_1f1ddc;
        }
    }
    ctx->pc = 0x1F1DD4u;
label_1f1dd4:
    // 0x1f1dd4: 0x1000000e
label_1f1dd8:
    if (ctx->pc == 0x1F1DD8u) {
        ctx->pc = 0x1F1DDCu;
        goto label_1f1ddc;
    }
    ctx->pc = 0x1F1DD4u;
    {
        const bool branch_taken_0x1f1dd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1dd4) {
            ctx->pc = 0x1F1E10u;
            goto label_1f1e10;
        }
    }
    ctx->pc = 0x1F1DDCu;
label_1f1ddc:
    // 0x1f1ddc: 0x683021
    ctx->pc = 0x1f1ddcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1de0:
    // 0x1f1de0: 0x61880
    ctx->pc = 0x1f1de0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1de4:
    // 0x1f1de4: 0xc31821
    ctx->pc = 0x1f1de4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1de8:
    // 0x1f1de8: 0x33840
    ctx->pc = 0x1f1de8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1dec:
    // 0x1f1dec: 0x3c038888
    ctx->pc = 0x1f1decu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1df0:
    // 0x1f1df0: 0x34638889
    ctx->pc = 0x1f1df0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1df4:
    // 0x1f1df4: 0x670018
    ctx->pc = 0x1f1df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1df8:
    // 0x1f1df8: 0x737c2
    ctx->pc = 0x1f1df8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1dfc:
    // 0x1f1dfc: 0x0
    ctx->pc = 0x1f1dfcu;
    // NOP
label_1f1e00:
    // 0x1f1e00: 0x1810
    ctx->pc = 0x1f1e00u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1e04:
    // 0x1f1e04: 0x671821
    ctx->pc = 0x1f1e04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1e08:
    // 0x1f1e08: 0x31943
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1e0c:
    // 0x1f1e0c: 0x661821
    ctx->pc = 0x1f1e0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1e10:
    // 0x1f1e10: 0x44830000
    ctx->pc = 0x1f1e10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1e14:
    // 0x1f1e14: 0x0
    ctx->pc = 0x1f1e14u;
    // NOP
label_1f1e18:
    // 0x1f1e18: 0x46800020
    ctx->pc = 0x1f1e18u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1e1c:
    // 0x1f1e1c: 0x3c03bf80
    ctx->pc = 0x1f1e1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f1e20:
    // 0x1f1e20: 0x46000843
    ctx->pc = 0x1f1e20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f1e24:
    // 0x1f1e24: 0x0
    ctx->pc = 0x1f1e24u;
    // NOP
label_1f1e28:
    // 0x1f1e28: 0x44830000
    ctx->pc = 0x1f1e28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1e2c:
    // 0x1f1e2c: 0x10000016
label_1f1e30:
    if (ctx->pc == 0x1F1E30u) {
        ctx->pc = 0x1F1E30u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1E34u;
        goto label_1f1e34;
    }
    ctx->pc = 0x1F1E2Cu;
    {
        const bool branch_taken_0x1f1e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1E30u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1e2c) {
            ctx->pc = 0x1F1E88u;
            goto label_1f1e88;
        }
    }
    ctx->pc = 0x1F1E34u;
label_1f1e34:
    // 0x1f1e34: 0x55030003
label_1f1e38:
    if (ctx->pc == 0x1F1E38u) {
        ctx->pc = 0x1F1E38u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1E3Cu;
        goto label_1f1e3c;
    }
    ctx->pc = 0x1F1E34u;
    {
        const bool branch_taken_0x1f1e34 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1e34) {
            ctx->pc = 0x1F1E38u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1E44u;
            goto label_1f1e44;
        }
    }
    ctx->pc = 0x1F1E3Cu;
label_1f1e3c:
    // 0x1f1e3c: 0x1000000e
label_1f1e40:
    if (ctx->pc == 0x1F1E40u) {
        ctx->pc = 0x1F1E44u;
        goto label_1f1e44;
    }
    ctx->pc = 0x1F1E3Cu;
    {
        const bool branch_taken_0x1f1e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1e3c) {
            ctx->pc = 0x1F1E78u;
            goto label_1f1e78;
        }
    }
    ctx->pc = 0x1F1E44u;
label_1f1e44:
    // 0x1f1e44: 0x683021
    ctx->pc = 0x1f1e44u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1e48:
    // 0x1f1e48: 0x61880
    ctx->pc = 0x1f1e48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1e4c:
    // 0x1f1e4c: 0xc31821
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1e50:
    // 0x1f1e50: 0x33840
    ctx->pc = 0x1f1e50u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1e54:
    // 0x1f1e54: 0x3c038888
    ctx->pc = 0x1f1e54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1e58:
    // 0x1f1e58: 0x34638889
    ctx->pc = 0x1f1e58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1e5c:
    // 0x1f1e5c: 0x670018
    ctx->pc = 0x1f1e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1e60:
    // 0x1f1e60: 0x737c2
    ctx->pc = 0x1f1e60u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1e64:
    // 0x1f1e64: 0x0
    ctx->pc = 0x1f1e64u;
    // NOP
label_1f1e68:
    // 0x1f1e68: 0x1810
    ctx->pc = 0x1f1e68u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1e6c:
    // 0x1f1e6c: 0x671821
    ctx->pc = 0x1f1e6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1e70:
    // 0x1f1e70: 0x31943
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1e74:
    // 0x1f1e74: 0x661821
    ctx->pc = 0x1f1e74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1e78:
    // 0x1f1e78: 0x44830000
    ctx->pc = 0x1f1e78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1e7c:
    // 0x1f1e7c: 0x0
    ctx->pc = 0x1f1e7cu;
    // NOP
label_1f1e80:
    // 0x1f1e80: 0x46800020
    ctx->pc = 0x1f1e80u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1e84:
    // 0x1f1e84: 0x46000803
    ctx->pc = 0x1f1e84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1f1e88:
    // 0x1f1e88: 0xe48003d0
    ctx->pc = 0x1f1e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 976), bits); }
label_1f1e8c:
    // 0x1f1e8c: 0x8c480000
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1e90:
    // 0x1f1e90: 0x24030001
    ctx->pc = 0x1f1e90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f1e94:
    // 0x1f1e94: 0x55030003
label_1f1e98:
    if (ctx->pc == 0x1F1E98u) {
        ctx->pc = 0x1F1E98u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1E9Cu;
        goto label_1f1e9c;
    }
    ctx->pc = 0x1F1E94u;
    {
        const bool branch_taken_0x1f1e94 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1e94) {
            ctx->pc = 0x1F1E98u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1EA4u;
            goto label_1f1ea4;
        }
    }
    ctx->pc = 0x1F1E9Cu;
label_1f1e9c:
    // 0x1f1e9c: 0x1000000f
label_1f1ea0:
    if (ctx->pc == 0x1F1EA0u) {
        ctx->pc = 0x1F1EA0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F1EA4u;
        goto label_1f1ea4;
    }
    ctx->pc = 0x1F1E9Cu;
    {
        const bool branch_taken_0x1f1e9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1EA0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f1e9c) {
            ctx->pc = 0x1F1EDCu;
            goto label_1f1edc;
        }
    }
    ctx->pc = 0x1F1EA4u;
label_1f1ea4:
    // 0x1f1ea4: 0x683021
    ctx->pc = 0x1f1ea4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1ea8:
    // 0x1f1ea8: 0x61880
    ctx->pc = 0x1f1ea8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1eac:
    // 0x1f1eac: 0xc31821
    ctx->pc = 0x1f1eacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1eb0:
    // 0x1f1eb0: 0x33840
    ctx->pc = 0x1f1eb0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1eb4:
    // 0x1f1eb4: 0x3c038888
    ctx->pc = 0x1f1eb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1eb8:
    // 0x1f1eb8: 0x34638889
    ctx->pc = 0x1f1eb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1ebc:
    // 0x1f1ebc: 0x670018
    ctx->pc = 0x1f1ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1ec0:
    // 0x1f1ec0: 0x737c2
    ctx->pc = 0x1f1ec0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1ec4:
    // 0x1f1ec4: 0x0
    ctx->pc = 0x1f1ec4u;
    // NOP
label_1f1ec8:
    // 0x1f1ec8: 0x1810
    ctx->pc = 0x1f1ec8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1ecc:
    // 0x1f1ecc: 0x671821
    ctx->pc = 0x1f1eccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1ed0:
    // 0x1f1ed0: 0x31943
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1ed4:
    // 0x1f1ed4: 0x661821
    ctx->pc = 0x1f1ed4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1ed8:
    // 0x1f1ed8: 0xc48303dc
    ctx->pc = 0x1f1ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f1edc:
    // 0x1f1edc: 0xc48203d8
    ctx->pc = 0x1f1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1ee0:
    // 0x1f1ee0: 0x44830000
    ctx->pc = 0x1f1ee0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1ee4:
    // 0x1f1ee4: 0x0
    ctx->pc = 0x1f1ee4u;
    // NOP
label_1f1ee8:
    // 0x1f1ee8: 0x46800060
    ctx->pc = 0x1f1ee8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1eec:
    // 0x1f1eec: 0x46021881
    ctx->pc = 0x1f1eecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f1ef0:
    // 0x1f1ef0: 0x46011043
    ctx->pc = 0x1f1ef0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f1ef4:
    // 0x1f1ef4: 0x44800000
    ctx->pc = 0x1f1ef4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f1ef8:
    // 0x1f1ef8: 0x0
    ctx->pc = 0x1f1ef8u;
    // NOP
label_1f1efc:
    // 0x1f1efc: 0x0
    ctx->pc = 0x1f1efcu;
    // NOP
label_1f1f00:
    // 0x1f1f00: 0x46000834
    ctx->pc = 0x1f1f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f1f04:
    // 0x1f1f04: 0x0
    ctx->pc = 0x1f1f04u;
    // NOP
label_1f1f08:
    // 0x1f1f08: 0x4500001c
label_1f1f0c:
    if (ctx->pc == 0x1F1F0Cu) {
        ctx->pc = 0x1F1F0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F1F10u;
        goto label_1f1f10;
    }
    ctx->pc = 0x1F1F08u;
    {
        const bool branch_taken_0x1f1f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1F0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f1f08) {
            ctx->pc = 0x1F1F7Cu;
            goto label_1f1f7c;
        }
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0x24030001
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f1f14:
    // 0x1f1f14: 0x55030003
label_1f1f18:
    if (ctx->pc == 0x1F1F18u) {
        ctx->pc = 0x1F1F18u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1F1Cu;
        goto label_1f1f1c;
    }
    ctx->pc = 0x1F1F14u;
    {
        const bool branch_taken_0x1f1f14 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1f14) {
            ctx->pc = 0x1F1F18u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1F24u;
            goto label_1f1f24;
        }
    }
    ctx->pc = 0x1F1F1Cu;
label_1f1f1c:
    // 0x1f1f1c: 0x1000000e
label_1f1f20:
    if (ctx->pc == 0x1F1F20u) {
        ctx->pc = 0x1F1F24u;
        goto label_1f1f24;
    }
    ctx->pc = 0x1F1F1Cu;
    {
        const bool branch_taken_0x1f1f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1f1c) {
            ctx->pc = 0x1F1F58u;
            goto label_1f1f58;
        }
    }
    ctx->pc = 0x1F1F24u;
label_1f1f24:
    // 0x1f1f24: 0x683021
    ctx->pc = 0x1f1f24u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1f28:
    // 0x1f1f28: 0x61880
    ctx->pc = 0x1f1f28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1f2c:
    // 0x1f1f2c: 0xc31821
    ctx->pc = 0x1f1f2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1f30:
    // 0x1f1f30: 0x33840
    ctx->pc = 0x1f1f30u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1f34:
    // 0x1f1f34: 0x3c038888
    ctx->pc = 0x1f1f34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1f38:
    // 0x1f1f38: 0x34638889
    ctx->pc = 0x1f1f38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1f3c:
    // 0x1f1f3c: 0x670018
    ctx->pc = 0x1f1f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1f40:
    // 0x1f1f40: 0x737c2
    ctx->pc = 0x1f1f40u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1f44:
    // 0x1f1f44: 0x0
    ctx->pc = 0x1f1f44u;
    // NOP
label_1f1f48:
    // 0x1f1f48: 0x1810
    ctx->pc = 0x1f1f48u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1f4c:
    // 0x1f1f4c: 0x671821
    ctx->pc = 0x1f1f4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1f50:
    // 0x1f1f50: 0x31943
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1f54:
    // 0x1f1f54: 0x661821
    ctx->pc = 0x1f1f54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1f58:
    // 0x1f1f58: 0x44830000
    ctx->pc = 0x1f1f58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1f5c:
    // 0x1f1f5c: 0x0
    ctx->pc = 0x1f1f5cu;
    // NOP
label_1f1f60:
    // 0x1f1f60: 0x46800020
    ctx->pc = 0x1f1f60u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1f64:
    // 0x1f1f64: 0x3c03bf80
    ctx->pc = 0x1f1f64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f1f68:
    // 0x1f1f68: 0x46001043
    ctx->pc = 0x1f1f68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f1f6c:
    // 0x1f1f6c: 0x0
    ctx->pc = 0x1f1f6cu;
    // NOP
label_1f1f70:
    // 0x1f1f70: 0x44830000
    ctx->pc = 0x1f1f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1f74:
    // 0x1f1f74: 0x10000016
label_1f1f78:
    if (ctx->pc == 0x1F1F78u) {
        ctx->pc = 0x1F1F78u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F1F7Cu;
        goto label_1f1f7c;
    }
    ctx->pc = 0x1F1F74u;
    {
        const bool branch_taken_0x1f1f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1F78u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f1f74) {
            ctx->pc = 0x1F1FD0u;
            goto label_1f1fd0;
        }
    }
    ctx->pc = 0x1F1F7Cu;
label_1f1f7c:
    // 0x1f1f7c: 0x55030003
label_1f1f80:
    if (ctx->pc == 0x1F1F80u) {
        ctx->pc = 0x1F1F80u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F1F84u;
        goto label_1f1f84;
    }
    ctx->pc = 0x1F1F7Cu;
    {
        const bool branch_taken_0x1f1f7c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f1f7c) {
            ctx->pc = 0x1F1F80u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F1F8Cu;
            goto label_1f1f8c;
        }
    }
    ctx->pc = 0x1F1F84u;
label_1f1f84:
    // 0x1f1f84: 0x1000000e
label_1f1f88:
    if (ctx->pc == 0x1F1F88u) {
        ctx->pc = 0x1F1F8Cu;
        goto label_1f1f8c;
    }
    ctx->pc = 0x1F1F84u;
    {
        const bool branch_taken_0x1f1f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1f84) {
            ctx->pc = 0x1F1FC0u;
            goto label_1f1fc0;
        }
    }
    ctx->pc = 0x1F1F8Cu;
label_1f1f8c:
    // 0x1f1f8c: 0x683021
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f1f90:
    // 0x1f1f90: 0x61880
    ctx->pc = 0x1f1f90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f1f94:
    // 0x1f1f94: 0xc31821
    ctx->pc = 0x1f1f94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f1f98:
    // 0x1f1f98: 0x33840
    ctx->pc = 0x1f1f98u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f1f9c:
    // 0x1f1f9c: 0x3c038888
    ctx->pc = 0x1f1f9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f1fa0:
    // 0x1f1fa0: 0x34638889
    ctx->pc = 0x1f1fa0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f1fa4:
    // 0x1f1fa4: 0x670018
    ctx->pc = 0x1f1fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f1fa8:
    // 0x1f1fa8: 0x737c2
    ctx->pc = 0x1f1fa8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f1fac:
    // 0x1f1fac: 0x0
    ctx->pc = 0x1f1facu;
    // NOP
label_1f1fb0:
    // 0x1f1fb0: 0x1810
    ctx->pc = 0x1f1fb0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f1fb4:
    // 0x1f1fb4: 0x671821
    ctx->pc = 0x1f1fb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f1fb8:
    // 0x1f1fb8: 0x31943
    ctx->pc = 0x1f1fb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f1fbc:
    // 0x1f1fbc: 0x661821
    ctx->pc = 0x1f1fbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1fc0:
    // 0x1f1fc0: 0x44830000
    ctx->pc = 0x1f1fc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f1fc4:
    // 0x1f1fc4: 0x0
    ctx->pc = 0x1f1fc4u;
    // NOP
label_1f1fc8:
    // 0x1f1fc8: 0x46800020
    ctx->pc = 0x1f1fc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f1fcc:
    // 0x1f1fcc: 0x46001003
    ctx->pc = 0x1f1fccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f1fd0:
    // 0x1f1fd0: 0xe48003e0
    ctx->pc = 0x1f1fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 992), bits); }
label_1f1fd4:
    // 0x1f1fd4: 0x8c470000
    ctx->pc = 0x1f1fd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1fd8:
    // 0x1f1fd8: 0x24020001
    ctx->pc = 0x1f1fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f1fdc:
    // 0x1f1fdc: 0x54e20003
label_1f1fe0:
    if (ctx->pc == 0x1F1FE0u) {
        ctx->pc = 0x1F1FE0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F1FE4u;
        goto label_1f1fe4;
    }
    ctx->pc = 0x1F1FDCu;
    {
        const bool branch_taken_0x1f1fdc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1fdc) {
            ctx->pc = 0x1F1FE0u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F1FECu;
            goto label_1f1fec;
        }
    }
    ctx->pc = 0x1F1FE4u;
label_1f1fe4:
    // 0x1f1fe4: 0x1000000f
label_1f1fe8:
    if (ctx->pc == 0x1F1FE8u) {
        ctx->pc = 0x1F1FE8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F1FECu;
        goto label_1f1fec;
    }
    ctx->pc = 0x1F1FE4u;
    {
        const bool branch_taken_0x1f1fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1FE8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f1fe4) {
            ctx->pc = 0x1F2024u;
            goto label_1f2024;
        }
    }
    ctx->pc = 0x1F1FECu;
label_1f1fec:
    // 0x1f1fec: 0x471821
    ctx->pc = 0x1f1fecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f1ff0:
    // 0x1f1ff0: 0x31080
    ctx->pc = 0x1f1ff0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f1ff4:
    // 0x1f1ff4: 0x621021
    ctx->pc = 0x1f1ff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1ff8:
    // 0x1f1ff8: 0x23040
    ctx->pc = 0x1f1ff8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f1ffc:
    // 0x1f1ffc: 0x3c028888
    ctx->pc = 0x1f1ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f2000:
    // 0x1f2000: 0x34428889
    ctx->pc = 0x1f2000u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f2004:
    // 0x1f2004: 0x460018
    ctx->pc = 0x1f2004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2008:
    // 0x1f2008: 0x61fc2
    ctx->pc = 0x1f2008u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f200c:
    // 0x1f200c: 0x0
    ctx->pc = 0x1f200cu;
    // NOP
label_1f2010:
    // 0x1f2010: 0x1010
    ctx->pc = 0x1f2010u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f2014:
    // 0x1f2014: 0x461021
    ctx->pc = 0x1f2014u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f2018:
    // 0x1f2018: 0x21143
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f201c:
    // 0x1f201c: 0x431021
    ctx->pc = 0x1f201cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2020:
    // 0x1f2020: 0xc48303ec
    ctx->pc = 0x1f2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2024:
    // 0x1f2024: 0xc48203e8
    ctx->pc = 0x1f2024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2028:
    // 0x1f2028: 0x44820000
    ctx->pc = 0x1f2028u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f202c:
    // 0x1f202c: 0x0
    ctx->pc = 0x1f202cu;
    // NOP
label_1f2030:
    // 0x1f2030: 0x46800060
    ctx->pc = 0x1f2030u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2034:
    // 0x1f2034: 0x46021881
    ctx->pc = 0x1f2034u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f2038:
    // 0x1f2038: 0x46011043
    ctx->pc = 0x1f2038u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f203c:
    // 0x1f203c: 0x44800000
    ctx->pc = 0x1f203cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2040:
    // 0x1f2040: 0x0
    ctx->pc = 0x1f2040u;
    // NOP
label_1f2044:
    // 0x1f2044: 0x0
    ctx->pc = 0x1f2044u;
    // NOP
label_1f2048:
    // 0x1f2048: 0x46000834
    ctx->pc = 0x1f2048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f204c:
    // 0x1f204c: 0x0
    ctx->pc = 0x1f204cu;
    // NOP
label_1f2050:
    // 0x1f2050: 0x4500001c
label_1f2054:
    if (ctx->pc == 0x1F2054u) {
        ctx->pc = 0x1F2054u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F2058u;
        goto label_1f2058;
    }
    ctx->pc = 0x1F2050u;
    {
        const bool branch_taken_0x1f2050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2054u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2050) {
            ctx->pc = 0x1F20C4u;
            goto label_1f20c4;
        }
    }
    ctx->pc = 0x1F2058u;
label_1f2058:
    // 0x1f2058: 0x24020001
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f205c:
    // 0x1f205c: 0x54e20003
label_1f2060:
    if (ctx->pc == 0x1F2060u) {
        ctx->pc = 0x1F2060u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F2064u;
        goto label_1f2064;
    }
    ctx->pc = 0x1F205Cu;
    {
        const bool branch_taken_0x1f205c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f205c) {
            ctx->pc = 0x1F2060u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F206Cu;
            goto label_1f206c;
        }
    }
    ctx->pc = 0x1F2064u;
label_1f2064:
    // 0x1f2064: 0x1000000e
label_1f2068:
    if (ctx->pc == 0x1F2068u) {
        ctx->pc = 0x1F206Cu;
        goto label_1f206c;
    }
    ctx->pc = 0x1F2064u;
    {
        const bool branch_taken_0x1f2064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2064) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F206Cu;
label_1f206c:
    // 0x1f206c: 0x471821
    ctx->pc = 0x1f206cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f2070:
    // 0x1f2070: 0x31080
    ctx->pc = 0x1f2070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f2074:
    // 0x1f2074: 0x621021
    ctx->pc = 0x1f2074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2078:
    // 0x1f2078: 0x23040
    ctx->pc = 0x1f2078u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f207c:
    // 0x1f207c: 0x3c028888
    ctx->pc = 0x1f207cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f2080:
    // 0x1f2080: 0x34428889
    ctx->pc = 0x1f2080u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f2084:
    // 0x1f2084: 0x460018
    ctx->pc = 0x1f2084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2088:
    // 0x1f2088: 0x61fc2
    ctx->pc = 0x1f2088u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f208c:
    // 0x1f208c: 0x0
    ctx->pc = 0x1f208cu;
    // NOP
label_1f2090:
    // 0x1f2090: 0x1010
    ctx->pc = 0x1f2090u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f2094:
    // 0x1f2094: 0x461021
    ctx->pc = 0x1f2094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f2098:
    // 0x1f2098: 0x21143
    ctx->pc = 0x1f2098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f209c:
    // 0x1f209c: 0x431021
    ctx->pc = 0x1f209cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f20a0:
    // 0x1f20a0: 0x44820000
    ctx->pc = 0x1f20a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f20a4:
    // 0x1f20a4: 0x0
    ctx->pc = 0x1f20a4u;
    // NOP
label_1f20a8:
    // 0x1f20a8: 0x46800020
    ctx->pc = 0x1f20a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f20ac:
    // 0x1f20ac: 0x3c02bf80
    ctx->pc = 0x1f20acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f20b0:
    // 0x1f20b0: 0x46001043
    ctx->pc = 0x1f20b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f20b4:
    // 0x1f20b4: 0x0
    ctx->pc = 0x1f20b4u;
    // NOP
label_1f20b8:
    // 0x1f20b8: 0x44820000
    ctx->pc = 0x1f20b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f20bc:
    // 0x1f20bc: 0x10000016
label_1f20c0:
    if (ctx->pc == 0x1F20C0u) {
        ctx->pc = 0x1F20C0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F20C4u;
        goto label_1f20c4;
    }
    ctx->pc = 0x1F20BCu;
    {
        const bool branch_taken_0x1f20bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F20C0u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f20bc) {
            ctx->pc = 0x1F2118u;
            goto label_1f2118;
        }
    }
    ctx->pc = 0x1F20C4u;
label_1f20c4:
    // 0x1f20c4: 0x54e20003
label_1f20c8:
    if (ctx->pc == 0x1F20C8u) {
        ctx->pc = 0x1F20C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F20CCu;
        goto label_1f20cc;
    }
    ctx->pc = 0x1F20C4u;
    {
        const bool branch_taken_0x1f20c4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f20c4) {
            ctx->pc = 0x1F20C8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F20CCu;
label_1f20cc:
    // 0x1f20cc: 0x1000000e
label_1f20d0:
    if (ctx->pc == 0x1F20D0u) {
        ctx->pc = 0x1F20D4u;
        goto label_1f20d4;
    }
    ctx->pc = 0x1F20CCu;
    {
        const bool branch_taken_0x1f20cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f20cc) {
            ctx->pc = 0x1F2108u;
            goto label_1f2108;
        }
    }
    ctx->pc = 0x1F20D4u;
label_1f20d4:
    // 0x1f20d4: 0x471821
    ctx->pc = 0x1f20d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f20d8:
    // 0x1f20d8: 0x31080
    ctx->pc = 0x1f20d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f20dc:
    // 0x1f20dc: 0x621021
    ctx->pc = 0x1f20dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f20e0:
    // 0x1f20e0: 0x23040
    ctx->pc = 0x1f20e0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f20e4:
    // 0x1f20e4: 0x3c028888
    ctx->pc = 0x1f20e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f20e8:
    // 0x1f20e8: 0x34428889
    ctx->pc = 0x1f20e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f20ec:
    // 0x1f20ec: 0x460018
    ctx->pc = 0x1f20ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f20f0:
    // 0x1f20f0: 0x61fc2
    ctx->pc = 0x1f20f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f20f4:
    // 0x1f20f4: 0x0
    ctx->pc = 0x1f20f4u;
    // NOP
label_1f20f8:
    // 0x1f20f8: 0x1010
    ctx->pc = 0x1f20f8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f20fc:
    // 0x1f20fc: 0x461021
    ctx->pc = 0x1f20fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f2100:
    // 0x1f2100: 0x21143
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f2104:
    // 0x1f2104: 0x431021
    ctx->pc = 0x1f2104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2108:
    // 0x1f2108: 0x44820000
    ctx->pc = 0x1f2108u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f210c:
    // 0x1f210c: 0x0
    ctx->pc = 0x1f210cu;
    // NOP
label_1f2110:
    // 0x1f2110: 0x46800020
    ctx->pc = 0x1f2110u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2114:
    // 0x1f2114: 0x46001003
    ctx->pc = 0x1f2114u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f2118:
    // 0x1f2118: 0x10000027
label_1f211c:
    if (ctx->pc == 0x1F211Cu) {
        ctx->pc = 0x1F211Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
        ctx->pc = 0x1F2120u;
        goto label_1f2120;
    }
    ctx->pc = 0x1F2118u;
    {
        const bool branch_taken_0x1f2118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F211Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
        if (branch_taken_0x1f2118) {
            ctx->pc = 0x1F21B8u;
            goto label_1f21b8;
        }
    }
    ctx->pc = 0x1F2120u;
label_1f2120:
    // 0x1f2120: 0xc48103cc
    ctx->pc = 0x1f2120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2124:
    // 0x1f2124: 0xc48003c8
    ctx->pc = 0x1f2124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2128:
    // 0x1f2128: 0x44801000
    ctx->pc = 0x1f2128u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1f212c:
    // 0x1f212c: 0x46000841
    ctx->pc = 0x1f212cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f2130:
    // 0x1f2130: 0x46020834
    ctx->pc = 0x1f2130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2134:
    // 0x1f2134: 0x0
    ctx->pc = 0x1f2134u;
    // NOP
label_1f2138:
    // 0x1f2138: 0x45000004
label_1f213c:
    if (ctx->pc == 0x1F213Cu) {
        ctx->pc = 0x1F213Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F2140u;
        goto label_1f2140;
    }
    ctx->pc = 0x1F2138u;
    {
        const bool branch_taken_0x1f2138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F213Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f2138) {
            ctx->pc = 0x1F214Cu;
            goto label_1f214c;
        }
    }
    ctx->pc = 0x1F2140u;
label_1f2140:
    // 0x1f2140: 0x44820000
    ctx->pc = 0x1f2140u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2144:
    // 0x1f2144: 0x0
    ctx->pc = 0x1f2144u;
    // NOP
label_1f2148:
    // 0x1f2148: 0x46010042
    ctx->pc = 0x1f2148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f214c:
    // 0x1f214c: 0xe48103d0
    ctx->pc = 0x1f214cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 976), bits); }
label_1f2150:
    // 0x1f2150: 0xc48203dc
    ctx->pc = 0x1f2150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2154:
    // 0x1f2154: 0xc48103d8
    ctx->pc = 0x1f2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2158:
    // 0x1f2158: 0x44800000
    ctx->pc = 0x1f2158u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f215c:
    // 0x1f215c: 0x0
    ctx->pc = 0x1f215cu;
    // NOP
label_1f2160:
    // 0x1f2160: 0x46011041
    ctx->pc = 0x1f2160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f2164:
    // 0x1f2164: 0x46000834
    ctx->pc = 0x1f2164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2168:
    // 0x1f2168: 0x0
    ctx->pc = 0x1f2168u;
    // NOP
label_1f216c:
    // 0x1f216c: 0x45000004
label_1f2170:
    if (ctx->pc == 0x1F2170u) {
        ctx->pc = 0x1F2170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F2174u;
        goto label_1f2174;
    }
    ctx->pc = 0x1F216Cu;
    {
        const bool branch_taken_0x1f216c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f216c) {
            ctx->pc = 0x1F2180u;
            goto label_1f2180;
        }
    }
    ctx->pc = 0x1F2174u;
label_1f2174:
    // 0x1f2174: 0x44820000
    ctx->pc = 0x1f2174u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2178:
    // 0x1f2178: 0x0
    ctx->pc = 0x1f2178u;
    // NOP
label_1f217c:
    // 0x1f217c: 0x46010042
    ctx->pc = 0x1f217cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f2180:
    // 0x1f2180: 0xe48103e0
    ctx->pc = 0x1f2180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 992), bits); }
label_1f2184:
    // 0x1f2184: 0xc48203ec
    ctx->pc = 0x1f2184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2188:
    // 0x1f2188: 0xc48103e8
    ctx->pc = 0x1f2188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f218c:
    // 0x1f218c: 0x44800000
    ctx->pc = 0x1f218cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2190:
    // 0x1f2190: 0x0
    ctx->pc = 0x1f2190u;
    // NOP
label_1f2194:
    // 0x1f2194: 0x46011041
    ctx->pc = 0x1f2194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f2198:
    // 0x1f2198: 0x46000834
    ctx->pc = 0x1f2198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f219c:
    // 0x1f219c: 0x0
    ctx->pc = 0x1f219cu;
    // NOP
label_1f21a0:
    // 0x1f21a0: 0x45000004
label_1f21a4:
    if (ctx->pc == 0x1F21A4u) {
        ctx->pc = 0x1F21A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F21A8u;
        goto label_1f21a8;
    }
    ctx->pc = 0x1F21A0u;
    {
        const bool branch_taken_0x1f21a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F21A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f21a0) {
            ctx->pc = 0x1F21B4u;
            goto label_1f21b4;
        }
    }
    ctx->pc = 0x1F21A8u;
label_1f21a8:
    // 0x1f21a8: 0x44820000
    ctx->pc = 0x1f21a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f21ac:
    // 0x1f21ac: 0x0
    ctx->pc = 0x1f21acu;
    // NOP
label_1f21b0:
    // 0x1f21b0: 0x46010042
    ctx->pc = 0x1f21b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f21b4:
    // 0x1f21b4: 0xe48103f0
    ctx->pc = 0x1f21b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
label_1f21b8:
    // 0x1f21b8: 0x100001b6
label_1f21bc:
    if (ctx->pc == 0x1F21BCu) {
        ctx->pc = 0x1F21BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        ctx->pc = 0x1F21C0u;
        goto label_1f21c0;
    }
    ctx->pc = 0x1F21B8u;
    {
        const bool branch_taken_0x1f21b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F21BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x1f21b8) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F21C0u;
label_1f21c0:
    // 0x1f21c0: 0x24060001
    ctx->pc = 0x1f21c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1f21c4:
    // 0x1f21c4: 0xac860444
    ctx->pc = 0x1f21c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1092), GPR_U32(ctx, 6));
label_1f21c8:
    // 0x1f21c8: 0xac860434
    ctx->pc = 0x1f21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1076), GPR_U32(ctx, 6));
label_1f21cc:
    // 0x1f21cc: 0xac860424
    ctx->pc = 0x1f21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1060), GPR_U32(ctx, 6));
label_1f21d0:
    // 0x1f21d0: 0xc4e00034
    ctx->pc = 0x1f21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f21d4:
    // 0x1f21d4: 0xe4800428
    ctx->pc = 0x1f21d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1064), bits); }
label_1f21d8:
    // 0x1f21d8: 0xc4e00038
    ctx->pc = 0x1f21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f21dc:
    // 0x1f21dc: 0xe4800438
    ctx->pc = 0x1f21dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1080), bits); }
label_1f21e0:
    // 0x1f21e0: 0xc4e0003c
    ctx->pc = 0x1f21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f21e4:
    // 0x1f21e4: 0xe4800448
    ctx->pc = 0x1f21e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1096), bits); }
label_1f21e8:
    // 0x1f21e8: 0x8ca30008
    ctx->pc = 0x1f21e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f21ec:
    // 0x1f21ec: 0xc4600000
    ctx->pc = 0x1f21ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f21f0:
    // 0x1f21f0: 0xe480042c
    ctx->pc = 0x1f21f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1068), bits); }
label_1f21f4:
    // 0x1f21f4: 0x8ca3000c
    ctx->pc = 0x1f21f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f21f8:
    // 0x1f21f8: 0xc4600000
    ctx->pc = 0x1f21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f21fc:
    // 0x1f21fc: 0xe480043c
    ctx->pc = 0x1f21fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
label_1f2200:
    // 0x1f2200: 0x8ca30010
    ctx->pc = 0x1f2200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1f2204:
    // 0x1f2204: 0xc4600000
    ctx->pc = 0x1f2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2208:
    // 0x1f2208: 0xe480044c
    ctx->pc = 0x1f2208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1100), bits); }
label_1f220c:
    // 0x1f220c: 0x8ca80014
    ctx->pc = 0x1f220cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1f2210:
    // 0x1f2210: 0x110000f5
label_1f2214:
    if (ctx->pc == 0x1F2214u) {
        ctx->pc = 0x1F2214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        ctx->pc = 0x1F2218u;
        goto label_1f2218;
    }
    ctx->pc = 0x1F2210u;
    {
        const bool branch_taken_0x1f2210 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
        if (branch_taken_0x1f2210) {
            ctx->pc = 0x1F25E8u;
            goto label_1f25e8;
        }
    }
    ctx->pc = 0x1F2218u;
label_1f2218:
    // 0x1f2218: 0x15060003
label_1f221c:
    if (ctx->pc == 0x1F221Cu) {
        ctx->pc = 0x1F221Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F2220u;
        goto label_1f2220;
    }
    ctx->pc = 0x1F2218u;
    {
        const bool branch_taken_0x1f2218 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 6));
        ctx->pc = 0x1F221Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1f2218) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F2220u;
label_1f2220:
    // 0x1f2220: 0x1000000e
label_1f2224:
    if (ctx->pc == 0x1F2224u) {
        ctx->pc = 0x1F2228u;
        goto label_1f2228;
    }
    ctx->pc = 0x1F2220u;
    {
        const bool branch_taken_0x1f2220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2220) {
            ctx->pc = 0x1F225Cu;
            goto label_1f225c;
        }
    }
    ctx->pc = 0x1F2228u;
label_1f2228:
    // 0x1f2228: 0x683021
    ctx->pc = 0x1f2228u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f222c:
    // 0x1f222c: 0x61880
    ctx->pc = 0x1f222cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f2230:
    // 0x1f2230: 0xc31821
    ctx->pc = 0x1f2230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f2234:
    // 0x1f2234: 0x33840
    ctx->pc = 0x1f2234u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f2238:
    // 0x1f2238: 0x3c038888
    ctx->pc = 0x1f2238u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f223c:
    // 0x1f223c: 0x34638889
    ctx->pc = 0x1f223cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f2240:
    // 0x1f2240: 0x670018
    ctx->pc = 0x1f2240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2244:
    // 0x1f2244: 0x737c2
    ctx->pc = 0x1f2244u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f2248:
    // 0x1f2248: 0x0
    ctx->pc = 0x1f2248u;
    // NOP
label_1f224c:
    // 0x1f224c: 0x1810
    ctx->pc = 0x1f224cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f2250:
    // 0x1f2250: 0x671821
    ctx->pc = 0x1f2250u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f2254:
    // 0x1f2254: 0x31943
    ctx->pc = 0x1f2254u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f2258:
    // 0x1f2258: 0x663021
    ctx->pc = 0x1f2258u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f225c:
    // 0x1f225c: 0x44860000
    ctx->pc = 0x1f225cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
label_1f2260:
    // 0x1f2260: 0xc481042c
    ctx->pc = 0x1f2260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2264:
    // 0x1f2264: 0x468000a0
    ctx->pc = 0x1f2264u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2268:
    // 0x1f2268: 0xc4800428
    ctx->pc = 0x1f2268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f226c:
    // 0x1f226c: 0x44801800
    ctx->pc = 0x1f226cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_1f2270:
    // 0x1f2270: 0x46000841
    ctx->pc = 0x1f2270u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f2274:
    // 0x1f2274: 0x46020803
    ctx->pc = 0x1f2274u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
label_1f2278:
    // 0x1f2278: 0x0
    ctx->pc = 0x1f2278u;
    // NOP
label_1f227c:
    // 0x1f227c: 0x0
    ctx->pc = 0x1f227cu;
    // NOP
label_1f2280:
    // 0x1f2280: 0x46030034
    ctx->pc = 0x1f2280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2284:
    // 0x1f2284: 0x0
    ctx->pc = 0x1f2284u;
    // NOP
label_1f2288:
    // 0x1f2288: 0x4500001c
label_1f228c:
    if (ctx->pc == 0x1F228Cu) {
        ctx->pc = 0x1F228Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F2290u;
        goto label_1f2290;
    }
    ctx->pc = 0x1F2288u;
    {
        const bool branch_taken_0x1f2288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F228Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2288) {
            ctx->pc = 0x1F22FCu;
            goto label_1f22fc;
        }
    }
    ctx->pc = 0x1F2290u;
label_1f2290:
    // 0x1f2290: 0x24030001
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f2294:
    // 0x1f2294: 0x55030003
label_1f2298:
    if (ctx->pc == 0x1F2298u) {
        ctx->pc = 0x1F2298u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F229Cu;
        goto label_1f229c;
    }
    ctx->pc = 0x1F2294u;
    {
        const bool branch_taken_0x1f2294 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f2294) {
            ctx->pc = 0x1F2298u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F22A4u;
            goto label_1f22a4;
        }
    }
    ctx->pc = 0x1F229Cu;
label_1f229c:
    // 0x1f229c: 0x1000000e
label_1f22a0:
    if (ctx->pc == 0x1F22A0u) {
        ctx->pc = 0x1F22A4u;
        goto label_1f22a4;
    }
    ctx->pc = 0x1F229Cu;
    {
        const bool branch_taken_0x1f229c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f229c) {
            ctx->pc = 0x1F22D8u;
            goto label_1f22d8;
        }
    }
    ctx->pc = 0x1F22A4u;
label_1f22a4:
    // 0x1f22a4: 0x683021
    ctx->pc = 0x1f22a4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f22a8:
    // 0x1f22a8: 0x61880
    ctx->pc = 0x1f22a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f22ac:
    // 0x1f22ac: 0xc31821
    ctx->pc = 0x1f22acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f22b0:
    // 0x1f22b0: 0x33840
    ctx->pc = 0x1f22b0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f22b4:
    // 0x1f22b4: 0x3c038888
    ctx->pc = 0x1f22b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f22b8:
    // 0x1f22b8: 0x34638889
    ctx->pc = 0x1f22b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f22bc:
    // 0x1f22bc: 0x670018
    ctx->pc = 0x1f22bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f22c0:
    // 0x1f22c0: 0x737c2
    ctx->pc = 0x1f22c0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f22c4:
    // 0x1f22c4: 0x0
    ctx->pc = 0x1f22c4u;
    // NOP
label_1f22c8:
    // 0x1f22c8: 0x1810
    ctx->pc = 0x1f22c8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f22cc:
    // 0x1f22cc: 0x671821
    ctx->pc = 0x1f22ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f22d0:
    // 0x1f22d0: 0x31943
    ctx->pc = 0x1f22d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f22d4:
    // 0x1f22d4: 0x661821
    ctx->pc = 0x1f22d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f22d8:
    // 0x1f22d8: 0x44830000
    ctx->pc = 0x1f22d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f22dc:
    // 0x1f22dc: 0x0
    ctx->pc = 0x1f22dcu;
    // NOP
label_1f22e0:
    // 0x1f22e0: 0x46800020
    ctx->pc = 0x1f22e0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f22e4:
    // 0x1f22e4: 0x3c03bf80
    ctx->pc = 0x1f22e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f22e8:
    // 0x1f22e8: 0x46000843
    ctx->pc = 0x1f22e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f22ec:
    // 0x1f22ec: 0x0
    ctx->pc = 0x1f22ecu;
    // NOP
label_1f22f0:
    // 0x1f22f0: 0x44830000
    ctx->pc = 0x1f22f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f22f4:
    // 0x1f22f4: 0x10000016
label_1f22f8:
    if (ctx->pc == 0x1F22F8u) {
        ctx->pc = 0x1F22F8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F22FCu;
        goto label_1f22fc;
    }
    ctx->pc = 0x1F22F4u;
    {
        const bool branch_taken_0x1f22f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F22F8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f22f4) {
            ctx->pc = 0x1F2350u;
            goto label_1f2350;
        }
    }
    ctx->pc = 0x1F22FCu;
label_1f22fc:
    // 0x1f22fc: 0x55030003
label_1f2300:
    if (ctx->pc == 0x1F2300u) {
        ctx->pc = 0x1F2300u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F2304u;
        goto label_1f2304;
    }
    ctx->pc = 0x1F22FCu;
    {
        const bool branch_taken_0x1f22fc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f22fc) {
            ctx->pc = 0x1F2300u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F230Cu;
            goto label_1f230c;
        }
    }
    ctx->pc = 0x1F2304u;
label_1f2304:
    // 0x1f2304: 0x1000000e
label_1f2308:
    if (ctx->pc == 0x1F2308u) {
        ctx->pc = 0x1F230Cu;
        goto label_1f230c;
    }
    ctx->pc = 0x1F2304u;
    {
        const bool branch_taken_0x1f2304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2304) {
            ctx->pc = 0x1F2340u;
            goto label_1f2340;
        }
    }
    ctx->pc = 0x1F230Cu;
label_1f230c:
    // 0x1f230c: 0x683021
    ctx->pc = 0x1f230cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f2310:
    // 0x1f2310: 0x61880
    ctx->pc = 0x1f2310u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f2314:
    // 0x1f2314: 0xc31821
    ctx->pc = 0x1f2314u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f2318:
    // 0x1f2318: 0x33840
    ctx->pc = 0x1f2318u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f231c:
    // 0x1f231c: 0x3c038888
    ctx->pc = 0x1f231cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f2320:
    // 0x1f2320: 0x34638889
    ctx->pc = 0x1f2320u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f2324:
    // 0x1f2324: 0x670018
    ctx->pc = 0x1f2324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2328:
    // 0x1f2328: 0x737c2
    ctx->pc = 0x1f2328u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f232c:
    // 0x1f232c: 0x0
    ctx->pc = 0x1f232cu;
    // NOP
label_1f2330:
    // 0x1f2330: 0x1810
    ctx->pc = 0x1f2330u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f2334:
    // 0x1f2334: 0x671821
    ctx->pc = 0x1f2334u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f2338:
    // 0x1f2338: 0x31943
    ctx->pc = 0x1f2338u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f233c:
    // 0x1f233c: 0x661821
    ctx->pc = 0x1f233cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f2340:
    // 0x1f2340: 0x44830000
    ctx->pc = 0x1f2340u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f2344:
    // 0x1f2344: 0x0
    ctx->pc = 0x1f2344u;
    // NOP
label_1f2348:
    // 0x1f2348: 0x46800020
    ctx->pc = 0x1f2348u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f234c:
    // 0x1f234c: 0x46000803
    ctx->pc = 0x1f234cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1f2350:
    // 0x1f2350: 0xe4800430
    ctx->pc = 0x1f2350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1072), bits); }
label_1f2354:
    // 0x1f2354: 0x8c480000
    ctx->pc = 0x1f2354u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2358:
    // 0x1f2358: 0x24030001
    ctx->pc = 0x1f2358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f235c:
    // 0x1f235c: 0x55030003
label_1f2360:
    if (ctx->pc == 0x1F2360u) {
        ctx->pc = 0x1F2360u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F2364u;
        goto label_1f2364;
    }
    ctx->pc = 0x1F235Cu;
    {
        const bool branch_taken_0x1f235c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f235c) {
            ctx->pc = 0x1F2360u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F236Cu;
            goto label_1f236c;
        }
    }
    ctx->pc = 0x1F2364u;
label_1f2364:
    // 0x1f2364: 0x1000000f
label_1f2368:
    if (ctx->pc == 0x1F2368u) {
        ctx->pc = 0x1F2368u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F236Cu;
        goto label_1f236c;
    }
    ctx->pc = 0x1F2364u;
    {
        const bool branch_taken_0x1f2364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2368u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f2364) {
            ctx->pc = 0x1F23A4u;
            goto label_1f23a4;
        }
    }
    ctx->pc = 0x1F236Cu;
label_1f236c:
    // 0x1f236c: 0x683021
    ctx->pc = 0x1f236cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f2370:
    // 0x1f2370: 0x61880
    ctx->pc = 0x1f2370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f2374:
    // 0x1f2374: 0xc31821
    ctx->pc = 0x1f2374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f2378:
    // 0x1f2378: 0x33840
    ctx->pc = 0x1f2378u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f237c:
    // 0x1f237c: 0x3c038888
    ctx->pc = 0x1f237cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f2380:
    // 0x1f2380: 0x34638889
    ctx->pc = 0x1f2380u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f2384:
    // 0x1f2384: 0x670018
    ctx->pc = 0x1f2384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2388:
    // 0x1f2388: 0x737c2
    ctx->pc = 0x1f2388u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f238c:
    // 0x1f238c: 0x0
    ctx->pc = 0x1f238cu;
    // NOP
label_1f2390:
    // 0x1f2390: 0x1810
    ctx->pc = 0x1f2390u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f2394:
    // 0x1f2394: 0x671821
    ctx->pc = 0x1f2394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f2398:
    // 0x1f2398: 0x31943
    ctx->pc = 0x1f2398u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f239c:
    // 0x1f239c: 0x661821
    ctx->pc = 0x1f239cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f23a0:
    // 0x1f23a0: 0xc483043c
    ctx->pc = 0x1f23a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f23a4:
    // 0x1f23a4: 0xc4820438
    ctx->pc = 0x1f23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f23a8:
    // 0x1f23a8: 0x44830000
    ctx->pc = 0x1f23a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f23ac:
    // 0x1f23ac: 0x0
    ctx->pc = 0x1f23acu;
    // NOP
label_1f23b0:
    // 0x1f23b0: 0x46800060
    ctx->pc = 0x1f23b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f23b4:
    // 0x1f23b4: 0x46021881
    ctx->pc = 0x1f23b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f23b8:
    // 0x1f23b8: 0x46011043
    ctx->pc = 0x1f23b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f23bc:
    // 0x1f23bc: 0x44800000
    ctx->pc = 0x1f23bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f23c0:
    // 0x1f23c0: 0x0
    ctx->pc = 0x1f23c0u;
    // NOP
label_1f23c4:
    // 0x1f23c4: 0x0
    ctx->pc = 0x1f23c4u;
    // NOP
label_1f23c8:
    // 0x1f23c8: 0x46000834
    ctx->pc = 0x1f23c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f23cc:
    // 0x1f23cc: 0x0
    ctx->pc = 0x1f23ccu;
    // NOP
label_1f23d0:
    // 0x1f23d0: 0x4500001c
label_1f23d4:
    if (ctx->pc == 0x1F23D4u) {
        ctx->pc = 0x1F23D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F23D8u;
        goto label_1f23d8;
    }
    ctx->pc = 0x1F23D0u;
    {
        const bool branch_taken_0x1f23d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F23D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f23d0) {
            ctx->pc = 0x1F2444u;
            goto label_1f2444;
        }
    }
    ctx->pc = 0x1F23D8u;
label_1f23d8:
    // 0x1f23d8: 0x24030001
    ctx->pc = 0x1f23d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f23dc:
    // 0x1f23dc: 0x55030003
label_1f23e0:
    if (ctx->pc == 0x1F23E0u) {
        ctx->pc = 0x1F23E0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F23E4u;
        goto label_1f23e4;
    }
    ctx->pc = 0x1F23DCu;
    {
        const bool branch_taken_0x1f23dc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f23dc) {
            ctx->pc = 0x1F23E0u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F23ECu;
            goto label_1f23ec;
        }
    }
    ctx->pc = 0x1F23E4u;
label_1f23e4:
    // 0x1f23e4: 0x1000000e
label_1f23e8:
    if (ctx->pc == 0x1F23E8u) {
        ctx->pc = 0x1F23ECu;
        goto label_1f23ec;
    }
    ctx->pc = 0x1F23E4u;
    {
        const bool branch_taken_0x1f23e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f23e4) {
            ctx->pc = 0x1F2420u;
            goto label_1f2420;
        }
    }
    ctx->pc = 0x1F23ECu;
label_1f23ec:
    // 0x1f23ec: 0x683021
    ctx->pc = 0x1f23ecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f23f0:
    // 0x1f23f0: 0x61880
    ctx->pc = 0x1f23f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f23f4:
    // 0x1f23f4: 0xc31821
    ctx->pc = 0x1f23f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f23f8:
    // 0x1f23f8: 0x33840
    ctx->pc = 0x1f23f8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f23fc:
    // 0x1f23fc: 0x3c038888
    ctx->pc = 0x1f23fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f2400:
    // 0x1f2400: 0x34638889
    ctx->pc = 0x1f2400u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f2404:
    // 0x1f2404: 0x670018
    ctx->pc = 0x1f2404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2408:
    // 0x1f2408: 0x737c2
    ctx->pc = 0x1f2408u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f240c:
    // 0x1f240c: 0x0
    ctx->pc = 0x1f240cu;
    // NOP
label_1f2410:
    // 0x1f2410: 0x1810
    ctx->pc = 0x1f2410u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f2414:
    // 0x1f2414: 0x671821
    ctx->pc = 0x1f2414u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f2418:
    // 0x1f2418: 0x31943
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f241c:
    // 0x1f241c: 0x661821
    ctx->pc = 0x1f241cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f2420:
    // 0x1f2420: 0x44830000
    ctx->pc = 0x1f2420u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f2424:
    // 0x1f2424: 0x0
    ctx->pc = 0x1f2424u;
    // NOP
label_1f2428:
    // 0x1f2428: 0x46800020
    ctx->pc = 0x1f2428u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f242c:
    // 0x1f242c: 0x3c03bf80
    ctx->pc = 0x1f242cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
label_1f2430:
    // 0x1f2430: 0x46001043
    ctx->pc = 0x1f2430u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f2434:
    // 0x1f2434: 0x0
    ctx->pc = 0x1f2434u;
    // NOP
label_1f2438:
    // 0x1f2438: 0x44830000
    ctx->pc = 0x1f2438u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f243c:
    // 0x1f243c: 0x10000016
label_1f2440:
    if (ctx->pc == 0x1F2440u) {
        ctx->pc = 0x1F2440u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F2444u;
        goto label_1f2444;
    }
    ctx->pc = 0x1F243Cu;
    {
        const bool branch_taken_0x1f243c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2440u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f243c) {
            ctx->pc = 0x1F2498u;
            goto label_1f2498;
        }
    }
    ctx->pc = 0x1F2444u;
label_1f2444:
    // 0x1f2444: 0x55030003
label_1f2448:
    if (ctx->pc == 0x1F2448u) {
        ctx->pc = 0x1F2448u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x1F244Cu;
        goto label_1f244c;
    }
    ctx->pc = 0x1F2444u;
    {
        const bool branch_taken_0x1f2444 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f2444) {
            ctx->pc = 0x1F2448u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
            ctx->pc = 0x1F2454u;
            goto label_1f2454;
        }
    }
    ctx->pc = 0x1F244Cu;
label_1f244c:
    // 0x1f244c: 0x1000000e
label_1f2450:
    if (ctx->pc == 0x1F2450u) {
        ctx->pc = 0x1F2454u;
        goto label_1f2454;
    }
    ctx->pc = 0x1F244Cu;
    {
        const bool branch_taken_0x1f244c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f244c) {
            ctx->pc = 0x1F2488u;
            goto label_1f2488;
        }
    }
    ctx->pc = 0x1F2454u;
label_1f2454:
    // 0x1f2454: 0x683021
    ctx->pc = 0x1f2454u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f2458:
    // 0x1f2458: 0x61880
    ctx->pc = 0x1f2458u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_1f245c:
    // 0x1f245c: 0xc31821
    ctx->pc = 0x1f245cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f2460:
    // 0x1f2460: 0x33840
    ctx->pc = 0x1f2460u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 1));
label_1f2464:
    // 0x1f2464: 0x3c038888
    ctx->pc = 0x1f2464u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_1f2468:
    // 0x1f2468: 0x34638889
    ctx->pc = 0x1f2468u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_1f246c:
    // 0x1f246c: 0x670018
    ctx->pc = 0x1f246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2470:
    // 0x1f2470: 0x737c2
    ctx->pc = 0x1f2470u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 7), 31));
label_1f2474:
    // 0x1f2474: 0x0
    ctx->pc = 0x1f2474u;
    // NOP
label_1f2478:
    // 0x1f2478: 0x1810
    ctx->pc = 0x1f2478u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1f247c:
    // 0x1f247c: 0x671821
    ctx->pc = 0x1f247cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f2480:
    // 0x1f2480: 0x31943
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f2484:
    // 0x1f2484: 0x661821
    ctx->pc = 0x1f2484u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f2488:
    // 0x1f2488: 0x44830000
    ctx->pc = 0x1f2488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f248c:
    // 0x1f248c: 0x0
    ctx->pc = 0x1f248cu;
    // NOP
label_1f2490:
    // 0x1f2490: 0x46800020
    ctx->pc = 0x1f2490u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2494:
    // 0x1f2494: 0x46001003
    ctx->pc = 0x1f2494u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f2498:
    // 0x1f2498: 0xe4800440
    ctx->pc = 0x1f2498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
label_1f249c:
    // 0x1f249c: 0x8c470000
    ctx->pc = 0x1f249cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f24a0:
    // 0x1f24a0: 0x24020001
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f24a4:
    // 0x1f24a4: 0x54e20003
label_1f24a8:
    if (ctx->pc == 0x1F24A8u) {
        ctx->pc = 0x1F24A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F24ACu;
        goto label_1f24ac;
    }
    ctx->pc = 0x1F24A4u;
    {
        const bool branch_taken_0x1f24a4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f24a4) {
            ctx->pc = 0x1F24A8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F24B4u;
            goto label_1f24b4;
        }
    }
    ctx->pc = 0x1F24ACu;
label_1f24ac:
    // 0x1f24ac: 0x1000000f
label_1f24b0:
    if (ctx->pc == 0x1F24B0u) {
        ctx->pc = 0x1F24B0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F24B4u;
        goto label_1f24b4;
    }
    ctx->pc = 0x1F24ACu;
    {
        const bool branch_taken_0x1f24ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F24B0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x1f24ac) {
            ctx->pc = 0x1F24ECu;
            goto label_1f24ec;
        }
    }
    ctx->pc = 0x1F24B4u;
label_1f24b4:
    // 0x1f24b4: 0x471821
    ctx->pc = 0x1f24b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f24b8:
    // 0x1f24b8: 0x31080
    ctx->pc = 0x1f24b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f24bc:
    // 0x1f24bc: 0x621021
    ctx->pc = 0x1f24bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f24c0:
    // 0x1f24c0: 0x23040
    ctx->pc = 0x1f24c0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f24c4:
    // 0x1f24c4: 0x3c028888
    ctx->pc = 0x1f24c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f24c8:
    // 0x1f24c8: 0x34428889
    ctx->pc = 0x1f24c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f24cc:
    // 0x1f24cc: 0x460018
    ctx->pc = 0x1f24ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f24d0:
    // 0x1f24d0: 0x61fc2
    ctx->pc = 0x1f24d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f24d4:
    // 0x1f24d4: 0x0
    ctx->pc = 0x1f24d4u;
    // NOP
label_1f24d8:
    // 0x1f24d8: 0x1010
    ctx->pc = 0x1f24d8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f24dc:
    // 0x1f24dc: 0x461021
    ctx->pc = 0x1f24dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f24e0:
    // 0x1f24e0: 0x21143
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f24e4:
    // 0x1f24e4: 0x431021
    ctx->pc = 0x1f24e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f24e8:
    // 0x1f24e8: 0xc483044c
    ctx->pc = 0x1f24e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f24ec:
    // 0x1f24ec: 0xc4820448
    ctx->pc = 0x1f24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f24f0:
    // 0x1f24f0: 0x44820000
    ctx->pc = 0x1f24f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f24f4:
    // 0x1f24f4: 0x0
    ctx->pc = 0x1f24f4u;
    // NOP
label_1f24f8:
    // 0x1f24f8: 0x46800060
    ctx->pc = 0x1f24f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f24fc:
    // 0x1f24fc: 0x46021881
    ctx->pc = 0x1f24fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f2500:
    // 0x1f2500: 0x46011043
    ctx->pc = 0x1f2500u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f2504:
    // 0x1f2504: 0x44800000
    ctx->pc = 0x1f2504u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2508:
    // 0x1f2508: 0x0
    ctx->pc = 0x1f2508u;
    // NOP
label_1f250c:
    // 0x1f250c: 0x0
    ctx->pc = 0x1f250cu;
    // NOP
label_1f2510:
    // 0x1f2510: 0x46000834
    ctx->pc = 0x1f2510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2514:
    // 0x1f2514: 0x0
    ctx->pc = 0x1f2514u;
    // NOP
label_1f2518:
    // 0x1f2518: 0x4500001c
label_1f251c:
    if (ctx->pc == 0x1F251Cu) {
        ctx->pc = 0x1F251Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F2520u;
        goto label_1f2520;
    }
    ctx->pc = 0x1F2518u;
    {
        const bool branch_taken_0x1f2518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F251Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2518) {
            ctx->pc = 0x1F258Cu;
            goto label_1f258c;
        }
    }
    ctx->pc = 0x1F2520u;
label_1f2520:
    // 0x1f2520: 0x24020001
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f2524:
    // 0x1f2524: 0x54e20003
label_1f2528:
    if (ctx->pc == 0x1F2528u) {
        ctx->pc = 0x1F2528u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F252Cu;
        goto label_1f252c;
    }
    ctx->pc = 0x1F2524u;
    {
        const bool branch_taken_0x1f2524 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f2524) {
            ctx->pc = 0x1F2528u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F2534u;
            goto label_1f2534;
        }
    }
    ctx->pc = 0x1F252Cu;
label_1f252c:
    // 0x1f252c: 0x1000000e
label_1f2530:
    if (ctx->pc == 0x1F2530u) {
        ctx->pc = 0x1F2534u;
        goto label_1f2534;
    }
    ctx->pc = 0x1F252Cu;
    {
        const bool branch_taken_0x1f252c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f252c) {
            ctx->pc = 0x1F2568u;
            goto label_1f2568;
        }
    }
    ctx->pc = 0x1F2534u;
label_1f2534:
    // 0x1f2534: 0x471821
    ctx->pc = 0x1f2534u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f2538:
    // 0x1f2538: 0x31080
    ctx->pc = 0x1f2538u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f253c:
    // 0x1f253c: 0x621021
    ctx->pc = 0x1f253cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2540:
    // 0x1f2540: 0x23040
    ctx->pc = 0x1f2540u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f2544:
    // 0x1f2544: 0x3c028888
    ctx->pc = 0x1f2544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f2548:
    // 0x1f2548: 0x34428889
    ctx->pc = 0x1f2548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f254c:
    // 0x1f254c: 0x460018
    ctx->pc = 0x1f254cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2550:
    // 0x1f2550: 0x61fc2
    ctx->pc = 0x1f2550u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f2554:
    // 0x1f2554: 0x0
    ctx->pc = 0x1f2554u;
    // NOP
label_1f2558:
    // 0x1f2558: 0x1010
    ctx->pc = 0x1f2558u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f255c:
    // 0x1f255c: 0x461021
    ctx->pc = 0x1f255cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f2560:
    // 0x1f2560: 0x21143
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f2564:
    // 0x1f2564: 0x431021
    ctx->pc = 0x1f2564u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2568:
    // 0x1f2568: 0x44820000
    ctx->pc = 0x1f2568u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f256c:
    // 0x1f256c: 0x0
    ctx->pc = 0x1f256cu;
    // NOP
label_1f2570:
    // 0x1f2570: 0x46800020
    ctx->pc = 0x1f2570u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2574:
    // 0x1f2574: 0x3c02bf80
    ctx->pc = 0x1f2574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f2578:
    // 0x1f2578: 0x46001043
    ctx->pc = 0x1f2578u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f257c:
    // 0x1f257c: 0x0
    ctx->pc = 0x1f257cu;
    // NOP
label_1f2580:
    // 0x1f2580: 0x44820000
    ctx->pc = 0x1f2580u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2584:
    // 0x1f2584: 0x10000016
label_1f2588:
    if (ctx->pc == 0x1F2588u) {
        ctx->pc = 0x1F2588u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F258Cu;
        goto label_1f258c;
    }
    ctx->pc = 0x1F2584u;
    {
        const bool branch_taken_0x1f2584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2588u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f2584) {
            ctx->pc = 0x1F25E0u;
            goto label_1f25e0;
        }
    }
    ctx->pc = 0x1F258Cu;
label_1f258c:
    // 0x1f258c: 0x54e20003
label_1f2590:
    if (ctx->pc == 0x1F2590u) {
        ctx->pc = 0x1F2590u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F2594u;
        goto label_1f2594;
    }
    ctx->pc = 0x1F258Cu;
    {
        const bool branch_taken_0x1f258c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f258c) {
            ctx->pc = 0x1F2590u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F259Cu;
            goto label_1f259c;
        }
    }
    ctx->pc = 0x1F2594u;
label_1f2594:
    // 0x1f2594: 0x1000000e
label_1f2598:
    if (ctx->pc == 0x1F2598u) {
        ctx->pc = 0x1F259Cu;
        goto label_1f259c;
    }
    ctx->pc = 0x1F2594u;
    {
        const bool branch_taken_0x1f2594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2594) {
            ctx->pc = 0x1F25D0u;
            goto label_1f25d0;
        }
    }
    ctx->pc = 0x1F259Cu;
label_1f259c:
    // 0x1f259c: 0x471821
    ctx->pc = 0x1f259cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f25a0:
    // 0x1f25a0: 0x31080
    ctx->pc = 0x1f25a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f25a4:
    // 0x1f25a4: 0x621021
    ctx->pc = 0x1f25a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f25a8:
    // 0x1f25a8: 0x23040
    ctx->pc = 0x1f25a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f25ac:
    // 0x1f25ac: 0x3c028888
    ctx->pc = 0x1f25acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f25b0:
    // 0x1f25b0: 0x34428889
    ctx->pc = 0x1f25b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f25b4:
    // 0x1f25b4: 0x460018
    ctx->pc = 0x1f25b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f25b8:
    // 0x1f25b8: 0x61fc2
    ctx->pc = 0x1f25b8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f25bc:
    // 0x1f25bc: 0x0
    ctx->pc = 0x1f25bcu;
    // NOP
label_1f25c0:
    // 0x1f25c0: 0x1010
    ctx->pc = 0x1f25c0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f25c4:
    // 0x1f25c4: 0x461021
    ctx->pc = 0x1f25c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f25c8:
    // 0x1f25c8: 0x21143
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f25cc:
    // 0x1f25cc: 0x431021
    ctx->pc = 0x1f25ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f25d0:
    // 0x1f25d0: 0x44820000
    ctx->pc = 0x1f25d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f25d4:
    // 0x1f25d4: 0x0
    ctx->pc = 0x1f25d4u;
    // NOP
label_1f25d8:
    // 0x1f25d8: 0x46800020
    ctx->pc = 0x1f25d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f25dc:
    // 0x1f25dc: 0x46001003
    ctx->pc = 0x1f25dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f25e0:
    // 0x1f25e0: 0x10000027
label_1f25e4:
    if (ctx->pc == 0x1F25E4u) {
        ctx->pc = 0x1F25E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1104), bits); }
        ctx->pc = 0x1F25E8u;
        goto label_1f25e8;
    }
    ctx->pc = 0x1F25E0u;
    {
        const bool branch_taken_0x1f25e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F25E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1104), bits); }
        if (branch_taken_0x1f25e0) {
            ctx->pc = 0x1F2680u;
            goto label_1f2680;
        }
    }
    ctx->pc = 0x1F25E8u;
label_1f25e8:
    // 0x1f25e8: 0xc481042c
    ctx->pc = 0x1f25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f25ec:
    // 0x1f25ec: 0xc4800428
    ctx->pc = 0x1f25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f25f0:
    // 0x1f25f0: 0x44801000
    ctx->pc = 0x1f25f0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_1f25f4:
    // 0x1f25f4: 0x46000841
    ctx->pc = 0x1f25f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f25f8:
    // 0x1f25f8: 0x46020834
    ctx->pc = 0x1f25f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f25fc:
    // 0x1f25fc: 0x0
    ctx->pc = 0x1f25fcu;
    // NOP
label_1f2600:
    // 0x1f2600: 0x45000004
label_1f2604:
    if (ctx->pc == 0x1F2604u) {
        ctx->pc = 0x1F2604u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F2608u;
        goto label_1f2608;
    }
    ctx->pc = 0x1F2600u;
    {
        const bool branch_taken_0x1f2600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2604u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f2600) {
            ctx->pc = 0x1F2614u;
            goto label_1f2614;
        }
    }
    ctx->pc = 0x1F2608u;
label_1f2608:
    // 0x1f2608: 0x44820000
    ctx->pc = 0x1f2608u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f260c:
    // 0x1f260c: 0x0
    ctx->pc = 0x1f260cu;
    // NOP
label_1f2610:
    // 0x1f2610: 0x46010042
    ctx->pc = 0x1f2610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f2614:
    // 0x1f2614: 0xe4810430
    ctx->pc = 0x1f2614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1072), bits); }
label_1f2618:
    // 0x1f2618: 0xc482043c
    ctx->pc = 0x1f2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f261c:
    // 0x1f261c: 0xc4810438
    ctx->pc = 0x1f261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2620:
    // 0x1f2620: 0x44800000
    ctx->pc = 0x1f2620u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2624:
    // 0x1f2624: 0x0
    ctx->pc = 0x1f2624u;
    // NOP
label_1f2628:
    // 0x1f2628: 0x46011041
    ctx->pc = 0x1f2628u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f262c:
    // 0x1f262c: 0x46000834
    ctx->pc = 0x1f262cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2630:
    // 0x1f2630: 0x0
    ctx->pc = 0x1f2630u;
    // NOP
label_1f2634:
    // 0x1f2634: 0x45000004
label_1f2638:
    if (ctx->pc == 0x1F2638u) {
        ctx->pc = 0x1F2638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F263Cu;
        goto label_1f263c;
    }
    ctx->pc = 0x1F2634u;
    {
        const bool branch_taken_0x1f2634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f2634) {
            ctx->pc = 0x1F2648u;
            goto label_1f2648;
        }
    }
    ctx->pc = 0x1F263Cu;
label_1f263c:
    // 0x1f263c: 0x44820000
    ctx->pc = 0x1f263cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2640:
    // 0x1f2640: 0x0
    ctx->pc = 0x1f2640u;
    // NOP
label_1f2644:
    // 0x1f2644: 0x46010042
    ctx->pc = 0x1f2644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f2648:
    // 0x1f2648: 0xe4810440
    ctx->pc = 0x1f2648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
label_1f264c:
    // 0x1f264c: 0xc482044c
    ctx->pc = 0x1f264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2650:
    // 0x1f2650: 0xc4810448
    ctx->pc = 0x1f2650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2654:
    // 0x1f2654: 0x44800000
    ctx->pc = 0x1f2654u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2658:
    // 0x1f2658: 0x0
    ctx->pc = 0x1f2658u;
    // NOP
label_1f265c:
    // 0x1f265c: 0x46011041
    ctx->pc = 0x1f265cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f2660:
    // 0x1f2660: 0x46000834
    ctx->pc = 0x1f2660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2664:
    // 0x1f2664: 0x0
    ctx->pc = 0x1f2664u;
    // NOP
label_1f2668:
    // 0x1f2668: 0x45000004
label_1f266c:
    if (ctx->pc == 0x1F266Cu) {
        ctx->pc = 0x1F266Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F2670u;
        goto label_1f2670;
    }
    ctx->pc = 0x1F2668u;
    {
        const bool branch_taken_0x1f2668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F266Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f2668) {
            ctx->pc = 0x1F267Cu;
            goto label_1f267c;
        }
    }
    ctx->pc = 0x1F2670u;
label_1f2670:
    // 0x1f2670: 0x44820000
    ctx->pc = 0x1f2670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2674:
    // 0x1f2674: 0x0
    ctx->pc = 0x1f2674u;
    // NOP
label_1f2678:
    // 0x1f2678: 0x46010042
    ctx->pc = 0x1f2678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f267c:
    // 0x1f267c: 0xe4810450
    ctx->pc = 0x1f267cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1104), bits); }
label_1f2680:
    // 0x1f2680: 0x10000084
label_1f2684:
    if (ctx->pc == 0x1F2684u) {
        ctx->pc = 0x1F2684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        ctx->pc = 0x1F2688u;
        goto label_1f2688;
    }
    ctx->pc = 0x1F2680u;
    {
        const bool branch_taken_0x1f2680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x1f2680) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F2688u;
label_1f2688:
    // 0x1f2688: 0x24030001
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f268c:
    // 0x1f268c: 0xac830454
    ctx->pc = 0x1f268cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 3));
label_1f2690:
    // 0x1f2690: 0xc4e00000
    ctx->pc = 0x1f2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2694:
    // 0x1f2694: 0xe4800458
    ctx->pc = 0x1f2694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1112), bits); }
label_1f2698:
    // 0x1f2698: 0x8ca20008
    ctx->pc = 0x1f2698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f269c:
    // 0x1f269c: 0xc4400000
    ctx->pc = 0x1f269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f26a0:
    // 0x1f26a0: 0xe480045c
    ctx->pc = 0x1f26a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1116), bits); }
label_1f26a4:
    // 0x1f26a4: 0x8ca7000c
    ctx->pc = 0x1f26a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f26a8:
    // 0x1f26a8: 0x10e00052
label_1f26ac:
    if (ctx->pc == 0x1F26ACu) {
        ctx->pc = 0x1F26B0u;
        goto label_1f26b0;
    }
    ctx->pc = 0x1F26A8u;
    {
        const bool branch_taken_0x1f26a8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f26a8) {
            ctx->pc = 0x1F27F4u;
            goto label_1f27f4;
        }
    }
    ctx->pc = 0x1F26B0u;
label_1f26b0:
    // 0x1f26b0: 0x14e30003
label_1f26b4:
    if (ctx->pc == 0x1F26B4u) {
        ctx->pc = 0x1F26B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F26B8u;
        goto label_1f26b8;
    }
    ctx->pc = 0x1F26B0u;
    {
        const bool branch_taken_0x1f26b0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F26B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1f26b0) {
            ctx->pc = 0x1F26C0u;
            goto label_1f26c0;
        }
    }
    ctx->pc = 0x1F26B8u;
label_1f26b8:
    // 0x1f26b8: 0x1000000f
label_1f26bc:
    if (ctx->pc == 0x1F26BCu) {
        ctx->pc = 0x1F26BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F26C0u;
        goto label_1f26c0;
    }
    ctx->pc = 0x1F26B8u;
    {
        const bool branch_taken_0x1f26b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F26BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x1f26b8) {
            ctx->pc = 0x1F26F8u;
            goto label_1f26f8;
        }
    }
    ctx->pc = 0x1F26C0u;
label_1f26c0:
    // 0x1f26c0: 0x471821
    ctx->pc = 0x1f26c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f26c4:
    // 0x1f26c4: 0x31080
    ctx->pc = 0x1f26c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f26c8:
    // 0x1f26c8: 0x621021
    ctx->pc = 0x1f26c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f26cc:
    // 0x1f26cc: 0x23040
    ctx->pc = 0x1f26ccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f26d0:
    // 0x1f26d0: 0x3c028888
    ctx->pc = 0x1f26d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f26d4:
    // 0x1f26d4: 0x34428889
    ctx->pc = 0x1f26d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f26d8:
    // 0x1f26d8: 0x460018
    ctx->pc = 0x1f26d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f26dc:
    // 0x1f26dc: 0x61fc2
    ctx->pc = 0x1f26dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f26e0:
    // 0x1f26e0: 0x0
    ctx->pc = 0x1f26e0u;
    // NOP
label_1f26e4:
    // 0x1f26e4: 0x1010
    ctx->pc = 0x1f26e4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f26e8:
    // 0x1f26e8: 0x461021
    ctx->pc = 0x1f26e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f26ec:
    // 0x1f26ec: 0x21143
    ctx->pc = 0x1f26ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f26f0:
    // 0x1f26f0: 0x431821
    ctx->pc = 0x1f26f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f26f4:
    // 0x1f26f4: 0xc482045c
    ctx->pc = 0x1f26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f26f8:
    // 0x1f26f8: 0xc4810458
    ctx->pc = 0x1f26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f26fc:
    // 0x1f26fc: 0x44830000
    ctx->pc = 0x1f26fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1f2700:
    // 0x1f2700: 0x0
    ctx->pc = 0x1f2700u;
    // NOP
label_1f2704:
    // 0x1f2704: 0x468000e0
    ctx->pc = 0x1f2704u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2708:
    // 0x1f2708: 0x46011081
    ctx->pc = 0x1f2708u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f270c:
    // 0x1f270c: 0x46031043
    ctx->pc = 0x1f270cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_1f2710:
    // 0x1f2710: 0x44800000
    ctx->pc = 0x1f2710u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2714:
    // 0x1f2714: 0x0
    ctx->pc = 0x1f2714u;
    // NOP
label_1f2718:
    // 0x1f2718: 0x0
    ctx->pc = 0x1f2718u;
    // NOP
label_1f271c:
    // 0x1f271c: 0x46000834
    ctx->pc = 0x1f271cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2720:
    // 0x1f2720: 0x0
    ctx->pc = 0x1f2720u;
    // NOP
label_1f2724:
    // 0x1f2724: 0x4500001c
label_1f2728:
    if (ctx->pc == 0x1F2728u) {
        ctx->pc = 0x1F2728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F272Cu;
        goto label_1f272c;
    }
    ctx->pc = 0x1F2724u;
    {
        const bool branch_taken_0x1f2724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2728u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2724) {
            ctx->pc = 0x1F2798u;
            goto label_1f2798;
        }
    }
    ctx->pc = 0x1F272Cu;
label_1f272c:
    // 0x1f272c: 0x24020001
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f2730:
    // 0x1f2730: 0x54e20003
label_1f2734:
    if (ctx->pc == 0x1F2734u) {
        ctx->pc = 0x1F2734u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F2738u;
        goto label_1f2738;
    }
    ctx->pc = 0x1F2730u;
    {
        const bool branch_taken_0x1f2730 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f2730) {
            ctx->pc = 0x1F2734u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F2740u;
            goto label_1f2740;
        }
    }
    ctx->pc = 0x1F2738u;
label_1f2738:
    // 0x1f2738: 0x1000000e
label_1f273c:
    if (ctx->pc == 0x1F273Cu) {
        ctx->pc = 0x1F2740u;
        goto label_1f2740;
    }
    ctx->pc = 0x1F2738u;
    {
        const bool branch_taken_0x1f2738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2738) {
            ctx->pc = 0x1F2774u;
            goto label_1f2774;
        }
    }
    ctx->pc = 0x1F2740u;
label_1f2740:
    // 0x1f2740: 0x471821
    ctx->pc = 0x1f2740u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f2744:
    // 0x1f2744: 0x31080
    ctx->pc = 0x1f2744u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f2748:
    // 0x1f2748: 0x621021
    ctx->pc = 0x1f2748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f274c:
    // 0x1f274c: 0x23040
    ctx->pc = 0x1f274cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f2750:
    // 0x1f2750: 0x3c028888
    ctx->pc = 0x1f2750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f2754:
    // 0x1f2754: 0x34428889
    ctx->pc = 0x1f2754u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f2758:
    // 0x1f2758: 0x460018
    ctx->pc = 0x1f2758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f275c:
    // 0x1f275c: 0x61fc2
    ctx->pc = 0x1f275cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f2760:
    // 0x1f2760: 0x0
    ctx->pc = 0x1f2760u;
    // NOP
label_1f2764:
    // 0x1f2764: 0x1010
    ctx->pc = 0x1f2764u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f2768:
    // 0x1f2768: 0x461021
    ctx->pc = 0x1f2768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f276c:
    // 0x1f276c: 0x21143
    ctx->pc = 0x1f276cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f2770:
    // 0x1f2770: 0x431021
    ctx->pc = 0x1f2770u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2774:
    // 0x1f2774: 0x44820000
    ctx->pc = 0x1f2774u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2778:
    // 0x1f2778: 0x0
    ctx->pc = 0x1f2778u;
    // NOP
label_1f277c:
    // 0x1f277c: 0x46800020
    ctx->pc = 0x1f277cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f2780:
    // 0x1f2780: 0x3c02bf80
    ctx->pc = 0x1f2780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1f2784:
    // 0x1f2784: 0x46001043
    ctx->pc = 0x1f2784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1f2788:
    // 0x1f2788: 0x0
    ctx->pc = 0x1f2788u;
    // NOP
label_1f278c:
    // 0x1f278c: 0x44820000
    ctx->pc = 0x1f278cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f2790:
    // 0x1f2790: 0x10000016
label_1f2794:
    if (ctx->pc == 0x1F2794u) {
        ctx->pc = 0x1F2794u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F2798u;
        goto label_1f2798;
    }
    ctx->pc = 0x1F2790u;
    {
        const bool branch_taken_0x1f2790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2794u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1f2790) {
            ctx->pc = 0x1F27ECu;
            goto label_1f27ec;
        }
    }
    ctx->pc = 0x1F2798u;
label_1f2798:
    // 0x1f2798: 0x54e20003
label_1f279c:
    if (ctx->pc == 0x1F279Cu) {
        ctx->pc = 0x1F279Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1F27A0u;
        goto label_1f27a0;
    }
    ctx->pc = 0x1F2798u;
    {
        const bool branch_taken_0x1f2798 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f2798) {
            ctx->pc = 0x1F279Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x1F27A8u;
            goto label_1f27a8;
        }
    }
    ctx->pc = 0x1F27A0u;
label_1f27a0:
    // 0x1f27a0: 0x1000000e
label_1f27a4:
    if (ctx->pc == 0x1F27A4u) {
        ctx->pc = 0x1F27A8u;
        goto label_1f27a8;
    }
    ctx->pc = 0x1F27A0u;
    {
        const bool branch_taken_0x1f27a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f27a0) {
            ctx->pc = 0x1F27DCu;
            goto label_1f27dc;
        }
    }
    ctx->pc = 0x1F27A8u;
label_1f27a8:
    // 0x1f27a8: 0x471821
    ctx->pc = 0x1f27a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f27ac:
    // 0x1f27ac: 0x31080
    ctx->pc = 0x1f27acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f27b0:
    // 0x1f27b0: 0x621021
    ctx->pc = 0x1f27b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f27b4:
    // 0x1f27b4: 0x23040
    ctx->pc = 0x1f27b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f27b8:
    // 0x1f27b8: 0x3c028888
    ctx->pc = 0x1f27b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f27bc:
    // 0x1f27bc: 0x34428889
    ctx->pc = 0x1f27bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f27c0:
    // 0x1f27c0: 0x460018
    ctx->pc = 0x1f27c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f27c4:
    // 0x1f27c4: 0x61fc2
    ctx->pc = 0x1f27c4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f27c8:
    // 0x1f27c8: 0x0
    ctx->pc = 0x1f27c8u;
    // NOP
label_1f27cc:
    // 0x1f27cc: 0x1010
    ctx->pc = 0x1f27ccu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f27d0:
    // 0x1f27d0: 0x461021
    ctx->pc = 0x1f27d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f27d4:
    // 0x1f27d4: 0x21143
    ctx->pc = 0x1f27d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f27d8:
    // 0x1f27d8: 0x431021
    ctx->pc = 0x1f27d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f27dc:
    // 0x1f27dc: 0x44820000
    ctx->pc = 0x1f27dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f27e0:
    // 0x1f27e0: 0x0
    ctx->pc = 0x1f27e0u;
    // NOP
label_1f27e4:
    // 0x1f27e4: 0x46800020
    ctx->pc = 0x1f27e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1f27e8:
    // 0x1f27e8: 0x46001003
    ctx->pc = 0x1f27e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1f27ec:
    // 0x1f27ec: 0x1000000e
label_1f27f0:
    if (ctx->pc == 0x1F27F0u) {
        ctx->pc = 0x1F27F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1120), bits); }
        ctx->pc = 0x1F27F4u;
        goto label_1f27f4;
    }
    ctx->pc = 0x1F27ECu;
    {
        const bool branch_taken_0x1f27ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F27F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1120), bits); }
        if (branch_taken_0x1f27ec) {
            ctx->pc = 0x1F2828u;
            goto label_1f2828;
        }
    }
    ctx->pc = 0x1F27F4u;
label_1f27f4:
    // 0x1f27f4: 0xc482045c
    ctx->pc = 0x1f27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f27f8:
    // 0x1f27f8: 0xc4810458
    ctx->pc = 0x1f27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f27fc:
    // 0x1f27fc: 0x44800000
    ctx->pc = 0x1f27fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1f2800:
    // 0x1f2800: 0x0
    ctx->pc = 0x1f2800u;
    // NOP
label_1f2804:
    // 0x1f2804: 0x46011041
    ctx->pc = 0x1f2804u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f2808:
    // 0x1f2808: 0x46000834
    ctx->pc = 0x1f2808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f280c:
    // 0x1f280c: 0x0
    ctx->pc = 0x1f280cu;
    // NOP
label_1f2810:
    // 0x1f2810: 0x45000004
label_1f2814:
    if (ctx->pc == 0x1F2814u) {
        ctx->pc = 0x1F2814u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        ctx->pc = 0x1F2818u;
        goto label_1f2818;
    }
    ctx->pc = 0x1F2810u;
    {
        const bool branch_taken_0x1f2810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2814u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x1f2810) {
            ctx->pc = 0x1F2824u;
            goto label_1f2824;
        }
    }
    ctx->pc = 0x1F2818u;
label_1f2818:
    // 0x1f2818: 0x44820000
    ctx->pc = 0x1f2818u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1f281c:
    // 0x1f281c: 0x0
    ctx->pc = 0x1f281cu;
    // NOP
label_1f2820:
    // 0x1f2820: 0x46010042
    ctx->pc = 0x1f2820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f2824:
    // 0x1f2824: 0xe4810460
    ctx->pc = 0x1f2824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1120), bits); }
label_1f2828:
    // 0x1f2828: 0x1000001a
label_1f282c:
    if (ctx->pc == 0x1F282Cu) {
        ctx->pc = 0x1F282Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1F2830u;
        goto label_1f2830;
    }
    ctx->pc = 0x1F2828u;
    {
        const bool branch_taken_0x1f2828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F282Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x1f2828) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F2830u;
label_1f2830:
    // 0x1f2830: 0x8ca20008
    ctx->pc = 0x1f2830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f2834:
    // 0x1f2834: 0x24030001
    ctx->pc = 0x1f2834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1f2838:
    // 0x1f2838: 0xac820464
    ctx->pc = 0x1f2838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 2));
label_1f283c:
    // 0x1f283c: 0x8ca2000c
    ctx->pc = 0x1f283cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1f2840:
    // 0x1f2840: 0xac820468
    ctx->pc = 0x1f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1128), GPR_U32(ctx, 2));
label_1f2844:
    // 0x1f2844: 0x8ca60010
    ctx->pc = 0x1f2844u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1f2848:
    // 0x1f2848: 0x14c30003
label_1f284c:
    if (ctx->pc == 0x1F284Cu) {
        ctx->pc = 0x1F284Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1F2850u;
        goto label_1f2850;
    }
    ctx->pc = 0x1F2848u;
    {
        const bool branch_taken_0x1f2848 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F284Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1f2848) {
            ctx->pc = 0x1F2858u;
            goto label_1f2858;
        }
    }
    ctx->pc = 0x1F2850u;
label_1f2850:
    // 0x1f2850: 0x1000000f
label_1f2854:
    if (ctx->pc == 0x1F2854u) {
        ctx->pc = 0x1F2854u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 3));
        ctx->pc = 0x1F2858u;
        goto label_1f2858;
    }
    ctx->pc = 0x1F2850u;
    {
        const bool branch_taken_0x1f2850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2854u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 3));
        if (branch_taken_0x1f2850) {
            ctx->pc = 0x1F2890u;
            goto label_1f2890;
        }
    }
    ctx->pc = 0x1F2858u;
label_1f2858:
    // 0x1f2858: 0x461821
    ctx->pc = 0x1f2858u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f285c:
    // 0x1f285c: 0x31080
    ctx->pc = 0x1f285cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_1f2860:
    // 0x1f2860: 0x621021
    ctx->pc = 0x1f2860u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2864:
    // 0x1f2864: 0x23040
    ctx->pc = 0x1f2864u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_1f2868:
    // 0x1f2868: 0x3c028888
    ctx->pc = 0x1f2868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_1f286c:
    // 0x1f286c: 0x34428889
    ctx->pc = 0x1f286cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
label_1f2870:
    // 0x1f2870: 0x460018
    ctx->pc = 0x1f2870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_1f2874:
    // 0x1f2874: 0x61fc2
    ctx->pc = 0x1f2874u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 31));
label_1f2878:
    // 0x1f2878: 0x0
    ctx->pc = 0x1f2878u;
    // NOP
label_1f287c:
    // 0x1f287c: 0x1010
    ctx->pc = 0x1f287cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_1f2880:
    // 0x1f2880: 0x461021
    ctx->pc = 0x1f2880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f2884:
    // 0x1f2884: 0x21143
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f2888:
    // 0x1f2888: 0x431821
    ctx->pc = 0x1f2888u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f288c:
    // 0x1f288c: 0xac83046c
    ctx->pc = 0x1f288cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 3));
label_1f2890:
    // 0x1f2890: 0x24a20014
    ctx->pc = 0x1f2890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 20));
label_1f2894:
    // 0x1f2894: 0x3e00008
label_1f2898:
    if (ctx->pc == 0x1F2898u) {
        ctx->pc = 0x1F289Cu;
        goto label_fallthrough_0x1f2894;
    }
    ctx->pc = 0x1F2894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F12F0u: goto label_1f12f0;
            case 0x1F12F4u: goto label_1f12f4;
            case 0x1F12F8u: goto label_1f12f8;
            case 0x1F12FCu: goto label_1f12fc;
            case 0x1F1300u: goto label_1f1300;
            case 0x1F1304u: goto label_1f1304;
            case 0x1F1308u: goto label_1f1308;
            case 0x1F130Cu: goto label_1f130c;
            case 0x1F1310u: goto label_1f1310;
            case 0x1F1314u: goto label_1f1314;
            case 0x1F1318u: goto label_1f1318;
            case 0x1F131Cu: goto label_1f131c;
            case 0x1F1320u: goto label_1f1320;
            case 0x1F1324u: goto label_1f1324;
            case 0x1F1328u: goto label_1f1328;
            case 0x1F132Cu: goto label_1f132c;
            case 0x1F1330u: goto label_1f1330;
            case 0x1F1334u: goto label_1f1334;
            case 0x1F1338u: goto label_1f1338;
            case 0x1F133Cu: goto label_1f133c;
            case 0x1F1340u: goto label_1f1340;
            case 0x1F1344u: goto label_1f1344;
            case 0x1F1348u: goto label_1f1348;
            case 0x1F134Cu: goto label_1f134c;
            case 0x1F1350u: goto label_1f1350;
            case 0x1F1354u: goto label_1f1354;
            case 0x1F1358u: goto label_1f1358;
            case 0x1F135Cu: goto label_1f135c;
            case 0x1F1360u: goto label_1f1360;
            case 0x1F1364u: goto label_1f1364;
            case 0x1F1368u: goto label_1f1368;
            case 0x1F136Cu: goto label_1f136c;
            case 0x1F1370u: goto label_1f1370;
            case 0x1F1374u: goto label_1f1374;
            case 0x1F1378u: goto label_1f1378;
            case 0x1F137Cu: goto label_1f137c;
            case 0x1F1380u: goto label_1f1380;
            case 0x1F1384u: goto label_1f1384;
            case 0x1F1388u: goto label_1f1388;
            case 0x1F138Cu: goto label_1f138c;
            case 0x1F1390u: goto label_1f1390;
            case 0x1F1394u: goto label_1f1394;
            case 0x1F1398u: goto label_1f1398;
            case 0x1F139Cu: goto label_1f139c;
            case 0x1F13A0u: goto label_1f13a0;
            case 0x1F13A4u: goto label_1f13a4;
            case 0x1F13A8u: goto label_1f13a8;
            case 0x1F13ACu: goto label_1f13ac;
            case 0x1F13B0u: goto label_1f13b0;
            case 0x1F13B4u: goto label_1f13b4;
            case 0x1F13B8u: goto label_1f13b8;
            case 0x1F13BCu: goto label_1f13bc;
            case 0x1F13C0u: goto label_1f13c0;
            case 0x1F13C4u: goto label_1f13c4;
            case 0x1F13C8u: goto label_1f13c8;
            case 0x1F13CCu: goto label_1f13cc;
            case 0x1F13D0u: goto label_1f13d0;
            case 0x1F13D4u: goto label_1f13d4;
            case 0x1F13D8u: goto label_1f13d8;
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13E0u: goto label_1f13e0;
            case 0x1F13E4u: goto label_1f13e4;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F13F0u: goto label_1f13f0;
            case 0x1F13F4u: goto label_1f13f4;
            case 0x1F13F8u: goto label_1f13f8;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F1400u: goto label_1f1400;
            case 0x1F1404u: goto label_1f1404;
            case 0x1F1408u: goto label_1f1408;
            case 0x1F140Cu: goto label_1f140c;
            case 0x1F1410u: goto label_1f1410;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F1420u: goto label_1f1420;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1428u: goto label_1f1428;
            case 0x1F142Cu: goto label_1f142c;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1434u: goto label_1f1434;
            case 0x1F1438u: goto label_1f1438;
            case 0x1F143Cu: goto label_1f143c;
            case 0x1F1440u: goto label_1f1440;
            case 0x1F1444u: goto label_1f1444;
            case 0x1F1448u: goto label_1f1448;
            case 0x1F144Cu: goto label_1f144c;
            case 0x1F1450u: goto label_1f1450;
            case 0x1F1454u: goto label_1f1454;
            case 0x1F1458u: goto label_1f1458;
            case 0x1F145Cu: goto label_1f145c;
            case 0x1F1460u: goto label_1f1460;
            case 0x1F1464u: goto label_1f1464;
            case 0x1F1468u: goto label_1f1468;
            case 0x1F146Cu: goto label_1f146c;
            case 0x1F1470u: goto label_1f1470;
            case 0x1F1474u: goto label_1f1474;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F147Cu: goto label_1f147c;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1484u: goto label_1f1484;
            case 0x1F1488u: goto label_1f1488;
            case 0x1F148Cu: goto label_1f148c;
            case 0x1F1490u: goto label_1f1490;
            case 0x1F1494u: goto label_1f1494;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F149Cu: goto label_1f149c;
            case 0x1F14A0u: goto label_1f14a0;
            case 0x1F14A4u: goto label_1f14a4;
            case 0x1F14A8u: goto label_1f14a8;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14B0u: goto label_1f14b0;
            case 0x1F14B4u: goto label_1f14b4;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14C0u: goto label_1f14c0;
            case 0x1F14C4u: goto label_1f14c4;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F14D4u: goto label_1f14d4;
            case 0x1F14D8u: goto label_1f14d8;
            case 0x1F14DCu: goto label_1f14dc;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14E4u: goto label_1f14e4;
            case 0x1F14E8u: goto label_1f14e8;
            case 0x1F14ECu: goto label_1f14ec;
            case 0x1F14F0u: goto label_1f14f0;
            case 0x1F14F4u: goto label_1f14f4;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F14FCu: goto label_1f14fc;
            case 0x1F1500u: goto label_1f1500;
            case 0x1F1504u: goto label_1f1504;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F150Cu: goto label_1f150c;
            case 0x1F1510u: goto label_1f1510;
            case 0x1F1514u: goto label_1f1514;
            case 0x1F1518u: goto label_1f1518;
            case 0x1F151Cu: goto label_1f151c;
            case 0x1F1520u: goto label_1f1520;
            case 0x1F1524u: goto label_1f1524;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F152Cu: goto label_1f152c;
            case 0x1F1530u: goto label_1f1530;
            case 0x1F1534u: goto label_1f1534;
            case 0x1F1538u: goto label_1f1538;
            case 0x1F153Cu: goto label_1f153c;
            case 0x1F1540u: goto label_1f1540;
            case 0x1F1544u: goto label_1f1544;
            case 0x1F1548u: goto label_1f1548;
            case 0x1F154Cu: goto label_1f154c;
            case 0x1F1550u: goto label_1f1550;
            case 0x1F1554u: goto label_1f1554;
            case 0x1F1558u: goto label_1f1558;
            case 0x1F155Cu: goto label_1f155c;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1564u: goto label_1f1564;
            case 0x1F1568u: goto label_1f1568;
            case 0x1F156Cu: goto label_1f156c;
            case 0x1F1570u: goto label_1f1570;
            case 0x1F1574u: goto label_1f1574;
            case 0x1F1578u: goto label_1f1578;
            case 0x1F157Cu: goto label_1f157c;
            case 0x1F1580u: goto label_1f1580;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F1588u: goto label_1f1588;
            case 0x1F158Cu: goto label_1f158c;
            case 0x1F1590u: goto label_1f1590;
            case 0x1F1594u: goto label_1f1594;
            case 0x1F1598u: goto label_1f1598;
            case 0x1F159Cu: goto label_1f159c;
            case 0x1F15A0u: goto label_1f15a0;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15A8u: goto label_1f15a8;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15B0u: goto label_1f15b0;
            case 0x1F15B4u: goto label_1f15b4;
            case 0x1F15B8u: goto label_1f15b8;
            case 0x1F15BCu: goto label_1f15bc;
            case 0x1F15C0u: goto label_1f15c0;
            case 0x1F15C4u: goto label_1f15c4;
            case 0x1F15C8u: goto label_1f15c8;
            case 0x1F15CCu: goto label_1f15cc;
            case 0x1F15D0u: goto label_1f15d0;
            case 0x1F15D4u: goto label_1f15d4;
            case 0x1F15D8u: goto label_1f15d8;
            case 0x1F15DCu: goto label_1f15dc;
            case 0x1F15E0u: goto label_1f15e0;
            case 0x1F15E4u: goto label_1f15e4;
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F15ECu: goto label_1f15ec;
            case 0x1F15F0u: goto label_1f15f0;
            case 0x1F15F4u: goto label_1f15f4;
            case 0x1F15F8u: goto label_1f15f8;
            case 0x1F15FCu: goto label_1f15fc;
            case 0x1F1600u: goto label_1f1600;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F160Cu: goto label_1f160c;
            case 0x1F1610u: goto label_1f1610;
            case 0x1F1614u: goto label_1f1614;
            case 0x1F1618u: goto label_1f1618;
            case 0x1F161Cu: goto label_1f161c;
            case 0x1F1620u: goto label_1f1620;
            case 0x1F1624u: goto label_1f1624;
            case 0x1F1628u: goto label_1f1628;
            case 0x1F162Cu: goto label_1f162c;
            case 0x1F1630u: goto label_1f1630;
            case 0x1F1634u: goto label_1f1634;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1640u: goto label_1f1640;
            case 0x1F1644u: goto label_1f1644;
            case 0x1F1648u: goto label_1f1648;
            case 0x1F164Cu: goto label_1f164c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F1654u: goto label_1f1654;
            case 0x1F1658u: goto label_1f1658;
            case 0x1F165Cu: goto label_1f165c;
            case 0x1F1660u: goto label_1f1660;
            case 0x1F1664u: goto label_1f1664;
            case 0x1F1668u: goto label_1f1668;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1670u: goto label_1f1670;
            case 0x1F1674u: goto label_1f1674;
            case 0x1F1678u: goto label_1f1678;
            case 0x1F167Cu: goto label_1f167c;
            case 0x1F1680u: goto label_1f1680;
            case 0x1F1684u: goto label_1f1684;
            case 0x1F1688u: goto label_1f1688;
            case 0x1F168Cu: goto label_1f168c;
            case 0x1F1690u: goto label_1f1690;
            case 0x1F1694u: goto label_1f1694;
            case 0x1F1698u: goto label_1f1698;
            case 0x1F169Cu: goto label_1f169c;
            case 0x1F16A0u: goto label_1f16a0;
            case 0x1F16A4u: goto label_1f16a4;
            case 0x1F16A8u: goto label_1f16a8;
            case 0x1F16ACu: goto label_1f16ac;
            case 0x1F16B0u: goto label_1f16b0;
            case 0x1F16B4u: goto label_1f16b4;
            case 0x1F16B8u: goto label_1f16b8;
            case 0x1F16BCu: goto label_1f16bc;
            case 0x1F16C0u: goto label_1f16c0;
            case 0x1F16C4u: goto label_1f16c4;
            case 0x1F16C8u: goto label_1f16c8;
            case 0x1F16CCu: goto label_1f16cc;
            case 0x1F16D0u: goto label_1f16d0;
            case 0x1F16D4u: goto label_1f16d4;
            case 0x1F16D8u: goto label_1f16d8;
            case 0x1F16DCu: goto label_1f16dc;
            case 0x1F16E0u: goto label_1f16e0;
            case 0x1F16E4u: goto label_1f16e4;
            case 0x1F16E8u: goto label_1f16e8;
            case 0x1F16ECu: goto label_1f16ec;
            case 0x1F16F0u: goto label_1f16f0;
            case 0x1F16F4u: goto label_1f16f4;
            case 0x1F16F8u: goto label_1f16f8;
            case 0x1F16FCu: goto label_1f16fc;
            case 0x1F1700u: goto label_1f1700;
            case 0x1F1704u: goto label_1f1704;
            case 0x1F1708u: goto label_1f1708;
            case 0x1F170Cu: goto label_1f170c;
            case 0x1F1710u: goto label_1f1710;
            case 0x1F1714u: goto label_1f1714;
            case 0x1F1718u: goto label_1f1718;
            case 0x1F171Cu: goto label_1f171c;
            case 0x1F1720u: goto label_1f1720;
            case 0x1F1724u: goto label_1f1724;
            case 0x1F1728u: goto label_1f1728;
            case 0x1F172Cu: goto label_1f172c;
            case 0x1F1730u: goto label_1f1730;
            case 0x1F1734u: goto label_1f1734;
            case 0x1F1738u: goto label_1f1738;
            case 0x1F173Cu: goto label_1f173c;
            case 0x1F1740u: goto label_1f1740;
            case 0x1F1744u: goto label_1f1744;
            case 0x1F1748u: goto label_1f1748;
            case 0x1F174Cu: goto label_1f174c;
            case 0x1F1750u: goto label_1f1750;
            case 0x1F1754u: goto label_1f1754;
            case 0x1F1758u: goto label_1f1758;
            case 0x1F175Cu: goto label_1f175c;
            case 0x1F1760u: goto label_1f1760;
            case 0x1F1764u: goto label_1f1764;
            case 0x1F1768u: goto label_1f1768;
            case 0x1F176Cu: goto label_1f176c;
            case 0x1F1770u: goto label_1f1770;
            case 0x1F1774u: goto label_1f1774;
            case 0x1F1778u: goto label_1f1778;
            case 0x1F177Cu: goto label_1f177c;
            case 0x1F1780u: goto label_1f1780;
            case 0x1F1784u: goto label_1f1784;
            case 0x1F1788u: goto label_1f1788;
            case 0x1F178Cu: goto label_1f178c;
            case 0x1F1790u: goto label_1f1790;
            case 0x1F1794u: goto label_1f1794;
            case 0x1F1798u: goto label_1f1798;
            case 0x1F179Cu: goto label_1f179c;
            case 0x1F17A0u: goto label_1f17a0;
            case 0x1F17A4u: goto label_1f17a4;
            case 0x1F17A8u: goto label_1f17a8;
            case 0x1F17ACu: goto label_1f17ac;
            case 0x1F17B0u: goto label_1f17b0;
            case 0x1F17B4u: goto label_1f17b4;
            case 0x1F17B8u: goto label_1f17b8;
            case 0x1F17BCu: goto label_1f17bc;
            case 0x1F17C0u: goto label_1f17c0;
            case 0x1F17C4u: goto label_1f17c4;
            case 0x1F17C8u: goto label_1f17c8;
            case 0x1F17CCu: goto label_1f17cc;
            case 0x1F17D0u: goto label_1f17d0;
            case 0x1F17D4u: goto label_1f17d4;
            case 0x1F17D8u: goto label_1f17d8;
            case 0x1F17DCu: goto label_1f17dc;
            case 0x1F17E0u: goto label_1f17e0;
            case 0x1F17E4u: goto label_1f17e4;
            case 0x1F17E8u: goto label_1f17e8;
            case 0x1F17ECu: goto label_1f17ec;
            case 0x1F17F0u: goto label_1f17f0;
            case 0x1F17F4u: goto label_1f17f4;
            case 0x1F17F8u: goto label_1f17f8;
            case 0x1F17FCu: goto label_1f17fc;
            case 0x1F1800u: goto label_1f1800;
            case 0x1F1804u: goto label_1f1804;
            case 0x1F1808u: goto label_1f1808;
            case 0x1F180Cu: goto label_1f180c;
            case 0x1F1810u: goto label_1f1810;
            case 0x1F1814u: goto label_1f1814;
            case 0x1F1818u: goto label_1f1818;
            case 0x1F181Cu: goto label_1f181c;
            case 0x1F1820u: goto label_1f1820;
            case 0x1F1824u: goto label_1f1824;
            case 0x1F1828u: goto label_1f1828;
            case 0x1F182Cu: goto label_1f182c;
            case 0x1F1830u: goto label_1f1830;
            case 0x1F1834u: goto label_1f1834;
            case 0x1F1838u: goto label_1f1838;
            case 0x1F183Cu: goto label_1f183c;
            case 0x1F1840u: goto label_1f1840;
            case 0x1F1844u: goto label_1f1844;
            case 0x1F1848u: goto label_1f1848;
            case 0x1F184Cu: goto label_1f184c;
            case 0x1F1850u: goto label_1f1850;
            case 0x1F1854u: goto label_1f1854;
            case 0x1F1858u: goto label_1f1858;
            case 0x1F185Cu: goto label_1f185c;
            case 0x1F1860u: goto label_1f1860;
            case 0x1F1864u: goto label_1f1864;
            case 0x1F1868u: goto label_1f1868;
            case 0x1F186Cu: goto label_1f186c;
            case 0x1F1870u: goto label_1f1870;
            case 0x1F1874u: goto label_1f1874;
            case 0x1F1878u: goto label_1f1878;
            case 0x1F187Cu: goto label_1f187c;
            case 0x1F1880u: goto label_1f1880;
            case 0x1F1884u: goto label_1f1884;
            case 0x1F1888u: goto label_1f1888;
            case 0x1F188Cu: goto label_1f188c;
            case 0x1F1890u: goto label_1f1890;
            case 0x1F1894u: goto label_1f1894;
            case 0x1F1898u: goto label_1f1898;
            case 0x1F189Cu: goto label_1f189c;
            case 0x1F18A0u: goto label_1f18a0;
            case 0x1F18A4u: goto label_1f18a4;
            case 0x1F18A8u: goto label_1f18a8;
            case 0x1F18ACu: goto label_1f18ac;
            case 0x1F18B0u: goto label_1f18b0;
            case 0x1F18B4u: goto label_1f18b4;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18BCu: goto label_1f18bc;
            case 0x1F18C0u: goto label_1f18c0;
            case 0x1F18C4u: goto label_1f18c4;
            case 0x1F18C8u: goto label_1f18c8;
            case 0x1F18CCu: goto label_1f18cc;
            case 0x1F18D0u: goto label_1f18d0;
            case 0x1F18D4u: goto label_1f18d4;
            case 0x1F18D8u: goto label_1f18d8;
            case 0x1F18DCu: goto label_1f18dc;
            case 0x1F18E0u: goto label_1f18e0;
            case 0x1F18E4u: goto label_1f18e4;
            case 0x1F18E8u: goto label_1f18e8;
            case 0x1F18ECu: goto label_1f18ec;
            case 0x1F18F0u: goto label_1f18f0;
            case 0x1F18F4u: goto label_1f18f4;
            case 0x1F18F8u: goto label_1f18f8;
            case 0x1F18FCu: goto label_1f18fc;
            case 0x1F1900u: goto label_1f1900;
            case 0x1F1904u: goto label_1f1904;
            case 0x1F1908u: goto label_1f1908;
            case 0x1F190Cu: goto label_1f190c;
            case 0x1F1910u: goto label_1f1910;
            case 0x1F1914u: goto label_1f1914;
            case 0x1F1918u: goto label_1f1918;
            case 0x1F191Cu: goto label_1f191c;
            case 0x1F1920u: goto label_1f1920;
            case 0x1F1924u: goto label_1f1924;
            case 0x1F1928u: goto label_1f1928;
            case 0x1F192Cu: goto label_1f192c;
            case 0x1F1930u: goto label_1f1930;
            case 0x1F1934u: goto label_1f1934;
            case 0x1F1938u: goto label_1f1938;
            case 0x1F193Cu: goto label_1f193c;
            case 0x1F1940u: goto label_1f1940;
            case 0x1F1944u: goto label_1f1944;
            case 0x1F1948u: goto label_1f1948;
            case 0x1F194Cu: goto label_1f194c;
            case 0x1F1950u: goto label_1f1950;
            case 0x1F1954u: goto label_1f1954;
            case 0x1F1958u: goto label_1f1958;
            case 0x1F195Cu: goto label_1f195c;
            case 0x1F1960u: goto label_1f1960;
            case 0x1F1964u: goto label_1f1964;
            case 0x1F1968u: goto label_1f1968;
            case 0x1F196Cu: goto label_1f196c;
            case 0x1F1970u: goto label_1f1970;
            case 0x1F1974u: goto label_1f1974;
            case 0x1F1978u: goto label_1f1978;
            case 0x1F197Cu: goto label_1f197c;
            case 0x1F1980u: goto label_1f1980;
            case 0x1F1984u: goto label_1f1984;
            case 0x1F1988u: goto label_1f1988;
            case 0x1F198Cu: goto label_1f198c;
            case 0x1F1990u: goto label_1f1990;
            case 0x1F1994u: goto label_1f1994;
            case 0x1F1998u: goto label_1f1998;
            case 0x1F199Cu: goto label_1f199c;
            case 0x1F19A0u: goto label_1f19a0;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            case 0x1F19ACu: goto label_1f19ac;
            case 0x1F19B0u: goto label_1f19b0;
            case 0x1F19B4u: goto label_1f19b4;
            case 0x1F19B8u: goto label_1f19b8;
            case 0x1F19BCu: goto label_1f19bc;
            case 0x1F19C0u: goto label_1f19c0;
            case 0x1F19C4u: goto label_1f19c4;
            case 0x1F19C8u: goto label_1f19c8;
            case 0x1F19CCu: goto label_1f19cc;
            case 0x1F19D0u: goto label_1f19d0;
            case 0x1F19D4u: goto label_1f19d4;
            case 0x1F19D8u: goto label_1f19d8;
            case 0x1F19DCu: goto label_1f19dc;
            case 0x1F19E0u: goto label_1f19e0;
            case 0x1F19E4u: goto label_1f19e4;
            case 0x1F19E8u: goto label_1f19e8;
            case 0x1F19ECu: goto label_1f19ec;
            case 0x1F19F0u: goto label_1f19f0;
            case 0x1F19F4u: goto label_1f19f4;
            case 0x1F19F8u: goto label_1f19f8;
            case 0x1F19FCu: goto label_1f19fc;
            case 0x1F1A00u: goto label_1f1a00;
            case 0x1F1A04u: goto label_1f1a04;
            case 0x1F1A08u: goto label_1f1a08;
            case 0x1F1A0Cu: goto label_1f1a0c;
            case 0x1F1A10u: goto label_1f1a10;
            case 0x1F1A14u: goto label_1f1a14;
            case 0x1F1A18u: goto label_1f1a18;
            case 0x1F1A1Cu: goto label_1f1a1c;
            case 0x1F1A20u: goto label_1f1a20;
            case 0x1F1A24u: goto label_1f1a24;
            case 0x1F1A28u: goto label_1f1a28;
            case 0x1F1A2Cu: goto label_1f1a2c;
            case 0x1F1A30u: goto label_1f1a30;
            case 0x1F1A34u: goto label_1f1a34;
            case 0x1F1A38u: goto label_1f1a38;
            case 0x1F1A3Cu: goto label_1f1a3c;
            case 0x1F1A40u: goto label_1f1a40;
            case 0x1F1A44u: goto label_1f1a44;
            case 0x1F1A48u: goto label_1f1a48;
            case 0x1F1A4Cu: goto label_1f1a4c;
            case 0x1F1A50u: goto label_1f1a50;
            case 0x1F1A54u: goto label_1f1a54;
            case 0x1F1A58u: goto label_1f1a58;
            case 0x1F1A5Cu: goto label_1f1a5c;
            case 0x1F1A60u: goto label_1f1a60;
            case 0x1F1A64u: goto label_1f1a64;
            case 0x1F1A68u: goto label_1f1a68;
            case 0x1F1A6Cu: goto label_1f1a6c;
            case 0x1F1A70u: goto label_1f1a70;
            case 0x1F1A74u: goto label_1f1a74;
            case 0x1F1A78u: goto label_1f1a78;
            case 0x1F1A7Cu: goto label_1f1a7c;
            case 0x1F1A80u: goto label_1f1a80;
            case 0x1F1A84u: goto label_1f1a84;
            case 0x1F1A88u: goto label_1f1a88;
            case 0x1F1A8Cu: goto label_1f1a8c;
            case 0x1F1A90u: goto label_1f1a90;
            case 0x1F1A94u: goto label_1f1a94;
            case 0x1F1A98u: goto label_1f1a98;
            case 0x1F1A9Cu: goto label_1f1a9c;
            case 0x1F1AA0u: goto label_1f1aa0;
            case 0x1F1AA4u: goto label_1f1aa4;
            case 0x1F1AA8u: goto label_1f1aa8;
            case 0x1F1AACu: goto label_1f1aac;
            case 0x1F1AB0u: goto label_1f1ab0;
            case 0x1F1AB4u: goto label_1f1ab4;
            case 0x1F1AB8u: goto label_1f1ab8;
            case 0x1F1ABCu: goto label_1f1abc;
            case 0x1F1AC0u: goto label_1f1ac0;
            case 0x1F1AC4u: goto label_1f1ac4;
            case 0x1F1AC8u: goto label_1f1ac8;
            case 0x1F1ACCu: goto label_1f1acc;
            case 0x1F1AD0u: goto label_1f1ad0;
            case 0x1F1AD4u: goto label_1f1ad4;
            case 0x1F1AD8u: goto label_1f1ad8;
            case 0x1F1ADCu: goto label_1f1adc;
            case 0x1F1AE0u: goto label_1f1ae0;
            case 0x1F1AE4u: goto label_1f1ae4;
            case 0x1F1AE8u: goto label_1f1ae8;
            case 0x1F1AECu: goto label_1f1aec;
            case 0x1F1AF0u: goto label_1f1af0;
            case 0x1F1AF4u: goto label_1f1af4;
            case 0x1F1AF8u: goto label_1f1af8;
            case 0x1F1AFCu: goto label_1f1afc;
            case 0x1F1B00u: goto label_1f1b00;
            case 0x1F1B04u: goto label_1f1b04;
            case 0x1F1B08u: goto label_1f1b08;
            case 0x1F1B0Cu: goto label_1f1b0c;
            case 0x1F1B10u: goto label_1f1b10;
            case 0x1F1B14u: goto label_1f1b14;
            case 0x1F1B18u: goto label_1f1b18;
            case 0x1F1B1Cu: goto label_1f1b1c;
            case 0x1F1B20u: goto label_1f1b20;
            case 0x1F1B24u: goto label_1f1b24;
            case 0x1F1B28u: goto label_1f1b28;
            case 0x1F1B2Cu: goto label_1f1b2c;
            case 0x1F1B30u: goto label_1f1b30;
            case 0x1F1B34u: goto label_1f1b34;
            case 0x1F1B38u: goto label_1f1b38;
            case 0x1F1B3Cu: goto label_1f1b3c;
            case 0x1F1B40u: goto label_1f1b40;
            case 0x1F1B44u: goto label_1f1b44;
            case 0x1F1B48u: goto label_1f1b48;
            case 0x1F1B4Cu: goto label_1f1b4c;
            case 0x1F1B50u: goto label_1f1b50;
            case 0x1F1B54u: goto label_1f1b54;
            case 0x1F1B58u: goto label_1f1b58;
            case 0x1F1B5Cu: goto label_1f1b5c;
            case 0x1F1B60u: goto label_1f1b60;
            case 0x1F1B64u: goto label_1f1b64;
            case 0x1F1B68u: goto label_1f1b68;
            case 0x1F1B6Cu: goto label_1f1b6c;
            case 0x1F1B70u: goto label_1f1b70;
            case 0x1F1B74u: goto label_1f1b74;
            case 0x1F1B78u: goto label_1f1b78;
            case 0x1F1B7Cu: goto label_1f1b7c;
            case 0x1F1B80u: goto label_1f1b80;
            case 0x1F1B84u: goto label_1f1b84;
            case 0x1F1B88u: goto label_1f1b88;
            case 0x1F1B8Cu: goto label_1f1b8c;
            case 0x1F1B90u: goto label_1f1b90;
            case 0x1F1B94u: goto label_1f1b94;
            case 0x1F1B98u: goto label_1f1b98;
            case 0x1F1B9Cu: goto label_1f1b9c;
            case 0x1F1BA0u: goto label_1f1ba0;
            case 0x1F1BA4u: goto label_1f1ba4;
            case 0x1F1BA8u: goto label_1f1ba8;
            case 0x1F1BACu: goto label_1f1bac;
            case 0x1F1BB0u: goto label_1f1bb0;
            case 0x1F1BB4u: goto label_1f1bb4;
            case 0x1F1BB8u: goto label_1f1bb8;
            case 0x1F1BBCu: goto label_1f1bbc;
            case 0x1F1BC0u: goto label_1f1bc0;
            case 0x1F1BC4u: goto label_1f1bc4;
            case 0x1F1BC8u: goto label_1f1bc8;
            case 0x1F1BCCu: goto label_1f1bcc;
            case 0x1F1BD0u: goto label_1f1bd0;
            case 0x1F1BD4u: goto label_1f1bd4;
            case 0x1F1BD8u: goto label_1f1bd8;
            case 0x1F1BDCu: goto label_1f1bdc;
            case 0x1F1BE0u: goto label_1f1be0;
            case 0x1F1BE4u: goto label_1f1be4;
            case 0x1F1BE8u: goto label_1f1be8;
            case 0x1F1BECu: goto label_1f1bec;
            case 0x1F1BF0u: goto label_1f1bf0;
            case 0x1F1BF4u: goto label_1f1bf4;
            case 0x1F1BF8u: goto label_1f1bf8;
            case 0x1F1BFCu: goto label_1f1bfc;
            case 0x1F1C00u: goto label_1f1c00;
            case 0x1F1C04u: goto label_1f1c04;
            case 0x1F1C08u: goto label_1f1c08;
            case 0x1F1C0Cu: goto label_1f1c0c;
            case 0x1F1C10u: goto label_1f1c10;
            case 0x1F1C14u: goto label_1f1c14;
            case 0x1F1C18u: goto label_1f1c18;
            case 0x1F1C1Cu: goto label_1f1c1c;
            case 0x1F1C20u: goto label_1f1c20;
            case 0x1F1C24u: goto label_1f1c24;
            case 0x1F1C28u: goto label_1f1c28;
            case 0x1F1C2Cu: goto label_1f1c2c;
            case 0x1F1C30u: goto label_1f1c30;
            case 0x1F1C34u: goto label_1f1c34;
            case 0x1F1C38u: goto label_1f1c38;
            case 0x1F1C3Cu: goto label_1f1c3c;
            case 0x1F1C40u: goto label_1f1c40;
            case 0x1F1C44u: goto label_1f1c44;
            case 0x1F1C48u: goto label_1f1c48;
            case 0x1F1C4Cu: goto label_1f1c4c;
            case 0x1F1C50u: goto label_1f1c50;
            case 0x1F1C54u: goto label_1f1c54;
            case 0x1F1C58u: goto label_1f1c58;
            case 0x1F1C5Cu: goto label_1f1c5c;
            case 0x1F1C60u: goto label_1f1c60;
            case 0x1F1C64u: goto label_1f1c64;
            case 0x1F1C68u: goto label_1f1c68;
            case 0x1F1C6Cu: goto label_1f1c6c;
            case 0x1F1C70u: goto label_1f1c70;
            case 0x1F1C74u: goto label_1f1c74;
            case 0x1F1C78u: goto label_1f1c78;
            case 0x1F1C7Cu: goto label_1f1c7c;
            case 0x1F1C80u: goto label_1f1c80;
            case 0x1F1C84u: goto label_1f1c84;
            case 0x1F1C88u: goto label_1f1c88;
            case 0x1F1C8Cu: goto label_1f1c8c;
            case 0x1F1C90u: goto label_1f1c90;
            case 0x1F1C94u: goto label_1f1c94;
            case 0x1F1C98u: goto label_1f1c98;
            case 0x1F1C9Cu: goto label_1f1c9c;
            case 0x1F1CA0u: goto label_1f1ca0;
            case 0x1F1CA4u: goto label_1f1ca4;
            case 0x1F1CA8u: goto label_1f1ca8;
            case 0x1F1CACu: goto label_1f1cac;
            case 0x1F1CB0u: goto label_1f1cb0;
            case 0x1F1CB4u: goto label_1f1cb4;
            case 0x1F1CB8u: goto label_1f1cb8;
            case 0x1F1CBCu: goto label_1f1cbc;
            case 0x1F1CC0u: goto label_1f1cc0;
            case 0x1F1CC4u: goto label_1f1cc4;
            case 0x1F1CC8u: goto label_1f1cc8;
            case 0x1F1CCCu: goto label_1f1ccc;
            case 0x1F1CD0u: goto label_1f1cd0;
            case 0x1F1CD4u: goto label_1f1cd4;
            case 0x1F1CD8u: goto label_1f1cd8;
            case 0x1F1CDCu: goto label_1f1cdc;
            case 0x1F1CE0u: goto label_1f1ce0;
            case 0x1F1CE4u: goto label_1f1ce4;
            case 0x1F1CE8u: goto label_1f1ce8;
            case 0x1F1CECu: goto label_1f1cec;
            case 0x1F1CF0u: goto label_1f1cf0;
            case 0x1F1CF4u: goto label_1f1cf4;
            case 0x1F1CF8u: goto label_1f1cf8;
            case 0x1F1CFCu: goto label_1f1cfc;
            case 0x1F1D00u: goto label_1f1d00;
            case 0x1F1D04u: goto label_1f1d04;
            case 0x1F1D08u: goto label_1f1d08;
            case 0x1F1D0Cu: goto label_1f1d0c;
            case 0x1F1D10u: goto label_1f1d10;
            case 0x1F1D14u: goto label_1f1d14;
            case 0x1F1D18u: goto label_1f1d18;
            case 0x1F1D1Cu: goto label_1f1d1c;
            case 0x1F1D20u: goto label_1f1d20;
            case 0x1F1D24u: goto label_1f1d24;
            case 0x1F1D28u: goto label_1f1d28;
            case 0x1F1D2Cu: goto label_1f1d2c;
            case 0x1F1D30u: goto label_1f1d30;
            case 0x1F1D34u: goto label_1f1d34;
            case 0x1F1D38u: goto label_1f1d38;
            case 0x1F1D3Cu: goto label_1f1d3c;
            case 0x1F1D40u: goto label_1f1d40;
            case 0x1F1D44u: goto label_1f1d44;
            case 0x1F1D48u: goto label_1f1d48;
            case 0x1F1D4Cu: goto label_1f1d4c;
            case 0x1F1D50u: goto label_1f1d50;
            case 0x1F1D54u: goto label_1f1d54;
            case 0x1F1D58u: goto label_1f1d58;
            case 0x1F1D5Cu: goto label_1f1d5c;
            case 0x1F1D60u: goto label_1f1d60;
            case 0x1F1D64u: goto label_1f1d64;
            case 0x1F1D68u: goto label_1f1d68;
            case 0x1F1D6Cu: goto label_1f1d6c;
            case 0x1F1D70u: goto label_1f1d70;
            case 0x1F1D74u: goto label_1f1d74;
            case 0x1F1D78u: goto label_1f1d78;
            case 0x1F1D7Cu: goto label_1f1d7c;
            case 0x1F1D80u: goto label_1f1d80;
            case 0x1F1D84u: goto label_1f1d84;
            case 0x1F1D88u: goto label_1f1d88;
            case 0x1F1D8Cu: goto label_1f1d8c;
            case 0x1F1D90u: goto label_1f1d90;
            case 0x1F1D94u: goto label_1f1d94;
            case 0x1F1D98u: goto label_1f1d98;
            case 0x1F1D9Cu: goto label_1f1d9c;
            case 0x1F1DA0u: goto label_1f1da0;
            case 0x1F1DA4u: goto label_1f1da4;
            case 0x1F1DA8u: goto label_1f1da8;
            case 0x1F1DACu: goto label_1f1dac;
            case 0x1F1DB0u: goto label_1f1db0;
            case 0x1F1DB4u: goto label_1f1db4;
            case 0x1F1DB8u: goto label_1f1db8;
            case 0x1F1DBCu: goto label_1f1dbc;
            case 0x1F1DC0u: goto label_1f1dc0;
            case 0x1F1DC4u: goto label_1f1dc4;
            case 0x1F1DC8u: goto label_1f1dc8;
            case 0x1F1DCCu: goto label_1f1dcc;
            case 0x1F1DD0u: goto label_1f1dd0;
            case 0x1F1DD4u: goto label_1f1dd4;
            case 0x1F1DD8u: goto label_1f1dd8;
            case 0x1F1DDCu: goto label_1f1ddc;
            case 0x1F1DE0u: goto label_1f1de0;
            case 0x1F1DE4u: goto label_1f1de4;
            case 0x1F1DE8u: goto label_1f1de8;
            case 0x1F1DECu: goto label_1f1dec;
            case 0x1F1DF0u: goto label_1f1df0;
            case 0x1F1DF4u: goto label_1f1df4;
            case 0x1F1DF8u: goto label_1f1df8;
            case 0x1F1DFCu: goto label_1f1dfc;
            case 0x1F1E00u: goto label_1f1e00;
            case 0x1F1E04u: goto label_1f1e04;
            case 0x1F1E08u: goto label_1f1e08;
            case 0x1F1E0Cu: goto label_1f1e0c;
            case 0x1F1E10u: goto label_1f1e10;
            case 0x1F1E14u: goto label_1f1e14;
            case 0x1F1E18u: goto label_1f1e18;
            case 0x1F1E1Cu: goto label_1f1e1c;
            case 0x1F1E20u: goto label_1f1e20;
            case 0x1F1E24u: goto label_1f1e24;
            case 0x1F1E28u: goto label_1f1e28;
            case 0x1F1E2Cu: goto label_1f1e2c;
            case 0x1F1E30u: goto label_1f1e30;
            case 0x1F1E34u: goto label_1f1e34;
            case 0x1F1E38u: goto label_1f1e38;
            case 0x1F1E3Cu: goto label_1f1e3c;
            case 0x1F1E40u: goto label_1f1e40;
            case 0x1F1E44u: goto label_1f1e44;
            case 0x1F1E48u: goto label_1f1e48;
            case 0x1F1E4Cu: goto label_1f1e4c;
            case 0x1F1E50u: goto label_1f1e50;
            case 0x1F1E54u: goto label_1f1e54;
            case 0x1F1E58u: goto label_1f1e58;
            case 0x1F1E5Cu: goto label_1f1e5c;
            case 0x1F1E60u: goto label_1f1e60;
            case 0x1F1E64u: goto label_1f1e64;
            case 0x1F1E68u: goto label_1f1e68;
            case 0x1F1E6Cu: goto label_1f1e6c;
            case 0x1F1E70u: goto label_1f1e70;
            case 0x1F1E74u: goto label_1f1e74;
            case 0x1F1E78u: goto label_1f1e78;
            case 0x1F1E7Cu: goto label_1f1e7c;
            case 0x1F1E80u: goto label_1f1e80;
            case 0x1F1E84u: goto label_1f1e84;
            case 0x1F1E88u: goto label_1f1e88;
            case 0x1F1E8Cu: goto label_1f1e8c;
            case 0x1F1E90u: goto label_1f1e90;
            case 0x1F1E94u: goto label_1f1e94;
            case 0x1F1E98u: goto label_1f1e98;
            case 0x1F1E9Cu: goto label_1f1e9c;
            case 0x1F1EA0u: goto label_1f1ea0;
            case 0x1F1EA4u: goto label_1f1ea4;
            case 0x1F1EA8u: goto label_1f1ea8;
            case 0x1F1EACu: goto label_1f1eac;
            case 0x1F1EB0u: goto label_1f1eb0;
            case 0x1F1EB4u: goto label_1f1eb4;
            case 0x1F1EB8u: goto label_1f1eb8;
            case 0x1F1EBCu: goto label_1f1ebc;
            case 0x1F1EC0u: goto label_1f1ec0;
            case 0x1F1EC4u: goto label_1f1ec4;
            case 0x1F1EC8u: goto label_1f1ec8;
            case 0x1F1ECCu: goto label_1f1ecc;
            case 0x1F1ED0u: goto label_1f1ed0;
            case 0x1F1ED4u: goto label_1f1ed4;
            case 0x1F1ED8u: goto label_1f1ed8;
            case 0x1F1EDCu: goto label_1f1edc;
            case 0x1F1EE0u: goto label_1f1ee0;
            case 0x1F1EE4u: goto label_1f1ee4;
            case 0x1F1EE8u: goto label_1f1ee8;
            case 0x1F1EECu: goto label_1f1eec;
            case 0x1F1EF0u: goto label_1f1ef0;
            case 0x1F1EF4u: goto label_1f1ef4;
            case 0x1F1EF8u: goto label_1f1ef8;
            case 0x1F1EFCu: goto label_1f1efc;
            case 0x1F1F00u: goto label_1f1f00;
            case 0x1F1F04u: goto label_1f1f04;
            case 0x1F1F08u: goto label_1f1f08;
            case 0x1F1F0Cu: goto label_1f1f0c;
            case 0x1F1F10u: goto label_1f1f10;
            case 0x1F1F14u: goto label_1f1f14;
            case 0x1F1F18u: goto label_1f1f18;
            case 0x1F1F1Cu: goto label_1f1f1c;
            case 0x1F1F20u: goto label_1f1f20;
            case 0x1F1F24u: goto label_1f1f24;
            case 0x1F1F28u: goto label_1f1f28;
            case 0x1F1F2Cu: goto label_1f1f2c;
            case 0x1F1F30u: goto label_1f1f30;
            case 0x1F1F34u: goto label_1f1f34;
            case 0x1F1F38u: goto label_1f1f38;
            case 0x1F1F3Cu: goto label_1f1f3c;
            case 0x1F1F40u: goto label_1f1f40;
            case 0x1F1F44u: goto label_1f1f44;
            case 0x1F1F48u: goto label_1f1f48;
            case 0x1F1F4Cu: goto label_1f1f4c;
            case 0x1F1F50u: goto label_1f1f50;
            case 0x1F1F54u: goto label_1f1f54;
            case 0x1F1F58u: goto label_1f1f58;
            case 0x1F1F5Cu: goto label_1f1f5c;
            case 0x1F1F60u: goto label_1f1f60;
            case 0x1F1F64u: goto label_1f1f64;
            case 0x1F1F68u: goto label_1f1f68;
            case 0x1F1F6Cu: goto label_1f1f6c;
            case 0x1F1F70u: goto label_1f1f70;
            case 0x1F1F74u: goto label_1f1f74;
            case 0x1F1F78u: goto label_1f1f78;
            case 0x1F1F7Cu: goto label_1f1f7c;
            case 0x1F1F80u: goto label_1f1f80;
            case 0x1F1F84u: goto label_1f1f84;
            case 0x1F1F88u: goto label_1f1f88;
            case 0x1F1F8Cu: goto label_1f1f8c;
            case 0x1F1F90u: goto label_1f1f90;
            case 0x1F1F94u: goto label_1f1f94;
            case 0x1F1F98u: goto label_1f1f98;
            case 0x1F1F9Cu: goto label_1f1f9c;
            case 0x1F1FA0u: goto label_1f1fa0;
            case 0x1F1FA4u: goto label_1f1fa4;
            case 0x1F1FA8u: goto label_1f1fa8;
            case 0x1F1FACu: goto label_1f1fac;
            case 0x1F1FB0u: goto label_1f1fb0;
            case 0x1F1FB4u: goto label_1f1fb4;
            case 0x1F1FB8u: goto label_1f1fb8;
            case 0x1F1FBCu: goto label_1f1fbc;
            case 0x1F1FC0u: goto label_1f1fc0;
            case 0x1F1FC4u: goto label_1f1fc4;
            case 0x1F1FC8u: goto label_1f1fc8;
            case 0x1F1FCCu: goto label_1f1fcc;
            case 0x1F1FD0u: goto label_1f1fd0;
            case 0x1F1FD4u: goto label_1f1fd4;
            case 0x1F1FD8u: goto label_1f1fd8;
            case 0x1F1FDCu: goto label_1f1fdc;
            case 0x1F1FE0u: goto label_1f1fe0;
            case 0x1F1FE4u: goto label_1f1fe4;
            case 0x1F1FE8u: goto label_1f1fe8;
            case 0x1F1FECu: goto label_1f1fec;
            case 0x1F1FF0u: goto label_1f1ff0;
            case 0x1F1FF4u: goto label_1f1ff4;
            case 0x1F1FF8u: goto label_1f1ff8;
            case 0x1F1FFCu: goto label_1f1ffc;
            case 0x1F2000u: goto label_1f2000;
            case 0x1F2004u: goto label_1f2004;
            case 0x1F2008u: goto label_1f2008;
            case 0x1F200Cu: goto label_1f200c;
            case 0x1F2010u: goto label_1f2010;
            case 0x1F2014u: goto label_1f2014;
            case 0x1F2018u: goto label_1f2018;
            case 0x1F201Cu: goto label_1f201c;
            case 0x1F2020u: goto label_1f2020;
            case 0x1F2024u: goto label_1f2024;
            case 0x1F2028u: goto label_1f2028;
            case 0x1F202Cu: goto label_1f202c;
            case 0x1F2030u: goto label_1f2030;
            case 0x1F2034u: goto label_1f2034;
            case 0x1F2038u: goto label_1f2038;
            case 0x1F203Cu: goto label_1f203c;
            case 0x1F2040u: goto label_1f2040;
            case 0x1F2044u: goto label_1f2044;
            case 0x1F2048u: goto label_1f2048;
            case 0x1F204Cu: goto label_1f204c;
            case 0x1F2050u: goto label_1f2050;
            case 0x1F2054u: goto label_1f2054;
            case 0x1F2058u: goto label_1f2058;
            case 0x1F205Cu: goto label_1f205c;
            case 0x1F2060u: goto label_1f2060;
            case 0x1F2064u: goto label_1f2064;
            case 0x1F2068u: goto label_1f2068;
            case 0x1F206Cu: goto label_1f206c;
            case 0x1F2070u: goto label_1f2070;
            case 0x1F2074u: goto label_1f2074;
            case 0x1F2078u: goto label_1f2078;
            case 0x1F207Cu: goto label_1f207c;
            case 0x1F2080u: goto label_1f2080;
            case 0x1F2084u: goto label_1f2084;
            case 0x1F2088u: goto label_1f2088;
            case 0x1F208Cu: goto label_1f208c;
            case 0x1F2090u: goto label_1f2090;
            case 0x1F2094u: goto label_1f2094;
            case 0x1F2098u: goto label_1f2098;
            case 0x1F209Cu: goto label_1f209c;
            case 0x1F20A0u: goto label_1f20a0;
            case 0x1F20A4u: goto label_1f20a4;
            case 0x1F20A8u: goto label_1f20a8;
            case 0x1F20ACu: goto label_1f20ac;
            case 0x1F20B0u: goto label_1f20b0;
            case 0x1F20B4u: goto label_1f20b4;
            case 0x1F20B8u: goto label_1f20b8;
            case 0x1F20BCu: goto label_1f20bc;
            case 0x1F20C0u: goto label_1f20c0;
            case 0x1F20C4u: goto label_1f20c4;
            case 0x1F20C8u: goto label_1f20c8;
            case 0x1F20CCu: goto label_1f20cc;
            case 0x1F20D0u: goto label_1f20d0;
            case 0x1F20D4u: goto label_1f20d4;
            case 0x1F20D8u: goto label_1f20d8;
            case 0x1F20DCu: goto label_1f20dc;
            case 0x1F20E0u: goto label_1f20e0;
            case 0x1F20E4u: goto label_1f20e4;
            case 0x1F20E8u: goto label_1f20e8;
            case 0x1F20ECu: goto label_1f20ec;
            case 0x1F20F0u: goto label_1f20f0;
            case 0x1F20F4u: goto label_1f20f4;
            case 0x1F20F8u: goto label_1f20f8;
            case 0x1F20FCu: goto label_1f20fc;
            case 0x1F2100u: goto label_1f2100;
            case 0x1F2104u: goto label_1f2104;
            case 0x1F2108u: goto label_1f2108;
            case 0x1F210Cu: goto label_1f210c;
            case 0x1F2110u: goto label_1f2110;
            case 0x1F2114u: goto label_1f2114;
            case 0x1F2118u: goto label_1f2118;
            case 0x1F211Cu: goto label_1f211c;
            case 0x1F2120u: goto label_1f2120;
            case 0x1F2124u: goto label_1f2124;
            case 0x1F2128u: goto label_1f2128;
            case 0x1F212Cu: goto label_1f212c;
            case 0x1F2130u: goto label_1f2130;
            case 0x1F2134u: goto label_1f2134;
            case 0x1F2138u: goto label_1f2138;
            case 0x1F213Cu: goto label_1f213c;
            case 0x1F2140u: goto label_1f2140;
            case 0x1F2144u: goto label_1f2144;
            case 0x1F2148u: goto label_1f2148;
            case 0x1F214Cu: goto label_1f214c;
            case 0x1F2150u: goto label_1f2150;
            case 0x1F2154u: goto label_1f2154;
            case 0x1F2158u: goto label_1f2158;
            case 0x1F215Cu: goto label_1f215c;
            case 0x1F2160u: goto label_1f2160;
            case 0x1F2164u: goto label_1f2164;
            case 0x1F2168u: goto label_1f2168;
            case 0x1F216Cu: goto label_1f216c;
            case 0x1F2170u: goto label_1f2170;
            case 0x1F2174u: goto label_1f2174;
            case 0x1F2178u: goto label_1f2178;
            case 0x1F217Cu: goto label_1f217c;
            case 0x1F2180u: goto label_1f2180;
            case 0x1F2184u: goto label_1f2184;
            case 0x1F2188u: goto label_1f2188;
            case 0x1F218Cu: goto label_1f218c;
            case 0x1F2190u: goto label_1f2190;
            case 0x1F2194u: goto label_1f2194;
            case 0x1F2198u: goto label_1f2198;
            case 0x1F219Cu: goto label_1f219c;
            case 0x1F21A0u: goto label_1f21a0;
            case 0x1F21A4u: goto label_1f21a4;
            case 0x1F21A8u: goto label_1f21a8;
            case 0x1F21ACu: goto label_1f21ac;
            case 0x1F21B0u: goto label_1f21b0;
            case 0x1F21B4u: goto label_1f21b4;
            case 0x1F21B8u: goto label_1f21b8;
            case 0x1F21BCu: goto label_1f21bc;
            case 0x1F21C0u: goto label_1f21c0;
            case 0x1F21C4u: goto label_1f21c4;
            case 0x1F21C8u: goto label_1f21c8;
            case 0x1F21CCu: goto label_1f21cc;
            case 0x1F21D0u: goto label_1f21d0;
            case 0x1F21D4u: goto label_1f21d4;
            case 0x1F21D8u: goto label_1f21d8;
            case 0x1F21DCu: goto label_1f21dc;
            case 0x1F21E0u: goto label_1f21e0;
            case 0x1F21E4u: goto label_1f21e4;
            case 0x1F21E8u: goto label_1f21e8;
            case 0x1F21ECu: goto label_1f21ec;
            case 0x1F21F0u: goto label_1f21f0;
            case 0x1F21F4u: goto label_1f21f4;
            case 0x1F21F8u: goto label_1f21f8;
            case 0x1F21FCu: goto label_1f21fc;
            case 0x1F2200u: goto label_1f2200;
            case 0x1F2204u: goto label_1f2204;
            case 0x1F2208u: goto label_1f2208;
            case 0x1F220Cu: goto label_1f220c;
            case 0x1F2210u: goto label_1f2210;
            case 0x1F2214u: goto label_1f2214;
            case 0x1F2218u: goto label_1f2218;
            case 0x1F221Cu: goto label_1f221c;
            case 0x1F2220u: goto label_1f2220;
            case 0x1F2224u: goto label_1f2224;
            case 0x1F2228u: goto label_1f2228;
            case 0x1F222Cu: goto label_1f222c;
            case 0x1F2230u: goto label_1f2230;
            case 0x1F2234u: goto label_1f2234;
            case 0x1F2238u: goto label_1f2238;
            case 0x1F223Cu: goto label_1f223c;
            case 0x1F2240u: goto label_1f2240;
            case 0x1F2244u: goto label_1f2244;
            case 0x1F2248u: goto label_1f2248;
            case 0x1F224Cu: goto label_1f224c;
            case 0x1F2250u: goto label_1f2250;
            case 0x1F2254u: goto label_1f2254;
            case 0x1F2258u: goto label_1f2258;
            case 0x1F225Cu: goto label_1f225c;
            case 0x1F2260u: goto label_1f2260;
            case 0x1F2264u: goto label_1f2264;
            case 0x1F2268u: goto label_1f2268;
            case 0x1F226Cu: goto label_1f226c;
            case 0x1F2270u: goto label_1f2270;
            case 0x1F2274u: goto label_1f2274;
            case 0x1F2278u: goto label_1f2278;
            case 0x1F227Cu: goto label_1f227c;
            case 0x1F2280u: goto label_1f2280;
            case 0x1F2284u: goto label_1f2284;
            case 0x1F2288u: goto label_1f2288;
            case 0x1F228Cu: goto label_1f228c;
            case 0x1F2290u: goto label_1f2290;
            case 0x1F2294u: goto label_1f2294;
            case 0x1F2298u: goto label_1f2298;
            case 0x1F229Cu: goto label_1f229c;
            case 0x1F22A0u: goto label_1f22a0;
            case 0x1F22A4u: goto label_1f22a4;
            case 0x1F22A8u: goto label_1f22a8;
            case 0x1F22ACu: goto label_1f22ac;
            case 0x1F22B0u: goto label_1f22b0;
            case 0x1F22B4u: goto label_1f22b4;
            case 0x1F22B8u: goto label_1f22b8;
            case 0x1F22BCu: goto label_1f22bc;
            case 0x1F22C0u: goto label_1f22c0;
            case 0x1F22C4u: goto label_1f22c4;
            case 0x1F22C8u: goto label_1f22c8;
            case 0x1F22CCu: goto label_1f22cc;
            case 0x1F22D0u: goto label_1f22d0;
            case 0x1F22D4u: goto label_1f22d4;
            case 0x1F22D8u: goto label_1f22d8;
            case 0x1F22DCu: goto label_1f22dc;
            case 0x1F22E0u: goto label_1f22e0;
            case 0x1F22E4u: goto label_1f22e4;
            case 0x1F22E8u: goto label_1f22e8;
            case 0x1F22ECu: goto label_1f22ec;
            case 0x1F22F0u: goto label_1f22f0;
            case 0x1F22F4u: goto label_1f22f4;
            case 0x1F22F8u: goto label_1f22f8;
            case 0x1F22FCu: goto label_1f22fc;
            case 0x1F2300u: goto label_1f2300;
            case 0x1F2304u: goto label_1f2304;
            case 0x1F2308u: goto label_1f2308;
            case 0x1F230Cu: goto label_1f230c;
            case 0x1F2310u: goto label_1f2310;
            case 0x1F2314u: goto label_1f2314;
            case 0x1F2318u: goto label_1f2318;
            case 0x1F231Cu: goto label_1f231c;
            case 0x1F2320u: goto label_1f2320;
            case 0x1F2324u: goto label_1f2324;
            case 0x1F2328u: goto label_1f2328;
            case 0x1F232Cu: goto label_1f232c;
            case 0x1F2330u: goto label_1f2330;
            case 0x1F2334u: goto label_1f2334;
            case 0x1F2338u: goto label_1f2338;
            case 0x1F233Cu: goto label_1f233c;
            case 0x1F2340u: goto label_1f2340;
            case 0x1F2344u: goto label_1f2344;
            case 0x1F2348u: goto label_1f2348;
            case 0x1F234Cu: goto label_1f234c;
            case 0x1F2350u: goto label_1f2350;
            case 0x1F2354u: goto label_1f2354;
            case 0x1F2358u: goto label_1f2358;
            case 0x1F235Cu: goto label_1f235c;
            case 0x1F2360u: goto label_1f2360;
            case 0x1F2364u: goto label_1f2364;
            case 0x1F2368u: goto label_1f2368;
            case 0x1F236Cu: goto label_1f236c;
            case 0x1F2370u: goto label_1f2370;
            case 0x1F2374u: goto label_1f2374;
            case 0x1F2378u: goto label_1f2378;
            case 0x1F237Cu: goto label_1f237c;
            case 0x1F2380u: goto label_1f2380;
            case 0x1F2384u: goto label_1f2384;
            case 0x1F2388u: goto label_1f2388;
            case 0x1F238Cu: goto label_1f238c;
            case 0x1F2390u: goto label_1f2390;
            case 0x1F2394u: goto label_1f2394;
            case 0x1F2398u: goto label_1f2398;
            case 0x1F239Cu: goto label_1f239c;
            case 0x1F23A0u: goto label_1f23a0;
            case 0x1F23A4u: goto label_1f23a4;
            case 0x1F23A8u: goto label_1f23a8;
            case 0x1F23ACu: goto label_1f23ac;
            case 0x1F23B0u: goto label_1f23b0;
            case 0x1F23B4u: goto label_1f23b4;
            case 0x1F23B8u: goto label_1f23b8;
            case 0x1F23BCu: goto label_1f23bc;
            case 0x1F23C0u: goto label_1f23c0;
            case 0x1F23C4u: goto label_1f23c4;
            case 0x1F23C8u: goto label_1f23c8;
            case 0x1F23CCu: goto label_1f23cc;
            case 0x1F23D0u: goto label_1f23d0;
            case 0x1F23D4u: goto label_1f23d4;
            case 0x1F23D8u: goto label_1f23d8;
            case 0x1F23DCu: goto label_1f23dc;
            case 0x1F23E0u: goto label_1f23e0;
            case 0x1F23E4u: goto label_1f23e4;
            case 0x1F23E8u: goto label_1f23e8;
            case 0x1F23ECu: goto label_1f23ec;
            case 0x1F23F0u: goto label_1f23f0;
            case 0x1F23F4u: goto label_1f23f4;
            case 0x1F23F8u: goto label_1f23f8;
            case 0x1F23FCu: goto label_1f23fc;
            case 0x1F2400u: goto label_1f2400;
            case 0x1F2404u: goto label_1f2404;
            case 0x1F2408u: goto label_1f2408;
            case 0x1F240Cu: goto label_1f240c;
            case 0x1F2410u: goto label_1f2410;
            case 0x1F2414u: goto label_1f2414;
            case 0x1F2418u: goto label_1f2418;
            case 0x1F241Cu: goto label_1f241c;
            case 0x1F2420u: goto label_1f2420;
            case 0x1F2424u: goto label_1f2424;
            case 0x1F2428u: goto label_1f2428;
            case 0x1F242Cu: goto label_1f242c;
            case 0x1F2430u: goto label_1f2430;
            case 0x1F2434u: goto label_1f2434;
            case 0x1F2438u: goto label_1f2438;
            case 0x1F243Cu: goto label_1f243c;
            case 0x1F2440u: goto label_1f2440;
            case 0x1F2444u: goto label_1f2444;
            case 0x1F2448u: goto label_1f2448;
            case 0x1F244Cu: goto label_1f244c;
            case 0x1F2450u: goto label_1f2450;
            case 0x1F2454u: goto label_1f2454;
            case 0x1F2458u: goto label_1f2458;
            case 0x1F245Cu: goto label_1f245c;
            case 0x1F2460u: goto label_1f2460;
            case 0x1F2464u: goto label_1f2464;
            case 0x1F2468u: goto label_1f2468;
            case 0x1F246Cu: goto label_1f246c;
            case 0x1F2470u: goto label_1f2470;
            case 0x1F2474u: goto label_1f2474;
            case 0x1F2478u: goto label_1f2478;
            case 0x1F247Cu: goto label_1f247c;
            case 0x1F2480u: goto label_1f2480;
            case 0x1F2484u: goto label_1f2484;
            case 0x1F2488u: goto label_1f2488;
            case 0x1F248Cu: goto label_1f248c;
            case 0x1F2490u: goto label_1f2490;
            case 0x1F2494u: goto label_1f2494;
            case 0x1F2498u: goto label_1f2498;
            case 0x1F249Cu: goto label_1f249c;
            case 0x1F24A0u: goto label_1f24a0;
            case 0x1F24A4u: goto label_1f24a4;
            case 0x1F24A8u: goto label_1f24a8;
            case 0x1F24ACu: goto label_1f24ac;
            case 0x1F24B0u: goto label_1f24b0;
            case 0x1F24B4u: goto label_1f24b4;
            case 0x1F24B8u: goto label_1f24b8;
            case 0x1F24BCu: goto label_1f24bc;
            case 0x1F24C0u: goto label_1f24c0;
            case 0x1F24C4u: goto label_1f24c4;
            case 0x1F24C8u: goto label_1f24c8;
            case 0x1F24CCu: goto label_1f24cc;
            case 0x1F24D0u: goto label_1f24d0;
            case 0x1F24D4u: goto label_1f24d4;
            case 0x1F24D8u: goto label_1f24d8;
            case 0x1F24DCu: goto label_1f24dc;
            case 0x1F24E0u: goto label_1f24e0;
            case 0x1F24E4u: goto label_1f24e4;
            case 0x1F24E8u: goto label_1f24e8;
            case 0x1F24ECu: goto label_1f24ec;
            case 0x1F24F0u: goto label_1f24f0;
            case 0x1F24F4u: goto label_1f24f4;
            case 0x1F24F8u: goto label_1f24f8;
            case 0x1F24FCu: goto label_1f24fc;
            case 0x1F2500u: goto label_1f2500;
            case 0x1F2504u: goto label_1f2504;
            case 0x1F2508u: goto label_1f2508;
            case 0x1F250Cu: goto label_1f250c;
            case 0x1F2510u: goto label_1f2510;
            case 0x1F2514u: goto label_1f2514;
            case 0x1F2518u: goto label_1f2518;
            case 0x1F251Cu: goto label_1f251c;
            case 0x1F2520u: goto label_1f2520;
            case 0x1F2524u: goto label_1f2524;
            case 0x1F2528u: goto label_1f2528;
            case 0x1F252Cu: goto label_1f252c;
            case 0x1F2530u: goto label_1f2530;
            case 0x1F2534u: goto label_1f2534;
            case 0x1F2538u: goto label_1f2538;
            case 0x1F253Cu: goto label_1f253c;
            case 0x1F2540u: goto label_1f2540;
            case 0x1F2544u: goto label_1f2544;
            case 0x1F2548u: goto label_1f2548;
            case 0x1F254Cu: goto label_1f254c;
            case 0x1F2550u: goto label_1f2550;
            case 0x1F2554u: goto label_1f2554;
            case 0x1F2558u: goto label_1f2558;
            case 0x1F255Cu: goto label_1f255c;
            case 0x1F2560u: goto label_1f2560;
            case 0x1F2564u: goto label_1f2564;
            case 0x1F2568u: goto label_1f2568;
            case 0x1F256Cu: goto label_1f256c;
            case 0x1F2570u: goto label_1f2570;
            case 0x1F2574u: goto label_1f2574;
            case 0x1F2578u: goto label_1f2578;
            case 0x1F257Cu: goto label_1f257c;
            case 0x1F2580u: goto label_1f2580;
            case 0x1F2584u: goto label_1f2584;
            case 0x1F2588u: goto label_1f2588;
            case 0x1F258Cu: goto label_1f258c;
            case 0x1F2590u: goto label_1f2590;
            case 0x1F2594u: goto label_1f2594;
            case 0x1F2598u: goto label_1f2598;
            case 0x1F259Cu: goto label_1f259c;
            case 0x1F25A0u: goto label_1f25a0;
            case 0x1F25A4u: goto label_1f25a4;
            case 0x1F25A8u: goto label_1f25a8;
            case 0x1F25ACu: goto label_1f25ac;
            case 0x1F25B0u: goto label_1f25b0;
            case 0x1F25B4u: goto label_1f25b4;
            case 0x1F25B8u: goto label_1f25b8;
            case 0x1F25BCu: goto label_1f25bc;
            case 0x1F25C0u: goto label_1f25c0;
            case 0x1F25C4u: goto label_1f25c4;
            case 0x1F25C8u: goto label_1f25c8;
            case 0x1F25CCu: goto label_1f25cc;
            case 0x1F25D0u: goto label_1f25d0;
            case 0x1F25D4u: goto label_1f25d4;
            case 0x1F25D8u: goto label_1f25d8;
            case 0x1F25DCu: goto label_1f25dc;
            case 0x1F25E0u: goto label_1f25e0;
            case 0x1F25E4u: goto label_1f25e4;
            case 0x1F25E8u: goto label_1f25e8;
            case 0x1F25ECu: goto label_1f25ec;
            case 0x1F25F0u: goto label_1f25f0;
            case 0x1F25F4u: goto label_1f25f4;
            case 0x1F25F8u: goto label_1f25f8;
            case 0x1F25FCu: goto label_1f25fc;
            case 0x1F2600u: goto label_1f2600;
            case 0x1F2604u: goto label_1f2604;
            case 0x1F2608u: goto label_1f2608;
            case 0x1F260Cu: goto label_1f260c;
            case 0x1F2610u: goto label_1f2610;
            case 0x1F2614u: goto label_1f2614;
            case 0x1F2618u: goto label_1f2618;
            case 0x1F261Cu: goto label_1f261c;
            case 0x1F2620u: goto label_1f2620;
            case 0x1F2624u: goto label_1f2624;
            case 0x1F2628u: goto label_1f2628;
            case 0x1F262Cu: goto label_1f262c;
            case 0x1F2630u: goto label_1f2630;
            case 0x1F2634u: goto label_1f2634;
            case 0x1F2638u: goto label_1f2638;
            case 0x1F263Cu: goto label_1f263c;
            case 0x1F2640u: goto label_1f2640;
            case 0x1F2644u: goto label_1f2644;
            case 0x1F2648u: goto label_1f2648;
            case 0x1F264Cu: goto label_1f264c;
            case 0x1F2650u: goto label_1f2650;
            case 0x1F2654u: goto label_1f2654;
            case 0x1F2658u: goto label_1f2658;
            case 0x1F265Cu: goto label_1f265c;
            case 0x1F2660u: goto label_1f2660;
            case 0x1F2664u: goto label_1f2664;
            case 0x1F2668u: goto label_1f2668;
            case 0x1F266Cu: goto label_1f266c;
            case 0x1F2670u: goto label_1f2670;
            case 0x1F2674u: goto label_1f2674;
            case 0x1F2678u: goto label_1f2678;
            case 0x1F267Cu: goto label_1f267c;
            case 0x1F2680u: goto label_1f2680;
            case 0x1F2684u: goto label_1f2684;
            case 0x1F2688u: goto label_1f2688;
            case 0x1F268Cu: goto label_1f268c;
            case 0x1F2690u: goto label_1f2690;
            case 0x1F2694u: goto label_1f2694;
            case 0x1F2698u: goto label_1f2698;
            case 0x1F269Cu: goto label_1f269c;
            case 0x1F26A0u: goto label_1f26a0;
            case 0x1F26A4u: goto label_1f26a4;
            case 0x1F26A8u: goto label_1f26a8;
            case 0x1F26ACu: goto label_1f26ac;
            case 0x1F26B0u: goto label_1f26b0;
            case 0x1F26B4u: goto label_1f26b4;
            case 0x1F26B8u: goto label_1f26b8;
            case 0x1F26BCu: goto label_1f26bc;
            case 0x1F26C0u: goto label_1f26c0;
            case 0x1F26C4u: goto label_1f26c4;
            case 0x1F26C8u: goto label_1f26c8;
            case 0x1F26CCu: goto label_1f26cc;
            case 0x1F26D0u: goto label_1f26d0;
            case 0x1F26D4u: goto label_1f26d4;
            case 0x1F26D8u: goto label_1f26d8;
            case 0x1F26DCu: goto label_1f26dc;
            case 0x1F26E0u: goto label_1f26e0;
            case 0x1F26E4u: goto label_1f26e4;
            case 0x1F26E8u: goto label_1f26e8;
            case 0x1F26ECu: goto label_1f26ec;
            case 0x1F26F0u: goto label_1f26f0;
            case 0x1F26F4u: goto label_1f26f4;
            case 0x1F26F8u: goto label_1f26f8;
            case 0x1F26FCu: goto label_1f26fc;
            case 0x1F2700u: goto label_1f2700;
            case 0x1F2704u: goto label_1f2704;
            case 0x1F2708u: goto label_1f2708;
            case 0x1F270Cu: goto label_1f270c;
            case 0x1F2710u: goto label_1f2710;
            case 0x1F2714u: goto label_1f2714;
            case 0x1F2718u: goto label_1f2718;
            case 0x1F271Cu: goto label_1f271c;
            case 0x1F2720u: goto label_1f2720;
            case 0x1F2724u: goto label_1f2724;
            case 0x1F2728u: goto label_1f2728;
            case 0x1F272Cu: goto label_1f272c;
            case 0x1F2730u: goto label_1f2730;
            case 0x1F2734u: goto label_1f2734;
            case 0x1F2738u: goto label_1f2738;
            case 0x1F273Cu: goto label_1f273c;
            case 0x1F2740u: goto label_1f2740;
            case 0x1F2744u: goto label_1f2744;
            case 0x1F2748u: goto label_1f2748;
            case 0x1F274Cu: goto label_1f274c;
            case 0x1F2750u: goto label_1f2750;
            case 0x1F2754u: goto label_1f2754;
            case 0x1F2758u: goto label_1f2758;
            case 0x1F275Cu: goto label_1f275c;
            case 0x1F2760u: goto label_1f2760;
            case 0x1F2764u: goto label_1f2764;
            case 0x1F2768u: goto label_1f2768;
            case 0x1F276Cu: goto label_1f276c;
            case 0x1F2770u: goto label_1f2770;
            case 0x1F2774u: goto label_1f2774;
            case 0x1F2778u: goto label_1f2778;
            case 0x1F277Cu: goto label_1f277c;
            case 0x1F2780u: goto label_1f2780;
            case 0x1F2784u: goto label_1f2784;
            case 0x1F2788u: goto label_1f2788;
            case 0x1F278Cu: goto label_1f278c;
            case 0x1F2790u: goto label_1f2790;
            case 0x1F2794u: goto label_1f2794;
            case 0x1F2798u: goto label_1f2798;
            case 0x1F279Cu: goto label_1f279c;
            case 0x1F27A0u: goto label_1f27a0;
            case 0x1F27A4u: goto label_1f27a4;
            case 0x1F27A8u: goto label_1f27a8;
            case 0x1F27ACu: goto label_1f27ac;
            case 0x1F27B0u: goto label_1f27b0;
            case 0x1F27B4u: goto label_1f27b4;
            case 0x1F27B8u: goto label_1f27b8;
            case 0x1F27BCu: goto label_1f27bc;
            case 0x1F27C0u: goto label_1f27c0;
            case 0x1F27C4u: goto label_1f27c4;
            case 0x1F27C8u: goto label_1f27c8;
            case 0x1F27CCu: goto label_1f27cc;
            case 0x1F27D0u: goto label_1f27d0;
            case 0x1F27D4u: goto label_1f27d4;
            case 0x1F27D8u: goto label_1f27d8;
            case 0x1F27DCu: goto label_1f27dc;
            case 0x1F27E0u: goto label_1f27e0;
            case 0x1F27E4u: goto label_1f27e4;
            case 0x1F27E8u: goto label_1f27e8;
            case 0x1F27ECu: goto label_1f27ec;
            case 0x1F27F0u: goto label_1f27f0;
            case 0x1F27F4u: goto label_1f27f4;
            case 0x1F27F8u: goto label_1f27f8;
            case 0x1F27FCu: goto label_1f27fc;
            case 0x1F2800u: goto label_1f2800;
            case 0x1F2804u: goto label_1f2804;
            case 0x1F2808u: goto label_1f2808;
            case 0x1F280Cu: goto label_1f280c;
            case 0x1F2810u: goto label_1f2810;
            case 0x1F2814u: goto label_1f2814;
            case 0x1F2818u: goto label_1f2818;
            case 0x1F281Cu: goto label_1f281c;
            case 0x1F2820u: goto label_1f2820;
            case 0x1F2824u: goto label_1f2824;
            case 0x1F2828u: goto label_1f2828;
            case 0x1F282Cu: goto label_1f282c;
            case 0x1F2830u: goto label_1f2830;
            case 0x1F2834u: goto label_1f2834;
            case 0x1F2838u: goto label_1f2838;
            case 0x1F283Cu: goto label_1f283c;
            case 0x1F2840u: goto label_1f2840;
            case 0x1F2844u: goto label_1f2844;
            case 0x1F2848u: goto label_1f2848;
            case 0x1F284Cu: goto label_1f284c;
            case 0x1F2850u: goto label_1f2850;
            case 0x1F2854u: goto label_1f2854;
            case 0x1F2858u: goto label_1f2858;
            case 0x1F285Cu: goto label_1f285c;
            case 0x1F2860u: goto label_1f2860;
            case 0x1F2864u: goto label_1f2864;
            case 0x1F2868u: goto label_1f2868;
            case 0x1F286Cu: goto label_1f286c;
            case 0x1F2870u: goto label_1f2870;
            case 0x1F2874u: goto label_1f2874;
            case 0x1F2878u: goto label_1f2878;
            case 0x1F287Cu: goto label_1f287c;
            case 0x1F2880u: goto label_1f2880;
            case 0x1F2884u: goto label_1f2884;
            case 0x1F2888u: goto label_1f2888;
            case 0x1F288Cu: goto label_1f288c;
            case 0x1F2890u: goto label_1f2890;
            case 0x1F2894u: goto label_1f2894;
            case 0x1F2898u: goto label_1f2898;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f2894:
    ctx->pc = 0x1F289Cu;
}
