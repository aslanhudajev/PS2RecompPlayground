#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVInterruptHandler
// Address: 0x10df70 - 0x10df80
void SetVInterruptHandler_0x10df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df70u;

    // 0x10df70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10df74: 0xc  syscall     0
    ctx->pc = 0x10df74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df78: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF80u;
}
