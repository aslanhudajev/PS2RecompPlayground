#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5EnemyGenerate
// Address: 0x16af10 - 0x16ba60
void Stage5EnemyGenerate_0x16af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5EnemyGenerate_0x16af10");
#endif

    ctx->pc = 0x16af10u;

    // 0x16af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16af14: 0x24030dac  addiu       $v1, $zero, 0xDAC
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    // 0x16af18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16af1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16af20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16af20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af24: 0x120302ae  beq         $s0, $v1, . + 4 + (0x2AE << 2)
    ctx->pc = 0x16AF24u;
    {
        const bool branch_taken_0x16af24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF24u;
            // 0x16af28: 0x24030d16  addiu       $v1, $zero, 0xD16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af24) {
            ctx->pc = 0x16B9E0u;
            goto label_16b9e0;
        }
    }
    ctx->pc = 0x16AF2Cu;
    // 0x16af2c: 0x120302a2  beq         $s0, $v1, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x16AF2Cu;
    {
        const bool branch_taken_0x16af2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af2c) {
            ctx->pc = 0x16B9B8u;
            goto label_16b9b8;
        }
    }
    ctx->pc = 0x16AF34u;
    // 0x16af34: 0x24030c80  addiu       $v1, $zero, 0xC80
    ctx->pc = 0x16af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x16af38: 0x12030299  beq         $s0, $v1, . + 4 + (0x299 << 2)
    ctx->pc = 0x16AF38u;
    {
        const bool branch_taken_0x16af38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF38u;
            // 0x16af3c: 0x24030c1c  addiu       $v1, $zero, 0xC1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af38) {
            ctx->pc = 0x16B9A0u;
            goto label_16b9a0;
        }
    }
    ctx->pc = 0x16AF40u;
    // 0x16af40: 0x12030291  beq         $s0, $v1, . + 4 + (0x291 << 2)
    ctx->pc = 0x16AF40u;
    {
        const bool branch_taken_0x16af40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af40) {
            ctx->pc = 0x16B988u;
            goto label_16b988;
        }
    }
    ctx->pc = 0x16AF48u;
    // 0x16af48: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x16af4c: 0x12030288  beq         $s0, $v1, . + 4 + (0x288 << 2)
    ctx->pc = 0x16AF4Cu;
    {
        const bool branch_taken_0x16af4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF4Cu;
            // 0x16af50: 0x24030afa  addiu       $v1, $zero, 0xAFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af4c) {
            ctx->pc = 0x16B970u;
            goto label_16b970;
        }
    }
    ctx->pc = 0x16AF54u;
    // 0x16af54: 0x12030280  beq         $s0, $v1, . + 4 + (0x280 << 2)
    ctx->pc = 0x16AF54u;
    {
        const bool branch_taken_0x16af54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af54) {
            ctx->pc = 0x16B958u;
            goto label_16b958;
        }
    }
    ctx->pc = 0x16AF5Cu;
    // 0x16af5c: 0x24030af0  addiu       $v1, $zero, 0xAF0
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x16af60: 0x12030277  beq         $s0, $v1, . + 4 + (0x277 << 2)
    ctx->pc = 0x16AF60u;
    {
        const bool branch_taken_0x16af60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF60u;
            // 0x16af64: 0x24030a8c  addiu       $v1, $zero, 0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af60) {
            ctx->pc = 0x16B940u;
            goto label_16b940;
        }
    }
    ctx->pc = 0x16AF68u;
    // 0x16af68: 0x1203026f  beq         $s0, $v1, . + 4 + (0x26F << 2)
    ctx->pc = 0x16AF68u;
    {
        const bool branch_taken_0x16af68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af68) {
            ctx->pc = 0x16B928u;
            goto label_16b928;
        }
    }
    ctx->pc = 0x16AF70u;
    // 0x16af70: 0x240308fc  addiu       $v1, $zero, 0x8FC
    ctx->pc = 0x16af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2300));
    // 0x16af74: 0x120302a0  beq         $s0, $v1, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x16AF74u;
    {
        const bool branch_taken_0x16af74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF74u;
            // 0x16af78: 0x2403085c  addiu       $v1, $zero, 0x85C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af74) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16AF7Cu;
    // 0x16af7c: 0x12030260  beq         $s0, $v1, . + 4 + (0x260 << 2)
    ctx->pc = 0x16AF7Cu;
    {
        const bool branch_taken_0x16af7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af7c) {
            ctx->pc = 0x16B900u;
            goto label_16b900;
        }
    }
    ctx->pc = 0x16AF84u;
    // 0x16af84: 0x24030848  addiu       $v1, $zero, 0x848
    ctx->pc = 0x16af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
    // 0x16af88: 0x12030253  beq         $s0, $v1, . + 4 + (0x253 << 2)
    ctx->pc = 0x16AF88u;
    {
        const bool branch_taken_0x16af88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF88u;
            // 0x16af8c: 0x24030834  addiu       $v1, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af88) {
            ctx->pc = 0x16B8D8u;
            goto label_16b8d8;
        }
    }
    ctx->pc = 0x16AF90u;
    // 0x16af90: 0x12030243  beq         $s0, $v1, . + 4 + (0x243 << 2)
    ctx->pc = 0x16AF90u;
    {
        const bool branch_taken_0x16af90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af90) {
            ctx->pc = 0x16B8A0u;
            goto label_16b8a0;
        }
    }
    ctx->pc = 0x16AF98u;
    // 0x16af98: 0x2403076c  addiu       $v1, $zero, 0x76C
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x16af9c: 0x12030236  beq         $s0, $v1, . + 4 + (0x236 << 2)
    ctx->pc = 0x16AF9Cu;
    {
        const bool branch_taken_0x16af9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF9Cu;
            // 0x16afa0: 0x24030708  addiu       $v1, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af9c) {
            ctx->pc = 0x16B878u;
            goto label_16b878;
        }
    }
    ctx->pc = 0x16AFA4u;
    // 0x16afa4: 0x1203022a  beq         $s0, $v1, . + 4 + (0x22A << 2)
    ctx->pc = 0x16AFA4u;
    {
        const bool branch_taken_0x16afa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16afa4) {
            ctx->pc = 0x16B850u;
            goto label_16b850;
        }
    }
    ctx->pc = 0x16AFACu;
    // 0x16afac: 0x240306d6  addiu       $v1, $zero, 0x6D6
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1750));
    // 0x16afb0: 0x12030221  beq         $s0, $v1, . + 4 + (0x221 << 2)
    ctx->pc = 0x16AFB0u;
    {
        const bool branch_taken_0x16afb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFB0u;
            // 0x16afb4: 0x240306ae  addiu       $v1, $zero, 0x6AE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1710));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afb0) {
            ctx->pc = 0x16B838u;
            goto label_16b838;
        }
    }
    ctx->pc = 0x16AFB8u;
    // 0x16afb8: 0x12030215  beq         $s0, $v1, . + 4 + (0x215 << 2)
    ctx->pc = 0x16AFB8u;
    {
        const bool branch_taken_0x16afb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16afb8) {
            ctx->pc = 0x16B810u;
            goto label_16b810;
        }
    }
    ctx->pc = 0x16AFC0u;
    // 0x16afc0: 0x24030668  addiu       $v1, $zero, 0x668
    ctx->pc = 0x16afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1640));
    // 0x16afc4: 0x12030208  beq         $s0, $v1, . + 4 + (0x208 << 2)
    ctx->pc = 0x16AFC4u;
    {
        const bool branch_taken_0x16afc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFC4u;
            // 0x16afc8: 0x24030654  addiu       $v1, $zero, 0x654 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc4) {
            ctx->pc = 0x16B7E8u;
            goto label_16b7e8;
        }
    }
    ctx->pc = 0x16AFCCu;
    // 0x16afcc: 0x120301fc  beq         $s0, $v1, . + 4 + (0x1FC << 2)
    ctx->pc = 0x16AFCCu;
    {
        const bool branch_taken_0x16afcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16afcc) {
            ctx->pc = 0x16B7C0u;
            goto label_16b7c0;
        }
    }
    ctx->pc = 0x16AFD4u;
    // 0x16afd4: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x16afd8: 0x120301ef  beq         $s0, $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x16AFD8u;
    {
        const bool branch_taken_0x16afd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFD8u;
            // 0x16afdc: 0x24030618  addiu       $v1, $zero, 0x618 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afd8) {
            ctx->pc = 0x16B798u;
            goto label_16b798;
        }
    }
    ctx->pc = 0x16AFE0u;
    // 0x16afe0: 0x120301e3  beq         $s0, $v1, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x16AFE0u;
    {
        const bool branch_taken_0x16afe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16afe0) {
            ctx->pc = 0x16B770u;
            goto label_16b770;
        }
    }
    ctx->pc = 0x16AFE8u;
    // 0x16afe8: 0x2403060e  addiu       $v1, $zero, 0x60E
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
    // 0x16afec: 0x120301da  beq         $s0, $v1, . + 4 + (0x1DA << 2)
    ctx->pc = 0x16AFECu;
    {
        const bool branch_taken_0x16afec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFECu;
            // 0x16aff0: 0x240305d2  addiu       $v1, $zero, 0x5D2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1490));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afec) {
            ctx->pc = 0x16B758u;
            goto label_16b758;
        }
    }
    ctx->pc = 0x16AFF4u;
    // 0x16aff4: 0x120301ce  beq         $s0, $v1, . + 4 + (0x1CE << 2)
    ctx->pc = 0x16AFF4u;
    {
        const bool branch_taken_0x16aff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16aff4) {
            ctx->pc = 0x16B730u;
            goto label_16b730;
        }
    }
    ctx->pc = 0x16AFFCu;
    // 0x16affc: 0x240305be  addiu       $v1, $zero, 0x5BE
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1470));
    // 0x16b000: 0x120301c1  beq         $s0, $v1, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x16B000u;
    {
        const bool branch_taken_0x16b000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B000u;
            // 0x16b004: 0x240305aa  addiu       $v1, $zero, 0x5AA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b000) {
            ctx->pc = 0x16B708u;
            goto label_16b708;
        }
    }
    ctx->pc = 0x16B008u;
    // 0x16b008: 0x120301b5  beq         $s0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x16B008u;
    {
        const bool branch_taken_0x16b008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b008) {
            ctx->pc = 0x16B6E0u;
            goto label_16b6e0;
        }
    }
    ctx->pc = 0x16B010u;
    // 0x16b010: 0x24030582  addiu       $v1, $zero, 0x582
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1410));
    // 0x16b014: 0x120301a8  beq         $s0, $v1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x16B014u;
    {
        const bool branch_taken_0x16b014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B014u;
            // 0x16b018: 0x24030578  addiu       $v1, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b014) {
            ctx->pc = 0x16B6B8u;
            goto label_16b6b8;
        }
    }
    ctx->pc = 0x16B01Cu;
    // 0x16b01c: 0x120301a0  beq         $s0, $v1, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x16B01Cu;
    {
        const bool branch_taken_0x16b01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b01c) {
            ctx->pc = 0x16B6A0u;
            goto label_16b6a0;
        }
    }
    ctx->pc = 0x16B024u;
    // 0x16b024: 0x2403053c  addiu       $v1, $zero, 0x53C
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1340));
    // 0x16b028: 0x12030193  beq         $s0, $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x16B028u;
    {
        const bool branch_taken_0x16b028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B028u;
            // 0x16b02c: 0x24030528  addiu       $v1, $zero, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b028) {
            ctx->pc = 0x16B678u;
            goto label_16b678;
        }
    }
    ctx->pc = 0x16B030u;
    // 0x16b030: 0x12030187  beq         $s0, $v1, . + 4 + (0x187 << 2)
    ctx->pc = 0x16B030u;
    {
        const bool branch_taken_0x16b030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b030) {
            ctx->pc = 0x16B650u;
            goto label_16b650;
        }
    }
    ctx->pc = 0x16B038u;
    // 0x16b038: 0x24030514  addiu       $v1, $zero, 0x514
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x16b03c: 0x1203017a  beq         $s0, $v1, . + 4 + (0x17A << 2)
    ctx->pc = 0x16B03Cu;
    {
        const bool branch_taken_0x16b03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B03Cu;
            // 0x16b040: 0x240304c4  addiu       $v1, $zero, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b03c) {
            ctx->pc = 0x16B628u;
            goto label_16b628;
        }
    }
    ctx->pc = 0x16B044u;
    // 0x16b044: 0x1203016e  beq         $s0, $v1, . + 4 + (0x16E << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B600u;
            goto label_16b600;
        }
    }
    ctx->pc = 0x16B04Cu;
    // 0x16b04c: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x16b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x16b050: 0x12030165  beq         $s0, $v1, . + 4 + (0x165 << 2)
    ctx->pc = 0x16B050u;
    {
        const bool branch_taken_0x16b050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B050u;
            // 0x16b054: 0x24030492  addiu       $v1, $zero, 0x492 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b050) {
            ctx->pc = 0x16B5E8u;
            goto label_16b5e8;
        }
    }
    ctx->pc = 0x16B058u;
    // 0x16b058: 0x12030159  beq         $s0, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x16B058u;
    {
        const bool branch_taken_0x16b058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b058) {
            ctx->pc = 0x16B5C0u;
            goto label_16b5c0;
        }
    }
    ctx->pc = 0x16B060u;
    // 0x16b060: 0x2403047e  addiu       $v1, $zero, 0x47E
    ctx->pc = 0x16b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1150));
    // 0x16b064: 0x12030150  beq         $s0, $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x16B064u;
    {
        const bool branch_taken_0x16b064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B064u;
            // 0x16b068: 0x24030460  addiu       $v1, $zero, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b064) {
            ctx->pc = 0x16B5A8u;
            goto label_16b5a8;
        }
    }
    ctx->pc = 0x16B06Cu;
    // 0x16b06c: 0x12030144  beq         $s0, $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x16B06Cu;
    {
        const bool branch_taken_0x16b06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b06c) {
            ctx->pc = 0x16B580u;
            goto label_16b580;
        }
    }
    ctx->pc = 0x16B074u;
    // 0x16b074: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x16b078: 0x1203013b  beq         $s0, $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x16B078u;
    {
        const bool branch_taken_0x16b078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B078u;
            // 0x16b07c: 0x2403042e  addiu       $v1, $zero, 0x42E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b078) {
            ctx->pc = 0x16B568u;
            goto label_16b568;
        }
    }
    ctx->pc = 0x16B080u;
    // 0x16b080: 0x1203012f  beq         $s0, $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x16B080u;
    {
        const bool branch_taken_0x16b080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b080) {
            ctx->pc = 0x16B540u;
            goto label_16b540;
        }
    }
    ctx->pc = 0x16B088u;
    // 0x16b088: 0x2403041a  addiu       $v1, $zero, 0x41A
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
    // 0x16b08c: 0x12030126  beq         $s0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x16B08Cu;
    {
        const bool branch_taken_0x16b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B08Cu;
            // 0x16b090: 0x240303c0  addiu       $v1, $zero, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b08c) {
            ctx->pc = 0x16B528u;
            goto label_16b528;
        }
    }
    ctx->pc = 0x16B094u;
    // 0x16b094: 0x1203011a  beq         $s0, $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x16B094u;
    {
        const bool branch_taken_0x16b094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b094) {
            ctx->pc = 0x16B500u;
            goto label_16b500;
        }
    }
    ctx->pc = 0x16B09Cu;
    // 0x16b09c: 0x240303ac  addiu       $v1, $zero, 0x3AC
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 940));
    // 0x16b0a0: 0x1203010d  beq         $s0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x16B0A0u;
    {
        const bool branch_taken_0x16b0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0A0u;
            // 0x16b0a4: 0x24030398  addiu       $v1, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0a0) {
            ctx->pc = 0x16B4D8u;
            goto label_16b4d8;
        }
    }
    ctx->pc = 0x16B0A8u;
    // 0x16b0a8: 0x12030101  beq         $s0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x16B0A8u;
    {
        const bool branch_taken_0x16b0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b0a8) {
            ctx->pc = 0x16B4B0u;
            goto label_16b4b0;
        }
    }
    ctx->pc = 0x16B0B0u;
    // 0x16b0b0: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x16b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x16b0b4: 0x120300f4  beq         $s0, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x16B0B4u;
    {
        const bool branch_taken_0x16b0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0B4u;
            // 0x16b0b8: 0x24030370  addiu       $v1, $zero, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0b4) {
            ctx->pc = 0x16B488u;
            goto label_16b488;
        }
    }
    ctx->pc = 0x16B0BCu;
    // 0x16b0bc: 0x120300e8  beq         $s0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x16B0BCu;
    {
        const bool branch_taken_0x16b0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b0bc) {
            ctx->pc = 0x16B460u;
            goto label_16b460;
        }
    }
    ctx->pc = 0x16B0C4u;
    // 0x16b0c4: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x16b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x16b0c8: 0x120300db  beq         $s0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x16B0C8u;
    {
        const bool branch_taken_0x16b0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0C8u;
            // 0x16b0cc: 0x24030348  addiu       $v1, $zero, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0c8) {
            ctx->pc = 0x16B438u;
            goto label_16b438;
        }
    }
    ctx->pc = 0x16B0D0u;
    // 0x16b0d0: 0x120300cf  beq         $s0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x16B0D0u;
    {
        const bool branch_taken_0x16b0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b0d0) {
            ctx->pc = 0x16B410u;
            goto label_16b410;
        }
    }
    ctx->pc = 0x16B0D8u;
    // 0x16b0d8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x16b0dc: 0x120300c2  beq         $s0, $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x16B0DCu;
    {
        const bool branch_taken_0x16b0dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0DCu;
            // 0x16b0e0: 0x24030320  addiu       $v1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0dc) {
            ctx->pc = 0x16B3E8u;
            goto label_16b3e8;
        }
    }
    ctx->pc = 0x16B0E4u;
    // 0x16b0e4: 0x120300b6  beq         $s0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x16B0E4u;
    {
        const bool branch_taken_0x16b0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b0e4) {
            ctx->pc = 0x16B3C0u;
            goto label_16b3c0;
        }
    }
    ctx->pc = 0x16B0ECu;
    // 0x16b0ec: 0x2403030c  addiu       $v1, $zero, 0x30C
    ctx->pc = 0x16b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x16b0f0: 0x120300a9  beq         $s0, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x16B0F0u;
    {
        const bool branch_taken_0x16b0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0F0u;
            // 0x16b0f4: 0x240302f8  addiu       $v1, $zero, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0f0) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B0F8u;
    // 0x16b0f8: 0x1203009d  beq         $s0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x16B0F8u;
    {
        const bool branch_taken_0x16b0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b0f8) {
            ctx->pc = 0x16B370u;
            goto label_16b370;
        }
    }
    ctx->pc = 0x16B100u;
    // 0x16b100: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x16b104: 0x12030094  beq         $s0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x16B104u;
    {
        const bool branch_taken_0x16b104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B104u;
            // 0x16b108: 0x2403019a  addiu       $v1, $zero, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b104) {
            ctx->pc = 0x16B358u;
            goto label_16b358;
        }
    }
    ctx->pc = 0x16B10Cu;
    // 0x16b10c: 0x1203008c  beq         $s0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x16B10Cu;
    {
        const bool branch_taken_0x16b10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b10c) {
            ctx->pc = 0x16B340u;
            goto label_16b340;
        }
    }
    ctx->pc = 0x16B114u;
    // 0x16b114: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x16b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x16b118: 0x12030237  beq         $s0, $v1, . + 4 + (0x237 << 2)
    ctx->pc = 0x16B118u;
    {
        const bool branch_taken_0x16b118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B118u;
            // 0x16b11c: 0x2403017c  addiu       $v1, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b118) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B120u;
    // 0x16b120: 0x1203007d  beq         $s0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x16B120u;
    {
        const bool branch_taken_0x16b120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b120) {
            ctx->pc = 0x16B318u;
            goto label_16b318;
        }
    }
    ctx->pc = 0x16B128u;
    // 0x16b128: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x16b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x16b12c: 0x12030070  beq         $s0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x16B12Cu;
    {
        const bool branch_taken_0x16b12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B12Cu;
            // 0x16b130: 0x24030154  addiu       $v1, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b12c) {
            ctx->pc = 0x16B2F0u;
            goto label_16b2f0;
        }
    }
    ctx->pc = 0x16B134u;
    // 0x16b134: 0x12030064  beq         $s0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x16B134u;
    {
        const bool branch_taken_0x16b134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b134) {
            ctx->pc = 0x16B2C8u;
            goto label_16b2c8;
        }
    }
    ctx->pc = 0x16B13Cu;
    // 0x16b13c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x16b140: 0x12030057  beq         $s0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x16B140u;
    {
        const bool branch_taken_0x16b140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B140u;
            // 0x16b144: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b140) {
            ctx->pc = 0x16B2A0u;
            goto label_16b2a0;
        }
    }
    ctx->pc = 0x16B148u;
    // 0x16b148: 0x1203004b  beq         $s0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x16B148u;
    {
        const bool branch_taken_0x16b148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b148) {
            ctx->pc = 0x16B278u;
            goto label_16b278;
        }
    }
    ctx->pc = 0x16B150u;
    // 0x16b150: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x16b154: 0x1203003e  beq         $s0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x16B154u;
    {
        const bool branch_taken_0x16b154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B154u;
            // 0x16b158: 0x24030104  addiu       $v1, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b154) {
            ctx->pc = 0x16B250u;
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B15Cu;
    // 0x16b15c: 0x12030032  beq         $s0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x16B15Cu;
    {
        const bool branch_taken_0x16b15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b15c) {
            ctx->pc = 0x16B228u;
            goto label_16b228;
        }
    }
    ctx->pc = 0x16B164u;
    // 0x16b164: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x16b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x16b168: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16B168u;
    {
        const bool branch_taken_0x16b168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B168u;
            // 0x16b16c: 0x240300dc  addiu       $v1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b168) {
            ctx->pc = 0x16B200u;
            goto label_16b200;
        }
    }
    ctx->pc = 0x16B170u;
    // 0x16b170: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x16B170u;
    {
        const bool branch_taken_0x16b170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b170) {
            ctx->pc = 0x16B1D8u;
            goto label_16b1d8;
        }
    }
    ctx->pc = 0x16B178u;
    // 0x16b178: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x16b17c: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16B17Cu;
    {
        const bool branch_taken_0x16b17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B17Cu;
            // 0x16b180: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b17c) {
            ctx->pc = 0x16B1B0u;
            goto label_16b1b0;
        }
    }
    ctx->pc = 0x16B184u;
    // 0x16b184: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B184u;
    {
        const bool branch_taken_0x16b184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b184) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B18Cu;
    // 0x16b18c: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x16B18Cu;
    {
        const bool branch_taken_0x16b18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b18c) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B194u;
    // 0x16b194: 0x0  nop
    ctx->pc = 0x16b194u;
    // NOP
