#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EELoadVAGAsync
// Address: 0x10b9f0 - 0x10bd34
void EELoadVAGAsync_0x10b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b9f0u;

    // 0x10b9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b9f4: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b9f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b9fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10ba00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10ba00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba04: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ba08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba0c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10ba10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10ba10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ba18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ba1c: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x10BA1Cu;
    {
        const bool branch_taken_0x10ba1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA1Cu;
            // 0x10ba20: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba1c) {
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BA24u;
    // 0x10ba24: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ba28: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BA28u;
    SET_GPR_U32(ctx, 31, 0x10BA30u);
    ctx->pc = 0x10BA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA28u;
            // 0x10ba2c: 0x248434b8  addiu       $a0, $a0, 0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA30u; }
        if (ctx->pc != 0x10BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA30u; }
        if (ctx->pc != 0x10BA30u) { return; }
    }
    ctx->pc = 0x10BA30u;
    // 0x10ba30: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ba34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba38: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BA38u;
    SET_GPR_U32(ctx, 31, 0x10BA40u);
    ctx->pc = 0x10BA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA38u;
            // 0x10ba3c: 0x248434d8  addiu       $a0, $a0, 0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA40u; }
        if (ctx->pc != 0x10BA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA40u; }
        if (ctx->pc != 0x10BA40u) { return; }
    }
    ctx->pc = 0x10BA40u;
    // 0x10ba40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba44: 0xc0444ea  jal         func_1113A8
    ctx->pc = 0x10BA44u;
    SET_GPR_U32(ctx, 31, 0x10BA4Cu);
    ctx->pc = 0x10BA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA44u;
            // 0x10ba48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1113A8u;
    if (runtime->hasFunction(0x1113A8u)) {
        auto targetFn = runtime->lookupFunction(0x1113A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA4Cu; }
        if (ctx->pc != 0x10BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1113a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA4Cu; }
        if (ctx->pc != 0x10BA4Cu) { return; }
    }
    ctx->pc = 0x10BA4Cu;
    // 0x10ba4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ba54: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BA54u;
    {
        const bool branch_taken_0x10ba54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x10ba54) {
            ctx->pc = 0x10BA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA54u;
            // 0x10ba58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BA70u;
            goto label_10ba70;
        }
    }
    ctx->pc = 0x10BA5Cu;
    // 0x10ba5c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ba60: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BA60u;
    SET_GPR_U32(ctx, 31, 0x10BA68u);
    ctx->pc = 0x10BA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA60u;
            // 0x10ba64: 0x248434f0  addiu       $a0, $a0, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA68u; }
        if (ctx->pc != 0x10BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA68u; }
        if (ctx->pc != 0x10BA68u) { return; }
    }
    ctx->pc = 0x10BA68u;
    // 0x10ba68: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x10BA68u;
    {
        const bool branch_taken_0x10ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA68u;
            // 0x10ba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba68) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BA70u;
label_10ba70:
    // 0x10ba70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba74: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10BA74u;
    SET_GPR_U32(ctx, 31, 0x10BA7Cu);
    ctx->pc = 0x10BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA74u;
            // 0x10ba78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA7Cu; }
        if (ctx->pc != 0x10BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA7Cu; }
        if (ctx->pc != 0x10BA7Cu) { return; }
    }
    ctx->pc = 0x10BA7Cu;
    // 0x10ba7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ba7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba80: 0x5e400006  bgtzl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BA80u;
    {
        const bool branch_taken_0x10ba80 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x10ba80) {
            ctx->pc = 0x10BA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA80u;
            // 0x10ba84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BA9Cu;
            goto label_10ba9c;
        }
    }
    ctx->pc = 0x10BA88u;
    // 0x10ba88: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ba8c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BA8Cu;
    SET_GPR_U32(ctx, 31, 0x10BA94u);
    ctx->pc = 0x10BA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA8Cu;
            // 0x10ba90: 0x24843508  addiu       $a0, $a0, 0x3508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA94u; }
        if (ctx->pc != 0x10BA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA94u; }
        if (ctx->pc != 0x10BA94u) { return; }
    }
    ctx->pc = 0x10BA94u;
    // 0x10ba94: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x10BA94u;
    {
        const bool branch_taken_0x10ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BA94u;
            // 0x10ba98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba94) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BA9Cu;
label_10ba9c:
    // 0x10ba9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baa0: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10BAA0u;
    SET_GPR_U32(ctx, 31, 0x10BAA8u);
    ctx->pc = 0x10BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAA0u;
            // 0x10baa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAA8u; }
        if (ctx->pc != 0x10BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAA8u; }
        if (ctx->pc != 0x10BAA8u) { return; }
    }
    ctx->pc = 0x10BAA8u;
    // 0x10baa8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10baac: 0xc04a90c  jal         func_12A430
    ctx->pc = 0x10BAACu;
    SET_GPR_U32(ctx, 31, 0x10BAB4u);
    ctx->pc = 0x10BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAACu;
            // 0x10bab0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A430u;
    if (runtime->hasFunction(0x12A430u)) {
        auto targetFn = runtime->lookupFunction(0x12A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAB4u; }
        if (ctx->pc != 0x10BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAB4u; }
        if (ctx->pc != 0x10BAB4u) { return; }
    }
    ctx->pc = 0x10BAB4u;
    // 0x10bab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BAB4u;
    {
        const bool branch_taken_0x10bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAB4u;
            // 0x10bab8: 0xaf8283f0  sw          $v0, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bab4) {
            ctx->pc = 0x10BAD0u;
            goto label_10bad0;
        }
    }
    ctx->pc = 0x10BABCu;
    // 0x10babc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10babcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bac0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BAC0u;
    SET_GPR_U32(ctx, 31, 0x10BAC8u);
    ctx->pc = 0x10BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAC0u;
            // 0x10bac4: 0x24843520  addiu       $a0, $a0, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAC8u; }
        if (ctx->pc != 0x10BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAC8u; }
        if (ctx->pc != 0x10BAC8u) { return; }
    }
    ctx->pc = 0x10BAC8u;
    // 0x10bac8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x10BAC8u;
    {
        const bool branch_taken_0x10bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAC8u;
            // 0x10bacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bac8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BAD0u;
label_10bad0:
    // 0x10bad0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bad8: 0x24843538  addiu       $a0, $a0, 0x3538
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13624));
    // 0x10badc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10badcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bae0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BAE0u;
    SET_GPR_U32(ctx, 31, 0x10BAE8u);
    ctx->pc = 0x10BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAE0u;
            // 0x10bae4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAE8u; }
        if (ctx->pc != 0x10BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAE8u; }
        if (ctx->pc != 0x10BAE8u) { return; }
    }
    ctx->pc = 0x10BAE8u;
    // 0x10bae8: 0x8f8583f0  lw          $a1, -0x7C10($gp)
    ctx->pc = 0x10bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10baec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10baecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baf0: 0xc04467a  jal         func_1119E8
    ctx->pc = 0x10BAF0u;
    SET_GPR_U32(ctx, 31, 0x10BAF8u);
    ctx->pc = 0x10BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BAF0u;
            // 0x10baf4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1119E8u;
    if (runtime->hasFunction(0x1119E8u)) {
        auto targetFn = runtime->lookupFunction(0x1119E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAF8u; }
        if (ctx->pc != 0x10BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAF8u; }
        if (ctx->pc != 0x10BAF8u) { return; }
    }
    ctx->pc = 0x10BAF8u;
    // 0x10baf8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb00: 0x24843578  addiu       $a0, $a0, 0x3578
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    // 0x10bb04: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BB04u;
    SET_GPR_U32(ctx, 31, 0x10BB0Cu);
    ctx->pc = 0x10BB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB04u;
            // 0x10bb08: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB0Cu; }
        if (ctx->pc != 0x10BB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB0Cu; }
        if (ctx->pc != 0x10BB0Cu) { return; }
    }
    ctx->pc = 0x10BB0Cu;
    // 0x10bb0c: 0xc042aa2  jal         func_10AA88
    ctx->pc = 0x10BB0Cu;
    SET_GPR_U32(ctx, 31, 0x10BB14u);
    ctx->pc = 0x10BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB0Cu;
            // 0x10bb10: 0x8f8483f0  lw          $a0, -0x7C10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA88u;
    if (runtime->hasFunction(0x10AA88u)) {
        auto targetFn = runtime->lookupFunction(0x10AA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB14u; }
        if (ctx->pc != 0x10BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintVAGDetails_0x10aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB14u; }
        if (ctx->pc != 0x10BB14u) { return; }
    }
    ctx->pc = 0x10BB14u;
    // 0x10bb14: 0x8f9083f0  lw          $s0, -0x7C10($gp)
    ctx->pc = 0x10bb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bb18: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x10bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x10bb1c: 0x24a55e88  addiu       $a1, $a1, 0x5E88
    ctx->pc = 0x10bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24200));
    // 0x10bb20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bb24: 0xc04aefa  jal         func_12BBE8
    ctx->pc = 0x10BB24u;
    SET_GPR_U32(ctx, 31, 0x10BB2Cu);
    ctx->pc = 0x10BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB24u;
            // 0x10bb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BBE8u;
    if (runtime->hasFunction(0x12BBE8u)) {
        auto targetFn = runtime->lookupFunction(0x12BBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB2Cu; }
        if (ctx->pc != 0x10BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x12bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB2Cu; }
        if (ctx->pc != 0x10BB2Cu) { return; }
    }
    ctx->pc = 0x10BB2Cu;
    // 0x10bb2c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10BB2Cu;
    {
        const bool branch_taken_0x10bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb2c) {
            ctx->pc = 0x10BB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB2Cu;
            // 0x10bb30: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BB58u;
            goto label_10bb58;
        }
    }
    ctx->pc = 0x10BB34u;
    // 0x10bb34: 0xc042ffc  jal         func_10BFF0
    ctx->pc = 0x10BB34u;
    SET_GPR_U32(ctx, 31, 0x10BB3Cu);
    ctx->pc = 0x10BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB34u;
            // 0x10bb38: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFF0u;
    if (runtime->hasFunction(0x10BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB3Cu; }
        if (ctx->pc != 0x10BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB3Cu; }
        if (ctx->pc != 0x10BB3Cu) { return; }
    }
    ctx->pc = 0x10BB3Cu;
    // 0x10bb3c: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x10bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bb40: 0x3403bb80  ori         $v1, $zero, 0xBB80
    ctx->pc = 0x10bb40u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48000u)));
    // 0x10bb44: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x10bb44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10bb48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BB48u;
    {
        const bool branch_taken_0x10bb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb48) {
            ctx->pc = 0x10BB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB48u;
            // 0x10bb4c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BB50u;
            goto label_10bb50;
        }
    }
    ctx->pc = 0x10BB50u;
