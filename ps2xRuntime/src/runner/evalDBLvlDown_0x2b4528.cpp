#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBLvlDown
// Address: 0x2b4528 - 0x2b4554
void evalDBLvlDown_0x2b4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4528u;

    // 0x2b4528: 0x3c040037
    ctx->pc = 0x2b4528u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2b452c: 0x8c8320ac
    ctx->pc = 0x2b452cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8364)));
    // 0x2b4530: 0x8c620008
    ctx->pc = 0x2b4530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b4534: 0x8c630024
    ctx->pc = 0x2b4534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4538: 0x431021
    ctx->pc = 0x2b4538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b453c: 0xa0400000
    ctx->pc = 0x2b453cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4540: 0x8c8320ac
    ctx->pc = 0x2b4540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8364)));
    // 0x2b4544: 0x8c620024
    ctx->pc = 0x2b4544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4548: 0x2442ffff
    ctx->pc = 0x2b4548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b454c: 0x3e00008
    ctx->pc = 0x2B454Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4550u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4554u;
}
