#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU091
// Address: 0x10e450 - 0x10e460
void RFU091_0x10e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e450u;

    // 0x10e450: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x10e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x10e454: 0xc  syscall     0
    ctx->pc = 0x10e454u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e458: 0x3e00008  jr          $ra
    ctx->pc = 0x10E458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E460u;
}
