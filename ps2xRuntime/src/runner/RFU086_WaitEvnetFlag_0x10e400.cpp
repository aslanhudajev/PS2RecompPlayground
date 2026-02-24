#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU086_WaitEvnetFlag
// Address: 0x10e400 - 0x10e410
void RFU086_WaitEvnetFlag_0x10e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU086_WaitEvnetFlag_0x10e400");
#endif

    ctx->pc = 0x10e400u;

    // 0x10e400: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x10e404: 0xc  syscall     0
    ctx->pc = 0x10e404u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e408: 0x3e00008  jr          $ra
    ctx->pc = 0x10E408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E410u;
}
