#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RnnyuNo
// Address: 0x158150 - 0x15815c
void RnnyuNo_0x158150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RnnyuNo_0x158150");
#endif

    ctx->pc = 0x158150u;

    // 0x158150: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158154: 0x3e00008  jr          $ra
    ctx->pc = 0x158154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158154u;
            // 0x158158: 0xac202c80  sw          $zero, 0x2C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15815Cu;
}
