#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StageEX1EnemyGenerate
// Address: 0x169050 - 0x169798
void StageEX1EnemyGenerate_0x169050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StageEX1EnemyGenerate_0x169050");
#endif

    ctx->pc = 0x169050u;

    // 0x169050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169054: 0x24031324  addiu       $v1, $zero, 0x1324
    ctx->pc = 0x169054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4900));
    // 0x169058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16905c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169064: 0x12030196  beq         $s0, $v1, . + 4 + (0x196 << 2)
    ctx->pc = 0x169064u;
    {
        const bool branch_taken_0x169064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169064u;
            // 0x169068: 0x24031194  addiu       $v1, $zero, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169064) {
            ctx->pc = 0x1696C0u;
            goto label_1696c0;
        }
    }
    ctx->pc = 0x16906Cu;
    // 0x16906c: 0x1203018e  beq         $s0, $v1, . + 4 + (0x18E << 2)
    ctx->pc = 0x16906Cu;
    {
        const bool branch_taken_0x16906c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16906c) {
            ctx->pc = 0x1696A8u;
            goto label_1696a8;
        }
    }
    ctx->pc = 0x169074u;
    // 0x169074: 0x24030c1c  addiu       $v1, $zero, 0xC1C
    ctx->pc = 0x169074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
    // 0x169078: 0x12030185  beq         $s0, $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x169078u;
    {
        const bool branch_taken_0x169078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169078u;
            // 0x16907c: 0x24030af0  addiu       $v1, $zero, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169078) {
            ctx->pc = 0x169690u;
            goto label_169690;
        }
    }
    ctx->pc = 0x169080u;
    // 0x169080: 0x1203017d  beq         $s0, $v1, . + 4 + (0x17D << 2)
    ctx->pc = 0x169080u;
    {
        const bool branch_taken_0x169080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169080) {
            ctx->pc = 0x169678u;
            goto label_169678;
        }
    }
    ctx->pc = 0x169088u;
    // 0x169088: 0x24030960  addiu       $v1, $zero, 0x960
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2400));
    // 0x16908c: 0x12030170  beq         $s0, $v1, . + 4 + (0x170 << 2)
    ctx->pc = 0x16908Cu;
    {
        const bool branch_taken_0x16908c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16908Cu;
            // 0x169090: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16908c) {
            ctx->pc = 0x169650u;
            goto label_169650;
        }
    }
    ctx->pc = 0x169094u;
    // 0x169094: 0x12030168  beq         $s0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x169094u;
    {
        const bool branch_taken_0x169094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169094) {
            ctx->pc = 0x169638u;
            goto label_169638;
        }
    }
    ctx->pc = 0x16909Cu;
    // 0x16909c: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1690a0: 0x1203015f  beq         $s0, $v1, . + 4 + (0x15F << 2)
    ctx->pc = 0x1690A0u;
    {
        const bool branch_taken_0x1690a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1690A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690A0u;
            // 0x1690a4: 0x24030708  addiu       $v1, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690a0) {
            ctx->pc = 0x169620u;
            goto label_169620;
        }
    }
    ctx->pc = 0x1690A8u;
    // 0x1690a8: 0x12030157  beq         $s0, $v1, . + 4 + (0x157 << 2)
    ctx->pc = 0x1690A8u;
    {
        const bool branch_taken_0x1690a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1690a8) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x1690B0u;
    // 0x1690b0: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x1690b4: 0x1203014e  beq         $s0, $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x1690B4u;
    {
        const bool branch_taken_0x1690b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1690B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690B4u;
            // 0x1690b8: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690b4) {
            ctx->pc = 0x1695F0u;
            goto label_1695f0;
        }
    }
    ctx->pc = 0x1690BCu;
    // 0x1690bc: 0x12030146  beq         $s0, $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x1690BCu;
    {
        const bool branch_taken_0x1690bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1690bc) {
            ctx->pc = 0x1695D8u;
            goto label_1695d8;
        }
    }
    ctx->pc = 0x1690C4u;
    // 0x1690c4: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x1690c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x1690c8: 0x1203013d  beq         $s0, $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x1690C8u;
    {
        const bool branch_taken_0x1690c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1690CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690C8u;
            // 0x1690cc: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c8) {
            ctx->pc = 0x1695C0u;
            goto label_1695c0;
        }
    }
    ctx->pc = 0x1690D0u;
    // 0x1690d0: 0x12030135  beq         $s0, $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x1690D0u;
    {
        const bool branch_taken_0x1690d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1690d0) {
            ctx->pc = 0x1695A8u;
            goto label_1695a8;
        }
    }
    ctx->pc = 0x1690D8u;
    // 0x1690d8: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x1690d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x1690dc: 0x1203012c  beq         $s0, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x1690DCu;
    {
        const bool branch_taken_0x1690dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1690E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690DCu;
            // 0x1690e0: 0x2403037a  addiu       $v1, $zero, 0x37A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690dc) {
            ctx->pc = 0x169590u;
            goto label_169590;
        }
    }
    ctx->pc = 0x1690E4u;
    // 0x1690e4: 0x12030124  beq         $s0, $v1, . + 4 + (0x124 << 2)
    ctx->pc = 0x1690E4u;
    {
        const bool branch_taken_0x1690e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1690e4) {
            ctx->pc = 0x169578u;
            goto label_169578;
        }
    }
    ctx->pc = 0x1690ECu;
    // 0x1690ec: 0x24030366  addiu       $v1, $zero, 0x366
    ctx->pc = 0x1690ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
    // 0x1690f0: 0x1203011b  beq         $s0, $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x1690F0u;
    {
        const bool branch_taken_0x1690f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1690F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690F0u;
            // 0x1690f4: 0x24030352  addiu       $v1, $zero, 0x352 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690f0) {
            ctx->pc = 0x169560u;
            goto label_169560;
        }
    }
    ctx->pc = 0x1690F8u;
    // 0x1690f8: 0x12030113  beq         $s0, $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x1690F8u;
    {
        const bool branch_taken_0x1690f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1690f8) {
            ctx->pc = 0x169548u;
            goto label_169548;
        }
    }
    ctx->pc = 0x169100u;
    // 0x169100: 0x24030316  addiu       $v1, $zero, 0x316
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x169104: 0x1203010a  beq         $s0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x169104u;
    {
        const bool branch_taken_0x169104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169104u;
            // 0x169108: 0x24030302  addiu       $v1, $zero, 0x302 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169104) {
            ctx->pc = 0x169530u;
            goto label_169530;
        }
    }
    ctx->pc = 0x16910Cu;
    // 0x16910c: 0x12030102  beq         $s0, $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x16910Cu;
    {
        const bool branch_taken_0x16910c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16910c) {
            ctx->pc = 0x169518u;
            goto label_169518;
        }
    }
    ctx->pc = 0x169114u;
    // 0x169114: 0x240302ee  addiu       $v1, $zero, 0x2EE
    ctx->pc = 0x169114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x169118: 0x120300f9  beq         $s0, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x169118u;
    {
        const bool branch_taken_0x169118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169118u;
            // 0x16911c: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169118) {
            ctx->pc = 0x169500u;
            goto label_169500;
        }
    }
    ctx->pc = 0x169120u;
    // 0x169120: 0x120300f1  beq         $s0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x169120u;
    {
        const bool branch_taken_0x169120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169120) {
            ctx->pc = 0x1694E8u;
            goto label_1694e8;
        }
    }
    ctx->pc = 0x169128u;
    // 0x169128: 0x240302b2  addiu       $v1, $zero, 0x2B2
    ctx->pc = 0x169128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
    // 0x16912c: 0x120300e8  beq         $s0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x16912Cu;
    {
        const bool branch_taken_0x16912c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16912Cu;
            // 0x169130: 0x240302a8  addiu       $v1, $zero, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16912c) {
            ctx->pc = 0x1694D0u;
            goto label_1694d0;
        }
    }
    ctx->pc = 0x169134u;
    // 0x169134: 0x120300e0  beq         $s0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x169134u;
    {
        const bool branch_taken_0x169134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169134) {
            ctx->pc = 0x1694B8u;
            goto label_1694b8;
        }
    }
    ctx->pc = 0x16913Cu;
    // 0x16913c: 0x2403029e  addiu       $v1, $zero, 0x29E
    ctx->pc = 0x16913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x169140: 0x120300d7  beq         $s0, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x169140u;
    {
        const bool branch_taken_0x169140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169140u;
            // 0x169144: 0x24030294  addiu       $v1, $zero, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169140) {
            ctx->pc = 0x1694A0u;
            goto label_1694a0;
        }
    }
    ctx->pc = 0x169148u;
    // 0x169148: 0x120300cf  beq         $s0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x169148u;
    {
        const bool branch_taken_0x169148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169148) {
            ctx->pc = 0x169488u;
            goto label_169488;
        }
    }
    ctx->pc = 0x169150u;
    // 0x169150: 0x2403028a  addiu       $v1, $zero, 0x28A
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x169154: 0x120300c6  beq         $s0, $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x169154u;
    {
        const bool branch_taken_0x169154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169154u;
            // 0x169158: 0x2403024e  addiu       $v1, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169154) {
            ctx->pc = 0x169470u;
            goto label_169470;
        }
    }
    ctx->pc = 0x16915Cu;
    // 0x16915c: 0x120300be  beq         $s0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16915c) {
            ctx->pc = 0x169458u;
            goto label_169458;
        }
    }
    ctx->pc = 0x169164u;
    // 0x169164: 0x2403023a  addiu       $v1, $zero, 0x23A
    ctx->pc = 0x169164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x169168: 0x120300b5  beq         $s0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x169168u;
    {
        const bool branch_taken_0x169168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169168u;
            // 0x16916c: 0x24030226  addiu       $v1, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169168) {
            ctx->pc = 0x169440u;
            goto label_169440;
        }
    }
    ctx->pc = 0x169170u;
    // 0x169170: 0x120300ad  beq         $s0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x169170u;
    {
        const bool branch_taken_0x169170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169170) {
            ctx->pc = 0x169428u;
            goto label_169428;
        }
    }
    ctx->pc = 0x169178u;
    // 0x169178: 0x240301ea  addiu       $v1, $zero, 0x1EA
    ctx->pc = 0x169178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x16917c: 0x120300a4  beq         $s0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x16917Cu;
    {
        const bool branch_taken_0x16917c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16917Cu;
            // 0x169180: 0x240301d6  addiu       $v1, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16917c) {
            ctx->pc = 0x169410u;
            goto label_169410;
        }
    }
    ctx->pc = 0x169184u;
    // 0x169184: 0x1203009c  beq         $s0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x169184u;
    {
        const bool branch_taken_0x169184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169184) {
            ctx->pc = 0x1693F8u;
            goto label_1693f8;
        }
    }
    ctx->pc = 0x16918Cu;
    // 0x16918c: 0x240301c2  addiu       $v1, $zero, 0x1C2
    ctx->pc = 0x16918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x169190: 0x12030093  beq         $s0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x169190u;
    {
        const bool branch_taken_0x169190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169190u;
            // 0x169194: 0x24030186  addiu       $v1, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169190) {
            ctx->pc = 0x1693E0u;
            goto label_1693e0;
        }
    }
    ctx->pc = 0x169198u;
    // 0x169198: 0x1203008b  beq         $s0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x169198u;
    {
        const bool branch_taken_0x169198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169198) {
            ctx->pc = 0x1693C8u;
            goto label_1693c8;
        }
    }
    ctx->pc = 0x1691A0u;
    // 0x1691a0: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x1691a4: 0x12030082  beq         $s0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1691A4u;
    {
        const bool branch_taken_0x1691a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1691A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691A4u;
            // 0x1691a8: 0x24030172  addiu       $v1, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691a4) {
            ctx->pc = 0x1693B0u;
            goto label_1693b0;
        }
    }
    ctx->pc = 0x1691ACu;
    // 0x1691ac: 0x1203007a  beq         $s0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x1691ACu;
    {
        const bool branch_taken_0x1691ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1691ac) {
            ctx->pc = 0x169398u;
            goto label_169398;
        }
    }
    ctx->pc = 0x1691B4u;
    // 0x1691b4: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1691b8: 0x12030071  beq         $s0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1691B8u;
    {
        const bool branch_taken_0x1691b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1691BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691B8u;
            // 0x1691bc: 0x2403015e  addiu       $v1, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691b8) {
            ctx->pc = 0x169380u;
            goto label_169380;
        }
    }
    ctx->pc = 0x1691C0u;
    // 0x1691c0: 0x12030069  beq         $s0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1691C0u;
    {
        const bool branch_taken_0x1691c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1691c0) {
            ctx->pc = 0x169368u;
            goto label_169368;
        }
    }
    ctx->pc = 0x1691C8u;
    // 0x1691c8: 0x24030154  addiu       $v1, $zero, 0x154
    ctx->pc = 0x1691c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x1691cc: 0x12030060  beq         $s0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1691CCu;
    {
        const bool branch_taken_0x1691cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1691D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691CCu;
            // 0x1691d0: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691cc) {
            ctx->pc = 0x169350u;
            goto label_169350;
        }
    }
    ctx->pc = 0x1691D4u;
    // 0x1691d4: 0x12030058  beq         $s0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1691D4u;
    {
        const bool branch_taken_0x1691d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1691d4) {
            ctx->pc = 0x169338u;
            goto label_169338;
        }
    }
    ctx->pc = 0x1691DCu;
    // 0x1691dc: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1691e0: 0x1203004f  beq         $s0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1691E0u;
    {
        const bool branch_taken_0x1691e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1691E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691E0u;
            // 0x1691e4: 0x24030122  addiu       $v1, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691e0) {
            ctx->pc = 0x169320u;
            goto label_169320;
        }
    }
    ctx->pc = 0x1691E8u;
    // 0x1691e8: 0x12030047  beq         $s0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1691E8u;
    {
        const bool branch_taken_0x1691e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1691e8) {
            ctx->pc = 0x169308u;
            goto label_169308;
        }
    }
    ctx->pc = 0x1691F0u;
    // 0x1691f0: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1691f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1691f4: 0x1203003e  beq         $s0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1691F4u;
    {
        const bool branch_taken_0x1691f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1691F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691F4u;
            // 0x1691f8: 0x2403010e  addiu       $v1, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f4) {
            ctx->pc = 0x1692F0u;
            goto label_1692f0;
        }
    }
    ctx->pc = 0x1691FCu;
    // 0x1691fc: 0x12030036  beq         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1691FCu;
    {
        const bool branch_taken_0x1691fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1691fc) {
            ctx->pc = 0x1692D8u;
            goto label_1692d8;
        }
    }
    ctx->pc = 0x169204u;
    // 0x169204: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x169204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x169208: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x169208u;
    {
        const bool branch_taken_0x169208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169208u;
            // 0x16920c: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169208) {
            ctx->pc = 0x1692C0u;
            goto label_1692c0;
        }
    }
    ctx->pc = 0x169210u;
    // 0x169210: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x169210u;
    {
        const bool branch_taken_0x169210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169210) {
            ctx->pc = 0x1692A8u;
            goto label_1692a8;
        }
    }
    ctx->pc = 0x169218u;
    // 0x169218: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x16921c: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x16921Cu;
    {
        const bool branch_taken_0x16921c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16921Cu;
            // 0x169220: 0x240300dc  addiu       $v1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16921c) {
            ctx->pc = 0x169290u;
            goto label_169290;
        }
    }
    ctx->pc = 0x169224u;
    // 0x169224: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x169224u;
    {
        const bool branch_taken_0x169224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169224) {
            ctx->pc = 0x169278u;
            goto label_169278;
        }
    }
    ctx->pc = 0x16922Cu;
    // 0x16922c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x16922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x169230: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x169230u;
    {
        const bool branch_taken_0x169230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169230u;
            // 0x169234: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169230) {
            ctx->pc = 0x169260u;
            goto label_169260;
        }
    }
    ctx->pc = 0x169238u;
    // 0x169238: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169238u;
    {
        const bool branch_taken_0x169238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169238) {
            ctx->pc = 0x169248u;
            goto label_169248;
        }
    }
    ctx->pc = 0x169240u;
    // 0x169240: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x169240u;
    {
        const bool branch_taken_0x169240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169240) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169248u;
