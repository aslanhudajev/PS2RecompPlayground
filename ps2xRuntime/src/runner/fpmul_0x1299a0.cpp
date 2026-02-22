#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpmul
// Address: 0x1299a0 - 0x129b94
void fpmul_0x1299a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1299a0u;

    // 0x1299a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1299a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1299a4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1299a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1299a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1299a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1299ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1299acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1299b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1299b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299b4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1299b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1299b8: 0xc04a586  jal         func_129618
    ctx->pc = 0x1299B8u;
    SET_GPR_U32(ctx, 31, 0x1299C0u);
    ctx->pc = 0x1299BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1299B8u;
            // 0x1299bc: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299C0u; }
        if (ctx->pc != 0x1299C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299C0u; }
        if (ctx->pc != 0x1299C0u) { return; }
    }
    ctx->pc = 0x1299C0u;
    // 0x1299c0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1299c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1299c4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1299c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1299c8: 0xc04a586  jal         func_129618
    ctx->pc = 0x1299C8u;
    SET_GPR_U32(ctx, 31, 0x1299D0u);
    ctx->pc = 0x1299CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1299C8u;
            // 0x1299cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299D0u; }
        if (ctx->pc != 0x1299D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299D0u; }
        if (ctx->pc != 0x1299D0u) { return; }
    }
    ctx->pc = 0x1299D0u;
    // 0x1299d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1299d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1299d4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1299d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1299d8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1299D8u;
    {
        const bool branch_taken_0x1299d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1299DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299D8u;
            // 0x1299dc: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299d8) {
            ctx->pc = 0x129A34u;
            goto label_129a34;
        }
    }
    ctx->pc = 0x1299E0u;
    // 0x1299e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1299e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1299e4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1299e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1299e8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1299E8u;
    {
        const bool branch_taken_0x1299e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1299e8) {
            ctx->pc = 0x1299ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1299E8u;
            // 0x1299ec: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A5Cu;
            goto label_129a5c;
        }
    }
    ctx->pc = 0x1299F0u;
    // 0x1299f0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1299f0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
    // 0x1299f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299F4u;
            // 0x1299f8: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x129A10u;
            goto label_129a10;
        }
    }
    ctx->pc = 0x1299FCu;
    // 0x1299fc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1299fcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x129a00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129A00u;
    {
        const bool branch_taken_0x129a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A00u;
            // 0x129a04: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a00) {
            ctx->pc = 0x129A20u;
            goto label_129a20;
        }
    }
    ctx->pc = 0x129A08u;
    // 0x129a08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x129A08u;
    {
        const bool branch_taken_0x129a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A08u;
            // 0x129a0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a08) {
            ctx->pc = 0x129A3Cu;
            goto label_129a3c;
        }
    }
    ctx->pc = 0x129A10u;
label_129a10:
    // 0x129a10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129A10u;
    {
        const bool branch_taken_0x129a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A10u;
            // 0x129a14: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a10) {
            ctx->pc = 0x129A2Cu;
            goto label_129a2c;
        }
    }
    ctx->pc = 0x129A18u;
    // 0x129a18: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x129A18u;
    {
        const bool branch_taken_0x129a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A18u;
            // 0x129a1c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a18) {
            ctx->pc = 0x129A5Cu;
            goto label_129a5c;
        }
    }
    ctx->pc = 0x129A20u;
label_129a20:
    // 0x129a20: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x129a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x129a24: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x129A24u;
    {
        const bool branch_taken_0x129a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A24u;
            // 0x129a28: 0x2444e508  addiu       $a0, $v0, -0x1AF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a24) {
            ctx->pc = 0x129B7Cu;
            goto label_129b7c;
        }
    }
    ctx->pc = 0x129A2Cu;
label_129a2c:
    // 0x129a2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129A2Cu;
    {
        const bool branch_taken_0x129a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A2Cu;
            // 0x129a30: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a2c) {
            ctx->pc = 0x129A50u;
            goto label_129a50;
        }
    }
    ctx->pc = 0x129A34u;
label_129a34:
    // 0x129a34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129a38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_129a3c:
    // 0x129a3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x129a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x129a40: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x129a40u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129a44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129a48: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x129A48u;
    {
        const bool branch_taken_0x129a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A48u;
            // 0x129a4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a48) {
            ctx->pc = 0x129B7Cu;
            goto label_129b7c;
        }
    }
    ctx->pc = 0x129A50u;
label_129a50:
    // 0x129a50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129A50u;
    {
        const bool branch_taken_0x129a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A50u;
            // 0x129a54: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a50) {
            ctx->pc = 0x129A74u;
            goto label_129a74;
        }
    }
    ctx->pc = 0x129A58u;
    // 0x129a58: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x129a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_129a5c:
    // 0x129a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x129a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129a64: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x129a64u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129a68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129a6c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x129A6Cu;
    {
        const bool branch_taken_0x129a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A6Cu;
            // 0x129a70: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a6c) {
            ctx->pc = 0x129B7Cu;
            goto label_129b7c;
        }
    }
    ctx->pc = 0x129A74u;
