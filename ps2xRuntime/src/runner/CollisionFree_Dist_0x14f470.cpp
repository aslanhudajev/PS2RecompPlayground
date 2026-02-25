#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionFree_Dist
// Address: 0x14f470 - 0x14f4b8
void CollisionFree_Dist_0x14f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionFree_Dist_0x14f470");
#endif

    ctx->pc = 0x14f470u;

    // 0x14f470: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x14f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f474: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F474u;
    {
        const bool branch_taken_0x14f474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f474) {
            ctx->pc = 0x14F488u;
            goto label_14f488;
        }
    }
    ctx->pc = 0x14F47Cu;
    // 0x14f47c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f480: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x14f480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x14f484: 0x0  nop
    ctx->pc = 0x14f484u;
    // NOP
label_14f488:
    // 0x14f488: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f48c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F48Cu;
    {
        const bool branch_taken_0x14f48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f48c) {
            ctx->pc = 0x14F4A0u;
            goto label_14f4a0;
        }
    }
    ctx->pc = 0x14F494u;
    // 0x14f494: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F498u;
    {
        const bool branch_taken_0x14f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F498u;
            // 0x14f49c: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f498) {
            ctx->pc = 0x14F4B0u;
            goto label_14f4b0;
        }
    }
    ctx->pc = 0x14F4A0u;
label_14f4a0:
    // 0x14f4a0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f4a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f4a8: 0xac229d30  sw          $v0, -0x62D0($at)
    ctx->pc = 0x14f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942000), GPR_U32(ctx, 2));
    // 0x14f4ac: 0x0  nop
    ctx->pc = 0x14f4acu;
    // NOP
label_14f4b0:
    // 0x14f4b0: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x14F4B0u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14F4B8u;
}
