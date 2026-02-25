#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage4EnemyGenerate
// Address: 0x16ba60 - 0x16c334
void Stage4EnemyGenerate_0x16ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage4EnemyGenerate_0x16ba60");
#endif

    ctx->pc = 0x16ba60u;

    // 0x16ba60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba64: 0x24030dac  addiu       $v1, $zero, 0xDAC
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    // 0x16ba68: 0x10830229  beq         $a0, $v1, . + 4 + (0x229 << 2)
    ctx->pc = 0x16BA68u;
    {
        const bool branch_taken_0x16ba68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA68u;
            // 0x16ba6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba68) {
            ctx->pc = 0x16C310u;
            goto label_16c310;
        }
    }
    ctx->pc = 0x16BA70u;
    // 0x16ba70: 0x24030c1c  addiu       $v1, $zero, 0xC1C
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
    // 0x16ba74: 0x1083020c  beq         $a0, $v1, . + 4 + (0x20C << 2)
    ctx->pc = 0x16BA74u;
    {
        const bool branch_taken_0x16ba74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA74u;
            // 0x16ba78: 0x24030b54  addiu       $v1, $zero, 0xB54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba74) {
            ctx->pc = 0x16C2A8u;
            goto label_16c2a8;
        }
    }
    ctx->pc = 0x16BA7Cu;
    // 0x16ba7c: 0x10830204  beq         $a0, $v1, . + 4 + (0x204 << 2)
    ctx->pc = 0x16BA7Cu;
    {
        const bool branch_taken_0x16ba7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ba7c) {
            ctx->pc = 0x16C290u;
            goto label_16c290;
        }
    }
    ctx->pc = 0x16BA84u;
    // 0x16ba84: 0x24030b22  addiu       $v1, $zero, 0xB22
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2850));
    // 0x16ba88: 0x108301e7  beq         $a0, $v1, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x16BA88u;
    {
        const bool branch_taken_0x16ba88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA88u;
            // 0x16ba8c: 0x240309f6  addiu       $v1, $zero, 0x9F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba88) {
            ctx->pc = 0x16C228u;
            goto label_16c228;
        }
    }
    ctx->pc = 0x16BA90u;
    // 0x16ba90: 0x108301df  beq         $a0, $v1, . + 4 + (0x1DF << 2)
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16C210u;
            goto label_16c210;
        }
    }
    ctx->pc = 0x16BA98u;
    // 0x16ba98: 0x24030960  addiu       $v1, $zero, 0x960
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2400));
    // 0x16ba9c: 0x108301d2  beq         $a0, $v1, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x16BA9Cu;
    {
        const bool branch_taken_0x16ba9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA9Cu;
            // 0x16baa0: 0x24030802  addiu       $v1, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba9c) {
            ctx->pc = 0x16C1E8u;
            goto label_16c1e8;
        }
    }
    ctx->pc = 0x16BAA4u;
    // 0x16baa4: 0x108301c6  beq         $a0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x16BAA4u;
    {
        const bool branch_taken_0x16baa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16baa4) {
            ctx->pc = 0x16C1C0u;
            goto label_16c1c0;
        }
    }
    ctx->pc = 0x16BAACu;
    // 0x16baac: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x16baacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x16bab0: 0x108301bd  beq         $a0, $v1, . + 4 + (0x1BD << 2)
    ctx->pc = 0x16BAB0u;
    {
        const bool branch_taken_0x16bab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAB0u;
            // 0x16bab4: 0x24030672  addiu       $v1, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bab0) {
            ctx->pc = 0x16C1A8u;
            goto label_16c1a8;
        }
    }
    ctx->pc = 0x16BAB8u;
    // 0x16bab8: 0x108301ad  beq         $a0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x16BAB8u;
    {
        const bool branch_taken_0x16bab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bab8) {
            ctx->pc = 0x16C170u;
            goto label_16c170;
        }
    }
    ctx->pc = 0x16BAC0u;
    // 0x16bac0: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x16bac4: 0x1083019c  beq         $a0, $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x16BAC4u;
    {
        const bool branch_taken_0x16bac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAC4u;
            // 0x16bac8: 0x2403060e  addiu       $v1, $zero, 0x60E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bac4) {
            ctx->pc = 0x16C138u;
            goto label_16c138;
        }
    }
    ctx->pc = 0x16BACCu;
    // 0x16bacc: 0x1083018c  beq         $a0, $v1, . + 4 + (0x18C << 2)
    ctx->pc = 0x16BACCu;
    {
        const bool branch_taken_0x16bacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bacc) {
            ctx->pc = 0x16C100u;
            goto label_16c100;
        }
    }
    ctx->pc = 0x16BAD4u;
    // 0x16bad4: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x16bad8: 0x1083017b  beq         $a0, $v1, . + 4 + (0x17B << 2)
    ctx->pc = 0x16BAD8u;
    {
        const bool branch_taken_0x16bad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAD8u;
            // 0x16badc: 0x240305aa  addiu       $v1, $zero, 0x5AA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bad8) {
            ctx->pc = 0x16C0C8u;
            goto label_16c0c8;
        }
    }
    ctx->pc = 0x16BAE0u;
    // 0x16bae0: 0x1083016b  beq         $a0, $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x16BAE0u;
    {
        const bool branch_taken_0x16bae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bae0) {
            ctx->pc = 0x16C090u;
            goto label_16c090;
        }
    }
    ctx->pc = 0x16BAE8u;
    // 0x16bae8: 0x24030514  addiu       $v1, $zero, 0x514
    ctx->pc = 0x16bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x16baec: 0x10830142  beq         $a0, $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x16BAECu;
    {
        const bool branch_taken_0x16baec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAECu;
            // 0x16baf0: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baec) {
            ctx->pc = 0x16BFF8u;
            goto label_16bff8;
        }
    }
    ctx->pc = 0x16BAF4u;
    // 0x16baf4: 0x10830126  beq         $a0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x16BAF4u;
    {
        const bool branch_taken_0x16baf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16baf4) {
            ctx->pc = 0x16BF90u;
            goto label_16bf90;
        }
    }
    ctx->pc = 0x16BAFCu;
    // 0x16bafc: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x16bb00: 0x10830109  beq         $a0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x16BB00u;
    {
        const bool branch_taken_0x16bb00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB00u;
            // 0x16bb04: 0x24030406  addiu       $v1, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb00) {
            ctx->pc = 0x16BF28u;
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BB08u;
    // 0x16bb08: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x16BB08u;
    {
        const bool branch_taken_0x16bb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb08) {
            ctx->pc = 0x16BF10u;
            goto label_16bf10;
        }
    }
    ctx->pc = 0x16BB10u;
    // 0x16bb10: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16bb14: 0x108300f8  beq         $a0, $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x16BB14u;
    {
        const bool branch_taken_0x16bb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB14u;
            // 0x16bb18: 0x2403035c  addiu       $v1, $zero, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb14) {
            ctx->pc = 0x16BEF8u;
            goto label_16bef8;
        }
    }
    ctx->pc = 0x16BB1Cu;
    // 0x16bb1c: 0x108300f0  beq         $a0, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x16BB1Cu;
    {
        const bool branch_taken_0x16bb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb1c) {
            ctx->pc = 0x16BEE0u;
            goto label_16bee0;
        }
    }
    ctx->pc = 0x16BB24u;
    // 0x16bb24: 0x240302e4  addiu       $v1, $zero, 0x2E4
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    // 0x16bb28: 0x108300e7  beq         $a0, $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x16BB28u;
    {
        const bool branch_taken_0x16bb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB28u;
            // 0x16bb2c: 0x2403026c  addiu       $v1, $zero, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb28) {
            ctx->pc = 0x16BEC8u;
            goto label_16bec8;
        }
    }
    ctx->pc = 0x16BB30u;
    // 0x16bb30: 0x108300df  beq         $a0, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x16BB30u;
    {
        const bool branch_taken_0x16bb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb30) {
            ctx->pc = 0x16BEB0u;
            goto label_16beb0;
        }
    }
    ctx->pc = 0x16BB38u;
    // 0x16bb38: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x16bb3c: 0x108300d6  beq         $a0, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x16BB3Cu;
    {
        const bool branch_taken_0x16bb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB3Cu;
            // 0x16bb40: 0x2403038e  addiu       $v1, $zero, 0x38E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb3c) {
            ctx->pc = 0x16BE98u;
            goto label_16be98;
        }
    }
    ctx->pc = 0x16BB44u;
    // 0x16bb44: 0x108300ce  beq         $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x16BB44u;
    {
        const bool branch_taken_0x16bb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb44) {
            ctx->pc = 0x16BE80u;
            goto label_16be80;
        }
    }
    ctx->pc = 0x16BB4Cu;
    // 0x16bb4c: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x16bb50: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x16BB50u;
    {
        const bool branch_taken_0x16bb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB50u;
            // 0x16bb54: 0x2403032a  addiu       $v1, $zero, 0x32A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb50) {
            ctx->pc = 0x16BE68u;
            goto label_16be68;
        }
    }
    ctx->pc = 0x16BB58u;
    // 0x16bb58: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x16BB58u;
    {
        const bool branch_taken_0x16bb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb58) {
            ctx->pc = 0x16BE50u;
            goto label_16be50;
        }
    }
    ctx->pc = 0x16BB60u;
    // 0x16bb60: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x16bb64: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x16BB64u;
    {
        const bool branch_taken_0x16bb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB64u;
            // 0x16bb68: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb64) {
            ctx->pc = 0x16BE38u;
            goto label_16be38;
        }
    }
    ctx->pc = 0x16BB6Cu;
    // 0x16bb6c: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x16BB6Cu;
    {
        const bool branch_taken_0x16bb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb6c) {
            ctx->pc = 0x16BE20u;
            goto label_16be20;
        }
    }
    ctx->pc = 0x16BB74u;
    // 0x16bb74: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x16bb78: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x16BB78u;
    {
        const bool branch_taken_0x16bb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB78u;
            // 0x16bb7c: 0x24030299  addiu       $v1, $zero, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb78) {
            ctx->pc = 0x16BE08u;
            goto label_16be08;
        }
    }
    ctx->pc = 0x16BB80u;
    // 0x16bb80: 0x1083009b  beq         $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x16BB80u;
    {
        const bool branch_taken_0x16bb80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb80) {
            ctx->pc = 0x16BDF0u;
            goto label_16bdf0;
        }
    }
    ctx->pc = 0x16BB88u;
    // 0x16bb88: 0x2403028a  addiu       $v1, $zero, 0x28A
    ctx->pc = 0x16bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x16bb8c: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x16BB8Cu;
    {
        const bool branch_taken_0x16bb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB8Cu;
            // 0x16bb90: 0x24030244  addiu       $v1, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb8c) {
            ctx->pc = 0x16BDD8u;
            goto label_16bdd8;
        }
    }
    ctx->pc = 0x16BB94u;
    // 0x16bb94: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x16BB94u;
    {
        const bool branch_taken_0x16bb94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb94) {
            ctx->pc = 0x16BDC0u;
            goto label_16bdc0;
        }
    }
    ctx->pc = 0x16BB9Cu;
    // 0x16bb9c: 0x24030235  addiu       $v1, $zero, 0x235
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 565));
    // 0x16bba0: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x16BBA0u;
    {
        const bool branch_taken_0x16bba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBA0u;
            // 0x16bba4: 0x24030226  addiu       $v1, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bba0) {
            ctx->pc = 0x16BDA8u;
            goto label_16bda8;
        }
    }
    ctx->pc = 0x16BBA8u;
    // 0x16bba8: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x16BBA8u;
    {
        const bool branch_taken_0x16bba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bba8) {
            ctx->pc = 0x16BD90u;
            goto label_16bd90;
        }
    }
    ctx->pc = 0x16BBB0u;
    // 0x16bbb0: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x16bbb4: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x16BBB4u;
    {
        const bool branch_taken_0x16bbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBB4u;
            // 0x16bbb8: 0x240301d1  addiu       $v1, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbb4) {
            ctx->pc = 0x16BD78u;
            goto label_16bd78;
        }
    }
    ctx->pc = 0x16BBBCu;
    // 0x16bbbc: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x16BBBCu;
    {
        const bool branch_taken_0x16bbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bbbc) {
            ctx->pc = 0x16BD60u;
            goto label_16bd60;
        }
    }
    ctx->pc = 0x16BBC4u;
    // 0x16bbc4: 0x240301c2  addiu       $v1, $zero, 0x1C2
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x16bbc8: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x16BBC8u;
    {
        const bool branch_taken_0x16bbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBC8u;
            // 0x16bbcc: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbc8) {
            ctx->pc = 0x16BD48u;
            goto label_16bd48;
        }
    }
    ctx->pc = 0x16BBD0u;
    // 0x16bbd0: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x16BBD0u;
    {
        const bool branch_taken_0x16bbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bbd0) {
            ctx->pc = 0x16BD10u;
            goto label_16bd10;
        }
    }
    ctx->pc = 0x16BBD8u;
    // 0x16bbd8: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x16bbdc: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x16BBDCu;
    {
        const bool branch_taken_0x16bbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBDCu;
            // 0x16bbe0: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbdc) {
            ctx->pc = 0x16BCD8u;
            goto label_16bcd8;
        }
    }
    ctx->pc = 0x16BBE4u;
    // 0x16bbe4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16BBE4u;
    {
        const bool branch_taken_0x16bbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bbe4) {
            ctx->pc = 0x16BCA0u;
            goto label_16bca0;
        }
    }
    ctx->pc = 0x16BBECu;
    // 0x16bbec: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x16bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x16bbf0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16BBF0u;
    {
        const bool branch_taken_0x16bbf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBF0u;
            // 0x16bbf4: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbf0) {
            ctx->pc = 0x16BC68u;
            goto label_16bc68;
        }
    }
    ctx->pc = 0x16BBF8u;
    // 0x16bbf8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16BBF8u;
    {
        const bool branch_taken_0x16bbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bbf8) {
            ctx->pc = 0x16BC30u;
            goto label_16bc30;
        }
    }
    ctx->pc = 0x16BC00u;
    // 0x16bc00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bc04: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BC04u;
    {
        const bool branch_taken_0x16bc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bc04) {
            ctx->pc = 0x16BC18u;
            goto label_16bc18;
        }
    }
    ctx->pc = 0x16BC0Cu;
    // 0x16bc0c: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x16BC0Cu;
    {
        const bool branch_taken_0x16bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc0c) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BC14u;
    // 0x16bc14: 0x0  nop
    ctx->pc = 0x16bc14u;
    // NOP
