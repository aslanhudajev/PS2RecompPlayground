#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _rix_101
// Address: 0x126490 - 0x12656c
void _rix_101_0x126490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_101_0x126490");
#endif

    ctx->pc = 0x126490u;

    // 0x126490: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x126490u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x126494: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x126494u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x126498: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12649c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1264a0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1264a4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1264a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1264a8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1264ac: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1264b0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1264b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1264b4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1264b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1264b8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1264b8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1264bc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1264bcu;
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
    // 0x1264c0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1264c4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1264c4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1264c8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1264c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1264cc: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1264CCu;
    {
        const bool branch_taken_0x1264cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1264CCu;
            // 0x1264d0: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264cc) {
            ctx->pc = 0x12654Cu;
            goto label_12654c;
        }
    }
    ctx->pc = 0x1264D4u;
label_1264d4:
    // 0x1264d4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1264d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1264d8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1264dc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1264dcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1264e0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1264e0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1264e4: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1264e4u;
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
    // 0x1264e8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1264e8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1264ec: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1264ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1264f0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1264f0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1264f4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1264f4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1264f8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1264f8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1264fc: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1264fcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x126500: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x126500u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x126504: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x126504u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x126508: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x126508u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x12650c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x12650cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x126510: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x126510u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x126514: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x126514u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x126518: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x126518u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x12651c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x12651cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x126520: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x126520u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x126524: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x126524u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x126528: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x126528u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12652c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x12652cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x126530: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x126530u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x126534: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x126534u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x126538: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x126538u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12653c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x12653cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x126540: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x126540u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x126544: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x126544u;
    {
        const bool branch_taken_0x126544 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x126548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126544u;
            // 0x126548: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126544) {
            ctx->pc = 0x1264D4u;
            goto label_1264d4;
        }
    }
    ctx->pc = 0x12654Cu;
label_12654c:
    // 0x12654c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x12654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x126550: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x126550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x126554: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x126554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x126558: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x126558u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x12655c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12655Cu;
    {
        const bool branch_taken_0x12655c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x126560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12655Cu;
            // 0x126560: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12655c) {
            ctx->pc = 0x1264D4u;
            goto label_1264d4;
        }
    }
    ctx->pc = 0x126564u;
    // 0x126564: 0x3e00008  jr          $ra
    ctx->pc = 0x126564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1264D4u: goto label_1264d4;
            case 0x12654Cu: goto label_12654c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12656Cu;
}
