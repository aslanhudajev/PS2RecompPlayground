#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecEndPut
// Address: 0x11a0e0 - 0x11a0e8
void videoDecEndPut_0x11a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0e0u;

    // 0x11a0e0: 0x80470ea  j           func_11C3A8
    ctx->pc = 0x11A0E0u;
    ctx->pc = 0x11A0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0E0u;
            // 0x11a0e4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufEndPut_0x11c3a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A0E8u;
}
