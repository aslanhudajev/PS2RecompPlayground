#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetCop0
// Address: 0x10e510 - 0x10e520
void GetCop0_0x10e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e510u;

    // 0x10e510: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x10e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10e514: 0xc  syscall     0
    ctx->pc = 0x10e514u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e518: 0x3e00008  jr          $ra
    ctx->pc = 0x10E518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E520u;
}
