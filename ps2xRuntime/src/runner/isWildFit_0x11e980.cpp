#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isWildFit
// Address: 0x11e980 - 0x11eb08
void isWildFit_0x11e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isWildFit_0x11e980");
#endif

    ctx->pc = 0x11e980u;

label_11e980:
    // 0x11e980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11e988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11e988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e98c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11e990: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11e990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11e99c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x11E99Cu;
    {
        const bool branch_taken_0x11e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E99Cu;
            // 0x11e9a0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e99c) {
            ctx->pc = 0x11EAB0u;
            goto label_11eab0;
        }
    }
    ctx->pc = 0x11E9A4u;
    // 0x11e9a4: 0x0  nop
    ctx->pc = 0x11e9a4u;
    // NOP
label_11e9a8:
    // 0x11e9a8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E9A8u;
    {
        const bool branch_taken_0x11e9a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x11E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9A8u;
            // 0x11e9ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a8) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E9B0u;
    // 0x11e9b0: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x11e9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11e9b4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x11e9b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_11e9b8:
    // 0x11e9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11e9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9c0: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x11E9C0u;
    SET_GPR_U32(ctx, 31, 0x11E9C8u);
    ctx->pc = 0x11E9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9C0u;
            // 0x11e9c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (runtime->hasFunction(0x13D330u)) {
        auto targetFn = runtime->lookupFunction(0x13D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9C8u; }
        if (ctx->pc != 0x11E9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x13d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9C8u; }
        if (ctx->pc != 0x11E9C8u) { return; }
    }
    ctx->pc = 0x11E9C8u;
    // 0x11e9c8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x11E9C8u;
    {
        const bool branch_taken_0x11e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9C8u;
            // 0x11e9cc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9c8) {
            ctx->pc = 0x11EAA8u;
            goto label_11eaa8;
        }
    }
    ctx->pc = 0x11E9D0u;
    // 0x11e9d0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x11e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x11e9d4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11e9d8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x11e9dc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E9DCu;
    {
        const bool branch_taken_0x11e9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9DCu;
            // 0x11e9e0: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9dc) {
            ctx->pc = 0x11EA0Cu;
            goto label_11ea0c;
        }
    }
    ctx->pc = 0x11E9E4u;
    // 0x11e9e4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x11e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_11e9e8:
    // 0x11e9e8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x11e9e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11e9ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11e9f0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x11E9F0u;
    {
        const bool branch_taken_0x11e9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9F0u;
            // 0x11e9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f0) {
            ctx->pc = 0x11EAECu;
            goto label_11eaec;
        }
    }
    ctx->pc = 0x11E9F8u;
    // 0x11e9f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11e9fc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ea00: 0x0  nop
    ctx->pc = 0x11ea00u;
    // NOP
    // 0x11ea04: 0x1044fff8  beq         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11EA04u;
    {
        const bool branch_taken_0x11ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA04u;
            // 0x11ea08: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea04) {
            ctx->pc = 0x11E9E8u;
            goto label_11e9e8;
        }
    }
    ctx->pc = 0x11EA0Cu;
label_11ea0c:
    // 0x11ea0c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x11ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x11ea10: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x11ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11ea14: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x11ea14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11ea18: 0x54430026  bnel        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x11EA18u;
    {
        const bool branch_taken_0x11ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ea18) {
            ctx->pc = 0x11EA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA18u;
            // 0x11ea1c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EAB4u;
            goto label_11eab4;
        }
    }
    ctx->pc = 0x11EA20u;
    // 0x11ea20: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11ea24: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x11ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_11ea28:
    // 0x11ea28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11ea28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11ea2c:
    // 0x11ea2c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x11ea2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ea30: 0x0  nop
    ctx->pc = 0x11ea30u;
    // NOP
    // 0x11ea34: 0x0  nop
    ctx->pc = 0x11ea34u;
    // NOP
    // 0x11ea38: 0x0  nop
    ctx->pc = 0x11ea38u;
    // NOP
    // 0x11ea3c: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EA3Cu;
    {
        const bool branch_taken_0x11ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA3Cu;
            // 0x11ea40: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea3c) {
            ctx->pc = 0x11EA28u;
            goto label_11ea28;
        }
    }
    ctx->pc = 0x11EA44u;
    // 0x11ea44: 0x0  nop
    ctx->pc = 0x11ea44u;
    // NOP
    // 0x11ea48: 0x0  nop
    ctx->pc = 0x11ea48u;
    // NOP
    // 0x11ea4c: 0x0  nop
    ctx->pc = 0x11ea4cu;
    // NOP
    // 0x11ea50: 0x0  nop
    ctx->pc = 0x11ea50u;
    // NOP
    // 0x11ea54: 0x5064fff5  beql        $v1, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11EA54u;
    {
        const bool branch_taken_0x11ea54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x11ea54) {
            ctx->pc = 0x11EA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA54u;
            // 0x11ea58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EA2Cu;
            goto label_11ea2c;
        }
    }
    ctx->pc = 0x11EA5Cu;
    // 0x11ea5c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11EA5Cu;
    {
        const bool branch_taken_0x11ea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA5Cu;
            // 0x11ea60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea5c) {
            ctx->pc = 0x11EAECu;
            goto label_11eaec;
        }
    }
    ctx->pc = 0x11EA64u;
    // 0x11ea64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11EA64u;
    {
        const bool branch_taken_0x11ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA64u;
            // 0x11ea68: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea64) {
            ctx->pc = 0x11EA88u;
            goto label_11ea88;
        }
    }
    ctx->pc = 0x11EA6Cu;
    // 0x11ea6c: 0x0  nop
    ctx->pc = 0x11ea6cu;
    // NOP
