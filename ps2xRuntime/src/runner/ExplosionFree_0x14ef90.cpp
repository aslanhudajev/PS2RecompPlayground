#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionFree
// Address: 0x14ef90 - 0x14efd8
void ExplosionFree_0x14ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionFree_0x14ef90");
#endif

    ctx->pc = 0x14ef90u;

    // 0x14ef90: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x14ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14ef94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EF94u;
    {
        const bool branch_taken_0x14ef94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef94) {
            ctx->pc = 0x14EFA8u;
            goto label_14efa8;
        }
    }
    ctx->pc = 0x14EF9Cu;
    // 0x14ef9c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14efa0: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x14efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x14efa4: 0x0  nop
    ctx->pc = 0x14efa4u;
    // NOP
label_14efa8:
    // 0x14efa8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14efac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EFACu;
    {
        const bool branch_taken_0x14efac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efac) {
            ctx->pc = 0x14EFC0u;
            goto label_14efc0;
        }
    }
    ctx->pc = 0x14EFB4u;
    // 0x14efb4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14efb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14EFB8u;
    {
        const bool branch_taken_0x14efb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFB8u;
            // 0x14efbc: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efb8) {
            ctx->pc = 0x14EFD0u;
            goto label_14efd0;
        }
    }
    ctx->pc = 0x14EFC0u;
label_14efc0:
    // 0x14efc0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14efc4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14efc8: 0xac229d20  sw          $v0, -0x62E0($at)
    ctx->pc = 0x14efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941984), GPR_U32(ctx, 2));
    // 0x14efcc: 0x0  nop
    ctx->pc = 0x14efccu;
    // NOP
label_14efd0:
    // 0x14efd0: 0x804ea3c  j           func_13A8F0
    ctx->pc = 0x14EFD0u;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        free_0x13a8f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14EFD8u;
}
