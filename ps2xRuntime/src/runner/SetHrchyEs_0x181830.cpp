#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetHrchyEs
// Address: 0x181830 - 0x181844
void SetHrchyEs_0x181830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetHrchyEs_0x181830");
#endif

    ctx->pc = 0x181830u;

    // 0x181830: 0xac8501d0  sw          $a1, 0x1D0($a0)
    ctx->pc = 0x181830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 5));
    // 0x181834: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x181838: 0x248501d0  addiu       $a1, $a0, 0x1D0
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x18183c: 0x3e00008  jr          $ra
    ctx->pc = 0x18183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18183Cu;
            // 0x181840: 0xac65001c  sw          $a1, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181844u;
}