label_16bc18:
    // 0x16bc18: 0xc05d004  jal         func_174010
    ctx->pc = 0x16BC18u;
    SET_GPR_U32(ctx, 31, 0x16BC20u);
    ctx->pc = 0x16BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC18u;
            // 0x16bc1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC20u; }
        if (ctx->pc != 0x16BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC20u; }
        if (ctx->pc != 0x16BC20u) { return; }
    }
    ctx->pc = 0x16BC20u;
    // 0x16bc20: 0xc056050  jal         func_158140
    ctx->pc = 0x16BC20u;
    SET_GPR_U32(ctx, 31, 0x16BC28u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC28u; }
        if (ctx->pc != 0x16BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC28u; }
        if (ctx->pc != 0x16BC28u) { return; }
    }
    ctx->pc = 0x16BC28u;
    // 0x16bc28: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x16BC28u;
    {
        const bool branch_taken_0x16bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc28) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BC30u;
label_16bc30:
    // 0x16bc30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bc34: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16bc38: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC38u;
    SET_GPR_U32(ctx, 31, 0x16BC40u);
    ctx->pc = 0x16BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC38u;
            // 0x16bc3c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC40u; }
        if (ctx->pc != 0x16BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC40u; }
        if (ctx->pc != 0x16BC40u) { return; }
    }
    ctx->pc = 0x16BC40u;
    // 0x16bc40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bc44: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16bc48: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC48u;
    SET_GPR_U32(ctx, 31, 0x16BC50u);
    ctx->pc = 0x16BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC48u;
            // 0x16bc4c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC50u; }
        if (ctx->pc != 0x16BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC50u; }
        if (ctx->pc != 0x16BC50u) { return; }
    }
    ctx->pc = 0x16BC50u;
    // 0x16bc50: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc58: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC58u;
    SET_GPR_U32(ctx, 31, 0x16BC60u);
    ctx->pc = 0x16BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC58u;
            // 0x16bc5c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC60u; }
        if (ctx->pc != 0x16BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC60u; }
        if (ctx->pc != 0x16BC60u) { return; }
    }
    ctx->pc = 0x16BC60u;
    // 0x16bc60: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x16BC60u;
    {
        const bool branch_taken_0x16bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc60) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BC68u;
