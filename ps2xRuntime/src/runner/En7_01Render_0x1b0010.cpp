#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_01Render
// Address: 0x1b0010 - 0x1b001c
void En7_01Render_0x1b0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_01Render_0x1b0010");
#endif

    ctx->pc = 0x1b0010u;

    // 0x1b0010: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0014: 0x806052c  j           func_1814B0
    ctx->pc = 0x1B0014u;
    ctx->pc = 0x1B0018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0014u;
            // 0x1b0018: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B001Cu;
}
