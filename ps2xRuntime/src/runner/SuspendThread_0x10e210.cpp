#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SuspendThread
// Address: 0x10e210 - 0x10e220
void SuspendThread_0x10e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e210u;

    // 0x10e210: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x10e210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x10e214: 0xc  syscall     0
    ctx->pc = 0x10e214u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e218: 0x3e00008  jr          $ra
    ctx->pc = 0x10E218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E220u;
}
