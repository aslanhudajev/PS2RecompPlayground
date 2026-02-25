#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcFree
// Address: 0x12b948 - 0x12b954
void _alalcFree_0x12b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcFree_0x12b948");
#endif

    ctx->pc = 0x12b948u;

    // 0x12b948: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12b94c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B94Cu;
            // 0x12b950: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B954u;
}
