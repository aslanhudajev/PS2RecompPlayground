#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iDisableIntcHandler
// Address: 0x10e490 - 0x10e4a0
void iDisableIntcHandler_0x10e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e490u;

    // 0x10e490: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x10e494: 0xc  syscall     0
    ctx->pc = 0x10e494u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e498: 0x3e00008  jr          $ra
    ctx->pc = 0x10E498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E4A0u;
}
