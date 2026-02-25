#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: IsFadeing
// Address: 0x181f30 - 0x181f3c
void IsFadeing_0x181f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("IsFadeing_0x181f30");
#endif

    ctx->pc = 0x181f30u;

    // 0x181f30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181f34: 0x3e00008  jr          $ra
    ctx->pc = 0x181F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F34u;
            // 0x181f38: 0x8c22b5e0  lw          $v0, -0x4A20($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948320)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181F3Cu;
}
