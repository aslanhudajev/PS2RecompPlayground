#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotLaserDel
// Address: 0x14fc80 - 0x14fcc8
void ShotLaserDel_0x14fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotLaserDel_0x14fc80");
#endif

    ctx->pc = 0x14fc80u;

    // 0x14fc80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14fc84: 0x8c282160  lw          $t0, 0x2160($at)
    ctx->pc = 0x14fc84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x14fc88: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x14FC88u;
    {
        const bool branch_taken_0x14fc88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC88u;
            // 0x14fc8c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc88) {
            ctx->pc = 0x14FCC0u;
            goto label_14fcc0;
        }
    }
    ctx->pc = 0x14FC90u;
    // 0x14fc90: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fc94: 0x0  nop
    ctx->pc = 0x14fc94u;
    // NOP
label_14fc98:
    // 0x14fc98: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x14fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14fc9c: 0x14a60006  bne         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FC9Cu;
    {
        const bool branch_taken_0x14fc9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x14FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC9Cu;
            // 0x14fca0: 0x8d07004c  lw          $a3, 0x4C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc9c) {
            ctx->pc = 0x14FCB8u;
            goto label_14fcb8;
        }
    }
    ctx->pc = 0x14FCA4u;
    // 0x14fca4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14fca8: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FCA8u;
    {
        const bool branch_taken_0x14fca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x14fca8) {
            ctx->pc = 0x14FCB8u;
            goto label_14fcb8;
        }
    }
    ctx->pc = 0x14FCB0u;
    // 0x14fcb0: 0xad030030  sw          $v1, 0x30($t0)
    ctx->pc = 0x14fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
    // 0x14fcb4: 0x0  nop
    ctx->pc = 0x14fcb4u;
    // NOP
label_14fcb8:
    // 0x14fcb8: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14FCB8u;
    {
        const bool branch_taken_0x14fcb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCB8u;
            // 0x14fcbc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcb8) {
            ctx->pc = 0x14FC98u;
            goto label_14fc98;
        }
    }
    ctx->pc = 0x14FCC0u;
label_14fcc0:
    // 0x14fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FC98u: goto label_14fc98;
            case 0x14FCB8u: goto label_14fcb8;
            case 0x14FCC0u: goto label_14fcc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FCC8u;
}
