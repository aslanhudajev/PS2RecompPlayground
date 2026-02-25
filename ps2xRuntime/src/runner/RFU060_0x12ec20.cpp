#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RFU060
// Address: 0x12ec20 - 0x12ec30
void RFU060_0x12ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RFU060_0x12ec20");
#endif

    ctx->pc = 0x12ec20u;

    // 0x12ec20: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x12ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x12ec24: 0xc  syscall     0
    ctx->pc = 0x12ec24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12ec28: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EC30u;
}
