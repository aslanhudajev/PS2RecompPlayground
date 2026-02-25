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
// Address: 0x12eb90 - 0x12eba0
void WakeupThread_0x12eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("WakeupThread_0x12eb90");
#endif

    ctx->pc = 0x12eb90u;

    // 0x12eb90: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x12eb94: 0xc  syscall     0
    ctx->pc = 0x12eb94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eb98: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EBA0u;
}
