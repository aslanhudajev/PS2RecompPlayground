#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Exit
// Address: 0x10dec0 - 0x10ded0
void Exit_0x10dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10dec0u;

    // 0x10dec0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10dec4: 0xc  syscall     0
    ctx->pc = 0x10dec4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dec8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DED0u;
}
