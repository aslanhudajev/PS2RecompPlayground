#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2scrollspeedup
// Address: 0x146c30 - 0x146c40
void stage2scrollspeedup_0x146c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2scrollspeedup_0x146c30");
#endif

    ctx->pc = 0x146c30u;

    // 0x146c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c34: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c38: 0x3e00008  jr          $ra
    ctx->pc = 0x146C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C38u;
            // 0x146c3c: 0xac239cf0  sw          $v1, -0x6310($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146C40u;
}