label_16b198:
    // 0x16b198: 0xc05d004  jal         func_174010
    ctx->pc = 0x16B198u;
    SET_GPR_U32(ctx, 31, 0x16B1A0u);
    ctx->pc = 0x16B19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B198u;
            // 0x16b19c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A0u; }
        if (ctx->pc != 0x16B1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A0u; }
        if (ctx->pc != 0x16B1A0u) { return; }
    }
    ctx->pc = 0x16B1A0u;
    // 0x16b1a0: 0xc056050  jal         func_158140
    ctx->pc = 0x16B1A0u;
    SET_GPR_U32(ctx, 31, 0x16B1A8u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A8u; }
        if (ctx->pc != 0x16B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A8u; }
        if (ctx->pc != 0x16B1A8u) { return; }
    }
    ctx->pc = 0x16B1A8u;
    // 0x16b1a8: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x16B1A8u;
    {
        const bool branch_taken_0x16b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1a8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B1B0u;
label_16b1b0:
    // 0x16b1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b1b8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B1B8u;
    SET_GPR_U32(ctx, 31, 0x16B1C0u);
    ctx->pc = 0x16B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1B8u;
            // 0x16b1bc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1C0u; }
        if (ctx->pc != 0x16B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1C0u; }
        if (ctx->pc != 0x16B1C0u) { return; }
    }
    ctx->pc = 0x16B1C0u;
    // 0x16b1c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1c4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b1c8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B1C8u;
    SET_GPR_U32(ctx, 31, 0x16B1D0u);
    ctx->pc = 0x16B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1C8u;
            // 0x16b1cc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1D0u; }
        if (ctx->pc != 0x16B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1D0u; }
        if (ctx->pc != 0x16B1D0u) { return; }
    }
    ctx->pc = 0x16B1D0u;
    // 0x16b1d0: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x16B1D0u;
    {
        const bool branch_taken_0x16b1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1d0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B1D8u;
label_16b1d8:
    // 0x16b1d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1dc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b1e0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B1E0u;
    SET_GPR_U32(ctx, 31, 0x16B1E8u);
    ctx->pc = 0x16B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1E0u;
            // 0x16b1e4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1E8u; }
        if (ctx->pc != 0x16B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1E8u; }
        if (ctx->pc != 0x16B1E8u) { return; }
    }
    ctx->pc = 0x16B1E8u;
    // 0x16b1e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1ec: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b1f0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B1F0u;
    SET_GPR_U32(ctx, 31, 0x16B1F8u);
    ctx->pc = 0x16B1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1F0u;
            // 0x16b1f4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1F8u; }
        if (ctx->pc != 0x16B1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1F8u; }
        if (ctx->pc != 0x16B1F8u) { return; }
    }
    ctx->pc = 0x16B1F8u;
    // 0x16b1f8: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x16B1F8u;
    {
        const bool branch_taken_0x16b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1f8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B200u;
label_16b200:
    // 0x16b200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b204: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b208: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B208u;
    SET_GPR_U32(ctx, 31, 0x16B210u);
    ctx->pc = 0x16B20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B208u;
            // 0x16b20c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B210u; }
        if (ctx->pc != 0x16B210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B210u; }
        if (ctx->pc != 0x16B210u) { return; }
    }
    ctx->pc = 0x16B210u;
    // 0x16b210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b214: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b218: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B218u;
    SET_GPR_U32(ctx, 31, 0x16B220u);
    ctx->pc = 0x16B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B218u;
            // 0x16b21c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B220u; }
        if (ctx->pc != 0x16B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B220u; }
        if (ctx->pc != 0x16B220u) { return; }
    }
    ctx->pc = 0x16B220u;
    // 0x16b220: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x16B220u;
    {
        const bool branch_taken_0x16b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b220) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B228u;
