#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsResetFrame
// Address: 0x141bb0 - 0x141bbc
void wrsResetFrame_0x141bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsResetFrame_0x141bb0");
#endif

    ctx->pc = 0x141bb0u;

    // 0x141bb0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x141BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BB4u;
            // 0x141bb8: 0xac207918  sw          $zero, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141BBCu;
}
