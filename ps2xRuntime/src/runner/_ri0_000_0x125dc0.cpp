#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_000
// Address: 0x125dc0 - 0x125e54
void _ri0_000_0x125dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_000_0x125dc0");
#endif

    ctx->pc = 0x125dc0u;

    // 0x125dc0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125dc4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125dc8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125dcc: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x125dccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125dd0: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x125dd0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125dd4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x125dd8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x125dd8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x125ddc: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x125ddcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125de0:
    // 0x125de0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x125de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125de4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125de4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125de8:
    // 0x125de8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x125de8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125dec: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x125decu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125df0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x125df0u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x125df4: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x125df4u;
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
    SET_GPR_VEC(ctx, 9, result); 
}
    // 0x125df8: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x125df8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x125dfc: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x125dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x125e00: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x125e00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x125e04: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x125e08: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x125e0c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x125E0Cu;
    {
        const bool branch_taken_0x125e0c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x125E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E0Cu;
            // 0x125e10: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e0c) {
            ctx->pc = 0x125DE8u;
            goto label_125de8;
        }
    }
    ctx->pc = 0x125E14u;
    // 0x125e14: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x125e18: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x125e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x125e1c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x125e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125e20: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x125e20u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 15), GPR_VEC(ctx, 7)));
    // 0x125e24: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x125E24u;
    {
        const bool branch_taken_0x125e24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E24u;
            // 0x125e28: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e24) {
            ctx->pc = 0x125DE8u;
            goto label_125de8;
        }
    }
    ctx->pc = 0x125E2Cu;
    // 0x125e2c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125e30: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125e34: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125e34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125e38: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x125e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x125e3c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x125e40: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x125e44: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x125E44u;
    {
        const bool branch_taken_0x125e44 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E44u;
            // 0x125e48: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e44) {
            ctx->pc = 0x125DE0u;
            goto label_125de0;
        }
    }
    ctx->pc = 0x125E4Cu;
    // 0x125e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x125E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125DE0u: goto label_125de0;
            case 0x125DE8u: goto label_125de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125E54u;
}
