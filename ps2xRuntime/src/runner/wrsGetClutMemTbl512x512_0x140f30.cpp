#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetClutMemTbl512x512
// Address: 0x140f30 - 0x140f5c
void wrsGetClutMemTbl512x512_0x140f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetClutMemTbl512x512_0x140f30");
#endif

    ctx->pc = 0x140f30u;

    // 0x140f30: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x140f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x140f34: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140F34u;
    {
        const bool branch_taken_0x140f34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F34u;
            // 0x140f38: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f34) {
            ctx->pc = 0x140F44u;
            goto label_140f44;
        }
    }
    ctx->pc = 0x140F3Cu;
    // 0x140f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140F3Cu;
    {
        const bool branch_taken_0x140f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F3Cu;
            // 0x140f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f3c) {
            ctx->pc = 0x140F54u;
            goto label_140f54;
        }
    }
    ctx->pc = 0x140F44u;
label_140f44:
    // 0x140f44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140f48: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x140f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x140f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140f54:
    // 0x140f54: 0x3e00008  jr          $ra
    ctx->pc = 0x140F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140F44u: goto label_140f44;
            case 0x140F54u: goto label_140f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140F5Cu;
}
