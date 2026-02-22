#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SoundCallBackFunction
// Address: 0x10c018 - 0x10c028
void SoundCallBackFunction_0x10c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c018u;

    // 0x10c018: 0x8f828390  lw          $v0, -0x7C70($gp)
    ctx->pc = 0x10c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10c01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c020: 0x3e00008  jr          $ra
    ctx->pc = 0x10C020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C020u;
            // 0x10c024: 0xaf828390  sw          $v0, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C028u;
}
