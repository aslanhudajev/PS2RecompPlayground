#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetCPUTimerHandler
// Address: 0x10e580 - 0x10e590
void SetCPUTimerHandler_0x10e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e580u;

    // 0x10e580: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x10e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x10e584: 0xc  syscall     0
    ctx->pc = 0x10e584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e588: 0x3e00008  jr          $ra
    ctx->pc = 0x10E588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E590u;
}
