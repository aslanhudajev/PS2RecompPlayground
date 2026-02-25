#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsFrameAdd
// Address: 0x141bd0 - 0x141be8
void wrsFrameAdd_0x141bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsFrameAdd_0x141bd0");
#endif

    ctx->pc = 0x141bd0u;

    // 0x141bd0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141bd4: 0x8c237918  lw          $v1, 0x7918($at)
    ctx->pc = 0x141bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31000)));
    // 0x141bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141bdc: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141be0: 0x3e00008  jr          $ra
    ctx->pc = 0x141BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BE0u;
            // 0x141be4: 0xac237918  sw          $v1, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141BE8u;
}
