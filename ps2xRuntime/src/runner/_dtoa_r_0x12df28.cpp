#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dtoa_r
// Address: 0x12df28 - 0x12f0f4
void _dtoa_r_0x12df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12df28u;

    // 0x12df28: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x12df28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12df2c: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x12df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x12df30: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x12df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x12df34: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12df34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df38: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12df3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12df3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df40: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x12df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x12df44: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x12df44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df48: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x12df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x12df4c: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x12df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x12df50: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x12df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x12df54: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x12df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x12df58: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x12df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12df5c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x12df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x12df60: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12df60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12df64: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x12df64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x12df68: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x12df68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x12df6c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x12df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x12df70: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x12DF70u;
    {
        const bool branch_taken_0x12df70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF70u;
            // 0x12df74: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df70) {
            ctx->pc = 0x12DF9Cu;
            goto label_12df9c;
        }
    }
    ctx->pc = 0x12DF78u;
    // 0x12df78: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x12df78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x12df7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df80: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x12df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df84: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x12df84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x12df88: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x12df8c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x12df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x12df90: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12DF90u;
    SET_GPR_U32(ctx, 31, 0x12DF98u);
    ctx->pc = 0x12DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DF90u;
            // 0x12df94: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF98u; }
        if (ctx->pc != 0x12DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF98u; }
        if (ctx->pc != 0x12DF98u) { return; }
    }
    ctx->pc = 0x12DF98u;
    // 0x12df98: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x12df98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_12df9c:
    // 0x12df9c: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x12df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x12dfa0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dfa4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12dfa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12dfa8: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x12DFA8u;
    {
        const bool branch_taken_0x12dfa8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12dfa8) {
            ctx->pc = 0x12DFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFA8u;
            // 0x12dfac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DFDCu;
            goto label_12dfdc;
        }
    }
    ctx->pc = 0x12DFB0u;
    // 0x12dfb0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x12dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x12dfb4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12dfb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12dfbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12dfbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12dfc0: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x12dfc0u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 3)));
    // 0x12dfc4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12dfc4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12dfc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dfcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dfd0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12dfd4: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x12dfd4u;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x12dfd8: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x12dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_12dfdc:
    // 0x12dfdc: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x12dfdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dfe0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12dfe0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12dfe4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12dfe8: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x12dfe8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x12dfec: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12DFECu;
    {
        const bool branch_taken_0x12dfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DFECu;
            // 0x12dff0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfec) {
            ctx->pc = 0x12E048u;
            goto label_12e048;
        }
    }
    ctx->pc = 0x12DFF4u;
    // 0x12dff4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dff8: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x12dffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e000: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12e000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12e004: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x12e004u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x12e008: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E008u;
    {
        const bool branch_taken_0x12e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E008u;
            // 0x12e00c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e008) {
            ctx->pc = 0x12E01Cu;
            goto label_12e01c;
        }
    }
    ctx->pc = 0x12E010u;
    // 0x12e010: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12e014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E014u;
    {
        const bool branch_taken_0x12e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E014u;
            // 0x12e018: 0x245558f0  addiu       $s5, $v0, 0x58F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 22768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e014) {
            ctx->pc = 0x12E024u;
            goto label_12e024;
        }
    }
    ctx->pc = 0x12E01Cu;
label_12e01c:
    // 0x12e01c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12e020: 0x24555900  addiu       $s5, $v0, 0x5900
    ctx->pc = 0x12e020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
label_12e024:
    // 0x12e024: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12e028: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E028u;
    {
        const bool branch_taken_0x12e028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E028u;
            // 0x12e02c: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e028) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E030u;
    // 0x12e030: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x12e030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x12e034: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x12e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x12e038: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x12e038u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x12e03c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12e040: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12E040u;
    {
        const bool branch_taken_0x12e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E040u;
            // 0x12e044: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e040) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E048u;
label_12e048:
    // 0x12e048: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E048u;
    SET_GPR_U32(ctx, 31, 0x12E050u);
    ctx->pc = 0x12E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E048u;
            // 0x12e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E050u; }
        if (ctx->pc != 0x12E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E050u; }
        if (ctx->pc != 0x12E050u) { return; }
    }
    ctx->pc = 0x12E050u;
    // 0x12e050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12E050u;
    {
        const bool branch_taken_0x12e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E050u;
            // 0x12e054: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e050) {
            ctx->pc = 0x12E088u;
            goto label_12e088;
        }
    }
    ctx->pc = 0x12E058u;
    // 0x12e058: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e060: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x12e060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12e064: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12e064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12e068: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12e06c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E06Cu;
    {
        const bool branch_taken_0x12e06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E06Cu;
            // 0x12e070: 0x24755908  addiu       $s5, $v1, 0x5908 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 22792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e06c) {
            ctx->pc = 0x12E080u;
            goto label_12e080;
        }
    }
    ctx->pc = 0x12E074u;
    // 0x12e074: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12e078: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12e07c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12e080:
    // 0x12e080: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x12E080u;
    {
        const bool branch_taken_0x12e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E080u;
            // 0x12e084: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e080) {
            ctx->pc = 0x12F0C4u;
            goto label_12f0c4;
        }
    }
    ctx->pc = 0x12E088u;
label_12e088:
    // 0x12e088: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12e088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e08c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e090: 0xc04c2e6  jal         func_130B98
    ctx->pc = 0x12E090u;
    SET_GPR_U32(ctx, 31, 0x12E098u);
    ctx->pc = 0x12E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E090u;
            // 0x12e094: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B98u;
    if (runtime->hasFunction(0x130B98u)) {
        auto targetFn = runtime->lookupFunction(0x130B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E098u; }
        if (ctx->pc != 0x12E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x130b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E098u; }
        if (ctx->pc != 0x12E098u) { return; }
    }
    ctx->pc = 0x12E098u;
    // 0x12e098: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x12e098u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x12e09c: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x12e09cu;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x12e0a0: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E0A0u;
    {
        const bool branch_taken_0x12e0a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0A0u;
            // 0x12e0a4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0a0) {
            ctx->pc = 0x12E0F8u;
            goto label_12e0f8;
        }
    }
    ctx->pc = 0x12E0A8u;
    // 0x12e0a8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x12e0a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0ac: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x12e0b0: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x12e0b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x12e0b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12e0b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12e0b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12e0b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12e0bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x12e0c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12e0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12e0c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e0c8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x12e0c8u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 5)));
    // 0x12e0cc: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x12e0ccu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
    // 0x12e0d0: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x12e0d4: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x12e0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x12e0d8: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x12e0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x12e0dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12e0dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12e0e0: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x12e0e0u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 5)));
    // 0x12e0e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12e0e8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x12e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x12e0ec: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x12e0ecu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x12e0f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E0F0u;
            // 0x12e0f4: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E190u;
            goto label_12e190;
        }
    }
    ctx->pc = 0x12E0F8u;
label_12e0f8:
    // 0x12e0f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e0fc: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x12e0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12e100: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x12e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12e104: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x12e108: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x12e108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x12e10c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E10Cu;
    {
        const bool branch_taken_0x12e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E10Cu;
            // 0x12e110: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e10c) {
            ctx->pc = 0x12E134u;
            goto label_12e134;
        }
    }
    ctx->pc = 0x12E114u;
    // 0x12e114: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x12e118: 0x141823  negu        $v1, $s4
    ctx->pc = 0x12e118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x12e11c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x12e120: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12e120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12e124: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x12e124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x12e128: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12e12c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E12Cu;
    {
        const bool branch_taken_0x12e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E12Cu;
            // 0x12e130: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e12c) {
            ctx->pc = 0x12E140u;
            goto label_12e140;
        }
    }
    ctx->pc = 0x12E134u;
label_12e134:
    // 0x12e134: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x12e134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x12e138: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12e138u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12e13c: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x12e13cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12e140:
    // 0x12e140: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E140u;
    SET_GPR_U32(ctx, 31, 0x12E148u);
    ctx->pc = 0x12E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E140u;
            // 0x12e144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E148u; }
        if (ctx->pc != 0x12E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E148u; }
        if (ctx->pc != 0x12E148u) { return; }
    }
    ctx->pc = 0x12E148u;
    // 0x12e148: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E148u;
    {
        const bool branch_taken_0x12e148 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12E14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E148u;
            // 0x12e14c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e148) {
            ctx->pc = 0x12E164u;
            goto label_12e164;
        }
    }
    ctx->pc = 0x12E150u;
    // 0x12e150: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x12e150u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33760u)));
    // 0x12e154: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12e154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12e158: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E158u;
    SET_GPR_U32(ctx, 31, 0x12E160u);
    ctx->pc = 0x12E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E158u;
            // 0x12e15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E160u; }
        if (ctx->pc != 0x12E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E160u; }
        if (ctx->pc != 0x12E160u) { return; }
    }
    ctx->pc = 0x12E160u;
    // 0x12e160: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12e160u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e164:
    // 0x12e164: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12e168: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12e168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12e16c: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x12e16cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x12e170: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x12e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x12e174: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x12e174u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 4)));
    // 0x12e178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e184: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x12e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x12e188: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x12e18c: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x12e18cu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
label_12e190:
    // 0x12e190: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x12e190u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65504u)));
    // 0x12e194: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12e194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12e198: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E198u;
    SET_GPR_U32(ctx, 31, 0x12E1A0u);
    ctx->pc = 0x12E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E198u;
            // 0x12e19c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1A0u; }
        if (ctx->pc != 0x12E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1A0u; }
        if (ctx->pc != 0x12E1A0u) { return; }
    }
    ctx->pc = 0x12E1A0u;
    // 0x12e1a0: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x12e1a4: 0xdc255910  ld          $a1, 0x5910($at)
    ctx->pc = 0x12e1a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22800)));
    // 0x12e1a8: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E1A8u;
    SET_GPR_U32(ctx, 31, 0x12E1B0u);
    ctx->pc = 0x12E1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1A8u;
            // 0x12e1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1B0u; }
        if (ctx->pc != 0x12E1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1B0u; }
        if (ctx->pc != 0x12E1B0u) { return; }
    }
    ctx->pc = 0x12E1B0u;
    // 0x12e1b0: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x12e1b4: 0xdc255918  ld          $a1, 0x5918($at)
    ctx->pc = 0x12e1b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22808)));
    // 0x12e1b8: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E1B8u;
    SET_GPR_U32(ctx, 31, 0x12E1C0u);
    ctx->pc = 0x12E1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1B8u;
            // 0x12e1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1C0u; }
        if (ctx->pc != 0x12E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1C0u; }
        if (ctx->pc != 0x12E1C0u) { return; }
    }
    ctx->pc = 0x12E1C0u;
    // 0x12e1c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1c4: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E1C4u;
    SET_GPR_U32(ctx, 31, 0x12E1CCu);
    ctx->pc = 0x12E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1C4u;
            // 0x12e1c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1CCu; }
        if (ctx->pc != 0x12E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1CCu; }
        if (ctx->pc != 0x12E1CCu) { return; }
    }
    ctx->pc = 0x12E1CCu;
    // 0x12e1cc: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x12e1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x12e1d0: 0xdc255920  ld          $a1, 0x5920($at)
    ctx->pc = 0x12e1d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 22816)));
    // 0x12e1d4: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E1D4u;
    SET_GPR_U32(ctx, 31, 0x12E1DCu);
    ctx->pc = 0x12E1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1D4u;
            // 0x12e1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1DCu; }
        if (ctx->pc != 0x12E1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1DCu; }
        if (ctx->pc != 0x12E1DCu) { return; }
    }
    ctx->pc = 0x12E1DCu;
    // 0x12e1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1e0: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E1E0u;
    SET_GPR_U32(ctx, 31, 0x12E1E8u);
    ctx->pc = 0x12E1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1E0u;
            // 0x12e1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1E8u; }
        if (ctx->pc != 0x12E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1E8u; }
        if (ctx->pc != 0x12E1E8u) { return; }
    }
    ctx->pc = 0x12E1E8u;
    // 0x12e1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1ec: 0xc04a4c4  jal         func_129310
    ctx->pc = 0x12E1ECu;
    SET_GPR_U32(ctx, 31, 0x12E1F4u);
    ctx->pc = 0x12E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1ECu;
            // 0x12e1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129310u;
    if (runtime->hasFunction(0x129310u)) {
        auto targetFn = runtime->lookupFunction(0x129310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1F4u; }
        if (ctx->pc != 0x12E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1F4u; }
        if (ctx->pc != 0x12E1F4u) { return; }
    }
    ctx->pc = 0x12E1F4u;
    // 0x12e1f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1fc: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E1FCu;
    SET_GPR_U32(ctx, 31, 0x12E204u);
    ctx->pc = 0x12E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E1FCu;
            // 0x12e200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E204u; }
        if (ctx->pc != 0x12E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E204u; }
        if (ctx->pc != 0x12E204u) { return; }
    }
    ctx->pc = 0x12E204u;
    // 0x12e204: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E204u;
    {
        const bool branch_taken_0x12e204 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E204u;
            // 0x12e208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e204) {
            ctx->pc = 0x12E22Cu;
            goto label_12e22c;
        }
    }
    ctx->pc = 0x12E20Cu;
    // 0x12e20c: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E20Cu;
    SET_GPR_U32(ctx, 31, 0x12E214u);
    ctx->pc = 0x12E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E20Cu;
            // 0x12e210: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E214u; }
        if (ctx->pc != 0x12E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E214u; }
        if (ctx->pc != 0x12E214u) { return; }
    }
    ctx->pc = 0x12E214u;
    // 0x12e214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e218: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E218u;
    SET_GPR_U32(ctx, 31, 0x12E220u);
    ctx->pc = 0x12E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E218u;
            // 0x12e21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E220u; }
        if (ctx->pc != 0x12E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E220u; }
        if (ctx->pc != 0x12E220u) { return; }
    }
    ctx->pc = 0x12E220u;
    // 0x12e220: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e224: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x12e224u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x12e228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e22c:
    // 0x12e22c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x12e230: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x12e230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x12e234: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E234u;
    {
        const bool branch_taken_0x12e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E234u;
            // 0x12e238: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e234) {
            ctx->pc = 0x12E268u;
            goto label_12e268;
        }
    }
    ctx->pc = 0x12E23Cu;
    // 0x12e23c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x12e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x12e240: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x12e244: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e24c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12e250: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E250u;
    SET_GPR_U32(ctx, 31, 0x12E258u);
    ctx->pc = 0x12E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E250u;
            // 0x12e254: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E258u; }
        if (ctx->pc != 0x12E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E258u; }
        if (ctx->pc != 0x12E258u) { return; }
    }
    ctx->pc = 0x12E258u;
    // 0x12e258: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12e258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e25c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e260: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x12e260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12e264: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x12e264u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_12e268:
    // 0x12e268: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x12e268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12e26c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12e26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12e270: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E270u;
    {
        const bool branch_taken_0x12e270 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12e270) {
            ctx->pc = 0x12E274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E270u;
            // 0x12e274: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E284u;
            goto label_12e284;
        }
    }
    ctx->pc = 0x12E278u;
    // 0x12e278: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x12e278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x12e27c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E27Cu;
    {
        const bool branch_taken_0x12e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E27Cu;
            // 0x12e280: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e27c) {
            ctx->pc = 0x12E28Cu;
            goto label_12e28c;
        }
    }
    ctx->pc = 0x12E284u;