label_169248:
    // 0x169248: 0xc05d004  jal         func_174010
    ctx->pc = 0x169248u;
    SET_GPR_U32(ctx, 31, 0x169250u);
    ctx->pc = 0x16924Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169248u;
            // 0x16924c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169250u; }
        if (ctx->pc != 0x169250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169250u; }
        if (ctx->pc != 0x169250u) { return; }
    }
    ctx->pc = 0x169250u;
    // 0x169250: 0xc056050  jal         func_158140
    ctx->pc = 0x169250u;
    SET_GPR_U32(ctx, 31, 0x169258u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169258u; }
        if (ctx->pc != 0x169258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169258u; }
        if (ctx->pc != 0x169258u) { return; }
    }
    ctx->pc = 0x169258u;
    // 0x169258: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x169258u;
    {
        const bool branch_taken_0x169258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169258) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169260u;
label_169260:
    // 0x169260: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169264: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169268: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169268u;
    SET_GPR_U32(ctx, 31, 0x169270u);
    ctx->pc = 0x16926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169268u;
            // 0x16926c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169270u; }
        if (ctx->pc != 0x169270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169270u; }
        if (ctx->pc != 0x169270u) { return; }
    }
    ctx->pc = 0x169270u;
    // 0x169270: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x169270u;
    {
        const bool branch_taken_0x169270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169270) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169278u;
