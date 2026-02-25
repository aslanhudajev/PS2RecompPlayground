#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fpadd_parts
// Address: 0x102bc8 - 0x102dfc
void _fpadd_parts_0x102bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fpadd_parts_0x102bc8");
#endif

    ctx->pc = 0x102bc8u;

    // 0x102bc8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x102bc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bcc: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x102bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x102bd0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x102bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102bd4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102BD4u;
    {
        const bool branch_taken_0x102bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102bd4) {
            ctx->pc = 0x102BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102BD4u;
            // 0x102bd8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102BE4u;
            goto label_102be4;
        }
    }
    ctx->pc = 0x102BDCu;
label_102bdc:
    // 0x102bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x102BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BDCu;
            // 0x102be0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102BDCu: goto label_102bdc;
            case 0x102BE4u: goto label_102be4;
            case 0x102BF0u: goto label_102bf0;
            case 0x102BF8u: goto label_102bf8;
            case 0x102C20u: goto label_102c20;
            case 0x102C70u: goto label_102c70;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CD4u: goto label_102cd4;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CE8u: goto label_102ce8;
            case 0x102D0Cu: goto label_102d0c;
            case 0x102D24u: goto label_102d24;
            case 0x102D30u: goto label_102d30;
            case 0x102D44u: goto label_102d44;
            case 0x102D5Cu: goto label_102d5c;
            case 0x102D6Cu: goto label_102d6c;
            case 0x102D90u: goto label_102d90;
            case 0x102DBCu: goto label_102dbc;
            case 0x102DCCu: goto label_102dcc;
            case 0x102DF4u: goto label_102df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102BE4u;
label_102be4:
    // 0x102be4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x102be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x102be8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102BE8u;
    {
        const bool branch_taken_0x102be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BE8u;
            // 0x102bec: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102be8) {
            ctx->pc = 0x102BF8u;
            goto label_102bf8;
        }
    }
    ctx->pc = 0x102BF0u;
label_102bf0:
    // 0x102bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x102BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BF0u;
            // 0x102bf4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102BDCu: goto label_102bdc;
            case 0x102BE4u: goto label_102be4;
            case 0x102BF0u: goto label_102bf0;
            case 0x102BF8u: goto label_102bf8;
            case 0x102C20u: goto label_102c20;
            case 0x102C70u: goto label_102c70;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CD4u: goto label_102cd4;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CE8u: goto label_102ce8;
            case 0x102D0Cu: goto label_102d0c;
            case 0x102D24u: goto label_102d24;
            case 0x102D30u: goto label_102d30;
            case 0x102D44u: goto label_102d44;
            case 0x102D5Cu: goto label_102d5c;
            case 0x102D6Cu: goto label_102d6c;
            case 0x102D90u: goto label_102d90;
            case 0x102DBCu: goto label_102dbc;
            case 0x102DCCu: goto label_102dcc;
            case 0x102DF4u: goto label_102df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102BF8u;
label_102bf8:
    // 0x102bf8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102BF8u;
    {
        const bool branch_taken_0x102bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BF8u;
            // 0x102bfc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bf8) {
            ctx->pc = 0x102C20u;
            goto label_102c20;
        }
    }
    ctx->pc = 0x102C00u;
    // 0x102c00: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x102C00u;
    {
        const bool branch_taken_0x102c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c00) {
            ctx->pc = 0x102BDCu;
            goto label_102bdc;
        }
    }
    ctx->pc = 0x102C08u;
    // 0x102c08: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x102c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102c0c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x102c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x102c10: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x102C10u;
    {
        const bool branch_taken_0x102c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x102C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C10u;
            // 0x102c14: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c10) {
            ctx->pc = 0x102BDCu;
            goto label_102bdc;
        }
    }
    ctx->pc = 0x102C18u;
    // 0x102c18: 0x3e00008  jr          $ra
    ctx->pc = 0x102C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C18u;
            // 0x102c1c: 0x24423718  addiu       $v0, $v0, 0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102BDCu: goto label_102bdc;
            case 0x102BE4u: goto label_102be4;
            case 0x102BF0u: goto label_102bf0;
            case 0x102BF8u: goto label_102bf8;
            case 0x102C20u: goto label_102c20;
            case 0x102C70u: goto label_102c70;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CD4u: goto label_102cd4;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CE8u: goto label_102ce8;
            case 0x102D0Cu: goto label_102d0c;
            case 0x102D24u: goto label_102d24;
            case 0x102D30u: goto label_102d30;
            case 0x102D44u: goto label_102d44;
            case 0x102D5Cu: goto label_102d5c;
            case 0x102D6Cu: goto label_102d6c;
            case 0x102D90u: goto label_102d90;
            case 0x102DBCu: goto label_102dbc;
            case 0x102DCCu: goto label_102dcc;
            case 0x102DF4u: goto label_102df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102C20u;