label_12e284:
    // 0x12e284: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x12e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x12e288: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x12e288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_12e28c:
    // 0x12e28c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E28Cu;
    {
        const bool branch_taken_0x12e28c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x12E290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E28Cu;
            // 0x12e290: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e28c) {
            ctx->pc = 0x12E2A8u;
            goto label_12e2a8;
        }
    }
    ctx->pc = 0x12E294u;
    // 0x12e294: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x12e294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x12e298: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12e29c: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x12e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x12e2a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12E2A0u;
    {
        const bool branch_taken_0x12e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2A0u;
            // 0x12e2a4: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2a0) {
            ctx->pc = 0x12E2C0u;
            goto label_12e2c0;
        }
    }
    ctx->pc = 0x12E2A8u;
label_12e2a8:
    // 0x12e2a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e2ac: 0x131023  negu        $v0, $s3
    ctx->pc = 0x12e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12e2b0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x12e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x12e2b4: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x12e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12e2b8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x12e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x12e2bc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12e2c0:
    // 0x12e2c0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e2c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12e2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e2c8: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x12e2c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12e2cc: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x12e2ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x12e2d0: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x12e2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12e2d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2D4u;
            // 0x12e2d8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E2E8u;
            goto label_12e2e8;
        }
    }
    ctx->pc = 0x12E2DCu;
    // 0x12e2dc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x12e2e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_12e2e8:
    // 0x12e2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e2ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e2f0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x12e2f4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x12e2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x12e2f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E2F8u;
            // 0x12e2fc: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E300u;
    // 0x12e300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e304: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
    // 0x12e308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e30c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e310: 0x800008  jr          $a0
    ctx->pc = 0x12E310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E318u: goto label_12e318;
            case 0x12E334u: goto label_12e334;
            case 0x12E338u: goto label_12e338;
            case 0x12E358u: goto label_12e358;
            case 0x12E35Cu: goto label_12e35c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E318u;
label_12e318:
    // 0x12e318: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e31c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e320: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12e320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12e324: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12e328: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12e32c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12E32Cu;
    {
        const bool branch_taken_0x12e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E32Cu;
            // 0x12e330: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e32c) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E334u;
label_12e334:
    // 0x12e334: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x12e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12e338:
    // 0x12e338: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12e33c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e340: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x12e340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e344: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x12e344u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x12e348: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x12e348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x12e34c: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x12e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x12e350: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12E350u;
    {
        const bool branch_taken_0x12e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E350u;
            // 0x12e354: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e350) {
            ctx->pc = 0x12E37Cu;
            goto label_12e37c;
        }
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x12e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12e35c:
    // 0x12e35c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12e360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e364: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x12e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12e368: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e36c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x12e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x12e370: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x12e370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x12e374: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x12e374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x12e378: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x12e378u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_12e37c:
    // 0x12e37c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e380: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x12e380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x12e384: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12E384u;
    {
        const bool branch_taken_0x12e384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E384u;
            // 0x12e388: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e384) {
            ctx->pc = 0x12E3C0u;
            goto label_12e3c0;
        }
    }
    ctx->pc = 0x12E38Cu;
    // 0x12e38c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e390: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x12e390u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x12e394: 0x0  nop
    ctx->pc = 0x12e394u;
    // NOP
label_12e398:
    // 0x12e398: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x12e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x12e39c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x12e39cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x12e3a0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x12e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12e3a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12e3a8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x12e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12e3ac: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x12e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x12e3b0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12E3B0u;
    {
        const bool branch_taken_0x12e3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e3b0) {
            ctx->pc = 0x12E398u;
            goto label_12e398;
        }
    }
    ctx->pc = 0x12E3B8u;
    // 0x12e3b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E3B8u;
    {
        const bool branch_taken_0x12e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3B8u;
            // 0x12e3bc: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3b8) {
            ctx->pc = 0x12E3CCu;
            goto label_12e3cc;
        }
    }
    ctx->pc = 0x12E3C0u;
label_12e3c0:
    // 0x12e3c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e3c4: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x12e3c4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x12e3c8: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_12e3cc:
    // 0x12e3cc: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x12E3CCu;
    SET_GPR_U32(ctx, 31, 0x12E3D4u);
    ctx->pc = 0x12E3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3CCu;
            // 0x12e3d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3D4u; }
        if (ctx->pc != 0x12E3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E3D4u; }
        if (ctx->pc != 0x12E3D4u) { return; }
    }
    ctx->pc = 0x12E3D4u;
    // 0x12e3d4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x12e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x12e3d8: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x12e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x12e3dc: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x12E3DCu;
    {
        const bool branch_taken_0x12e3dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3DCu;
            // 0x12e3e0: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3dc) {
            ctx->pc = 0x12E7E8u;
            goto label_12e7e8;
        }
    }
    ctx->pc = 0x12E3E4u;
    // 0x12e3e4: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x12E3E4u;
    {
        const bool branch_taken_0x12e3e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3E4u;
            // 0x12e3e8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3e4) {
            ctx->pc = 0x12E7E8u;
            goto label_12e7e8;
        }
    }
    ctx->pc = 0x12E3ECu;
    // 0x12e3ec: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x12e3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3f0: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x12e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x12e3f4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12e3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e3f8: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x12E3F8u;
    {
        const bool branch_taken_0x12e3f8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E3F8u;
            // 0x12e3fc: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f8) {
            ctx->pc = 0x12E48Cu;
            goto label_12e48c;
        }
    }
    ctx->pc = 0x12E400u;
    // 0x12e400: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12e404: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x12e404u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)15u)));
    // 0x12e408: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x12e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x12e40c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x12e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12e410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e414: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x12e414u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x12e418: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x12e418u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16u)));
    // 0x12e41c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E41Cu;
    {
        const bool branch_taken_0x12e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E41Cu;
            // 0x12e420: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e41c) {
            ctx->pc = 0x12E440u;
            goto label_12e440;
        }
    }
    ctx->pc = 0x12E424u;
    // 0x12e424: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12e428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e42c: 0xdc455a88  ld          $a1, 0x5A88($v0)
    ctx->pc = 0x12e42cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 23176)));
    // 0x12e430: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x12e430u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)15u)));
    // 0x12e434: 0xc04a3e2  jal         func_128F88
    ctx->pc = 0x12E434u;
    SET_GPR_U32(ctx, 31, 0x12E43Cu);
    ctx->pc = 0x12E438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E434u;
            // 0x12e438: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F88u;
    if (runtime->hasFunction(0x128F88u)) {
        auto targetFn = runtime->lookupFunction(0x128F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E43Cu; }
        if (ctx->pc != 0x12E43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E43Cu; }
        if (ctx->pc != 0x12E43Cu) { return; }
    }
    ctx->pc = 0x12E43Cu;
    // 0x12e43c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e43cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e440:
    // 0x12e440: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x12E440u;
    {
        const bool branch_taken_0x12e440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E440u;
            // 0x12e444: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e440) {
            ctx->pc = 0x12E478u;
            goto label_12e478;
        }
    }
    ctx->pc = 0x12E448u;
    // 0x12e448: 0x24515a68  addiu       $s1, $v0, 0x5A68
    ctx->pc = 0x12e448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x12e44c: 0x0  nop
    ctx->pc = 0x12e44cu;
    // NOP
label_12e450:
    // 0x12e450: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12e450u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x12e454: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E454u;
    {
        const bool branch_taken_0x12e454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E454u;
            // 0x12e458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e454) {
            ctx->pc = 0x12E46Cu;
            goto label_12e46c;
        }
    }
    ctx->pc = 0x12E45Cu;
    // 0x12e45c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x12e45cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e460: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E460u;
    SET_GPR_U32(ctx, 31, 0x12E468u);
    ctx->pc = 0x12E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E460u;
            // 0x12e464: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E468u; }
        if (ctx->pc != 0x12E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E468u; }
        if (ctx->pc != 0x12E468u) { return; }
    }
    ctx->pc = 0x12E468u;
    // 0x12e468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e46c:
    // 0x12e46c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x12e46cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x12e470: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E470u;
    {
        const bool branch_taken_0x12e470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E470u;
            // 0x12e474: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e470) {
            ctx->pc = 0x12E450u;
            goto label_12e450;
        }
    }
    ctx->pc = 0x12E478u;
