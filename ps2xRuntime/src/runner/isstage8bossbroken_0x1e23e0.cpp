#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isstage8bossbroken
// Address: 0x1e23e0 - 0x1e23ec
void isstage8bossbroken_0x1e23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isstage8bossbroken_0x1e23e0");
#endif

    ctx->pc = 0x1e23e0u;

    // 0x1e23e0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e23e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E23E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23E4u;
            // 0x1e23e8: 0x8c222da8  lw          $v0, 0x2DA8($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11688)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E23ECu;
}
