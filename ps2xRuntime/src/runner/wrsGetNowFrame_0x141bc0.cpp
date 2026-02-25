#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetNowFrame
// Address: 0x141bc0 - 0x141bcc
void wrsGetNowFrame_0x141bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetNowFrame_0x141bc0");
#endif

    ctx->pc = 0x141bc0u;

    // 0x141bc0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x141BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BC4u;
            // 0x141bc8: 0x8c227918  lw          $v0, 0x7918($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31000)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141BCCu;
}
