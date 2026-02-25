#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipAlloc
// Address: 0x1eceb0 - 0x1ecef4
void ChipAlloc_0x1eceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipAlloc_0x1eceb0");
#endif

    ctx->pc = 0x1eceb0u;

    // 0x1eceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eceb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eceb8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x1ECEB8u;
    SET_GPR_U32(ctx, 31, 0x1ECEC0u);
    ctx->pc = 0x1ECEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEB8u;
            // 0x1ecebc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEC0u; }
        if (ctx->pc != 0x1ECEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEC0u; }
        if (ctx->pc != 0x1ECEC0u) { return; }
    }
    ctx->pc = 0x1ECEC0u;
    // 0x1ecec0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1ecec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1ecec4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecec8: 0x8c233838  lw          $v1, 0x3838($at)
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14392)));
    // 0x1ececc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1ececcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1eced0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1eced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1eced4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECED4u;
    {
        const bool branch_taken_0x1eced4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eced4) {
            ctx->pc = 0x1ECEE0u;
            goto label_1ecee0;
        }
    }
    ctx->pc = 0x1ECEDCu;
    // 0x1ecedc: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x1ecedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_1ecee0:
    // 0x1ecee0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecee4: 0xac223838  sw          $v0, 0x3838($at)
    ctx->pc = 0x1ecee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 2));
    // 0x1ecee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eceec: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEECu;
            // 0x1ecef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECEE0u: goto label_1ecee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECEF4u;
}
