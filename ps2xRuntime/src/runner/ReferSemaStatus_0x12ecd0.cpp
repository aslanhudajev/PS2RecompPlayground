#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ReferSemaStatus
// Address: 0x12ecd0 - 0x12ece0
void ReferSemaStatus_0x12ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ReferSemaStatus_0x12ecd0");
#endif

    ctx->pc = 0x12ecd0u;

    // 0x12ecd0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x12ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12ecd4: 0xc  syscall     0
    ctx->pc = 0x12ecd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ECE0u;
}