label_16bc68:
    // 0x16bc68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bc6c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16bc70: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC70u;
    SET_GPR_U32(ctx, 31, 0x16BC78u);
    ctx->pc = 0x16BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC70u;
            // 0x16bc74: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC78u; }
        if (ctx->pc != 0x16BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC78u; }
        if (ctx->pc != 0x16BC78u) { return; }
    }
    ctx->pc = 0x16BC78u;
    // 0x16bc78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bc7c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16bc80: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC80u;
    SET_GPR_U32(ctx, 31, 0x16BC88u);
    ctx->pc = 0x16BC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC80u;
            // 0x16bc84: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC88u; }
        if (ctx->pc != 0x16BC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC88u; }
        if (ctx->pc != 0x16BC88u) { return; }
    }
    ctx->pc = 0x16BC88u;
    // 0x16bc88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc90: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BC90u;
    SET_GPR_U32(ctx, 31, 0x16BC98u);
    ctx->pc = 0x16BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC90u;
            // 0x16bc94: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC98u; }
        if (ctx->pc != 0x16BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC98u; }
        if (ctx->pc != 0x16BC98u) { return; }
    }
    ctx->pc = 0x16BC98u;
    // 0x16bc98: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x16BC98u;
    {
        const bool branch_taken_0x16bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc98) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BCA0u;
label_16bca0:
    // 0x16bca0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bca4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16bca8: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BCA8u;
    SET_GPR_U32(ctx, 31, 0x16BCB0u);
    ctx->pc = 0x16BCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCA8u;
            // 0x16bcac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB0u; }
        if (ctx->pc != 0x16BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB0u; }
        if (ctx->pc != 0x16BCB0u) { return; }
    }
    ctx->pc = 0x16BCB0u;
    // 0x16bcb0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bcb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bcb8: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BCB8u;
    SET_GPR_U32(ctx, 31, 0x16BCC0u);
    ctx->pc = 0x16BCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCB8u;
            // 0x16bcbc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC0u; }
        if (ctx->pc != 0x16BCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC0u; }
        if (ctx->pc != 0x16BCC0u) { return; }
    }
    ctx->pc = 0x16BCC0u;
    // 0x16bcc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bcc4: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16bcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16bcc8: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BCC8u;
    SET_GPR_U32(ctx, 31, 0x16BCD0u);
    ctx->pc = 0x16BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCC8u;
            // 0x16bccc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCD0u; }
        if (ctx->pc != 0x16BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCD0u; }
        if (ctx->pc != 0x16BCD0u) { return; }
    }
    ctx->pc = 0x16BCD0u;
    // 0x16bcd0: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x16BCD0u;
    {
        const bool branch_taken_0x16bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bcd0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BCD8u;
label_16bcd8:
    // 0x16bcd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bcdc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16bce0: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BCE0u;
    SET_GPR_U32(ctx, 31, 0x16BCE8u);
    ctx->pc = 0x16BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCE0u;
            // 0x16bce4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCE8u; }
        if (ctx->pc != 0x16BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCE8u; }
        if (ctx->pc != 0x16BCE8u) { return; }
    }
    ctx->pc = 0x16BCE8u;
    // 0x16bce8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bcec: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16bcf0: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BCF0u;
    SET_GPR_U32(ctx, 31, 0x16BCF8u);
    ctx->pc = 0x16BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCF0u;
            // 0x16bcf4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCF8u; }
        if (ctx->pc != 0x16BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCF8u; }
        if (ctx->pc != 0x16BCF8u) { return; }
    }
    ctx->pc = 0x16BCF8u;
    // 0x16bcf8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bcfc: 0x2406ffd3  addiu       $a2, $zero, -0x2D
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16bd00: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD00u;
    SET_GPR_U32(ctx, 31, 0x16BD08u);
    ctx->pc = 0x16BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD00u;
            // 0x16bd04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD08u; }
        if (ctx->pc != 0x16BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD08u; }
        if (ctx->pc != 0x16BD08u) { return; }
    }
    ctx->pc = 0x16BD08u;
    // 0x16bd08: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x16BD08u;
    {
        const bool branch_taken_0x16bd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd08) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BD10u;
label_16bd10:
    // 0x16bd10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bd14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd18: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD18u;
    SET_GPR_U32(ctx, 31, 0x16BD20u);
    ctx->pc = 0x16BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD18u;
            // 0x16bd1c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD20u; }
        if (ctx->pc != 0x16BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD20u; }
        if (ctx->pc != 0x16BD20u) { return; }
    }
    ctx->pc = 0x16BD20u;
    // 0x16bd20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bd24: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16bd28: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD28u;
    SET_GPR_U32(ctx, 31, 0x16BD30u);
    ctx->pc = 0x16BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD28u;
            // 0x16bd2c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD30u; }
        if (ctx->pc != 0x16BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD30u; }
        if (ctx->pc != 0x16BD30u) { return; }
    }
    ctx->pc = 0x16BD30u;
    // 0x16bd30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bd34: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16bd38: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD38u;
    SET_GPR_U32(ctx, 31, 0x16BD40u);
    ctx->pc = 0x16BD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD38u;
            // 0x16bd3c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD40u; }
        if (ctx->pc != 0x16BD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD40u; }
        if (ctx->pc != 0x16BD40u) { return; }
    }
    ctx->pc = 0x16BD40u;
    // 0x16bd40: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x16BD40u;
    {
        const bool branch_taken_0x16bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd40) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BD48u;
label_16bd48:
    // 0x16bd48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bd50: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD50u;
    SET_GPR_U32(ctx, 31, 0x16BD58u);
    ctx->pc = 0x16BD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD50u;
            // 0x16bd54: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD58u; }
        if (ctx->pc != 0x16BD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD58u; }
        if (ctx->pc != 0x16BD58u) { return; }
    }
    ctx->pc = 0x16BD58u;
    // 0x16bd58: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x16BD58u;
    {
        const bool branch_taken_0x16bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd58) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BD60u;
