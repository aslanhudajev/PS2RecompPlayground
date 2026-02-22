#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iCancelWakeupThread
// Address: 0x10e200 - 0x10e210
void iCancelWakeupThread_0x10e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e200u;

    // 0x10e200: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x10e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x10e204: 0xc  syscall     0
    ctx->pc = 0x10e204u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e208: 0x3e00008  jr          $ra
    ctx->pc = 0x10E208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E210u;
}
