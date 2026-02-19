#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shop_ready
// Address: 0x28bd38 - 0x28bd44
void shop_ready_0x28bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28bd38u;

    // 0x28bd38: 0x3c02003c
    ctx->pc = 0x28bd38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28bd3c: 0x3e00008
    ctx->pc = 0x28BD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16112)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BD44u;
}
