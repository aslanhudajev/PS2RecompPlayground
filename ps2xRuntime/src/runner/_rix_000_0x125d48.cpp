#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _rix_000
// Address: 0x125d48 - 0x125dbc
void _rix_000_0x125d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_rix_000_0x125d48");
#endif

    ctx->pc = 0x125d48u;

    // 0x125d48: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125d4c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125d50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x125d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125d54: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125d58: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x125d58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125d5c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125d60: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x125d64: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125d68: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x125d68u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_125d6c:
    // 0x125d6c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x125d6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125d70: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x125d70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x125d74: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x125d74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125d78: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x125d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x125d7c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x125d7cu;
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
    // 0x125d80: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x125d80u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x125d84: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x125d84u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x125d88: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x125d88u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x125d8c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x125d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x125d90: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x125d90u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x125d94: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x125D94u;
    {
        const bool branch_taken_0x125d94 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x125D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D94u;
            // 0x125d98: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d94) {
            ctx->pc = 0x125D6Cu;
            goto label_125d6c;
        }
    }
    ctx->pc = 0x125D9Cu;
    // 0x125d9c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x125da0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x125da4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125da8: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x125da8u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 15), GPR_VEC(ctx, 7)));
    // 0x125dac: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x125DACu;
    {
        const bool branch_taken_0x125dac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DACu;
            // 0x125db0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dac) {
            ctx->pc = 0x125D6Cu;
            goto label_125d6c;
        }
    }
    ctx->pc = 0x125DB4u;
    // 0x125db4: 0x3e00008  jr          $ra
    ctx->pc = 0x125DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125D6Cu: goto label_125d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125DBCu;
}
