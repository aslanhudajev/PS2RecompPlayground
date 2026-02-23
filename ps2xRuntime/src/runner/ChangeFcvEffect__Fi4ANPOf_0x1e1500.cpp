#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChangeFcvEffect__Fi4ANPOf
// Address: 0x1e1500 - 0x1e1654
void ChangeFcvEffect__Fi4ANPOf_0x1e1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChangeFcvEffect__Fi4ANPOf");


    ctx->pc = 0x1e1500u;

label_1e1500:
    // 0x1e1500: 0x27bdffd0
    ctx->pc = 0x1e1500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1504:
    // 0x1e1504: 0x7fbf0000
    ctx->pc = 0x1e1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1e1508:
    // 0x1e1508: 0xc4a30000
    ctx->pc = 0x1e1508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e150c:
    // 0x1e150c: 0xc4a20004
    ctx->pc = 0x1e150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e1510:
    // 0x1e1510: 0xc4a10008
    ctx->pc = 0x1e1510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e1514:
    // 0x1e1514: 0xc4a0000c
    ctx->pc = 0x1e1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e1518:
    // 0x1e1518: 0x27a20010
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
label_1e151c:
    // 0x1e151c: 0x24030026
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 38));
label_1e1520:
    // 0x1e1520: 0xe4430000
    ctx->pc = 0x1e1520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1e1524:
    // 0x1e1524: 0xe4420004
    ctx->pc = 0x1e1524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1e1528:
    // 0x1e1528: 0xe4410008
    ctx->pc = 0x1e1528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e152c:
    // 0x1e152c: 0xe440000c
    ctx->pc = 0x1e152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e1530:
    // 0x1e1530: 0xc4a10010
    ctx->pc = 0x1e1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e1534:
    // 0x1e1534: 0xc4a00014
    ctx->pc = 0x1e1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e1538:
    // 0x1e1538: 0xe4410010
    ctx->pc = 0x1e1538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1e153c:
    // 0x1e153c: 0x14830020
label_1e1540:
    if (ctx->pc == 0x1E1540u) {
        ctx->pc = 0x1E1540u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->pc = 0x1E1544u;
        goto label_1e1544;
    }
    ctx->pc = 0x1E153Cu;
    {
        const bool branch_taken_0x1e153c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E1540u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        if (branch_taken_0x1e153c) {
            ctx->pc = 0x1E15C0u;
            goto label_1e15c0;
        }
    }
    ctx->pc = 0x1E1544u;
label_1e1544:
    // 0x1e1544: 0x3c010050
    ctx->pc = 0x1e1544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e1548:
    // 0x1e1548: 0x8424e504
    ctx->pc = 0x1e1548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1e154c:
    // 0x1e154c: 0x2403000a
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_1e1550:
    // 0x1e1550: 0x5483003d
label_1e1554:
    if (ctx->pc == 0x1E1554u) {
        ctx->pc = 0x1E1554u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E1558u;
        goto label_1e1558;
    }
    ctx->pc = 0x1E1550u;
    {
        const bool branch_taken_0x1e1550 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e1550) {
            ctx->pc = 0x1E1554u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1E1648u;
            goto label_1e1648;
        }
    }
    ctx->pc = 0x1E1558u;
label_1e1558:
    // 0x1e1558: 0x8f848bcc
    ctx->pc = 0x1e1558u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_1e155c:
    // 0x1e155c: 0x24030001
    ctx->pc = 0x1e155cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e1560:
    // 0x1e1560: 0x14830038
label_1e1564:
    if (ctx->pc == 0x1E1564u) {
        ctx->pc = 0x1E1564u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1E1568u;
        goto label_1e1568;
    }
    ctx->pc = 0x1E1560u;
    {
        const bool branch_taken_0x1e1560 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E1564u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e1560) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E1568u;
label_1e1568:
    // 0x1e1568: 0x8c23dd24
    ctx->pc = 0x1e1568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294958372)));
label_1e156c:
    // 0x1e156c: 0x2c610007
    ctx->pc = 0x1e156cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_1e1570:
    // 0x1e1570: 0x10200034
label_1e1574:
    if (ctx->pc == 0x1E1574u) {
        ctx->pc = 0x1E1574u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1E1578u;
        goto label_1e1578;
    }
    ctx->pc = 0x1E1570u;
    {
        const bool branch_taken_0x1e1570 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1574u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1e1570) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E1578u;
