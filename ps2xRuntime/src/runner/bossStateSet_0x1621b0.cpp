#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bossStateSet
// Address: 0x1621b0 - 0x1621bc
void bossStateSet_0x1621b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bossStateSet_0x1621b0");
#endif

    ctx->pc = 0x1621b0u;

    // 0x1621b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1621b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1621B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1621B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621B4u;
            // 0x1621b8: 0xac244bd0  sw          $a0, 0x4BD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1621BCu;
}