label_16b228:
    // 0x16b228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b22c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b230: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B230u;
    SET_GPR_U32(ctx, 31, 0x16B238u);
    ctx->pc = 0x16B234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B230u;
            // 0x16b234: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B238u; }
        if (ctx->pc != 0x16B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B238u; }
        if (ctx->pc != 0x16B238u) { return; }
    }
    ctx->pc = 0x16B238u;
    // 0x16b238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b23c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b240: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B240u;
    SET_GPR_U32(ctx, 31, 0x16B248u);
    ctx->pc = 0x16B244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B240u;
            // 0x16b244: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B248u; }
        if (ctx->pc != 0x16B248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B248u; }
        if (ctx->pc != 0x16B248u) { return; }
    }
    ctx->pc = 0x16B248u;
    // 0x16b248: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x16B248u;
    {
        const bool branch_taken_0x16b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b248) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b254: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b258: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B258u;
    SET_GPR_U32(ctx, 31, 0x16B260u);
    ctx->pc = 0x16B25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B258u;
            // 0x16b25c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B260u; }
        if (ctx->pc != 0x16B260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B260u; }
        if (ctx->pc != 0x16B260u) { return; }
    }
    ctx->pc = 0x16B260u;
    // 0x16b260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b264: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b268: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B268u;
    SET_GPR_U32(ctx, 31, 0x16B270u);
    ctx->pc = 0x16B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B268u;
            // 0x16b26c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B270u; }
        if (ctx->pc != 0x16B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B270u; }
        if (ctx->pc != 0x16B270u) { return; }
    }
    ctx->pc = 0x16B270u;
    // 0x16b270: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x16B270u;
    {
        const bool branch_taken_0x16b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b270) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B278u;
label_16b278:
    // 0x16b278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b27c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b280: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B280u;
    SET_GPR_U32(ctx, 31, 0x16B288u);
    ctx->pc = 0x16B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B280u;
            // 0x16b284: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B288u; }
        if (ctx->pc != 0x16B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B288u; }
        if (ctx->pc != 0x16B288u) { return; }
    }
    ctx->pc = 0x16B288u;
    // 0x16b288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b28c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b290: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B290u;
    SET_GPR_U32(ctx, 31, 0x16B298u);
    ctx->pc = 0x16B294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B290u;
            // 0x16b294: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B298u; }
        if (ctx->pc != 0x16B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B298u; }
        if (ctx->pc != 0x16B298u) { return; }
    }
    ctx->pc = 0x16B298u;
    // 0x16b298: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x16B298u;
    {
        const bool branch_taken_0x16b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b298) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B2A0u;