label_12e478:
    // 0x12e478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e47c: 0xc04a3e2  jal         func_128F88
    ctx->pc = 0x12E47Cu;
    SET_GPR_U32(ctx, 31, 0x12E484u);
    ctx->pc = 0x12E480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E47Cu;
            // 0x12e480: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F88u;
    if (runtime->hasFunction(0x128F88u)) {
        auto targetFn = runtime->lookupFunction(0x128F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E484u; }
        if (ctx->pc != 0x12E484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E484u; }
        if (ctx->pc != 0x12E484u) { return; }
    }
    ctx->pc = 0x12E484u;
    // 0x12e484: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12E484u;
    {
        const bool branch_taken_0x12e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E484u;
            // 0x12e488: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e484) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E48Cu;
label_12e48c:
    // 0x12e48c: 0x138823  negu        $s1, $s3
    ctx->pc = 0x12e48cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12e490: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E490u;
            // 0x12e494: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E498u;
    // 0x12e498: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x12e498u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)15u)));
    // 0x12e49c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x12e4a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12e4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e4a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12e4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4ac: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x12e4acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e4b0: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E4B0u;
    SET_GPR_U32(ctx, 31, 0x12E4B8u);
    ctx->pc = 0x12E4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4B0u;
            // 0x12e4b4: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4B8u; }
        if (ctx->pc != 0x12E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4B8u; }
        if (ctx->pc != 0x12E4B8u) { return; }
    }
    ctx->pc = 0x12E4B8u;
    // 0x12e4b8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x12E4B8u;
    {
        const bool branch_taken_0x12e4b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4B8u;
            // 0x12e4bc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b8) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E4C0u;
    // 0x12e4c0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12e4c4: 0x24515a68  addiu       $s1, $v0, 0x5A68
    ctx->pc = 0x12e4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
label_12e4c8:
    // 0x12e4c8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x12e4c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x12e4cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E4CCu;
    {
        const bool branch_taken_0x12e4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4CCu;
            // 0x12e4d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4cc) {
            ctx->pc = 0x12E4E4u;
            goto label_12e4e4;
        }
    }
    ctx->pc = 0x12E4D4u;
    // 0x12e4d4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x12e4d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e4d8: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E4D8u;
    SET_GPR_U32(ctx, 31, 0x12E4E0u);
    ctx->pc = 0x12E4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4D8u;
            // 0x12e4dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4E0u; }
        if (ctx->pc != 0x12E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4E0u; }
        if (ctx->pc != 0x12E4E0u) { return; }
    }
    ctx->pc = 0x12E4E0u;
    // 0x12e4e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e4e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e4e4:
    // 0x12e4e4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x12e4e4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x12e4e8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E4E8u;
            // 0x12e4ec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12E4C8u;
            goto label_12e4c8;
        }
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e4f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E4F4u;
    {
        const bool branch_taken_0x12e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e4f4) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E4FCu;
    // 0x12e4fc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12e4fcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x12e500: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12e500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12e504: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E504u;
    SET_GPR_U32(ctx, 31, 0x12E50Cu);
    ctx->pc = 0x12E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E504u;
            // 0x12e508: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E50Cu; }
        if (ctx->pc != 0x12E50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E50Cu; }
        if (ctx->pc != 0x12E50Cu) { return; }
    }
    ctx->pc = 0x12E50Cu;
    // 0x12e50c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12E50Cu;
    {
        const bool branch_taken_0x12e50c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E50Cu;
            // 0x12e510: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e50c) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E514u;
    // 0x12e514: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12E514u;
    {
        const bool branch_taken_0x12e514 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12e514) {
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E51Cu;
    // 0x12e51c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e520: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x12E520u;
    {
        const bool branch_taken_0x12e520 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E520u;
            // 0x12e524: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e520) {
            ctx->pc = 0x12E7D4u;
            goto label_12e7d4;
        }
    }
    ctx->pc = 0x12E528u;
    // 0x12e528: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12e528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e52c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12e52cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x12e530: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12e530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12e534: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e538: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12e53c: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E53Cu;
    SET_GPR_U32(ctx, 31, 0x12E544u);
    ctx->pc = 0x12E540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E53Cu;
            // 0x12e540: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E544u; }
        if (ctx->pc != 0x12E544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E544u; }
        if (ctx->pc != 0x12E544u) { return; }
    }
    ctx->pc = 0x12E544u;
    // 0x12e544: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e544u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e548:
    // 0x12e548: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E548u;
    SET_GPR_U32(ctx, 31, 0x12E550u);
    ctx->pc = 0x12E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E548u;
            // 0x12e54c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E550u; }
        if (ctx->pc != 0x12E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E550u; }
        if (ctx->pc != 0x12E550u) { return; }
    }
    ctx->pc = 0x12E550u;
    // 0x12e550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e554: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E554u;
    SET_GPR_U32(ctx, 31, 0x12E55Cu);
    ctx->pc = 0x12E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E554u;
            // 0x12e558: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E55Cu; }
        if (ctx->pc != 0x12E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E55Cu; }
        if (ctx->pc != 0x12E55Cu) { return; }
    }
    ctx->pc = 0x12E55Cu;
    // 0x12e55c: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x12e55cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32824u)));
    // 0x12e560: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12e564: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E564u;
    SET_GPR_U32(ctx, 31, 0x12E56Cu);
    ctx->pc = 0x12E568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E564u;
            // 0x12e568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E56Cu; }
        if (ctx->pc != 0x12E56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E56Cu; }
        if (ctx->pc != 0x12E56Cu) { return; }
    }
    ctx->pc = 0x12E56Cu;
    // 0x12e56c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e570: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12e574: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12e574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12e578: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x12e578u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12e57c: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x12e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x12e580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e584: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x12e584u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
    // 0x12e588: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e58c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x12e58cu;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), GPR_VEC(ctx, 3)));
    // 0x12e590: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e594: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E594u;
            // 0x12e598: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E5F4u;
            goto label_12e5f4;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x12e59cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32808u)));
    // 0x12e5a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12e5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12e5a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5a8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x12e5ac: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E5ACu;
    SET_GPR_U32(ctx, 31, 0x12E5B4u);
    ctx->pc = 0x12E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5ACu;
            // 0x12e5b0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5B4u; }
        if (ctx->pc != 0x12E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5B4u; }
        if (ctx->pc != 0x12E5B4u) { return; }
    }
    ctx->pc = 0x12E5B4u;
    // 0x12e5b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5bc: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E5BCu;
    SET_GPR_U32(ctx, 31, 0x12E5C4u);
    ctx->pc = 0x12E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5BCu;
            // 0x12e5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5C4u; }
        if (ctx->pc != 0x12E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5C4u; }
        if (ctx->pc != 0x12E5C4u) { return; }
    }
    ctx->pc = 0x12E5C4u;
    // 0x12e5c4: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x12E5C4u;
    {
        const bool branch_taken_0x12e5c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5C4u;
            // 0x12e5c8: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c4) {
            ctx->pc = 0x12ECF0u;
            goto label_12ecf0;
        }
    }
    ctx->pc = 0x12E5CCu;
    // 0x12e5cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5d0: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E5D0u;
    SET_GPR_U32(ctx, 31, 0x12E5D8u);
    ctx->pc = 0x12E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5D0u;
            // 0x12e5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5D8u; }
        if (ctx->pc != 0x12E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5D8u; }
        if (ctx->pc != 0x12E5D8u) { return; }
    }
    ctx->pc = 0x12E5D8u;
    // 0x12e5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5dc: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E5DCu;
    SET_GPR_U32(ctx, 31, 0x12E5E4u);
    ctx->pc = 0x12E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5DCu;
            // 0x12e5e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5E4u; }
        if (ctx->pc != 0x12E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5E4u; }
        if (ctx->pc != 0x12E5E4u) { return; }
    }
    ctx->pc = 0x12E5E4u;
    // 0x12e5e4: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x12E5E4u;
    {
        const bool branch_taken_0x12e5e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5E4u;
            // 0x12e5e8: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5e4) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E5ECu;
    // 0x12e5ec: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12E5ECu;
    {
        const bool branch_taken_0x12e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5ECu;
            // 0x12e5f0: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5ec) {
            ctx->pc = 0x12E7DCu;
            goto label_12e7dc;
        }
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12E5F4u;
    {
        const bool branch_taken_0x12e5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5F4u;
            // 0x12e5f8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5f4) {
            ctx->pc = 0x12E6E0u;
            goto label_12e6e0;
        }
    }
    ctx->pc = 0x12E5FCu;
    // 0x12e5fc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x12e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12e600: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x12e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x12e604: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12e604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e608: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x12e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12e60c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12e610: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12e610u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x12e614: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12e614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12e618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e61c: 0xc04a3e2  jal         func_128F88
    ctx->pc = 0x12E61Cu;
    SET_GPR_U32(ctx, 31, 0x12E624u);
    ctx->pc = 0x12E620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E61Cu;
            // 0x12e620: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F88u;
    if (runtime->hasFunction(0x128F88u)) {
        auto targetFn = runtime->lookupFunction(0x128F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E624u; }
        if (ctx->pc != 0x12E624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E624u; }
        if (ctx->pc != 0x12E624u) { return; }
    }
    ctx->pc = 0x12E624u;
    // 0x12e624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e628: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E628u;
    SET_GPR_U32(ctx, 31, 0x12E630u);
    ctx->pc = 0x12E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E628u;
            // 0x12e62c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E630u; }
        if (ctx->pc != 0x12E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E630u; }
        if (ctx->pc != 0x12E630u) { return; }
    }
    ctx->pc = 0x12E630u;
    // 0x12e630: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12E630u;
    {
        const bool branch_taken_0x12e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E630u;
            // 0x12e634: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e630) {
            ctx->pc = 0x12E660u;
            goto label_12e660;
        }
    }
    ctx->pc = 0x12E638u;
label_12e638:
    // 0x12e638: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12e638u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x12e63c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12e63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12e640: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E640u;
    SET_GPR_U32(ctx, 31, 0x12E648u);
    ctx->pc = 0x12E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E640u;
            // 0x12e644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E648u; }
        if (ctx->pc != 0x12E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E648u; }
        if (ctx->pc != 0x12E648u) { return; }
    }
    ctx->pc = 0x12E648u;
    // 0x12e648: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12e648u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x12e64c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12e64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12e650: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e654: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E654u;
    SET_GPR_U32(ctx, 31, 0x12E65Cu);
    ctx->pc = 0x12E658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E654u;
            // 0x12e658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E65Cu; }
        if (ctx->pc != 0x12E65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E65Cu; }
        if (ctx->pc != 0x12E65Cu) { return; }
    }
    ctx->pc = 0x12E65Cu;
    // 0x12e65c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e65cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e660:
    // 0x12e660: 0xc04a4c4  jal         func_129310
    ctx->pc = 0x12E660u;
    SET_GPR_U32(ctx, 31, 0x12E668u);
    ctx->pc = 0x12E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E660u;
            // 0x12e664: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129310u;
    if (runtime->hasFunction(0x129310u)) {
        auto targetFn = runtime->lookupFunction(0x129310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E668u; }
        if (ctx->pc != 0x12E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E668u; }
        if (ctx->pc != 0x12E668u) { return; }
    }
    ctx->pc = 0x12E668u;
    // 0x12e668: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e66c: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E66Cu;
    SET_GPR_U32(ctx, 31, 0x12E674u);
    ctx->pc = 0x12E670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E66Cu;
            // 0x12e670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E674u; }
        if (ctx->pc != 0x12E674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E674u; }
        if (ctx->pc != 0x12E674u) { return; }
    }
    ctx->pc = 0x12E674u;
    // 0x12e674: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e678: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E678u;
    SET_GPR_U32(ctx, 31, 0x12E680u);
    ctx->pc = 0x12E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E678u;
            // 0x12e67c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E680u; }
        if (ctx->pc != 0x12E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E680u; }
        if (ctx->pc != 0x12E680u) { return; }
    }
    ctx->pc = 0x12E680u;
    // 0x12e680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e688: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e690: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12e690u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12e694: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E694u;
    SET_GPR_U32(ctx, 31, 0x12E69Cu);
    ctx->pc = 0x12E698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E694u;
            // 0x12e698: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E69Cu; }
        if (ctx->pc != 0x12E69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E69Cu; }
        if (ctx->pc != 0x12E69Cu) { return; }
    }
    ctx->pc = 0x12E69Cu;
    // 0x12e69c: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x12E69Cu;
    {
        const bool branch_taken_0x12e69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12e69c) {
            ctx->pc = 0x12E6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E69Cu;
            // 0x12e6a0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E6A4u;
    // 0x12e6a4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x12e6a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x12e6a8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12e6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12e6ac: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E6ACu;
    SET_GPR_U32(ctx, 31, 0x12E6B4u);
    ctx->pc = 0x12E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6ACu;
            // 0x12e6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6B4u; }
        if (ctx->pc != 0x12E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6B4u; }
        if (ctx->pc != 0x12E6B4u) { return; }
    }
    ctx->pc = 0x12E6B4u;
    // 0x12e6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6b8: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E6B8u;
    SET_GPR_U32(ctx, 31, 0x12E6C0u);
    ctx->pc = 0x12E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6B8u;
            // 0x12e6bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C0u; }
        if (ctx->pc != 0x12E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E6C0u; }
        if (ctx->pc != 0x12E6C0u) { return; }
    }
    ctx->pc = 0x12E6C0u;
    // 0x12e6c0: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x12E6C0u;
    {
        const bool branch_taken_0x12e6c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6C0u;
            // 0x12e6c4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6c0) {
            ctx->pc = 0x12E924u;
            goto label_12e924;
        }
    }
    ctx->pc = 0x12E6C8u;
    // 0x12e6c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12e6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12e6cc: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x12e6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e6d0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12E6D0u;
    {
        const bool branch_taken_0x12e6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6d0) {
            ctx->pc = 0x12E638u;
            goto label_12e638;
        }
    }
    ctx->pc = 0x12E6D8u;
    // 0x12e6d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12E6D8u;
    {
        const bool branch_taken_0x12e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6D8u;
            // 0x12e6dc: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6d8) {
            ctx->pc = 0x12E7D8u;
            goto label_12e7d8;
        }
    }
    ctx->pc = 0x12E6E0u;
label_12e6e0:
    // 0x12e6e0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12e6e4: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x12e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x12e6e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6ec: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12e6f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e6f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12e6f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e6fc: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E6FCu;
    SET_GPR_U32(ctx, 31, 0x12E704u);
    ctx->pc = 0x12E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E6FCu;
            // 0x12e700: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E704u; }
        if (ctx->pc != 0x12E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E704u; }
        if (ctx->pc != 0x12E704u) { return; }
    }
    ctx->pc = 0x12E704u;
    // 0x12e704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E704u;
    {
        const bool branch_taken_0x12e704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E704u;
            // 0x12e708: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e704) {
            ctx->pc = 0x12E728u;
            goto label_12e728;
        }
    }
    ctx->pc = 0x12E70Cu;
    // 0x12e70c: 0x0  nop
    ctx->pc = 0x12e70cu;
    // NOP
