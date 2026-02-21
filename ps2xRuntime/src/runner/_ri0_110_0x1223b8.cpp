#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_110
// Address: 0x1223b8 - 0x122488
void _ri0_110_0x1223b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1223b8u;

    // 0x1223b8: 0x7000cce9
    ctx->pc = 0x1223b8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1223bc: 0x7019cbf6
    ctx->pc = 0x1223bcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1223c0: 0x8c850014
    ctx->pc = 0x1223c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1223c4: 0x8c860018
    ctx->pc = 0x1223c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1223c8: 0x8c8e0000
    ctx->pc = 0x1223c8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1223cc: 0x8c8d0004
    ctx->pc = 0x1223ccu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1223d0: 0x24180001
    ctx->pc = 0x1223d0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1223d4: 0x240cffff
    ctx->pc = 0x1223d4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1223d8: 0x8c830010
    ctx->pc = 0x1223d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1223dc: 0x31040
    ctx->pc = 0x1223dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1223e0:
    // 0x1223e0: 0x8c870008
    ctx->pc = 0x1223e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1223e4: 0x240bffff
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1223e8:
    // 0x1223e8: 0xdca80000
    ctx->pc = 0x1223e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1223ec: 0xdcc90000
    ctx->pc = 0x1223ecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1223f0: 0x71284389
    ctx->pc = 0x1223f0u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1223f4: 0x5b80000
    ctx->pc = 0x1223f4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x1223f8: 0x710846e8
    ctx->pc = 0x1223f8u;
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
    // 0x1223fc: 0x70084e88
    ctx->pc = 0x1223fcu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x122400: 0x20e7ffff
    ctx->pc = 0x122400u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122404: 0xa32821
    ctx->pc = 0x122404u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x122408: 0xc33021
    ctx->pc = 0x122408u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12240c: 0x7180000
    ctx->pc = 0x12240cu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x122410: 0x700856e8
    ctx->pc = 0x122410u;
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
    // 0x122414: 0x700a4688
    ctx->pc = 0x122414u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122418: 0x71285108
    ctx->pc = 0x122418u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12241c: 0x71595108
    ctx->pc = 0x12241cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x122420: 0x700a5076
    ctx->pc = 0x122420u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122424: 0x79c80000
    ctx->pc = 0x122424u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122428: 0x71485108
    ctx->pc = 0x122428u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x12242c: 0x71404988
    ctx->pc = 0x12242cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122430: 0x70094bf6
    ctx->pc = 0x122430u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x122434: 0x71495108
    ctx->pc = 0x122434u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x122438: 0x700a5076
    ctx->pc = 0x122438u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12243c: 0x7dca0000
    ctx->pc = 0x12243cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x122440: 0x1ce0ffe9
    ctx->pc = 0x122440u;
    {
        const bool branch_taken_0x122440 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122444u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x122440) {
            ctx->pc = 0x1223E8u;
            goto label_1223e8;
        }
    }
    ctx->pc = 0x122448u;
    // 0x122448: 0x24a50140
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x12244c: 0x24c60140
    ctx->pc = 0x12244cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x122450: 0x8c87000c
    ctx->pc = 0x122450u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122454: 0x1675024
    ctx->pc = 0x122454u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x122458: 0x1540ffe3
    ctx->pc = 0x122458u;
    {
        const bool branch_taken_0x122458 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x12245Cu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122458) {
            ctx->pc = 0x1223E8u;
            goto label_1223e8;
        }
    }
    ctx->pc = 0x122460u;
    // 0x122460: 0x8c850014
    ctx->pc = 0x122460u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x122464: 0x8c860018
    ctx->pc = 0x122464u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x122468: 0x8c8e0000
    ctx->pc = 0x122468u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12246c: 0x24a50040
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x122470: 0x24c60040
    ctx->pc = 0x122470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x122474: 0x25ce0080
    ctx->pc = 0x122474u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x122478: 0x1580ffd9
    ctx->pc = 0x122478u;
    {
        const bool branch_taken_0x122478 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x12247Cu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122478) {
            ctx->pc = 0x1223E0u;
            goto label_1223e0;
        }
    }
    ctx->pc = 0x122480u;
    // 0x122480: 0x3e00008
    ctx->pc = 0x122480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1223E0u: goto label_1223e0;
            case 0x1223E8u: goto label_1223e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122488u;
}
