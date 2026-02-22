#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU083_iSetEventFlag
// Address: 0x10e3d0 - 0x10e3e0
void RFU083_iSetEventFlag_0x10e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e3d0u;

    // 0x10e3d0: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x10e3d4: 0xc  syscall     0
    ctx->pc = 0x10e3d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3E0u;
}