label_16bd60:
    // 0x16bd60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bd64: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bd68: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD68u;
    SET_GPR_U32(ctx, 31, 0x16BD70u);
    ctx->pc = 0x16BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD68u;
            // 0x16bd6c: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD70u; }
        if (ctx->pc != 0x16BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD70u; }
        if (ctx->pc != 0x16BD70u) { return; }
    }
    ctx->pc = 0x16BD70u;
    // 0x16bd70: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x16BD70u;
    {
        const bool branch_taken_0x16bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd70) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BD78u;
label_16bd78:
    // 0x16bd78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd7c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bd80: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD80u;
    SET_GPR_U32(ctx, 31, 0x16BD88u);
    ctx->pc = 0x16BD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD80u;
            // 0x16bd84: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD88u; }
        if (ctx->pc != 0x16BD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD88u; }
        if (ctx->pc != 0x16BD88u) { return; }
    }
    ctx->pc = 0x16BD88u;
    // 0x16bd88: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x16BD88u;
    {
        const bool branch_taken_0x16bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd88) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BD90u;
label_16bd90:
    // 0x16bd90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bd94: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bd98: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BD98u;
    SET_GPR_U32(ctx, 31, 0x16BDA0u);
    ctx->pc = 0x16BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD98u;
            // 0x16bd9c: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDA0u; }
        if (ctx->pc != 0x16BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDA0u; }
        if (ctx->pc != 0x16BDA0u) { return; }
    }
    ctx->pc = 0x16BDA0u;
    // 0x16bda0: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x16BDA0u;
    {
        const bool branch_taken_0x16bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bda0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BDA8u;
label_16bda8:
    // 0x16bda8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bdb0: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BDB0u;
    SET_GPR_U32(ctx, 31, 0x16BDB8u);
    ctx->pc = 0x16BDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDB0u;
            // 0x16bdb4: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDB8u; }
        if (ctx->pc != 0x16BDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDB8u; }
        if (ctx->pc != 0x16BDB8u) { return; }
    }
    ctx->pc = 0x16BDB8u;
    // 0x16bdb8: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x16BDB8u;
    {
        const bool branch_taken_0x16bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdb8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BDC0u;
label_16bdc0:
    // 0x16bdc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bdc4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bdc8: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BDC8u;
    SET_GPR_U32(ctx, 31, 0x16BDD0u);
    ctx->pc = 0x16BDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDC8u;
            // 0x16bdcc: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDD0u; }
        if (ctx->pc != 0x16BDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDD0u; }
        if (ctx->pc != 0x16BDD0u) { return; }
    }
    ctx->pc = 0x16BDD0u;
    // 0x16bdd0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x16BDD0u;
    {
        const bool branch_taken_0x16bdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdd0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BDD8u;
label_16bdd8:
    // 0x16bdd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bddc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bde0: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BDE0u;
    SET_GPR_U32(ctx, 31, 0x16BDE8u);
    ctx->pc = 0x16BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDE0u;
            // 0x16bde4: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDE8u; }
        if (ctx->pc != 0x16BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDE8u; }
        if (ctx->pc != 0x16BDE8u) { return; }
    }
    ctx->pc = 0x16BDE8u;
    // 0x16bde8: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x16BDE8u;
    {
        const bool branch_taken_0x16bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bde8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BDF0u;
label_16bdf0:
    // 0x16bdf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bdf4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bdf8: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BDF8u;
    SET_GPR_U32(ctx, 31, 0x16BE00u);
    ctx->pc = 0x16BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDF8u;
            // 0x16bdfc: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE00u; }
        if (ctx->pc != 0x16BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE00u; }
        if (ctx->pc != 0x16BE00u) { return; }
    }
    ctx->pc = 0x16BE00u;
    // 0x16be00: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x16BE00u;
    {
        const bool branch_taken_0x16be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be00) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE08u;
label_16be08:
    // 0x16be08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be0c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16be10: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE10u;
    SET_GPR_U32(ctx, 31, 0x16BE18u);
    ctx->pc = 0x16BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE10u;
            // 0x16be14: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE18u; }
        if (ctx->pc != 0x16BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE18u; }
        if (ctx->pc != 0x16BE18u) { return; }
    }
    ctx->pc = 0x16BE18u;
    // 0x16be18: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x16BE18u;
    {
        const bool branch_taken_0x16be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be18) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE20u;
label_16be20:
    // 0x16be20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16be24: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16be28: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE28u;
    SET_GPR_U32(ctx, 31, 0x16BE30u);
    ctx->pc = 0x16BE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE28u;
            // 0x16be2c: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE30u; }
        if (ctx->pc != 0x16BE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE30u; }
        if (ctx->pc != 0x16BE30u) { return; }
    }
    ctx->pc = 0x16BE30u;
    // 0x16be30: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x16BE30u;
    {
        const bool branch_taken_0x16be30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be30) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE38u;
label_16be38:
    // 0x16be38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16be3c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16be40: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE40u;
    SET_GPR_U32(ctx, 31, 0x16BE48u);
    ctx->pc = 0x16BE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE40u;
            // 0x16be44: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE48u; }
        if (ctx->pc != 0x16BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE48u; }
        if (ctx->pc != 0x16BE48u) { return; }
    }
    ctx->pc = 0x16BE48u;
    // 0x16be48: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x16BE48u;
    {
        const bool branch_taken_0x16be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be48) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE50u;
label_16be50:
    // 0x16be50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16be54: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16be58: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE58u;
    SET_GPR_U32(ctx, 31, 0x16BE60u);
    ctx->pc = 0x16BE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE58u;
            // 0x16be5c: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE60u; }
        if (ctx->pc != 0x16BE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE60u; }
        if (ctx->pc != 0x16BE60u) { return; }
    }
    ctx->pc = 0x16BE60u;
    // 0x16be60: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x16BE60u;
    {
        const bool branch_taken_0x16be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be60) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE68u;
label_16be68:
    // 0x16be68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16be6c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16be70: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE70u;
    SET_GPR_U32(ctx, 31, 0x16BE78u);
    ctx->pc = 0x16BE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE70u;
            // 0x16be74: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE78u; }
        if (ctx->pc != 0x16BE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE78u; }
        if (ctx->pc != 0x16BE78u) { return; }
    }
    ctx->pc = 0x16BE78u;
    // 0x16be78: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x16BE78u;
    {
        const bool branch_taken_0x16be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be78) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE80u;
label_16be80:
    // 0x16be80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16be84: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16be88: 0xc069610  jal         func_1A5840
    ctx->pc = 0x16BE88u;
    SET_GPR_U32(ctx, 31, 0x16BE90u);
    ctx->pc = 0x16BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE88u;
            // 0x16be8c: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE90u; }
        if (ctx->pc != 0x16BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_03_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE90u; }
        if (ctx->pc != 0x16BE90u) { return; }
    }
    ctx->pc = 0x16BE90u;
    // 0x16be90: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x16BE90u;
    {
        const bool branch_taken_0x16be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be90) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BE98u;
