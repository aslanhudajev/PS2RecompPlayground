#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iEnableDmacHandler
// Address: 0x10e4b0 - 0x10e4c0
void iEnableDmacHandler_0x10e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e4b0u;

    // 0x10e4b0: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x10e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x10e4b4: 0xc  syscall     0
    ctx->pc = 0x10e4b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E4C0u;
}
