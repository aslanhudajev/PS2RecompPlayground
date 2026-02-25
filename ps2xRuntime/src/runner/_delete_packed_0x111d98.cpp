#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _delete_packed
// Address: 0x111d98 - 0x111db0
void _delete_packed_0x111d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_delete_packed_0x111d98");
#endif

    ctx->pc = 0x111d98u;

    // 0x111d98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111D98u;
    {
        const bool branch_taken_0x111d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111d98) {
            ctx->pc = 0x111DA8u;
            goto label_111da8;
        }
    }
    ctx->pc = 0x111DA0u;
    // 0x111da0: 0x8043574  j           func_10D5D0
    ctx->pc = 0x111DA0u;
    ctx->pc = 0x111DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111DA0u;
            // 0x111da4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D5D0u;
    if (runtime->hasFunction(0x10D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x10D5D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceHiMemFree_0x10d5d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111DA8u;
label_111da8:
    // 0x111da8: 0x3e00008  jr          $ra
    ctx->pc = 0x111DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111DA8u: goto label_111da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111DB0u;
}
