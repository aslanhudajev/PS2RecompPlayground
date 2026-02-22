#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iPollSema
// Address: 0x10e300 - 0x10e310
void iPollSema_0x10e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e300u;

    // 0x10e300: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x10e304: 0xc  syscall     0
    ctx->pc = 0x10e304u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e308: 0x3e00008  jr          $ra
    ctx->pc = 0x10E308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E310u;
}
