#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_111
// Address: 0x1225b0 - 0x1226c4
void _ri0_111_0x1225b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_111_0x1225b0");
#endif

    ctx->pc = 0x1225b0u;

    // 0x1225b0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1225b0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1225b4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1225b4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1225b8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1225b8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1225bc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1225bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1225c0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1225c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1225c4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225c8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1225c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1225cc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1225ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1225d0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1225d4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1225d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1225d8:
    // 0x1225d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1225d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1225dc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1225dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1225e0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1225e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1225e4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1225e4u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1225e8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1225e8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1225ec: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1225ecu;
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
    // 0x1225f0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1225f0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1225f4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1225f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1225f8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1225f8u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32768u)));
    // 0x1225fc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1225fcu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122600: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x122600u;
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
    // 0x122604: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x122604u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122608: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x122608u;
    {
        const bool branch_taken_0x122608 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122608u;
            // 0x12260c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122608) {
            ctx->pc = 0x12267Cu;
            goto label_12267c;
        }
    }
    ctx->pc = 0x122610u;
label_122610:
    // 0x122610: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x122614: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x122614u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122618: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x122618u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12261c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x12261cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122620: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x122620u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122624: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x122624u;
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
    // 0x122628: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x122628u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x12262c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x12262cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122630: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x122634: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x122634u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122638: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x122638u;
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
    // 0x12263c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x12263cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122640: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x122640u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122644: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x122644u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x122648: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x122648u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x12264c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x12264cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x122650: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x122650u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x122654: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x122654u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122658: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x122658u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x12265c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x12265cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122660: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x122660u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x122664: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x122664u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x122668: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x12266c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x12266cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122670: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x122670u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x122674: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x122674u;
    {
        const bool branch_taken_0x122674 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122674u;
            // 0x122678: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122674) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x12267Cu;
label_12267c:
    // 0x12267c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x12267cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x122680: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x122680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x122684: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122688: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x12268c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x12268cu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x122690: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x122690u;
    {
        const bool branch_taken_0x122690 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x122694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122690u;
            // 0x122694: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32767u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122690) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x122698u;
    // 0x122698: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x122698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12269c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x12269cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1226a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1226a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1226a4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1226a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1226a8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1226ac: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1226acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1226b0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1226b0u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x1226b4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1226B4u;
    {
        const bool branch_taken_0x1226b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1226B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226B4u;
            // 0x1226b8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65534u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226b4) {
            ctx->pc = 0x1225D8u;
            goto label_1225d8;
        }
    }
    ctx->pc = 0x1226BCu;
    // 0x1226bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1226BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1225D8u: goto label_1225d8;
            case 0x122610u: goto label_122610;
            case 0x12267Cu: goto label_12267c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1226C4u;
}
