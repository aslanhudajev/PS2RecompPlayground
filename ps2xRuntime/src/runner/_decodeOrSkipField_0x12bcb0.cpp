#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decodeOrSkipField
// Address: 0x12bcb0 - 0x12be0c
void _decodeOrSkipField_0x12bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decodeOrSkipField_0x12bcb0");
#endif

    ctx->pc = 0x12bcb0u;

    // 0x12bcb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12bcb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bcb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12bcbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12bcc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12bcc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12bcc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12bcc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bccc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12bcd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12bcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bcd8: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x12bcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x12bcdc: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BCDCu;
    {
        const bool branch_taken_0x12bcdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCDCu;
            // 0x12bce0: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcdc) {
            ctx->pc = 0x12BCF0u;
            goto label_12bcf0;
        }
    }
    ctx->pc = 0x12BCE4u;
    // 0x12bce4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x12bce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bce8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BCE8u;
    {
        const bool branch_taken_0x12bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bce8) {
            ctx->pc = 0x12BCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCE8u;
            // 0x12bcec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BCF8u;
            goto label_12bcf8;
        }
    }
    ctx->pc = 0x12BCF0u;
label_12bcf0:
    // 0x12bcf0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bcf4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12bcf8:
    // 0x12bcf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BCF8u;
    {
        const bool branch_taken_0x12bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCF8u;
            // 0x12bcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcf8) {
            ctx->pc = 0x12BD0Cu;
            goto label_12bd0c;
        }
    }
    ctx->pc = 0x12BD00u;
    // 0x12bd00: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x12bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x12bd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bd08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_12bd0c:
    // 0x12bd0c: 0xc04a3b4  jal         func_128ED0
    ctx->pc = 0x12BD0Cu;
    SET_GPR_U32(ctx, 31, 0x12BD14u);
    ctx->pc = 0x12BD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD0Cu;
            // 0x12bd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128ED0u;
    if (runtime->hasFunction(0x128ED0u)) {
        auto targetFn = runtime->lookupFunction(0x128ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD14u; }
        if (ctx->pc != 0x12BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x128ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD14u; }
        if (ctx->pc != 0x12BD14u) { return; }
    }
    ctx->pc = 0x12BD14u;
    // 0x12bd14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD14u;
    {
        const bool branch_taken_0x12bd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD14u;
            // 0x12bd18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd14) {
            ctx->pc = 0x12BD30u;
            goto label_12bd30;
        }
    }
    ctx->pc = 0x12BD1Cu;
    // 0x12bd1c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BD1Cu;
    {
        const bool branch_taken_0x12bd1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD1Cu;
            // 0x12bd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd1c) {
            ctx->pc = 0x12BD34u;
            goto label_12bd34;
        }
    }
    ctx->pc = 0x12BD24u;
    // 0x12bd24: 0xc04a35c  jal         func_128D70
    ctx->pc = 0x12BD24u;
    SET_GPR_U32(ctx, 31, 0x12BD2Cu);
    ctx->pc = 0x12BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD24u;
            // 0x12bd28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128D70u;
    if (runtime->hasFunction(0x128D70u)) {
        auto targetFn = runtime->lookupFunction(0x128D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD2Cu; }
        if (ctx->pc != 0x12BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x128d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD2Cu; }
        if (ctx->pc != 0x12BD2Cu) { return; }
    }
    ctx->pc = 0x12BD2Cu;
    // 0x12bd2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12bd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bd30:
    // 0x12bd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12bd34:
    // 0x12bd34: 0xc04a134  jal         func_1284D0
    ctx->pc = 0x12BD34u;
    SET_GPR_U32(ctx, 31, 0x12BD3Cu);
    ctx->pc = 0x12BD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD34u;
            // 0x12bd38: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284D0u;
    if (runtime->hasFunction(0x1284D0u)) {
        auto targetFn = runtime->lookupFunction(0x1284D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD3Cu; }
        if (ctx->pc != 0x12BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x1284d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD3Cu; }
        if (ctx->pc != 0x12BD3Cu) { return; }
    }
    ctx->pc = 0x12BD3Cu;
    // 0x12bd3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD3Cu;
    {
        const bool branch_taken_0x12bd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bd3c) {
            ctx->pc = 0x12BD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD3Cu;
            // 0x12bd40: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BD58u;
            goto label_12bd58;
        }
    }
    ctx->pc = 0x12BD44u;
    // 0x12bd44: 0xc04af84  jal         func_12BE10
    ctx->pc = 0x12BD44u;
    SET_GPR_U32(ctx, 31, 0x12BD4Cu);
    ctx->pc = 0x12BD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD44u;
            // 0x12bd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE10u;
    if (runtime->hasFunction(0x12BE10u)) {
        auto targetFn = runtime->lookupFunction(0x12BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD4Cu; }
        if (ctx->pc != 0x12BD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x12be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD4Cu; }
        if (ctx->pc != 0x12BD4Cu) { return; }
    }
    ctx->pc = 0x12BD4Cu;
    // 0x12bd4c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x12bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x12bd50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12BD50u;
    {
        const bool branch_taken_0x12bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD50u;
            // 0x12bd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd50) {
            ctx->pc = 0x12BDECu;
            goto label_12bdec;
        }
    }
    ctx->pc = 0x12BD58u;
