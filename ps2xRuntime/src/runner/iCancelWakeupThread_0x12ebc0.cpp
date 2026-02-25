#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iCancelWakeupThread
// Address: 0x12ebc0 - 0x12ebd0
void iCancelWakeupThread_0x12ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iCancelWakeupThread_0x12ebc0");
#endif

    ctx->pc = 0x12ebc0u;

    // 0x12ebc0: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x12ebc4: 0xc  syscall     0
    ctx->pc = 0x12ebc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EBD0u;
}
