#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSET_GetCond
// Address: 0x19d308 - 0x19d318
void SFSET_GetCond_0x19d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSET_GetCond");


    ctx->pc = 0x19d308u;

    // 0x19d308: 0x52880
    ctx->pc = 0x19d308u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x19d30c: 0x852021
    ctx->pc = 0x19d30cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d310: 0x3e00008
    ctx->pc = 0x19D310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D314u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2452)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D318u;
}
