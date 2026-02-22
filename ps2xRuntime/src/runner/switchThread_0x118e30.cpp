#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: switchThread
// Address: 0x118e30 - 0x118e38
void switchThread_0x118e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118e30u;

    // 0x118e30: 0x8043854  j           func_10E150
    ctx->pc = 0x118E30u;
    ctx->pc = 0x118E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E30u;
            // 0x118e34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E150u;
    if (runtime->hasFunction(0x10E150u)) {
        auto targetFn = runtime->lookupFunction(0x10E150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        RotateThreadReadyQueue_0x10e150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118E38u;
}
