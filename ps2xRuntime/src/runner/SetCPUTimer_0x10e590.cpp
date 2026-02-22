#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetCPUTimer
// Address: 0x10e590 - 0x10e5a0
void SetCPUTimer_0x10e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e590u;

    // 0x10e590: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x10e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x10e594: 0xc  syscall     0
    ctx->pc = 0x10e594u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e598: 0x3e00008  jr          $ra
    ctx->pc = 0x10E598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E5A0u;
}
