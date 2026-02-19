#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBlitNewPage
// Address: 0x2c1300 - 0x2c1320
void pbBlitNewPage_0x2c1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1300u;

    // 0x2c1300: 0x3c020037
    ctx->pc = 0x2c1300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1304: 0x2403ffff
    ctx->pc = 0x2c1304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1308: 0xac4331a0
    ctx->pc = 0x2c1308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12704), GPR_U32(ctx, 3));
    // 0x2c130c: 0x3c020037
    ctx->pc = 0x2c130cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1310: 0xac4331a4
    ctx->pc = 0x2c1310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12708), GPR_U32(ctx, 3));
    // 0x2c1314: 0x3c020037
    ctx->pc = 0x2c1314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c1318: 0x3e00008
    ctx->pc = 0x2C1318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C131Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12712), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1320u;
}
