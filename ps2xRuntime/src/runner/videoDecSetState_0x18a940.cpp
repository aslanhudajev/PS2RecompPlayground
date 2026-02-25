#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecSetState
// Address: 0x18a940 - 0x18a94c
void videoDecSetState_0x18a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecSetState_0x18a940");
#endif

    ctx->pc = 0x18a940u;

    // 0x18a940: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x18a944: 0x3e00008  jr          $ra
    ctx->pc = 0x18A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A944u;
            // 0x18a948: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A94Cu;
}
