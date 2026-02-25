#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setLocalCbp
// Address: 0x11b150 - 0x11b168
void setLocalCbp_0x11b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setLocalCbp_0x11b150");
#endif

    ctx->pc = 0x11b150u;

    // 0x11b150: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b154: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11b158: 0x24427278  addiu       $v0, $v0, 0x7278
    ctx->pc = 0x11b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29304));
    // 0x11b15c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b160: 0x3e00008  jr          $ra
    ctx->pc = 0x11B160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B160u;
            // 0x11b164: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B168u;
}
