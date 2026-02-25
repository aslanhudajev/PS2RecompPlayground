#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGameMode
// Address: 0x15be00 - 0x15be0c
void setGameMode_0x15be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGameMode_0x15be00");
#endif

    ctx->pc = 0x15be00u;

    // 0x15be00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be04: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE04u;
            // 0x15be08: 0xac243518  sw          $a0, 0x3518($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BE0Cu;
}
