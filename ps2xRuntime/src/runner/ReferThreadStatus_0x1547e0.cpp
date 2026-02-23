#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReferThreadStatus
// Address: 0x1547e0 - 0x1547f0
void ReferThreadStatus_0x1547e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReferThreadStatus");


    ctx->pc = 0x1547e0u;

    // 0x1547e0: 0x24030030
    ctx->pc = 0x1547e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1547e4: 0xc
    ctx->pc = 0x1547e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1547e8: 0x3e00008
    ctx->pc = 0x1547E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1547F0u;
}