label_1e1578:
    // 0x1e1578: 0x31880
    ctx->pc = 0x1e1578u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1e157c:
    // 0x1e157c: 0x2484f4a0
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964384));
label_1e1580:
    // 0x1e1580: 0x641821
    ctx->pc = 0x1e1580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e1584:
    // 0x1e1584: 0x8c630000
    ctx->pc = 0x1e1584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e1588:
    // 0x1e1588: 0x600008
label_1e158c:
    if (ctx->pc == 0x1E158Cu) {
        ctx->pc = 0x1E1590u;
        goto label_1e1590;
    }
    ctx->pc = 0x1E1588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1500u: goto label_1e1500;
            case 0x1E1504u: goto label_1e1504;
            case 0x1E1508u: goto label_1e1508;
            case 0x1E150Cu: goto label_1e150c;
            case 0x1E1510u: goto label_1e1510;
            case 0x1E1514u: goto label_1e1514;
            case 0x1E1518u: goto label_1e1518;
            case 0x1E151Cu: goto label_1e151c;
            case 0x1E1520u: goto label_1e1520;
            case 0x1E1524u: goto label_1e1524;
            case 0x1E1528u: goto label_1e1528;
            case 0x1E152Cu: goto label_1e152c;
            case 0x1E1530u: goto label_1e1530;
            case 0x1E1534u: goto label_1e1534;
            case 0x1E1538u: goto label_1e1538;
            case 0x1E153Cu: goto label_1e153c;
            case 0x1E1540u: goto label_1e1540;
            case 0x1E1544u: goto label_1e1544;
            case 0x1E1548u: goto label_1e1548;
            case 0x1E154Cu: goto label_1e154c;
            case 0x1E1550u: goto label_1e1550;
            case 0x1E1554u: goto label_1e1554;
            case 0x1E1558u: goto label_1e1558;
            case 0x1E155Cu: goto label_1e155c;
            case 0x1E1560u: goto label_1e1560;
            case 0x1E1564u: goto label_1e1564;
            case 0x1E1568u: goto label_1e1568;
            case 0x1E156Cu: goto label_1e156c;
            case 0x1E1570u: goto label_1e1570;
            case 0x1E1574u: goto label_1e1574;
            case 0x1E1578u: goto label_1e1578;
            case 0x1E157Cu: goto label_1e157c;
            case 0x1E1580u: goto label_1e1580;
            case 0x1E1584u: goto label_1e1584;
            case 0x1E1588u: goto label_1e1588;
            case 0x1E158Cu: goto label_1e158c;
            case 0x1E1590u: goto label_1e1590;
            case 0x1E1594u: goto label_1e1594;
            case 0x1E1598u: goto label_1e1598;
            case 0x1E159Cu: goto label_1e159c;
            case 0x1E15A0u: goto label_1e15a0;
            case 0x1E15A4u: goto label_1e15a4;
            case 0x1E15A8u: goto label_1e15a8;
            case 0x1E15ACu: goto label_1e15ac;
            case 0x1E15B0u: goto label_1e15b0;
            case 0x1E15B4u: goto label_1e15b4;
            case 0x1E15B8u: goto label_1e15b8;
            case 0x1E15BCu: goto label_1e15bc;
            case 0x1E15C0u: goto label_1e15c0;
            case 0x1E15C4u: goto label_1e15c4;
            case 0x1E15C8u: goto label_1e15c8;
            case 0x1E15CCu: goto label_1e15cc;
            case 0x1E15D0u: goto label_1e15d0;
            case 0x1E15D4u: goto label_1e15d4;
            case 0x1E15D8u: goto label_1e15d8;
            case 0x1E15DCu: goto label_1e15dc;
            case 0x1E15E0u: goto label_1e15e0;
            case 0x1E15E4u: goto label_1e15e4;
            case 0x1E15E8u: goto label_1e15e8;
            case 0x1E15ECu: goto label_1e15ec;
            case 0x1E15F0u: goto label_1e15f0;
            case 0x1E15F4u: goto label_1e15f4;
            case 0x1E15F8u: goto label_1e15f8;
            case 0x1E15FCu: goto label_1e15fc;
            case 0x1E1600u: goto label_1e1600;
            case 0x1E1604u: goto label_1e1604;
            case 0x1E1608u: goto label_1e1608;
            case 0x1E160Cu: goto label_1e160c;
            case 0x1E1610u: goto label_1e1610;
            case 0x1E1614u: goto label_1e1614;
            case 0x1E1618u: goto label_1e1618;
            case 0x1E161Cu: goto label_1e161c;
            case 0x1E1620u: goto label_1e1620;
            case 0x1E1624u: goto label_1e1624;
            case 0x1E1628u: goto label_1e1628;
            case 0x1E162Cu: goto label_1e162c;
            case 0x1E1630u: goto label_1e1630;
            case 0x1E1634u: goto label_1e1634;
            case 0x1E1638u: goto label_1e1638;
            case 0x1E163Cu: goto label_1e163c;
            case 0x1E1640u: goto label_1e1640;
            case 0x1E1644u: goto label_1e1644;
            case 0x1E1648u: goto label_1e1648;
            case 0x1E164Cu: goto label_1e164c;
            case 0x1E1650u: goto label_1e1650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1590u;