label_12e710:
    // 0x12e710: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12e710u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x12e714: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12e718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e71c: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E71Cu;
    SET_GPR_U32(ctx, 31, 0x12E724u);
    ctx->pc = 0x12E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E71Cu;
            // 0x12e720: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E724u; }
        if (ctx->pc != 0x12E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E724u; }
        if (ctx->pc != 0x12E724u) { return; }
    }
    ctx->pc = 0x12E724u;
    // 0x12e724: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e728:
    // 0x12e728: 0xc04a4c4  jal         func_129310
    ctx->pc = 0x12E728u;
    SET_GPR_U32(ctx, 31, 0x12E730u);
    ctx->pc = 0x12E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E728u;
            // 0x12e72c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129310u;
    if (runtime->hasFunction(0x129310u)) {
        auto targetFn = runtime->lookupFunction(0x129310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E730u; }
        if (ctx->pc != 0x12E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E730u; }
        if (ctx->pc != 0x12E730u) { return; }
    }
    ctx->pc = 0x12E730u;
    // 0x12e730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e734: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E734u;
    SET_GPR_U32(ctx, 31, 0x12E73Cu);
    ctx->pc = 0x12E738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E734u;
            // 0x12e738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E73Cu; }
        if (ctx->pc != 0x12E73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E73Cu; }
        if (ctx->pc != 0x12E73Cu) { return; }
    }
    ctx->pc = 0x12E73Cu;
    // 0x12e73c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e740: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E740u;
    SET_GPR_U32(ctx, 31, 0x12E748u);
    ctx->pc = 0x12E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E740u;
            // 0x12e744: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E748u; }
        if (ctx->pc != 0x12E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E748u; }
        if (ctx->pc != 0x12E748u) { return; }
    }
    ctx->pc = 0x12E748u;
    // 0x12e748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e74c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e750: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12e750u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12e754: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e758: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12E758u;
    {
        const bool branch_taken_0x12e758 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E758u;
            // 0x12e75c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e758) {
            ctx->pc = 0x12E710u;
            goto label_12e710;
        }
    }
    ctx->pc = 0x12E760u;
    // 0x12e760: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12e760u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x12e764: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12e768: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E768u;
    SET_GPR_U32(ctx, 31, 0x12E770u);
    ctx->pc = 0x12E76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E768u;
            // 0x12e76c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E770u; }
        if (ctx->pc != 0x12E770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E770u; }
        if (ctx->pc != 0x12E770u) { return; }
    }
    ctx->pc = 0x12E770u;
    // 0x12e770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e774: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E774u;
    SET_GPR_U32(ctx, 31, 0x12E77Cu);
    ctx->pc = 0x12E778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E774u;
            // 0x12e778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E77Cu; }
        if (ctx->pc != 0x12E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E77Cu; }
        if (ctx->pc != 0x12E77Cu) { return; }
    }
    ctx->pc = 0x12E77Cu;
    // 0x12e77c: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x12E77Cu;
    {
        const bool branch_taken_0x12e77c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12e77c) {
            ctx->pc = 0x12E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E77Cu;
            // 0x12e780: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E928u;
            goto label_12e928;
        }
    }
    ctx->pc = 0x12E784u;
    // 0x12e784: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x12e784u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x12e788: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12e788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12e78c: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E78Cu;
    SET_GPR_U32(ctx, 31, 0x12E794u);
    ctx->pc = 0x12E790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E78Cu;
            // 0x12e790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E794u; }
        if (ctx->pc != 0x12E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E794u; }
        if (ctx->pc != 0x12E794u) { return; }
    }
    ctx->pc = 0x12E794u;
    // 0x12e794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e798: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E798u;
    SET_GPR_U32(ctx, 31, 0x12E7A0u);
    ctx->pc = 0x12E79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E798u;
            // 0x12e79c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7A0u; }
        if (ctx->pc != 0x12E7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E7A0u; }
        if (ctx->pc != 0x12E7A0u) { return; }
    }
    ctx->pc = 0x12E7A0u;
    // 0x12e7a0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12E7A0u;
    {
        const bool branch_taken_0x12e7a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7A0u;
            // 0x12e7a4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7a0) {
            ctx->pc = 0x12E7D8u;
            goto label_12e7d8;
        }
    }
    ctx->pc = 0x12E7A8u;
    // 0x12e7a8: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12e7ac: 0x0  nop
    ctx->pc = 0x12e7acu;
    // NOP
label_12e7b0:
    // 0x12e7b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12e7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12e7b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12e7b8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12e7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e7bc: 0x0  nop
    ctx->pc = 0x12e7bcu;
    // NOP
    // 0x12e7c0: 0x0  nop
    ctx->pc = 0x12e7c0u;
    // NOP
    // 0x12e7c4: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E7C4u;
    {
        const bool branch_taken_0x12e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e7c4) {
            ctx->pc = 0x12E7B0u;
            goto label_12e7b0;
        }
    }
    ctx->pc = 0x12E7CCu;
    // 0x12e7cc: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x12E7CCu;
    {
        const bool branch_taken_0x12e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7CCu;
            // 0x12e7d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7cc) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E7D4u;
label_12e7d4:
    // 0x12e7d4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x12e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_12e7d8:
    // 0x12e7d8: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x12e7d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12e7dc:
    // 0x12e7dc: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x12e7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12e7e0: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12e7e4: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12e7e8:
    // 0x12e7e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e7ec: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x12E7ECu;
    {
        const bool branch_taken_0x12e7ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7ECu;
            // 0x12e7f0: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7ec) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E7F4u;
    // 0x12e7f4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x12E7F4u;
    {
        const bool branch_taken_0x12e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E7F4u;
            // 0x12e7f8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7f4) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E7FCu;
    // 0x12e7fc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x12e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x12e800: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x12e804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e808: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x12e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12e80c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12E80Cu;
    {
        const bool branch_taken_0x12e80c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E80Cu;
            // 0x12e810: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e80c) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E814u;
    // 0x12e814: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e818: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E818u;
    {
        const bool branch_taken_0x12e818 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E818u;
            // 0x12e81c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e818) {
            ctx->pc = 0x12E860u;
            goto label_12e860;
        }
    }
    ctx->pc = 0x12E820u;
    // 0x12e820: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x12e820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x12e824: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x12E824u;
    {
        const bool branch_taken_0x12e824 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E824u;
            // 0x12e828: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e824) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E82Cu;
    // 0x12e82c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x12e82cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32808u)));
    // 0x12e830: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12e830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12e834: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E834u;
    SET_GPR_U32(ctx, 31, 0x12E83Cu);
    ctx->pc = 0x12E838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E834u;
            // 0x12e838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E83Cu; }
        if (ctx->pc != 0x12E83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E83Cu; }
        if (ctx->pc != 0x12E83Cu) { return; }
    }
    ctx->pc = 0x12E83Cu;
    // 0x12e83c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e840: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E840u;
    SET_GPR_U32(ctx, 31, 0x12E848u);
    ctx->pc = 0x12E844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E840u;
            // 0x12e844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E848u; }
        if (ctx->pc != 0x12E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E848u; }
        if (ctx->pc != 0x12E848u) { return; }
    }
    ctx->pc = 0x12E848u;
    // 0x12e848: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x12E848u;
    {
        const bool branch_taken_0x12e848 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E848u;
            // 0x12e84c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e848) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12E850u;
    // 0x12e850: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x12E850u;
    {
        const bool branch_taken_0x12e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E850u;
            // 0x12e854: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e850) {
            ctx->pc = 0x12ECF4u;
            goto label_12ecf4;
        }
    }
    ctx->pc = 0x12E858u;
label_12e858:
    // 0x12e858: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e85c: 0x0  nop
    ctx->pc = 0x12e85cu;
    // NOP
label_12e860:
    // 0x12e860: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12E860u;
    {
        const bool branch_taken_0x12e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E860u;
            // 0x12e864: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e860) {
            ctx->pc = 0x12E890u;
            goto label_12e890;
        }
    }
    ctx->pc = 0x12E868u;
label_12e868:
    // 0x12e868: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12e868u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x12e86c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12e86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x12e870: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E870u;
    SET_GPR_U32(ctx, 31, 0x12E878u);
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E878u; }
        if (ctx->pc != 0x12E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E878u; }
        if (ctx->pc != 0x12E878u) { return; }
    }
    ctx->pc = 0x12E878u;
    // 0x12e878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e880: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E880u;
    SET_GPR_U32(ctx, 31, 0x12E888u);
    ctx->pc = 0x12E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E880u;
            // 0x12e884: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E888u; }
        if (ctx->pc != 0x12E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E888u; }
        if (ctx->pc != 0x12E888u) { return; }
    }
    ctx->pc = 0x12E888u;
    // 0x12e888: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x12E888u;
    {
        const bool branch_taken_0x12e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E888u;
            // 0x12e88c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e888) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E890u;
label_12e890:
    // 0x12e890: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e894: 0xc04a3e2  jal         func_128F88
    ctx->pc = 0x12E894u;
    SET_GPR_U32(ctx, 31, 0x12E89Cu);
    ctx->pc = 0x12E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E894u;
            // 0x12e898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F88u;
    if (runtime->hasFunction(0x128F88u)) {
        auto targetFn = runtime->lookupFunction(0x128F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E89Cu; }
        if (ctx->pc != 0x12E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E89Cu; }
        if (ctx->pc != 0x12E89Cu) { return; }
    }
    ctx->pc = 0x12E89Cu;
    // 0x12e89c: 0xc04a4c4  jal         func_129310
    ctx->pc = 0x12E89Cu;
    SET_GPR_U32(ctx, 31, 0x12E8A4u);
    ctx->pc = 0x12E8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E89Cu;
            // 0x12e8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129310u;
    if (runtime->hasFunction(0x129310u)) {
        auto targetFn = runtime->lookupFunction(0x129310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8A4u; }
        if (ctx->pc != 0x12E8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x129310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8A4u; }
        if (ctx->pc != 0x12E8A4u) { return; }
    }
    ctx->pc = 0x12E8A4u;
    // 0x12e8a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8a8: 0xc04a496  jal         func_129258
    ctx->pc = 0x12E8A8u;
    SET_GPR_U32(ctx, 31, 0x12E8B0u);
    ctx->pc = 0x12E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8A8u;
            // 0x12e8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129258u;
    if (runtime->hasFunction(0x129258u)) {
        auto targetFn = runtime->lookupFunction(0x129258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8B0u; }
        if (ctx->pc != 0x12E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x129258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8B0u; }
        if (ctx->pc != 0x12E8B0u) { return; }
    }
    ctx->pc = 0x12E8B0u;
    // 0x12e8b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b4: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12E8B4u;
    SET_GPR_U32(ctx, 31, 0x12E8BCu);
    ctx->pc = 0x12E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8B4u;
            // 0x12e8b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8BCu; }
        if (ctx->pc != 0x12E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8BCu; }
        if (ctx->pc != 0x12E8BCu) { return; }
    }
    ctx->pc = 0x12E8BCu;
    // 0x12e8bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8c0: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12E8C0u;
    SET_GPR_U32(ctx, 31, 0x12E8C8u);
    ctx->pc = 0x12E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8C0u;
            // 0x12e8c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C8u; }
        if (ctx->pc != 0x12E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8C8u; }
        if (ctx->pc != 0x12E8C8u) { return; }
    }
    ctx->pc = 0x12E8C8u;
    // 0x12e8c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x12e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12e8d0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12e8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12e8d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e8d8: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8D8u;
            // 0x12e8dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E868u;
            goto label_12e868;
        }
    }
    ctx->pc = 0x12E8E0u;
    // 0x12e8e0: 0xc04a308  jal         func_128C20
    ctx->pc = 0x12E8E0u;
    SET_GPR_U32(ctx, 31, 0x12E8E8u);
    ctx->pc = 0x12E8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8E0u;
            // 0x12e8e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C20u;
    if (runtime->hasFunction(0x128C20u)) {
        auto targetFn = runtime->lookupFunction(0x128C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8E8u; }
        if (ctx->pc != 0x12E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x128c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8E8u; }
        if (ctx->pc != 0x12E8E8u) { return; }
    }
    ctx->pc = 0x12E8E8u;
    // 0x12e8e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8f0: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E8F0u;
    SET_GPR_U32(ctx, 31, 0x12E8F8u);
    ctx->pc = 0x12E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8F0u;
            // 0x12e8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8F8u; }
        if (ctx->pc != 0x12E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E8F8u; }
        if (ctx->pc != 0x12E8F8u) { return; }
    }
    ctx->pc = 0x12E8F8u;
    // 0x12e8f8: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E8F8u;
    {
        const bool branch_taken_0x12e8f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8F8u;
            // 0x12e8fc: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8f8) {
            ctx->pc = 0x12E92Cu;
            goto label_12e92c;
        }
    }
    ctx->pc = 0x12E900u;
    // 0x12e900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e904: 0xc04a482  jal         func_129208
    ctx->pc = 0x12E904u;
    SET_GPR_U32(ctx, 31, 0x12E90Cu);
    ctx->pc = 0x12E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E904u;
            // 0x12e908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E90Cu; }
        if (ctx->pc != 0x12E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E90Cu; }
        if (ctx->pc != 0x12E90Cu) { return; }
    }
    ctx->pc = 0x12E90Cu;
    // 0x12e90c: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x12E90Cu;
    {
        const bool branch_taken_0x12e90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E90Cu;
            // 0x12e910: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e90c) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E914u;
    // 0x12e914: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x12E914u;
    {
        const bool branch_taken_0x12e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E914u;
            // 0x12e918: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e914) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E91Cu;
    // 0x12e91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E91Cu;
    {
        const bool branch_taken_0x12e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E91Cu;
            // 0x12e920: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e91c) {
            ctx->pc = 0x12E930u;
            goto label_12e930;
        }
    }
    ctx->pc = 0x12E924u;
label_12e924:
    // 0x12e924: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12e928:
    // 0x12e928: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x12e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_12e92c:
    // 0x12e92c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x12e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12e930:
    // 0x12e930: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12e934:
    // 0x12e934: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e938: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E938u;
    {
        const bool branch_taken_0x12e938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x12E93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E938u;
            // 0x12e93c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e938) {
            ctx->pc = 0x12E958u;
            goto label_12e958;
        }
    }
    ctx->pc = 0x12E940u;
    // 0x12e940: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12e944: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12E944u;
    {
        const bool branch_taken_0x12e944 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e944) {
            ctx->pc = 0x12E948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E944u;
            // 0x12e948: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E934u;
            goto label_12e934;
        }
    }
    ctx->pc = 0x12E94Cu;
    // 0x12e94c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x12e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e950: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e954: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12e958:
    // 0x12e958: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12e95c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12e960: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x12E960u;
    {
        const bool branch_taken_0x12e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E960u;
            // 0x12e964: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e960) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12e96c: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x12e96cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e970: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x12e970u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12e974: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x12e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x12e978: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E978u;
            // 0x12e97c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12EA28u;
            goto label_12ea28;
        }
    }
    ctx->pc = 0x12E980u;
    // 0x12e980: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x12e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e984: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x12e984u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e988: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E988u;
    {
        const bool branch_taken_0x12e988 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E988u;
            // 0x12e98c: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e988) {
            ctx->pc = 0x12E9A8u;
            goto label_12e9a8;
        }
    }
    ctx->pc = 0x12E990u;
    // 0x12e990: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12E990u;
    {
        const bool branch_taken_0x12e990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E990u;
            // 0x12e994: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e990) {
            ctx->pc = 0x12E9FCu;
            goto label_12e9fc;
        }
    }
    ctx->pc = 0x12E998u;
    // 0x12e998: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12e99c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x12e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12e9a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12E9A0u;
    {
        const bool branch_taken_0x12e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9A0u;
            // 0x12e9a4: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a0) {
            ctx->pc = 0x12E9FCu;
            goto label_12e9fc;
        }
    }
    ctx->pc = 0x12E9A8u;
