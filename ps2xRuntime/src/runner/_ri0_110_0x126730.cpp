#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_110
// Address: 0x126730 - 0x126800
void _ri0_110_0x126730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_110_0x126730");
#endif

    ctx->pc = 0x126730u;

    // 0x126730: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x126730u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x126734: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x126734u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x126738: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x126738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12673c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x12673cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x126740: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x126740u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126744: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x126744u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x126748: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x126748u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12674c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x12674cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126750: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x126750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x126754: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x126754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_126758:
    // 0x126758: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x126758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12675c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x12675cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126760:
    // 0x126760: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126764: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x126764u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126768: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x126768u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12676c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x12676cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x126770: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x126770u;
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
    // 0x126774: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x126774u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x126778: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x126778u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x12677c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x126780: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x126780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x126784: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x126784u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x126788: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x126788u;
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
    // 0x12678c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x12678cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x126790: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x126790u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x126794: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x126794u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x126798: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x126798u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12679c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x12679cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1267a0: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1267a0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1267a4: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1267a4u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1267a8: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1267a8u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1267ac: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1267acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1267b0: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1267b0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1267b4: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1267b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1267b8: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1267B8u;
    {
        const bool branch_taken_0x1267b8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1267BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1267B8u;
            // 0x1267bc: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267b8) {
            ctx->pc = 0x126760u;
            goto label_126760;
        }
    }
    ctx->pc = 0x1267C0u;
    // 0x1267c0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1267c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1267c4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1267c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1267c8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1267cc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1267ccu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x1267d0: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1267D0u;
    {
        const bool branch_taken_0x1267d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1267D0u;
            // 0x1267d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267d0) {
            ctx->pc = 0x126760u;
            goto label_126760;
        }
    }
    ctx->pc = 0x1267D8u;
    // 0x1267d8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1267d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1267dc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1267dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1267e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1267e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1267e4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1267e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1267e8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1267ec: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1267f0: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1267F0u;
    {
        const bool branch_taken_0x1267f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1267F0u;
            // 0x1267f4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267f0) {
            ctx->pc = 0x126758u;
            goto label_126758;
        }
    }
    ctx->pc = 0x1267F8u;
    // 0x1267f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1267F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126758u: goto label_126758;
            case 0x126760u: goto label_126760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126800u;
}
