#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionAlloc
// Address: 0x14efe0 - 0x14f024
void ExplosionAlloc_0x14efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionAlloc_0x14efe0");
#endif

    ctx->pc = 0x14efe0u;

    // 0x14efe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14efe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14efe8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x14EFE8u;
    SET_GPR_U32(ctx, 31, 0x14EFF0u);
    ctx->pc = 0x14EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFE8u;
            // 0x14efec: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFF0u; }
        if (ctx->pc != 0x14EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFF0u; }
        if (ctx->pc != 0x14EFF0u) { return; }
    }
    ctx->pc = 0x14EFF0u;
    // 0x14eff0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x14eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x14eff4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14eff8: 0x8c239d20  lw          $v1, -0x62E0($at)
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
    // 0x14effc: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x14effcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x14f000: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x14f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x14f004: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F004u;
    {
        const bool branch_taken_0x14f004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f004) {
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14F00Cu;
    // 0x14f00c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x14f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_14f010:
    // 0x14f010: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14f014: 0xac229d20  sw          $v0, -0x62E0($at)
    ctx->pc = 0x14f014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941984), GPR_U32(ctx, 2));
    // 0x14f018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f01c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F01Cu;
            // 0x14f020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F010u: goto label_14f010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F024u;
}
