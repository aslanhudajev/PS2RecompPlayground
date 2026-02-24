#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _cleanup_r
// Address: 0x12a2c8 - 0x12a2d4
void _cleanup_r_0x12a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_cleanup_r_0x12a2c8");
#endif

    ctx->pc = 0x12a2c8u;

    // 0x12a2c8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12a2cc: 0x804a8de  j           func_12A378
    ctx->pc = 0x12A2CCu;
    ctx->pc = 0x12A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2CCu;
            // 0x12a2d0: 0x24a5f0f8  addiu       $a1, $a1, -0xF08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A378u;
    if (runtime->hasFunction(0x12A378u)) {
        auto targetFn = runtime->lookupFunction(0x12A378u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _fwalk_0x12a378(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12A2D4u;
}
