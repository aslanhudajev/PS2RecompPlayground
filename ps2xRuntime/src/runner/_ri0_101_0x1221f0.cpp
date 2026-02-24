#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ri0_101
// Address: 0x1221f0 - 0x1222d4
void _ri0_101_0x1221f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ri0_101_0x1221f0");
#endif

    ctx->pc = 0x1221f0u;

    // 0x1221f0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1221f0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1221f4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1221f4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1221f8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1221f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1221fc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1221fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x122200: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122200u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122204: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x122204u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122208: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12220c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12220cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122210: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x122210u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x122214: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x122214u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_122218:
    // 0x122218: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x122218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12221c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x12221cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122220: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x122220u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122224: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x122224u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122228: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x122228u;
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
    // 0x12222c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x12222cu;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32768u)));
    // 0x122230: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x122230u;
    {
        const bool branch_taken_0x122230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x122234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122230u;
            // 0x122234: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122230) {
            ctx->pc = 0x12228Cu;
            goto label_12228c;
        }
    }
    ctx->pc = 0x122238u;
label_122238:
    // 0x122238: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x122238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x12223c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x12223cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x122240: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x122240u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122244: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x122244u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122248: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x122248u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12224c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x12224cu;
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
    // 0x122250: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x122250u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x122254: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x122254u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122258: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x122258u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x12225c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x12225cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122260: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x122260u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x122264: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x122264u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122268: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x122268u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12226c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x12226cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x122270: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x122270u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122274: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x122274u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x122278: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x122278u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x12227c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x12227cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122280: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x122280u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x122284: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x122284u;
    {
        const bool branch_taken_0x122284 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122284u;
            // 0x122288: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122284) {
            ctx->pc = 0x122238u;
            goto label_122238;
        }
    }
    ctx->pc = 0x12228Cu;
label_12228c:
    // 0x12228c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x12228cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x122290: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x122290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x122294: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x122294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122298: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x122298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x12229c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x12229cu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x1222a0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1222A0u;
    {
        const bool branch_taken_0x1222a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1222A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1222A0u;
            // 0x1222a4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32767u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222a0) {
            ctx->pc = 0x122238u;
            goto label_122238;
        }
    }
    ctx->pc = 0x1222A8u;
    // 0x1222a8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1222ac: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1222acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1222b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1222b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1222b4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1222b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1222b8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1222b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1222bc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1222bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1222c0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1222c0u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x1222c4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1222C4u;
    {
        const bool branch_taken_0x1222c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1222C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1222C4u;
            // 0x1222c8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65534u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222c4) {
            ctx->pc = 0x122218u;
            goto label_122218;
        }
    }
    ctx->pc = 0x1222CCu;
    // 0x1222cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1222CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122218u: goto label_122218;
            case 0x122238u: goto label_122238;
            case 0x12228Cu: goto label_12228c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1222D4u;
}
