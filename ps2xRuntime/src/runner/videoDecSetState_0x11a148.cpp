#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecSetState
// Address: 0x11a148 - 0x11a154
void videoDecSetState_0x11a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a148u;

    // 0x11a148: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x11a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x11a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A14Cu;
            // 0x11a150: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A154u;
}
