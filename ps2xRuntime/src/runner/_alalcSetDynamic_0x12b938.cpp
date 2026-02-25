#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcSetDynamic
// Address: 0x12b938 - 0x12b944
void _alalcSetDynamic_0x12b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcSetDynamic_0x12b938");
#endif

    ctx->pc = 0x12b938u;

    // 0x12b938: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b93c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B93Cu;
            // 0x12b940: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B944u;
}
