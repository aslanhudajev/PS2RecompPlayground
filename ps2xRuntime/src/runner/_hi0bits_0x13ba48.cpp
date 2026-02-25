#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hi0bits
// Address: 0x13ba48 - 0x13bacc
void _hi0bits_0x13ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hi0bits_0x13ba48");
#endif

    ctx->pc = 0x13ba48u;

    // 0x13ba48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13ba4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ba4cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13ba50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA50u;
    {
        const bool branch_taken_0x13ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA50u;
            // 0x13ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba50) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13BA58u;
    // 0x13ba58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13ba5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x13ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_13ba60:
    // 0x13ba60: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x13ba64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ba64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13ba68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA68u;
    {
        const bool branch_taken_0x13ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba68) {
            ctx->pc = 0x13BA78u;
            goto label_13ba78;
        }
    }
    ctx->pc = 0x13BA70u;
    // 0x13ba70: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13ba74: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_13ba78:
    // 0x13ba78: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x13ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x13ba7c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ba7cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13ba80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA80u;
    {
        const bool branch_taken_0x13ba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba80) {
            ctx->pc = 0x13BA90u;
            goto label_13ba90;
        }
    }
    ctx->pc = 0x13BA88u;
    // 0x13ba88: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ba8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_13ba90:
    // 0x13ba90: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x13ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x13ba94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ba94u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13ba98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA98u;
    {
        const bool branch_taken_0x13ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba98) {
            ctx->pc = 0x13BAA8u;
            goto label_13baa8;
        }
    }
    ctx->pc = 0x13BAA0u;
    // 0x13baa0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x13baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x13baa4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13baa8:
    // 0x13baa8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAA8u;
    {
        const bool branch_taken_0x13baa8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x13BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAA8u;
            // 0x13baac: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baa8) {
            ctx->pc = 0x13BAC0u;
            goto label_13bac0;
        }
    }
    ctx->pc = 0x13BAB0u;
    // 0x13bab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13bab4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bab4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x13bab8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BAB8u;
    {
        const bool branch_taken_0x13bab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAB8u;
            // 0x13babc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bab8) {
            ctx->pc = 0x13BAC4u;
            goto label_13bac4;
        }
    }
    ctx->pc = 0x13BAC0u;
label_13bac0:
    // 0x13bac0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13bac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bac4:
    // 0x13bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BA60u: goto label_13ba60;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA90u: goto label_13ba90;
            case 0x13BAA8u: goto label_13baa8;
            case 0x13BAC0u: goto label_13bac0;
            case 0x13BAC4u: goto label_13bac4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BACCu;
}