label_16b2a0:
    // 0x16b2a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b2a8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B2A8u;
    SET_GPR_U32(ctx, 31, 0x16B2B0u);
    ctx->pc = 0x16B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2A8u;
            // 0x16b2ac: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2B0u; }
        if (ctx->pc != 0x16B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2B0u; }
        if (ctx->pc != 0x16B2B0u) { return; }
    }
    ctx->pc = 0x16B2B0u;
    // 0x16b2b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b2b4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b2b8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B2B8u;
    SET_GPR_U32(ctx, 31, 0x16B2C0u);
    ctx->pc = 0x16B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2B8u;
            // 0x16b2bc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2C0u; }
        if (ctx->pc != 0x16B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2C0u; }
        if (ctx->pc != 0x16B2C0u) { return; }
    }
    ctx->pc = 0x16B2C0u;
    // 0x16b2c0: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x16B2C0u;
    {
        const bool branch_taken_0x16b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2c0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B2C8u;
label_16b2c8:
    // 0x16b2c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2cc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b2d0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B2D0u;
    SET_GPR_U32(ctx, 31, 0x16B2D8u);
    ctx->pc = 0x16B2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2D0u;
            // 0x16b2d4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2D8u; }
        if (ctx->pc != 0x16B2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2D8u; }
        if (ctx->pc != 0x16B2D8u) { return; }
    }
    ctx->pc = 0x16B2D8u;
    // 0x16b2d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b2dc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b2e0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B2E0u;
    SET_GPR_U32(ctx, 31, 0x16B2E8u);
    ctx->pc = 0x16B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2E0u;
            // 0x16b2e4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E8u; }
        if (ctx->pc != 0x16B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E8u; }
        if (ctx->pc != 0x16B2E8u) { return; }
    }
    ctx->pc = 0x16B2E8u;
    // 0x16b2e8: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x16B2E8u;
    {
        const bool branch_taken_0x16b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2e8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B2F0u;
label_16b2f0:
    // 0x16b2f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2f4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b2f8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B2F8u;
    SET_GPR_U32(ctx, 31, 0x16B300u);
    ctx->pc = 0x16B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2F8u;
            // 0x16b2fc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B300u; }
        if (ctx->pc != 0x16B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B300u; }
        if (ctx->pc != 0x16B300u) { return; }
    }
    ctx->pc = 0x16B300u;
    // 0x16b300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b304: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b308: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B308u;
    SET_GPR_U32(ctx, 31, 0x16B310u);
    ctx->pc = 0x16B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B308u;
            // 0x16b30c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B310u; }
        if (ctx->pc != 0x16B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B310u; }
        if (ctx->pc != 0x16B310u) { return; }
    }
    ctx->pc = 0x16B310u;
    // 0x16b310: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x16B310u;
    {
        const bool branch_taken_0x16b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b310) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B318u;
label_16b318:
    // 0x16b318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b31c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b320: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B320u;
    SET_GPR_U32(ctx, 31, 0x16B328u);
    ctx->pc = 0x16B324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B320u;
            // 0x16b324: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B328u; }
        if (ctx->pc != 0x16B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B328u; }
        if (ctx->pc != 0x16B328u) { return; }
    }
    ctx->pc = 0x16B328u;
    // 0x16b328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b32c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b330: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B330u;
    SET_GPR_U32(ctx, 31, 0x16B338u);
    ctx->pc = 0x16B334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B330u;
            // 0x16b334: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B338u; }
        if (ctx->pc != 0x16B338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B338u; }
        if (ctx->pc != 0x16B338u) { return; }
    }
    ctx->pc = 0x16B338u;
    // 0x16b338: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x16B338u;
    {
        const bool branch_taken_0x16b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b338) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B340u;
label_16b340:
    // 0x16b340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b348: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16B348u;
    SET_GPR_U32(ctx, 31, 0x16B350u);
    ctx->pc = 0x16B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B348u;
            // 0x16b34c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B350u; }
        if (ctx->pc != 0x16B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B350u; }
        if (ctx->pc != 0x16B350u) { return; }
    }
    ctx->pc = 0x16B350u;
    // 0x16b350: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x16B350u;
    {
        const bool branch_taken_0x16b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b350) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B358u;
label_16b358:
    // 0x16b358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b360: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B360u;
    SET_GPR_U32(ctx, 31, 0x16B368u);
    ctx->pc = 0x16B364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B360u;
            // 0x16b364: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B368u; }
        if (ctx->pc != 0x16B368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B368u; }
        if (ctx->pc != 0x16B368u) { return; }
    }
    ctx->pc = 0x16B368u;
    // 0x16b368: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x16B368u;
    {
        const bool branch_taken_0x16b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b368) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B370u;
label_16b370:
    // 0x16b370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b374: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b378: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B378u;
    SET_GPR_U32(ctx, 31, 0x16B380u);
    ctx->pc = 0x16B37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B378u;
            // 0x16b37c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B380u; }
        if (ctx->pc != 0x16B380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B380u; }
        if (ctx->pc != 0x16B380u) { return; }
    }
    ctx->pc = 0x16B380u;
    // 0x16b380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b384: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b388: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B388u;
    SET_GPR_U32(ctx, 31, 0x16B390u);
    ctx->pc = 0x16B38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B388u;
            // 0x16b38c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B390u; }
        if (ctx->pc != 0x16B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B390u; }
        if (ctx->pc != 0x16B390u) { return; }
    }
    ctx->pc = 0x16B390u;
    // 0x16b390: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x16B390u;
    {
        const bool branch_taken_0x16b390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b390) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b39c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b3a0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B3A0u;
    SET_GPR_U32(ctx, 31, 0x16B3A8u);
    ctx->pc = 0x16B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3A0u;
            // 0x16b3a4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A8u; }
        if (ctx->pc != 0x16B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3A8u; }
        if (ctx->pc != 0x16B3A8u) { return; }
    }
    ctx->pc = 0x16B3A8u;
    // 0x16b3a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b3ac: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b3b0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B3B0u;
    SET_GPR_U32(ctx, 31, 0x16B3B8u);
    ctx->pc = 0x16B3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3B0u;
            // 0x16b3b4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3B8u; }
        if (ctx->pc != 0x16B3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3B8u; }
        if (ctx->pc != 0x16B3B8u) { return; }
    }
    ctx->pc = 0x16B3B8u;
    // 0x16b3b8: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x16B3B8u;
    {
        const bool branch_taken_0x16b3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3b8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B3C0u;
label_16b3c0:
    // 0x16b3c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b3c8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B3C8u;
    SET_GPR_U32(ctx, 31, 0x16B3D0u);
    ctx->pc = 0x16B3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3C8u;
            // 0x16b3cc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3D0u; }
        if (ctx->pc != 0x16B3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3D0u; }
        if (ctx->pc != 0x16B3D0u) { return; }
    }
    ctx->pc = 0x16B3D0u;
    // 0x16b3d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b3d4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b3d8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B3D8u;
    SET_GPR_U32(ctx, 31, 0x16B3E0u);
    ctx->pc = 0x16B3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3D8u;
            // 0x16b3dc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3E0u; }
        if (ctx->pc != 0x16B3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3E0u; }
        if (ctx->pc != 0x16B3E0u) { return; }
    }
    ctx->pc = 0x16B3E0u;
    // 0x16b3e0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x16B3E0u;
    {
        const bool branch_taken_0x16b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3e0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B3E8u;
label_16b3e8:
    // 0x16b3e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b3f0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B3F0u;
    SET_GPR_U32(ctx, 31, 0x16B3F8u);
    ctx->pc = 0x16B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3F0u;
            // 0x16b3f4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3F8u; }
        if (ctx->pc != 0x16B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3F8u; }
        if (ctx->pc != 0x16B3F8u) { return; }
    }
    ctx->pc = 0x16B3F8u;
    // 0x16b3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b3fc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b400: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B400u;
    SET_GPR_U32(ctx, 31, 0x16B408u);
    ctx->pc = 0x16B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B400u;
            // 0x16b404: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B408u; }
        if (ctx->pc != 0x16B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B408u; }
        if (ctx->pc != 0x16B408u) { return; }
    }
    ctx->pc = 0x16B408u;
    // 0x16b408: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x16B408u;
    {
        const bool branch_taken_0x16b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b408) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B410u;
label_16b410:
    // 0x16b410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b414: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b418: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B418u;
    SET_GPR_U32(ctx, 31, 0x16B420u);
    ctx->pc = 0x16B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B418u;
            // 0x16b41c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B420u; }
        if (ctx->pc != 0x16B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B420u; }
        if (ctx->pc != 0x16B420u) { return; }
    }
    ctx->pc = 0x16B420u;
    // 0x16b420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b424: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b428: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B428u;
    SET_GPR_U32(ctx, 31, 0x16B430u);
    ctx->pc = 0x16B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B428u;
            // 0x16b42c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B430u; }
        if (ctx->pc != 0x16B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B430u; }
        if (ctx->pc != 0x16B430u) { return; }
    }
    ctx->pc = 0x16B430u;
    // 0x16b430: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x16B430u;
    {
        const bool branch_taken_0x16b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b430) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B438u;
label_16b438:
    // 0x16b438: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b43c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b440: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B440u;
    SET_GPR_U32(ctx, 31, 0x16B448u);
    ctx->pc = 0x16B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B440u;
            // 0x16b444: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B448u; }
        if (ctx->pc != 0x16B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B448u; }
        if (ctx->pc != 0x16B448u) { return; }
    }
    ctx->pc = 0x16B448u;
    // 0x16b448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b44c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b450: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B450u;
    SET_GPR_U32(ctx, 31, 0x16B458u);
    ctx->pc = 0x16B454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B450u;
            // 0x16b454: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B458u; }
        if (ctx->pc != 0x16B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B458u; }
        if (ctx->pc != 0x16B458u) { return; }
    }
    ctx->pc = 0x16B458u;
    // 0x16b458: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x16B458u;
    {
        const bool branch_taken_0x16b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b458) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B460u;
