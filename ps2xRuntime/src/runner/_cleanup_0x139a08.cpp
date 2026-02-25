#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _cleanup
// Address: 0x139a08 - 0x139a14
void _cleanup_0x139a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_cleanup_0x139a08");
#endif

    ctx->pc = 0x139a08u;

    // 0x139a08: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x139a0c: 0x804e67e  j           func_1399F8
    ctx->pc = 0x139A0Cu;
    ctx->pc = 0x139A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139A0Cu;
            // 0x139a10: 0x8c441d94  lw          $a0, 0x1D94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7572)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1399F8u;
    if (runtime->hasFunction(0x1399F8u)) {
        auto targetFn = runtime->lookupFunction(0x1399F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _cleanup_r_0x1399f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x139A14u;
}
