#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ErrMessage
// Address: 0x188120 - 0x188130
void ErrMessage_0x188120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ErrMessage_0x188120");
#endif

    ctx->pc = 0x188120u;

    // 0x188120: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x188120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188124: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x188124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x188128: 0x804f1dc  j           func_13C770
    ctx->pc = 0x188128u;
    ctx->pc = 0x18812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188128u;
            // 0x18812c: 0x24842550  addiu       $a0, $a0, 0x2550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x13c770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188130u;
}
