#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_01Render
// Address: 0x1d2560 - 0x1d256c
void Enex2_01Render_0x1d2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_01Render_0x1d2560");
#endif

    ctx->pc = 0x1d2560u;

    // 0x1d2560: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2564: 0x806052c  j           func_1814B0
    ctx->pc = 0x1D2564u;
    ctx->pc = 0x1D2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2564u;
            // 0x1d2568: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D256Cu;
}
