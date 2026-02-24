#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufCreate
// Address: 0x119550 - 0x11956c
void readBufCreate_0x119550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufCreate_0x119550");
#endif

    ctx->pc = 0x119550u;

    // 0x119550: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x119550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x119554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119558: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11955c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11955cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x119560: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x119560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x119564: 0x3e00008  jr          $ra
    ctx->pc = 0x119564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119564u;
            // 0x119568: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11956Cu;
}
