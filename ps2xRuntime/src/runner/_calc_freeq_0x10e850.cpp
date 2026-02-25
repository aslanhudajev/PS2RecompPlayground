#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _calc_freeq
// Address: 0x10e850 - 0x10e85c
void _calc_freeq_0x10e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_calc_freeq_0x10e850");
#endif

    ctx->pc = 0x10e850u;

    // 0x10e850: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10e854: 0x3e00008  jr          $ra
    ctx->pc = 0x10E854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E854u;
            // 0x10e858: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E85Cu;
}
