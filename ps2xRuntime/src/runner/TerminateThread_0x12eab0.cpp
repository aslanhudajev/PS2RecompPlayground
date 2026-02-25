#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: TerminateThread
// Address: 0x12eab0 - 0x12eac0
void TerminateThread_0x12eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("TerminateThread_0x12eab0");
#endif

    ctx->pc = 0x12eab0u;

    // 0x12eab0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x12eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x12eab4: 0xc  syscall     0
    ctx->pc = 0x12eab4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EAC0u;
}
