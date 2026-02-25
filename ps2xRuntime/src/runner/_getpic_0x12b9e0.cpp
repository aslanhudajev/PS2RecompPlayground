#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getpic
// Address: 0x12b9e0 - 0x12bb50
void _getpic_0x12b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getpic_0x12b9e0");
#endif

    ctx->pc = 0x12b9e0u;

    // 0x12b9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b9e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12b9e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12b9ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b9f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12b9f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b9f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12b9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ba04: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x12ba04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x12ba08: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x12ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x12ba0c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x12ba0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)63u)));
    // 0x12ba10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BA10u;
    {
        const bool branch_taken_0x12ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA10u;
            // 0x12ba14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba10) {
            ctx->pc = 0x12BA30u;
            goto label_12ba30;
        }
    }
    ctx->pc = 0x12BA18u;
    // 0x12ba18: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12ba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba20: 0xc04b010  jal         func_12C040
    ctx->pc = 0x12BA20u;
    SET_GPR_U32(ctx, 31, 0x12BA28u);
    ctx->pc = 0x12BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA20u;
            // 0x12ba24: 0x24a5f478  addiu       $a1, $a1, -0xB88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA28u; }
        if (ctx->pc != 0x12BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA28u; }
        if (ctx->pc != 0x12BA28u) { return; }
    }
    ctx->pc = 0x12BA28u;
    // 0x12ba28: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x12BA28u;
    {
        const bool branch_taken_0x12ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA28u;
            // 0x12ba2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba28) {
            ctx->pc = 0x12BB34u;
            goto label_12bb34;
        }
    }
    ctx->pc = 0x12BA30u;
label_12ba30:
    // 0x12ba30: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x12ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
    // 0x12ba34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12ba38:
    // 0x12ba38: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12BA38u;
    {
        const bool branch_taken_0x12ba38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA38u;
            // 0x12ba3c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba38) {
            ctx->pc = 0x12BA70u;
            goto label_12ba70;
        }
    }
    ctx->pc = 0x12BA40u;
label_12ba40:
    // 0x12ba40: 0xc04a134  jal         func_1284D0
    ctx->pc = 0x12BA40u;
    SET_GPR_U32(ctx, 31, 0x12BA48u);
    ctx->pc = 0x12BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA40u;
            // 0x12ba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284D0u;
    if (runtime->hasFunction(0x1284D0u)) {
        auto targetFn = runtime->lookupFunction(0x1284D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA48u; }
        if (ctx->pc != 0x12BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x1284d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA48u; }
        if (ctx->pc != 0x12BA48u) { return; }
    }
    ctx->pc = 0x12BA48u;
    // 0x12ba48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12ba48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba4c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BA4Cu;
    {
        const bool branch_taken_0x12ba4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA4Cu;
            // 0x12ba50: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba4c) {
            ctx->pc = 0x12BA70u;
            goto label_12ba70;
        }
    }
    ctx->pc = 0x12BA54u;
    // 0x12ba54: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x12ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x12ba58: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x12ba5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BA5Cu;
    {
        const bool branch_taken_0x12ba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA5Cu;
            // 0x12ba60: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba5c) {
            ctx->pc = 0x12BA70u;
            goto label_12ba70;
        }
    }
    ctx->pc = 0x12BA64u;
    // 0x12ba64: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x12ba68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12BA68u;
    {
        const bool branch_taken_0x12ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA68u;
            // 0x12ba6c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba68) {
            ctx->pc = 0x12BA40u;
            goto label_12ba40;
        }
    }
    ctx->pc = 0x12BA70u;
