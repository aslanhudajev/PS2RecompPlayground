#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSendExitRegs
// Address: 0x2c13e8 - 0x2c14b4
void pbBlitSendExitRegs_0x2c13e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c13e8u;

    // 0x2c13e8: 0x3c020036
    ctx->pc = 0x2c13e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c13ec: 0x8c46dee0
    ctx->pc = 0x2c13ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c13f0: 0x8cc70008
    ctx->pc = 0x2c13f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c13f4: 0x3c020037
    ctx->pc = 0x2c13f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c13f8: 0x2403ffff
    ctx->pc = 0x2c13f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c13fc: 0xac4331a0
    ctx->pc = 0x2c13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12704), GPR_U32(ctx, 3));
    // 0x2c1400: 0x3c020037
    ctx->pc = 0x2c1400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1404: 0xac4331a4
    ctx->pc = 0x2c1404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12708), GPR_U32(ctx, 3));
    // 0x2c1408: 0x3c020037
    ctx->pc = 0x2c1408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c140c: 0xac4331a8
    ctx->pc = 0x2c140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12712), GPR_U32(ctx, 3));
    // 0x2c1410: 0x3c050037
    ctx->pc = 0x2c1410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2c1414: 0x8ca22970
    ctx->pc = 0x2c1414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10608)));
    // 0x2c1418: 0x3c031000
    ctx->pc = 0x2c1418u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c141c: 0x34630004
    ctx->pc = 0x2c141cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c1420: 0xac430000
    ctx->pc = 0x2c1420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1424: 0x24420004
    ctx->pc = 0x2c1424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1428: 0xac400000
    ctx->pc = 0x2c1428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c142c: 0x24420004
    ctx->pc = 0x2c142cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1430: 0x3c041000
    ctx->pc = 0x2c1430u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2c1434: 0xac440000
    ctx->pc = 0x2c1434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c1438: 0x24420004
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c143c: 0x3c035000
    ctx->pc = 0x2c143cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2c1440: 0x34630004
    ctx->pc = 0x2c1440u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c1444: 0xac430000
    ctx->pc = 0x2c1444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1448: 0x24420004
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c144c: 0x34038003
    ctx->pc = 0x2c144cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32771));
    // 0x2c1450: 0xac430000
    ctx->pc = 0x2c1450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1454: 0x24420004
    ctx->pc = 0x2c1454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1458: 0xac440000
    ctx->pc = 0x2c1458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c145c: 0x24420004
    ctx->pc = 0x2c145cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1460: 0x2403000e
    ctx->pc = 0x2c1460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c1464: 0xac430000
    ctx->pc = 0x2c1464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1468: 0x24420004
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c146c: 0xac400000
    ctx->pc = 0x2c146cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c1470: 0x24420004
    ctx->pc = 0x2c1470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1474: 0x24030005
    ctx->pc = 0x2c1474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c1478: 0xfc430000
    ctx->pc = 0x2c1478u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2c147c: 0x24030008
    ctx->pc = 0x2c147cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1480: 0xfc430008
    ctx->pc = 0x2c1480u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2c1484: 0xdce30040
    ctx->pc = 0x2c1484u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2c1488: 0xfc430010
    ctx->pc = 0x2c1488u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2c148c: 0x24030018
    ctx->pc = 0x2c148cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c1490: 0xfc430018
    ctx->pc = 0x2c1490u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x2c1494: 0x8cc30004
    ctx->pc = 0x2c1494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c1498: 0xdc630010
    ctx->pc = 0x2c1498u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c149c: 0xfc430020
    ctx->pc = 0x2c149cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x2c14a0: 0x24030040
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c14a4: 0xfc430028
    ctx->pc = 0x2c14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x2c14a8: 0x24420030
    ctx->pc = 0x2c14a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c14ac: 0x3e00008
    ctx->pc = 0x2C14ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C14B0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 10608), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C14B4u;
}
