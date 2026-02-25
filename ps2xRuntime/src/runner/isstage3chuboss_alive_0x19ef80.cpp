#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isstage3chuboss_alive
// Address: 0x19ef80 - 0x19ef8c
void isstage3chuboss_alive_0x19ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isstage3chuboss_alive_0x19ef80");
#endif

    ctx->pc = 0x19ef80u;

    // 0x19ef80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19ef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF84u;
            // 0x19ef88: 0x8c221a98  lw          $v0, 0x1A98($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EF8Cu;
}
