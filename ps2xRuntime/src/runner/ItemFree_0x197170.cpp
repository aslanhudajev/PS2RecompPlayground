#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemFree
// Address: 0x197170 - 0x1971b8
void ItemFree_0x197170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemFree_0x197170");
#endif

    ctx->pc = 0x197170u;

    // 0x197170: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x197170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x197174: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197174u;
    {
        const bool branch_taken_0x197174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197174) {
            ctx->pc = 0x197188u;
            goto label_197188;
        }
    }
    ctx->pc = 0x19717Cu;
    // 0x19717c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x197180: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x197180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x197184: 0x0  nop
    ctx->pc = 0x197184u;
    // NOP
label_197188:
    // 0x197188: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19718c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19718Cu;
    {
        const bool branch_taken_0x19718c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19718c) {
            ctx->pc = 0x1971A0u;
            goto label_1971a0;
        }
    }
    ctx->pc = 0x197194u;
    // 0x197194: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x197198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197198u;
    {
        const bool branch_taken_0x197198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197198u;
            // 0x19719c: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197198) {
            ctx->pc = 0x1971B0u;
            goto label_1971b0;
        }
    }
    ctx->pc = 0x1971A0u;
label_1971a0:
    // 0x1971a0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1971a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1971a4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1971a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1971a8: 0xac221608  sw          $v0, 0x1608($at)
    ctx->pc = 0x1971a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5640), GPR_U32(ctx, 2));
    // 0x1971ac: 0x0  nop
    ctx->pc = 0x1971acu;
    // NOP
label_1971b0:
    // 0x1971b0: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x1971B0u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1971B8u;
}
