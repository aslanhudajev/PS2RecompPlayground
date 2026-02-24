#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _rix_110
// Address: 0x1222d8 - 0x1223b4
void _rix_110_0x1222d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_110_0x1222d8");
#endif

    ctx->pc = 0x1222d8u;

    // 0x1222d8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1222d8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1222dc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1222dcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1222e0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1222e4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1222e8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1222e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1222ec: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1222ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1222f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1222f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1222f4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1222f8: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1222f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1222fc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1222fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x122300: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x122300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122304:
    // 0x122304: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x122304u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122308: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x122308u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12230c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x12230cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122310: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x122310u;
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
    // 0x122314: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x122314u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 15);
    __m128i val_rs = GPR_VEC(ctx, 10);
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
    SET_GPR_VEC(ctx, 3, result); 
}
    // 0x122318: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x122318u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12231c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x12231cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122320: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x122320u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x122324: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x122324u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122328: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x122328u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 2);
    __m128i val_rs = GPR_VEC(ctx, 3);
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
    SET_GPR_VEC(ctx, 3, result); 
}
    // 0x12232c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x12232cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x122330: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x122330u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x122334: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x122334u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x122338: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x122338u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x12233c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x12233cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x122340: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x122340u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x122344: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x122344u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x122348: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x122348u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x12234c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x12234cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122350: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x122350u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x122354: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x122354u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122358: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x122358u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x12235c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x12235cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122360: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x122360u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122364: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x122364u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122368: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x122368u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12236c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x12236cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x122370: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x122370u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122374: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x122374u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x122378: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x122378u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12237c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x12237cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x122380: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x122380u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x122384: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x122384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x122388: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x122388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x12238c: 0x1ce0ffdd  bgtz        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12238Cu;
    {
        const bool branch_taken_0x12238c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12238Cu;
            // 0x122390: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12238c) {
            ctx->pc = 0x122304u;
            goto label_122304;
        }
    }
    ctx->pc = 0x122394u;
    // 0x122394: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x122398: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12239c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x12239cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1223a0: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1223a0u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x1223a4: 0x1580ffd7  bnez        $t4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1223A4u;
    {
        const bool branch_taken_0x1223a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1223A4u;
            // 0x1223a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223a4) {
            ctx->pc = 0x122304u;
            goto label_122304;
        }
    }
    ctx->pc = 0x1223ACu;
    // 0x1223ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1223ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122304u: goto label_122304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1223B4u;
}
