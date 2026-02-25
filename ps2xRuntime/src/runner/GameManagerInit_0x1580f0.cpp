#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameManagerInit
// Address: 0x1580f0 - 0x158124
void GameManagerInit_0x1580f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameManagerInit_0x1580f0");
#endif

    ctx->pc = 0x1580f0u;

    // 0x1580f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1580f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1580f8: 0xac203508  sw          $zero, 0x3508($at)
    ctx->pc = 0x1580f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
    // 0x1580fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158100: 0xac202c40  sw          $zero, 0x2C40($at)
    ctx->pc = 0x158100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11328), GPR_U32(ctx, 0));
    // 0x158104: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158108: 0xac223500  sw          $v0, 0x3500($at)
    ctx->pc = 0x158108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13568), GPR_U32(ctx, 2));
    // 0x15810c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x15810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x158110: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x158110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x158114: 0xac229bb8  sw          $v0, -0x6448($at)
    ctx->pc = 0x158114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
    // 0x158118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15811c: 0x8056054  j           func_158150
    ctx->pc = 0x15811Cu;
    ctx->pc = 0x158120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15811Cu;
            // 0x158120: 0xac202cd0  sw          $zero, 0x2CD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        RnnyuNo_0x158150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x158124u;
}
