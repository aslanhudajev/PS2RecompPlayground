#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: proceedAudio
// Address: 0x188110 - 0x18811c
void proceedAudio_0x188110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("proceedAudio_0x188110");
#endif

    ctx->pc = 0x188110u;

    // 0x188110: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188114: 0x8061c7c  j           func_1871F0
    ctx->pc = 0x188114u;
    ctx->pc = 0x188118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188114u;
            // 0x188118: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871F0u;
    if (runtime->hasFunction(0x1871F0u)) {
        auto targetFn = runtime->lookupFunction(0x1871F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        audioDecSendToIOP_0x1871f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18811Cu;
}
