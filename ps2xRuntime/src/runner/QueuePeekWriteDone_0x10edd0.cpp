#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueuePeekWriteDone
// Address: 0x10edd0 - 0x10ee0c
void QueuePeekWriteDone_0x10edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10edd0u;

    // 0x10edd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edd4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10edd8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10eddc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ede0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ede4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10ede8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10edec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10edf0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10edf4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EDF4u;
    {
        const bool branch_taken_0x10edf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDF4u;
            // 0x10edf8: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edf4) {
            ctx->pc = 0x10EE04u;
            goto label_10ee04;
        }
    }
    ctx->pc = 0x10EDFCu;
    // 0x10edfc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10ee00: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x10ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_10ee04:
    // 0x10ee04: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EE04u: goto label_10ee04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EE0Cu;
}
