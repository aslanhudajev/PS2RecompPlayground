#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionFree_Src
// Address: 0x14f420 - 0x14f468
void CollisionFree_Src_0x14f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionFree_Src_0x14f420");
#endif

    ctx->pc = 0x14f420u;

    // 0x14f420: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f424: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F424u;
    {
        const bool branch_taken_0x14f424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f424) {
            ctx->pc = 0x14F438u;
            goto label_14f438;
        }
    }
    ctx->pc = 0x14F42Cu;
    // 0x14f42c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f430: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x14f430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x14f434: 0x0  nop
    ctx->pc = 0x14f434u;
    // NOP
label_14f438:
    // 0x14f438: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f43c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F43Cu;
    {
        const bool branch_taken_0x14f43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f43c) {
            ctx->pc = 0x14F450u;
            goto label_14f450;
        }
    }
    ctx->pc = 0x14F444u;
    // 0x14f444: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F448u;
            // 0x14f44c: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F460u;
            goto label_14f460;
        }
    }
    ctx->pc = 0x14F450u;
label_14f450:
    // 0x14f450: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f454: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f458: 0xac229d38  sw          $v0, -0x62C8($at)
    ctx->pc = 0x14f458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942008), GPR_U32(ctx, 2));
    // 0x14f45c: 0x0  nop
    ctx->pc = 0x14f45cu;
    // NOP
label_14f460:
    // 0x14f460: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x14F460u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14F468u;
}
