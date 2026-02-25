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
// Address: 0x1399f8 - 0x139a04
void _cleanup_r_0x1399f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_cleanup_r_0x1399f8");
#endif

    ctx->pc = 0x1399f8u;

    // 0x1399f8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1399fc: 0x804e8dc  j           func_13A370
    ctx->pc = 0x1399FCu;
    ctx->pc = 0x139A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399FCu;
            // 0x139a00: 0x24a59748  addiu       $a1, $a1, -0x68B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A370u;
    if (runtime->hasFunction(0x13A370u)) {
        auto targetFn = runtime->lookupFunction(0x13A370u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _fwalk_0x13a370(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x139A04u;
}
