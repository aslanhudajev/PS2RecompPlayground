#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iDisableIntcHandler
// Address: 0x154ad0 - 0x154ae0
void iDisableIntcHandler_0x154ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iDisableIntcHandler");


    ctx->pc = 0x154ad0u;

    // 0x154ad0: 0x2403ffa3
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x154ad4: 0xc
    ctx->pc = 0x154ad4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154ad8: 0x3e00008
    ctx->pc = 0x154AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AE0u;
}
