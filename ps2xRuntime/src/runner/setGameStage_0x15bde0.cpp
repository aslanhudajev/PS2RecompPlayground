#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGameStage
// Address: 0x15bde0 - 0x15bdec
void setGameStage_0x15bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGameStage_0x15bde0");
#endif

    ctx->pc = 0x15bde0u;

    // 0x15bde0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDE4u;
            // 0x15bde8: 0xac243514  sw          $a0, 0x3514($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BDECu;
}
