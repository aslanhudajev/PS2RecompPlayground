#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecBeginPut
// Address: 0x11a0d8 - 0x11a0e0
void videoDecBeginPut_0x11a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0d8u;

    // 0x11a0d8: 0x80470b0  j           func_11C2C0
    ctx->pc = 0x11A0D8u;
    ctx->pc = 0x11A0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0D8u;
            // 0x11a0dc: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C2C0u;
    if (runtime->hasFunction(0x11C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x11C2C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufBeginPut_0x11c2c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A0E0u;
}
