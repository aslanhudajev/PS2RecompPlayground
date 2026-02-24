#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: WakeupThread
// Address: 0x10e1d0 - 0x10e1e0
void WakeupThread_0x10e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("WakeupThread_0x10e1d0");
#endif

    ctx->pc = 0x10e1d0u;

    // 0x10e1d0: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x10e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x10e1d4: 0xc  syscall     0
    ctx->pc = 0x10e1d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E1E0u;
}
