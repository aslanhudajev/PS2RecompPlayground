#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ser_stage3_clear
// Address: 0x1468e0 - 0x1468f0
void ser_stage3_clear_0x1468e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ser_stage3_clear_0x1468e0");
#endif

    ctx->pc = 0x1468e0u;

    // 0x1468e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1468e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1468e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1468E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1468ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468E8u;
            // 0x1468ec: 0xac239bf0  sw          $v1, -0x6410($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1468F0u;
}
