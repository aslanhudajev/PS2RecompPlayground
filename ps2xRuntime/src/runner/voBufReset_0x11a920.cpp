#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufReset
// Address: 0x11a920 - 0x11a930
void voBufReset_0x11a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a920u;

    // 0x11a920: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x11a920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11a924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a928: 0x3e00008  jr          $ra
    ctx->pc = 0x11A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A928u;
            // 0x11a92c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A930u;
}
