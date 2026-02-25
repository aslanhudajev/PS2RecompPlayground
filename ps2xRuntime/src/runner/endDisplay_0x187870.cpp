#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: endDisplay
// Address: 0x187870 - 0x187884
void endDisplay_0x187870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("endDisplay_0x187870");
#endif

    ctx->pc = 0x187870u;

    // 0x187870: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187874: 0xac20cac0  sw          $zero, -0x3540($at)
    ctx->pc = 0x187874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953664), GPR_U32(ctx, 0));
    // 0x187878: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18787c: 0x3e00008  jr          $ra
    ctx->pc = 0x18787Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18787Cu;
            // 0x187880: 0xac20fd78  sw          $zero, -0x288($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187884u;
}
