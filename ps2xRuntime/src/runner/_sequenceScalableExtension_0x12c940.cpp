#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sequenceScalableExtension
// Address: 0x12c940 - 0x12c94c
void _sequenceScalableExtension_0x12c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sequenceScalableExtension_0x12c940");
#endif

    ctx->pc = 0x12c940u;

    // 0x12c940: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12c940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12c944: 0x804b01e  j           func_12C078
    ctx->pc = 0x12C944u;
    ctx->pc = 0x12C948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C944u;
            // 0x12c948: 0x24a5f568  addiu       $a1, $a1, -0xA98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x12c078(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C94Cu;
}
