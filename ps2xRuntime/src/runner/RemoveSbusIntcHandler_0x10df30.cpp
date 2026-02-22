#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveSbusIntcHandler
// Address: 0x10df30 - 0x10df40
void RemoveSbusIntcHandler_0x10df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df30u;

    // 0x10df30: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10df34: 0xc  syscall     0
    ctx->pc = 0x10df34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df38: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF40u;
}