label_16be98:
    // 0x16be98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16bea0: 0xc069a04  jal         func_1A6810
    ctx->pc = 0x16BEA0u;
    SET_GPR_U32(ctx, 31, 0x16BEA8u);
    ctx->pc = 0x16BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEA0u;
            // 0x16bea4: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6810u;
    if (runtime->hasFunction(0x1A6810u)) {
        auto targetFn = runtime->lookupFunction(0x1A6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEA8u; }
        if (ctx->pc != 0x16BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_0x1a6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEA8u; }
        if (ctx->pc != 0x16BEA8u) { return; }
    }
    ctx->pc = 0x16BEA8u;
    // 0x16bea8: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x16BEA8u;
    {
        const bool branch_taken_0x16bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bea8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BEB0u;
label_16beb0:
    // 0x16beb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16beb4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16beb8: 0xc069a04  jal         func_1A6810
    ctx->pc = 0x16BEB8u;
    SET_GPR_U32(ctx, 31, 0x16BEC0u);
    ctx->pc = 0x16BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEB8u;
            // 0x16bebc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6810u;
    if (runtime->hasFunction(0x1A6810u)) {
        auto targetFn = runtime->lookupFunction(0x1A6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEC0u; }
        if (ctx->pc != 0x16BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_0x1a6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEC0u; }
        if (ctx->pc != 0x16BEC0u) { return; }
    }
    ctx->pc = 0x16BEC0u;
    // 0x16bec0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x16BEC0u;
    {
        const bool branch_taken_0x16bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bec0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BEC8u;
label_16bec8:
    // 0x16bec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16becc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16beccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16bed0: 0xc069a04  jal         func_1A6810
    ctx->pc = 0x16BED0u;
    SET_GPR_U32(ctx, 31, 0x16BED8u);
    ctx->pc = 0x16BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BED0u;
            // 0x16bed4: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6810u;
    if (runtime->hasFunction(0x1A6810u)) {
        auto targetFn = runtime->lookupFunction(0x1A6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BED8u; }
        if (ctx->pc != 0x16BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_0x1a6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BED8u; }
        if (ctx->pc != 0x16BED8u) { return; }
    }
    ctx->pc = 0x16BED8u;
    // 0x16bed8: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x16BED8u;
    {
        const bool branch_taken_0x16bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bed8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BEE0u;
label_16bee0:
    // 0x16bee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bee4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16bee8: 0xc069a04  jal         func_1A6810
    ctx->pc = 0x16BEE8u;
    SET_GPR_U32(ctx, 31, 0x16BEF0u);
    ctx->pc = 0x16BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BEE8u;
            // 0x16beec: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6810u;
    if (runtime->hasFunction(0x1A6810u)) {
        auto targetFn = runtime->lookupFunction(0x1A6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF0u; }
        if (ctx->pc != 0x16BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_0x1a6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF0u; }
        if (ctx->pc != 0x16BEF0u) { return; }
    }
    ctx->pc = 0x16BEF0u;
    // 0x16bef0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x16BEF0u;
    {
        const bool branch_taken_0x16bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bef0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BEF8u;
label_16bef8:
    // 0x16bef8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16befc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16bf00: 0xc069a04  jal         func_1A6810
    ctx->pc = 0x16BF00u;
    SET_GPR_U32(ctx, 31, 0x16BF08u);
    ctx->pc = 0x16BF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF00u;
            // 0x16bf04: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6810u;
    if (runtime->hasFunction(0x1A6810u)) {
        auto targetFn = runtime->lookupFunction(0x1A6810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF08u; }
        if (ctx->pc != 0x16BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_04_0x1a6810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF08u; }
        if (ctx->pc != 0x16BF08u) { return; }
    }
    ctx->pc = 0x16BF08u;
    // 0x16bf08: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x16BF08u;
    {
        const bool branch_taken_0x16bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf08) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BF10u;
label_16bf10:
    // 0x16bf10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf18: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16BF18u;
    SET_GPR_U32(ctx, 31, 0x16BF20u);
    ctx->pc = 0x16BF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF18u;
            // 0x16bf1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF20u; }
        if (ctx->pc != 0x16BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF20u; }
        if (ctx->pc != 0x16BF20u) { return; }
    }
    ctx->pc = 0x16BF20u;
    // 0x16bf20: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x16BF20u;
    {
        const bool branch_taken_0x16bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf20) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BF28u;
label_16bf28:
    // 0x16bf28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bf2c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16bf30: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF30u;
    SET_GPR_U32(ctx, 31, 0x16BF38u);
    ctx->pc = 0x16BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF30u;
            // 0x16bf34: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF38u; }
        if (ctx->pc != 0x16BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF38u; }
        if (ctx->pc != 0x16BF38u) { return; }
    }
    ctx->pc = 0x16BF38u;
    // 0x16bf38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bf3c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16bf40: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF40u;
    SET_GPR_U32(ctx, 31, 0x16BF48u);
    ctx->pc = 0x16BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF40u;
            // 0x16bf44: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF48u; }
        if (ctx->pc != 0x16BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF48u; }
        if (ctx->pc != 0x16BF48u) { return; }
    }
    ctx->pc = 0x16BF48u;
    // 0x16bf48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bf4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bf50: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF50u;
    SET_GPR_U32(ctx, 31, 0x16BF58u);
    ctx->pc = 0x16BF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF50u;
            // 0x16bf54: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF58u; }
        if (ctx->pc != 0x16BF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF58u; }
        if (ctx->pc != 0x16BF58u) { return; }
    }
    ctx->pc = 0x16BF58u;
    // 0x16bf58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bf5c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bf60: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF60u;
    SET_GPR_U32(ctx, 31, 0x16BF68u);
    ctx->pc = 0x16BF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF60u;
            // 0x16bf64: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF68u; }
        if (ctx->pc != 0x16BF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF68u; }
        if (ctx->pc != 0x16BF68u) { return; }
    }
    ctx->pc = 0x16BF68u;
    // 0x16bf68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bf6c: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16bf70: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF70u;
    SET_GPR_U32(ctx, 31, 0x16BF78u);
    ctx->pc = 0x16BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF70u;
            // 0x16bf74: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF78u; }
        if (ctx->pc != 0x16BF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF78u; }
        if (ctx->pc != 0x16BF78u) { return; }
    }
    ctx->pc = 0x16BF78u;
    // 0x16bf78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bf7c: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16bf80: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF80u;
    SET_GPR_U32(ctx, 31, 0x16BF88u);
    ctx->pc = 0x16BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF80u;
            // 0x16bf84: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF88u; }
        if (ctx->pc != 0x16BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF88u; }
        if (ctx->pc != 0x16BF88u) { return; }
    }
    ctx->pc = 0x16BF88u;
    // 0x16bf88: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x16BF88u;
    {
        const bool branch_taken_0x16bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf88) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BF90u;
