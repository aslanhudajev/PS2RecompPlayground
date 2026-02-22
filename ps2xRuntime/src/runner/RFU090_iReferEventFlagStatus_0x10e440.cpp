#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU090_iReferEventFlagStatus
// Address: 0x10e440 - 0x10e450
void RFU090_iReferEventFlagStatus_0x10e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e440u;

    // 0x10e440: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x10e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x10e444: 0xc  syscall     0
    ctx->pc = 0x10e444u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e448: 0x3e00008  jr          $ra
    ctx->pc = 0x10E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E450u;
}
