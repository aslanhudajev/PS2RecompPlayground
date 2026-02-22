#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpdiv
// Address: 0x128f88 - 0x1290f0
void dpdiv_0x128f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128f88u;

    // 0x128f88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x128f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x128f8c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x128f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x128f90: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x128f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x128f94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x128f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128f98: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x128f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x128f9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x128f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x128fa0: 0xc04a250  jal         func_128940
    ctx->pc = 0x128FA0u;
    SET_GPR_U32(ctx, 31, 0x128FA8u);
    ctx->pc = 0x128FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128FA0u;
            // 0x128fa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FA8u; }
        if (ctx->pc != 0x128FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FA8u; }
        if (ctx->pc != 0x128FA8u) { return; }
    }
    ctx->pc = 0x128FA8u;
    // 0x128fa8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x128fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128fac: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x128facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x128fb0: 0xc04a250  jal         func_128940
    ctx->pc = 0x128FB0u;
    SET_GPR_U32(ctx, 31, 0x128FB8u);
    ctx->pc = 0x128FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128FB0u;
            // 0x128fb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FB8u; }
        if (ctx->pc != 0x128FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FB8u; }
        if (ctx->pc != 0x128FB8u) { return; }
    }
    ctx->pc = 0x128FB8u;
    // 0x128fb8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128fbc: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x128fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128fc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128FC0u;
    {
        const bool branch_taken_0x128fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FC0u;
            // 0x128fc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fc0) {
            ctx->pc = 0x128FD0u;
            goto label_128fd0;
        }
    }
    ctx->pc = 0x128FC8u;
    // 0x128fc8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x128FC8u;
    {
        const bool branch_taken_0x128fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FC8u;
            // 0x128fcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fc8) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x128FD0u;
label_128fd0:
    // 0x128fd0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x128fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128fd4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x128fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128fd8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x128FD8u;
    {
        const bool branch_taken_0x128fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FD8u;
            // 0x128fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd8) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x128FE0u;
    // 0x128fe0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x128fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128fe4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x128fe4u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)4u)));
    // 0x128fe8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x128fec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x128fecu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x128ff0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128FF0u;
    {
        const bool branch_taken_0x128ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FF0u;
            // 0x128ff4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ff0) {
            ctx->pc = 0x129004u;
            goto label_129004;
        }
    }
    ctx->pc = 0x128FF8u;
    // 0x128ff8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x128ff8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)2u)));
    // 0x128ffc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128FFCu;
    {
        const bool branch_taken_0x128ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128FFCu;
            // 0x129000: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ffc) {
            ctx->pc = 0x129018u;
            goto label_129018;
        }
    }
    ctx->pc = 0x129004u;
label_129004:
    // 0x129004: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x129004u;
    {
        const bool branch_taken_0x129004 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x129008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129004u;
            // 0x129008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129004) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x12900Cu;
    // 0x12900c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x12900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x129010: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x129010u;
    {
        const bool branch_taken_0x129010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129010u;
            // 0x129014: 0x2444e4f0  addiu       $a0, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129010) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x129018u;
label_129018:
    // 0x129018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12901Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129018u;
            // 0x12901c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129018) {
            ctx->pc = 0x129030u;
            goto label_129030;
        }
    }
    ctx->pc = 0x129020u;
    // 0x129020: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x129020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x129024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129028: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x129028u;
    {
        const bool branch_taken_0x129028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129028u;
            // 0x12902c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129028) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x129030u;
label_129030:
    // 0x129030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129030u;
    {
        const bool branch_taken_0x129030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129030u;
            // 0x129034: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129030) {
            ctx->pc = 0x129048u;
            goto label_129048;
        }
    }
    ctx->pc = 0x129038u;
    // 0x129038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x129038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12903c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129040: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x129040u;
    {
        const bool branch_taken_0x129040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129040u;
            // 0x129044: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129040) {
            ctx->pc = 0x1290D8u;
            goto label_1290d8;
        }
    }
    ctx->pc = 0x129048u;
