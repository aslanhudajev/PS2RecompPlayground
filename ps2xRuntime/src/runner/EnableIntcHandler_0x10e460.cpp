#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnableIntcHandler
// Address: 0x10e460 - 0x10e470
void EnableIntcHandler_0x10e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnableIntcHandler_0x10e460");
#endif

    ctx->pc = 0x10e460u;

    // 0x10e460: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10e464: 0xc  syscall     0
    ctx->pc = 0x10e464u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e468: 0x3e00008  jr          $ra
    ctx->pc = 0x10E468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E470u;
}
