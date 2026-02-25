#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_03Render
// Address: 0x19ef90 - 0x19ef9c
void En3_03Render_0x19ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_03Render_0x19ef90");
#endif

    ctx->pc = 0x19ef90u;

    // 0x19ef90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ef94: 0x806052c  j           func_1814B0
    ctx->pc = 0x19EF94u;
    ctx->pc = 0x19EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF94u;
            // 0x19ef98: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19EF9Cu;
}
