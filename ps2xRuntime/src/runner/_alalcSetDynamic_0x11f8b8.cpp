#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcSetDynamic
// Address: 0x11f8b8 - 0x11f8c4
void _alalcSetDynamic_0x11f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f8b8u;

    // 0x11f8b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8BCu;
            // 0x11f8c0: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F8C4u;
}
