#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ReleaseWaitThread
// Address: 0x12eb30 - 0x12eb40
void ReleaseWaitThread_0x12eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ReleaseWaitThread_0x12eb30");
#endif

    ctx->pc = 0x12eb30u;

    // 0x12eb30: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12eb34: 0xc  syscall     0
    ctx->pc = 0x12eb34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12eb38: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EB40u;
}