label_16b460:
    // 0x16b460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b464: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b468: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B468u;
    SET_GPR_U32(ctx, 31, 0x16B470u);
    ctx->pc = 0x16B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B468u;
            // 0x16b46c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B470u; }
        if (ctx->pc != 0x16B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B470u; }
        if (ctx->pc != 0x16B470u) { return; }
    }
    ctx->pc = 0x16B470u;
    // 0x16b470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b474: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b478: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B478u;
    SET_GPR_U32(ctx, 31, 0x16B480u);
    ctx->pc = 0x16B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B478u;
            // 0x16b47c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B480u; }
        if (ctx->pc != 0x16B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B480u; }
        if (ctx->pc != 0x16B480u) { return; }
    }
    ctx->pc = 0x16B480u;
    // 0x16b480: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x16B480u;
    {
        const bool branch_taken_0x16b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b480) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B488u;
label_16b488:
    // 0x16b488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b48c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b490: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B490u;
    SET_GPR_U32(ctx, 31, 0x16B498u);
    ctx->pc = 0x16B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B490u;
            // 0x16b494: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B498u; }
        if (ctx->pc != 0x16B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B498u; }
        if (ctx->pc != 0x16B498u) { return; }
    }
    ctx->pc = 0x16B498u;
    // 0x16b498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b49c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b4a0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B4A0u;
    SET_GPR_U32(ctx, 31, 0x16B4A8u);
    ctx->pc = 0x16B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4A0u;
            // 0x16b4a4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A8u; }
        if (ctx->pc != 0x16B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4A8u; }
        if (ctx->pc != 0x16B4A8u) { return; }
    }
    ctx->pc = 0x16B4A8u;
    // 0x16b4a8: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x16B4A8u;
    {
        const bool branch_taken_0x16b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4a8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B4B0u;
label_16b4b0:
    // 0x16b4b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b4b8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B4B8u;
    SET_GPR_U32(ctx, 31, 0x16B4C0u);
    ctx->pc = 0x16B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4B8u;
            // 0x16b4bc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4C0u; }
        if (ctx->pc != 0x16B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4C0u; }
        if (ctx->pc != 0x16B4C0u) { return; }
    }
    ctx->pc = 0x16B4C0u;
    // 0x16b4c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b4c4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b4c8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B4C8u;
    SET_GPR_U32(ctx, 31, 0x16B4D0u);
    ctx->pc = 0x16B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4C8u;
            // 0x16b4cc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4D0u; }
        if (ctx->pc != 0x16B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4D0u; }
        if (ctx->pc != 0x16B4D0u) { return; }
    }
    ctx->pc = 0x16B4D0u;
    // 0x16b4d0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x16B4D0u;
    {
        const bool branch_taken_0x16b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4d0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B4D8u;
label_16b4d8:
    // 0x16b4d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4dc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b4e0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B4E0u;
    SET_GPR_U32(ctx, 31, 0x16B4E8u);
    ctx->pc = 0x16B4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4E0u;
            // 0x16b4e4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4E8u; }
        if (ctx->pc != 0x16B4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4E8u; }
        if (ctx->pc != 0x16B4E8u) { return; }
    }
    ctx->pc = 0x16B4E8u;
    // 0x16b4e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b4ec: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b4f0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B4F0u;
    SET_GPR_U32(ctx, 31, 0x16B4F8u);
    ctx->pc = 0x16B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4F0u;
            // 0x16b4f4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4F8u; }
        if (ctx->pc != 0x16B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4F8u; }
        if (ctx->pc != 0x16B4F8u) { return; }
    }
    ctx->pc = 0x16B4F8u;
    // 0x16b4f8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x16B4F8u;
    {
        const bool branch_taken_0x16b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4f8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B500u;
label_16b500:
    // 0x16b500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b504: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b508: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B508u;
    SET_GPR_U32(ctx, 31, 0x16B510u);
    ctx->pc = 0x16B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B508u;
            // 0x16b50c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B510u; }
        if (ctx->pc != 0x16B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B510u; }
        if (ctx->pc != 0x16B510u) { return; }
    }
    ctx->pc = 0x16B510u;
    // 0x16b510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b514: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b518: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B518u;
    SET_GPR_U32(ctx, 31, 0x16B520u);
    ctx->pc = 0x16B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B518u;
            // 0x16b51c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B520u; }
        if (ctx->pc != 0x16B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B520u; }
        if (ctx->pc != 0x16B520u) { return; }
    }
    ctx->pc = 0x16B520u;
    // 0x16b520: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x16B520u;
    {
        const bool branch_taken_0x16b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b520) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B528u;
label_16b528:
    // 0x16b528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b52c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16b530: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B530u;
    SET_GPR_U32(ctx, 31, 0x16B538u);
    ctx->pc = 0x16B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B530u;
            // 0x16b534: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B538u; }
        if (ctx->pc != 0x16B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B538u; }
        if (ctx->pc != 0x16B538u) { return; }
    }
    ctx->pc = 0x16B538u;
    // 0x16b538: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x16B538u;
    {
        const bool branch_taken_0x16b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b538) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B540u;
label_16b540:
    // 0x16b540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b544: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b548: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B548u;
    SET_GPR_U32(ctx, 31, 0x16B550u);
    ctx->pc = 0x16B54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B548u;
            // 0x16b54c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B550u; }
        if (ctx->pc != 0x16B550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B550u; }
        if (ctx->pc != 0x16B550u) { return; }
    }
    ctx->pc = 0x16B550u;
    // 0x16b550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b554: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16b558: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B558u;
    SET_GPR_U32(ctx, 31, 0x16B560u);
    ctx->pc = 0x16B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B558u;
            // 0x16b55c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B560u; }
        if (ctx->pc != 0x16B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B560u; }
        if (ctx->pc != 0x16B560u) { return; }
    }
    ctx->pc = 0x16B560u;
    // 0x16b560: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x16B560u;
    {
        const bool branch_taken_0x16b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b560) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B568u;
label_16b568:
    // 0x16b568: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b56c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16b570: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B570u;
    SET_GPR_U32(ctx, 31, 0x16B578u);
    ctx->pc = 0x16B574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B570u;
            // 0x16b574: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B578u; }
        if (ctx->pc != 0x16B578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B578u; }
        if (ctx->pc != 0x16B578u) { return; }
    }
    ctx->pc = 0x16B578u;
    // 0x16b578: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x16B578u;
    {
        const bool branch_taken_0x16b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b578) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B580u;
label_16b580:
    // 0x16b580: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b584: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16b588: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B588u;
    SET_GPR_U32(ctx, 31, 0x16B590u);
    ctx->pc = 0x16B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B588u;
            // 0x16b58c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B590u; }
        if (ctx->pc != 0x16B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B590u; }
        if (ctx->pc != 0x16B590u) { return; }
    }
    ctx->pc = 0x16B590u;
    // 0x16b590: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b594: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16b598: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B598u;
    SET_GPR_U32(ctx, 31, 0x16B5A0u);
    ctx->pc = 0x16B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B598u;
            // 0x16b59c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5A0u; }
        if (ctx->pc != 0x16B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5A0u; }
        if (ctx->pc != 0x16B5A0u) { return; }
    }
    ctx->pc = 0x16B5A0u;
    // 0x16b5a0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x16B5A0u;
    {
        const bool branch_taken_0x16b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5a0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B5A8u;
label_16b5a8:
    // 0x16b5a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16b5b0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B5B0u;
    SET_GPR_U32(ctx, 31, 0x16B5B8u);
    ctx->pc = 0x16B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5B0u;
            // 0x16b5b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5B8u; }
        if (ctx->pc != 0x16B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5B8u; }
        if (ctx->pc != 0x16B5B8u) { return; }
    }
    ctx->pc = 0x16B5B8u;
    // 0x16b5b8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x16B5B8u;
    {
        const bool branch_taken_0x16b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5b8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B5C0u;
label_16b5c0:
    // 0x16b5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b5c8: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B5C8u;
    SET_GPR_U32(ctx, 31, 0x16B5D0u);
    ctx->pc = 0x16B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5C8u;
            // 0x16b5cc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5D0u; }
        if (ctx->pc != 0x16B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5D0u; }
        if (ctx->pc != 0x16B5D0u) { return; }
    }
    ctx->pc = 0x16B5D0u;
    // 0x16b5d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5d4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16b5d8: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B5D8u;
    SET_GPR_U32(ctx, 31, 0x16B5E0u);
    ctx->pc = 0x16B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5D8u;
            // 0x16b5dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5E0u; }
        if (ctx->pc != 0x16B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5E0u; }
        if (ctx->pc != 0x16B5E0u) { return; }
    }
    ctx->pc = 0x16B5E0u;
    // 0x16b5e0: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x16B5E0u;
    {
        const bool branch_taken_0x16b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5e0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B5E8u;
label_16b5e8:
    // 0x16b5e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b5ec: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16b5f0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B5F0u;
    SET_GPR_U32(ctx, 31, 0x16B5F8u);
    ctx->pc = 0x16B5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5F0u;
            // 0x16b5f4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5F8u; }
        if (ctx->pc != 0x16B5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5F8u; }
        if (ctx->pc != 0x16B5F8u) { return; }
    }
    ctx->pc = 0x16B5F8u;
    // 0x16b5f8: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x16B5F8u;
    {
        const bool branch_taken_0x16b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5f8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B600u;
label_16b600:
    // 0x16b600: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b604: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16b604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16b608: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B608u;
    SET_GPR_U32(ctx, 31, 0x16B610u);
    ctx->pc = 0x16B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B608u;
            // 0x16b60c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B610u; }
        if (ctx->pc != 0x16B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B610u; }
        if (ctx->pc != 0x16B610u) { return; }
    }
    ctx->pc = 0x16B610u;
    // 0x16b610: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b614: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16b618: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B618u;
    SET_GPR_U32(ctx, 31, 0x16B620u);
    ctx->pc = 0x16B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B618u;
            // 0x16b61c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B620u; }
        if (ctx->pc != 0x16B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B620u; }
        if (ctx->pc != 0x16B620u) { return; }
    }
    ctx->pc = 0x16B620u;
    // 0x16b620: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x16B620u;
    {
        const bool branch_taken_0x16b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b620) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B628u;
