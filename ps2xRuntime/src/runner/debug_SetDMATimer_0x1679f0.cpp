#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_SetDMATimer
// Address: 0x1679f0 - 0x167a04
void debug_SetDMATimer_0x1679f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_SetDMATimer_0x1679f0");
#endif

    ctx->pc = 0x1679f0u;

    // 0x1679f0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1679f4: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 0))); // MMIO: 0x10000000
    // 0x1679f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1679fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1679FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679FCu;
            // 0x167a00: 0xac234c20  sw          $v1, 0x4C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167A04u;
}
