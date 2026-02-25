#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _rix_001
// Address: 0x125e58 - 0x125f0c
void _rix_001_0x125e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_001_0x125e58");
#endif

    ctx->pc = 0x125e58u;

    // 0x125e58: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x125e58u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125e5c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x125e5cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x125e60: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125e64: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125e68: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125e6c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125e70: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x125e70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125e74: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125e78: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x125e78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125e7c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x125e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x125e80: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x125e80u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125e84: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x125e84u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x125e88: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x125e88u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 8);
    __m128i val_rs = GPR_VEC(ctx, 9);
    uint32_t shift_amount = ctx->sa & 0x7F; 
    uint64_t rt_hi = _mm_cvtsi128_si64(_mm_srli_si128(val_rt, 8));
    uint64_t rt_lo = _mm_cvtsi128_si64(val_rt);
    uint64_t rs_hi = _mm_cvtsi128_si64(_mm_srli_si128(val_rs, 8));
    uint64_t rs_lo = _mm_cvtsi128_si64(val_rs);
    __m128i result; 
    if (shift_amount == 0) { 
        result = val_rs; 
    } else if (shift_amount < 64) { 
        uint64_t res_lo = (rs_lo >> shift_amount) | (rs_hi << (64 - shift_amount)); 
        uint64_t res_hi = (rs_hi >> shift_amount) | (rt_lo << (64 - shift_amount)); 
        result = _mm_set_epi64x(res_hi, res_lo); 
    } else if (shift_amount == 64) { 
        result = _mm_set_epi64x(rt_lo, rs_hi); 
    } else if (shift_amount < 128) { 
        uint32_t sub_shift = shift_amount - 64; 
        uint64_t res_lo = (rs_hi >> sub_shift) | (rt_lo << (64 - sub_shift)); 
        uint64_t res_hi = (rt_lo >> sub_shift) | (rt_hi << (64 - sub_shift)); 
        result = _mm_set_epi64x(res_hi, res_lo); 
    } else { // shift_amount >= 128 
         uint32_t sub_shift = shift_amount - 128; 
         uint64_t res_lo = (rt_lo >> sub_shift) | (rt_hi << (64 - sub_shift)); 
         uint64_t res_hi = (rt_hi >> sub_shift); 
         result = _mm_set_epi64x(res_hi, res_lo); 
    } 
    SET_GPR_VEC(ctx, 10, result); 
}
    // 0x125e8c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x125e8cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x125e90: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125e94: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x125E94u;
    {
        const bool branch_taken_0x125e94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E94u;
            // 0x125e98: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e94) {
            ctx->pc = 0x125EECu;
            goto label_125eec;
        }
    }
    ctx->pc = 0x125E9Cu;
label_125e9c:
    // 0x125e9c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x125e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x125ea0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x125ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x125ea4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x125ea4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125ea8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x125ea8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125eac: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x125eacu;
    { 
    __m128i val_rt = GPR_VEC(ctx, 10);
    __m128i val_rs = GPR_VEC(ctx, 15);
    uint32_t shift_amount = ctx->sa & 0x7F; 
    uint64_t rt_hi = _mm_cvtsi128_si64(_mm_srli_si128(val_rt, 8));
    uint64_t rt_lo = _mm_cvtsi128_si64(val_rt);
    uint64_t rs_hi = _mm_cvtsi128_si64(_mm_srli_si128(val_rs, 8));
    uint64_t rs_lo = _mm_cvtsi128_si64(val_rs);
    __m128i result; 
    if (shift_amount == 0) { 
        result = val_rs; 
    } else if (shift_amount < 64) { 
        uint64_t res_lo = (rs_lo >> shift_amount) | (rs_hi << (64 - shift_amount)); 
        uint64_t res_hi = (rs_hi >> shift_amount) | (rt_lo << (64 - shift_amount)); 
        result = _mm_set_epi64x(res_hi, res_lo); 
    } else if (shift_amount == 64) { 
        result = _mm_set_epi64x(rt_lo, rs_hi); 
    } else if (shift_amount < 128) { 
        uint32_t sub_shift = shift_amount - 64; 
        uint64_t res_lo = (rs_hi >> sub_shift) | (rt_lo << (64 - sub_shift)); 
        uint64_t res_hi = (rt_lo >> sub_shift) | (rt_hi << (64 - sub_shift)); 
        result = _mm_set_epi64x(res_hi, res_lo); 
    } else { // shift_amount >= 128 
         uint32_t sub_shift = shift_amount - 128; 
         uint64_t res_lo = (rt_lo >> sub_shift) | (rt_hi << (64 - sub_shift)); 
         uint64_t res_hi = (rt_hi >> sub_shift); 
         result = _mm_set_epi64x(res_hi, res_lo); 
    } 
    SET_GPR_VEC(ctx, 2, result); 
}
    // 0x125eb0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x125eb0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x125eb4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x125eb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x125eb8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x125eb8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x125ebc: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x125ebcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x125ec0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x125ec0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x125ec4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x125ec4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x125ec8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x125ec8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x125ecc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x125eccu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x125ed0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x125ed0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x125ed4: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x125ed4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x125ed8: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x125ed8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x125edc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x125edcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x125ee0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x125ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x125ee4: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x125EE4u;
    {
        const bool branch_taken_0x125ee4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x125EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EE4u;
            // 0x125ee8: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ee4) {
            ctx->pc = 0x125E9Cu;
            goto label_125e9c;
        }
    }
    ctx->pc = 0x125EECu;
label_125eec:
    // 0x125eec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x125ef0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x125ef4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125ef8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x125ef8u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x125efc: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125E9Cu;
            goto label_125e9c;
        }
    }
    ctx->pc = 0x125F04u;
    // 0x125f04: 0x3e00008  jr          $ra
    ctx->pc = 0x125F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125E9Cu: goto label_125e9c;
            case 0x125EECu: goto label_125eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125F0Cu;
}