label_16bf90:
    // 0x16bf90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bf94: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16bf98: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BF98u;
    SET_GPR_U32(ctx, 31, 0x16BFA0u);
    ctx->pc = 0x16BF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BF98u;
            // 0x16bf9c: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFA0u; }
        if (ctx->pc != 0x16BFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFA0u; }
        if (ctx->pc != 0x16BFA0u) { return; }
    }
    ctx->pc = 0x16BFA0u;
    // 0x16bfa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bfa4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16bfa8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BFA8u;
    SET_GPR_U32(ctx, 31, 0x16BFB0u);
    ctx->pc = 0x16BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFA8u;
            // 0x16bfac: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFB0u; }
        if (ctx->pc != 0x16BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFB0u; }
        if (ctx->pc != 0x16BFB0u) { return; }
    }
    ctx->pc = 0x16BFB0u;
    // 0x16bfb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bfb4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bfb8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BFB8u;
    SET_GPR_U32(ctx, 31, 0x16BFC0u);
    ctx->pc = 0x16BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFB8u;
            // 0x16bfbc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFC0u; }
        if (ctx->pc != 0x16BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFC0u; }
        if (ctx->pc != 0x16BFC0u) { return; }
    }
    ctx->pc = 0x16BFC0u;
    // 0x16bfc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bfc4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16bfc8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BFC8u;
    SET_GPR_U32(ctx, 31, 0x16BFD0u);
    ctx->pc = 0x16BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFC8u;
            // 0x16bfcc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFD0u; }
        if (ctx->pc != 0x16BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFD0u; }
        if (ctx->pc != 0x16BFD0u) { return; }
    }
    ctx->pc = 0x16BFD0u;
    // 0x16bfd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bfd4: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16bfd8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BFD8u;
    SET_GPR_U32(ctx, 31, 0x16BFE0u);
    ctx->pc = 0x16BFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFD8u;
            // 0x16bfdc: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFE0u; }
        if (ctx->pc != 0x16BFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFE0u; }
        if (ctx->pc != 0x16BFE0u) { return; }
    }
    ctx->pc = 0x16BFE0u;
    // 0x16bfe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bfe4: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16bfe8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16BFE8u;
    SET_GPR_U32(ctx, 31, 0x16BFF0u);
    ctx->pc = 0x16BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BFE8u;
            // 0x16bfec: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFF0u; }
        if (ctx->pc != 0x16BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFF0u; }
        if (ctx->pc != 0x16BFF0u) { return; }
    }
    ctx->pc = 0x16BFF0u;
    // 0x16bff0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x16BFF0u;
    {
        const bool branch_taken_0x16bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bff0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16BFF8u;
label_16bff8:
    // 0x16bff8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bffc: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16c000: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C000u;
    SET_GPR_U32(ctx, 31, 0x16C008u);
    ctx->pc = 0x16C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C000u;
            // 0x16c004: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C008u; }
        if (ctx->pc != 0x16C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C008u; }
        if (ctx->pc != 0x16C008u) { return; }
    }
    ctx->pc = 0x16C008u;
    // 0x16c008: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c00c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16c010: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C010u;
    SET_GPR_U32(ctx, 31, 0x16C018u);
    ctx->pc = 0x16C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C010u;
            // 0x16c014: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C018u; }
        if (ctx->pc != 0x16C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C018u; }
        if (ctx->pc != 0x16C018u) { return; }
    }
    ctx->pc = 0x16C018u;
    // 0x16c018: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c01c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c020: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C020u;
    SET_GPR_U32(ctx, 31, 0x16C028u);
    ctx->pc = 0x16C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C020u;
            // 0x16c024: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C028u; }
        if (ctx->pc != 0x16C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C028u; }
        if (ctx->pc != 0x16C028u) { return; }
    }
    ctx->pc = 0x16C028u;
    // 0x16c028: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c02c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c030: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C030u;
    SET_GPR_U32(ctx, 31, 0x16C038u);
    ctx->pc = 0x16C034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C030u;
            // 0x16c034: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C038u; }
        if (ctx->pc != 0x16C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C038u; }
        if (ctx->pc != 0x16C038u) { return; }
    }
    ctx->pc = 0x16C038u;
    // 0x16c038: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c03c: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16c040: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C040u;
    SET_GPR_U32(ctx, 31, 0x16C048u);
    ctx->pc = 0x16C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C040u;
            // 0x16c044: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C048u; }
        if (ctx->pc != 0x16C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C048u; }
        if (ctx->pc != 0x16C048u) { return; }
    }
    ctx->pc = 0x16C048u;
    // 0x16c048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c04c: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16c050: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C050u;
    SET_GPR_U32(ctx, 31, 0x16C058u);
    ctx->pc = 0x16C054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C050u;
            // 0x16c054: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C058u; }
        if (ctx->pc != 0x16C058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C058u; }
        if (ctx->pc != 0x16C058u) { return; }
    }
    ctx->pc = 0x16C058u;
    // 0x16c058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c05c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16c060: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C060u;
    SET_GPR_U32(ctx, 31, 0x16C068u);
    ctx->pc = 0x16C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C060u;
            // 0x16c064: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C068u; }
        if (ctx->pc != 0x16C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C068u; }
        if (ctx->pc != 0x16C068u) { return; }
    }
    ctx->pc = 0x16C068u;
    // 0x16c068: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c070: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C070u;
    SET_GPR_U32(ctx, 31, 0x16C078u);
    ctx->pc = 0x16C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C070u;
            // 0x16c074: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C078u; }
        if (ctx->pc != 0x16C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C078u; }
        if (ctx->pc != 0x16C078u) { return; }
    }
    ctx->pc = 0x16C078u;
    // 0x16c078: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c07c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16c080: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C080u;
    SET_GPR_U32(ctx, 31, 0x16C088u);
    ctx->pc = 0x16C084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C080u;
            // 0x16c084: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C088u; }
        if (ctx->pc != 0x16C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C088u; }
        if (ctx->pc != 0x16C088u) { return; }
    }
    ctx->pc = 0x16C088u;
    // 0x16c088: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x16C088u;
    {
        const bool branch_taken_0x16c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c088) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C090u;
label_16c090:
    // 0x16c090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c094: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16c098: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C098u;
    SET_GPR_U32(ctx, 31, 0x16C0A0u);
    ctx->pc = 0x16C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C098u;
            // 0x16c09c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A0u; }
        if (ctx->pc != 0x16C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A0u; }
        if (ctx->pc != 0x16C0A0u) { return; }
    }
    ctx->pc = 0x16C0A0u;
    // 0x16c0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0a4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16c0a8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C0A8u;
    SET_GPR_U32(ctx, 31, 0x16C0B0u);
    ctx->pc = 0x16C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0A8u;
            // 0x16c0ac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0B0u; }
        if (ctx->pc != 0x16C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0B0u; }
        if (ctx->pc != 0x16C0B0u) { return; }
    }
    ctx->pc = 0x16C0B0u;
    // 0x16c0b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0b4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16c0b8: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C0B8u;
    SET_GPR_U32(ctx, 31, 0x16C0C0u);
    ctx->pc = 0x16C0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0B8u;
            // 0x16c0bc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0C0u; }
        if (ctx->pc != 0x16C0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0C0u; }
        if (ctx->pc != 0x16C0C0u) { return; }
    }
    ctx->pc = 0x16C0C0u;
    // 0x16c0c0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x16C0C0u;
    {
        const bool branch_taken_0x16c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0c0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C0C8u;
label_16c0c8:
    // 0x16c0c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0cc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16c0d0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C0D0u;
    SET_GPR_U32(ctx, 31, 0x16C0D8u);
    ctx->pc = 0x16C0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0D0u;
            // 0x16c0d4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0D8u; }
        if (ctx->pc != 0x16C0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0D8u; }
        if (ctx->pc != 0x16C0D8u) { return; }
    }
    ctx->pc = 0x16C0D8u;
    // 0x16c0d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16c0e0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C0E0u;
    SET_GPR_U32(ctx, 31, 0x16C0E8u);
    ctx->pc = 0x16C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0E0u;
            // 0x16c0e4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0E8u; }
        if (ctx->pc != 0x16C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0E8u; }
        if (ctx->pc != 0x16C0E8u) { return; }
    }
    ctx->pc = 0x16C0E8u;
    // 0x16c0e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16c0f0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C0F0u;
    SET_GPR_U32(ctx, 31, 0x16C0F8u);
    ctx->pc = 0x16C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0F0u;
            // 0x16c0f4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0F8u; }
        if (ctx->pc != 0x16C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0F8u; }
        if (ctx->pc != 0x16C0F8u) { return; }
    }
    ctx->pc = 0x16C0F8u;
    // 0x16c0f8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x16C0F8u;
    {
        const bool branch_taken_0x16c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0f8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C100u;
label_16c100:
    // 0x16c100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c104: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16c108: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C108u;
    SET_GPR_U32(ctx, 31, 0x16C110u);
    ctx->pc = 0x16C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C108u;
            // 0x16c10c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C110u; }
        if (ctx->pc != 0x16C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C110u; }
        if (ctx->pc != 0x16C110u) { return; }
    }
    ctx->pc = 0x16C110u;
    // 0x16c110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c114: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16c118: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C118u;
    SET_GPR_U32(ctx, 31, 0x16C120u);
    ctx->pc = 0x16C11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C118u;
            // 0x16c11c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C120u; }
        if (ctx->pc != 0x16C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C120u; }
        if (ctx->pc != 0x16C120u) { return; }
    }
    ctx->pc = 0x16C120u;
    // 0x16c120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c124: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16c128: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C128u;
    SET_GPR_U32(ctx, 31, 0x16C130u);
    ctx->pc = 0x16C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C128u;
            // 0x16c12c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C130u; }
        if (ctx->pc != 0x16C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C130u; }
        if (ctx->pc != 0x16C130u) { return; }
    }
    ctx->pc = 0x16C130u;
    // 0x16c130: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x16C130u;
    {
        const bool branch_taken_0x16c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c130) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C138u;