label_1e1590:
    // 0x1e1590: 0x3c010050
    ctx->pc = 0x1e1590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e1594:
    // 0x1e1594: 0x8024fc80
    ctx->pc = 0x1e1594u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966400)));
label_1e1598:
    // 0x1e1598: 0x2403000e
    ctx->pc = 0x1e1598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
label_1e159c:
    // 0x1e159c: 0x14830029
label_1e15a0:
    if (ctx->pc == 0x1E15A0u) {
        ctx->pc = 0x1E15A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E15A4u;
        goto label_1e15a4;
    }
    ctx->pc = 0x1E159Cu;
    {
        const bool branch_taken_0x1e159c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E15A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e159c) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E15A4u;
label_1e15a4:
    // 0x1e15a4: 0x3c023f4c
    ctx->pc = 0x1e15a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
label_1e15a8:
    // 0x1e15a8: 0x3442cccd
    ctx->pc = 0x1e15a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1e15ac:
    // 0x1e15ac: 0x44826000
    ctx->pc = 0x1e15acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_1e15b0:
    // 0x1e15b0: 0xc24b3cc
label_1e15b4:
    if (ctx->pc == 0x1E15B4u) {
        ctx->pc = 0x1E15B8u;
        goto label_1e15b8;
    }
    ctx->pc = 0x1E15B0u;
    SET_GPR_U32(ctx, 31, 0x1E15B8u);
    ctx->pc = 0x92CF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        TyakudanLauncherMgrBorn__F4ANPOf_0x92cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15B8u; }
        else if (ctx->pc != 0x1E15B8u) { ctx->pc = 0x1E15B8u; }
    }
    if (ctx->pc != 0x1E15B8u) { return; }
    ctx->pc = 0x1E15B8u;
label_1e15b8:
    // 0x1e15b8: 0x10000023
label_1e15bc:
    if (ctx->pc == 0x1E15BCu) {
        ctx->pc = 0x1E15BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E15C0u;
        goto label_1e15c0;
    }
    ctx->pc = 0x1E15B8u;
    {
        const bool branch_taken_0x1e15b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E15BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e15b8) {
            ctx->pc = 0x1E1648u;
            goto label_1e1648;
        }
    }
    ctx->pc = 0x1E15C0u;
label_1e15c0:
    // 0x1e15c0: 0x24030027
    ctx->pc = 0x1e15c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
label_1e15c4:
    // 0x1e15c4: 0x1483001f
label_1e15c8:
    if (ctx->pc == 0x1E15C8u) {
        ctx->pc = 0x1E15C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1E15CCu;
        goto label_1e15cc;
    }
    ctx->pc = 0x1E15C4u;
    {
        const bool branch_taken_0x1e15c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E15C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e15c4) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E15CCu;
label_1e15cc:
    // 0x1e15cc: 0x8424e504
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1e15d0:
    // 0x1e15d0: 0x2403000a
    ctx->pc = 0x1e15d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_1e15d4:
    // 0x1e15d4: 0x1483001b
label_1e15d8:
    if (ctx->pc == 0x1E15D8u) {
        ctx->pc = 0x1E15DCu;
        goto label_1e15dc;
    }
    ctx->pc = 0x1E15D4u;
    {
        const bool branch_taken_0x1e15d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e15d4) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E15DCu;
label_1e15dc:
    // 0x1e15dc: 0x8f848bcc
    ctx->pc = 0x1e15dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_1e15e0:
    // 0x1e15e0: 0x24030001
    ctx->pc = 0x1e15e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e15e4:
    // 0x1e15e4: 0x14830017
label_1e15e8:
    if (ctx->pc == 0x1E15E8u) {
        ctx->pc = 0x1E15E8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        ctx->pc = 0x1E15ECu;
        goto label_1e15ec;
    }
    ctx->pc = 0x1E15E4u;
    {
        const bool branch_taken_0x1e15e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E15E8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e15e4) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E15ECu;
