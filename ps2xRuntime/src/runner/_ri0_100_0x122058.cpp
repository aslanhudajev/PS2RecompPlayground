#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_100
// Address: 0x122058 - 0x122104
void _ri0_100_0x122058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122058u;

    // 0x122058: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12205c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x122060: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122064: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x122064u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122068: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x122068u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12206c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122070: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x122070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x122074: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x122074u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_122078:
    // 0x122078: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x122078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12207c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x12207cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122080:
    // 0x122080: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x122080u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122084: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x122084u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122088: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x122088u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12208c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x12208cu;
    { 
    __m128i val_rt = GPR_VEC(ctx, 8);
    __m128i val_rs = GPR_VEC(ctx, 8);
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
    SET_GPR_VEC(ctx, 8, result); 
}
    // 0x122090: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x122090u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x122094: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x122094u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122098: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x122098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12209c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x12209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1220a0: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1220a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1220a4: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1220a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1220a8: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1220a8u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1220ac: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1220acu;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1220b0: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1220b0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1220b4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1220b4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1220b8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1220b8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1220bc: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1220BCu;
    {
        const bool branch_taken_0x1220bc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1220C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1220BCu;
            // 0x1220c0: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220bc) {
            ctx->pc = 0x122080u;
            goto label_122080;
        }
    }
    ctx->pc = 0x1220C4u;
    // 0x1220c4: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1220c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1220c8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1220c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1220cc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1220ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1220d0: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1220d0u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x1220d4: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1220D4u;
    {
        const bool branch_taken_0x1220d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1220D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1220D4u;
            // 0x1220d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220d4) {
            ctx->pc = 0x122080u;
            goto label_122080;
        }
    }
    ctx->pc = 0x1220DCu;
    // 0x1220dc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1220dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1220e0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1220e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1220e4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1220e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1220e8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1220e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1220ec: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1220ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1220f0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1220f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1220f4: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1220F4u;
    {
        const bool branch_taken_0x1220f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1220F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1220F4u;
            // 0x1220f8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220f4) {
            ctx->pc = 0x122078u;
            goto label_122078;
        }
    }
    ctx->pc = 0x1220FCu;
    // 0x1220fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1220FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122078u: goto label_122078;
            case 0x122080u: goto label_122080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122104u;
}
