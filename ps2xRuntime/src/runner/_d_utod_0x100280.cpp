#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _d_utod
// Address: 0x100280 - 0x10028c
void _d_utod_0x100280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_d_utod_0x100280");
#endif

    ctx->pc = 0x100280u;

    // 0x100280: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x100280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100284: 0x80400a4  j           func_100290
    ctx->pc = 0x100284u;
    ctx->pc = 0x100288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100284u;
            // 0x100288: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100290u;
    if (runtime->hasFunction(0x100290u)) {
        auto targetFn = runtime->lookupFunction(0x100290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _d_ulltod_0x100290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10028Cu;
}