label_11ea70:
    // 0x11ea70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea74: 0xc047a60  jal         func_11E980
    ctx->pc = 0x11EA74u;
    SET_GPR_U32(ctx, 31, 0x11EA7Cu);
    ctx->pc = 0x11EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA74u;
            // 0x11ea78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E980u;
    goto label_11e980;
    ctx->pc = 0x11EA7Cu;
label_11ea7c:
    // 0x11ea7c: 0x1052001c  beq         $v0, $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x11EA7Cu;
    {
        const bool branch_taken_0x11ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x11EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA7Cu;
            // 0x11ea80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea7c) {
            ctx->pc = 0x11EAF0u;
            goto label_11eaf0;
        }
    }
    ctx->pc = 0x11EA84u;
    // 0x11ea84: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x11ea84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11ea88:
    // 0x11ea88: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x11ea8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea90: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11EA90u;
    SET_GPR_U32(ctx, 31, 0x11EA98u);
    ctx->pc = 0x11EA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA90u;
            // 0x11ea94: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA98u; }
        if (ctx->pc != 0x11EA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        instr_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA98u; }
        if (ctx->pc != 0x11EA98u) { return; }
    }
    ctx->pc = 0x11EA98u;
    // 0x11ea98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaa0: 0x601fff3  bgez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11EAA0u;
    {
        const bool branch_taken_0x11eaa0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAA0u;
            // 0x11eaa4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa0) {
            ctx->pc = 0x11EA70u;
            goto label_11ea70;
        }
    }
    ctx->pc = 0x11EAA8u;
label_11eaa8:
    // 0x11eaa8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11EAA8u;
    {
        const bool branch_taken_0x11eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAA8u;
            // 0x11eaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa8) {
            ctx->pc = 0x11EAECu;
            goto label_11eaec;
        }
    }
    ctx->pc = 0x11EAB0u;
label_11eab0:
    // 0x11eab0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x11eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_11eab4:
    // 0x11eab4: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11EAB4u;
    SET_GPR_U32(ctx, 31, 0x11EABCu);
    ctx->pc = 0x11EAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAB4u;
            // 0x11eab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EABCu; }
        if (ctx->pc != 0x11EABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        instr_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EABCu; }
        if (ctx->pc != 0x11EABCu) { return; }
    }
    ctx->pc = 0x11EABCu;
    // 0x11eabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x11eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11eac4: 0xc0479e0  jal         func_11E780
    ctx->pc = 0x11EAC4u;
    SET_GPR_U32(ctx, 31, 0x11EACCu);
    ctx->pc = 0x11EAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAC4u;
            // 0x11eac8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E780u;
    if (runtime->hasFunction(0x11E780u)) {
        auto targetFn = runtime->lookupFunction(0x11E780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EACCu; }
        if (ctx->pc != 0x11EACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        instr_0x11e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EACCu; }
        if (ctx->pc != 0x11EACCu) { return; }
    }
    ctx->pc = 0x11EACCu;
    // 0x11eacc: 0x641ffb6  bgez        $s2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x11EACCu;
    {
        const bool branch_taken_0x11eacc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EACCu;
            // 0x11ead0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eacc) {
            ctx->pc = 0x11E9A8u;
            goto label_11e9a8;
        }
    }
    ctx->pc = 0x11EAD4u;
    // 0x11ead4: 0x461ffb8  bgez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAD4u;
            // 0x11ead8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11EADCu;
    // 0x11eadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eae0: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11EAE0u;
    SET_GPR_U32(ctx, 31, 0x11EAE8u);
    ctx->pc = 0x11EAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAE0u;
            // 0x11eae4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAE8u; }
        if (ctx->pc != 0x11EAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAE8u; }
        if (ctx->pc != 0x11EAE8u) { return; }
    }
    ctx->pc = 0x11EAE8u;
    // 0x11eae8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11eae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11eaec:
    // 0x11eaec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11eaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11eaf0:
    // 0x11eaf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11eaf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11eaf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11eaf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eaf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11eaf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11eafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11eafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb00: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB00u;
            // 0x11eb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E980u: goto label_11e980;
            case 0x11E9A8u: goto label_11e9a8;
            case 0x11E9B8u: goto label_11e9b8;
            case 0x11E9E8u: goto label_11e9e8;
            case 0x11EA0Cu: goto label_11ea0c;
            case 0x11EA28u: goto label_11ea28;
            case 0x11EA2Cu: goto label_11ea2c;
            case 0x11EA70u: goto label_11ea70;
            case 0x11EA7Cu: goto label_11ea7c;
            case 0x11EA88u: goto label_11ea88;
            case 0x11EAA8u: goto label_11eaa8;
            case 0x11EAB0u: goto label_11eab0;
            case 0x11EAB4u: goto label_11eab4;
            case 0x11EAECu: goto label_11eaec;
            case 0x11EAF0u: goto label_11eaf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EB08u;
}