label_16b628:
    // 0x16b628: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b62c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b630: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B630u;
    SET_GPR_U32(ctx, 31, 0x16B638u);
    ctx->pc = 0x16B634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B630u;
            // 0x16b634: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B638u; }
        if (ctx->pc != 0x16B638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B638u; }
        if (ctx->pc != 0x16B638u) { return; }
    }
    ctx->pc = 0x16B638u;
    // 0x16b638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b63c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b640: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B640u;
    SET_GPR_U32(ctx, 31, 0x16B648u);
    ctx->pc = 0x16B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B640u;
            // 0x16b644: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B648u; }
        if (ctx->pc != 0x16B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B648u; }
        if (ctx->pc != 0x16B648u) { return; }
    }
    ctx->pc = 0x16B648u;
    // 0x16b648: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x16B648u;
    {
        const bool branch_taken_0x16b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b648) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B650u;
label_16b650:
    // 0x16b650: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b654: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b658: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B658u;
    SET_GPR_U32(ctx, 31, 0x16B660u);
    ctx->pc = 0x16B65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B658u;
            // 0x16b65c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B660u; }
        if (ctx->pc != 0x16B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B660u; }
        if (ctx->pc != 0x16B660u) { return; }
    }
    ctx->pc = 0x16B660u;
    // 0x16b660: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b664: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b668: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B668u;
    SET_GPR_U32(ctx, 31, 0x16B670u);
    ctx->pc = 0x16B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B668u;
            // 0x16b66c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B670u; }
        if (ctx->pc != 0x16B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B670u; }
        if (ctx->pc != 0x16B670u) { return; }
    }
    ctx->pc = 0x16B670u;
    // 0x16b670: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x16B670u;
    {
        const bool branch_taken_0x16b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b670) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B678u;
label_16b678:
    // 0x16b678: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b67c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b680: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B680u;
    SET_GPR_U32(ctx, 31, 0x16B688u);
    ctx->pc = 0x16B684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B680u;
            // 0x16b684: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B688u; }
        if (ctx->pc != 0x16B688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B688u; }
        if (ctx->pc != 0x16B688u) { return; }
    }
    ctx->pc = 0x16B688u;
    // 0x16b688: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b68c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b690: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B690u;
    SET_GPR_U32(ctx, 31, 0x16B698u);
    ctx->pc = 0x16B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B690u;
            // 0x16b694: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B698u; }
        if (ctx->pc != 0x16B698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B698u; }
        if (ctx->pc != 0x16B698u) { return; }
    }
    ctx->pc = 0x16B698u;
    // 0x16b698: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x16B698u;
    {
        const bool branch_taken_0x16b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b698) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B6A0u;
label_16b6a0:
    // 0x16b6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a8: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B6A8u;
    SET_GPR_U32(ctx, 31, 0x16B6B0u);
    ctx->pc = 0x16B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6A8u;
            // 0x16b6ac: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6B0u; }
        if (ctx->pc != 0x16B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6B0u; }
        if (ctx->pc != 0x16B6B0u) { return; }
    }
    ctx->pc = 0x16B6B0u;
    // 0x16b6b0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x16B6B0u;
    {
        const bool branch_taken_0x16b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6b0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B6B8u;
label_16b6b8:
    // 0x16b6b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b6c0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B6C0u;
    SET_GPR_U32(ctx, 31, 0x16B6C8u);
    ctx->pc = 0x16B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6C0u;
            // 0x16b6c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6C8u; }
        if (ctx->pc != 0x16B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6C8u; }
        if (ctx->pc != 0x16B6C8u) { return; }
    }
    ctx->pc = 0x16B6C8u;
    // 0x16b6c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6cc: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16b6d0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B6D0u;
    SET_GPR_U32(ctx, 31, 0x16B6D8u);
    ctx->pc = 0x16B6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6D0u;
            // 0x16b6d4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6D8u; }
        if (ctx->pc != 0x16B6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6D8u; }
        if (ctx->pc != 0x16B6D8u) { return; }
    }
    ctx->pc = 0x16B6D8u;
    // 0x16b6d8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x16B6D8u;
    {
        const bool branch_taken_0x16b6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6d8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B6E0u;
label_16b6e0:
    // 0x16b6e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b6e4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b6e8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B6E8u;
    SET_GPR_U32(ctx, 31, 0x16B6F0u);
    ctx->pc = 0x16B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6E8u;
            // 0x16b6ec: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6F0u; }
        if (ctx->pc != 0x16B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6F0u; }
        if (ctx->pc != 0x16B6F0u) { return; }
    }
    ctx->pc = 0x16B6F0u;
    // 0x16b6f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b6f4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b6f8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B6F8u;
    SET_GPR_U32(ctx, 31, 0x16B700u);
    ctx->pc = 0x16B6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6F8u;
            // 0x16b6fc: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B700u; }
        if (ctx->pc != 0x16B700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B700u; }
        if (ctx->pc != 0x16B700u) { return; }
    }
    ctx->pc = 0x16B700u;
    // 0x16b700: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x16B700u;
    {
        const bool branch_taken_0x16b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b700) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B708u;
label_16b708:
    // 0x16b708: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b70c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b710: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B710u;
    SET_GPR_U32(ctx, 31, 0x16B718u);
    ctx->pc = 0x16B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B710u;
            // 0x16b714: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B718u; }
        if (ctx->pc != 0x16B718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B718u; }
        if (ctx->pc != 0x16B718u) { return; }
    }
    ctx->pc = 0x16B718u;
    // 0x16b718: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b71c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b720: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B720u;
    SET_GPR_U32(ctx, 31, 0x16B728u);
    ctx->pc = 0x16B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B720u;
            // 0x16b724: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B728u; }
        if (ctx->pc != 0x16B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B728u; }
        if (ctx->pc != 0x16B728u) { return; }
    }
    ctx->pc = 0x16B728u;
    // 0x16b728: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x16B728u;
    {
        const bool branch_taken_0x16b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b728) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B730u;
label_16b730:
    // 0x16b730: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b734: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b738: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B738u;
    SET_GPR_U32(ctx, 31, 0x16B740u);
    ctx->pc = 0x16B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B738u;
            // 0x16b73c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B740u; }
        if (ctx->pc != 0x16B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B740u; }
        if (ctx->pc != 0x16B740u) { return; }
    }
    ctx->pc = 0x16B740u;
    // 0x16b740: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b744: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b748: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B748u;
    SET_GPR_U32(ctx, 31, 0x16B750u);
    ctx->pc = 0x16B74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B748u;
            // 0x16b74c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B750u; }
        if (ctx->pc != 0x16B750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B750u; }
        if (ctx->pc != 0x16B750u) { return; }
    }
    ctx->pc = 0x16B750u;
    // 0x16b750: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x16B750u;
    {
        const bool branch_taken_0x16b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b750) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B758u;
label_16b758:
    // 0x16b758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b760: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B760u;
    SET_GPR_U32(ctx, 31, 0x16B768u);
    ctx->pc = 0x16B764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B760u;
            // 0x16b764: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B768u; }
        if (ctx->pc != 0x16B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B768u; }
        if (ctx->pc != 0x16B768u) { return; }
    }
    ctx->pc = 0x16B768u;
    // 0x16b768: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x16B768u;
    {
        const bool branch_taken_0x16b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b768) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B770u;
label_16b770:
    // 0x16b770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b774: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b778: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B778u;
    SET_GPR_U32(ctx, 31, 0x16B780u);
    ctx->pc = 0x16B77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B778u;
            // 0x16b77c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B780u; }
        if (ctx->pc != 0x16B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B780u; }
        if (ctx->pc != 0x16B780u) { return; }
    }
    ctx->pc = 0x16B780u;
    // 0x16b780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b784: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16b784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16b788: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B788u;
    SET_GPR_U32(ctx, 31, 0x16B790u);
    ctx->pc = 0x16B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B788u;
            // 0x16b78c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B790u; }
        if (ctx->pc != 0x16B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B790u; }
        if (ctx->pc != 0x16B790u) { return; }
    }
    ctx->pc = 0x16B790u;
    // 0x16b790: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x16B790u;
    {
        const bool branch_taken_0x16b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b790) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B798u;
