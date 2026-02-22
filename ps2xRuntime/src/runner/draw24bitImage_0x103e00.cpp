#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw24bitImage
// Address: 0x103e00 - 0x1040a4
void draw24bitImage_0x103e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103e00u;

    // 0x103e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x103e04: 0x8f8282b4  lw          $v0, -0x7D4C($gp)
    ctx->pc = 0x103e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x103e08: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x103e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x103e0c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x103e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x103e10: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e14: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x103e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x103e18: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x103e18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e1c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x103e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x103e20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x103e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103e28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103e30: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x103e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x103e38: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x103e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e3c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x103e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x103e40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x103e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103e44: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x103E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103E44u;
            // 0x103e48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103E5Cu;
            goto label_103e5c;
        }
    }
    ctx->pc = 0x103E4Cu;
    // 0x103e4c: 0x24052b00  addiu       $a1, $zero, 0x2B00
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11008));
    // 0x103e50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x103e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e54: 0xc040d1c  jal         func_103470
    ctx->pc = 0x103E54u;
    SET_GPR_U32(ctx, 31, 0x103E5Cu);
    ctx->pc = 0x103E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103E54u;
            // 0x103e58: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103470u;
    if (runtime->hasFunction(0x103470u)) {
        auto targetFn = runtime->lookupFunction(0x103470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E5Cu; }
        if (ctx->pc != 0x103E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load24bitImage_0x103470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E5Cu; }
        if (ctx->pc != 0x103E5Cu) { return; }
    }
    ctx->pc = 0x103E5Cu;