label_129048:
    // 0x129048: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12904c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x12904cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129050: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x129050u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129054: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x129054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129058: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x129058u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12905c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x129060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12905Cu;
            // 0x129060: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129074u;
            goto label_129074;
        }
    }
    ctx->pc = 0x129064u;
    // 0x129064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129068: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x129068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x12906c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x129070: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x129070u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_129074:
    // 0x129074: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x129074u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x129078: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x129078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x12907c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12907Cu;
    {
        const bool branch_taken_0x12907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12907Cu;
            // 0x129080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12907c) {
            ctx->pc = 0x12908Cu;
            goto label_12908c;
        }
    }
    ctx->pc = 0x129084u;
    // 0x129084: 0x0  nop
    ctx->pc = 0x129084u;
    // NOP
label_129088:
    // 0x129088: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x129088u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_12908c:
    // 0x12908c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12908Cu;
    {
        const bool branch_taken_0x12908c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12908c) {
            ctx->pc = 0x129090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12908Cu;
            // 0x129090: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290A0u;
            goto label_1290a0;
        }
    }
    ctx->pc = 0x129094u;
    // 0x129094: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x129094u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x129098: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x129098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x12909c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x12909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1290a0:
    // 0x1290a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1290A0u;
    {
        const bool branch_taken_0x1290a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1290A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290A0u;
            // 0x1290a4: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290a0) {
            ctx->pc = 0x129088u;
            goto label_129088;
        }
    }
    ctx->pc = 0x1290A8u;
    // 0x1290a8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1290a8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)255u)));
    // 0x1290ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1290b0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1290B0u;
    {
        const bool branch_taken_0x1290b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1290b0) {
            ctx->pc = 0x1290B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1290B0u;
            // 0x1290b4: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1290D4u;
            goto label_1290d4;
        }
    }
    ctx->pc = 0x1290B8u;
    // 0x1290b8: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x1290b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)256u)));
    // 0x1290bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1290BCu;
    {
        const bool branch_taken_0x1290bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290BCu;
            // 0x1290c0: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290bc) {
            ctx->pc = 0x1290CCu;
            goto label_1290cc;
        }
    }
    ctx->pc = 0x1290C4u;
    // 0x1290c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1290C4u;
    {
        const bool branch_taken_0x1290c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290C4u;
            // 0x1290c8: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290c4) {
            ctx->pc = 0x1290D0u;
            goto label_1290d0;
        }
    }
    ctx->pc = 0x1290CCu;
label_1290cc:
    // 0x1290cc: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1290ccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1290d0:
    // 0x1290d0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1290d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_1290d4:
    // 0x1290d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1290d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1290d8:
    // 0x1290d8: 0xc04a204  jal         func_128810
    ctx->pc = 0x1290D8u;
    SET_GPR_U32(ctx, 31, 0x1290E0u);
    ctx->pc = 0x128810u;
    if (runtime->hasFunction(0x128810u)) {
        auto targetFn = runtime->lookupFunction(0x128810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1290E0u; }
        if (ctx->pc != 0x1290E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1290E0u; }
        if (ctx->pc != 0x1290E0u) { return; }
    }
    ctx->pc = 0x1290E0u;
    // 0x1290e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1290e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1290e4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1290e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1290e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1290E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1290ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1290E8u;
            // 0x1290ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128FD0u: goto label_128fd0;
            case 0x129004u: goto label_129004;
            case 0x129018u: goto label_129018;
            case 0x129030u: goto label_129030;
            case 0x129048u: goto label_129048;
            case 0x129074u: goto label_129074;
            case 0x129088u: goto label_129088;
            case 0x12908Cu: goto label_12908c;
            case 0x1290A0u: goto label_1290a0;
            case 0x1290CCu: goto label_1290cc;
            case 0x1290D0u: goto label_1290d0;
            case 0x1290D4u: goto label_1290d4;
            case 0x1290D8u: goto label_1290d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1290F0u;
}
