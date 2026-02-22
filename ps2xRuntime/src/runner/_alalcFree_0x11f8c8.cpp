#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcFree
// Address: 0x11f8c8 - 0x11f8d4
void _alalcFree_0x11f8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f8c8u;

    // 0x11f8c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8CCu;
            // 0x11f8d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F8D4u;
}
