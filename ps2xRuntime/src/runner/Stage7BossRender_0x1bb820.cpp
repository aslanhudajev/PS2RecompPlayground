#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossRender
// Address: 0x1bb820 - 0x1bb82c
void Stage7BossRender_0x1bb820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossRender_0x1bb820");
#endif

    ctx->pc = 0x1bb820u;

    // 0x1bb820: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bb820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb824: 0x8060510  j           func_181440
    ctx->pc = 0x1BB824u;
    ctx->pc = 0x1BB828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB824u;
            // 0x1bb828: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction2_0x181440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BB82Cu;
}
