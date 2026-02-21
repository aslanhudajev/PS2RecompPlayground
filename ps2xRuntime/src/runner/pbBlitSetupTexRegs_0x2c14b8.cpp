#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSetupTexRegs
// Address: 0x2c14b8 - 0x2c15a8
void pbBlitSetupTexRegs_0x2c14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c14b8u;

    // 0x2c14b8: 0x27bdffe0
    ctx->pc = 0x2c14b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c14bc: 0xffbf0010
    ctx->pc = 0x2c14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c14c0: 0xffb00000
    ctx->pc = 0x2c14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c14c4: 0x80802d
    ctx->pc = 0x2c14c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14c8: 0x282d
    ctx->pc = 0x2c14c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14cc: 0xc0becc6
    ctx->pc = 0x2C14CCu;
    SET_GPR_U32(ctx, 31, 0x2C14D4u);
    ctx->pc = 0x2C14D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14D4u; }
    }
    if (ctx->pc != 0x2C14D4u) { return; }
    ctx->pc = 0x2C14D4u;
    // 0x2c14d4: 0xde020000
    ctx->pc = 0x2c14d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c14d8: 0x24038000
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2c14dc: 0x431024
    ctx->pc = 0x2c14dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c14e0: 0x24030004
    ctx->pc = 0x2c14e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c14e4: 0x431025
    ctx->pc = 0x2c14e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c14e8: 0x34038000
    ctx->pc = 0x2c14e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2c14ec: 0x431025
    ctx->pc = 0x2c14ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c14f0: 0x2403bfff
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2c14f4: 0x31c38
    ctx->pc = 0x2c14f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c14f8: 0x3463ffff
    ctx->pc = 0x2c14f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c14fc: 0x31c38
    ctx->pc = 0x2c14fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1500: 0x3463ffff
    ctx->pc = 0x2c1500u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1504: 0x431024
    ctx->pc = 0x2c1504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1508: 0x3c03fc00
    ctx->pc = 0x2c1508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64512 << 16));
    // 0x2c150c: 0x34637fff
    ctx->pc = 0x2c150cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x2c1510: 0x31c38
    ctx->pc = 0x2c1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1514: 0x3463ffff
    ctx->pc = 0x2c1514u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1518: 0x31c38
    ctx->pc = 0x2c1518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c151c: 0x3463ffff
    ctx->pc = 0x2c151cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1520: 0x431024
    ctx->pc = 0x2c1520u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1524: 0x3c03f3ff
    ctx->pc = 0x2c1524u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62463 << 16));
    // 0x2c1528: 0x3463ffff
    ctx->pc = 0x2c1528u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c152c: 0x31c38
    ctx->pc = 0x2c152cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1530: 0x3463ffff
    ctx->pc = 0x2c1530u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c1534: 0x31c38
    ctx->pc = 0x2c1534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c1538: 0x3463ffff
    ctx->pc = 0x2c1538u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c153c: 0x431024
    ctx->pc = 0x2c153cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1540: 0x2403ffff
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1544: 0x3193a
    ctx->pc = 0x2c1544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2c1548: 0x431024
    ctx->pc = 0x2c1548u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c154c: 0x34038000
    ctx->pc = 0x2c154cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2c1550: 0x31b7c
    ctx->pc = 0x2c1550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2c1554: 0x431025
    ctx->pc = 0x2c1554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1558: 0xfe020000
    ctx->pc = 0x2c1558u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2c155c: 0xde020008
    ctx->pc = 0x2c155cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c1560: 0x2403fff0
    ctx->pc = 0x2c1560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c1564: 0x431024
    ctx->pc = 0x2c1564u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1568: 0x2403000e
    ctx->pc = 0x2c1568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c156c: 0x431025
    ctx->pc = 0x2c156cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1570: 0xfe020008
    ctx->pc = 0x2c1570u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2c1574: 0x2402003f
    ctx->pc = 0x2c1574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x2c1578: 0xfe020018
    ctx->pc = 0x2c1578u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2c157c: 0x24020006
    ctx->pc = 0x2c157cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1580: 0xfe020028
    ctx->pc = 0x2c1580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x2c1584: 0x24020034
    ctx->pc = 0x2c1584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
    // 0x2c1588: 0xfe020038
    ctx->pc = 0x2c1588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x2c158c: 0x24020036
    ctx->pc = 0x2c158cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
    // 0x2c1590: 0xfe020048
    ctx->pc = 0x2c1590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2c1594: 0x200102d
    ctx->pc = 0x2c1594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1598: 0xdfbf0010
    ctx->pc = 0x2c1598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c159c: 0xdfb00000
    ctx->pc = 0x2c159cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c15a0: 0x3e00008
    ctx->pc = 0x2C15A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C15A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C15A8u;
}