label_1e15ec:
    // 0x1e15ec: 0x8c23e06c
    ctx->pc = 0x1e15ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294959212)));
label_1e15f0:
    // 0x1e15f0: 0x2c610007
    ctx->pc = 0x1e15f0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_1e15f4:
    // 0x1e15f4: 0x10200013
label_1e15f8:
    if (ctx->pc == 0x1E15F8u) {
        ctx->pc = 0x1E15F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1E15FCu;
        goto label_1e15fc;
    }
    ctx->pc = 0x1E15F4u;
    {
        const bool branch_taken_0x1e15f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E15F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1e15f4) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E15FCu;
label_1e15fc:
    // 0x1e15fc: 0x31880
    ctx->pc = 0x1e15fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1e1600:
    // 0x1e1600: 0x2484f480
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964352));
label_1e1604:
    // 0x1e1604: 0x641821
    ctx->pc = 0x1e1604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e1608:
    // 0x1e1608: 0x8c630000
    ctx->pc = 0x1e1608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e160c:
    // 0x1e160c: 0x600008
label_1e1610:
    if (ctx->pc == 0x1E1610u) {
        ctx->pc = 0x1E1614u;
        goto label_1e1614;
    }
    ctx->pc = 0x1E160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1500u: goto label_1e1500;
            case 0x1E1504u: goto label_1e1504;
            case 0x1E1508u: goto label_1e1508;
            case 0x1E150Cu: goto label_1e150c;
            case 0x1E1510u: goto label_1e1510;
            case 0x1E1514u: goto label_1e1514;
            case 0x1E1518u: goto label_1e1518;
            case 0x1E151Cu: goto label_1e151c;
            case 0x1E1520u: goto label_1e1520;
            case 0x1E1524u: goto label_1e1524;
            case 0x1E1528u: goto label_1e1528;
            case 0x1E152Cu: goto label_1e152c;
            case 0x1E1530u: goto label_1e1530;
            case 0x1E1534u: goto label_1e1534;
            case 0x1E1538u: goto label_1e1538;
            case 0x1E153Cu: goto label_1e153c;
            case 0x1E1540u: goto label_1e1540;
            case 0x1E1544u: goto label_1e1544;
            case 0x1E1548u: goto label_1e1548;
            case 0x1E154Cu: goto label_1e154c;
            case 0x1E1550u: goto label_1e1550;
            case 0x1E1554u: goto label_1e1554;
            case 0x1E1558u: goto label_1e1558;
            case 0x1E155Cu: goto label_1e155c;
            case 0x1E1560u: goto label_1e1560;
            case 0x1E1564u: goto label_1e1564;
            case 0x1E1568u: goto label_1e1568;
            case 0x1E156Cu: goto label_1e156c;
            case 0x1E1570u: goto label_1e1570;
            case 0x1E1574u: goto label_1e1574;
            case 0x1E1578u: goto label_1e1578;
            case 0x1E157Cu: goto label_1e157c;
            case 0x1E1580u: goto label_1e1580;
            case 0x1E1584u: goto label_1e1584;
            case 0x1E1588u: goto label_1e1588;
            case 0x1E158Cu: goto label_1e158c;
            case 0x1E1590u: goto label_1e1590;
            case 0x1E1594u: goto label_1e1594;
            case 0x1E1598u: goto label_1e1598;
            case 0x1E159Cu: goto label_1e159c;
            case 0x1E15A0u: goto label_1e15a0;
            case 0x1E15A4u: goto label_1e15a4;
            case 0x1E15A8u: goto label_1e15a8;
            case 0x1E15ACu: goto label_1e15ac;
            case 0x1E15B0u: goto label_1e15b0;
            case 0x1E15B4u: goto label_1e15b4;
            case 0x1E15B8u: goto label_1e15b8;
            case 0x1E15BCu: goto label_1e15bc;
            case 0x1E15C0u: goto label_1e15c0;
            case 0x1E15C4u: goto label_1e15c4;
            case 0x1E15C8u: goto label_1e15c8;
            case 0x1E15CCu: goto label_1e15cc;
            case 0x1E15D0u: goto label_1e15d0;
            case 0x1E15D4u: goto label_1e15d4;
            case 0x1E15D8u: goto label_1e15d8;
            case 0x1E15DCu: goto label_1e15dc;
            case 0x1E15E0u: goto label_1e15e0;
            case 0x1E15E4u: goto label_1e15e4;
            case 0x1E15E8u: goto label_1e15e8;
            case 0x1E15ECu: goto label_1e15ec;
            case 0x1E15F0u: goto label_1e15f0;
            case 0x1E15F4u: goto label_1e15f4;
            case 0x1E15F8u: goto label_1e15f8;
            case 0x1E15FCu: goto label_1e15fc;
            case 0x1E1600u: goto label_1e1600;
            case 0x1E1604u: goto label_1e1604;
            case 0x1E1608u: goto label_1e1608;
            case 0x1E160Cu: goto label_1e160c;
            case 0x1E1610u: goto label_1e1610;
            case 0x1E1614u: goto label_1e1614;
            case 0x1E1618u: goto label_1e1618;
            case 0x1E161Cu: goto label_1e161c;
            case 0x1E1620u: goto label_1e1620;
            case 0x1E1624u: goto label_1e1624;
            case 0x1E1628u: goto label_1e1628;
            case 0x1E162Cu: goto label_1e162c;
            case 0x1E1630u: goto label_1e1630;
            case 0x1E1634u: goto label_1e1634;
            case 0x1E1638u: goto label_1e1638;
            case 0x1E163Cu: goto label_1e163c;
            case 0x1E1640u: goto label_1e1640;
            case 0x1E1644u: goto label_1e1644;
            case 0x1E1648u: goto label_1e1648;
            case 0x1E164Cu: goto label_1e164c;
            case 0x1E1650u: goto label_1e1650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1614u;
