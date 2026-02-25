#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotDeadFunction
// Address: 0x152a20 - 0x152a68
void ShotDeadFunction_0x152a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotDeadFunction_0x152a20");
#endif

    ctx->pc = 0x152a20u;

    // 0x152a20: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x152a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x152a24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152A24u;
    {
        const bool branch_taken_0x152a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a24) {
            ctx->pc = 0x152A38u;
            goto label_152a38;
        }
    }
    ctx->pc = 0x152A2Cu;
    // 0x152a2c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x152a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x152a30: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x152a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x152a34: 0x0  nop
    ctx->pc = 0x152a34u;
    // NOP
label_152a38:
    // 0x152a38: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x152a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x152a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152A3Cu;
    {
        const bool branch_taken_0x152a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a3c) {
            ctx->pc = 0x152A50u;
            goto label_152a50;
        }
    }
    ctx->pc = 0x152A44u;
    // 0x152a44: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x152a48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x152A48u;
    {
        const bool branch_taken_0x152a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A48u;
            // 0x152a4c: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a48) {
            ctx->pc = 0x152A60u;
            goto label_152a60;
        }
    }
    ctx->pc = 0x152A50u;
label_152a50:
    // 0x152a50: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x152a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x152a54: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x152a58: 0xac222160  sw          $v0, 0x2160($at)
    ctx->pc = 0x152a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8544), GPR_U32(ctx, 2));
    // 0x152a5c: 0x0  nop
    ctx->pc = 0x152a5cu;
    // NOP
label_152a60:
    // 0x152a60: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x152A60u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x152A68u;
}
