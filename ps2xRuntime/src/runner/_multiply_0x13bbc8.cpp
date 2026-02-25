#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _multiply
// Address: 0x13bbc8 - 0x13bdf4
void _multiply_0x13bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_multiply_0x13bbc8");
#endif

    ctx->pc = 0x13bbc8u;

    // 0x13bbc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13bbcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13bbd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bbd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13bbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13bbdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13bbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbe0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x13bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x13bbe4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13bbe8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13bbec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13bbf0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x13bbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13bbf4: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x13bbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bbf8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x13bbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13bbfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BBFCu;
    {
        const bool branch_taken_0x13bbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBFCu;
            // 0x13bc00: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbfc) {
            ctx->pc = 0x13BC14u;
            goto label_13bc14;
        }
    }
    ctx->pc = 0x13BC04u;
    // 0x13bc04: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13bc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc08: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x13bc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc0c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13bc10: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13bc14:
    // 0x13bc14: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x13bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13bc18: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x13bc1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13bc20: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x13bc20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13bc24: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13BC24u;
    SET_GPR_U32(ctx, 31, 0x13BC2Cu);
    ctx->pc = 0x13BC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC24u;
            // 0x13bc28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC2Cu; }
        if (ctx->pc != 0x13BC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC2Cu; }
        if (ctx->pc != 0x13BC2Cu) { return; }
    }
    ctx->pc = 0x13BC2Cu;
    // 0x13bc2c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x13bc2cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc30: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13bc34: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x13bc38: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x13bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x13bc3c: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x13bc3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13bc40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13BC40u;
    {
        const bool branch_taken_0x13bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC40u;
            // 0x13bc44: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc40) {
            ctx->pc = 0x13BC7Cu;
            goto label_13bc7c;
        }
    }
    ctx->pc = 0x13BC48u;
    // 0x13bc48: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13bc4c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x13bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bc50: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x13bc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13bc54: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x13bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_13bc58:
    // 0x13bc58: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x13bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x13bc5c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x13bc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x13bc60: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x13bc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13bc64: 0x0  nop
    ctx->pc = 0x13bc64u;
    // NOP
    // 0x13bc68: 0x0  nop
    ctx->pc = 0x13bc68u;
    // NOP
    // 0x13bc6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13BC6Cu;
    {
        const bool branch_taken_0x13bc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc6c) {
            ctx->pc = 0x13BC58u;
            goto label_13bc58;
        }
    }
    ctx->pc = 0x13BC74u;
    // 0x13bc74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13BC74u;
    {
        const bool branch_taken_0x13bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC74u;
            // 0x13bc78: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc74) {
            ctx->pc = 0x13BC90u;
            goto label_13bc90;
        }
    }
    ctx->pc = 0x13BC7Cu;
label_13bc7c:
    // 0x13bc7c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x13bc7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13bc80: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x13bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bc84: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x13bc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13bc88: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x13bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13bc8c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x13bc8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13bc90:
    // 0x13bc90: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x13bc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x13bc94: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x13bc94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x13bc98: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x13bc98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13bc9c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13BC9Cu;
    {
        const bool branch_taken_0x13bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC9Cu;
            // 0x13bca0: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc9c) {
            ctx->pc = 0x13BDACu;
            goto label_13bdac;
        }
    }
    ctx->pc = 0x13BCA4u;
    // 0x13bca4: 0x0  nop
    ctx->pc = 0x13bca4u;
    // NOP
label_13bca8:
    // 0x13bca8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13bcac: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x13bcacu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bcb0: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BCB0u;
    {
        const bool branch_taken_0x13bcb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BCB0u;
            // 0x13bcb4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bcb0) {
            ctx->pc = 0x13BD24u;
            goto label_13bd24;
        }
    }
    ctx->pc = 0x13BCB8u;
    // 0x13bcb8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x13bcb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13bcbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcc0: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x13bcc4: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_13bcc8:
    // 0x13bcc8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13bccc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x13bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13bcd0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x13bcd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x13bcd4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13bcd4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bcd8: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x13bcd8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13bcdc: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x13bcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13bce0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x13bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x13bce4: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x13bce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13bce8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x13bce8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bcec: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x13bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x13bcf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13bcf4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x13bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13bcf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bcfc: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x13bcfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x13bd00: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x13bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13bd04: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x13bd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x13bd08: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x13bd08u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x13bd0c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x13bd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x13bd10: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13BD10u;
    {
        const bool branch_taken_0x13bd10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD10u;
            // 0x13bd14: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd10) {
            ctx->pc = 0x13BCC8u;
            goto label_13bcc8;
        }
    }
    ctx->pc = 0x13BD18u;
    // 0x13bd18: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x13bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x13bd1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD1Cu;
            // 0x13bd20: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13BD2Cu;
            goto label_13bd2c;
        }
    }
    ctx->pc = 0x13BD24u;
