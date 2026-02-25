#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpmul
// Address: 0x102ec0 - 0x1030b4
void fpmul_0x102ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpmul_0x102ec0");
#endif

    ctx->pc = 0x102ec0u;

    // 0x102ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x102ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x102ec4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x102ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x102ec8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102ecc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x102eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x102ed0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ed4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x102ed4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x102ed8: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102ED8u;
    SET_GPR_U32(ctx, 31, 0x102EE0u);
    ctx->pc = 0x102EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102ED8u;
            // 0x102edc: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EE0u; }
        if (ctx->pc != 0x102EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EE0u; }
        if (ctx->pc != 0x102EE0u) { return; }
    }
    ctx->pc = 0x102EE0u;
    // 0x102ee0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x102ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x102ee4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x102ee8: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102EE8u;
    SET_GPR_U32(ctx, 31, 0x102EF0u);
    ctx->pc = 0x102EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102EE8u;
            // 0x102eec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EF0u; }
        if (ctx->pc != 0x102EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EF0u; }
        if (ctx->pc != 0x102EF0u) { return; }
    }
    ctx->pc = 0x102EF0u;
    // 0x102ef0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x102ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ef4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x102ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102ef8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x102EF8u;
    {
        const bool branch_taken_0x102ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102EF8u;
            // 0x102efc: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ef8) {
            ctx->pc = 0x102F54u;
            goto label_102f54;
        }
    }
    ctx->pc = 0x102F00u;
    // 0x102f00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102f04: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x102f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102f08: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x102F08u;
    {
        const bool branch_taken_0x102f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f08) {
            ctx->pc = 0x102F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102F08u;
            // 0x102f0c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F10u;
    // 0x102f10: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x102f10u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
    // 0x102f14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102F14u;
    {
        const bool branch_taken_0x102f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F14u;
            // 0x102f18: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f14) {
            ctx->pc = 0x102F30u;
            goto label_102f30;
        }
    }
    ctx->pc = 0x102F1Cu;
    // 0x102f1c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x102f1cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x102f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102F20u;
    {
        const bool branch_taken_0x102f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F20u;
            // 0x102f24: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f20) {
            ctx->pc = 0x102F40u;
            goto label_102f40;
        }
    }
    ctx->pc = 0x102F28u;
    // 0x102f28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102F28u;
    {
        const bool branch_taken_0x102f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F28u;
            // 0x102f2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f28) {
            ctx->pc = 0x102F5Cu;
            goto label_102f5c;
        }
    }
    ctx->pc = 0x102F30u;
label_102f30:
    // 0x102f30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102F30u;
    {
        const bool branch_taken_0x102f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F30u;
            // 0x102f34: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f30) {
            ctx->pc = 0x102F4Cu;
            goto label_102f4c;
        }
    }
    ctx->pc = 0x102F38u;
    // 0x102f38: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102F38u;
    {
        const bool branch_taken_0x102f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F38u;
            // 0x102f3c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f38) {
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F40u;
label_102f40:
    // 0x102f40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x102f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x102f44: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x102F44u;
    {
        const bool branch_taken_0x102f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F44u;
            // 0x102f48: 0x24443718  addiu       $a0, $v0, 0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f44) {
            ctx->pc = 0x10309Cu;
            goto label_10309c;
        }
    }
    ctx->pc = 0x102F4Cu;
label_102f4c:
    // 0x102f4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102F4Cu;
    {
        const bool branch_taken_0x102f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F4Cu;
            // 0x102f50: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f4c) {
            ctx->pc = 0x102F70u;
            goto label_102f70;
        }
    }
    ctx->pc = 0x102F54u;
label_102f54:
    // 0x102f54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x102f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102f58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102f5c:
    // 0x102f5c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x102f60: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x102f60u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102f64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102f68: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F68u;
            // 0x102f6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f68) {
            ctx->pc = 0x10309Cu;
            goto label_10309c;
        }
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F70u;
            // 0x102f74: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F94u;
            goto label_102f94;
        }
    }
    ctx->pc = 0x102F78u;
    // 0x102f78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_102f7c:
    // 0x102f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x102f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102f84: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x102f84u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102f88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102f8c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x102F8Cu;
    {
        const bool branch_taken_0x102f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102F8Cu;
            // 0x102f90: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f8c) {
            ctx->pc = 0x10309Cu;
            goto label_10309c;
        }
    }
    ctx->pc = 0x102F94u;