label_16b798:
    // 0x16b798: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b79c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b7a0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B7A0u;
    SET_GPR_U32(ctx, 31, 0x16B7A8u);
    ctx->pc = 0x16B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7A0u;
            // 0x16b7a4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7A8u; }
        if (ctx->pc != 0x16B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7A8u; }
        if (ctx->pc != 0x16B7A8u) { return; }
    }
    ctx->pc = 0x16B7A8u;
    // 0x16b7a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b7ac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b7b0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B7B0u;
    SET_GPR_U32(ctx, 31, 0x16B7B8u);
    ctx->pc = 0x16B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7B0u;
            // 0x16b7b4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7B8u; }
        if (ctx->pc != 0x16B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7B8u; }
        if (ctx->pc != 0x16B7B8u) { return; }
    }
    ctx->pc = 0x16B7B8u;
    // 0x16b7b8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x16B7B8u;
    {
        const bool branch_taken_0x16b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7b8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B7C0u;
label_16b7c0:
    // 0x16b7c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b7c4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b7c8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B7C8u;
    SET_GPR_U32(ctx, 31, 0x16B7D0u);
    ctx->pc = 0x16B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7C8u;
            // 0x16b7cc: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7D0u; }
        if (ctx->pc != 0x16B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7D0u; }
        if (ctx->pc != 0x16B7D0u) { return; }
    }
    ctx->pc = 0x16B7D0u;
    // 0x16b7d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b7d4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b7d8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B7D8u;
    SET_GPR_U32(ctx, 31, 0x16B7E0u);
    ctx->pc = 0x16B7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7D8u;
            // 0x16b7dc: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7E0u; }
        if (ctx->pc != 0x16B7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7E0u; }
        if (ctx->pc != 0x16B7E0u) { return; }
    }
    ctx->pc = 0x16B7E0u;
    // 0x16b7e0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x16B7E0u;
    {
        const bool branch_taken_0x16b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7e0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B7E8u;
label_16b7e8:
    // 0x16b7e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b7ec: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b7f0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B7F0u;
    SET_GPR_U32(ctx, 31, 0x16B7F8u);
    ctx->pc = 0x16B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7F0u;
            // 0x16b7f4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7F8u; }
        if (ctx->pc != 0x16B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7F8u; }
        if (ctx->pc != 0x16B7F8u) { return; }
    }
    ctx->pc = 0x16B7F8u;
    // 0x16b7f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b7fc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b800: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B800u;
    SET_GPR_U32(ctx, 31, 0x16B808u);
    ctx->pc = 0x16B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B800u;
            // 0x16b804: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B808u; }
        if (ctx->pc != 0x16B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B808u; }
        if (ctx->pc != 0x16B808u) { return; }
    }
    ctx->pc = 0x16B808u;
    // 0x16b808: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x16B808u;
    {
        const bool branch_taken_0x16b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b808) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B810u;
label_16b810:
    // 0x16b810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b814: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b818: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B818u;
    SET_GPR_U32(ctx, 31, 0x16B820u);
    ctx->pc = 0x16B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B818u;
            // 0x16b81c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B820u; }
        if (ctx->pc != 0x16B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B820u; }
        if (ctx->pc != 0x16B820u) { return; }
    }
    ctx->pc = 0x16B820u;
    // 0x16b820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b824: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16b828: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B828u;
    SET_GPR_U32(ctx, 31, 0x16B830u);
    ctx->pc = 0x16B82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B828u;
            // 0x16b82c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B830u; }
        if (ctx->pc != 0x16B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B830u; }
        if (ctx->pc != 0x16B830u) { return; }
    }
    ctx->pc = 0x16B830u;
    // 0x16b830: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x16B830u;
    {
        const bool branch_taken_0x16b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b830) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B838u;
label_16b838:
    // 0x16b838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b840: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B840u;
    SET_GPR_U32(ctx, 31, 0x16B848u);
    ctx->pc = 0x16B844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B840u;
            // 0x16b844: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B848u; }
        if (ctx->pc != 0x16B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B848u; }
        if (ctx->pc != 0x16B848u) { return; }
    }
    ctx->pc = 0x16B848u;
    // 0x16b848: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x16B848u;
    {
        const bool branch_taken_0x16b848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b848) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B850u;
label_16b850:
    // 0x16b850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b854: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16b854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16b858: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B858u;
    SET_GPR_U32(ctx, 31, 0x16B860u);
    ctx->pc = 0x16B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B858u;
            // 0x16b85c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B860u; }
        if (ctx->pc != 0x16B860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B860u; }
        if (ctx->pc != 0x16B860u) { return; }
    }
    ctx->pc = 0x16B860u;
    // 0x16b860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b864: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16b868: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B868u;
    SET_GPR_U32(ctx, 31, 0x16B870u);
    ctx->pc = 0x16B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B868u;
            // 0x16b86c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B870u; }
        if (ctx->pc != 0x16B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B870u; }
        if (ctx->pc != 0x16B870u) { return; }
    }
    ctx->pc = 0x16B870u;
    // 0x16b870: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16B870u;
    {
        const bool branch_taken_0x16b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b870) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B878u;
label_16b878:
    // 0x16b878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b87c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b880: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B880u;
    SET_GPR_U32(ctx, 31, 0x16B888u);
    ctx->pc = 0x16B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B880u;
            // 0x16b884: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B888u; }
        if (ctx->pc != 0x16B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B888u; }
        if (ctx->pc != 0x16B888u) { return; }
    }
    ctx->pc = 0x16B888u;
    // 0x16b888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b88c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16b890: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B890u;
    SET_GPR_U32(ctx, 31, 0x16B898u);
    ctx->pc = 0x16B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B890u;
            // 0x16b894: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B898u; }
        if (ctx->pc != 0x16B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B898u; }
        if (ctx->pc != 0x16B898u) { return; }
    }
    ctx->pc = 0x16B898u;
    // 0x16b898: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x16B898u;
    {
        const bool branch_taken_0x16b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b898) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8a8: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B8A8u;
    SET_GPR_U32(ctx, 31, 0x16B8B0u);
    ctx->pc = 0x16B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8A8u;
            // 0x16b8ac: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8B0u; }
        if (ctx->pc != 0x16B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8B0u; }
        if (ctx->pc != 0x16B8B0u) { return; }
    }
    ctx->pc = 0x16B8B0u;
    // 0x16b8b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b8b4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b8b8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B8B8u;
    SET_GPR_U32(ctx, 31, 0x16B8C0u);
    ctx->pc = 0x16B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8B8u;
            // 0x16b8bc: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8C0u; }
        if (ctx->pc != 0x16B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8C0u; }
        if (ctx->pc != 0x16B8C0u) { return; }
    }
    ctx->pc = 0x16B8C0u;
    // 0x16b8c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b8c4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b8c8: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B8C8u;
    SET_GPR_U32(ctx, 31, 0x16B8D0u);
    ctx->pc = 0x16B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8C8u;
            // 0x16b8cc: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8D0u; }
        if (ctx->pc != 0x16B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8D0u; }
        if (ctx->pc != 0x16B8D0u) { return; }
    }
    ctx->pc = 0x16B8D0u;
    // 0x16b8d0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16B8D0u;
    {
        const bool branch_taken_0x16b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8d0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B8D8u;
label_16b8d8:
    // 0x16b8d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b8dc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b8e0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B8E0u;
    SET_GPR_U32(ctx, 31, 0x16B8E8u);
    ctx->pc = 0x16B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8E0u;
            // 0x16b8e4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8E8u; }
        if (ctx->pc != 0x16B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8E8u; }
        if (ctx->pc != 0x16B8E8u) { return; }
    }
    ctx->pc = 0x16B8E8u;
    // 0x16b8e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b8ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b8f0: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B8F0u;
    SET_GPR_U32(ctx, 31, 0x16B8F8u);
    ctx->pc = 0x16B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8F0u;
            // 0x16b8f4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F8u; }
        if (ctx->pc != 0x16B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F8u; }
        if (ctx->pc != 0x16B8F8u) { return; }
    }
    ctx->pc = 0x16B8F8u;
    // 0x16b8f8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x16B8F8u;
    {
        const bool branch_taken_0x16b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8f8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B900u;
label_16b900:
    // 0x16b900: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b904: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b908: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B908u;
    SET_GPR_U32(ctx, 31, 0x16B910u);
    ctx->pc = 0x16B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B908u;
            // 0x16b90c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B910u; }
        if (ctx->pc != 0x16B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B910u; }
        if (ctx->pc != 0x16B910u) { return; }
    }
    ctx->pc = 0x16B910u;
    // 0x16b910: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b914: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b918: 0xc06cf2c  jal         func_1B3CB0
    ctx->pc = 0x16B918u;
    SET_GPR_U32(ctx, 31, 0x16B920u);
    ctx->pc = 0x16B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B918u;
            // 0x16b91c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CB0u;
    if (runtime->hasFunction(0x1B3CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B920u; }
        if (ctx->pc != 0x16B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_01_0x1b3cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B920u; }
        if (ctx->pc != 0x16B920u) { return; }
    }
    ctx->pc = 0x16B920u;
    // 0x16b920: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x16B920u;
    {
        const bool branch_taken_0x16b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b920) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B928u;
label_16b928:
    // 0x16b928: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b92c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b930: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B930u;
    SET_GPR_U32(ctx, 31, 0x16B938u);
    ctx->pc = 0x16B934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B930u;
            // 0x16b934: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B938u; }
        if (ctx->pc != 0x16B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B938u; }
        if (ctx->pc != 0x16B938u) { return; }
    }
    ctx->pc = 0x16B938u;
    // 0x16b938: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16B938u;
    {
        const bool branch_taken_0x16b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b938) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B940u;
label_16b940:
    // 0x16b940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b944: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b948: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B948u;
    SET_GPR_U32(ctx, 31, 0x16B950u);
    ctx->pc = 0x16B94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B948u;
            // 0x16b94c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B950u; }
        if (ctx->pc != 0x16B950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B950u; }
        if (ctx->pc != 0x16B950u) { return; }
    }
    ctx->pc = 0x16B950u;
    // 0x16b950: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x16B950u;
    {
        const bool branch_taken_0x16b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b950) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B958u;
label_16b958:
    // 0x16b958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b960: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16B960u;
    SET_GPR_U32(ctx, 31, 0x16B968u);
    ctx->pc = 0x16B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B960u;
            // 0x16b964: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B968u; }
        if (ctx->pc != 0x16B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B968u; }
        if (ctx->pc != 0x16B968u) { return; }
    }
    ctx->pc = 0x16B968u;
    // 0x16b968: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16B968u;
    {
        const bool branch_taken_0x16b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b968) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B970u;
