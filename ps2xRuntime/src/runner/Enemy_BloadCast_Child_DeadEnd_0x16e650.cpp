#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_Child_DeadEnd
// Address: 0x16e650 - 0x16e680
void Enemy_BloadCast_Child_DeadEnd_0x16e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_Child_DeadEnd_0x16e650");
#endif

    ctx->pc = 0x16e650u;

    // 0x16e650: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E650u;
    {
        const bool branch_taken_0x16e650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E650u;
            // 0x16e654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e650) {
            ctx->pc = 0x16E678u;
            goto label_16e678;
        }
    }
    ctx->pc = 0x16E658u;
label_16e658:
    // 0x16e658: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16e65c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E65Cu;
    {
        const bool branch_taken_0x16e65c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x16e65c) {
            ctx->pc = 0x16E668u;
            goto label_16e668;
        }
    }
    ctx->pc = 0x16E664u;
    // 0x16e664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16e668:
    // 0x16e668: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x16e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x16e66c: 0x0  nop
    ctx->pc = 0x16e66cu;
    // NOP
    // 0x16e670: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16E670u;
    {
        const bool branch_taken_0x16e670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e670) {
            ctx->pc = 0x16E658u;
            goto label_16e658;
        }
    }
    ctx->pc = 0x16E678u;
label_16e678:
    // 0x16e678: 0x3e00008  jr          $ra
    ctx->pc = 0x16E678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E658u: goto label_16e658;
            case 0x16E668u: goto label_16e668;
            case 0x16E678u: goto label_16e678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E680u;
}
