#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _defRestartDMA
// Address: 0x120a08 - 0x120a14
void _defRestartDMA_0x120a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_defRestartDMA_0x120a08");
#endif

    ctx->pc = 0x120a08u;

    // 0x120a08: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x120a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x120a0c: 0x804989c  j           func_126270
    ctx->pc = 0x120A0Cu;
    ctx->pc = 0x120A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120A0Cu;
            // 0x120a10: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126270u;
    if (runtime->hasFunction(0x126270u)) {
        auto targetFn = runtime->lookupFunction(0x126270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuRestartDMA_0x126270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x120A14u;
}
