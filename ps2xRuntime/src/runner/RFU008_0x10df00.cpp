#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU008
// Address: 0x10df00 - 0x10df10
void RFU008_0x10df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df00u;

    // 0x10df00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10df04: 0xc  syscall     0
    ctx->pc = 0x10df04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df08: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF10u;
}
