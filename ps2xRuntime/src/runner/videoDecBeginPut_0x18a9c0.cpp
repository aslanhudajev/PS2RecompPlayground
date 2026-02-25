#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecBeginPut
// Address: 0x18a9c0 - 0x18a9c8
void videoDecBeginPut_0x18a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecBeginPut_0x18a9c0");
#endif

    ctx->pc = 0x18a9c0u;

    // 0x18a9c0: 0x80627b4  j           func_189ED0
    ctx->pc = 0x18A9C0u;
    ctx->pc = 0x18A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9C0u;
            // 0x18a9c4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189ED0u;
    if (runtime->hasFunction(0x189ED0u)) {
        auto targetFn = runtime->lookupFunction(0x189ED0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufBeginPut_0x189ed0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18A9C8u;
}
