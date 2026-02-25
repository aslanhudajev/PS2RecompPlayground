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
// Address: 0x12edc0 - 0x12edd0
void RFU086_WaitEvnetFlag_0x12edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU086_WaitEvnetFlag_0x12edc0");
#endif

    ctx->pc = 0x12edc0u;

    // 0x12edc0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x12edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x12edc4: 0xc  syscall     0
    ctx->pc = 0x12edc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12edc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EDD0u;
}
