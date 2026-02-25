#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResultStepInit
// Address: 0x1595b0 - 0x1595c4
void ResultStepInit_0x1595b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResultStepInit_0x1595b0");
#endif

    ctx->pc = 0x1595b0u;

    // 0x1595b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1595b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1595b4: 0xac202ca8  sw          $zero, 0x2CA8($at)
    ctx->pc = 0x1595b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11432), GPR_U32(ctx, 0));
    // 0x1595b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1595bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1595BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1595C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1595BCu;
            // 0x1595c0: 0xac202ca0  sw          $zero, 0x2CA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1595C4u;
}
