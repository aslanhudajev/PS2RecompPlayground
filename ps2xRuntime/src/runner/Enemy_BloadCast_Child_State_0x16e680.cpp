#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_Child_State
// Address: 0x16e680 - 0x16e6b0
void Enemy_BloadCast_Child_State_0x16e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_Child_State_0x16e680");
#endif

    ctx->pc = 0x16e680u;

    // 0x16e680: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E680u;
    {
        const bool branch_taken_0x16e680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E680u;
            // 0x16e684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e680) {
            ctx->pc = 0x16E6A8u;
            goto label_16e6a8;
        }
    }
    ctx->pc = 0x16E688u;
label_16e688:
    // 0x16e688: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x16e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x16e68c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x16e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x16e690: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x16e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x16e694: 0x0  nop
    ctx->pc = 0x16e694u;
    // NOP
    // 0x16e698: 0x0  nop
    ctx->pc = 0x16e698u;
    // NOP
    // 0x16e69c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16E69Cu;
    {
        const bool branch_taken_0x16e69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e69c) {
            ctx->pc = 0x16E688u;
            goto label_16e688;
        }
    }
    ctx->pc = 0x16E6A4u;
    // 0x16e6a4: 0x0  nop
    ctx->pc = 0x16e6a4u;
    // NOP
label_16e6a8:
    // 0x16e6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E688u: goto label_16e688;
            case 0x16E6A8u: goto label_16e6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E6B0u;
}
