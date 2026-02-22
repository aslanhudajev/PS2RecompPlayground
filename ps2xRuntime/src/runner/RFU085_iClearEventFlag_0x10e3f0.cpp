#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU085_iClearEventFlag
// Address: 0x10e3f0 - 0x10e400
void RFU085_iClearEventFlag_0x10e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e3f0u;

    // 0x10e3f0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x10e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x10e3f4: 0xc  syscall     0
    ctx->pc = 0x10e3f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E400u;
}
