#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_03Render
// Address: 0x1a6800 - 0x1a680c
void En4_03Render_0x1a6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_03Render_0x1a6800");
#endif

    ctx->pc = 0x1a6800u;

    // 0x1a6800: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a6800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6804: 0x806052c  j           func_1814B0
    ctx->pc = 0x1A6804u;
    ctx->pc = 0x1A6808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6804u;
            // 0x1a6808: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1814B0u;
    if (runtime->hasFunction(0x1814B0u)) {
        auto targetFn = runtime->lookupFunction(0x1814B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction_0x1814b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A680Cu;
}
