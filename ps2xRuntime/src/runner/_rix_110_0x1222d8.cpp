#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _rix_110
// Address: 0x1222d8 - 0x1223b4
void _rix_110_0x1222d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1222d8u;

    // 0x1222d8: 0x7000cce9
    ctx->pc = 0x1222d8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1222dc: 0x7019cbf6
    ctx->pc = 0x1222dcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1222e0: 0x8c850014
    ctx->pc = 0x1222e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1222e4: 0x8c860018
    ctx->pc = 0x1222e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1222e8: 0x8c870008
    ctx->pc = 0x1222e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1222ec: 0x8c8e0000
    ctx->pc = 0x1222ecu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1222f0: 0x8c8d0004
    ctx->pc = 0x1222f0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1222f4: 0x24180001
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1222f8: 0x8c890010
    ctx->pc = 0x1222f8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1222fc: 0x94040
    ctx->pc = 0x1222fcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 1));
    // 0x122300: 0x240bffff
    ctx->pc = 0x122300u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_122304:
    // 0x122304: 0x78aa0000
    ctx->pc = 0x122304u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122308: 0x78cf0000
    ctx->pc = 0x122308u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12230c: 0x5b80000
    ctx->pc = 0x12230cu;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x122310: 0x71ea16e8
    ctx->pc = 0x122310u;
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
    // 0x122314: 0x714f1ee8
    ctx->pc = 0x122314u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 15);
    __m128i val_rs = GPR_VEC(ctx, 10);
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
    SET_GPR_VEC(ctx, 3, result); 
}
    // 0x122318: 0x70025688
    ctx->pc = 0x122318u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12231c: 0x20e7ffff
    ctx->pc = 0x12231cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122320: 0x70027ea8
    ctx->pc = 0x122320u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x122324: 0x7180000
    ctx->pc = 0x122324u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x122328: 0x70621ee8
    ctx->pc = 0x122328u;
    { 
    __m128i val_rt = GPR_VEC(ctx, 2);
    __m128i val_rs = GPR_VEC(ctx, 3);
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
    SET_GPR_VEC(ctx, 3, result); 
}
    // 0x12232c: 0x70031688
    ctx->pc = 0x12232cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x122330: 0x70031ea8
    ctx->pc = 0x122330u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x122334: 0x71425108
    ctx->pc = 0x122334u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x122338: 0x71e37908
    ctx->pc = 0x122338u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x12233c: 0x71591108
    ctx->pc = 0x12233cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x122340: 0x71f91908
    ctx->pc = 0x122340u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x122344: 0x70021076
    ctx->pc = 0x122344u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x122348: 0x70031876
    ctx->pc = 0x122348u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x12234c: 0x79ca0000
    ctx->pc = 0x12234cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122350: 0x79cf0010
    ctx->pc = 0x122350u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x122354: 0x704a1108
    ctx->pc = 0x122354u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122358: 0x706f1908
    ctx->pc = 0x122358u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x12235c: 0x70405188
    ctx->pc = 0x12235cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122360: 0x700a53f6
    ctx->pc = 0x122360u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122364: 0x704a5108
    ctx->pc = 0x122364u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x122368: 0x700a1076
    ctx->pc = 0x122368u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12236c: 0x70605188
    ctx->pc = 0x12236cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x122370: 0x700a53f6
    ctx->pc = 0x122370u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x122374: 0x706a5108
    ctx->pc = 0x122374u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x122378: 0x700a1876
    ctx->pc = 0x122378u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x12237c: 0x7dc20000
    ctx->pc = 0x12237cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x122380: 0x7dc30010
    ctx->pc = 0x122380u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x122384: 0xa92821
    ctx->pc = 0x122384u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x122388: 0xc93021
    ctx->pc = 0x122388u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x12238c: 0x1ce0ffdd
    ctx->pc = 0x12238Cu;
    {
        const bool branch_taken_0x12238c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122390u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x12238c) {
            ctx->pc = 0x122304u;
            goto label_122304;
        }
    }
    ctx->pc = 0x122394u;
    // 0x122394: 0x24a50080
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x122398: 0x24c60080
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x12239c: 0x8c87000c
    ctx->pc = 0x12239cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1223a0: 0x1676024
    ctx->pc = 0x1223a0u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1223a4: 0x1580ffd7
    ctx->pc = 0x1223A4u;
    {
        const bool branch_taken_0x1223a4 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x1223A8u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1223a4) {
            ctx->pc = 0x122304u;
            goto label_122304;
        }
    }
    ctx->pc = 0x1223ACu;
    // 0x1223ac: 0x3e00008
    ctx->pc = 0x1223ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122304u: goto label_122304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1223B4u;
}
