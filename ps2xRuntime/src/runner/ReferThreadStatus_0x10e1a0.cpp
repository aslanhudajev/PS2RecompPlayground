#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReferThreadStatus
// Address: 0x10e1a0 - 0x10e1b0
void ReferThreadStatus_0x10e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e1a0u;

    // 0x10e1a0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10e1a4: 0xc  syscall     0
    ctx->pc = 0x10e1a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E1B0u;
}