label_102c20:
    // 0x102c20: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x102C20u;
    {
        const bool branch_taken_0x102c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C20u;
            // 0x102c24: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c20) {
            ctx->pc = 0x102BF0u;
            goto label_102bf0;
        }
    }
    ctx->pc = 0x102C28u;
    // 0x102c28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102C28u;
    {
        const bool branch_taken_0x102c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C28u;
            // 0x102c2c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c28) {
            ctx->pc = 0x102C70u;
            goto label_102c70;
        }
    }
    ctx->pc = 0x102C30u;
    // 0x102c30: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x102C30u;
    {
        const bool branch_taken_0x102c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c30) {
            ctx->pc = 0x102BDCu;
            goto label_102bdc;
        }
    }
    ctx->pc = 0x102C38u;
    // 0x102c38: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x102c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x102c3c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x102c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x102c40: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x102c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x102c44: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x102c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x102c48: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x102c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102c4c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x102c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102c50: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x102c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102c54: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x102c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102c58: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x102c5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x102c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c60: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x102c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102c64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x102c64u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x102c68: 0x3e00008  jr          $ra
    ctx->pc = 0x102C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C68u;
            // 0x102c6c: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102BDCu: goto label_102bdc;
            case 0x102BE4u: goto label_102be4;
            case 0x102BF0u: goto label_102bf0;
            case 0x102BF8u: goto label_102bf8;
            case 0x102C20u: goto label_102c20;
            case 0x102C70u: goto label_102c70;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CD4u: goto label_102cd4;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CE8u: goto label_102ce8;
            case 0x102D0Cu: goto label_102d0c;
            case 0x102D24u: goto label_102d24;
            case 0x102D30u: goto label_102d30;
            case 0x102D44u: goto label_102d44;
            case 0x102D5Cu: goto label_102d5c;
            case 0x102D6Cu: goto label_102d6c;
            case 0x102D90u: goto label_102d90;
            case 0x102DBCu: goto label_102dbc;
            case 0x102DCCu: goto label_102dcc;
            case 0x102DF4u: goto label_102df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102C70u;
label_102c70:
    // 0x102c70: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x102C70u;
    {
        const bool branch_taken_0x102c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C70u;
            // 0x102c74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c70) {
            ctx->pc = 0x102BF0u;
            goto label_102bf0;
        }
    }
    ctx->pc = 0x102C78u;
    // 0x102c78: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x102c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x102c7c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x102c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x102c80: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x102c84: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x102c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x102c88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x102c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x102c8c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x102c90: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x102c90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x102c94: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x102c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x102c98: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x102C98u;
    {
        const bool branch_taken_0x102c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C98u;
            // 0x102c9c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c98) {
            ctx->pc = 0x102D0Cu;
            goto label_102d0c;
        }
    }
    ctx->pc = 0x102CA0u;
    // 0x102ca0: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x102CA4u;
    {
        const bool branch_taken_0x102ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102CA4u;
            // 0x102ca8: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ca4) {
            ctx->pc = 0x102CD4u;
            goto label_102cd4;
        }
    }
    ctx->pc = 0x102CACu;
    // 0x102cac: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x102cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_102cb0:
    // 0x102cb0: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x102cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x102cb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x102cb8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x102cb8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x102cbc: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x102cbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102cc0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x102cc0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x102cc4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102CC4u;
    {
        const bool branch_taken_0x102cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cc4) {
            ctx->pc = 0x102CB0u;
            goto label_102cb0;
        }
    }
    ctx->pc = 0x102CCCu;
    // 0x102ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102CCCu;
    {
        const bool branch_taken_0x102ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102CCCu;
            // 0x102cd0: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ccc) {
            ctx->pc = 0x102CDCu;
            goto label_102cdc;
        }
    }
    ctx->pc = 0x102CD4u;
label_102cd4:
    // 0x102cd4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x102cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102cd8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x102cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_102cdc:
    // 0x102cdc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x102CDCu;
    {
        const bool branch_taken_0x102cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102cdc) {
            ctx->pc = 0x102D30u;
            goto label_102d30;
        }
    }
    ctx->pc = 0x102CE4u;
    // 0x102ce4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_102ce8:
    // 0x102ce8: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x102ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x102cec: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x102cecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x102cf0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x102cf0u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102cf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x102cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x102cf8: 0x0  nop
    ctx->pc = 0x102cf8u;
    // NOP
    // 0x102cfc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102CFCu;
    {
        const bool branch_taken_0x102cfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cfc) {
            ctx->pc = 0x102CE8u;
            goto label_102ce8;
        }
    }
    ctx->pc = 0x102D04u;
    // 0x102d04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x102D04u;
    {
        const bool branch_taken_0x102d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D04u;
            // 0x102d08: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d04) {
            ctx->pc = 0x102D30u;
            goto label_102d30;
        }
    }
    ctx->pc = 0x102D0Cu;
