#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateThread
// Address: 0x10e0a0 - 0x10e0b0
void CreateThread_0x10e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e0a0u;

    // 0x10e0a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x10e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10e0a4: 0xc  syscall     0
    ctx->pc = 0x10e0a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E0B0u;
}
