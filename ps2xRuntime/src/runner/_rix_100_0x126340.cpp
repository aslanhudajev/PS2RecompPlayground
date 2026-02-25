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
// Address: 0x126340 - 0x1263dc
void _rix_100_0x126340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_100_0x126340");
#endif

    ctx->pc = 0x126340u;

    // 0x126340: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x126340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x126344: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x126344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x126348: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12634c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12634cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126350: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x126354: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x126354u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x126358: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x12635c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x12635cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126360: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x126360u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_126364:
    // 0x126364: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x126364u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126368: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x126368u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12636c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x12636cu;
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
    // 0x126370: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x126370u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x126374: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x126374u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x126378: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x126378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12637c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x12637cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x126380: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x126380u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x126384: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x126384u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x126388: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x126388u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12638c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x12638cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x126390: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x126390u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x126394: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x126394u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x126398: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x126398u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x12639c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x12639cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1263a0: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1263a0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1263a4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1263a4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1263a8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1263a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1263ac: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1263acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1263b0: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1263b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1263b4: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1263B4u;
    {
        const bool branch_taken_0x1263b4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1263B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263B4u;
            // 0x1263b8: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263b4) {
            ctx->pc = 0x126364u;
            goto label_126364;
        }
    }
    ctx->pc = 0x1263BCu;
    // 0x1263bc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1263bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1263c0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1263c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1263c8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1263c8u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x1263cc: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1263CCu;
    {
        const bool branch_taken_0x1263cc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1263D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263CCu;
            // 0x1263d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263cc) {
            ctx->pc = 0x126364u;
            goto label_126364;
        }
    }
    ctx->pc = 0x1263D4u;
    // 0x1263d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1263D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126364u: goto label_126364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1263DCu;
}
