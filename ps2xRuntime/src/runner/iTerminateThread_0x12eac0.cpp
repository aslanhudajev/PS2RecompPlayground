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
// Address: 0x12eac0 - 0x12ead0
void iTerminateThread_0x12eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iTerminateThread_0x12eac0");
#endif

    ctx->pc = 0x12eac0u;

    // 0x12eac0: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x12eac4: 0xc  syscall     0
    ctx->pc = 0x12eac4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eac8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EAD0u;
}
