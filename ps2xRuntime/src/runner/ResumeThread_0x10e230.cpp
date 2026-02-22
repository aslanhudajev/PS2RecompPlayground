#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResumeThread
// Address: 0x10e230 - 0x10e240
void ResumeThread_0x10e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e230u;

    // 0x10e230: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10e234: 0xc  syscall     0
    ctx->pc = 0x10e234u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e238: 0x3e00008  jr          $ra
    ctx->pc = 0x10E238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E240u;
}
