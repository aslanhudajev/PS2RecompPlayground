#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetAlphaFunc
// Address: 0x1e5580 - 0x1e558c
void wrsSetAlphaFunc_0x1e5580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetAlphaFunc_0x1e5580");
#endif

    ctx->pc = 0x1e5580u;

    // 0x1e5580: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x1e5580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x1e5584: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5584u;
            // 0x1e5588: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E558Cu;
}
