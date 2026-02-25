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
// Address: 0x182130 - 0x18213c
void wrsSetAlphaFunc_0x182130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetAlphaFunc_0x182130");
#endif

    ctx->pc = 0x182130u;

    // 0x182130: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x182130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x182134: 0x3e00008  jr          $ra
    ctx->pc = 0x182134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182134u;
            // 0x182138: 0xac860024  sw          $a2, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18213Cu;
}