label_169278:
    // 0x169278: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16927c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169280: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169280u;
    SET_GPR_U32(ctx, 31, 0x169288u);
    ctx->pc = 0x169284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169280u;
            // 0x169284: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169288u; }
        if (ctx->pc != 0x169288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169288u; }
        if (ctx->pc != 0x169288u) { return; }
    }
    ctx->pc = 0x169288u;
    // 0x169288: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x169288u;
    {
        const bool branch_taken_0x169288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169288) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169290u;
label_169290:
    // 0x169290: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169294: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169298: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169298u;
    SET_GPR_U32(ctx, 31, 0x1692A0u);
    ctx->pc = 0x16929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169298u;
            // 0x16929c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692A0u; }
        if (ctx->pc != 0x1692A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692A0u; }
        if (ctx->pc != 0x1692A0u) { return; }
    }
    ctx->pc = 0x1692A0u;
    // 0x1692a0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x1692A0u;
    {
        const bool branch_taken_0x1692a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692a0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1692A8u;
label_1692a8:
    // 0x1692a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1692a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1692ac: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1692acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1692b0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1692B0u;
    SET_GPR_U32(ctx, 31, 0x1692B8u);
    ctx->pc = 0x1692B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692B0u;
            // 0x1692b4: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692B8u; }
        if (ctx->pc != 0x1692B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692B8u; }
        if (ctx->pc != 0x1692B8u) { return; }
    }
    ctx->pc = 0x1692B8u;
    // 0x1692b8: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1692B8u;
    {
        const bool branch_taken_0x1692b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692b8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1692C0u;
label_1692c0:
    // 0x1692c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1692c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1692c8: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x1692C8u;
    SET_GPR_U32(ctx, 31, 0x1692D0u);
    ctx->pc = 0x1692CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692C8u;
            // 0x1692cc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692D0u; }
        if (ctx->pc != 0x1692D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692D0u; }
        if (ctx->pc != 0x1692D0u) { return; }
    }
    ctx->pc = 0x1692D0u;
    // 0x1692d0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1692D0u;
    {
        const bool branch_taken_0x1692d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692d0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1692D8u;
label_1692d8:
    // 0x1692d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1692d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1692dc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1692dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1692e0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1692E0u;
    SET_GPR_U32(ctx, 31, 0x1692E8u);
    ctx->pc = 0x1692E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692E0u;
            // 0x1692e4: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692E8u; }
        if (ctx->pc != 0x1692E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692E8u; }
        if (ctx->pc != 0x1692E8u) { return; }
    }
    ctx->pc = 0x1692E8u;
    // 0x1692e8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1692E8u;
    {
        const bool branch_taken_0x1692e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692e8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1692F0u;
label_1692f0:
    // 0x1692f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1692f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1692f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1692f8: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x1692F8u;
    SET_GPR_U32(ctx, 31, 0x169300u);
    ctx->pc = 0x1692FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692F8u;
            // 0x1692fc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169300u; }
        if (ctx->pc != 0x169300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169300u; }
        if (ctx->pc != 0x169300u) { return; }
    }
    ctx->pc = 0x169300u;
    // 0x169300: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x169300u;
    {
        const bool branch_taken_0x169300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169300) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169308u;