label_1e1614:
    // 0x1e1614: 0x3c010050
    ctx->pc = 0x1e1614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e1618:
    // 0x1e1618: 0x8024fc84
    ctx->pc = 0x1e1618u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966404)));
label_1e161c:
    // 0x1e161c: 0x2403000e
    ctx->pc = 0x1e161cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
label_1e1620:
    // 0x1e1620: 0x14830008
label_1e1624:
    if (ctx->pc == 0x1E1624u) {
        ctx->pc = 0x1E1624u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E1628u;
        goto label_1e1628;
    }
    ctx->pc = 0x1E1620u;
    {
        const bool branch_taken_0x1e1620 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E1624u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1620) {
            ctx->pc = 0x1E1644u;
            goto label_1e1644;
        }
    }
    ctx->pc = 0x1E1628u;
label_1e1628:
    // 0x1e1628: 0x3c023f4c
    ctx->pc = 0x1e1628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
label_1e162c:
    // 0x1e162c: 0x3442cccd
    ctx->pc = 0x1e162cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_1e1630:
    // 0x1e1630: 0x44826000
    ctx->pc = 0x1e1630u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_1e1634:
    // 0x1e1634: 0xc24b3cc
label_1e1638:
    if (ctx->pc == 0x1E1638u) {
        ctx->pc = 0x1E163Cu;
        goto label_1e163c;
    }
    ctx->pc = 0x1E1634u;
    SET_GPR_U32(ctx, 31, 0x1E163Cu);
    ctx->pc = 0x92CF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        TyakudanLauncherMgrBorn__F4ANPOf_0x92cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E163Cu; }
        else if (ctx->pc != 0x1E163Cu) { ctx->pc = 0x1E163Cu; }
    }
    if (ctx->pc != 0x1E163Cu) { return; }
    ctx->pc = 0x1E163Cu;
label_1e163c:
    // 0x1e163c: 0x10000002
label_1e1640:
    if (ctx->pc == 0x1E1640u) {
        ctx->pc = 0x1E1640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E1644u;
        goto label_1e1644;
    }
    ctx->pc = 0x1E163Cu;
    {
        const bool branch_taken_0x1e163c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e163c) {
            ctx->pc = 0x1E1648u;
            goto label_1e1648;
        }
    }
    ctx->pc = 0x1E1644u;
label_1e1644:
    // 0x1e1644: 0x70001628
    ctx->pc = 0x1e1644u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e1648:
    // 0x1e1648: 0x7bbf0000
    ctx->pc = 0x1e1648u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e164c:
    // 0x1e164c: 0x3e00008
