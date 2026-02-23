#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iEnableIntcHandler
// Address: 0x154ab0 - 0x154ac0
void iEnableIntcHandler_0x154ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iEnableIntcHandler");


    ctx->pc = 0x154ab0u;

    // 0x154ab0: 0x2403ffa4
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x154ab4: 0xc
    ctx->pc = 0x154ab4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154ab8: 0x3e00008
    ctx->pc = 0x154AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AC0u;
}
