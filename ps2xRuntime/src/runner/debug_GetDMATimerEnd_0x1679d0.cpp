#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_GetDMATimerEnd
// Address: 0x1679d0 - 0x1679dc
void debug_GetDMATimerEnd_0x1679d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_GetDMATimerEnd_0x1679d0");
#endif

    ctx->pc = 0x1679d0u;

    // 0x1679d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1679d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1679D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679D4u;
            // 0x1679d8: 0x8c224c18  lw          $v0, 0x4C18($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19480)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1679DCu;
}
