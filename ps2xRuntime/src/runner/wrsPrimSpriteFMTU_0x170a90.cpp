#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimSpriteFMTU
// Address: 0x170a90 - 0x170a9c
void wrsPrimSpriteFMTU_0x170a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimSpriteFMTU_0x170a90");
#endif

    ctx->pc = 0x170a90u;

    // 0x170a90: 0x24022916  addiu       $v0, $zero, 0x2916
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10518));
    // 0x170a94: 0x805c3f0  j           func_170FC0
    ctx->pc = 0x170A94u;
    ctx->pc = 0x170A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A94u;
            // 0x170a98: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170FC0u;
    if (runtime->hasFunction(0x170FC0u)) {
        auto targetFn = runtime->lookupFunction(0x170FC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        wrsPrimAddMT_0x170fc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170A9Cu;
}
