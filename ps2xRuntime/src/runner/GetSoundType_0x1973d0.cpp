#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetSoundType
// Address: 0x1973d0 - 0x1973dc
void GetSoundType_0x1973d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetSoundType_0x1973d0");
#endif

    ctx->pc = 0x1973d0u;

    // 0x1973d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1973d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1973D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1973D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973D4u;
            // 0x1973d8: 0x8c22182c  lw          $v0, 0x182C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1973DCu;
}