label_16c138:
    // 0x16c138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c13c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16c140: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C140u;
    SET_GPR_U32(ctx, 31, 0x16C148u);
    ctx->pc = 0x16C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C140u;
            // 0x16c144: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C148u; }
        if (ctx->pc != 0x16C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C148u; }
        if (ctx->pc != 0x16C148u) { return; }
    }
    ctx->pc = 0x16C148u;
    // 0x16c148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c14c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16c150: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C150u;
    SET_GPR_U32(ctx, 31, 0x16C158u);
    ctx->pc = 0x16C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C150u;
            // 0x16c154: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C158u; }
        if (ctx->pc != 0x16C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C158u; }
        if (ctx->pc != 0x16C158u) { return; }
    }
    ctx->pc = 0x16C158u;
    // 0x16c158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c15c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16c15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16c160: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C160u;
    SET_GPR_U32(ctx, 31, 0x16C168u);
    ctx->pc = 0x16C164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C160u;
            // 0x16c164: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C168u; }
        if (ctx->pc != 0x16C168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C168u; }
        if (ctx->pc != 0x16C168u) { return; }
    }
    ctx->pc = 0x16C168u;
    // 0x16c168: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x16C168u;
    {
        const bool branch_taken_0x16c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c168) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C170u;
label_16c170:
    // 0x16c170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c174: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16c178: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C178u;
    SET_GPR_U32(ctx, 31, 0x16C180u);
    ctx->pc = 0x16C17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C178u;
            // 0x16c17c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C180u; }
        if (ctx->pc != 0x16C180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C180u; }
        if (ctx->pc != 0x16C180u) { return; }
    }
    ctx->pc = 0x16C180u;
    // 0x16c180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c184: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16c188: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C188u;
    SET_GPR_U32(ctx, 31, 0x16C190u);
    ctx->pc = 0x16C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C188u;
            // 0x16c18c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C190u; }
        if (ctx->pc != 0x16C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C190u; }
        if (ctx->pc != 0x16C190u) { return; }
    }
    ctx->pc = 0x16C190u;
    // 0x16c190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c194: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16c198: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C198u;
    SET_GPR_U32(ctx, 31, 0x16C1A0u);
    ctx->pc = 0x16C19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C198u;
            // 0x16c19c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1A0u; }
        if (ctx->pc != 0x16C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1A0u; }
        if (ctx->pc != 0x16C1A0u) { return; }
    }
    ctx->pc = 0x16C1A0u;
    // 0x16c1a0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16C1A0u;
    {
        const bool branch_taken_0x16c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C1A8u;
label_16c1a8:
    // 0x16c1a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1b0: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C1B0u;
    SET_GPR_U32(ctx, 31, 0x16C1B8u);
    ctx->pc = 0x16C1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1B0u;
            // 0x16c1b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1B8u; }
        if (ctx->pc != 0x16C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1B8u; }
        if (ctx->pc != 0x16C1B8u) { return; }
    }
    ctx->pc = 0x16C1B8u;
    // 0x16c1b8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16C1B8u;
    {
        const bool branch_taken_0x16c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1b8) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C1C0u;
label_16c1c0:
    // 0x16c1c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1c4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16c1c8: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C1C8u;
    SET_GPR_U32(ctx, 31, 0x16C1D0u);
    ctx->pc = 0x16C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1C8u;
            // 0x16c1cc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1D0u; }
        if (ctx->pc != 0x16C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1D0u; }
        if (ctx->pc != 0x16C1D0u) { return; }
    }
    ctx->pc = 0x16C1D0u;
    // 0x16c1d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16c1d8: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C1D8u;
    SET_GPR_U32(ctx, 31, 0x16C1E0u);
    ctx->pc = 0x16C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1D8u;
            // 0x16c1dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1E0u; }
        if (ctx->pc != 0x16C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1E0u; }
        if (ctx->pc != 0x16C1E0u) { return; }
    }
    ctx->pc = 0x16C1E0u;
    // 0x16c1e0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x16C1E0u;
    {
        const bool branch_taken_0x16c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1e0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C1E8u;
label_16c1e8:
    // 0x16c1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1ec: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16c1f0: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C1F0u;
    SET_GPR_U32(ctx, 31, 0x16C1F8u);
    ctx->pc = 0x16C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C1F0u;
            // 0x16c1f4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1F8u; }
        if (ctx->pc != 0x16C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C1F8u; }
        if (ctx->pc != 0x16C1F8u) { return; }
    }
    ctx->pc = 0x16C1F8u;
    // 0x16c1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1fc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16c200: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C200u;
    SET_GPR_U32(ctx, 31, 0x16C208u);
    ctx->pc = 0x16C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C200u;
            // 0x16c204: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C208u; }
        if (ctx->pc != 0x16C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C208u; }
        if (ctx->pc != 0x16C208u) { return; }
    }
    ctx->pc = 0x16C208u;
    // 0x16c208: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x16C208u;
    {
        const bool branch_taken_0x16c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c208) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C210u;
label_16c210:
    // 0x16c210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c218: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x16C218u;
    SET_GPR_U32(ctx, 31, 0x16C220u);
    ctx->pc = 0x16C21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C218u;
            // 0x16c21c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (runtime->hasFunction(0x1A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C220u; }
        if (ctx->pc != 0x16C220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_02_0x1a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C220u; }
        if (ctx->pc != 0x16C220u) { return; }
    }
    ctx->pc = 0x16C220u;
    // 0x16c220: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x16C220u;
    {
        const bool branch_taken_0x16c220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c220) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C228u;
label_16c228:
    // 0x16c228: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c22c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16c230: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C230u;
    SET_GPR_U32(ctx, 31, 0x16C238u);
    ctx->pc = 0x16C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C230u;
            // 0x16c234: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C238u; }
        if (ctx->pc != 0x16C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C238u; }
        if (ctx->pc != 0x16C238u) { return; }
    }
    ctx->pc = 0x16C238u;
    // 0x16c238: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c23c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16c240: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C240u;
    SET_GPR_U32(ctx, 31, 0x16C248u);
    ctx->pc = 0x16C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C240u;
            // 0x16c244: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C248u; }
        if (ctx->pc != 0x16C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C248u; }
        if (ctx->pc != 0x16C248u) { return; }
    }
    ctx->pc = 0x16C248u;
    // 0x16c248: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c24c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c250: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C250u;
    SET_GPR_U32(ctx, 31, 0x16C258u);
    ctx->pc = 0x16C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C250u;
            // 0x16c254: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C258u; }
        if (ctx->pc != 0x16C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C258u; }
        if (ctx->pc != 0x16C258u) { return; }
    }
    ctx->pc = 0x16C258u;
    // 0x16c258: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c25c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c260: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C260u;
    SET_GPR_U32(ctx, 31, 0x16C268u);
    ctx->pc = 0x16C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C260u;
            // 0x16c264: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C268u; }
        if (ctx->pc != 0x16C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C268u; }
        if (ctx->pc != 0x16C268u) { return; }
    }
    ctx->pc = 0x16C268u;
    // 0x16c268: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c26c: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16c270: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C270u;
    SET_GPR_U32(ctx, 31, 0x16C278u);
    ctx->pc = 0x16C274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C270u;
            // 0x16c274: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C278u; }
        if (ctx->pc != 0x16C278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C278u; }
        if (ctx->pc != 0x16C278u) { return; }
    }
    ctx->pc = 0x16C278u;
    // 0x16c278: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c27c: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16c280: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C280u;
    SET_GPR_U32(ctx, 31, 0x16C288u);
    ctx->pc = 0x16C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C280u;
            // 0x16c284: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C288u; }
        if (ctx->pc != 0x16C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C288u; }
        if (ctx->pc != 0x16C288u) { return; }
    }
    ctx->pc = 0x16C288u;
    // 0x16c288: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16C288u;
    {
        const bool branch_taken_0x16c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c288) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C290u;
