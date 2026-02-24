#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _defStopDMA
// Address: 0x1209f8 - 0x120a04
void _defStopDMA_0x1209f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_defStopDMA_0x1209f8");
#endif

    ctx->pc = 0x1209f8u;

    // 0x1209f8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1209f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1209fc: 0x8049862  j           func_126188
    ctx->pc = 0x1209FCu;
    ctx->pc = 0x120A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1209FCu;
            // 0x120a00: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126188u;
    if (runtime->hasFunction(0x126188u)) {
        auto targetFn = runtime->lookupFunction(0x126188u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuStopDMA_0x126188(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x120A04u;
}
