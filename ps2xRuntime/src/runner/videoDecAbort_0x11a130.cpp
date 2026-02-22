#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecAbort
// Address: 0x11a130 - 0x11a140
void videoDecAbort_0x11a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a130u;

    // 0x11a130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a138: 0x3e00008  jr          $ra
    ctx->pc = 0x11A138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A138u;
            // 0x11a13c: 0xac8300a8  sw          $v1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A140u;
}
