#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetCPUTimerHandler
// Address: 0x12ef40 - 0x12ef50
void SetCPUTimerHandler_0x12ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetCPUTimerHandler_0x12ef40");
#endif

    ctx->pc = 0x12ef40u;

    // 0x12ef40: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x12ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12ef44: 0xc  syscall     0
    ctx->pc = 0x12ef44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF50u;
}
