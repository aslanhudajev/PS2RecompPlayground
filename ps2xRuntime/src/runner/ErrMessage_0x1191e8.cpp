#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ErrMessage
// Address: 0x1191e8 - 0x1191f8
void ErrMessage_0x1191e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1191e8u;

    // 0x1191e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1191e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191ec: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1191ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1191f0: 0x804ace4  j           func_12B390
    ctx->pc = 0x1191F0u;
    ctx->pc = 0x1191F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1191F0u;
            // 0x1191f4: 0x24844448  addiu       $a0, $a0, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1191F8u;
}
