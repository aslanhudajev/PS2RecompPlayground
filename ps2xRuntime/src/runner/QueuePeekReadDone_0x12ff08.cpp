#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: QueuePeekReadDone
// Address: 0x12ff08 - 0x12ff44
void QueuePeekReadDone_0x12ff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("QueuePeekReadDone_0x12ff08");
#endif

    ctx->pc = 0x12ff08u;

    // 0x12ff08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12ff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff0c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x12ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ff10: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12ff14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ff18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12ff1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ff20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x12ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x12ff24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12ff28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12ff2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF2Cu;
    {
        const bool branch_taken_0x12ff2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF2Cu;
            // 0x12ff30: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff2c) {
            ctx->pc = 0x12FF3Cu;
            goto label_12ff3c;
        }
    }
    ctx->pc = 0x12FF34u;
    // 0x12ff34: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12ff38: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x12ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_12ff3c:
    // 0x12ff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FF3Cu: goto label_12ff3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FF44u;
}