label_169308:
    // 0x169308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16930c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x169310: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169310u;
    SET_GPR_U32(ctx, 31, 0x169318u);
    ctx->pc = 0x169314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169310u;
            // 0x169314: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169318u; }
        if (ctx->pc != 0x169318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169318u; }
        if (ctx->pc != 0x169318u) { return; }
    }
    ctx->pc = 0x169318u;
    // 0x169318: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x169318u;
    {
        const bool branch_taken_0x169318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169318) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169320u;
label_169320:
    // 0x169320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169324: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169328: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169328u;
    SET_GPR_U32(ctx, 31, 0x169330u);
    ctx->pc = 0x16932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169328u;
            // 0x16932c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169330u; }
        if (ctx->pc != 0x169330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169330u; }
        if (ctx->pc != 0x169330u) { return; }
    }
    ctx->pc = 0x169330u;
    // 0x169330: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x169330u;
    {
        const bool branch_taken_0x169330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169330) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169338u;
label_169338:
    // 0x169338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16933c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169340: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169340u;
    SET_GPR_U32(ctx, 31, 0x169348u);
    ctx->pc = 0x169344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169340u;
            // 0x169344: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169348u; }
        if (ctx->pc != 0x169348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169348u; }
        if (ctx->pc != 0x169348u) { return; }
    }
    ctx->pc = 0x169348u;
    // 0x169348: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x169348u;
    {
        const bool branch_taken_0x169348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169348) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169350u;
label_169350:
    // 0x169350: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169354: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169358: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169358u;
    SET_GPR_U32(ctx, 31, 0x169360u);
    ctx->pc = 0x16935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169358u;
            // 0x16935c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169360u; }
        if (ctx->pc != 0x169360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169360u; }
        if (ctx->pc != 0x169360u) { return; }
    }
    ctx->pc = 0x169360u;
    // 0x169360: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x169360u;
    {
        const bool branch_taken_0x169360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169360) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169368u;
label_169368:
    // 0x169368: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16936c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x169370: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169370u;
    SET_GPR_U32(ctx, 31, 0x169378u);
    ctx->pc = 0x169374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169370u;
            // 0x169374: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169378u; }
        if (ctx->pc != 0x169378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169378u; }
        if (ctx->pc != 0x169378u) { return; }
    }
    ctx->pc = 0x169378u;
    // 0x169378: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x169378u;
    {
        const bool branch_taken_0x169378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169378) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169380u;
label_169380:
    // 0x169380: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169384: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169388: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x169388u;
    SET_GPR_U32(ctx, 31, 0x169390u);
    ctx->pc = 0x16938Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169388u;
            // 0x16938c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169390u; }
        if (ctx->pc != 0x169390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169390u; }
        if (ctx->pc != 0x169390u) { return; }
    }
    ctx->pc = 0x169390u;
    // 0x169390: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x169390u;
    {
        const bool branch_taken_0x169390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169390) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169398u;
