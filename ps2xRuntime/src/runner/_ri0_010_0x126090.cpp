#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_010
// Address: 0x126090 - 0x126148
void _ri0_010_0x126090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_010_0x126090");
#endif

    ctx->pc = 0x126090u;

    // 0x126090: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x126090u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x126094: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x126094u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x126098: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12609c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x12609cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1260a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1260a4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1260a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1260a8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1260ac: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1260b0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1260b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1260b8:
    // 0x1260b8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1260bc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1260c0:
    // 0x1260c0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1260c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1260c4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1260c8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1260c8u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1260cc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1260ccu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1260d0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1260d0u;
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
    // 0x1260d4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1260d4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1260d8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1260d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1260dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1260e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1260e4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1260e4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1260e8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1260e8u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 8);
    __m128i val_rs = GPR_VEC(ctx, 0);
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
    // 0x1260ec: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1260ecu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1260f0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1260f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1260f4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1260f4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1260f8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1260f8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1260fc: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1260fcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x126100: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x126100u;
    {
        const bool branch_taken_0x126100 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x126104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126100u;
            // 0x126104: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126100) {
            ctx->pc = 0x1260C0u;
            goto label_1260c0;
        }
    }
    ctx->pc = 0x126108u;
    // 0x126108: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x126108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x12610c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x12610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x126110: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x126114: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x126114u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x126118: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x126118u;
    {
        const bool branch_taken_0x126118 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126118u;
            // 0x12611c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126118) {
            ctx->pc = 0x1260C0u;
            goto label_1260c0;
        }
    }
    ctx->pc = 0x126120u;
    // 0x126120: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x126124: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x126124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x126128: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12612c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x12612cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x126130: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x126134: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x126138: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x126138u;
    {
        const bool branch_taken_0x126138 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126138u;
            // 0x12613c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126138) {
            ctx->pc = 0x1260B8u;
            goto label_1260b8;
        }
    }
    ctx->pc = 0x126140u;
    // 0x126140: 0x3e00008  jr          $ra
    ctx->pc = 0x126140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1260B8u: goto label_1260b8;
            case 0x1260C0u: goto label_1260c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126148u;
}
