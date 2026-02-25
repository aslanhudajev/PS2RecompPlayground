#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_001
// Address: 0x125f10 - 0x125fdc
void _ri0_001_0x125f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_001_0x125f10");
#endif

    ctx->pc = 0x125f10u;

    // 0x125f10: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x125f10u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125f14: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x125f14u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x125f18: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125f1c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125f20: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125f20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125f24: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x125f24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125f28: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125f2c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x125f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f30: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x125f34: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x125f34u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_125f38:
    // 0x125f38: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x125f38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125f3c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x125f3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125f40: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125f44: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x125f44u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x125f48: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x125f48u;
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
    // 0x125f4c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x125f4cu;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32768u)));
    // 0x125f50: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x125F50u;
    {
        const bool branch_taken_0x125f50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F50u;
            // 0x125f54: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f50) {
            ctx->pc = 0x125F94u;
            goto label_125f94;
        }
    }
    ctx->pc = 0x125F58u;
label_125f58:
    // 0x125f58: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x125f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x125f5c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x125f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x125f60: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x125f60u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125f64: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x125f64u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125f68: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x125f68u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x125f6c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x125f6cu;
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
    // 0x125f70: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x125f70u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x125f74: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x125f74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x125f78: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x125f78u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x125f7c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x125f7cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x125f80: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x125f80u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x125f84: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x125f84u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x125f88: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x125f88u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x125f8c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x125F8Cu;
    {
        const bool branch_taken_0x125f8c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x125F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F8Cu;
            // 0x125f90: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f8c) {
            ctx->pc = 0x125F58u;
            goto label_125f58;
        }
    }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x125f94u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x125f98: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x125f9c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125fa0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x125fa4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x125fa4u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x125fa8: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x125FA8u;
    {
        const bool branch_taken_0x125fa8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FA8u;
            // 0x125fac: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32767u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa8) {
            ctx->pc = 0x125F58u;
            goto label_125f58;
        }
    }
    ctx->pc = 0x125FB0u;
    // 0x125fb0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x125fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x125fb4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x125fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x125fb8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125fbc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x125fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x125fc0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x125fc4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x125fc8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x125fc8u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x125fcc: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x125FCCu;
    {
        const bool branch_taken_0x125fcc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FCCu;
            // 0x125fd0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65534u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fcc) {
            ctx->pc = 0x125F38u;
            goto label_125f38;
        }
    }
    ctx->pc = 0x125FD4u;
    // 0x125fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x125FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125F38u: goto label_125f38;
            case 0x125F58u: goto label_125f58;
            case 0x125F94u: goto label_125f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125FDCu;
}
