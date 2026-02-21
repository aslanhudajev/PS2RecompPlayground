#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSetupDrawRegs
// Address: 0x2c15a8 - 0x2c17fc
void pbBlitSetupDrawRegs_0x2c15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c15a8u;

    // 0x2c15a8: 0x27bdffc0
    ctx->pc = 0x2c15a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c15ac: 0xffbf0030
    ctx->pc = 0x2c15acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c15b0: 0xffb20020
    ctx->pc = 0x2c15b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c15b4: 0xffb10010
    ctx->pc = 0x2c15b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c15b8: 0xffb00000
    ctx->pc = 0x2c15b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c15bc: 0x80802d
    ctx->pc = 0x2c15bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15c0: 0x3c020036
    ctx->pc = 0x2c15c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c15c4: 0x8c51dee0
    ctx->pc = 0x2c15c4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c15c8: 0x8e320008
    ctx->pc = 0x2c15c8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c15cc: 0x282d
    ctx->pc = 0x2c15ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15d0: 0xc0becc6
    ctx->pc = 0x2C15D0u;
    SET_GPR_U32(ctx, 31, 0x2C15D8u);
    ctx->pc = 0x2C15D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C15D8u; }
    }
    if (ctx->pc != 0x2C15D8u) { return; }
    ctx->pc = 0x2C15D8u;
    // 0x2c15d8: 0xde020000
    ctx->pc = 0x2c15d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c15dc: 0x24038000
    ctx->pc = 0x2c15dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2c15e0: 0x431024
    ctx->pc = 0x2c15e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c15e4: 0x24030005
    ctx->pc = 0x2c15e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c15e8: 0x431025
    ctx->pc = 0x2c15e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c15ec: 0x34038000
    ctx->pc = 0x2c15ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2c15f0: 0x431025
    ctx->pc = 0x2c15f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c15f4: 0x2403bfff
    ctx->pc = 0x2c15f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2c15f8: 0x31c38
    ctx->pc = 0x2c15f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c15fc: 0x3463ffff
    ctx->pc = 0x2c15fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1600: 0x31c38
    ctx->pc = 0x2c1600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1604: 0x3463ffff
    ctx->pc = 0x2c1604u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1608: 0x431024
    ctx->pc = 0x2c1608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c160c: 0x3c03fc00
    ctx->pc = 0x2c160cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64512 << 16));
    // 0x2c1610: 0x34637fff
    ctx->pc = 0x2c1610u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x2c1614: 0x31c38
    ctx->pc = 0x2c1614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1618: 0x3463ffff
    ctx->pc = 0x2c1618u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c161c: 0x31c38
    ctx->pc = 0x2c161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1620: 0x3463ffff
    ctx->pc = 0x2c1620u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1624: 0x431024
    ctx->pc = 0x2c1624u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1628: 0x3c03f3ff
    ctx->pc = 0x2c1628u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62463 << 16));
    // 0x2c162c: 0x3463ffff
    ctx->pc = 0x2c162cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1630: 0x31c38
    ctx->pc = 0x2c1630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1634: 0x3463ffff
    ctx->pc = 0x2c1634u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1638: 0x31c38
    ctx->pc = 0x2c1638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c163c: 0x3463ffff
    ctx->pc = 0x2c163cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1640: 0x431024
    ctx->pc = 0x2c1640u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1644: 0x2403ffff
    ctx->pc = 0x2c1644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1648: 0x3193a
    ctx->pc = 0x2c1648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2c164c: 0x431024
    ctx->pc = 0x2c164cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1650: 0x34038000
    ctx->pc = 0x2c1650u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2c1654: 0x31b7c
    ctx->pc = 0x2c1654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2c1658: 0x431025
    ctx->pc = 0x2c1658u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c165c: 0xfe020000
    ctx->pc = 0x2c165cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2c1660: 0xde020008
    ctx->pc = 0x2c1660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c1664: 0x2403fff0
    ctx->pc = 0x2c1664u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c1668: 0x431024
    ctx->pc = 0x2c1668u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c166c: 0x2403000e
    ctx->pc = 0x2c166cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c1670: 0x431025
    ctx->pc = 0x2c1670u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1674: 0xfe020008
    ctx->pc = 0x2c1674u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2c1678: 0xde020010
    ctx->pc = 0x2c1678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c167c: 0x2403fffe
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c1680: 0x431024
    ctx->pc = 0x2c1680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1684: 0x2403ffe3
    ctx->pc = 0x2c1684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2c1688: 0x431024
    ctx->pc = 0x2c1688u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c168c: 0xfe020010
    ctx->pc = 0x2c168cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2c1690: 0x8e230048
    ctx->pc = 0x2c1690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2c1694: 0x8c630370
    ctx->pc = 0x2c1694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x2c1698: 0x24050001
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c169c: 0x30630001
    ctx->pc = 0x2c169cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2c16a0: 0x31978
    ctx->pc = 0x2c16a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x2c16a4: 0x2404ffdf
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2c16a8: 0x441024
    ctx->pc = 0x2c16a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c16ac: 0x431025
    ctx->pc = 0x2c16acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c16b0: 0xfe020010
    ctx->pc = 0x2c16b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2c16b4: 0x8e230048
    ctx->pc = 0x2c16b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2c16b8: 0x8c63036c
    ctx->pc = 0x2c16b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x2c16bc: 0x30630001
    ctx->pc = 0x2c16bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2c16c0: 0x319b8
    ctx->pc = 0x2c16c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x2c16c4: 0x2404fe3f
    ctx->pc = 0x2c16c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x2c16c8: 0x441024
    ctx->pc = 0x2c16c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c16cc: 0x431025
    ctx->pc = 0x2c16ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c16d0: 0x2403fdff
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2c16d4: 0x431024
    ctx->pc = 0x2c16d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c16d8: 0x3c03ffe7
    ctx->pc = 0x2c16d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65511 << 16));
    // 0x2c16dc: 0x3463ffff
    ctx->pc = 0x2c16dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c16e0: 0x431024
    ctx->pc = 0x2c16e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c16e4: 0x2403f000
    ctx->pc = 0x2c16e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2c16e8: 0x31c38
    ctx->pc = 0x2c16e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c16ec: 0x3463ffff
    ctx->pc = 0x2c16ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c16f0: 0x31c38
    ctx->pc = 0x2c16f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c16f4: 0x3463ffff
    ctx->pc = 0x2c16f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c16f8: 0x431024
    ctx->pc = 0x2c16f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c16fc: 0xfe020010
    ctx->pc = 0x2c16fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2c1700: 0xde020020
    ctx->pc = 0x2c1700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c1704: 0x2403fffc
    ctx->pc = 0x2c1704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2c1708: 0x431024
    ctx->pc = 0x2c1708u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c170c: 0x2403fff3
    ctx->pc = 0x2c170cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2c1710: 0x431024
    ctx->pc = 0x2c1710u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1714: 0x24030004
    ctx->pc = 0x2c1714u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1718: 0x431025
    ctx->pc = 0x2c1718u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c171c: 0x2403ffcf
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2c1720: 0x431024
    ctx->pc = 0x2c1720u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1724: 0x2403ff3f
    ctx->pc = 0x2c1724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2c1728: 0x431024
    ctx->pc = 0x2c1728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c172c: 0x24030040
    ctx->pc = 0x2c172cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c1730: 0x431025
    ctx->pc = 0x2c1730u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1734: 0xfe020020
    ctx->pc = 0x2c1734u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2c1738: 0xa2000024
    ctx->pc = 0x2c1738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c173c: 0xde020030
    ctx->pc = 0x2c173cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c1740: 0x451025
    ctx->pc = 0x2c1740u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c1744: 0x2403fff1
    ctx->pc = 0x2c1744u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x2c1748: 0x431024
    ctx->pc = 0x2c1748u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c174c: 0x2403000c
    ctx->pc = 0x2c174cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1750: 0x431025
    ctx->pc = 0x2c1750u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1754: 0x2403f00f
    ctx->pc = 0x2c1754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2c1758: 0x431024
    ctx->pc = 0x2c1758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c175c: 0x24030010
    ctx->pc = 0x2c175cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c1760: 0x431025
    ctx->pc = 0x2c1760u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1764: 0x2403cfff
    ctx->pc = 0x2c1764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x2c1768: 0x431024
    ctx->pc = 0x2c1768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c176c: 0x2403bfff
    ctx->pc = 0x2c176cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2c1770: 0x431024
    ctx->pc = 0x2c1770u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1774: 0x3c03ffff
    ctx->pc = 0x2c1774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c1778: 0x34637fff
    ctx->pc = 0x2c1778u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x2c177c: 0x431024
    ctx->pc = 0x2c177cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1780: 0x3c030001
    ctx->pc = 0x2c1780u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2c1784: 0x431025
    ctx->pc = 0x2c1784u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1788: 0x3c03fff9
    ctx->pc = 0x2c1788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65529 << 16));
    // 0x2c178c: 0x3463ffff
    ctx->pc = 0x2c178cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1790: 0x431024
    ctx->pc = 0x2c1790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1794: 0x3c030004
    ctx->pc = 0x2c1794u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x2c1798: 0x431025
    ctx->pc = 0x2c1798u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c179c: 0xfe020030
    ctx->pc = 0x2c179cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x2c17a0: 0xde420070
    ctx->pc = 0x2c17a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2c17a4: 0xfe020040
    ctx->pc = 0x2c17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2c17a8: 0x3c02ff00
    ctx->pc = 0x2c17a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x2c17ac: 0xae020044
    ctx->pc = 0x2c17acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2c17b0: 0xde420080
    ctx->pc = 0x2c17b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2c17b4: 0xfe020050
    ctx->pc = 0x2c17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x2c17b8: 0x24020014
    ctx->pc = 0x2c17b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c17bc: 0xfe020018
    ctx->pc = 0x2c17bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2c17c0: 0x24020042
    ctx->pc = 0x2c17c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 66));
    // 0x2c17c4: 0xfe020028
    ctx->pc = 0x2c17c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x2c17c8: 0x24020047
    ctx->pc = 0x2c17c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2c17cc: 0xfe020038
    ctx->pc = 0x2c17ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x2c17d0: 0x2402004c
    ctx->pc = 0x2c17d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x2c17d4: 0xfe020048
    ctx->pc = 0x2c17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2c17d8: 0x2402004e
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 78));
    // 0x2c17dc: 0xfe020058
    ctx->pc = 0x2c17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x2c17e0: 0x200102d
    ctx->pc = 0x2c17e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17e4: 0xdfbf0030
    ctx->pc = 0x2c17e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c17e8: 0xdfb20020
    ctx->pc = 0x2c17e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c17ec: 0xdfb10010
    ctx->pc = 0x2c17ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c17f0: 0xdfb00000
    ctx->pc = 0x2c17f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c17f4: 0x3e00008
    ctx->pc = 0x2C17F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C17F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C17FCu;
}
