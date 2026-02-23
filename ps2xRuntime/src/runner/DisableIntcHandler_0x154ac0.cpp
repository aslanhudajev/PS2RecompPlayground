#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableIntcHandler
// Address: 0x154ac0 - 0x154ad0
void DisableIntcHandler_0x154ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableIntcHandler");


    ctx->pc = 0x154ac0u;

    // 0x154ac0: 0x2403005d
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 93));
    // 0x154ac4: 0xc
    ctx->pc = 0x154ac4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154ac8: 0x3e00008
    ctx->pc = 0x154AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AD0u;
}