label_102d0c:
    // 0x102d0c: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x102d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102D10u;
    {
        const bool branch_taken_0x102d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D10u;
            // 0x102d14: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d10) {
            ctx->pc = 0x102D24u;
            goto label_102d24;
        }
    }
    ctx->pc = 0x102D18u;
    // 0x102d18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x102d18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102D1Cu;
    {
        const bool branch_taken_0x102d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D1Cu;
            // 0x102d20: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d1c) {
            ctx->pc = 0x102D30u;
            goto label_102d30;
        }
    }
    ctx->pc = 0x102D24u;
label_102d24:
    // 0x102d24: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x102d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d28: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x102d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102d2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x102d2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102d30:
    // 0x102d30: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x102D30u;
    {
        const bool branch_taken_0x102d30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x102D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D30u;
            // 0x102d34: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d30) {
            ctx->pc = 0x102DBCu;
            goto label_102dbc;
        }
    }
    ctx->pc = 0x102D38u;
    // 0x102d38: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x102D38u;
    {
        const bool branch_taken_0x102d38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x102D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D38u;
            // 0x102d3c: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d38) {
            ctx->pc = 0x102D44u;
            goto label_102d44;
        }
    }
    ctx->pc = 0x102D40u;
    // 0x102d40: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x102d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_102d44:
    // 0x102d44: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102D44u;
    {
        const bool branch_taken_0x102d44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x102D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D44u;
            // 0x102d48: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d44) {
            ctx->pc = 0x102D5Cu;
            goto label_102d5c;
        }
    }
    ctx->pc = 0x102D4Cu;
    // 0x102d4c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x102d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x102d50: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x102d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x102d54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x102D54u;
    {
        const bool branch_taken_0x102d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D54u;
            // 0x102d58: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d54) {
            ctx->pc = 0x102D6Cu;
            goto label_102d6c;
        }
    }
    ctx->pc = 0x102D5Cu;
label_102d5c:
    // 0x102d5c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x102d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x102d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102d64: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x102d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x102d68: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x102d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_102d6c:
    // 0x102d6c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x102d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x102d70: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x102d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x102d74: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x102d74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65534u)));
    // 0x102d78: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x102d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x102d7c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x102d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x102d80: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102D80u;
    {
        const bool branch_taken_0x102d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D80u;
            // 0x102d84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d80) {
            ctx->pc = 0x102DCCu;
            goto label_102dcc;
        }
    }
    ctx->pc = 0x102D88u;
    // 0x102d88: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x102d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x102d8c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x102d8cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65534u)));
label_102d90:
    // 0x102d90: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x102d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x102d94: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x102d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x102d98: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102d9c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x102d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x102da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x102da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102da4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x102da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x102da8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x102da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x102dac: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102DACu;
    {
        const bool branch_taken_0x102dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DACu;
            // 0x102db0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dac) {
            ctx->pc = 0x102D90u;
            goto label_102d90;
        }
    }
    ctx->pc = 0x102DB4u;
    // 0x102db4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x102DB4u;
    {
        const bool branch_taken_0x102db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DB4u;
            // 0x102db8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102db4) {
            ctx->pc = 0x102DCCu;
            goto label_102dcc;
        }
    }
    ctx->pc = 0x102DBCu;
label_102dbc:
    // 0x102dbc: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x102dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x102dc0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x102dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x102dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102dc8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x102dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_102dcc:
    // 0x102dcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x102dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x102dd0: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102DD0u;
    {
        const bool branch_taken_0x102dd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x102DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DD0u;
            // 0x102dd4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dd0) {
            ctx->pc = 0x102DF4u;
            goto label_102df4;
        }
    }
    ctx->pc = 0x102DD8u;
    // 0x102dd8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x102dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x102ddc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x102ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x102de0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x102de0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x102de4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x102de4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x102de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102dec: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x102decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x102df0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x102df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_102df4:
    // 0x102df4: 0x3e00008  jr          $ra
    ctx->pc = 0x102DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DF4u;
            // 0x102df8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102BDCu: goto label_102bdc;
            case 0x102BE4u: goto label_102be4;
            case 0x102BF0u: goto label_102bf0;
            case 0x102BF8u: goto label_102bf8;
            case 0x102C20u: goto label_102c20;
            case 0x102C70u: goto label_102c70;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CD4u: goto label_102cd4;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CE8u: goto label_102ce8;
            case 0x102D0Cu: goto label_102d0c;
            case 0x102D24u: goto label_102d24;
            case 0x102D30u: goto label_102d30;
            case 0x102D44u: goto label_102d44;
            case 0x102D5Cu: goto label_102d5c;
            case 0x102D6Cu: goto label_102d6c;
            case 0x102D90u: goto label_102d90;
            case 0x102DBCu: goto label_102dbc;
            case 0x102DCCu: goto label_102dcc;
            case 0x102DF4u: goto label_102df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102DFCu;
}