label_13bd24:
    // 0x13bd24: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x13bd24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x13bd28: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_13bd2c:
    // 0x13bd2c: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x13bd2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x13bd30: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x13BD30u;
    {
        const bool branch_taken_0x13bd30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD30u;
            // 0x13bd34: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd30) {
            ctx->pc = 0x13BD9Cu;
            goto label_13bd9c;
        }
    }
    ctx->pc = 0x13BD38u;
    // 0x13bd38: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x13bd38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd3c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x13bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13bd40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13bd40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd44: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x13bd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13bd48:
    // 0x13bd48: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13bd4c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x13bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x13bd50: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x13bd50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x13bd54: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x13bd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x13bd58: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x13bd58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bd5c: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x13bd5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13bd60: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x13bd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13bd64: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x13bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x13bd68: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x13bd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13bd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bd70: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13bd74: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x13bd74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13bd78: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x13bd78u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x13bd7c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x13bd80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13bd84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13bd84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bd88: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13bd8c: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x13bd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x13bd90: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13BD90u;
    {
        const bool branch_taken_0x13bd90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BD90u;
            // 0x13bd94: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd90) {
            ctx->pc = 0x13BD48u;
            goto label_13bd48;
        }
    }
    ctx->pc = 0x13BD98u;
    // 0x13bd98: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x13bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_13bd9c:
    // 0x13bd9c: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x13bd9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bda0: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x13bda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13bda4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x13BDA4u;
    {
        const bool branch_taken_0x13bda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDA4u;
            // 0x13bda8: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bda4) {
            ctx->pc = 0x13BCA8u;
            goto label_13bca8;
        }
    }
    ctx->pc = 0x13BDACu;
label_13bdac:
    // 0x13bdac: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x13bdacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_13bdb0:
    // 0x13bdb0: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BDB0u;
    {
        const bool branch_taken_0x13bdb0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x13bdb0) {
            ctx->pc = 0x13BDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDB0u;
            // 0x13bdb4: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BDCCu;
            goto label_13bdcc;
        }
    }
    ctx->pc = 0x13BDB8u;
    // 0x13bdb8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x13bdbc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13bdc0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13BDC0u;
    {
        const bool branch_taken_0x13bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bdc0) {
            ctx->pc = 0x13BDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDC0u;
            // 0x13bdc4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BDB0u;
            goto label_13bdb0;
        }
    }
    ctx->pc = 0x13BDC8u;
    // 0x13bdc8: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x13bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_13bdcc:
    // 0x13bdcc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x13bdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13bdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bdd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x13bdd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bdd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13bdd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bddc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13bddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bde0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13bde0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bde4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13bde4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13bde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bdec: 0x3e00008  jr          $ra
    ctx->pc = 0x13BDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BDECu;
            // 0x13bdf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BC14u: goto label_13bc14;
            case 0x13BC58u: goto label_13bc58;
            case 0x13BC7Cu: goto label_13bc7c;
            case 0x13BC90u: goto label_13bc90;
            case 0x13BCA8u: goto label_13bca8;
            case 0x13BCC8u: goto label_13bcc8;
            case 0x13BD24u: goto label_13bd24;
            case 0x13BD2Cu: goto label_13bd2c;
            case 0x13BD48u: goto label_13bd48;
            case 0x13BD9Cu: goto label_13bd9c;
            case 0x13BDACu: goto label_13bdac;
            case 0x13BDB0u: goto label_13bdb0;
            case 0x13BDCCu: goto label_13bdcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BDF4u;
}
