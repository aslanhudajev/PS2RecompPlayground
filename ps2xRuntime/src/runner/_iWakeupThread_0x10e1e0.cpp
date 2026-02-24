#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iWakeupThread
// Address: 0x10e1e0 - 0x10e1f0
void _iWakeupThread_0x10e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iWakeupThread_0x10e1e0");
#endif

    ctx->pc = 0x10e1e0u;

    // 0x10e1e0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x10e1e4: 0xc  syscall     0
    ctx->pc = 0x10e1e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E1F0u;
}