label_12bd58:
    // 0x12bd58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bd5c: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x12bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x12bd60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12bd60u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12bd64: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x12bd64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x12bd68: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12BD68u;
    {
        const bool branch_taken_0x12bd68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD68u;
            // 0x12bd6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd68) {
            ctx->pc = 0x12BDECu;
            goto label_12bdec;
        }
    }
    ctx->pc = 0x12BD70u;
    // 0x12bd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd74: 0xc04a3b4  jal         func_128ED0
    ctx->pc = 0x12BD74u;
    SET_GPR_U32(ctx, 31, 0x12BD7Cu);
    ctx->pc = 0x12BD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD74u;
            // 0x12bd78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128ED0u;
    if (runtime->hasFunction(0x128ED0u)) {
        auto targetFn = runtime->lookupFunction(0x128ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD7Cu; }
        if (ctx->pc != 0x12BD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x128ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD7Cu; }
        if (ctx->pc != 0x12BD7Cu) { return; }
    }
    ctx->pc = 0x12BD7Cu;
    // 0x12bd7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12bd7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd80: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x12bd80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x12bd84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD84u;
    {
        const bool branch_taken_0x12bd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD84u;
            // 0x12bd88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd84) {
            ctx->pc = 0x12BDA0u;
            goto label_12bda0;
        }
    }
    ctx->pc = 0x12BD8Cu;
    // 0x12bd8c: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BD8Cu;
    {
        const bool branch_taken_0x12bd8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd8c) {
            ctx->pc = 0x12BD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD8Cu;
            // 0x12bd90: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BDA4u;
            goto label_12bda4;
        }
    }
    ctx->pc = 0x12BD94u;
    // 0x12bd94: 0xc04a35c  jal         func_128D70
    ctx->pc = 0x12BD94u;
    SET_GPR_U32(ctx, 31, 0x12BD9Cu);
    ctx->pc = 0x12BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD94u;
            // 0x12bd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128D70u;
    if (runtime->hasFunction(0x128D70u)) {
        auto targetFn = runtime->lookupFunction(0x128D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD9Cu; }
        if (ctx->pc != 0x12BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x128d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BD9Cu; }
        if (ctx->pc != 0x12BD9Cu) { return; }
    }
    ctx->pc = 0x12BD9Cu;
    // 0x12bd9c: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x12bd9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
label_12bda0:
    // 0x12bda0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_12bda4:
    // 0x12bda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bda8: 0xc04a390  jal         func_128E40
    ctx->pc = 0x12BDA8u;
    SET_GPR_U32(ctx, 31, 0x12BDB0u);
    ctx->pc = 0x12BDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDA8u;
            // 0x12bdac: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E40u;
    if (runtime->hasFunction(0x128E40u)) {
        auto targetFn = runtime->lookupFunction(0x128E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDB0u; }
        if (ctx->pc != 0x12BDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x128e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDB0u; }
        if (ctx->pc != 0x12BDB0u) { return; }
    }
    ctx->pc = 0x12BDB0u;
    // 0x12bdb0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x12bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12bdb4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x12bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x12bdb8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x12bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x12bdbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bdc0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x12bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x12bdc4: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x12bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12bdc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bdcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bdd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bdd4: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x12bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x12bdd8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BDD8u;
    {
        const bool branch_taken_0x12bdd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDD8u;
            // 0x12bddc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdd8) {
            ctx->pc = 0x12BDE8u;
            goto label_12bde8;
        }
    }
    ctx->pc = 0x12BDE0u;
    // 0x12bde0: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x12BDE0u;
    SET_GPR_U32(ctx, 31, 0x12BDE8u);
    ctx->pc = 0x12BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BDE0u;
            // 0x12bde4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDE8u; }
        if (ctx->pc != 0x12BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BDE8u; }
        if (ctx->pc != 0x12BDE8u) { return; }
    }
    ctx->pc = 0x12BDE8u;
label_12bde8:
    // 0x12bde8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x12bde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12bdec:
    // 0x12bdec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12bdf0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12bdf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bdf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12bdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bdf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12bdf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bdfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12bdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12be00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12be00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12be04: 0x3e00008  jr          $ra
    ctx->pc = 0x12BE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE04u;
            // 0x12be08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BCF0u: goto label_12bcf0;
            case 0x12BCF8u: goto label_12bcf8;
            case 0x12BD0Cu: goto label_12bd0c;
            case 0x12BD30u: goto label_12bd30;
            case 0x12BD34u: goto label_12bd34;
            case 0x12BD58u: goto label_12bd58;
            case 0x12BDA0u: goto label_12bda0;
            case 0x12BDA4u: goto label_12bda4;
            case 0x12BDE8u: goto label_12bde8;
            case 0x12BDECu: goto label_12bdec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BE0Cu;
}
