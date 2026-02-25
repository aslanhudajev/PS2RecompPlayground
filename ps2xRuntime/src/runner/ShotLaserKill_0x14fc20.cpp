#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotLaserKill
// Address: 0x14fc20 - 0x14fc78
void ShotLaserKill_0x14fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotLaserKill_0x14fc20");
#endif

    ctx->pc = 0x14fc20u;

    // 0x14fc20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14fc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14fc24: 0x8c292160  lw          $t1, 0x2160($at)
    ctx->pc = 0x14fc24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x14fc28: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FC28u;
    {
        const bool branch_taken_0x14fc28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC28u;
            // 0x14fc2c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc28) {
            ctx->pc = 0x14FC70u;
            goto label_14fc70;
        }
    }
    ctx->pc = 0x14FC30u;
    // 0x14fc30: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x14fc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fc34: 0x0  nop
    ctx->pc = 0x14fc34u;
    // NOP
label_14fc38:
    // 0x14fc38: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x14fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x14fc3c: 0x14c7000a  bne         $a2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x14FC3Cu;
    {
        const bool branch_taken_0x14fc3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x14FC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC3Cu;
            // 0x14fc40: 0x8d28004c  lw          $t0, 0x4C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc3c) {
            ctx->pc = 0x14FC68u;
            goto label_14fc68;
        }
    }
    ctx->pc = 0x14FC44u;
    // 0x14fc44: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x14fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14fc48: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FC48u;
    {
        const bool branch_taken_0x14fc48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x14fc48) {
            ctx->pc = 0x14FC68u;
            goto label_14fc68;
        }
    }
    ctx->pc = 0x14FC50u;
    // 0x14fc50: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x14fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x14fc54: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x14fc54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14fc58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FC58u;
    {
        const bool branch_taken_0x14fc58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc58) {
            ctx->pc = 0x14FC68u;
            goto label_14fc68;
        }
    }
    ctx->pc = 0x14FC60u;
    // 0x14fc60: 0xad230030  sw          $v1, 0x30($t1)
    ctx->pc = 0x14fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 3));
    // 0x14fc64: 0x0  nop
    ctx->pc = 0x14fc64u;
    // NOP
label_14fc68:
    // 0x14fc68: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14FC68u;
    {
        const bool branch_taken_0x14fc68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC68u;
            // 0x14fc6c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc68) {
            ctx->pc = 0x14FC38u;
            goto label_14fc38;
        }
    }
    ctx->pc = 0x14FC70u;
label_14fc70:
    // 0x14fc70: 0x3e00008  jr          $ra
    ctx->pc = 0x14FC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FC38u: goto label_14fc38;
            case 0x14FC68u: goto label_14fc68;
            case 0x14FC70u: goto label_14fc70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FC78u;
}
