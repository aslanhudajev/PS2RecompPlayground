#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneAlloc
// Address: 0x1815c0 - 0x1815cc
void CloneAlloc_0x1815c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneAlloc_0x1815c0");
#endif

    ctx->pc = 0x1815c0u;

    // 0x1815c0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1815c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1815c4: 0x804e9b2  j           func_13A6C8
    ctx->pc = 0x1815C4u;
    ctx->pc = 0x1815C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815C4u;
            // 0x1815c8: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memalign_0x13a6c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1815CCu;
}
