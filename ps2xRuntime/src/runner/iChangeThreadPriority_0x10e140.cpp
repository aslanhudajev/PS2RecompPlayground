#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iChangeThreadPriority
// Address: 0x10e140 - 0x10e150
void iChangeThreadPriority_0x10e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e140u;

    // 0x10e140: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x10e144: 0xc  syscall     0
    ctx->pc = 0x10e144u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e148: 0x3e00008  jr          $ra
    ctx->pc = 0x10E148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E150u;
}
