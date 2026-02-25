#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RnnyuOk
// Address: 0x158140 - 0x158150
void RnnyuOk_0x158140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RnnyuOk_0x158140");
#endif

    ctx->pc = 0x158140u;

    // 0x158140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158144: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158148: 0x3e00008  jr          $ra
    ctx->pc = 0x158148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158148u;
            // 0x15814c: 0xac232c80  sw          $v1, 0x2C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158150u;
}
