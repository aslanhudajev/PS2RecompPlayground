#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_Init
// Address: 0x192e08 - 0x192e18
void SFHDS_Init_0x192e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_Init");


    ctx->pc = 0x192e08u;

    // 0x192e08: 0x3c05002f
    ctx->pc = 0x192e08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
    // 0x192e0c: 0x24040020
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x192e10: 0x8067e94
    ctx->pc = 0x192E10u;
    ctx->pc = 0x192E14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952568));
    ctx->pc = 0x19FA50u;
    SFH_Init_0x19fa50(rdram, ctx, runtime); return;
    ctx->pc = 0x192E18u;
}
