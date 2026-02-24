#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iTerminateThread
// Address: 0x10e100 - 0x10e110
void iTerminateThread_0x10e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iTerminateThread_0x10e100");
#endif

    ctx->pc = 0x10e100u;

    // 0x10e100: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x10e104: 0xc  syscall     0
    ctx->pc = 0x10e104u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e108: 0x3e00008  jr          $ra
    ctx->pc = 0x10E108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E110u;
}