label_169398:
    // 0x169398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16939c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1693a0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1693A0u;
    SET_GPR_U32(ctx, 31, 0x1693A8u);
    ctx->pc = 0x1693A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693A0u;
            // 0x1693a4: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693A8u; }
        if (ctx->pc != 0x1693A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693A8u; }
        if (ctx->pc != 0x1693A8u) { return; }
    }
    ctx->pc = 0x1693A8u;
    // 0x1693a8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1693A8u;
    {
        const bool branch_taken_0x1693a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693a8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1693B0u;
label_1693b0:
    // 0x1693b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1693b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1693b4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x1693b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1693b8: 0xc0721b0  jal         func_1C86C0
    ctx->pc = 0x1693B8u;
    SET_GPR_U32(ctx, 31, 0x1693C0u);
    ctx->pc = 0x1693BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693B8u;
            // 0x1693bc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C86C0u;
    if (runtime->hasFunction(0x1C86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693C0u; }
        if (ctx->pc != 0x1693C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_03_0x1c86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693C0u; }
        if (ctx->pc != 0x1693C0u) { return; }
    }
    ctx->pc = 0x1693C0u;
    // 0x1693c0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1693C0u;
    {
        const bool branch_taken_0x1693c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693c0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1693C8u;
label_1693c8:
    // 0x1693c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1693cc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1693d0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1693D0u;
    SET_GPR_U32(ctx, 31, 0x1693D8u);
    ctx->pc = 0x1693D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693D0u;
            // 0x1693d4: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693D8u; }
        if (ctx->pc != 0x1693D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693D8u; }
        if (ctx->pc != 0x1693D8u) { return; }
    }
    ctx->pc = 0x1693D8u;
    // 0x1693d8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1693D8u;
    {
        const bool branch_taken_0x1693d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693d8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1693E0u;
label_1693e0:
    // 0x1693e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1693e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1693e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1693e8: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1693E8u;
    SET_GPR_U32(ctx, 31, 0x1693F0u);
    ctx->pc = 0x1693ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693E8u;
            // 0x1693ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693F0u; }
        if (ctx->pc != 0x1693F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693F0u; }
        if (ctx->pc != 0x1693F0u) { return; }
    }
    ctx->pc = 0x1693F0u;
    // 0x1693f0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1693F0u;
    {
        const bool branch_taken_0x1693f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693f0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1693F8u;
label_1693f8:
    // 0x1693f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1693f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1693fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1693fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169400: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169400u;
    SET_GPR_U32(ctx, 31, 0x169408u);
    ctx->pc = 0x169404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169400u;
            // 0x169404: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169408u; }
        if (ctx->pc != 0x169408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169408u; }
        if (ctx->pc != 0x169408u) { return; }
    }
    ctx->pc = 0x169408u;
    // 0x169408: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x169408u;
    {
        const bool branch_taken_0x169408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169408) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169410u;
label_169410:
    // 0x169410: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169414: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169418: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169418u;
    SET_GPR_U32(ctx, 31, 0x169420u);
    ctx->pc = 0x16941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169418u;
            // 0x16941c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169420u; }
        if (ctx->pc != 0x169420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169420u; }
        if (ctx->pc != 0x169420u) { return; }
    }
    ctx->pc = 0x169420u;
    // 0x169420: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x169420u;
    {
        const bool branch_taken_0x169420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169420) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169428u;
label_169428:
    // 0x169428: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16942c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169430: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169430u;
    SET_GPR_U32(ctx, 31, 0x169438u);
    ctx->pc = 0x169434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169430u;
            // 0x169434: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169438u; }
        if (ctx->pc != 0x169438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169438u; }
        if (ctx->pc != 0x169438u) { return; }
    }
    ctx->pc = 0x169438u;
    // 0x169438: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x169438u;
    {
        const bool branch_taken_0x169438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169438) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169440u;
label_169440:
    // 0x169440: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169448: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169448u;
    SET_GPR_U32(ctx, 31, 0x169450u);
    ctx->pc = 0x16944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169448u;
            // 0x16944c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169450u; }
        if (ctx->pc != 0x169450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169450u; }
        if (ctx->pc != 0x169450u) { return; }
    }
    ctx->pc = 0x169450u;
    // 0x169450: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x169450u;
    {
        const bool branch_taken_0x169450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169450) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169458u;
label_169458:
    // 0x169458: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16945c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169460: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169460u;
    SET_GPR_U32(ctx, 31, 0x169468u);
    ctx->pc = 0x169464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169460u;
            // 0x169464: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169468u; }
        if (ctx->pc != 0x169468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169468u; }
        if (ctx->pc != 0x169468u) { return; }
    }
    ctx->pc = 0x169468u;
    // 0x169468: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x169468u;
    {
        const bool branch_taken_0x169468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169468) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169470u;
label_169470:
    // 0x169470: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x169470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169474: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169478: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169478u;
    SET_GPR_U32(ctx, 31, 0x169480u);
    ctx->pc = 0x16947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169478u;
            // 0x16947c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169480u; }
        if (ctx->pc != 0x169480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169480u; }
        if (ctx->pc != 0x169480u) { return; }
    }
    ctx->pc = 0x169480u;
    // 0x169480: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x169480u;
    {
        const bool branch_taken_0x169480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169480) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169488u;
label_169488:
    // 0x169488: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16948c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169490: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169490u;
    SET_GPR_U32(ctx, 31, 0x169498u);
    ctx->pc = 0x169494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169490u;
            // 0x169494: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169498u; }
        if (ctx->pc != 0x169498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169498u; }
        if (ctx->pc != 0x169498u) { return; }
    }
    ctx->pc = 0x169498u;
    // 0x169498: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x169498u;
    {
        const bool branch_taken_0x169498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169498) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1694A0u;
label_1694a0:
    // 0x1694a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1694a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1694a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694a8: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1694A8u;
    SET_GPR_U32(ctx, 31, 0x1694B0u);
    ctx->pc = 0x1694ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1694A8u;
            // 0x1694ac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694B0u; }
        if (ctx->pc != 0x1694B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694B0u; }
        if (ctx->pc != 0x1694B0u) { return; }
    }
    ctx->pc = 0x1694B0u;
    // 0x1694b0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1694B0u;
    {
        const bool branch_taken_0x1694b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694b0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1694B8u;
label_1694b8:
    // 0x1694b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1694b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1694bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1694bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694c0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1694C0u;
    SET_GPR_U32(ctx, 31, 0x1694C8u);
    ctx->pc = 0x1694C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1694C0u;
            // 0x1694c4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C8u; }
        if (ctx->pc != 0x1694C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C8u; }
        if (ctx->pc != 0x1694C8u) { return; }
    }
    ctx->pc = 0x1694C8u;
    // 0x1694c8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1694C8u;
    {
        const bool branch_taken_0x1694c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694c8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1694D0u;
label_1694d0:
    // 0x1694d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1694d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1694d4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x1694d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1694d8: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1694D8u;
    SET_GPR_U32(ctx, 31, 0x1694E0u);
    ctx->pc = 0x1694DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1694D8u;
            // 0x1694dc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694E0u; }
        if (ctx->pc != 0x1694E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694E0u; }
        if (ctx->pc != 0x1694E0u) { return; }
    }
    ctx->pc = 0x1694E0u;
    // 0x1694e0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1694E0u;
    {
        const bool branch_taken_0x1694e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694e0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1694E8u;
label_1694e8:
    // 0x1694e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1694ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1694ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1694f0: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x1694F0u;
    SET_GPR_U32(ctx, 31, 0x1694F8u);
    ctx->pc = 0x1694F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1694F0u;
            // 0x1694f4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694F8u; }
        if (ctx->pc != 0x1694F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694F8u; }
        if (ctx->pc != 0x1694F8u) { return; }
    }
    ctx->pc = 0x1694F8u;
    // 0x1694f8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1694F8u;
    {
        const bool branch_taken_0x1694f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694f8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169500u;
label_169500:
    // 0x169500: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169504: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169508: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169508u;
    SET_GPR_U32(ctx, 31, 0x169510u);
    ctx->pc = 0x16950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169508u;
            // 0x16950c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169510u; }
        if (ctx->pc != 0x169510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169510u; }
        if (ctx->pc != 0x169510u) { return; }
    }
    ctx->pc = 0x169510u;
    // 0x169510: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x169510u;
    {
        const bool branch_taken_0x169510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169510) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169518u;
