#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: JoinThread
// Address: 0x12ec10 - 0x12ec20
void JoinThread_0x12ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("JoinThread_0x12ec10");
#endif

    ctx->pc = 0x12ec10u;

    // 0x12ec10: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x12ec14: 0xc  syscall     0
    ctx->pc = 0x12ec14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC20u;
}
