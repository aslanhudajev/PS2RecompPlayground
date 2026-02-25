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
// Address: 0x19aea0 - 0x19aeac
void wrsSetAlphaFunc_0x19aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetAlphaFunc_0x19aea0");
#endif

    ctx->pc = 0x19aea0u;

    // 0x19aea0: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x19aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x19aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x19AEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEA4u;
            // 0x19aea8: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AEACu;
}