label_12e9a8:
    // 0x12e9a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e9ac: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x12e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12e9b0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12e9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12e9b4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x12e9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12e9b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E9B8u;
    {
        const bool branch_taken_0x12e9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9B8u;
            // 0x12e9bc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9b8) {
            ctx->pc = 0x12E9C8u;
            goto label_12e9c8;
        }
    }
    ctx->pc = 0x12E9C0u;
    // 0x12e9c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E9C0u;
    {
        const bool branch_taken_0x12e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9C0u;
            // 0x12e9c4: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9c0) {
            ctx->pc = 0x12E9E4u;
            goto label_12e9e4;
        }
    }
    ctx->pc = 0x12E9C8u;
label_12e9c8:
    // 0x12e9c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9cc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12e9d0: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x12e9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12e9d4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x12e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x12e9d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12e9dc: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x12e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x12e9e0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_12e9e4:
    // 0x12e9e4: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x12e9e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e9e8: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E9E8u;
    {
        const bool branch_taken_0x12e9e8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9E8u;
            // 0x12e9ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9e8) {
            ctx->pc = 0x12EA00u;
            goto label_12ea00;
        }
    }
    ctx->pc = 0x12E9F0u;
    // 0x12e9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e9f4: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x12e9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x12e9f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e9fc:
    // 0x12e9fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ea00:
    // 0x12ea00: 0xc04c0aa  jal         func_1302A8
    ctx->pc = 0x12EA00u;
    SET_GPR_U32(ctx, 31, 0x12EA08u);
    ctx->pc = 0x12EA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA00u;
            // 0x12ea04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302A8u;
    if (runtime->hasFunction(0x1302A8u)) {
        auto targetFn = runtime->lookupFunction(0x1302A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA08u; }
        if (ctx->pc != 0x12EA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x1302a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA08u; }
        if (ctx->pc != 0x12EA08u) { return; }
    }
    ctx->pc = 0x12EA08u;
    // 0x12ea08: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12ea0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ea10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ea14: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x12ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12ea18: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12ea1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12ea20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12EA20u;
    {
        const bool branch_taken_0x12ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA20u;
            // 0x12ea24: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea20) {
            ctx->pc = 0x12EA30u;
            goto label_12ea30;
        }
    }
    ctx->pc = 0x12EA28u;
label_12ea28:
    // 0x12ea28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ea2c: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x12ea2cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_12ea30:
    // 0x12ea30: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x12EA30u;
    {
        const bool branch_taken_0x12ea30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA30u;
            // 0x12ea34: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea30) {
            ctx->pc = 0x12EA60u;
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12EA38u;
    // 0x12ea38: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EA38u;
    {
        const bool branch_taken_0x12ea38 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA38u;
            // 0x12ea3c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea38) {
            ctx->pc = 0x12EA60u;
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12EA40u;
    // 0x12ea40: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x12ea40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x12ea44: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x12ea44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x12ea48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ea4c: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x12ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12ea50: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12ea54: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12ea58: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12ea5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12ea60:
    // 0x12ea60: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12ea64: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12EA64u;
    {
        const bool branch_taken_0x12ea64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA64u;
            // 0x12ea68: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea64) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EA6Cu;
    // 0x12ea6c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EA6Cu;
    {
        const bool branch_taken_0x12ea6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA6Cu;
            // 0x12ea70: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea6c) {
            ctx->pc = 0x12EAD0u;
            goto label_12ead0;
        }
    }
    ctx->pc = 0x12EA74u;
    // 0x12ea74: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x12EA74u;
    {
        const bool branch_taken_0x12ea74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12EA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA74u;
            // 0x12ea78: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea74) {
            ctx->pc = 0x12EAACu;
            goto label_12eaac;
        }
    }
    ctx->pc = 0x12EA7Cu;
    // 0x12ea7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea80: 0xc04c144  jal         func_130510
    ctx->pc = 0x12EA80u;
    SET_GPR_U32(ctx, 31, 0x12EA88u);
    ctx->pc = 0x12EA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA80u;
            // 0x12ea84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130510u;
    if (runtime->hasFunction(0x130510u)) {
        auto targetFn = runtime->lookupFunction(0x130510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA88u; }
        if (ctx->pc != 0x12EA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA88u; }
        if (ctx->pc != 0x12EA88u) { return; }
    }
    ctx->pc = 0x12EA88u;
    // 0x12ea88: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12ea8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea90: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ea94: 0xc04c0b8  jal         func_1302E0
    ctx->pc = 0x12EA94u;
    SET_GPR_U32(ctx, 31, 0x12EA9Cu);
    ctx->pc = 0x12EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA94u;
            // 0x12ea98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302E0u;
    if (runtime->hasFunction(0x1302E0u)) {
        auto targetFn = runtime->lookupFunction(0x1302E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA9Cu; }
        if (ctx->pc != 0x12EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1302e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA9Cu; }
        if (ctx->pc != 0x12EA9Cu) { return; }
    }
    ctx->pc = 0x12EA9Cu;
    // 0x12ea9c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12eaa0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaa4: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12EAA4u;
    SET_GPR_U32(ctx, 31, 0x12EAACu);
    ctx->pc = 0x12EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAA4u;
            // 0x12eaa8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAACu; }
        if (ctx->pc != 0x12EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAACu; }
        if (ctx->pc != 0x12EAACu) { return; }
    }
    ctx->pc = 0x12EAACu;
label_12eaac:
    // 0x12eaac: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12eab0: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x12eab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12eab4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12EAB4u;
    {
        const bool branch_taken_0x12eab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAB4u;
            // 0x12eab8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eab4) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EABCu;
    // 0x12eabc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12eabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eac0: 0xc04c144  jal         func_130510
    ctx->pc = 0x12EAC0u;
    SET_GPR_U32(ctx, 31, 0x12EAC8u);
    ctx->pc = 0x12EAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAC0u;
            // 0x12eac4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130510u;
    if (runtime->hasFunction(0x130510u)) {
        auto targetFn = runtime->lookupFunction(0x130510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAC8u; }
        if (ctx->pc != 0x12EAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAC8u; }
        if (ctx->pc != 0x12EAC8u) { return; }
    }
    ctx->pc = 0x12EAC8u;
    // 0x12eac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EAC8u;
    {
        const bool branch_taken_0x12eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAC8u;
            // 0x12eacc: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eac8) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EAD0u;
label_12ead0:
    // 0x12ead0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ead4: 0xc04c144  jal         func_130510
    ctx->pc = 0x12EAD4u;
    SET_GPR_U32(ctx, 31, 0x12EADCu);
    ctx->pc = 0x12EAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAD4u;
            // 0x12ead8: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130510u;
    if (runtime->hasFunction(0x130510u)) {
        auto targetFn = runtime->lookupFunction(0x130510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EADCu; }
        if (ctx->pc != 0x12EADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EADCu; }
        if (ctx->pc != 0x12EADCu) { return; }
    }
    ctx->pc = 0x12EADCu;
    // 0x12eadc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12eae0:
    // 0x12eae0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eae4: 0xc04c0aa  jal         func_1302A8
    ctx->pc = 0x12EAE4u;
    SET_GPR_U32(ctx, 31, 0x12EAECu);
    ctx->pc = 0x12EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAE4u;
            // 0x12eae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302A8u;
    if (runtime->hasFunction(0x1302A8u)) {
        auto targetFn = runtime->lookupFunction(0x1302A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAECu; }
        if (ctx->pc != 0x12EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x1302a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EAECu; }
        if (ctx->pc != 0x12EAECu) { return; }
    }
    ctx->pc = 0x12EAECu;
    // 0x12eaec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12eaf0: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EAF0u;
    {
        const bool branch_taken_0x12eaf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAF0u;
            // 0x12eaf4: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaf0) {
            ctx->pc = 0x12EB0Cu;
            goto label_12eb0c;
        }
    }
    ctx->pc = 0x12EAF8u;
    // 0x12eaf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eafc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb00: 0xc04c144  jal         func_130510
    ctx->pc = 0x12EB00u;
    SET_GPR_U32(ctx, 31, 0x12EB08u);
    ctx->pc = 0x12EB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB00u;
            // 0x12eb04: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130510u;
    if (runtime->hasFunction(0x130510u)) {
        auto targetFn = runtime->lookupFunction(0x130510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB08u; }
        if (ctx->pc != 0x12EB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x130510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB08u; }
        if (ctx->pc != 0x12EB08u) { return; }
    }
    ctx->pc = 0x12EB08u;
    // 0x12eb08: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x12eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_12eb0c:
    // 0x12eb0c: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x12EB0Cu;
    {
        const bool branch_taken_0x12eb0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB0Cu;
            // 0x12eb10: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb0c) {
            ctx->pc = 0x12EB64u;
            goto label_12eb64;
        }
    }
    ctx->pc = 0x12EB14u;
    // 0x12eb14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12eb18: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12eb1c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x12eb1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x12eb20: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12EB20u;
    {
        const bool branch_taken_0x12eb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eb20) {
            ctx->pc = 0x12EB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB20u;
            // 0x12eb24: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB28u;
    // 0x12eb28: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x12eb28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12eb2c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12eb30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12eb30u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12eb34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EB34u;
    {
        const bool branch_taken_0x12eb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB34u;
            // 0x12eb38: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb34) {
            ctx->pc = 0x12EB5Cu;
            goto label_12eb5c;
        }
    }
    ctx->pc = 0x12EB3Cu;
    // 0x12eb3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12eb48: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x12eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x12eb4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12eb50: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12eb54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12EB54u;
    {
        const bool branch_taken_0x12eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB54u;
            // 0x12eb58: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb54) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB5Cu;
label_12eb5c:
    // 0x12eb5c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x12eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_12eb60:
    // 0x12eb60: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x12eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_12eb64:
    // 0x12eb64: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12EB64u;
    {
        const bool branch_taken_0x12eb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB64u;
            // 0x12eb68: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb64) {
            ctx->pc = 0x12EB90u;
            goto label_12eb90;
        }
    }
    ctx->pc = 0x12EB6Cu;
    // 0x12eb6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12eb70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12eb74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12eb78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12eb7c: 0xc04c058  jal         func_130160
    ctx->pc = 0x12EB7Cu;
    SET_GPR_U32(ctx, 31, 0x12EB84u);
    ctx->pc = 0x12EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB7Cu;
            // 0x12eb80: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB84u; }
        if (ctx->pc != 0x12EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB84u; }
        if (ctx->pc != 0x12EB84u) { return; }
    }
    ctx->pc = 0x12EB84u;
    // 0x12eb84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB88u;
            // 0x12eb8c: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EB98u;
            goto label_12eb98;
        }
    }
    ctx->pc = 0x12EB90u;
