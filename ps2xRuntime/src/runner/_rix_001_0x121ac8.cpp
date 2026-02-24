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
// Address: 0x121ac8 - 0x121b7c
void _rix_001_0x121ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_001_0x121ac8");
#endif

    ctx->pc = 0x121ac8u;

    // 0x121ac8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x121ac8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121acc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x121accu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x121ad0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x121ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121ad4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x121ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121ad8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x121ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121adc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x121adcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121ae0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121ae4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121ae8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x121ae8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121aec: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x121af0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x121af0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121af4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x121af4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x121af8: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x121af8u;
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
    // 0x121afc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x121afcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x121b00: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121b04: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x121B04u;
    {
        const bool branch_taken_0x121b04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B04u;
            // 0x121b08: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b04) {
            ctx->pc = 0x121B5Cu;
            goto label_121b5c;
        }
    }
    ctx->pc = 0x121B0Cu;
label_121b0c:
    // 0x121b0c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x121b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x121b10: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x121b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x121b14: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x121b14u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121b18: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x121b18u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121b1c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x121b1cu;
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
    // 0x121b20: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x121b20u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121b24: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x121b24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121b28: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x121b28u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121b2c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x121b2cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x121b30: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x121b30u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x121b34: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x121b34u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x121b38: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x121b38u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x121b3c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x121b3cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x121b40: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x121b40u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x121b44: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x121b44u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x121b48: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x121b48u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x121b4c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x121b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x121b50: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x121b50u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x121b54: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x121B54u;
    {
        const bool branch_taken_0x121b54 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B54u;
            // 0x121b58: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b54) {
            ctx->pc = 0x121B0Cu;
            goto label_121b0c;
        }
    }
    ctx->pc = 0x121B5Cu;
label_121b5c:
    // 0x121b5c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x121b60: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x121b64: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121b68: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x121b68u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x121b6c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x121B6Cu;
    {
        const bool branch_taken_0x121b6c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121B6Cu;
            // 0x121b70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b6c) {
            ctx->pc = 0x121B0Cu;
            goto label_121b0c;
        }
    }
    ctx->pc = 0x121B74u;
    // 0x121b74: 0x3e00008  jr          $ra
    ctx->pc = 0x121B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121B0Cu: goto label_121b0c;
            case 0x121B5Cu: goto label_121b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121B7Cu;
}
