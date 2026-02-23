#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetVInterruptHandler
// Address: 0x1545b0 - 0x1545c0
void SetVInterruptHandler_0x1545b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetVInterruptHandler");


    ctx->pc = 0x1545b0u;

    // 0x1545b0: 0x2403000f
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1545b4: 0xc
    ctx->pc = 0x1545b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1545b8: 0x3e00008
    ctx->pc = 0x1545B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1545C0u;
}