label_12eb90:
    // 0x12eb90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb94: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12eb98:
    // 0x12eb98: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x12eb98u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x12eb9c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x12EB9Cu;
    {
        const bool branch_taken_0x12eb9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB9Cu;
            // 0x12eba0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb9c) {
            ctx->pc = 0x12EBA8u;
            goto label_12eba8;
        }
    }
    ctx->pc = 0x12EBA4u;
    // 0x12eba4: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x12eba4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_12eba8:
    // 0x12eba8: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x12eba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x12ebac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12EBACu;
    {
        const bool branch_taken_0x12ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBACu;
            // 0x12ebb0: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebac) {
            ctx->pc = 0x12EBD8u;
            goto label_12ebd8;
        }
    }
    ctx->pc = 0x12EBB4u;
    // 0x12ebb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ebb8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x12ebbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ebc0: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12ebc4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12ebc8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12ebcc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12ebd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12EBD0u;
    {
        const bool branch_taken_0x12ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBD0u;
            // 0x12ebd4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebd0) {
            ctx->pc = 0x12EBFCu;
            goto label_12ebfc;
        }
    }
    ctx->pc = 0x12EBD8u;
label_12ebd8:
    // 0x12ebd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EBD8u;
    {
        const bool branch_taken_0x12ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBD8u;
            // 0x12ebdc: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebd8) {
            ctx->pc = 0x12EBFCu;
            goto label_12ebfc;
        }
    }
    ctx->pc = 0x12EBE0u;
    // 0x12ebe0: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x12ebe4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ebe8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x12ebe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12ebec: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x12ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x12ebf0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x12ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12ebf4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x12ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x12ebf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12ebfc:
    // 0x12ebfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ec00: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EC00u;
    {
        const bool branch_taken_0x12ec00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC00u;
            // 0x12ec04: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec00) {
            ctx->pc = 0x12EC18u;
            goto label_12ec18;
        }
    }
    ctx->pc = 0x12EC08u;
    // 0x12ec08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12ec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec0c: 0xc04c184  jal         func_130610
    ctx->pc = 0x12EC0Cu;
    SET_GPR_U32(ctx, 31, 0x12EC14u);
    ctx->pc = 0x12EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC0Cu;
            // 0x12ec10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC14u; }
        if (ctx->pc != 0x12EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC14u; }
        if (ctx->pc != 0x12EC14u) { return; }
    }
    ctx->pc = 0x12EC14u;
    // 0x12ec14: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ec18:
    // 0x12ec18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ec1c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EC1Cu;
    {
        const bool branch_taken_0x12ec1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12EC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC1Cu;
            // 0x12ec20: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec1c) {
            ctx->pc = 0x12EC34u;
            goto label_12ec34;
        }
    }
    ctx->pc = 0x12EC24u;
    // 0x12ec24: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x12ec24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec28: 0xc04c184  jal         func_130610
    ctx->pc = 0x12EC28u;
    SET_GPR_U32(ctx, 31, 0x12EC30u);
    ctx->pc = 0x12EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC28u;
            // 0x12ec2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC30u; }
        if (ctx->pc != 0x12EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC30u; }
        if (ctx->pc != 0x12EC30u) { return; }
    }
    ctx->pc = 0x12EC30u;
    // 0x12ec30: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x12ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_12ec34:
    // 0x12ec34: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ec38: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12EC38u;
    {
        const bool branch_taken_0x12ec38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC38u;
            // 0x12ec3c: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec38) {
            ctx->pc = 0x12EC94u;
            goto label_12ec94;
        }
    }
    ctx->pc = 0x12EC40u;
    // 0x12ec40: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12EC40u;
    SET_GPR_U32(ctx, 31, 0x12EC48u);
    ctx->pc = 0x12EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC40u;
            // 0x12ec44: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC48u; }
        if (ctx->pc != 0x12EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC48u; }
        if (ctx->pc != 0x12EC48u) { return; }
    }
    ctx->pc = 0x12EC48u;
    // 0x12ec48: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC48u;
            // 0x12ec4c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EC50u;
    // 0x12ec50: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ec54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec58: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ec5c: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EC5Cu;
    SET_GPR_U32(ctx, 31, 0x12EC64u);
    ctx->pc = 0x12EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC5Cu;
            // 0x12ec60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC64u; }
        if (ctx->pc != 0x12EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC64u; }
        if (ctx->pc != 0x12EC64u) { return; }
    }
    ctx->pc = 0x12EC64u;
    // 0x12ec64: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12ec68: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12ec6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EC6Cu;
    {
        const bool branch_taken_0x12ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC6Cu;
            // 0x12ec70: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec6c) {
            ctx->pc = 0x12EC8Cu;
            goto label_12ec8c;
        }
    }
    ctx->pc = 0x12EC74u;
    // 0x12ec74: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ec78: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec7c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ec80: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EC80u;
    SET_GPR_U32(ctx, 31, 0x12EC88u);
    ctx->pc = 0x12EC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC80u;
            // 0x12ec84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC88u; }
        if (ctx->pc != 0x12EC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EC88u; }
        if (ctx->pc != 0x12EC88u) { return; }
    }
    ctx->pc = 0x12EC88u;
    // 0x12ec88: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ec8c:
    // 0x12ec8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ec90: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x12ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_12ec94:
    // 0x12ec94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ec98:
    // 0x12ec98: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12EC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC98u;
            // 0x12ec9c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECA0u;
    // 0x12eca0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12eca4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x12eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12eca8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x12ECA8u;
    {
        const bool branch_taken_0x12eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eca8) {
            ctx->pc = 0x12ECACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECA8u;
            // 0x12ecac: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ED04u;
            goto label_12ed04;
        }
    }
    ctx->pc = 0x12ECB0u;
    // 0x12ecb0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x12ECB0u;
    {
        const bool branch_taken_0x12ecb0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECB0u;
            // 0x12ecb4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecb0) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12ECB8u;
    // 0x12ecb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ecbc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12ecc0: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12ECC0u;
    SET_GPR_U32(ctx, 31, 0x12ECC8u);
    ctx->pc = 0x12ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECC0u;
            // 0x12ecc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECC8u; }
        if (ctx->pc != 0x12ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECC8u; }
        if (ctx->pc != 0x12ECC8u) { return; }
    }
    ctx->pc = 0x12ECC8u;
    // 0x12ecc8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x12ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x12eccc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ecd0: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12ECD0u;
    SET_GPR_U32(ctx, 31, 0x12ECD8u);
    ctx->pc = 0x12ECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECD0u;
            // 0x12ecd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECD8u; }
        if (ctx->pc != 0x12ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ECD8u; }
        if (ctx->pc != 0x12ECD8u) { return; }
    }
    ctx->pc = 0x12ECD8u;
    // 0x12ecd8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ECD8u;
    {
        const bool branch_taken_0x12ecd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECD8u;
            // 0x12ecdc: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecd8) {
            ctx->pc = 0x12ECF0u;
            goto label_12ecf0;
        }
    }
    ctx->pc = 0x12ECE0u;
label_12ece0:
    // 0x12ece0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x12ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12ece4: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x12ece4u;
    SET_GPR_VEC(ctx, 19, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x12ece8: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECE8u;
            // 0x12ecec: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12ECF0u;
label_12ecf0:
    // 0x12ecf0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x12ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_12ecf4:
    // 0x12ecf4: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x12ecf8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x12ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ecfc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x12ECFCu;
    {
        const bool branch_taken_0x12ecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECFCu;
            // 0x12ed00: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecfc) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12ED04u;
label_12ed04:
    // 0x12ed04: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x12ED04u;
    {
        const bool branch_taken_0x12ed04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED04u;
            // 0x12ed08: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed04) {
            ctx->pc = 0x12EF5Cu;
            goto label_12ef5c;
        }
    }
    ctx->pc = 0x12ED0Cu;
    // 0x12ed0c: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ED0Cu;
    {
        const bool branch_taken_0x12ed0c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12ED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED0Cu;
            // 0x12ed10: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed0c) {
            ctx->pc = 0x12ED24u;
            goto label_12ed24;
        }
    }
    ctx->pc = 0x12ED14u;
    // 0x12ed14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12ed14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed18: 0xc04c184  jal         func_130610
    ctx->pc = 0x12ED18u;
    SET_GPR_U32(ctx, 31, 0x12ED20u);
    ctx->pc = 0x12ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED18u;
            // 0x12ed1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED20u; }
        if (ctx->pc != 0x12ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED20u; }
        if (ctx->pc != 0x12ED20u) { return; }
    }
    ctx->pc = 0x12ED20u;
    // 0x12ed20: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ed24:
    // 0x12ed24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ed28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ed2c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12ED2Cu;
    {
        const bool branch_taken_0x12ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED2Cu;
            // 0x12ed30: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed2c) {
            ctx->pc = 0x12ED78u;
            goto label_12ed78;
        }
    }
    ctx->pc = 0x12ED34u;
    // 0x12ed34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ed38: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x12ED38u;
    SET_GPR_U32(ctx, 31, 0x12ED40u);
    ctx->pc = 0x12ED3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED38u;
            // 0x12ed3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED40u; }
        if (ctx->pc != 0x12ED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED40u; }
        if (ctx->pc != 0x12ED40u) { return; }
    }
    ctx->pc = 0x12ED40u;
    // 0x12ed40: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12ed44: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x12ed44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ed48: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12ed4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12ed4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ed50: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12ed54: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x12ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x12ed58: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12ed5c: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x12ED5Cu;
    SET_GPR_U32(ctx, 31, 0x12ED64u);
    ctx->pc = 0x12ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED5Cu;
            // 0x12ed60: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED64u; }
        if (ctx->pc != 0x12ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED64u; }
        if (ctx->pc != 0x12ED64u) { return; }
    }
    ctx->pc = 0x12ED64u;
    // 0x12ed64: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ed68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed6c: 0xc04c184  jal         func_130610
    ctx->pc = 0x12ED6Cu;
    SET_GPR_U32(ctx, 31, 0x12ED74u);
    ctx->pc = 0x12ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED6Cu;
            // 0x12ed70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED74u; }
        if (ctx->pc != 0x12ED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED74u; }
        if (ctx->pc != 0x12ED74u) { return; }
    }
    ctx->pc = 0x12ED74u;
    // 0x12ed74: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12ed78:
    // 0x12ed78: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ed7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12ED7Cu;
    {
        const bool branch_taken_0x12ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED7Cu;
            // 0x12ed80: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed7c) {
            ctx->pc = 0x12EE00u;
            goto label_12ee00;
        }
    }
    ctx->pc = 0x12ED84u;
    // 0x12ed84: 0x0  nop
    ctx->pc = 0x12ed84u;
    // NOP
label_12ed88:
    // 0x12ed88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ed8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed90: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ed94: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12ED94u;
    SET_GPR_U32(ctx, 31, 0x12ED9Cu);
    ctx->pc = 0x12ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ED94u;
            // 0x12ed98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED9Cu; }
        if (ctx->pc != 0x12ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ED9Cu; }
        if (ctx->pc != 0x12ED9Cu) { return; }
    }
    ctx->pc = 0x12ED9Cu;
    // 0x12ed9c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x12ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12eda0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x12eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12eda4: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EDA4u;
    {
        const bool branch_taken_0x12eda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDA4u;
            // 0x12eda8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eda4) {
            ctx->pc = 0x12EDCCu;
            goto label_12edcc;
        }
    }
    ctx->pc = 0x12EDACu;
    // 0x12edac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12edacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12edb4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edb8: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EDB8u;
    SET_GPR_U32(ctx, 31, 0x12EDC0u);
    ctx->pc = 0x12EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDB8u;
            // 0x12edbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDC0u; }
        if (ctx->pc != 0x12EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDC0u; }
        if (ctx->pc != 0x12EDC0u) { return; }
    }
    ctx->pc = 0x12EDC0u;
    // 0x12edc0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12edc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12EDC4u;
    {
        const bool branch_taken_0x12edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDC4u;
            // 0x12edc8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edc4) {
            ctx->pc = 0x12EDFCu;
            goto label_12edfc;
        }
    }
    ctx->pc = 0x12EDCCu;
