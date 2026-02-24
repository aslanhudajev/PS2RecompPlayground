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
// Address: 0x121a30 - 0x121ac4
void _ri0_000_0x121a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_000_0x121a30");
#endif

    ctx->pc = 0x121a30u;

    // 0x121a30: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x121a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121a34: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x121a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121a38: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x121a38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121a3c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121a40: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121a44: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x121a44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x121a48: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x121a48u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x121a4c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x121a4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121a50:
    // 0x121a50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121a54: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121a58:
    // 0x121a58: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x121a58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121a5c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x121a5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121a60: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x121a60u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121a64: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x121a64u;
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
    // 0x121a68: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x121a68u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x121a6c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x121a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x121a70: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x121a70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121a74: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x121a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x121a78: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x121a78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x121a7c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x121A7Cu;
    {
        const bool branch_taken_0x121a7c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121A7Cu;
            // 0x121a80: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a7c) {
            ctx->pc = 0x121A58u;
            goto label_121a58;
        }
    }
    ctx->pc = 0x121A84u;
    // 0x121a84: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x121a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x121a88: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x121a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x121a8c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x121a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121a90: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x121a90u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 15), GPR_VEC(ctx, 7)));
    // 0x121a94: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x121A94u;
    {
        const bool branch_taken_0x121a94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121A94u;
            // 0x121a98: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a94) {
            ctx->pc = 0x121A58u;
            goto label_121a58;
        }
    }
    ctx->pc = 0x121A9Cu;
    // 0x121a9c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x121a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121aa0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x121aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121aa4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x121aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121aa8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x121aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x121aac: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x121aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x121ab0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x121ab0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x121ab4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x121AB4u;
    {
        const bool branch_taken_0x121ab4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x121AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121AB4u;
            // 0x121ab8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ab4) {
            ctx->pc = 0x121A50u;
            goto label_121a50;
        }
    }
    ctx->pc = 0x121ABCu;
    // 0x121abc: 0x3e00008  jr          $ra
    ctx->pc = 0x121ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121A50u: goto label_121a50;
            case 0x121A58u: goto label_121a58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121AC4u;
}
