#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitSendInitRegs
// Address: 0x2c1320 - 0x2c13e8
void pbBlitSendInitRegs_0x2c1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1320u;

    // 0x2c1320: 0x3c020036
    ctx->pc = 0x2c1320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c1324: 0x8c42dee0
    ctx->pc = 0x2c1324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c1328: 0x8c460008
    ctx->pc = 0x2c1328u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c132c: 0x3c020037
    ctx->pc = 0x2c132cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1330: 0x2403ffff
    ctx->pc = 0x2c1330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1334: 0xac4331a0
    ctx->pc = 0x2c1334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12704), GPR_U32(ctx, 3));
    // 0x2c1338: 0x3c020037
    ctx->pc = 0x2c1338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c133c: 0xac4331a4
    ctx->pc = 0x2c133cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12708), GPR_U32(ctx, 3));
    // 0x2c1340: 0x3c020037
    ctx->pc = 0x2c1340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1344: 0xac4331a8
    ctx->pc = 0x2c1344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12712), GPR_U32(ctx, 3));
    // 0x2c1348: 0x3c050037
    ctx->pc = 0x2c1348u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2c134c: 0x8ca22970
    ctx->pc = 0x2c134cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10608)));
    // 0x2c1350: 0x3c031000
    ctx->pc = 0x2c1350u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c1354: 0x34630004
    ctx->pc = 0x2c1354u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c1358: 0xac430000
    ctx->pc = 0x2c1358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c135c: 0x24420004
    ctx->pc = 0x2c135cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1360: 0xac400000
    ctx->pc = 0x2c1360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c1364: 0x24420004
    ctx->pc = 0x2c1364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1368: 0x3c041000
    ctx->pc = 0x2c1368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2c136c: 0xac440000
    ctx->pc = 0x2c136cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c1370: 0x24420004
    ctx->pc = 0x2c1370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1374: 0x3c035000
    ctx->pc = 0x2c1374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2c1378: 0x34630004
    ctx->pc = 0x2c1378u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c137c: 0xac430000
    ctx->pc = 0x2c137cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c1380: 0x24420004
    ctx->pc = 0x2c1380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1384: 0x34038003
    ctx->pc = 0x2c1384u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32771));
    // 0x2c1388: 0xac430000
    ctx->pc = 0x2c1388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c138c: 0x24420004
    ctx->pc = 0x2c138cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1390: 0xac440000
    ctx->pc = 0x2c1390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c1394: 0x24420004
    ctx->pc = 0x2c1394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c1398: 0x2403000e
    ctx->pc = 0x2c1398u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c139c: 0xac430000
    ctx->pc = 0x2c139cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c13a0: 0x24420004
    ctx->pc = 0x2c13a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c13a4: 0xac400000
    ctx->pc = 0x2c13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c13a8: 0x24420004
    ctx->pc = 0x2c13a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c13ac: 0x24030005
    ctx->pc = 0x2c13acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c13b0: 0xfc430000
    ctx->pc = 0x2c13b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2c13b4: 0x24030008
    ctx->pc = 0x2c13b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c13b8: 0xfc430008
    ctx->pc = 0x2c13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2c13bc: 0xdcc30040
    ctx->pc = 0x2c13bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2c13c0: 0xfc430010
    ctx->pc = 0x2c13c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2c13c4: 0x24030018
    ctx->pc = 0x2c13c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c13c8: 0xfc430018
    ctx->pc = 0x2c13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x2c13cc: 0xdcc30050
    ctx->pc = 0x2c13ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2c13d0: 0xfc430020
    ctx->pc = 0x2c13d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x2c13d4: 0x24030040
    ctx->pc = 0x2c13d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c13d8: 0xfc430028
    ctx->pc = 0x2c13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x2c13dc: 0x24420030
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c13e0: 0x3e00008
    ctx->pc = 0x2C13E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C13E4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 10608), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C13E8u;
}
