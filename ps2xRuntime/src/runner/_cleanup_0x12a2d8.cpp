#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _cleanup
// Address: 0x12a2d8 - 0x12a2e4
void _cleanup_0x12a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_cleanup_0x12a2d8");
#endif

    ctx->pc = 0x12a2d8u;

    // 0x12a2d8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12a2dc: 0x804a8b2  j           func_12A2C8
    ctx->pc = 0x12A2DCu;
    ctx->pc = 0x12A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2DCu;
            // 0x12a2e0: 0x8c442544  lw          $a0, 0x2544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A2C8u;
    if (runtime->hasFunction(0x12A2C8u)) {
        auto targetFn = runtime->lookupFunction(0x12A2C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _cleanup_r_0x12a2c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12A2E4u;
}
