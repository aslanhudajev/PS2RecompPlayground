#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bossStateGet
// Address: 0x1621a0 - 0x1621ac
void bossStateGet_0x1621a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bossStateGet_0x1621a0");
#endif

    ctx->pc = 0x1621a0u;

    // 0x1621a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1621a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1621A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1621A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621A4u;
            // 0x1621a8: 0x8c224bd0  lw          $v0, 0x4BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1621ACu;
}
