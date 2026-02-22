#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU003
// Address: 0x10deb0 - 0x10dec0
void RFU003_0x10deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10deb0u;

    // 0x10deb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10deb4: 0xc  syscall     0
    ctx->pc = 0x10deb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10deb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DEC0u;
}
