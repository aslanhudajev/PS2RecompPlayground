#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecInputCount
// Address: 0x18a8f0 - 0x18a8f8
void videoDecInputCount_0x18a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecInputCount_0x18a8f0");
#endif

    ctx->pc = 0x18a8f0u;

    // 0x18a8f0: 0x80625dc  j           func_189770
    ctx->pc = 0x18A8F0u;
    ctx->pc = 0x18A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8F0u;
            // 0x18a8f4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189770u;
    if (runtime->hasFunction(0x189770u)) {
        auto targetFn = runtime->lookupFunction(0x189770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufCount_0x189770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18A8F8u;
}
