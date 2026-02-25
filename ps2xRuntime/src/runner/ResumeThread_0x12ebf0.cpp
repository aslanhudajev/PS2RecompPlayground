#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResumeThread
// Address: 0x12ebf0 - 0x12ec00
void ResumeThread_0x12ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResumeThread_0x12ebf0");
#endif

    ctx->pc = 0x12ebf0u;

    // 0x12ebf0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x12ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x12ebf4: 0xc  syscall     0
    ctx->pc = 0x12ebf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ebf8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC00u;
}
