#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEn6_02_Hontai
// Address: 0x1aa490 - 0x1aa498
void UnInitEn6_02_Hontai_0x1aa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEn6_02_Hontai_0x1aa490");
#endif

    ctx->pc = 0x1aa490u;

    // 0x1aa490: 0x8060680  j           func_181A00
    ctx->pc = 0x1AA490u;
    ctx->pc = 0x1AA494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA490u;
            // 0x1aa494: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsFreeEs_0x181a00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA498u;
}
