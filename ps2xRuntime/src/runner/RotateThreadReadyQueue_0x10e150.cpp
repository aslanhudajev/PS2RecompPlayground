#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RotateThreadReadyQueue
// Address: 0x10e150 - 0x10e160
void RotateThreadReadyQueue_0x10e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e150u;

    // 0x10e150: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x10e154: 0xc  syscall     0
    ctx->pc = 0x10e154u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e158: 0x3e00008  jr          $ra
    ctx->pc = 0x10E158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E160u;
}
