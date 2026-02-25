#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetPrimNum
// Address: 0x1720b0 - 0x1720b8
void wrsSetPrimNum_0x1720b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetPrimNum_0x1720b0");
#endif

    ctx->pc = 0x1720b0u;

    // 0x1720b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1720B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1720B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720B0u;
            // 0x1720b4: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1720B8u;
}
