#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _d2b
// Address: 0x130b98 - 0x130d14
void _d2b_0x130b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130b98u;

    // 0x130b98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x130b9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x130b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x130ba0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ba4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x130ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x130ba8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x130ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x130bac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x130bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x130bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x130bb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x130bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x130bbc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x130bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x130bc0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x130bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x130bc4: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x130BC4u;
    SET_GPR_U32(ctx, 31, 0x130BCCu);
    ctx->pc = 0x130BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130BC4u;
            // 0x130bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BCCu; }
        if (ctx->pc != 0x130BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BCCu; }
        if (ctx->pc != 0x130BCCu) { return; }
    }
    ctx->pc = 0x130BCCu;
    // 0x130bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd0: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x130bd0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x130bd4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x130bd8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x130bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x130bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x130bdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x130be0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x130be4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130be8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x130be8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x130bec: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x130becu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x130bf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x130bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130bf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x130bf4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x130bf8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x130bf8u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x130bfc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x130bfcu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x130c00: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x130c04: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x130c04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x130c08: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C08u;
    {
        const bool branch_taken_0x130c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C08u;
            // 0x130c0c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c08) {
            ctx->pc = 0x130C1Cu;
            goto label_130c1c;
        }
    }
    ctx->pc = 0x130C10u;
    // 0x130c10: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x130c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x130c14: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x130c14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x130c18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x130c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_130c1c:
    // 0x130c1c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x130c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x130c20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x130c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130c24: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x130C24u;
    {
        const bool branch_taken_0x130c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C24u;
            // 0x130c28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c24) {
            ctx->pc = 0x130C8Cu;
            goto label_130c8c;
        }
    }
    ctx->pc = 0x130C2Cu;
    // 0x130c2c: 0xc04c07a  jal         func_1301E8
    ctx->pc = 0x130C2Cu;
    SET_GPR_U32(ctx, 31, 0x130C34u);
    ctx->pc = 0x130C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C2Cu;
            // 0x130c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1301E8u;
    if (runtime->hasFunction(0x1301E8u)) {
        auto targetFn = runtime->lookupFunction(0x1301E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C34u; }
        if (ctx->pc != 0x130C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x1301e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C34u; }
        if (ctx->pc != 0x130C34u) { return; }
    }
    ctx->pc = 0x130C34u;
    // 0x130c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c38: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x130C38u;
    {
        const bool branch_taken_0x130c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C38u;
            // 0x130c3c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c38) {
            ctx->pc = 0x130C64u;
            goto label_130c64;
        }
    }
    ctx->pc = 0x130C40u;
    // 0x130c40: 0x52023  negu        $a0, $a1
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x130c44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x130c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c48: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x130c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x130c4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x130c4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130c50: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x130c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x130c54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x130c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130c58: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x130c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x130c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C5Cu;
            // 0x130c60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C6Cu;
            goto label_130c6c;
        }
    }
    ctx->pc = 0x130C64u;
label_130c64:
    // 0x130c64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x130c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c68: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x130c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_130c6c:
    // 0x130c6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x130c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x130c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130c78: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x130c78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x130c7c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x130c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x130c80: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x130c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130C84u;
    {
        const bool branch_taken_0x130c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C84u;
            // 0x130c88: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c84) {
            ctx->pc = 0x130CACu;
            goto label_130cac;
        }
    }
    ctx->pc = 0x130C8Cu;
label_130c8c:
    // 0x130c8c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x130c8cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x130c90: 0xc04c07a  jal         func_1301E8
    ctx->pc = 0x130C90u;
    SET_GPR_U32(ctx, 31, 0x130C98u);
    ctx->pc = 0x130C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130C90u;
            // 0x130c94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1301E8u;
    if (runtime->hasFunction(0x1301E8u)) {
        auto targetFn = runtime->lookupFunction(0x1301E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C98u; }
        if (ctx->pc != 0x130C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x1301e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C98u; }
        if (ctx->pc != 0x130C98u) { return; }
    }
    ctx->pc = 0x130C98u;
    // 0x130c98: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x130c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ca0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x130ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x130ca4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x130ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x130ca8: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x130ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_130cac:
    // 0x130cac: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x130CACu;
    {
        const bool branch_taken_0x130cac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CACu;
            // 0x130cb0: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cac) {
            ctx->pc = 0x130CC8u;
            goto label_130cc8;
        }
    }
    ctx->pc = 0x130CB4u;
    // 0x130cb4: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x130cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x130cb8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x130cbc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x130cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x130cc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130CC0u;
    {
        const bool branch_taken_0x130cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CC0u;
            // 0x130cc4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cc0) {
            ctx->pc = 0x130CE8u;
            goto label_130ce8;
        }
    }
    ctx->pc = 0x130CC8u;
label_130cc8:
    // 0x130cc8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x130ccc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x130cd0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x130cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x130cd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130cd8: 0xc04c058  jal         func_130160
    ctx->pc = 0x130CD8u;
    SET_GPR_U32(ctx, 31, 0x130CE0u);
    ctx->pc = 0x130CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130CD8u;
            // 0x130cdc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CE0u; }
        if (ctx->pc != 0x130CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CE0u; }
        if (ctx->pc != 0x130CE0u) { return; }
    }
    ctx->pc = 0x130CE0u;
    // 0x130ce0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x130ce4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_130ce8:
    // 0x130ce8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x130ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x130cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x130cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x130cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x130cf4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x130cf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130cf8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x130cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130cfc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x130cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130d00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x130d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130d04: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x130d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130d08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x130d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x130D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D0Cu;
            // 0x130d10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130C1Cu: goto label_130c1c;
            case 0x130C64u: goto label_130c64;
            case 0x130C6Cu: goto label_130c6c;
            case 0x130C8Cu: goto label_130c8c;
            case 0x130CACu: goto label_130cac;
            case 0x130CC8u: goto label_130cc8;
            case 0x130CE8u: goto label_130ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130D14u;
}
