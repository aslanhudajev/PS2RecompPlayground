#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lshift
// Address: 0x13bef8 - 0x13c070
void _lshift_0x13bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lshift_0x13bef8");
#endif

    ctx->pc = 0x13bef8u;

    // 0x13bef8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13befc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x13bf00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13bf04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13bf04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13bf0c: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x13bf0cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x13bf10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bf14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13bf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13bf1c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x13bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x13bf20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13bf24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13bf28: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bf2c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x13bf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13bf30: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x13bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13bf34: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x13bf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13bf38: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x13bf38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13bf3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13BF3Cu;
    {
        const bool branch_taken_0x13bf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF3Cu;
            // 0x13bf40: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf3c) {
            ctx->pc = 0x13BF74u;
            goto label_13bf74;
        }
    }
    ctx->pc = 0x13BF44u;
    // 0x13bf44: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x13bf44u;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x13bf48: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13bf4c: 0x0  nop
    ctx->pc = 0x13bf4cu;
    // NOP
label_13bf50:
    // 0x13bf50: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x13bf50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13bf54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13bf58: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x13bf58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13bf5c: 0x0  nop
    ctx->pc = 0x13bf5cu;
    // NOP
    // 0x13bf60: 0x0  nop
    ctx->pc = 0x13bf60u;
    // NOP
    // 0x13bf64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13BF64u;
    {
        const bool branch_taken_0x13bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf64) {
            ctx->pc = 0x13BF50u;
            goto label_13bf50;
        }
    }
    ctx->pc = 0x13BF6Cu;
    // 0x13bf6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13BF6Cu;
    {
        const bool branch_taken_0x13bf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf6c) {
            ctx->pc = 0x13BF7Cu;
            goto label_13bf7c;
        }
    }
    ctx->pc = 0x13BF74u;
label_13bf74:
    // 0x13bf74: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x13bf74u;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x13bf78: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x13bf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_13bf7c:
    // 0x13bf7c: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13BF7Cu;
    SET_GPR_U32(ctx, 31, 0x13BF84u);
    ctx->pc = 0x13BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF7Cu;
            // 0x13bf80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF84u; }
        if (ctx->pc != 0x13BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF84u; }
        if (ctx->pc != 0x13BF84u) { return; }
    }
    ctx->pc = 0x13BF84u;
    // 0x13bf84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13bf84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf88: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x13BF88u;
    {
        const bool branch_taken_0x13bf88 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x13BF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BF88u;
            // 0x13bf8c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf88) {
            ctx->pc = 0x13BFB4u;
            goto label_13bfb4;
        }
    }
    ctx->pc = 0x13BF90u;
    // 0x13bf90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13bf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf94: 0x0  nop
    ctx->pc = 0x13bf94u;
    // NOP
label_13bf98:
    // 0x13bf98: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x13bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x13bf9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13bf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13bfa0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13bfa4: 0x0  nop
    ctx->pc = 0x13bfa4u;
    // NOP
    // 0x13bfa8: 0x0  nop
    ctx->pc = 0x13bfa8u;
    // NOP
    // 0x13bfac: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13BFACu;
    {
        const bool branch_taken_0x13bfac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfac) {
            ctx->pc = 0x13BF98u;
            goto label_13bf98;
        }
    }
    ctx->pc = 0x13BFB4u;
label_13bfb4:
    // 0x13bfb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bfb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13bfc0: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFC0u;
            // 0x13bfc4: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13C010u;
            goto label_13c010;
        }
    }
    ctx->pc = 0x13BFC8u;
    // 0x13bfc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13bfcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13bfccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd0: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x13bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13bfd4: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x13bfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13bfd8:
    // 0x13bfd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bfdc: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x13bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x13bfe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13bfe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13bfe4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x13bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13bfe8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13bfec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bff0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13bff4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x13bff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13bff8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13BFF8u;
    {
        const bool branch_taken_0x13bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BFF8u;
            // 0x13bffc: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bff8) {
            ctx->pc = 0x13BFD8u;
            goto label_13bfd8;
        }
    }
    ctx->pc = 0x13C000u;
    // 0x13c000: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x13c000u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x13c004: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13c004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x13c008: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C008u;
    {
        const bool branch_taken_0x13c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C008u;
            // 0x13c00c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c008) {
            ctx->pc = 0x13C034u;
            goto label_13c034;
        }
    }
    ctx->pc = 0x13C010u;
label_13c010:
    // 0x13c010: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13c014: 0x0  nop
    ctx->pc = 0x13c014u;
    // NOP
label_13c018:
    // 0x13c018: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c01c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13c020: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x13c020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13c024: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x13c024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13c028: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13c02c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13C02Cu;
    {
        const bool branch_taken_0x13c02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c02c) {
            ctx->pc = 0x13C018u;
            goto label_13c018;
        }
    }
    ctx->pc = 0x13C034u;
label_13c034:
    // 0x13c034: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x13c034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x13c038: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c03c: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x13C03Cu;
    SET_GPR_U32(ctx, 31, 0x13C044u);
    ctx->pc = 0x13C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C03Cu;
            // 0x13c040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C044u; }
        if (ctx->pc != 0x13C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C044u; }
        if (ctx->pc != 0x13C044u) { return; }
    }
    ctx->pc = 0x13C044u;
    // 0x13c044: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c048: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c04c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13c04cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c050: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x13c050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c054: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13c054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c058: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13c058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c05c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13c05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c060: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13c060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c068: 0x3e00008  jr          $ra
    ctx->pc = 0x13C068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C068u;
            // 0x13c06c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BF50u: goto label_13bf50;
            case 0x13BF74u: goto label_13bf74;
            case 0x13BF7Cu: goto label_13bf7c;
            case 0x13BF98u: goto label_13bf98;
            case 0x13BFB4u: goto label_13bfb4;
            case 0x13BFD8u: goto label_13bfd8;
            case 0x13C010u: goto label_13c010;
            case 0x13C018u: goto label_13c018;
            case 0x13C034u: goto label_13c034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C070u;
}
