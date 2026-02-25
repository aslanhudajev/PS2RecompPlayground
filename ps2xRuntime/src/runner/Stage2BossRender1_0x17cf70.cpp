#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossRender1
// Address: 0x17cf70 - 0x17cf7c
void Stage2BossRender1_0x17cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossRender1_0x17cf70");
#endif

    ctx->pc = 0x17cf70u;

    // 0x17cf70: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cf74: 0x8060510  j           func_181440
    ctx->pc = 0x17CF74u;
    ctx->pc = 0x17CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF74u;
            // 0x17cf78: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        CloneRenderFunction2_0x181440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17CF7Cu;
}