label_16c290:
    // 0x16c290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c298: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16C298u;
    SET_GPR_U32(ctx, 31, 0x16C2A0u);
    ctx->pc = 0x16C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C298u;
            // 0x16c29c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2A0u; }
        if (ctx->pc != 0x16C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2A0u; }
        if (ctx->pc != 0x16C2A0u) { return; }
    }
    ctx->pc = 0x16C2A0u;
    // 0x16c2a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16C2A0u;
    {
        const bool branch_taken_0x16c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c2a0) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C2A8u;
label_16c2a8:
    // 0x16c2a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c2ac: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16c2b0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C2B0u;
    SET_GPR_U32(ctx, 31, 0x16C2B8u);
    ctx->pc = 0x16C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2B0u;
            // 0x16c2b4: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2B8u; }
        if (ctx->pc != 0x16C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2B8u; }
        if (ctx->pc != 0x16C2B8u) { return; }
    }
    ctx->pc = 0x16C2B8u;
    // 0x16c2b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c2bc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16c2c0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C2C0u;
    SET_GPR_U32(ctx, 31, 0x16C2C8u);
    ctx->pc = 0x16C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2C0u;
            // 0x16c2c4: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2C8u; }
        if (ctx->pc != 0x16C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2C8u; }
        if (ctx->pc != 0x16C2C8u) { return; }
    }
    ctx->pc = 0x16C2C8u;
    // 0x16c2c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c2cc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c2d0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C2D0u;
    SET_GPR_U32(ctx, 31, 0x16C2D8u);
    ctx->pc = 0x16C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2D0u;
            // 0x16c2d4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2D8u; }
        if (ctx->pc != 0x16C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2D8u; }
        if (ctx->pc != 0x16C2D8u) { return; }
    }
    ctx->pc = 0x16C2D8u;
    // 0x16c2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c2dc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c2e0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C2E0u;
    SET_GPR_U32(ctx, 31, 0x16C2E8u);
    ctx->pc = 0x16C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2E0u;
            // 0x16c2e4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2E8u; }
        if (ctx->pc != 0x16C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2E8u; }
        if (ctx->pc != 0x16C2E8u) { return; }
    }
    ctx->pc = 0x16C2E8u;
    // 0x16c2e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c2ec: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16c2f0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C2F0u;
    SET_GPR_U32(ctx, 31, 0x16C2F8u);
    ctx->pc = 0x16C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2F0u;
            // 0x16c2f4: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2F8u; }
        if (ctx->pc != 0x16C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2F8u; }
        if (ctx->pc != 0x16C2F8u) { return; }
    }
    ctx->pc = 0x16C2F8u;
    // 0x16c2f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c2fc: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16c300: 0xc069010  jal         func_1A4040
    ctx->pc = 0x16C300u;
    SET_GPR_U32(ctx, 31, 0x16C308u);
    ctx->pc = 0x16C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C300u;
            // 0x16c304: 0x2406ffe7  addiu       $a2, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C308u; }
        if (ctx->pc != 0x16C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C308u; }
        if (ctx->pc != 0x16C308u) { return; }
    }
    ctx->pc = 0x16C308u;
    // 0x16c308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16C308u;
    {
        const bool branch_taken_0x16c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c308) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C310u;
label_16c310:
    // 0x16c310: 0xc05d004  jal         func_174010
    ctx->pc = 0x16C310u;
    SET_GPR_U32(ctx, 31, 0x16C318u);
    ctx->pc = 0x16C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C310u;
            // 0x16c314: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C318u; }
        if (ctx->pc != 0x16C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C318u; }
        if (ctx->pc != 0x16C318u) { return; }
    }
    ctx->pc = 0x16C318u;
    // 0x16c318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c320: 0xc06ee1c  jal         func_1BB870
    ctx->pc = 0x16C320u;
    SET_GPR_U32(ctx, 31, 0x16C328u);
    ctx->pc = 0x16C324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C320u;
            // 0x16c324: 0x2406ffa6  addiu       $a2, $zero, -0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB870u;
    if (runtime->hasFunction(0x1BB870u)) {
        auto targetFn = runtime->lookupFunction(0x1BB870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C328u; }
        if (ctx->pc != 0x16C328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage4Boss_0x1bb870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C328u; }
        if (ctx->pc != 0x16C328u) { return; }
    }
    ctx->pc = 0x16C328u;
label_16c328:
    // 0x16c328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c32c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C32Cu;
            // 0x16c330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BC18u: goto label_16bc18;
            case 0x16BC30u: goto label_16bc30;
            case 0x16BC68u: goto label_16bc68;
            case 0x16BCA0u: goto label_16bca0;
            case 0x16BCD8u: goto label_16bcd8;
            case 0x16BD10u: goto label_16bd10;
            case 0x16BD48u: goto label_16bd48;
            case 0x16BD60u: goto label_16bd60;
            case 0x16BD78u: goto label_16bd78;
            case 0x16BD90u: goto label_16bd90;
            case 0x16BDA8u: goto label_16bda8;
            case 0x16BDC0u: goto label_16bdc0;
            case 0x16BDD8u: goto label_16bdd8;
            case 0x16BDF0u: goto label_16bdf0;
            case 0x16BE08u: goto label_16be08;
            case 0x16BE20u: goto label_16be20;
            case 0x16BE38u: goto label_16be38;
            case 0x16BE50u: goto label_16be50;
            case 0x16BE68u: goto label_16be68;
            case 0x16BE80u: goto label_16be80;
            case 0x16BE98u: goto label_16be98;
            case 0x16BEB0u: goto label_16beb0;
            case 0x16BEC8u: goto label_16bec8;
            case 0x16BEE0u: goto label_16bee0;
            case 0x16BEF8u: goto label_16bef8;
            case 0x16BF10u: goto label_16bf10;
            case 0x16BF28u: goto label_16bf28;
            case 0x16BF90u: goto label_16bf90;
            case 0x16BFF8u: goto label_16bff8;
            case 0x16C090u: goto label_16c090;
            case 0x16C0C8u: goto label_16c0c8;
            case 0x16C100u: goto label_16c100;
            case 0x16C138u: goto label_16c138;
            case 0x16C170u: goto label_16c170;
            case 0x16C1A8u: goto label_16c1a8;
            case 0x16C1C0u: goto label_16c1c0;
            case 0x16C1E8u: goto label_16c1e8;
            case 0x16C210u: goto label_16c210;
            case 0x16C228u: goto label_16c228;
            case 0x16C290u: goto label_16c290;
            case 0x16C2A8u: goto label_16c2a8;
            case 0x16C310u: goto label_16c310;
            case 0x16C328u: goto label_16c328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C334u;
}
