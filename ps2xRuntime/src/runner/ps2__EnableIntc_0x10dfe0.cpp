#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _EnableIntc
// Address: 0x10dfe0 - 0x10dff0
void ps2__EnableIntc_0x10dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10dfe0u;

    // 0x10dfe0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x10dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10dfe4: 0xc  syscall     0
    ctx->pc = 0x10dfe4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFF0u;
}
