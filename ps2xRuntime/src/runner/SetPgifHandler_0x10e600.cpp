#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPgifHandler
// Address: 0x10e600 - 0x10e610
void SetPgifHandler_0x10e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e600u;

    // 0x10e600: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x10e604: 0xc  syscall     0
    ctx->pc = 0x10e604u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e608: 0x3e00008  jr          $ra
    ctx->pc = 0x10E608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E610u;
}
