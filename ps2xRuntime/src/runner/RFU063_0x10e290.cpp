#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU063
// Address: 0x10e290 - 0x10e2a0
void RFU063_0x10e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e290u;

    // 0x10e290: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10e290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10e294: 0xc  syscall     0
    ctx->pc = 0x10e294u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e298: 0x3e00008  jr          $ra
    ctx->pc = 0x10E298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E2A0u;
}
