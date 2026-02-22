#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU005
// Address: 0x10ded0 - 0x10dee0
void RFU005_0x10ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ded0u;

    // 0x10ded0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10ded4: 0xc  syscall     0
    ctx->pc = 0x10ded4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ded8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DEE0u;
}
