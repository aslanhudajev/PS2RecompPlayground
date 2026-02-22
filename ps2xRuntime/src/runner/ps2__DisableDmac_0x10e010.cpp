#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _DisableDmac
// Address: 0x10e010 - 0x10e020
void ps2__DisableDmac_0x10e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e010u;

    // 0x10e010: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x10e010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10e014: 0xc  syscall     0
    ctx->pc = 0x10e014u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e018: 0x3e00008  jr          $ra
    ctx->pc = 0x10E018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E020u;
}
