#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _set_stdgsctx
// Address: 0x112b40 - 0x112b48
void _set_stdgsctx_0x112b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_set_stdgsctx_0x112b40");
#endif

    ctx->pc = 0x112b40u;

    // 0x112b40: 0x8044ad2  j           func_112B48
    ctx->pc = 0x112B40u;
    ctx->pc = 0x112B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112B40u;
            // 0x112b44: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112B48u;
    if (runtime->hasFunction(0x112B48u)) {
        auto targetFn = runtime->lookupFunction(0x112B48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceHiGsCtxSetByDBuff_0x112b48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x112B48u;
}
