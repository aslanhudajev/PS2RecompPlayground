#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecReset
// Address: 0x18a9a0 - 0x18a9a8
void videoDecReset_0x18a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecReset_0x18a9a0");
#endif

    ctx->pc = 0x18a9a0u;

    // 0x18a9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9A0u;
            // 0x18a9a4: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A9A8u;
}
