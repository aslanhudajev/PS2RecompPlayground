#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getGameStage
// Address: 0x15bdd0 - 0x15bddc
void getGameStage_0x15bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getGameStage_0x15bdd0");
#endif

    ctx->pc = 0x15bdd0u;

    // 0x15bdd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDD4u;
            // 0x15bdd8: 0x8c223514  lw          $v0, 0x3514($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BDDCu;
}
