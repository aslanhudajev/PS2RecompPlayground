#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_get_ancestor
// Address: 0x1102c8 - 0x1102d0
void _buf_get_ancestor_0x1102c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_get_ancestor_0x1102c8");
#endif

    ctx->pc = 0x1102c8u;

    // 0x1102c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1102C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1102C8u;
            // 0x1102cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1102D0u;
}
