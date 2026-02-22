#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _unknown_extension
// Address: 0x1209c8 - 0x1209d4
void _unknown_extension_0x1209c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1209c8u;

    // 0x1209c8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1209cc: 0x8048006  j           func_120018
    ctx->pc = 0x1209CCu;
    ctx->pc = 0x1209D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1209CCu;
            // 0x1209d0: 0x24844d78  addiu       $a0, $a0, 0x4D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x120018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1209D4u;
}
