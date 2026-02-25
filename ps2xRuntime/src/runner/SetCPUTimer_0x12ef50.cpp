#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetCPUTimer
// Address: 0x12ef50 - 0x12ef60
void SetCPUTimer_0x12ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetCPUTimer_0x12ef50");
#endif

    ctx->pc = 0x12ef50u;

    // 0x12ef50: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x12ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x12ef54: 0xc  syscall     0
    ctx->pc = 0x12ef54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EF60u;
}
