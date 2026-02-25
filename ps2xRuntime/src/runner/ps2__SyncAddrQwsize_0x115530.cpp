#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _SyncAddrQwsize
// Address: 0x115530 - 0x115550
void ps2__SyncAddrQwsize_0x115530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__SyncAddrQwsize_0x115530");
#endif

    ctx->pc = 0x115530u;

    // 0x115530: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115530u;
    {
        const bool branch_taken_0x115530 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x115534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115530u;
            // 0x115534: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115530) {
            ctx->pc = 0x115548u;
            goto label_115548;
        }
    }
    ctx->pc = 0x115538u;
    // 0x115538: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11553c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115540: 0x804bd56  j           func_12F558
    ctx->pc = 0x115540u;
    ctx->pc = 0x115544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115540u;
            // 0x115544: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F558u;
    if (runtime->hasFunction(0x12F558u)) {
        auto targetFn = runtime->lookupFunction(0x12F558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SyncDCache_0x12f558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x115548u;
label_115548:
    // 0x115548: 0x3e00008  jr          $ra
    ctx->pc = 0x115548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115548u: goto label_115548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115550u;
}
