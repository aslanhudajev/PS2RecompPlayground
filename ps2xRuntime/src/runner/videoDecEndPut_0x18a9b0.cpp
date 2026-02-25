#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecEndPut
// Address: 0x18a9b0 - 0x18a9b8
void videoDecEndPut_0x18a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecEndPut_0x18a9b0");
#endif

    ctx->pc = 0x18a9b0u;

    // 0x18a9b0: 0x806279c  j           func_189E70
    ctx->pc = 0x18A9B0u;
    ctx->pc = 0x18A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9B0u;
            // 0x18a9b4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E70u;
    if (runtime->hasFunction(0x189E70u)) {
        auto targetFn = runtime->lookupFunction(0x189E70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufEndPut_0x189e70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18A9B8u;
}