label_169518:
    // 0x169518: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16951c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169520: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169520u;
    SET_GPR_U32(ctx, 31, 0x169528u);
    ctx->pc = 0x169524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169520u;
            // 0x169524: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169528u; }
        if (ctx->pc != 0x169528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169528u; }
        if (ctx->pc != 0x169528u) { return; }
    }
    ctx->pc = 0x169528u;
    // 0x169528: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x169528u;
    {
        const bool branch_taken_0x169528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169528) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169530u;
label_169530:
    // 0x169530: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169534: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169538: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169538u;
    SET_GPR_U32(ctx, 31, 0x169540u);
    ctx->pc = 0x16953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169538u;
            // 0x16953c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169540u; }
        if (ctx->pc != 0x169540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169540u; }
        if (ctx->pc != 0x169540u) { return; }
    }
    ctx->pc = 0x169540u;
    // 0x169540: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x169540u;
    {
        const bool branch_taken_0x169540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169540) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169548u;
label_169548:
    // 0x169548: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16954c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169550: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169550u;
    SET_GPR_U32(ctx, 31, 0x169558u);
    ctx->pc = 0x169554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169550u;
            // 0x169554: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169558u; }
        if (ctx->pc != 0x169558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169558u; }
        if (ctx->pc != 0x169558u) { return; }
    }
    ctx->pc = 0x169558u;
    // 0x169558: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x169558u;
    {
        const bool branch_taken_0x169558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169558) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169560u;
label_169560:
    // 0x169560: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x169560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169568: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169568u;
    SET_GPR_U32(ctx, 31, 0x169570u);
    ctx->pc = 0x16956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169568u;
            // 0x16956c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169570u; }
        if (ctx->pc != 0x169570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169570u; }
        if (ctx->pc != 0x169570u) { return; }
    }
    ctx->pc = 0x169570u;
    // 0x169570: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x169570u;
    {
        const bool branch_taken_0x169570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169570) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169578u;
label_169578:
    // 0x169578: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16957c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169580: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169580u;
    SET_GPR_U32(ctx, 31, 0x169588u);
    ctx->pc = 0x169584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169580u;
            // 0x169584: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169588u; }
        if (ctx->pc != 0x169588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169588u; }
        if (ctx->pc != 0x169588u) { return; }
    }
    ctx->pc = 0x169588u;
    // 0x169588: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x169588u;
    {
        const bool branch_taken_0x169588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169588) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169590u;
label_169590:
    // 0x169590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169598: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x169598u;
    SET_GPR_U32(ctx, 31, 0x1695A0u);
    ctx->pc = 0x16959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169598u;
            // 0x16959c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695A0u; }
        if (ctx->pc != 0x1695A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695A0u; }
        if (ctx->pc != 0x1695A0u) { return; }
    }
    ctx->pc = 0x1695A0u;
    // 0x1695a0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1695A0u;
    {
        const bool branch_taken_0x1695a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695a0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1695A8u;
label_1695a8:
    // 0x1695a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1695a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b0: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x1695B0u;
    SET_GPR_U32(ctx, 31, 0x1695B8u);
    ctx->pc = 0x1695B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695B0u;
            // 0x1695b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695B8u; }
        if (ctx->pc != 0x1695B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695B8u; }
        if (ctx->pc != 0x1695B8u) { return; }
    }
    ctx->pc = 0x1695B8u;
    // 0x1695b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1695B8u;
    {
        const bool branch_taken_0x1695b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695b8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1695C0u;
label_1695c0:
    // 0x1695c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1695c4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1695c8: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x1695C8u;
    SET_GPR_U32(ctx, 31, 0x1695D0u);
    ctx->pc = 0x1695CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695C8u;
            // 0x1695cc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695D0u; }
        if (ctx->pc != 0x1695D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695D0u; }
        if (ctx->pc != 0x1695D0u) { return; }
    }
    ctx->pc = 0x1695D0u;
    // 0x1695d0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1695D0u;
    {
        const bool branch_taken_0x1695d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695d0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1695D8u;
label_1695d8:
    // 0x1695d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1695d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695dc: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x1695e0: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x1695E0u;
    SET_GPR_U32(ctx, 31, 0x1695E8u);
    ctx->pc = 0x1695E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695E0u;
            // 0x1695e4: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695E8u; }
        if (ctx->pc != 0x1695E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695E8u; }
        if (ctx->pc != 0x1695E8u) { return; }
    }
    ctx->pc = 0x1695E8u;
    // 0x1695e8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1695E8u;
    {
        const bool branch_taken_0x1695e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695e8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1695F0u;
label_1695f0:
    // 0x1695f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1695f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1695f4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1695f8: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x1695F8u;
    SET_GPR_U32(ctx, 31, 0x169600u);
    ctx->pc = 0x1695FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1695F8u;
            // 0x1695fc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169600u; }
        if (ctx->pc != 0x169600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169600u; }
        if (ctx->pc != 0x169600u) { return; }
    }
    ctx->pc = 0x169600u;
    // 0x169600: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x169600u;
    {
        const bool branch_taken_0x169600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169600) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169608u;
