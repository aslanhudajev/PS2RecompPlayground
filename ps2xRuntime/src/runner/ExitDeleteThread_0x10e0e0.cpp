#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExitDeleteThread
// Address: 0x10e0e0 - 0x10e0f0
void ExitDeleteThread_0x10e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExitDeleteThread_0x10e0e0");
#endif

    ctx->pc = 0x10e0e0u;

    // 0x10e0e0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x10e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x10e0e4: 0xc  syscall     0
    ctx->pc = 0x10e0e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E0F0u;
}
