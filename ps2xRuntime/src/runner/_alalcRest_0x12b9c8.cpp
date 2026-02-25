#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcRest
// Address: 0x12b9c8 - 0x12b9e0
void _alalcRest_0x12b9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcRest_0x12b9c8");
#endif

    ctx->pc = 0x12b9c8u;

    // 0x12b9c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b9cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12b9d0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B9D8u;
            // 0x12b9dc: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B9E0u;
}
