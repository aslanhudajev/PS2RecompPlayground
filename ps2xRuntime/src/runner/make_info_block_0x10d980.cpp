#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: make_info_block
// Address: 0x10d980 - 0x10d990
void make_info_block_0x10d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("make_info_block_0x10d980");
#endif

    ctx->pc = 0x10d980u;

    // 0x10d980: 0x637c0  sll         $a2, $a2, 31
    ctx->pc = 0x10d980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 31));
    // 0x10d984: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10d984u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x10d988: 0x3e00008  jr          $ra
    ctx->pc = 0x10D988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D988u;
            // 0x10d98c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D990u;
}