label_10bb50:
    // 0x10bb50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB6Cu;
            goto label_10bb6c;
        }
    }
    ctx->pc = 0x10BB58u;
label_10bb58:
    // 0x10bb58: 0x3403bb80  ori         $v1, $zero, 0xBB80
    ctx->pc = 0x10bb58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48000u)));
    // 0x10bb5c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BB5Cu;
    {
        const bool branch_taken_0x10bb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb5c) {
            ctx->pc = 0x10BB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB5Cu;
            // 0x10bb60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BB64u;
            goto label_10bb64;
        }
    }
    ctx->pc = 0x10BB64u;
label_10bb64:
    // 0x10bb64: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x10bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bb68: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x10bb68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10bb6c:
    // 0x10bb6c: 0x1012  mflo        $v0
    ctx->pc = 0x10bb6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10bb70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x10bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x10bb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb78: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10bb7c: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10BB7Cu;
    SET_GPR_U32(ctx, 31, 0x10BB84u);
    ctx->pc = 0x10BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB7Cu;
            // 0x10bb80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB84u; }
        if (ctx->pc != 0x10BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB84u; }
        if (ctx->pc != 0x10BB84u) { return; }
    }
    ctx->pc = 0x10BB84u;
    // 0x10bb84: 0x2650ffd0  addiu       $s0, $s2, -0x30
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x10bb88: 0x8f8583f0  lw          $a1, -0x7C10($gp)
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb90: 0xc04467a  jal         func_1119E8
    ctx->pc = 0x10BB90u;
    SET_GPR_U32(ctx, 31, 0x10BB98u);
    ctx->pc = 0x10BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BB90u;
            // 0x10bb94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1119E8u;
    if (runtime->hasFunction(0x1119E8u)) {
        auto targetFn = runtime->lookupFunction(0x1119E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB98u; }
        if (ctx->pc != 0x10BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB98u; }
        if (ctx->pc != 0x10BB98u) { return; }
    }
    ctx->pc = 0x10BB98u;
    // 0x10bb98: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bb9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bba0: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x10bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x10bba4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BBA4u;
    SET_GPR_U32(ctx, 31, 0x10BBACu);
    ctx->pc = 0x10BBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBA4u;
            // 0x10bba8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBACu; }
        if (ctx->pc != 0x10BBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBACu; }
        if (ctx->pc != 0x10BBACu) { return; }
    }
    ctx->pc = 0x10BBACu;
    // 0x10bbac: 0xc04458c  jal         func_111630
    ctx->pc = 0x10BBACu;
    SET_GPR_U32(ctx, 31, 0x10BBB4u);
    ctx->pc = 0x10BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBACu;
            // 0x10bbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111630u;
    if (runtime->hasFunction(0x111630u)) {
        auto targetFn = runtime->lookupFunction(0x111630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBB4u; }
        if (ctx->pc != 0x10BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x111630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBB4u; }
        if (ctx->pc != 0x10BBB4u) { return; }
    }
    ctx->pc = 0x10BBB4u;
    // 0x10bbb4: 0xc043948  jal         func_10E520
    ctx->pc = 0x10BBB4u;
    SET_GPR_U32(ctx, 31, 0x10BBBCu);
    ctx->pc = 0x10BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBB4u;
            // 0x10bbb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBBCu; }
        if (ctx->pc != 0x10BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBBCu; }
        if (ctx->pc != 0x10BBBCu) { return; }
    }
    ctx->pc = 0x10BBBCu;
    // 0x10bbbc: 0xc045066  jal         func_114198
    ctx->pc = 0x10BBBCu;
    SET_GPR_U32(ctx, 31, 0x10BBC4u);
    ctx->pc = 0x10BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBBCu;
            // 0x10bbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBC4u; }
        if (ctx->pc != 0x10BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBC4u; }
        if (ctx->pc != 0x10BBC4u) { return; }
    }
    ctx->pc = 0x10BBC4u;
    // 0x10bbc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BBC4u;
    {
        const bool branch_taken_0x10bbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBC4u;
            // 0x10bbc8: 0xaf82838c  sw          $v0, -0x7C74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbc4) {
            ctx->pc = 0x10BBE0u;
            goto label_10bbe0;
        }
    }
    ctx->pc = 0x10BBCCu;
    // 0x10bbcc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bbd0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BBD0u;
    SET_GPR_U32(ctx, 31, 0x10BBD8u);
    ctx->pc = 0x10BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBD0u;
            // 0x10bbd4: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBD8u; }
        if (ctx->pc != 0x10BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBD8u; }
        if (ctx->pc != 0x10BBD8u) { return; }
    }
    ctx->pc = 0x10BBD8u;
    // 0x10bbd8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x10BBD8u;
    {
        const bool branch_taken_0x10bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBD8u;
            // 0x10bbdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbd8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BBE0u;
label_10bbe0:
    // 0x10bbe0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bbe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbe8: 0x248435e0  addiu       $a0, $a0, 0x35E0
    ctx->pc = 0x10bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10bbec: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BBECu;
    SET_GPR_U32(ctx, 31, 0x10BBF4u);
    ctx->pc = 0x10BBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBECu;
            // 0x10bbf0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBF4u; }
        if (ctx->pc != 0x10BBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBF4u; }
        if (ctx->pc != 0x10BBF4u) { return; }
    }
    ctx->pc = 0x10BBF4u;
    // 0x10bbf4: 0x8f8483f0  lw          $a0, -0x7C10($gp)
    ctx->pc = 0x10bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bbf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbfc: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10bc00: 0xc045c60  jal         func_117180
    ctx->pc = 0x10BC00u;
    SET_GPR_U32(ctx, 31, 0x10BC08u);
    ctx->pc = 0x10BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC00u;
            // 0x10bc04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117180u;
    if (runtime->hasFunction(0x117180u)) {
        auto targetFn = runtime->lookupFunction(0x117180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC08u; }
        if (ctx->pc != 0x10BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC08u; }
        if (ctx->pc != 0x10BC08u) { return; }
    }
    ctx->pc = 0x10BC08u;
    // 0x10bc08: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BC08u;
    {
        const bool branch_taken_0x10bc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC08u;
            // 0x10bc0c: 0x8f828388  lw          $v0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc08) {
            ctx->pc = 0x10BC24u;
            goto label_10bc24;
        }
    }
    ctx->pc = 0x10BC10u;
    // 0x10bc10: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bc14: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BC14u;
    SET_GPR_U32(ctx, 31, 0x10BC1Cu);
    ctx->pc = 0x10BC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC14u;
            // 0x10bc18: 0x24843600  addiu       $a0, $a0, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC1Cu; }
        if (ctx->pc != 0x10BC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC1Cu; }
        if (ctx->pc != 0x10BC1Cu) { return; }
    }
    ctx->pc = 0x10BC1Cu;
    // 0x10bc1c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10BC1Cu;
    {
        const bool branch_taken_0x10bc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC1Cu;
            // 0x10bc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc1c) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BC24u;
label_10bc24:
    // 0x10bc24: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x10bc24u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x10bc28: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BC28u;
    {
        const bool branch_taken_0x10bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bc28) {
            ctx->pc = 0x10BC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC28u;
            // 0x10bc2c: 0x24425010  addiu       $v0, $v0, 0x5010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20496));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BC40u;
            goto label_10bc40;
        }
    }
    ctx->pc = 0x10BC30u;
    // 0x10bc30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10bc34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bc38: 0xaf828388  sw          $v0, -0x7C78($gp)
    ctx->pc = 0x10bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
    // 0x10bc3c: 0x24425010  addiu       $v0, $v0, 0x5010
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20496));
label_10bc40:
    // 0x10bc40: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bc44: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x10bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10bc48: 0x24843620  addiu       $a0, $a0, 0x3620
    ctx->pc = 0x10bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
    // 0x10bc4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc50: 0x8f828388  lw          $v0, -0x7C78($gp)
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10bc54: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x10bc58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10bc5c: 0xaf828388  sw          $v0, -0x7C78($gp)
    ctx->pc = 0x10bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
    // 0x10bc60: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BC60u;
    SET_GPR_U32(ctx, 31, 0x10BC68u);
    ctx->pc = 0x10BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC60u;
            // 0x10bc64: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC68u; }
        if (ctx->pc != 0x10BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC68u; }
        if (ctx->pc != 0x10BC68u) { return; }
    }
    ctx->pc = 0x10BC68u;
    // 0x10bc68: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10bc6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x10bc6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc70: 0x8f88838c  lw          $t0, -0x7C74($gp)
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10bc74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x10bc78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32976u)));
    // 0x10bc7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc80: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BC80u;
    SET_GPR_U32(ctx, 31, 0x10BC88u);
    ctx->pc = 0x10BC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC80u;
            // 0x10bc84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC88u; }
        if (ctx->pc != 0x10BC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC88u; }
        if (ctx->pc != 0x10BC88u) { return; }
    }
    ctx->pc = 0x10BC88u;
    // 0x10bc88: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BC88u;
    {
        const bool branch_taken_0x10bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10BC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC88u;
            // 0x10bc8c: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc88) {
            ctx->pc = 0x10BCA0u;
            goto label_10bca0;
        }
    }
    ctx->pc = 0x10BC90u;
    // 0x10bc90: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bc94: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BC94u;
    SET_GPR_U32(ctx, 31, 0x10BC9Cu);
    ctx->pc = 0x10BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC94u;
            // 0x10bc98: 0x24843648  addiu       $a0, $a0, 0x3648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC9Cu; }
        if (ctx->pc != 0x10BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC9Cu; }
        if (ctx->pc != 0x10BC9Cu) { return; }
    }
    ctx->pc = 0x10BC9Cu;
    // 0x10bc9c: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10bca0:
    // 0x10bca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bca4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bca8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10BCA8u;
    {
        const bool branch_taken_0x10bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCA8u;
            // 0x10bcac: 0xaf838390  sw          $v1, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bca8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BCB0u;
label_10bcb0:
    // 0x10bcb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bcb4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BCB4u;
    {
        const bool branch_taken_0x10bcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCB4u;
            // 0x10bcb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcb4) {
            ctx->pc = 0x10BCD0u;
            goto label_10bcd0;
        }
    }
    ctx->pc = 0x10BCBCu;
    // 0x10bcbc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bcc0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BCC0u;
    SET_GPR_U32(ctx, 31, 0x10BCC8u);
    ctx->pc = 0x10BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCC0u;
            // 0x10bcc4: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCC8u; }
        if (ctx->pc != 0x10BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCC8u; }
        if (ctx->pc != 0x10BCC8u) { return; }
    }
    ctx->pc = 0x10BCC8u;
    // 0x10bcc8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10BCC8u;
    {
        const bool branch_taken_0x10bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCC8u;
            // 0x10bccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcc8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BCD0u;
label_10bcd0:
    // 0x10bcd0: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10BCD0u;
    {
        const bool branch_taken_0x10bcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10bcd0) {
            ctx->pc = 0x10BCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCD0u;
            // 0x10bcd4: 0xaf808390  sw          $zero, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD0Cu;
            goto label_10bd0c;
        }
    }
    ctx->pc = 0x10BCD8u;
    // 0x10bcd8: 0xc045082  jal         func_114208
    ctx->pc = 0x10BCD8u;
    SET_GPR_U32(ctx, 31, 0x10BCE0u);
    ctx->pc = 0x10BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCD8u;
            // 0x10bcdc: 0x8f84838c  lw          $a0, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114208u;
    if (runtime->hasFunction(0x114208u)) {
        auto targetFn = runtime->lookupFunction(0x114208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCE0u; }
        if (ctx->pc != 0x10BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCE0u; }
        if (ctx->pc != 0x10BCE0u) { return; }
    }
    ctx->pc = 0x10BCE0u;
    // 0x10bce0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BCE0u;
    {
        const bool branch_taken_0x10bce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bce0) {
            ctx->pc = 0x10BCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCE0u;
            // 0x10bce4: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BCF8u;
            goto label_10bcf8;
        }
    }
    ctx->pc = 0x10BCE8u;
    // 0x10bce8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bcec: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BCECu;
    SET_GPR_U32(ctx, 31, 0x10BCF4u);
    ctx->pc = 0x10BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCECu;
            // 0x10bcf0: 0x24843688  addiu       $a0, $a0, 0x3688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCF4u; }
        if (ctx->pc != 0x10BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCF4u; }
        if (ctx->pc != 0x10BCF4u) { return; }
    }
    ctx->pc = 0x10BCF4u;
    // 0x10bcf4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_10bcf8:
    // 0x10bcf8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BCF8u;
    SET_GPR_U32(ctx, 31, 0x10BD00u);
    ctx->pc = 0x10BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCF8u;
            // 0x10bcfc: 0x248436a8  addiu       $a0, $a0, 0x36A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD00u; }
        if (ctx->pc != 0x10BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD00u; }
        if (ctx->pc != 0x10BD00u) { return; }
    }
    ctx->pc = 0x10BD00u;
    // 0x10bd00: 0xc04a996  jal         func_12A658
    ctx->pc = 0x10BD00u;
    SET_GPR_U32(ctx, 31, 0x10BD08u);
    ctx->pc = 0x10BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD00u;
            // 0x10bd04: 0x8f8483f0  lw          $a0, -0x7C10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A658u;
    if (runtime->hasFunction(0x12A658u)) {
        auto targetFn = runtime->lookupFunction(0x12A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD08u; }
        if (ctx->pc != 0x10BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x12a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD08u; }
        if (ctx->pc != 0x10BD08u) { return; }
    }
    ctx->pc = 0x10BD08u;
    // 0x10bd08: 0xaf808390  sw          $zero, -0x7C70($gp)
    ctx->pc = 0x10bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10bd0c:
    // 0x10bd0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bd10:
    // 0x10bd10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10bd14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10bd14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bd18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10bd18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bd1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10bd1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bd20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10bd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bd24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10bd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bd28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD2Cu;
            // 0x10bd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BA70u: goto label_10ba70;
            case 0x10BA9Cu: goto label_10ba9c;
            case 0x10BAD0u: goto label_10bad0;
            case 0x10BB50u: goto label_10bb50;
            case 0x10BB58u: goto label_10bb58;
            case 0x10BB64u: goto label_10bb64;
            case 0x10BB6Cu: goto label_10bb6c;
            case 0x10BBE0u: goto label_10bbe0;
            case 0x10BC24u: goto label_10bc24;
            case 0x10BC40u: goto label_10bc40;
            case 0x10BCA0u: goto label_10bca0;
            case 0x10BCB0u: goto label_10bcb0;
            case 0x10BCD0u: goto label_10bcd0;
            case 0x10BCF8u: goto label_10bcf8;
            case 0x10BD0Cu: goto label_10bd0c;
            case 0x10BD10u: goto label_10bd10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BD34u;
}
