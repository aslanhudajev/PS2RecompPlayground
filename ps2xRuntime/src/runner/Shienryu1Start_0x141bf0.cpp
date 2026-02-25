#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Shienryu1Start
// Address: 0x141bf0 - 0x141c00
void Shienryu1Start_0x141bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Shienryu1Start_0x141bf0");
#endif

    ctx->pc = 0x141bf0u;

    // 0x141bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141bf4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x141BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BF8u;
            // 0x141bfc: 0xac237910  sw          $v1, 0x7910($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141C00u;
}
