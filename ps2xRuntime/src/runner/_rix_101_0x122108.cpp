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
// Address: 0x122108 - 0x1221ec
void _rix_101_0x122108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_101_0x122108");
#endif

    ctx->pc = 0x122108u;

    // 0x122108: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x122108u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12210c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x12210cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x122110: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x122110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x122114: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x122114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x122118: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x122118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12211c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12211cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122120: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x122120u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122124: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x122124u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122128: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x122128u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12212c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x12212cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122130: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x122130u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x122134: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x122134u;
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
    // 0x122138: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x122138u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x12213c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x12213cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122140: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x122140u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122144: 0x10e00021  beqz        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x122144u;
    {
        const bool branch_taken_0x122144 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x122148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122144u;
            // 0x122148: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122144) {
            ctx->pc = 0x1221CCu;
            goto label_1221cc;
        }
    }
    ctx->pc = 0x12214Cu;
label_12214c:
    // 0x12214c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x12214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x122150: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x122150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x122154: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x122154u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122158: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x122158u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12215c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x12215cu;
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
    // 0x122160: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x122160u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x122164: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x122164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122168: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x122168u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12216c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x12216cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x122170: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x122170u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x122174: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x122174u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122178: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x122178u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x12217c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x12217cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x122180: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x122180u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x122184: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x122184u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x122188: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x122188u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x12218c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x12218cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122190: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x122190u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x122194: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x122194u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122198: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x122198u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x12219c: 0x70405188  pcgth       $t2, $v0, $zero
    ctx->pc = 0x12219cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1221a0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1221a0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1221a4: 0x704a5108  paddh       $t2, $v0, $t2
    ctx->pc = 0x1221a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1221a8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1221a8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1221ac: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1221acu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1221b0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1221b0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1221b4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1221b4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1221b8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1221b8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1221bc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1221bcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1221c0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1221c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1221c4: 0x1ce0ffe1  bgtz        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1221C4u;
    {
        const bool branch_taken_0x1221c4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1221C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1221C4u;
            // 0x1221c8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221c4) {
            ctx->pc = 0x12214Cu;
            goto label_12214c;
        }
    }
    ctx->pc = 0x1221CCu;
label_1221cc:
    // 0x1221cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1221ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1221d0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1221d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1221d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1221d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1221d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1221d8u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 7)));
    // 0x1221dc: 0x1540ffdb  bnez        $t2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1221DCu;
    {
        const bool branch_taken_0x1221dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1221E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1221DCu;
            // 0x1221e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221dc) {
            ctx->pc = 0x12214Cu;
            goto label_12214c;
        }
    }
    ctx->pc = 0x1221E4u;
    // 0x1221e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1221E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12214Cu: goto label_12214c;
            case 0x1221CCu: goto label_1221cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1221ECu;
}
