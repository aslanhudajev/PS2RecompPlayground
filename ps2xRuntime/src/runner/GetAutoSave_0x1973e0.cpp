#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetAutoSave
// Address: 0x1973e0 - 0x1973ec
void GetAutoSave_0x1973e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetAutoSave_0x1973e0");
#endif

    ctx->pc = 0x1973e0u;

    // 0x1973e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1973e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1973E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1973E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973E4u;
            // 0x1973e8: 0x8c221610  lw          $v0, 0x1610($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5648)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1973ECu;
}
