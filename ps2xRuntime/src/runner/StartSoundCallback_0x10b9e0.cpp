#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StartSoundCallback
// Address: 0x10b9e0 - 0x10b9ec
void StartSoundCallback_0x10b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StartSoundCallback_0x10b9e0");
#endif

    ctx->pc = 0x10b9e0u;

    // 0x10b9e0: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10b9e4: 0x8045c7c  j           func_1171F0
    ctx->pc = 0x10B9E4u;
    ctx->pc = 0x10B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9E4u;
            // 0x10b9e8: 0x2484c018  addiu       $a0, $a0, -0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171F0u;
    if (runtime->hasFunction(0x1171F0u)) {
        auto targetFn = runtime->lookupFunction(0x1171F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceSdCallBack_0x1171f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B9ECu;
}