label_129a74:
    // 0x129a74: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x129a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x129a78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x129a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129a7c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x129a7cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x129a80: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x129a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x129a84: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x129a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129a88: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x129a88u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x129a8c: 0x2812  mflo        $a1
    ctx->pc = 0x129a8cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x129a90: 0x2010  mfhi        $a0
    ctx->pc = 0x129a90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x129a94: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x129a98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x129a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x129a9c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x129a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x129aa0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129aa4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x129aa4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x129aa8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x129aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x129aac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x129aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x129ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x129ab4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x129ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x129ab8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x129ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x129abc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x129abcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x129ac0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x129ac0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x129ac4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x129AC4u;
    {
        const bool branch_taken_0x129ac4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x129AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AC4u;
            // 0x129ac8: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ac4) {
            ctx->pc = 0x129AF8u;
            goto label_129af8;
        }
    }
    ctx->pc = 0x129ACCu;
    // 0x129acc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x129ad0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x129ad0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x129ad4: 0x0  nop
    ctx->pc = 0x129ad4u;
    // NOP
label_129ad8:
    // 0x129ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129AD8u;
    {
        const bool branch_taken_0x129ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AD8u;
            // 0x129adc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ad8) {
            ctx->pc = 0x129AE8u;
            goto label_129ae8;
        }
    }
    ctx->pc = 0x129AE0u;
    // 0x129ae0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x129ae4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x129ae4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_129ae8:
    // 0x129ae8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x129ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x129aec: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129AECu;
    {
        const bool branch_taken_0x129aec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AECu;
            // 0x129af0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129aec) {
            ctx->pc = 0x129AD8u;
            goto label_129ad8;
        }
    }
    ctx->pc = 0x129AF4u;
    // 0x129af4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x129af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_129af8:
    // 0x129af8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x129af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x129afc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129afcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x129b00: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x129b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x129b04: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B04u;
            // 0x129b08: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)127u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129B0Cu;
    // 0x129b0c: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x129b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x129b10: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x129b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129b14: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x129b18: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x129b18u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x129b1c: 0x0  nop
    ctx->pc = 0x129b1cu;
    // NOP
label_129b20:
    // 0x129b20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x129b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x129b24: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x129b24u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x129b28: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x129b28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x129b2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x129b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x129b30: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x129b30u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x129b34: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x129b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x129b38: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x129B38u;
    {
        const bool branch_taken_0x129b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B38u;
            // 0x129b3c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b38) {
            ctx->pc = 0x129B20u;
            goto label_129b20;
        }
    }
    ctx->pc = 0x129B40u;
    // 0x129b40: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x129b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x129b44: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x129b44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)127u)));
label_129b48:
    // 0x129b48: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x129b4c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129B4Cu;
    {
        const bool branch_taken_0x129b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129b4c) {
            ctx->pc = 0x129B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129B4Cu;
            // 0x129b50: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B70u;
            goto label_129b70;
        }
    }
    ctx->pc = 0x129B54u;
    // 0x129b54: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x129b54u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)128u)));
    // 0x129b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129B58u;
    {
        const bool branch_taken_0x129b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B58u;
            // 0x129b5c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b58) {
            ctx->pc = 0x129B68u;
            goto label_129b68;
        }
    }
    ctx->pc = 0x129B60u;
    // 0x129b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129B60u;
    {
        const bool branch_taken_0x129b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B60u;
            // 0x129b64: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b60) {
            ctx->pc = 0x129B6Cu;
            goto label_129b6c;
        }
    }
    ctx->pc = 0x129B68u;
label_129b68:
    // 0x129b68: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x129b68u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_129b6c:
    // 0x129b6c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x129b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_129b70:
    // 0x129b70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129b74: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x129b74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x129b78: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x129b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_129b7c:
    // 0x129b7c: 0xc04a542  jal         func_129508
    ctx->pc = 0x129B7Cu;
    SET_GPR_U32(ctx, 31, 0x129B84u);
    ctx->pc = 0x129508u;
    if (runtime->hasFunction(0x129508u)) {
        auto targetFn = runtime->lookupFunction(0x129508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B84u; }
        if (ctx->pc != 0x129B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B84u; }
        if (ctx->pc != 0x129B84u) { return; }
    }
    ctx->pc = 0x129B84u;
    // 0x129b84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x129b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129b88: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x129B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B8Cu;
            // 0x129b90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129A10u: goto label_129a10;
            case 0x129A20u: goto label_129a20;
            case 0x129A2Cu: goto label_129a2c;
            case 0x129A34u: goto label_129a34;
            case 0x129A3Cu: goto label_129a3c;
            case 0x129A50u: goto label_129a50;
            case 0x129A5Cu: goto label_129a5c;
            case 0x129A74u: goto label_129a74;
            case 0x129AD8u: goto label_129ad8;
            case 0x129AE8u: goto label_129ae8;
            case 0x129AF8u: goto label_129af8;
            case 0x129B20u: goto label_129b20;
            case 0x129B48u: goto label_129b48;
            case 0x129B68u: goto label_129b68;
            case 0x129B6Cu: goto label_129b6c;
            case 0x129B70u: goto label_129b70;
            case 0x129B7Cu: goto label_129b7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129B94u;
}
