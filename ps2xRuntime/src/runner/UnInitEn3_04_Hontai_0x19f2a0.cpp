#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEn3_04_Hontai
// Address: 0x19f2a0 - 0x19f2a8
void UnInitEn3_04_Hontai_0x19f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEn3_04_Hontai_0x19f2a0");
#endif

    ctx->pc = 0x19f2a0u;

    // 0x19f2a0: 0x8060680  j           func_181A00
    ctx->pc = 0x19F2A0u;
    ctx->pc = 0x19F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2A0u;
            // 0x19f2a4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsFreeEs_0x181a00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F2A8u;
}
