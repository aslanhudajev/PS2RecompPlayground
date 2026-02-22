#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU009
// Address: 0x10df10 - 0x10df20
void RFU009_0x10df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df10u;

    // 0x10df10: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x10df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10df14: 0xc  syscall     0
    ctx->pc = 0x10df14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df18: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF20u;
}
