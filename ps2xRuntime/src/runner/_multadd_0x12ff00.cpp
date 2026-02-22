#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _multadd
// Address: 0x12ff00 - 0x130014
void _multadd_0x12ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12ff00u;

    // 0x12ff00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12ff04: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x12ff04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12ff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12ff0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12ff0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12ff14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12ff14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12ff1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12ff1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12ff24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff2c: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12ff30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12ff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12ff34: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff38: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x12ff38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ff3c: 0x0  nop
    ctx->pc = 0x12ff3cu;
    // NOP
label_12ff40:
    // 0x12ff40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ff44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12ff44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12ff48: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x12ff48u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12ff4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x12ff4cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x12ff50: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x12ff50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12ff54: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x12ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ff58: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x12ff58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12ff5c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x12ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12ff60: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x12ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12ff64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ff68: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x12ff68u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x12ff6c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x12ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12ff70: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ff74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12ff78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12ff7c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12FF7Cu;
    {
        const bool branch_taken_0x12ff7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF7Cu;
            // 0x12ff80: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff7c) {
            ctx->pc = 0x12FF40u;
            goto label_12ff40;
        }
    }
    ctx->pc = 0x12FF84u;
    // 0x12ff84: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12FF84u;
    {
        const bool branch_taken_0x12ff84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF84u;
            // 0x12ff88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff84) {
            ctx->pc = 0x12FFF4u;
            goto label_12fff4;
        }
    }
    ctx->pc = 0x12FF8Cu;
    // 0x12ff8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12ff90: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x12ff90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ff94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12FF94u;
    {
        const bool branch_taken_0x12ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF94u;
            // 0x12ff98: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff94) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FF9Cu;
    // 0x12ff9c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ffa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa4: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x12FFA4u;
    SET_GPR_U32(ctx, 31, 0x12FFACu);
    ctx->pc = 0x12FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFA4u;
            // 0x12ffa8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFACu; }
        if (ctx->pc != 0x12FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFACu; }
        if (ctx->pc != 0x12FFACu) { return; }
    }
    ctx->pc = 0x12FFACu;
    // 0x12ffac: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x12ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ffb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ffb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffb4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x12ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x12ffb8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x12ffbc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12ffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ffc0: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x12FFC0u;
    SET_GPR_U32(ctx, 31, 0x12FFC8u);
    ctx->pc = 0x12FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFC0u;
            // 0x12ffc4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFC8u; }
        if (ctx->pc != 0x12FFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFC8u; }
        if (ctx->pc != 0x12FFC8u) { return; }
    }
    ctx->pc = 0x12FFC8u;
    // 0x12ffc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffcc: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12FFCCu;
    SET_GPR_U32(ctx, 31, 0x12FFD4u);
    ctx->pc = 0x12FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFCCu;
            // 0x12ffd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFD4u; }
        if (ctx->pc != 0x12FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFD4u; }
        if (ctx->pc != 0x12FFD4u) { return; }
    }
    ctx->pc = 0x12FFD4u;
    // 0x12ffd4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12ffd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffd8: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12ffdc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_12ffe0:
    // 0x12ffe0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x12ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x12ffe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12ffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12ffe8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x12ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x12ffec: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x12ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x12fff0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12fff4:
    // 0x12fff4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12fff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fff8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12fff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fffc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12fffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x130000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x130004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13000c: 0x3e00008  jr          $ra
    ctx->pc = 0x13000Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13000Cu;
            // 0x130010: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FF40u: goto label_12ff40;
            case 0x12FFE0u: goto label_12ffe0;
            case 0x12FFF4u: goto label_12fff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130014u;
}
