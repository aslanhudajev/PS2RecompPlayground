#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcInit
// Address: 0x12b920 - 0x12b934
void _alalcInit_0x12b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcInit_0x12b920");
#endif

    ctx->pc = 0x12b920u;

    // 0x12b920: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x12b920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x12b924: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x12b924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x12b928: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12b928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B92Cu;
            // 0x12b930: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B934u;
}
