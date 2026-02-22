#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iDisableDmac
// Address: 0x10e070 - 0x10e080
void _iDisableDmac_0x10e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e070u;

    // 0x10e070: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x10e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x10e074: 0xc  syscall     0
    ctx->pc = 0x10e074u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e078: 0x3e00008  jr          $ra
    ctx->pc = 0x10E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E080u;
}
