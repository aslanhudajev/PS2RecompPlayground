#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsUnInitHiMem
// Address: 0x141280 - 0x14128c
void wrsUnInitHiMem_0x141280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsUnInitHiMem_0x141280");
#endif

    ctx->pc = 0x141280u;

    // 0x141280: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141284: 0x8050700  j           func_141C00
    ctx->pc = 0x141284u;
    ctx->pc = 0x141288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141284u;
            // 0x141288: 0x8c247850  lw          $a0, 0x7850($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsFree_0x141c00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14128Cu;
}