label_103e5c:
    // 0x103e5c: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x103e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103e60: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x103e60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103e64: 0xaf8082b4  sw          $zero, -0x7D4C($gp)
    ctx->pc = 0x103e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 0));
    // 0x103e68: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103e6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x103e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x103e70: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103e74: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x103e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x103e78: 0x34c60007  ori         $a2, $a2, 0x7
    ctx->pc = 0x103e78u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)7u)));
    // 0x103e7c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x103e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x103e80: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x103e84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x103e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e88: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x103e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x103e8c: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x103e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x103e90: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x103e90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x103e94: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x103e94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x103e98: 0xc040a9e  jal         func_102A78
    ctx->pc = 0x103E98u;
    SET_GPR_U32(ctx, 31, 0x103EA0u);
    ctx->pc = 0x103E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103E98u;
            // 0x103e9c: 0xfc400020  sd          $zero, 0x20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A78u;
    if (runtime->hasFunction(0x102A78u)) {
        auto targetFn = runtime->lookupFunction(0x102A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EA0u; }
        if (ctx->pc != 0x103EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EA0u; }
        if (ctx->pc != 0x103EA0u) { return; }
    }
    ctx->pc = 0x103EA0u;
    // 0x103ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ea4: 0xc040a9e  jal         func_102A78
    ctx->pc = 0x103EA4u;
    SET_GPR_U32(ctx, 31, 0x103EACu);
    ctx->pc = 0x103EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103EA4u;
            // 0x103ea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A78u;
    if (runtime->hasFunction(0x102A78u)) {
        auto targetFn = runtime->lookupFunction(0x102A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EACu; }
        if (ctx->pc != 0x103EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EACu; }
        if (ctx->pc != 0x103EACu) { return; }
    }
    ctx->pc = 0x103EACu;
    // 0x103eac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103eb0: 0x2684003f  addiu       $a0, $s4, 0x3F
    ctx->pc = 0x103eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 63));
    // 0x103eb4: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x103eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x103eb8: 0x283200b  movn        $a0, $s4, $v1
    ctx->pc = 0x103eb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
    // 0x103ebc: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x103ec0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x103ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x103ec4: 0x1087b8  dsll        $s0, $s0, 30
    ctx->pc = 0x103ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x103ec8: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x103ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x103ecc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x103eccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x103ed0: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x103ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x103ed4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x103ed4u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x103ed8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x103ed8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x103edc: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x103edcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x103ee0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x103ee4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x103ee8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x103ee8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16u)));
    // 0x103eec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x103eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x103ef0: 0x34422b00  ori         $v0, $v0, 0x2B00
    ctx->pc = 0x103ef0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11008u)));
    // 0x103ef4: 0x8f9882b8  lw          $t8, -0x7D48($gp)
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103ef8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x103ef8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x103efc: 0x115043  sra         $t2, $s1, 1
    ctx->pc = 0x103efcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 17), 1));
    // 0x103f00: 0x124843  sra         $t1, $s2, 1
    ctx->pc = 0x103f00u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 18), 1));
    // 0x103f04: 0x2eaa823  subu        $s5, $s7, $t2
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x103f08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103f0c: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x103f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x103f10: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x103f14: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x103f18: 0x3c0c7f7f  lui         $t4, 0x7F7F
    ctx->pc = 0x103f18u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32639 << 16));
    // 0x103f1c: 0x358c7f7f  ori         $t4, $t4, 0x7F7F
    ctx->pc = 0x103f1cu;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), _mm_cvtsi32_si128((int)32639u)));
    // 0x103f20: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f24: 0x240e0047  addiu       $t6, $zero, 0x47
    ctx->pc = 0x103f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x103f28: 0x340f807f  ori         $t7, $zero, 0x807F
    ctx->pc = 0x103f28u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32895u)));
    // 0x103f2c: 0x2411003b  addiu       $s1, $zero, 0x3B
    ctx->pc = 0x103f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x103f30: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x103f30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x103f34: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x103f34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x103f38: 0x36528001  ori         $s2, $s2, 0x8001
    ctx->pc = 0x103f38u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)32769u)));
    // 0x103f3c: 0x3c134343  lui         $s3, 0x4343
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17219 << 16));
    // 0x103f40: 0x36734343  ori         $s3, $s3, 0x4343
    ctx->pc = 0x103f40u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)17219u)));
    // 0x103f44: 0xff040030  sd          $a0, 0x30($t8)
    ctx->pc = 0x103f44u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 4));
    // 0x103f48: 0x3c98023  subu        $s0, $fp, $t1
    ctx->pc = 0x103f48u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x103f4c: 0xff020038  sd          $v0, 0x38($t8)
    ctx->pc = 0x103f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x103f50: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x103f50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x103f54: 0xff050040  sd          $a1, 0x40($t8)
    ctx->pc = 0x103f54u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 5));
    // 0x103f58: 0x270600b0  addiu       $a2, $t8, 0xB0
    ctx->pc = 0x103f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 176));
    // 0x103f5c: 0xff070050  sd          $a3, 0x50($t8)
    ctx->pc = 0x103f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 7));
    // 0x103f60: 0x2ea5021  addu        $t2, $s7, $t2
    ctx->pc = 0x103f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x103f64: 0xff0b0058  sd          $t3, 0x58($t8)
    ctx->pc = 0x103f64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 11));
    // 0x103f68: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x103f68u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x103f6c: 0xff0c0060  sd          $t4, 0x60($t8)
    ctx->pc = 0x103f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 12));
    // 0x103f70: 0x270200d0  addiu       $v0, $t8, 0xD0
    ctx->pc = 0x103f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 208));
    // 0x103f74: 0xff110088  sd          $s1, 0x88($t8)
    ctx->pc = 0x103f74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 17));
    // 0x103f78: 0x165900  sll         $t3, $s6, 4
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x103f7c: 0xff120090  sd          $s2, 0x90($t8)
    ctx->pc = 0x103f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 18));
    // 0x103f80: 0x3c94821  addu        $t1, $fp, $t1
    ctx->pc = 0x103f80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x103f84: 0xff130098  sd          $s3, 0x98($t8)
    ctx->pc = 0x103f84u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 19));
    // 0x103f88: 0x270500f0  addiu       $a1, $t8, 0xF0
    ctx->pc = 0x103f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 240));
    // 0x103f8c: 0xaf1500b0  sw          $s5, 0xB0($t8)
    ctx->pc = 0x103f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 21));
    // 0x103f90: 0x27070110  addiu       $a3, $t8, 0x110
    ctx->pc = 0x103f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 272));
    // 0x103f94: 0xff0d0068  sd          $t5, 0x68($t8)
    ctx->pc = 0x103f94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 13));
    // 0x103f98: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x103f9c: 0xff0e0078  sd          $t6, 0x78($t8)
    ctx->pc = 0x103f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 14));
    // 0x103fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fa4: 0xff0f0080  sd          $t7, 0x80($t8)
    ctx->pc = 0x103fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 15));
    // 0x103fa8: 0xff000048  sd          $zero, 0x48($t8)
    ctx->pc = 0x103fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x103fac: 0xff000070  sd          $zero, 0x70($t8)
    ctx->pc = 0x103facu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 0));
    // 0x103fb0: 0xaf0000a0  sw          $zero, 0xA0($t8)
    ctx->pc = 0x103fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 0));
    // 0x103fb4: 0xaf0000a4  sw          $zero, 0xA4($t8)
    ctx->pc = 0x103fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 164), GPR_U32(ctx, 0));
    // 0x103fb8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x103fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x103fbc: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x103fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x103fc0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x103fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x103fc4: 0xaf1400c0  sw          $s4, 0xC0($t8)
    ctx->pc = 0x103fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 20));
    // 0x103fc8: 0xaf0000c4  sw          $zero, 0xC4($t8)
    ctx->pc = 0x103fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 196), GPR_U32(ctx, 0));
    // 0x103fcc: 0xaf0a00d0  sw          $t2, 0xD0($t8)
    ctx->pc = 0x103fccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 10));
    // 0x103fd0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x103fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x103fd4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x103fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103fd8: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x103fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x103fdc: 0xaf1500f0  sw          $s5, 0xF0($t8)
    ctx->pc = 0x103fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 21));
    // 0x103fe0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103fe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103fe4: 0xaf0000e0  sw          $zero, 0xE0($t8)
    ctx->pc = 0x103fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 0));
    // 0x103fe8: 0xaf0b00e4  sw          $t3, 0xE4($t8)
    ctx->pc = 0x103fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 228), GPR_U32(ctx, 11));
    // 0x103fec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x103fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103ff0: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x103ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x103ff4: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x103ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x103ff8: 0xaf140100  sw          $s4, 0x100($t8)
    ctx->pc = 0x103ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 20));
    // 0x103ffc: 0xaf0b0104  sw          $t3, 0x104($t8)
    ctx->pc = 0x103ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 260), GPR_U32(ctx, 11));
    // 0x104000: 0xaf0a0110  sw          $t2, 0x110($t8)
    ctx->pc = 0x104000u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 10));
    // 0x104004: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x104004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x104008: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x104008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x10400c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x10400cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x104010: 0x7f020120  sq          $v0, 0x120($t8)
    ctx->pc = 0x104010u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 288), GPR_VEC(ctx, 2));
    // 0x104014: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x104014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x104018: 0xaf0c0120  sw          $t4, 0x120($t8)
    ctx->pc = 0x104018u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 288), GPR_U32(ctx, 12));
    // 0x10401c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x10401cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)17u)));
    // 0x104020: 0xc043948  jal         func_10E520
    ctx->pc = 0x104020u;
    SET_GPR_U32(ctx, 31, 0x104028u);
    ctx->pc = 0x104024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104020u;
            // 0x104024: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104028u; }
        if (ctx->pc != 0x104028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104028u; }
        if (ctx->pc != 0x104028u) { return; }
    }
    ctx->pc = 0x104028u;
    // 0x104028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10402c: 0xc043322  jal         func_10CC88
    ctx->pc = 0x10402Cu;
    SET_GPR_U32(ctx, 31, 0x104034u);
    ctx->pc = 0x104030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10402Cu;
            // 0x104030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104034u; }
        if (ctx->pc != 0x104034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104034u; }
        if (ctx->pc != 0x104034u) { return; }
    }
    ctx->pc = 0x104034u;
    // 0x104034: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x104034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x104038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10403c: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x10403Cu;
    SET_GPR_U32(ctx, 31, 0x104044u);
    ctx->pc = 0x104040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10403Cu;
            // 0x104040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104044u; }
        if (ctx->pc != 0x104044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104044u; }
        if (ctx->pc != 0x104044u) { return; }
    }
    ctx->pc = 0x104044u;
    // 0x104044: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x104044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x104048: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x104048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x10404c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10404cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x104050: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x104050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x104054: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x104054u;
    SET_GPR_U32(ctx, 31, 0x10405Cu);
    ctx->pc = 0x104058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104054u;
            // 0x104058: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10405Cu; }
        if (ctx->pc != 0x10405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10405Cu; }
        if (ctx->pc != 0x10405Cu) { return; }
    }
    ctx->pc = 0x10405Cu;
    // 0x10405c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104060: 0xc043322  jal         func_10CC88
    ctx->pc = 0x104060u;
    SET_GPR_U32(ctx, 31, 0x104068u);
    ctx->pc = 0x104064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104060u;
            // 0x104064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104068u; }
        if (ctx->pc != 0x104068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104068u; }
        if (ctx->pc != 0x104068u) { return; }
    }
    ctx->pc = 0x104068u;
    // 0x104068: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x104068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10406c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104070: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x104070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104078: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x104078u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10407c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x10407cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104080: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x104080u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104084: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104088: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10408c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10408cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10409c: 0x804372a  j           func_10DCA8
    ctx->pc = 0x10409Cu;
    ctx->pc = 0x1040A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10409Cu;
            // 0x1040a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1040A4u;
}