label_16b970:
    // 0x16b970: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16b970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b974: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b978: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B978u;
    SET_GPR_U32(ctx, 31, 0x16B980u);
    ctx->pc = 0x16B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B978u;
            // 0x16b97c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B980u; }
        if (ctx->pc != 0x16B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B980u; }
        if (ctx->pc != 0x16B980u) { return; }
    }
    ctx->pc = 0x16B980u;
    // 0x16b980: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16B980u;
    {
        const bool branch_taken_0x16b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b980) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B988u;
label_16b988:
    // 0x16b988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b98c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16b990: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B990u;
    SET_GPR_U32(ctx, 31, 0x16B998u);
    ctx->pc = 0x16B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B990u;
            // 0x16b994: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B998u; }
        if (ctx->pc != 0x16B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B998u; }
        if (ctx->pc != 0x16B998u) { return; }
    }
    ctx->pc = 0x16B998u;
    // 0x16b998: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16B998u;
    {
        const bool branch_taken_0x16b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b998) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B9A0u;
label_16b9a0:
    // 0x16b9a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9a8: 0xc06d5a0  jal         func_1B5680
    ctx->pc = 0x16B9A8u;
    SET_GPR_U32(ctx, 31, 0x16B9B0u);
    ctx->pc = 0x16B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9A8u;
            // 0x16b9ac: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5680u;
    if (runtime->hasFunction(0x1B5680u)) {
        auto targetFn = runtime->lookupFunction(0x1B5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9B0u; }
        if (ctx->pc != 0x16B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_03_0x1b5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9B0u; }
        if (ctx->pc != 0x16B9B0u) { return; }
    }
    ctx->pc = 0x16B9B0u;
    // 0x16b9b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16B9B0u;
    {
        const bool branch_taken_0x16b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9b0) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B9B8u;
label_16b9b8:
    // 0x16b9b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b9c0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B9C0u;
    SET_GPR_U32(ctx, 31, 0x16B9C8u);
    ctx->pc = 0x16B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9C0u;
            // 0x16b9c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9C8u; }
        if (ctx->pc != 0x16B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9C8u; }
        if (ctx->pc != 0x16B9C8u) { return; }
    }
    ctx->pc = 0x16B9C8u;
    // 0x16b9c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9cc: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16b9d0: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16B9D0u;
    SET_GPR_U32(ctx, 31, 0x16B9D8u);
    ctx->pc = 0x16B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9D0u;
            // 0x16b9d4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9D8u; }
        if (ctx->pc != 0x16B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9D8u; }
        if (ctx->pc != 0x16B9D8u) { return; }
    }
    ctx->pc = 0x16B9D8u;
    // 0x16b9d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B9D8u;
    {
        const bool branch_taken_0x16b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9d8) {
            ctx->pc = 0x16B9F8u;
            goto label_16b9f8;
        }
    }
    ctx->pc = 0x16B9E0u;
label_16b9e0:
    // 0x16b9e0: 0xc05d004  jal         func_174010
    ctx->pc = 0x16B9E0u;
    SET_GPR_U32(ctx, 31, 0x16B9E8u);
    ctx->pc = 0x16B9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9E0u;
            // 0x16b9e4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9E8u; }
        if (ctx->pc != 0x16B9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9E8u; }
        if (ctx->pc != 0x16B9E8u) { return; }
    }
    ctx->pc = 0x16B9E8u;
    // 0x16b9e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9f0: 0xc06fe60  jal         func_1BF980
    ctx->pc = 0x16B9F0u;
    SET_GPR_U32(ctx, 31, 0x16B9F8u);
    ctx->pc = 0x16B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9F0u;
            // 0x16b9f4: 0x2406ff7e  addiu       $a2, $zero, -0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF980u;
    if (runtime->hasFunction(0x1BF980u)) {
        auto targetFn = runtime->lookupFunction(0x1BF980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9F8u; }
        if (ctx->pc != 0x16B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage5Boss_0x1bf980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9F8u; }
        if (ctx->pc != 0x16B9F8u) { return; }
    }
    ctx->pc = 0x16B9F8u;
label_16b9f8:
    // 0x16b9f8: 0x2a010191  slti        $at, $s0, 0x191
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x16b9fc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B9FCu;
    {
        const bool branch_taken_0x16b9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9FCu;
            // 0x16ba00: 0x2a0102bc  slti        $at, $s0, 0x2BC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)700) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9fc) {
            ctx->pc = 0x16BA50u;
            goto label_16ba50;
        }
    }
    ctx->pc = 0x16BA04u;
    // 0x16ba04: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x16BA04u;
    {
        const bool branch_taken_0x16ba04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA04u;
            // 0x16ba08: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba04) {
            ctx->pc = 0x16BA50u;
            goto label_16ba50;
        }
    }
    ctx->pc = 0x16BA0Cu;
    // 0x16ba0c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16ba0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16ba10: 0x0  nop
    ctx->pc = 0x16ba10u;
    // NOP
    // 0x16ba14: 0x0  nop
    ctx->pc = 0x16ba14u;
    // NOP
    // 0x16ba18: 0x1810  mfhi        $v1
    ctx->pc = 0x16ba18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16ba1c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16BA1Cu;
    {
        const bool branch_taken_0x16ba1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ba1c) {
            ctx->pc = 0x16BA50u;
            goto label_16ba50;
        }
    }
    ctx->pc = 0x16BA24u;
    // 0x16ba24: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16BA24u;
    SET_GPR_U32(ctx, 31, 0x16BA2Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA2Cu; }
        if (ctx->pc != 0x16BA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA2Cu; }
        if (ctx->pc != 0x16BA2Cu) { return; }
    }
    ctx->pc = 0x16BA2Cu;
    // 0x16ba2c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16ba30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ba34: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16ba34u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16ba38: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x16ba38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16ba3c: 0x0  nop
    ctx->pc = 0x16ba3cu;
    // NOP
    // 0x16ba40: 0x1010  mfhi        $v0
    ctx->pc = 0x16ba40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16ba44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba48: 0xc06d2b4  jal         func_1B4AD0
    ctx->pc = 0x16BA48u;
    SET_GPR_U32(ctx, 31, 0x16BA50u);
    ctx->pc = 0x16BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA48u;
            // 0x16ba4c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AD0u;
    if (runtime->hasFunction(0x1B4AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA50u; }
        if (ctx->pc != 0x16BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn5_02_0x1b4ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA50u; }
        if (ctx->pc != 0x16BA50u) { return; }
    }
    ctx->pc = 0x16BA50u;
label_16ba50:
    // 0x16ba50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ba58: 0x3e00008  jr          $ra
    ctx->pc = 0x16BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA58u;
            // 0x16ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B198u: goto label_16b198;
            case 0x16B1B0u: goto label_16b1b0;
            case 0x16B1D8u: goto label_16b1d8;
            case 0x16B200u: goto label_16b200;
            case 0x16B228u: goto label_16b228;
            case 0x16B250u: goto label_16b250;
            case 0x16B278u: goto label_16b278;
            case 0x16B2A0u: goto label_16b2a0;
            case 0x16B2C8u: goto label_16b2c8;
            case 0x16B2F0u: goto label_16b2f0;
            case 0x16B318u: goto label_16b318;
            case 0x16B340u: goto label_16b340;
            case 0x16B358u: goto label_16b358;
            case 0x16B370u: goto label_16b370;
            case 0x16B398u: goto label_16b398;
            case 0x16B3C0u: goto label_16b3c0;
            case 0x16B3E8u: goto label_16b3e8;
            case 0x16B410u: goto label_16b410;
            case 0x16B438u: goto label_16b438;
            case 0x16B460u: goto label_16b460;
            case 0x16B488u: goto label_16b488;
            case 0x16B4B0u: goto label_16b4b0;
            case 0x16B4D8u: goto label_16b4d8;
            case 0x16B500u: goto label_16b500;
            case 0x16B528u: goto label_16b528;
            case 0x16B540u: goto label_16b540;
            case 0x16B568u: goto label_16b568;
            case 0x16B580u: goto label_16b580;
            case 0x16B5A8u: goto label_16b5a8;
            case 0x16B5C0u: goto label_16b5c0;
            case 0x16B5E8u: goto label_16b5e8;
            case 0x16B600u: goto label_16b600;
            case 0x16B628u: goto label_16b628;
            case 0x16B650u: goto label_16b650;
            case 0x16B678u: goto label_16b678;
            case 0x16B6A0u: goto label_16b6a0;
            case 0x16B6B8u: goto label_16b6b8;
            case 0x16B6E0u: goto label_16b6e0;
            case 0x16B708u: goto label_16b708;
            case 0x16B730u: goto label_16b730;
            case 0x16B758u: goto label_16b758;
            case 0x16B770u: goto label_16b770;
            case 0x16B798u: goto label_16b798;
            case 0x16B7C0u: goto label_16b7c0;
            case 0x16B7E8u: goto label_16b7e8;
            case 0x16B810u: goto label_16b810;
            case 0x16B838u: goto label_16b838;
            case 0x16B850u: goto label_16b850;
            case 0x16B878u: goto label_16b878;
            case 0x16B8A0u: goto label_16b8a0;
            case 0x16B8D8u: goto label_16b8d8;
            case 0x16B900u: goto label_16b900;
            case 0x16B928u: goto label_16b928;
            case 0x16B940u: goto label_16b940;
            case 0x16B958u: goto label_16b958;
            case 0x16B970u: goto label_16b970;
            case 0x16B988u: goto label_16b988;
            case 0x16B9A0u: goto label_16b9a0;
            case 0x16B9B8u: goto label_16b9b8;
            case 0x16B9E0u: goto label_16b9e0;
            case 0x16B9F8u: goto label_16b9f8;
            case 0x16BA50u: goto label_16ba50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BA60u;
}
