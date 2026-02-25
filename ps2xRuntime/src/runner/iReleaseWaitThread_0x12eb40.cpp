#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iReleaseWaitThread
// Address: 0x12eb40 - 0x12eb50
void iReleaseWaitThread_0x12eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReleaseWaitThread_0x12eb40");
#endif

    ctx->pc = 0x12eb40u;

    // 0x12eb40: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x12eb44: 0xc  syscall     0
    ctx->pc = 0x12eb44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eb48: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EB50u;
}