label_1e1650:
    if (ctx->pc == 0x1E1650u) {
        ctx->pc = 0x1E1650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E1654u;
        goto label_fallthrough_0x1e164c;
    }
    ctx->pc = 0x1E164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1500u: goto label_1e1500;
            case 0x1E1504u: goto label_1e1504;
            case 0x1E1508u: goto label_1e1508;
            case 0x1E150Cu: goto label_1e150c;
            case 0x1E1510u: goto label_1e1510;
            case 0x1E1514u: goto label_1e1514;
            case 0x1E1518u: goto label_1e1518;
            case 0x1E151Cu: goto label_1e151c;
            case 0x1E1520u: goto label_1e1520;
            case 0x1E1524u: goto label_1e1524;
            case 0x1E1528u: goto label_1e1528;
            case 0x1E152Cu: goto label_1e152c;
            case 0x1E1530u: goto label_1e1530;
            case 0x1E1534u: goto label_1e1534;
            case 0x1E1538u: goto label_1e1538;
            case 0x1E153Cu: goto label_1e153c;
            case 0x1E1540u: goto label_1e1540;
            case 0x1E1544u: goto label_1e1544;
            case 0x1E1548u: goto label_1e1548;
            case 0x1E154Cu: goto label_1e154c;
            case 0x1E1550u: goto label_1e1550;
            case 0x1E1554u: goto label_1e1554;
            case 0x1E1558u: goto label_1e1558;
            case 0x1E155Cu: goto label_1e155c;
            case 0x1E1560u: goto label_1e1560;
            case 0x1E1564u: goto label_1e1564;
            case 0x1E1568u: goto label_1e1568;
            case 0x1E156Cu: goto label_1e156c;
            case 0x1E1570u: goto label_1e1570;
            case 0x1E1574u: goto label_1e1574;
            case 0x1E1578u: goto label_1e1578;
            case 0x1E157Cu: goto label_1e157c;
            case 0x1E1580u: goto label_1e1580;
            case 0x1E1584u: goto label_1e1584;
            case 0x1E1588u: goto label_1e1588;
            case 0x1E158Cu: goto label_1e158c;
            case 0x1E1590u: goto label_1e1590;
            case 0x1E1594u: goto label_1e1594;
            case 0x1E1598u: goto label_1e1598;
            case 0x1E159Cu: goto label_1e159c;
            case 0x1E15A0u: goto label_1e15a0;
            case 0x1E15A4u: goto label_1e15a4;
            case 0x1E15A8u: goto label_1e15a8;
            case 0x1E15ACu: goto label_1e15ac;
            case 0x1E15B0u: goto label_1e15b0;
            case 0x1E15B4u: goto label_1e15b4;
            case 0x1E15B8u: goto label_1e15b8;
            case 0x1E15BCu: goto label_1e15bc;
            case 0x1E15C0u: goto label_1e15c0;
            case 0x1E15C4u: goto label_1e15c4;
            case 0x1E15C8u: goto label_1e15c8;
            case 0x1E15CCu: goto label_1e15cc;
            case 0x1E15D0u: goto label_1e15d0;
            case 0x1E15D4u: goto label_1e15d4;
            case 0x1E15D8u: goto label_1e15d8;
            case 0x1E15DCu: goto label_1e15dc;
            case 0x1E15E0u: goto label_1e15e0;
            case 0x1E15E4u: goto label_1e15e4;
            case 0x1E15E8u: goto label_1e15e8;
            case 0x1E15ECu: goto label_1e15ec;
            case 0x1E15F0u: goto label_1e15f0;
            case 0x1E15F4u: goto label_1e15f4;
            case 0x1E15F8u: goto label_1e15f8;
            case 0x1E15FCu: goto label_1e15fc;
            case 0x1E1600u: goto label_1e1600;
            case 0x1E1604u: goto label_1e1604;
            case 0x1E1608u: goto label_1e1608;
            case 0x1E160Cu: goto label_1e160c;
            case 0x1E1610u: goto label_1e1610;
            case 0x1E1614u: goto label_1e1614;
            case 0x1E1618u: goto label_1e1618;
            case 0x1E161Cu: goto label_1e161c;
            case 0x1E1620u: goto label_1e1620;
            case 0x1E1624u: goto label_1e1624;
            case 0x1E1628u: goto label_1e1628;
            case 0x1E162Cu: goto label_1e162c;
            case 0x1E1630u: goto label_1e1630;
            case 0x1E1634u: goto label_1e1634;
            case 0x1E1638u: goto label_1e1638;
            case 0x1E163Cu: goto label_1e163c;
            case 0x1E1640u: goto label_1e1640;
            case 0x1E1644u: goto label_1e1644;
            case 0x1E1648u: goto label_1e1648;
            case 0x1E164Cu: goto label_1e164c;
            case 0x1E1650u: goto label_1e1650;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e164c:
    ctx->pc = 0x1E1654u;
}
