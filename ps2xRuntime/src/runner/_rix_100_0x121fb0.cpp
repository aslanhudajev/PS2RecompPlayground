#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _rix_100
// Address: 0x121fb0 - 0x122054
void _rix_100_0x121fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_100_0x121fb0");
#endif

    ctx->pc = 0x121fb0u;

    // 0x121fb0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x121fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121fb4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x121fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121fb8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x121fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121fbc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x121fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121fc0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121fc4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x121fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121fc8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x121fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x121fcc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x121fccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121fd0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x121fd0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_121fd4:
    // 0x121fd4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x121fd4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121fd8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x121fd8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121fdc: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x121fdcu;
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
    // 0x121fe0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x121fe0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121fe4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x121fe4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121fe8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x121fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x121fec: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x121fecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x121ff0: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x121ff0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x121ff4: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x121ff4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x121ff8: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x121ff8u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121ffc: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x121ffcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122000: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x122000u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122004: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x122004u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122008: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x122008u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12200c: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x12200cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122010: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x122010u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x122014: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x122014u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122018: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x122018u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x12201c: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x12201cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x122020: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x122020u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122024: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x122024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x122028: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x122028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x12202c: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12202Cu;
    {
        const bool branch_taken_0x12202c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12202Cu;
            // 0x122030: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12202c) {
            ctx->pc = 0x121FD4u;
            goto label_121fd4;
        }
    }
    ctx->pc = 0x122034u;
    // 0x122034: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x122034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x122038: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12203c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x12203cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122040: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x122040u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x122044: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x122044u;
    {
        const bool branch_taken_0x122044 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x122048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122044u;
            // 0x122048: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122044) {
            ctx->pc = 0x121FD4u;
            goto label_121fd4;
        }
    }
    ctx->pc = 0x12204Cu;
    // 0x12204c: 0x3e00008  jr          $ra
    ctx->pc = 0x12204Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121FD4u: goto label_121fd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122054u;
}