label_102f94:
    // 0x102f94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x102f98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x102f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102f9c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x102f9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102fa0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x102fa4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102fa8: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x102fa8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x102fac: 0x2812  mflo        $a1
    ctx->pc = 0x102facu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x102fb0: 0x2010  mfhi        $a0
    ctx->pc = 0x102fb0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x102fb4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x102fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x102fb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x102fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x102fbc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x102fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x102fc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102fc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x102fc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x102fc8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x102fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x102fcc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x102fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102fd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x102fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x102fd4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x102fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x102fd8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x102fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x102fdc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x102fdcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x102fe0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x102fe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x102fe4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x102FE4u;
    {
        const bool branch_taken_0x102fe4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x102FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102FE4u;
            // 0x102fe8: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fe4) {
            ctx->pc = 0x103018u;
            goto label_103018;
        }
    }
    ctx->pc = 0x102FECu;
    // 0x102fec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x102fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x102ff0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x102ff0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x102ff4: 0x0  nop
    ctx->pc = 0x102ff4u;
    // NOP
label_102ff8:
    // 0x102ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102FF8u;
    {
        const bool branch_taken_0x102ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102FF8u;
            // 0x102ffc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ff8) {
            ctx->pc = 0x103008u;
            goto label_103008;
        }
    }
    ctx->pc = 0x103000u;
    // 0x103000: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x103000u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x103004: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x103004u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_103008:
    // 0x103008: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x103008u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x10300c: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10300Cu;
    {
        const bool branch_taken_0x10300c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x103010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10300Cu;
            // 0x103010: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10300c) {
            ctx->pc = 0x102FF8u;
            goto label_102ff8;
        }
    }
    ctx->pc = 0x103014u;
    // 0x103014: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x103014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_103018:
    // 0x103018: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x10301c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10301cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x103020: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x103020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x103024: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x103024u;
    {
        const bool branch_taken_0x103024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103024u;
            // 0x103028: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)127u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103024) {
            ctx->pc = 0x103068u;
            goto label_103068;
        }
    }
    ctx->pc = 0x10302Cu;
    // 0x10302c: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x10302cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x103030: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103034: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x103034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x103038: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x103038u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x10303c: 0x0  nop
    ctx->pc = 0x10303cu;
    // NOP
label_103040:
    // 0x103040: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x103044: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x103044u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x103048: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x103048u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x10304c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x10304cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x103050: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x103050u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x103054: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x103054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x103058: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x103058u;
    {
        const bool branch_taken_0x103058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103058u;
            // 0x10305c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103058) {
            ctx->pc = 0x103040u;
            goto label_103040;
        }
    }
    ctx->pc = 0x103060u;
    // 0x103060: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x103060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x103064: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x103064u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)127u)));
label_103068:
    // 0x103068: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x103068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10306c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10306Cu;
    {
        const bool branch_taken_0x10306c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10306c) {
            ctx->pc = 0x103070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10306Cu;
            // 0x103070: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103090u;
            goto label_103090;
        }
    }
    ctx->pc = 0x103074u;
    // 0x103074: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x103074u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)128u)));
    // 0x103078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103078u;
    {
        const bool branch_taken_0x103078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103078u;
            // 0x10307c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103078) {
            ctx->pc = 0x103088u;
            goto label_103088;
        }
    }
    ctx->pc = 0x103080u;
    // 0x103080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103080u;
    {
        const bool branch_taken_0x103080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103080u;
            // 0x103084: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103080) {
            ctx->pc = 0x10308Cu;
            goto label_10308c;
        }
    }
    ctx->pc = 0x103088u;
label_103088:
    // 0x103088: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x103088u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_10308c:
    // 0x10308c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x10308cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_103090:
    // 0x103090: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103094: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x103094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x103098: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x103098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_10309c:
    // 0x10309c: 0xc040a8a  jal         func_102A28
    ctx->pc = 0x10309Cu;
    SET_GPR_U32(ctx, 31, 0x1030A4u);
    ctx->pc = 0x102A28u;
    if (runtime->hasFunction(0x102A28u)) {
        auto targetFn = runtime->lookupFunction(0x102A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030A4u; }
        if (ctx->pc != 0x1030A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x102a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030A4u; }
        if (ctx->pc != 0x1030A4u) { return; }
    }
    ctx->pc = 0x1030A4u;
    // 0x1030a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1030a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1030a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1030a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1030ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1030ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1030ACu;
            // 0x1030b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102F30u: goto label_102f30;
            case 0x102F40u: goto label_102f40;
            case 0x102F4Cu: goto label_102f4c;
            case 0x102F54u: goto label_102f54;
            case 0x102F5Cu: goto label_102f5c;
            case 0x102F70u: goto label_102f70;
            case 0x102F7Cu: goto label_102f7c;
            case 0x102F94u: goto label_102f94;
            case 0x102FF8u: goto label_102ff8;
            case 0x103008u: goto label_103008;
            case 0x103018u: goto label_103018;
            case 0x103040u: goto label_103040;
            case 0x103068u: goto label_103068;
            case 0x103088u: goto label_103088;
            case 0x10308Cu: goto label_10308c;
            case 0x103090u: goto label_103090;
            case 0x10309Cu: goto label_10309c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1030B4u;
}
