#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _iSyncAddrQwsize
// Address: 0x115550 - 0x115570
void _iSyncAddrQwsize_0x115550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_iSyncAddrQwsize_0x115550");
#endif

    ctx->pc = 0x115550u;

    // 0x115550: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115550u;
    {
        const bool branch_taken_0x115550 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x115554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115550u;
            // 0x115554: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115550) {
            ctx->pc = 0x115568u;
            goto label_115568;
        }
    }
    ctx->pc = 0x115558u;
    // 0x115558: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x115558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11555c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115560: 0x804bd76  j           func_12F5D8
    ctx->pc = 0x115560u;
    ctx->pc = 0x115564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115560u;
            // 0x115564: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5D8u;
    if (runtime->hasFunction(0x12F5D8u)) {
        auto targetFn = runtime->lookupFunction(0x12F5D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iSyncDCache_0x12f5d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x115568u;
label_115568:
    // 0x115568: 0x3e00008  jr          $ra
    ctx->pc = 0x115568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115568u: goto label_115568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115570u;
}
