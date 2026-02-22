#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecReset
// Address: 0x11a0e8 - 0x11a0f4
void videoDecReset_0x11a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0e8u;

    // 0x11a0e8: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x11a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x11a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11A0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0ECu;
            // 0x11a0f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A0F4u;
}