label_12edcc:
    // 0x12edcc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12edccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12edd0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12edd8: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EDD8u;
    SET_GPR_U32(ctx, 31, 0x12EDE0u);
    ctx->pc = 0x12EDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDD8u;
            // 0x12eddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDE0u; }
        if (ctx->pc != 0x12EDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDE0u; }
        if (ctx->pc != 0x12EDE0u) { return; }
    }
    ctx->pc = 0x12EDE0u;
    // 0x12ede0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12ede0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ede4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ede8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12edec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12edf0: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EDF0u;
    SET_GPR_U32(ctx, 31, 0x12EDF8u);
    ctx->pc = 0x12EDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDF0u;
            // 0x12edf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDF8u; }
        if (ctx->pc != 0x12EDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDF8u; }
        if (ctx->pc != 0x12EDF8u) { return; }
    }
    ctx->pc = 0x12EDF8u;
    // 0x12edf8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12edfc:
    // 0x12edfc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12ee00:
    // 0x12ee00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ee04: 0xc04b744  jal         func_12DD10
    ctx->pc = 0x12EE04u;
    SET_GPR_U32(ctx, 31, 0x12EE0Cu);
    ctx->pc = 0x12EE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE04u;
            // 0x12ee08: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD10u;
    if (runtime->hasFunction(0x12DD10u)) {
        auto targetFn = runtime->lookupFunction(0x12DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE0Cu; }
        if (ctx->pc != 0x12EE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x12dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE0Cu; }
        if (ctx->pc != 0x12EE0Cu) { return; }
    }
    ctx->pc = 0x12EE0Cu;
    // 0x12ee0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ee10: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ee14: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12EE14u;
    SET_GPR_U32(ctx, 31, 0x12EE1Cu);
    ctx->pc = 0x12EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE14u;
            // 0x12ee18: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE1Cu; }
        if (ctx->pc != 0x12EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE1Cu; }
        if (ctx->pc != 0x12EE1Cu) { return; }
    }
    ctx->pc = 0x12EE1Cu;
    // 0x12ee1c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x12ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12ee20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ee20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee24: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x12ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ee28: 0xc04c1fc  jal         func_1307F0
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE28u;
            // 0x12ee2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1307F0u;
    if (runtime->hasFunction(0x1307F0u)) {
        auto targetFn = runtime->lookupFunction(0x1307F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE30u; }
        if (ctx->pc != 0x12EE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x1307f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE30u; }
        if (ctx->pc != 0x12EE30u) { return; }
    }
    ctx->pc = 0x12EE30u;
    // 0x12ee30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee34: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12ee38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EE38u;
    {
        const bool branch_taken_0x12ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE38u;
            // 0x12ee3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee38) {
            ctx->pc = 0x12EE50u;
            goto label_12ee50;
        }
    }
    ctx->pc = 0x12EE40u;
    // 0x12ee40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ee44: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12EE44u;
    SET_GPR_U32(ctx, 31, 0x12EE4Cu);
    ctx->pc = 0x12EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE44u;
            // 0x12ee48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE4Cu; }
        if (ctx->pc != 0x12EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE4Cu; }
        if (ctx->pc != 0x12EE4Cu) { return; }
    }
    ctx->pc = 0x12EE4Cu;
    // 0x12ee4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ee50:
    // 0x12ee50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12ee50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee54: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12EE54u;
    SET_GPR_U32(ctx, 31, 0x12EE5Cu);
    ctx->pc = 0x12EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE54u;
            // 0x12ee58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE5Cu; }
        if (ctx->pc != 0x12EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE5Cu; }
        if (ctx->pc != 0x12EE5Cu) { return; }
    }
    ctx->pc = 0x12EE5Cu;
    // 0x12ee5c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12EE5Cu;
    {
        const bool branch_taken_0x12ee5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE5Cu;
            // 0x12ee60: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee5c) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE64u;
    // 0x12ee64: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12EE64u;
    {
        const bool branch_taken_0x12ee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee64) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE6Cu;
    // 0x12ee6c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x12ee70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12ee70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12ee74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ee74u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12ee78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EE78u;
    {
        const bool branch_taken_0x12ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE78u;
            // 0x12ee7c: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee78) {
            ctx->pc = 0x12EE94u;
            goto label_12ee94;
        }
    }
    ctx->pc = 0x12EE80u;
    // 0x12ee80: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x12EE80u;
    {
        const bool branch_taken_0x12ee80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE80u;
            // 0x12ee84: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee80) {
            ctx->pc = 0x12EF2Cu;
            goto label_12ef2c;
        }
    }
    ctx->pc = 0x12EE88u;
    // 0x12ee88: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12ee8c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x12EE8Cu;
    {
        const bool branch_taken_0x12ee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE8Cu;
            // 0x12ee90: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee8c) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EE94u;
label_12ee94:
    // 0x12ee94: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12EE94u;
    {
        const bool branch_taken_0x12ee94 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12ee94) {
            ctx->pc = 0x12EEC0u;
            goto label_12eec0;
        }
    }
    ctx->pc = 0x12EE9Cu;
    // 0x12ee9c: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12EE9Cu;
    {
        const bool branch_taken_0x12ee9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE9Cu;
            // 0x12eea0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee9c) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEA4u;
    // 0x12eea4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12EEA4u;
    {
        const bool branch_taken_0x12eea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eea4) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEACu;
    // 0x12eeac: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x12eeb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12eeb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12eeb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12eeb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12eeb8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EEB8u;
    {
        const bool branch_taken_0x12eeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eeb8) {
            ctx->pc = 0x12EF1Cu;
            goto label_12ef1c;
        }
    }
    ctx->pc = 0x12EEC0u;
label_12eec0:
    // 0x12eec0: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12EEC0u;
    {
        const bool branch_taken_0x12eec0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEC0u;
            // 0x12eec4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eec0) {
            ctx->pc = 0x12EF14u;
            goto label_12ef14;
        }
    }
    ctx->pc = 0x12EEC8u;
    // 0x12eec8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12eec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eecc: 0xc04c184  jal         func_130610
    ctx->pc = 0x12EECCu;
    SET_GPR_U32(ctx, 31, 0x12EED4u);
    ctx->pc = 0x12EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EECCu;
            // 0x12eed0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EED4u; }
        if (ctx->pc != 0x12EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EED4u; }
        if (ctx->pc != 0x12EED4u) { return; }
    }
    ctx->pc = 0x12EED4u;
    // 0x12eed4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12eed8: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x12eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12eedc: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12EEDCu;
    SET_GPR_U32(ctx, 31, 0x12EEE4u);
    ctx->pc = 0x12EEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEDCu;
            // 0x12eee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEE4u; }
        if (ctx->pc != 0x12EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EEE4u; }
        if (ctx->pc != 0x12EEE4u) { return; }
    }
    ctx->pc = 0x12EEE4u;
    // 0x12eee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12eee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eee8: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EEE8u;
    {
        const bool branch_taken_0x12eee8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x12eee8) {
            ctx->pc = 0x12EEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEE8u;
            // 0x12eeec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EF08u;
            goto label_12ef08;
        }
    }
    ctx->pc = 0x12EEF0u;
    // 0x12eef0: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEF0u;
            // 0x12eef4: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EEF8u;
    // 0x12eef8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x12eef8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x12eefc: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x12EEFCu;
    {
        const bool branch_taken_0x12eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eefc) {
            ctx->pc = 0x12EF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEFCu;
            // 0x12ef00: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF04u;
    // 0x12ef04: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12ef04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12ef08:
    // 0x12ef08: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x12ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x12ef0c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EF0Cu;
    {
        const bool branch_taken_0x12ef0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF0Cu;
            // 0x12ef10: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef0c) {
            ctx->pc = 0x12EF30u;
            goto label_12ef30;
        }
    }
    ctx->pc = 0x12EF14u;
label_12ef14:
    // 0x12ef14: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x12EF14u;
    {
        const bool branch_taken_0x12ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF14u;
            // 0x12ef18: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef14) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF1Cu;
label_12ef1c:
    // 0x12ef1c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF1Cu;
    {
        const bool branch_taken_0x12ef1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF1Cu;
            // 0x12ef20: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef1c) {
            ctx->pc = 0x12EF44u;
            goto label_12ef44;
        }
    }
    ctx->pc = 0x12EF24u;
    // 0x12ef24: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EF24u;
    {
        const bool branch_taken_0x12ef24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x12EF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF24u;
            // 0x12ef28: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef24) {
            ctx->pc = 0x12EF3Cu;
            goto label_12ef3c;
        }
    }
    ctx->pc = 0x12EF2Cu;
label_12ef2c:
    // 0x12ef2c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_12ef30:
    // 0x12ef30: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x12ef30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ef34: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12EF34u;
    {
        const bool branch_taken_0x12ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF34u;
            // 0x12ef38: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef34) {
            ctx->pc = 0x12EFE8u;
            goto label_12efe8;
        }
    }
    ctx->pc = 0x12EF3Cu;
label_12ef3c:
    // 0x12ef3c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12EF3Cu;
    {
        const bool branch_taken_0x12ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF3Cu;
            // 0x12ef40: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef3c) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12EF44u;
label_12ef44:
    // 0x12ef44: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x12ef44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x12ef48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ef4c: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12EF4Cu;
    {
        const bool branch_taken_0x12ef4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x12EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF4Cu;
            // 0x12ef50: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef4c) {
            ctx->pc = 0x12ED88u;
            goto label_12ed88;
        }
    }
    ctx->pc = 0x12EF54u;
    // 0x12ef54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12EF54u;
    {
        const bool branch_taken_0x12ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF54u;
            // 0x12ef58: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef54) {
            ctx->pc = 0x12EFACu;
            goto label_12efac;
        }
    }
    ctx->pc = 0x12EF5Cu;
label_12ef5c:
    // 0x12ef5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF5Cu;
    {
        const bool branch_taken_0x12ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF5Cu;
            // 0x12ef60: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef5c) {
            ctx->pc = 0x12EF84u;
            goto label_12ef84;
        }
    }
    ctx->pc = 0x12EF64u;
    // 0x12ef64: 0x0  nop
    ctx->pc = 0x12ef64u;
    // NOP
label_12ef68:
    // 0x12ef68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ef6c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ef74: 0xc04bfc0  jal         func_12FF00
    ctx->pc = 0x12EF74u;
    SET_GPR_U32(ctx, 31, 0x12EF7Cu);
    ctx->pc = 0x12EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF74u;
            // 0x12ef78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF00u;
    if (runtime->hasFunction(0x12FF00u)) {
        auto targetFn = runtime->lookupFunction(0x12FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF7Cu; }
        if (ctx->pc != 0x12EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF7Cu; }
        if (ctx->pc != 0x12EF7Cu) { return; }
    }
    ctx->pc = 0x12EF7Cu;
    // 0x12ef7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12ef7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12ef80: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12ef84:
    // 0x12ef84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ef88: 0xc04b744  jal         func_12DD10
    ctx->pc = 0x12EF88u;
    SET_GPR_U32(ctx, 31, 0x12EF90u);
    ctx->pc = 0x12EF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EF88u;
            // 0x12ef8c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD10u;
    if (runtime->hasFunction(0x12DD10u)) {
        auto targetFn = runtime->lookupFunction(0x12DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF90u; }
        if (ctx->pc != 0x12EF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x12dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF90u; }
        if (ctx->pc != 0x12EF90u) { return; }
    }
    ctx->pc = 0x12EF90u;
    // 0x12ef90: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ef94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ef98: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x12ef98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x12ef9c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x12ef9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12efa0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12EFA0u;
    {
        const bool branch_taken_0x12efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFA0u;
            // 0x12efa4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efa0) {
            ctx->pc = 0x12EF68u;
            goto label_12ef68;
        }
    }
    ctx->pc = 0x12EFA8u;
    // 0x12efa8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12efac:
    // 0x12efac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efb0: 0xc04c184  jal         func_130610
    ctx->pc = 0x12EFB0u;
    SET_GPR_U32(ctx, 31, 0x12EFB8u);
    ctx->pc = 0x12EFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFB0u;
            // 0x12efb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130610u;
    if (runtime->hasFunction(0x130610u)) {
        auto targetFn = runtime->lookupFunction(0x130610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFB8u; }
        if (ctx->pc != 0x12EFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x130610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFB8u; }
        if (ctx->pc != 0x12EFB8u) { return; }
    }
    ctx->pc = 0x12EFB8u;
    // 0x12efb8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12efbc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x12efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12efc0: 0xc04c1e2  jal         func_130788
    ctx->pc = 0x12EFC0u;
    SET_GPR_U32(ctx, 31, 0x12EFC8u);
    ctx->pc = 0x12EFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFC0u;
            // 0x12efc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130788u;
    if (runtime->hasFunction(0x130788u)) {
        auto targetFn = runtime->lookupFunction(0x130788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFC8u; }
        if (ctx->pc != 0x12EFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x130788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFC8u; }
        if (ctx->pc != 0x12EFC8u) { return; }
    }
    ctx->pc = 0x12EFC8u;
    // 0x12efc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12efc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efcc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFCCu;
            // 0x12efd0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EFECu;
            goto label_12efec;
        }
    }
    ctx->pc = 0x12EFD4u;
    // 0x12efd4: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EFD4u;
    {
        const bool branch_taken_0x12efd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFD4u;
            // 0x12efd8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efd4) {
            ctx->pc = 0x12F038u;
            goto label_12f038;
        }
    }
    ctx->pc = 0x12EFDCu;
    // 0x12efdc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x12efdcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x12efe0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x12EFE0u;
    {
        const bool branch_taken_0x12efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12efe0) {
            ctx->pc = 0x12EFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFE0u;
            // 0x12efe4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F03Cu;
            goto label_12f03c;
        }
    }
    ctx->pc = 0x12EFE8u;
