#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DisableIntcHandler
// Address: 0x10e480 - 0x10e490
void DisableIntcHandler_0x10e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableIntcHandler_0x10e480");
#endif

    ctx->pc = 0x10e480u;

    // 0x10e480: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x10e484: 0xc  syscall     0
    ctx->pc = 0x10e484u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e488: 0x3e00008  jr          $ra
    ctx->pc = 0x10E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E490u;
}
