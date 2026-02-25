#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setUVInfo
// Address: 0x16fef0 - 0x16ffc0
void setUVInfo_0x16fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setUVInfo_0x16fef0");
#endif

    ctx->pc = 0x16fef0u;

    // 0x16fef0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16fef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16fef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fef8: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x16fef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x16fefc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x16fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x16ff00: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x16FF00u;
    {
        const bool branch_taken_0x16ff00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF00u;
            // 0x16ff04: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff00) {
            ctx->pc = 0x16FFB8u;
            goto label_16ffb8;
        }
    }
    ctx->pc = 0x16FF08u;
label_16ff08:
    // 0x16ff08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16ff0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16ff10: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x16ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x16ff14: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x16ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x16ff18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff1c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x16ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x16ff20: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x16ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x16ff2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff30: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x16ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x16ff34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff3c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x16ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x16ff40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff44: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x16ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x16ff48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff50: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x16ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x16ff54: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff58: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x16ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x16ff5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff64: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x16ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x16ff68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff6c: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x16ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x16ff70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff78: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x16ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x16ff7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff80: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x16ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x16ff84: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ff8c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x16ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x16ff90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ff94: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x16ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x16ff98: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ff9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ffa0: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x16ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x16ffa4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ffa8: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x16ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x16ffac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ffb0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x16FFB0u;
    {
        const bool branch_taken_0x16ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFB0u;
            // 0x16ffb4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffb0) {
            ctx->pc = 0x16FF08u;
            goto label_16ff08;
        }
    }
    ctx->pc = 0x16FFB8u;
label_16ffb8:
    // 0x16ffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFB8u;
            // 0x16ffbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF08u: goto label_16ff08;
            case 0x16FFB8u: goto label_16ffb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FFC0u;
}