label_12ba70:
    // 0x12ba70: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12BA70u;
    {
        const bool branch_taken_0x12ba70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA70u;
            // 0x12ba74: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba70) {
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BA78u;
    // 0x12ba78: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x12ba7c: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x12ba80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ba84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ba88: 0x800008  jr          $a0
    ctx->pc = 0x12BA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BA90u: goto label_12ba90;
            case 0x12BAA4u: goto label_12baa4;
            case 0x12BAD4u: goto label_12bad4;
            case 0x12BAF8u: goto label_12baf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BA90u;
label_12ba90:
    // 0x12ba90: 0xc04af84  jal         func_12BE10
    ctx->pc = 0x12BA90u;
    SET_GPR_U32(ctx, 31, 0x12BA98u);
    ctx->pc = 0x12BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA90u;
            // 0x12ba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE10u;
    if (runtime->hasFunction(0x12BE10u)) {
        auto targetFn = runtime->lookupFunction(0x12BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA98u; }
        if (ctx->pc != 0x12BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x12be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BA98u; }
        if (ctx->pc != 0x12BA98u) { return; }
    }
    ctx->pc = 0x12BA98u;
    // 0x12ba98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba9c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12BA9Cu;
    {
        const bool branch_taken_0x12ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BA9Cu;
            // 0x12baa0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba9c) {
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BAA4u;
label_12baa4:
    // 0x12baa4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x12baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x12baa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baac: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x12baacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x12bab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12bab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bab4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x12bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x12bab8: 0xc04af1a  jal         func_12BC68
    ctx->pc = 0x12BAB8u;
    SET_GPR_U32(ctx, 31, 0x12BAC0u);
    ctx->pc = 0x12BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAB8u;
            // 0x12babc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BC68u;
    if (runtime->hasFunction(0x12BC68u)) {
        auto targetFn = runtime->lookupFunction(0x12BC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAC0u; }
        if (ctx->pc != 0x12BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x12bc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAC0u; }
        if (ctx->pc != 0x12BAC0u) { return; }
    }
    ctx->pc = 0x12BAC0u;
    // 0x12bac0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x12bac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bacc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12BACCu;
    {
        const bool branch_taken_0x12bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BACCu;
            // 0x12bad0: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bacc) {
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BAD4u;
label_12bad4:
    // 0x12bad4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x12bad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12badc: 0xc04af1a  jal         func_12BC68
    ctx->pc = 0x12BADCu;
    SET_GPR_U32(ctx, 31, 0x12BAE4u);
    ctx->pc = 0x12BAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BADCu;
            // 0x12bae0: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BC68u;
    if (runtime->hasFunction(0x12BC68u)) {
        auto targetFn = runtime->lookupFunction(0x12BC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAE4u; }
        if (ctx->pc != 0x12BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x12bc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BAE4u; }
        if (ctx->pc != 0x12BAE4u) { return; }
    }
    ctx->pc = 0x12BAE4u;
    // 0x12bae4: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x12bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x12bae8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12baf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12BAF0u;
    {
        const bool branch_taken_0x12baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BAF0u;
            // 0x12baf4: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baf0) {
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BAF8u;
label_12baf8:
    // 0x12baf8: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x12bafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb00: 0xc04af1a  jal         func_12BC68
    ctx->pc = 0x12BB00u;
    SET_GPR_U32(ctx, 31, 0x12BB08u);
    ctx->pc = 0x12BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB00u;
            // 0x12bb04: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BC68u;
    if (runtime->hasFunction(0x12BC68u)) {
        auto targetFn = runtime->lookupFunction(0x12BC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB08u; }
        if (ctx->pc != 0x12BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x12bc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BB08u; }
        if (ctx->pc != 0x12BB08u) { return; }
    }
    ctx->pc = 0x12BB08u;
    // 0x12bb08: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x12bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x12bb0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bb14: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x12bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_12bb18:
    // 0x12bb18: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x12bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x12bb1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BB1Cu;
    {
        const bool branch_taken_0x12bb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB1Cu;
            // 0x12bb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb1c) {
            ctx->pc = 0x12BB34u;
            goto label_12bb34;
        }
    }
    ctx->pc = 0x12BB24u;
    // 0x12bb24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12bb28: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x12BB28u;
    {
        const bool branch_taken_0x12bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB28u;
            // 0x12bb2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb28) {
            ctx->pc = 0x12BA38u;
            goto label_12ba38;
        }
    }
    ctx->pc = 0x12BB30u;
    // 0x12bb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bb34:
    // 0x12bb34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12bb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bb38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bb3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12bb3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bb40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12bb40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB48u;
            // 0x12bb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BA30u: goto label_12ba30;
            case 0x12BA38u: goto label_12ba38;
            case 0x12BA40u: goto label_12ba40;
            case 0x12BA70u: goto label_12ba70;
            case 0x12BA90u: goto label_12ba90;
            case 0x12BAA4u: goto label_12baa4;
            case 0x12BAD4u: goto label_12bad4;
            case 0x12BAF8u: goto label_12baf8;
            case 0x12BB18u: goto label_12bb18;
            case 0x12BB34u: goto label_12bb34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BB50u;
}
