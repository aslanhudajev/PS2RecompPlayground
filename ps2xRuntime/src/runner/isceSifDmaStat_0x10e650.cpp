#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifDmaStat
// Address: 0x10e650 - 0x10e660
void isceSifDmaStat_0x10e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e650u;

    // 0x10e650: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x10e650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x10e654: 0xc  syscall     0
    ctx->pc = 0x10e654u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e658: 0x3e00008  jr          $ra
    ctx->pc = 0x10E658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E660u;
}