label_169608:
    // 0x169608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16960c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169610: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x169610u;
    SET_GPR_U32(ctx, 31, 0x169618u);
    ctx->pc = 0x169614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169610u;
            // 0x169614: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169618u; }
        if (ctx->pc != 0x169618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169618u; }
        if (ctx->pc != 0x169618u) { return; }
    }
    ctx->pc = 0x169618u;
    // 0x169618: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x169618u;
    {
        const bool branch_taken_0x169618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169618) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169620u;
label_169620:
    // 0x169620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169624: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x169624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x169628: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x169628u;
    SET_GPR_U32(ctx, 31, 0x169630u);
    ctx->pc = 0x16962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169628u;
            // 0x16962c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169630u; }
        if (ctx->pc != 0x169630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169630u; }
        if (ctx->pc != 0x169630u) { return; }
    }
    ctx->pc = 0x169630u;
    // 0x169630: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x169630u;
    {
        const bool branch_taken_0x169630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169630) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169638u;
label_169638:
    // 0x169638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16963c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16963cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169640: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x169640u;
    SET_GPR_U32(ctx, 31, 0x169648u);
    ctx->pc = 0x169644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169640u;
            // 0x169644: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169648u; }
        if (ctx->pc != 0x169648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169648u; }
        if (ctx->pc != 0x169648u) { return; }
    }
    ctx->pc = 0x169648u;
    // 0x169648: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x169648u;
    {
        const bool branch_taken_0x169648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169648) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169650u;
label_169650:
    // 0x169650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169654: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x169658: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x169658u;
    SET_GPR_U32(ctx, 31, 0x169660u);
    ctx->pc = 0x16965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169658u;
            // 0x16965c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169660u; }
        if (ctx->pc != 0x169660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169660u; }
        if (ctx->pc != 0x169660u) { return; }
    }
    ctx->pc = 0x169660u;
    // 0x169660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169664: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x169668: 0xc0730b8  jal         func_1CC2E0
    ctx->pc = 0x169668u;
    SET_GPR_U32(ctx, 31, 0x169670u);
    ctx->pc = 0x16966Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169668u;
            // 0x16966c: 0x2406ffd5  addiu       $a2, $zero, -0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967253));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2E0u;
    if (runtime->hasFunction(0x1CC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169670u; }
        if (ctx->pc != 0x169670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_02_0x1cc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169670u; }
        if (ctx->pc != 0x169670u) { return; }
    }
    ctx->pc = 0x169670u;
    // 0x169670: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x169670u;
    {
        const bool branch_taken_0x169670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169670) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169678u;
label_169678:
    // 0x169678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16967c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x169680: 0xc0725f8  jal         func_1C97E0
    ctx->pc = 0x169680u;
    SET_GPR_U32(ctx, 31, 0x169688u);
    ctx->pc = 0x169684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169680u;
            // 0x169684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C97E0u;
    if (runtime->hasFunction(0x1C97E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C97E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169688u; }
        if (ctx->pc != 0x169688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_01_0x1c97e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169688u; }
        if (ctx->pc != 0x169688u) { return; }
    }
    ctx->pc = 0x169688u;
    // 0x169688: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x169688u;
    {
        const bool branch_taken_0x169688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169688) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x169690u;
label_169690:
    // 0x169690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169694: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x169698: 0xc0725f8  jal         func_1C97E0
    ctx->pc = 0x169698u;
    SET_GPR_U32(ctx, 31, 0x1696A0u);
    ctx->pc = 0x16969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169698u;
            // 0x16969c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C97E0u;
    if (runtime->hasFunction(0x1C97E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C97E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696A0u; }
        if (ctx->pc != 0x1696A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_01_0x1c97e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696A0u; }
        if (ctx->pc != 0x1696A0u) { return; }
    }
    ctx->pc = 0x1696A0u;
    // 0x1696a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1696A0u;
    {
        const bool branch_taken_0x1696a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696a0) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1696ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1696acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1696b0: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x1696B0u;
    SET_GPR_U32(ctx, 31, 0x1696B8u);
    ctx->pc = 0x1696B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1696B0u;
            // 0x1696b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696B8u; }
        if (ctx->pc != 0x1696B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696B8u; }
        if (ctx->pc != 0x1696B8u) { return; }
    }
    ctx->pc = 0x1696B8u;
    // 0x1696b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1696B8u;
    {
        const bool branch_taken_0x1696b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696b8) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1696C0u;
label_1696c0:
    // 0x1696c0: 0xc05d004  jal         func_174010
    ctx->pc = 0x1696C0u;
    SET_GPR_U32(ctx, 31, 0x1696C8u);
    ctx->pc = 0x1696C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1696C0u;
            // 0x1696c4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696C8u; }
        if (ctx->pc != 0x1696C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696C8u; }
        if (ctx->pc != 0x1696C8u) { return; }
    }
    ctx->pc = 0x1696C8u;
    // 0x1696c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1696c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696d0: 0xc0755c8  jal         func_1D5720
    ctx->pc = 0x1696D0u;
    SET_GPR_U32(ctx, 31, 0x1696D8u);
    ctx->pc = 0x1696D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1696D0u;
            // 0x1696d4: 0x2406ff9c  addiu       $a2, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5720u;
    if (runtime->hasFunction(0x1D5720u)) {
        auto targetFn = runtime->lookupFunction(0x1D5720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696D8u; }
        if (ctx->pc != 0x1696D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStageex1Boss_0x1d5720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696D8u; }
        if (ctx->pc != 0x1696D8u) { return; }
    }
    ctx->pc = 0x1696D8u;
