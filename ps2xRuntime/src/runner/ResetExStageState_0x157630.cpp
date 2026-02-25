#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResetExStageState
// Address: 0x157630 - 0x157644
void ResetExStageState_0x157630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResetExStageState_0x157630");
#endif

    ctx->pc = 0x157630u;

    // 0x157630: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157634: 0xac202c70  sw          $zero, 0x2C70($at)
    ctx->pc = 0x157634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11376), GPR_U32(ctx, 0));
    // 0x157638: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15763c: 0x3e00008  jr          $ra
    ctx->pc = 0x15763Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15763Cu;
            // 0x157640: 0xac202c74  sw          $zero, 0x2C74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157644u;
}
