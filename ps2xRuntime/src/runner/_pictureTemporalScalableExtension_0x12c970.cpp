#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pictureTemporalScalableExtension
// Address: 0x12c970 - 0x12c97c
void _pictureTemporalScalableExtension_0x12c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pictureTemporalScalableExtension_0x12c970");
#endif

    ctx->pc = 0x12c970u;

    // 0x12c970: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12c974: 0x804b01e  j           func_12C078
    ctx->pc = 0x12C974u;
    ctx->pc = 0x12C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C974u;
            // 0x12c978: 0x24a5f5e8  addiu       $a1, $a1, -0xA18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x12c078(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C97Cu;
}
