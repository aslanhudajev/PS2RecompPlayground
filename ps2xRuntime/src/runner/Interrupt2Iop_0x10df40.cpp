#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Interrupt2Iop
// Address: 0x10df40 - 0x10df50
void Interrupt2Iop_0x10df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df40u;

    // 0x10df40: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10df40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10df44: 0xc  syscall     0
    ctx->pc = 0x10df44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df48: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF50u;
}
