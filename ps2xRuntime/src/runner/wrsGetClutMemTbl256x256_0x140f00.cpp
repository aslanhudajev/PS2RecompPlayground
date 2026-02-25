#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetClutMemTbl256x256
// Address: 0x140f00 - 0x140f2c
void wrsGetClutMemTbl256x256_0x140f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetClutMemTbl256x256_0x140f00");
#endif

    ctx->pc = 0x140f00u;

    // 0x140f00: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x140f00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x140f04: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140F04u;
    {
        const bool branch_taken_0x140f04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F04u;
            // 0x140f08: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f04) {
            ctx->pc = 0x140F14u;
            goto label_140f14;
        }
    }
    ctx->pc = 0x140F0Cu;
    // 0x140f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140F0Cu;
    {
        const bool branch_taken_0x140f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F0Cu;
            // 0x140f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f0c) {
            ctx->pc = 0x140F24u;
            goto label_140f24;
        }
    }
    ctx->pc = 0x140F14u;
label_140f14:
    // 0x140f14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140f18: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x140f1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140f20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140f24:
    // 0x140f24: 0x3e00008  jr          $ra
    ctx->pc = 0x140F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140F14u: goto label_140f14;
            case 0x140F24u: goto label_140f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140F2Cu;
}
