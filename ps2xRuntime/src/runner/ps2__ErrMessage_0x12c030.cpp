#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ErrMessage
// Address: 0x12c030 - 0x12c040
void ps2__ErrMessage_0x12c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__ErrMessage_0x12c030");
#endif

    ctx->pc = 0x12c030u;

    // 0x12c030: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c034: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x12c034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x12c038: 0x804c340  j           func_130D00
    ctx->pc = 0x12C038u;
    ctx->pc = 0x12C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C038u;
            // 0x12c03c: 0x2484f4f8  addiu       $a0, $a0, -0xB08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        scePrintf_0x130d00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C040u;
}
