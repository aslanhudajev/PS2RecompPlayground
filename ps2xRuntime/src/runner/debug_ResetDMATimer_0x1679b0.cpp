#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_ResetDMATimer
// Address: 0x1679b0 - 0x1679c4
void debug_ResetDMATimer_0x1679b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_ResetDMATimer_0x1679b0");
#endif

    ctx->pc = 0x1679b0u;

    // 0x1679b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1679b4: 0xac204c18  sw          $zero, 0x4C18($at)
    ctx->pc = 0x1679b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19480), GPR_U32(ctx, 0));
    // 0x1679b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1679b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1679bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1679BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679BCu;
            // 0x1679c0: 0xac204c20  sw          $zero, 0x4C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1679C4u;
}
