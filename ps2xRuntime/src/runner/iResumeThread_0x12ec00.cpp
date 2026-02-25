#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iResumeThread
// Address: 0x12ec00 - 0x12ec10
void iResumeThread_0x12ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iResumeThread_0x12ec00");
#endif

    ctx->pc = 0x12ec00u;

    // 0x12ec00: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x12ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x12ec04: 0xc  syscall     0
    ctx->pc = 0x12ec04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC10u;
}