label_12efe8:
    // 0x12efe8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12efe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12efec:
    // 0x12efec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12EFECu;
    {
        const bool branch_taken_0x12efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFECu;
            // 0x12eff0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efec) {
            ctx->pc = 0x12F004u;
            goto label_12f004;
        }
    }
    ctx->pc = 0x12EFF4u;
    // 0x12eff4: 0x0  nop
    ctx->pc = 0x12eff4u;
    // NOP
label_12eff8:
    // 0x12eff8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x12eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12effc: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EFFCu;
    {
        const bool branch_taken_0x12effc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x12F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFFCu;
            // 0x12f000: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12effc) {
            ctx->pc = 0x12F01Cu;
            goto label_12f01c;
        }
    }
    ctx->pc = 0x12F004u;
label_12f004:
    // 0x12f004: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12f004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f008: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F008u;
    {
        const bool branch_taken_0x12f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F008u;
            // 0x12f00c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f008) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12F010u;
    // 0x12f010: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12f014: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12F014u;
    {
        const bool branch_taken_0x12f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F014u;
            // 0x12f018: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f014) {
            ctx->pc = 0x12F054u;
            goto label_12f054;
        }
    }
    ctx->pc = 0x12F01Cu;
label_12f01c:
    // 0x12f01c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x12f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12f020: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x12f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x12f024: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12f024u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12f028: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f02c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12F02Cu;
    {
        const bool branch_taken_0x12f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F02Cu;
            // 0x12f030: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f02c) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12F034u;
    // 0x12f034: 0x0  nop
    ctx->pc = 0x12f034u;
    // NOP
label_12f038:
    // 0x12f038: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12f038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12f03c:
    // 0x12f03c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12f03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f040: 0x0  nop
    ctx->pc = 0x12f040u;
    // NOP
    // 0x12f044: 0x0  nop
    ctx->pc = 0x12f044u;
    // NOP
    // 0x12f048: 0x0  nop
    ctx->pc = 0x12f048u;
    // NOP
    // 0x12f04c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F04Cu;
    {
        const bool branch_taken_0x12f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f04c) {
            ctx->pc = 0x12F038u;
            goto label_12f038;
        }
    }
    ctx->pc = 0x12F054u;
label_12f054:
    // 0x12f054: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f054u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f058:
    // 0x12f058: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12f05c: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12F05Cu;
    SET_GPR_U32(ctx, 31, 0x12F064u);
    ctx->pc = 0x12F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F05Cu;
            // 0x12f060: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F064u; }
        if (ctx->pc != 0x12F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F064u; }
        if (ctx->pc != 0x12F064u) { return; }
    }
    ctx->pc = 0x12F064u;
    // 0x12f064: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f068: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x12F068u;
    {
        const bool branch_taken_0x12f068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F068u;
            // 0x12f06c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f068) {
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12F070u;
    // 0x12f070: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F070u;
    {
        const bool branch_taken_0x12f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F070u;
            // 0x12f074: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f070) {
            ctx->pc = 0x12F08Cu;
            goto label_12f08c;
        }
    }
    ctx->pc = 0x12F078u;
    // 0x12f078: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F078u;
    {
        const bool branch_taken_0x12f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F078u;
            // 0x12f07c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f078) {
            ctx->pc = 0x12F088u;
            goto label_12f088;
        }
    }
    ctx->pc = 0x12F080u;
    // 0x12f080: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12F080u;
    SET_GPR_U32(ctx, 31, 0x12F088u);
    ctx->pc = 0x12F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F080u;
            // 0x12f084: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F088u; }
        if (ctx->pc != 0x12F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F088u; }
        if (ctx->pc != 0x12F088u) { return; }
    }
    ctx->pc = 0x12F088u;
label_12f088:
    // 0x12f088: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12f08c:
    // 0x12f08c: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12F08Cu;
    SET_GPR_U32(ctx, 31, 0x12F094u);
    ctx->pc = 0x12F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F08Cu;
            // 0x12f090: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F094u; }
        if (ctx->pc != 0x12F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F094u; }
        if (ctx->pc != 0x12F094u) { return; }
    }
    ctx->pc = 0x12F094u;
    // 0x12f094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F094u;
    {
        const bool branch_taken_0x12f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F094u;
            // 0x12f098: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f094) {
            ctx->pc = 0x12F0A0u;
            goto label_12f0a0;
        }
    }
    ctx->pc = 0x12F09Cu;
label_12f09c:
    // 0x12f09c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12f0a0:
    // 0x12f0a0: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x12F0A0u;
    SET_GPR_U32(ctx, 31, 0x12F0A8u);
    ctx->pc = 0x12F0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0A0u;
            // 0x12f0a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0A8u; }
        if (ctx->pc != 0x12F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0A8u; }
        if (ctx->pc != 0x12F0A8u) { return; }
    }
    ctx->pc = 0x12F0A8u;
    // 0x12f0a8: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x12f0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f0ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f0b0: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x12f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x12f0b4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12f0b8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F0B8u;
    {
        const bool branch_taken_0x12f0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f0b8) {
            ctx->pc = 0x12F0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0B8u;
            // 0x12f0bc: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F0C0u;
            goto label_12f0c0;
        }
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12f0c4:
    // 0x12f0c4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12f0c8: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x12f0c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12f0cc: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x12f0ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12f0d0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12f0d4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x12f0d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12f0d8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x12f0d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12f0dc: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f0e0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x12f0e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12f0e4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x12f0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f0e8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12f0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12F0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F0ECu;
            // 0x12f0f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DF9Cu: goto label_12df9c;
            case 0x12DFDCu: goto label_12dfdc;
            case 0x12E01Cu: goto label_12e01c;
            case 0x12E024u: goto label_12e024;
            case 0x12E048u: goto label_12e048;
            case 0x12E080u: goto label_12e080;
            case 0x12E088u: goto label_12e088;
            case 0x12E0F8u: goto label_12e0f8;
            case 0x12E134u: goto label_12e134;
            case 0x12E140u: goto label_12e140;
            case 0x12E164u: goto label_12e164;
            case 0x12E190u: goto label_12e190;
            case 0x12E22Cu: goto label_12e22c;
            case 0x12E268u: goto label_12e268;
            case 0x12E284u: goto label_12e284;
            case 0x12E28Cu: goto label_12e28c;
            case 0x12E2A8u: goto label_12e2a8;
            case 0x12E2C0u: goto label_12e2c0;
            case 0x12E2E8u: goto label_12e2e8;
            case 0x12E318u: goto label_12e318;
            case 0x12E334u: goto label_12e334;
            case 0x12E338u: goto label_12e338;
            case 0x12E358u: goto label_12e358;
            case 0x12E35Cu: goto label_12e35c;
            case 0x12E37Cu: goto label_12e37c;
            case 0x12E398u: goto label_12e398;
            case 0x12E3C0u: goto label_12e3c0;
            case 0x12E3CCu: goto label_12e3cc;
            case 0x12E440u: goto label_12e440;
            case 0x12E450u: goto label_12e450;
            case 0x12E46Cu: goto label_12e46c;
            case 0x12E478u: goto label_12e478;
            case 0x12E48Cu: goto label_12e48c;
            case 0x12E4C8u: goto label_12e4c8;
            case 0x12E4E4u: goto label_12e4e4;
            case 0x12E4F0u: goto label_12e4f0;
            case 0x12E548u: goto label_12e548;
            case 0x12E5F4u: goto label_12e5f4;
            case 0x12E638u: goto label_12e638;
            case 0x12E660u: goto label_12e660;
            case 0x12E6E0u: goto label_12e6e0;
            case 0x12E710u: goto label_12e710;
            case 0x12E728u: goto label_12e728;
            case 0x12E7B0u: goto label_12e7b0;
            case 0x12E7D4u: goto label_12e7d4;
            case 0x12E7D8u: goto label_12e7d8;
            case 0x12E7DCu: goto label_12e7dc;
            case 0x12E7E8u: goto label_12e7e8;
            case 0x12E858u: goto label_12e858;
            case 0x12E860u: goto label_12e860;
            case 0x12E868u: goto label_12e868;
            case 0x12E890u: goto label_12e890;
            case 0x12E924u: goto label_12e924;
            case 0x12E928u: goto label_12e928;
            case 0x12E92Cu: goto label_12e92c;
            case 0x12E930u: goto label_12e930;
            case 0x12E934u: goto label_12e934;
            case 0x12E958u: goto label_12e958;
            case 0x12E968u: goto label_12e968;
            case 0x12E9A8u: goto label_12e9a8;
            case 0x12E9C8u: goto label_12e9c8;
            case 0x12E9E4u: goto label_12e9e4;
            case 0x12E9FCu: goto label_12e9fc;
            case 0x12EA00u: goto label_12ea00;
            case 0x12EA28u: goto label_12ea28;
            case 0x12EA30u: goto label_12ea30;
            case 0x12EA60u: goto label_12ea60;
            case 0x12EAACu: goto label_12eaac;
            case 0x12EAD0u: goto label_12ead0;
            case 0x12EAE0u: goto label_12eae0;
            case 0x12EB0Cu: goto label_12eb0c;
            case 0x12EB5Cu: goto label_12eb5c;
            case 0x12EB60u: goto label_12eb60;
            case 0x12EB64u: goto label_12eb64;
            case 0x12EB90u: goto label_12eb90;
            case 0x12EB98u: goto label_12eb98;
            case 0x12EBA8u: goto label_12eba8;
            case 0x12EBD8u: goto label_12ebd8;
            case 0x12EBFCu: goto label_12ebfc;
            case 0x12EC18u: goto label_12ec18;
            case 0x12EC34u: goto label_12ec34;
            case 0x12EC8Cu: goto label_12ec8c;
            case 0x12EC94u: goto label_12ec94;
            case 0x12EC98u: goto label_12ec98;
            case 0x12ECE0u: goto label_12ece0;
            case 0x12ECF0u: goto label_12ecf0;
            case 0x12ECF4u: goto label_12ecf4;
            case 0x12ED04u: goto label_12ed04;
            case 0x12ED24u: goto label_12ed24;
            case 0x12ED78u: goto label_12ed78;
            case 0x12ED88u: goto label_12ed88;
            case 0x12EDCCu: goto label_12edcc;
            case 0x12EDFCu: goto label_12edfc;
            case 0x12EE00u: goto label_12ee00;
            case 0x12EE50u: goto label_12ee50;
            case 0x12EE94u: goto label_12ee94;
            case 0x12EEC0u: goto label_12eec0;
            case 0x12EF08u: goto label_12ef08;
            case 0x12EF14u: goto label_12ef14;
            case 0x12EF1Cu: goto label_12ef1c;
            case 0x12EF2Cu: goto label_12ef2c;
            case 0x12EF30u: goto label_12ef30;
            case 0x12EF3Cu: goto label_12ef3c;
            case 0x12EF44u: goto label_12ef44;
            case 0x12EF5Cu: goto label_12ef5c;
            case 0x12EF68u: goto label_12ef68;
            case 0x12EF84u: goto label_12ef84;
            case 0x12EFACu: goto label_12efac;
            case 0x12EFE8u: goto label_12efe8;
            case 0x12EFECu: goto label_12efec;
            case 0x12EFF8u: goto label_12eff8;
            case 0x12F004u: goto label_12f004;
            case 0x12F01Cu: goto label_12f01c;
            case 0x12F038u: goto label_12f038;
            case 0x12F03Cu: goto label_12f03c;
            case 0x12F054u: goto label_12f054;
            case 0x12F058u: goto label_12f058;
            case 0x12F088u: goto label_12f088;
            case 0x12F08Cu: goto label_12f08c;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F0F4u;
}
