#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: QueuePeekWriteDone
// Address: 0x12fec8 - 0x12ff04
void QueuePeekWriteDone_0x12fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("QueuePeekWriteDone_0x12fec8");
#endif

    ctx->pc = 0x12fec8u;

    // 0x12fec8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12fec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fecc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12fed0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x12fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12fed4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12fed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12fedc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12fee0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x12fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x12fee4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12fee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12feec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FEECu;
    {
        const bool branch_taken_0x12feec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEECu;
            // 0x12fef0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feec) {
            ctx->pc = 0x12FEFCu;
            goto label_12fefc;
        }
    }
    ctx->pc = 0x12FEF4u;
    // 0x12fef4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12fef8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_12fefc:
    // 0x12fefc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FEFCu: goto label_12fefc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FF04u;
}
