#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetMicroEs
// Address: 0x181810 - 0x181830
void SetMicroEs_0x181810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetMicroEs_0x181810");
#endif

    ctx->pc = 0x181810u;

    // 0x181810: 0xac8601b4  sw          $a2, 0x1B4($a0)
    ctx->pc = 0x181810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 6));
    // 0x181814: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x181818: 0x248601c8  addiu       $a2, $a0, 0x1C8
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
    // 0x18181c: 0xac8301c8  sw          $v1, 0x1C8($a0)
    ctx->pc = 0x18181cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 3));
    // 0x181820: 0xac8501cc  sw          $a1, 0x1CC($a0)
    ctx->pc = 0x181820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 5));
    // 0x181824: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x181824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x181828: 0x3e00008  jr          $ra
    ctx->pc = 0x181828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181828u;
            // 0x18182c: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181830u;
}