label_1696d8:
    // 0x1696d8: 0x2a010fa1  slti        $at, $s0, 0xFA1
    ctx->pc = 0x1696d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4001) ? 1 : 0);
    // 0x1696dc: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1696DCu;
    {
        const bool branch_taken_0x1696dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1696E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696DCu;
            // 0x1696e0: 0x2a0112c0  slti        $at, $s0, 0x12C0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696dc) {
            ctx->pc = 0x169788u;
            goto label_169788;
        }
    }
    ctx->pc = 0x1696E4u;
    // 0x1696e4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1696E4u;
    {
        const bool branch_taken_0x1696e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696e4) {
            ctx->pc = 0x169788u;
            goto label_169788;
        }
    }
    ctx->pc = 0x1696ECu;
    // 0x1696ec: 0xc0730b0  jal         func_1CC2C0
    ctx->pc = 0x1696ECu;
    SET_GPR_U32(ctx, 31, 0x1696F4u);
    ctx->pc = 0x1CC2C0u;
    if (runtime->hasFunction(0x1CC2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696F4u; }
        if (ctx->pc != 0x1696F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isstageex1chuboss_alive_0x1cc2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696F4u; }
        if (ctx->pc != 0x1696F4u) { return; }
    }
    ctx->pc = 0x1696F4u;
    // 0x1696f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1696F4u;
    {
        const bool branch_taken_0x1696f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696F4u;
            // 0x1696f8: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696f4) {
            ctx->pc = 0x169788u;
            goto label_169788;
        }
    }
    ctx->pc = 0x1696FCu;
    // 0x1696fc: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1696fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169700: 0x0  nop
    ctx->pc = 0x169700u;
    // NOP
    // 0x169704: 0x0  nop
    ctx->pc = 0x169704u;
    // NOP
    // 0x169708: 0x1810  mfhi        $v1
    ctx->pc = 0x169708u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16970c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16970Cu;
    {
        const bool branch_taken_0x16970c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16970c) {
            ctx->pc = 0x169740u;
            goto label_169740;
        }
    }
    ctx->pc = 0x169714u;
    // 0x169714: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x169714u;
    SET_GPR_U32(ctx, 31, 0x16971Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16971Cu; }
        if (ctx->pc != 0x16971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16971Cu; }
        if (ctx->pc != 0x16971Cu) { return; }
    }
    ctx->pc = 0x16971Cu;
    // 0x16971c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x169720: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x169720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x169724: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x169724u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x169728: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x169728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16972c: 0x0  nop
    ctx->pc = 0x16972cu;
    // NOP
    // 0x169730: 0x1010  mfhi        $v0
    ctx->pc = 0x169730u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x169734: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169738: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169738u;
    SET_GPR_U32(ctx, 31, 0x169740u);
    ctx->pc = 0x16973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169738u;
            // 0x16973c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169740u; }
        if (ctx->pc != 0x169740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169740u; }
        if (ctx->pc != 0x169740u) { return; }
    }
    ctx->pc = 0x169740u;
label_169740:
    // 0x169740: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x169744: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x169744u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x169748: 0x0  nop
    ctx->pc = 0x169748u;
    // NOP
    // 0x16974c: 0x0  nop
    ctx->pc = 0x16974cu;
    // NOP
    // 0x169750: 0x1810  mfhi        $v1
    ctx->pc = 0x169750u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x169754: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x169754u;
    {
        const bool branch_taken_0x169754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169754) {
            ctx->pc = 0x169788u;
            goto label_169788;
        }
    }
    ctx->pc = 0x16975Cu;
    // 0x16975c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16975Cu;
    SET_GPR_U32(ctx, 31, 0x169764u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169764u; }
        if (ctx->pc != 0x169764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169764u; }
        if (ctx->pc != 0x169764u) { return; }
    }
    ctx->pc = 0x169764u;
    // 0x169764: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x169768: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x169768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16976c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16976cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x169770: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x169774: 0x0  nop
    ctx->pc = 0x169774u;
    // NOP
    // 0x169778: 0x1010  mfhi        $v0
    ctx->pc = 0x169778u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16977c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169780: 0xc07368c  jal         func_1CDA30
    ctx->pc = 0x169780u;
    SET_GPR_U32(ctx, 31, 0x169788u);
    ctx->pc = 0x169784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169780u;
            // 0x169784: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA30u;
    if (runtime->hasFunction(0x1CDA30u)) {
        auto targetFn = runtime->lookupFunction(0x1CDA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169788u; }
        if (ctx->pc != 0x169788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_04_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169788u; }
        if (ctx->pc != 0x169788u) { return; }
    }
    ctx->pc = 0x169788u;
label_169788:
    // 0x169788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16978c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169790: 0x3e00008  jr          $ra
    ctx->pc = 0x169790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169790u;
            // 0x169794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169248u: goto label_169248;
            case 0x169260u: goto label_169260;
            case 0x169278u: goto label_169278;
            case 0x169290u: goto label_169290;
            case 0x1692A8u: goto label_1692a8;
            case 0x1692C0u: goto label_1692c0;
            case 0x1692D8u: goto label_1692d8;
            case 0x1692F0u: goto label_1692f0;
            case 0x169308u: goto label_169308;
            case 0x169320u: goto label_169320;
            case 0x169338u: goto label_169338;
            case 0x169350u: goto label_169350;
            case 0x169368u: goto label_169368;
            case 0x169380u: goto label_169380;
            case 0x169398u: goto label_169398;
            case 0x1693B0u: goto label_1693b0;
            case 0x1693C8u: goto label_1693c8;
            case 0x1693E0u: goto label_1693e0;
            case 0x1693F8u: goto label_1693f8;
            case 0x169410u: goto label_169410;
            case 0x169428u: goto label_169428;
            case 0x169440u: goto label_169440;
            case 0x169458u: goto label_169458;
            case 0x169470u: goto label_169470;
            case 0x169488u: goto label_169488;
            case 0x1694A0u: goto label_1694a0;
            case 0x1694B8u: goto label_1694b8;
            case 0x1694D0u: goto label_1694d0;
            case 0x1694E8u: goto label_1694e8;
            case 0x169500u: goto label_169500;
            case 0x169518u: goto label_169518;
            case 0x169530u: goto label_169530;
            case 0x169548u: goto label_169548;
            case 0x169560u: goto label_169560;
            case 0x169578u: goto label_169578;
            case 0x169590u: goto label_169590;
            case 0x1695A8u: goto label_1695a8;
            case 0x1695C0u: goto label_1695c0;
            case 0x1695D8u: goto label_1695d8;
            case 0x1695F0u: goto label_1695f0;
            case 0x169608u: goto label_169608;
            case 0x169620u: goto label_169620;
            case 0x169638u: goto label_169638;
            case 0x169650u: goto label_169650;
            case 0x169678u: goto label_169678;
            case 0x169690u: goto label_169690;
            case 0x1696A8u: goto label_1696a8;
            case 0x1696C0u: goto label_1696c0;
            case 0x1696D8u: goto label_1696d8;
            case 0x169740u: goto label_169740;
            case 0x169788u: goto label_169788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169798u;
}
