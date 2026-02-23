#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrnIndentOn
// Address: 0x1abac0 - 0x1abad0
void nlPrnIndentOn_0x1abac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrnIndentOn");


    ctx->pc = 0x1abac0u;

    // 0x1abac0: 0x8f838a90
    ctx->pc = 0x1abac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937232)));
    // 0x1abac4: 0x34630001
    ctx->pc = 0x1abac4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1abac8: 0x3e00008
    ctx->pc = 0x1ABAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABACCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937232), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABAD0u;
}
