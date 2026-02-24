#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _RefImageInit
// Address: 0x120148 - 0x120168
void ps2__RefImageInit_0x120148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__RefImageInit_0x120148");
#endif

    ctx->pc = 0x120148u;

    // 0x120148: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x12014c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x12014cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x120150: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x120150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x120154: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x120154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x120158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12015c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x12015cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x120160: 0x3e00008  jr          $ra
    ctx->pc = 0x120160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120160u;
            // 0x120164: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120168u;
}
