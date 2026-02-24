#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _rix_010
// Address: 0x121c50 - 0x121cfc
void _rix_010_0x121c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121c50u;

    // 0x121c50: 0x7000cce9
    ctx->pc = 0x121c50u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121c54: 0x7019cbf6
    ctx->pc = 0x121c54u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x121c58: 0x8c850014
    ctx->pc = 0x121c58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121c5c: 0x8c860018
    ctx->pc = 0x121c5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121c60: 0x8c870008
    ctx->pc = 0x121c60u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121c64: 0x8c8e0000
    ctx->pc = 0x121c64u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121c68: 0x8c8d0004
    ctx->pc = 0x121c68u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121c6c: 0x24180001
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c70: 0x8c890010
    ctx->pc = 0x121c70u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121c74: 0x94040
    ctx->pc = 0x121c74u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 1));
    // 0x121c78: 0x240bffff
    ctx->pc = 0x121c78u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_121c7c:
    // 0x121c7c: 0x78aa0000
    ctx->pc = 0x121c7cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121c80: 0x78cf0000
    ctx->pc = 0x121c80u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121c84: 0x5b80000
    ctx->pc = 0x121c84u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x121c88: 0x71ea16e8
    ctx->pc = 0x121c88u;
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
    // 0x121c8c: 0x714f1ee8
    ctx->pc = 0x121c8cu;
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
    // 0x121c90: 0x70025688
    ctx->pc = 0x121c90u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121c94: 0x20e7ffff
    ctx->pc = 0x121c94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121c98: 0x70027ea8
    ctx->pc = 0x121c98u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121c9c: 0x7180000
    ctx->pc = 0x121c9cu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x121ca0: 0x70621ee8
    ctx->pc = 0x121ca0u;
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
    // 0x121ca4: 0x70031688
    ctx->pc = 0x121ca4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x121ca8: 0x70031ea8
    ctx->pc = 0x121ca8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x121cac: 0x71425108
    ctx->pc = 0x121cacu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x121cb0: 0x71e37908
    ctx->pc = 0x121cb0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x121cb4: 0x71591108
    ctx->pc = 0x121cb4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x121cb8: 0x71f91908
    ctx->pc = 0x121cb8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x121cbc: 0x70021076
    ctx->pc = 0x121cbcu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x121cc0: 0x70031876
    ctx->pc = 0x121cc0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x121cc4: 0x7dc20000
    ctx->pc = 0x121cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x121cc8: 0x7dc30010
    ctx->pc = 0x121cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x121ccc: 0xa92821
    ctx->pc = 0x121cccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x121cd0: 0xc93021
    ctx->pc = 0x121cd0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x121cd4: 0x1ce0ffe9
    ctx->pc = 0x121CD4u;
    {
        const bool branch_taken_0x121cd4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121CD8u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x121cd4) {
            ctx->pc = 0x121C7Cu;
            goto label_121c7c;
        }
    }
    ctx->pc = 0x121CDCu;
    // 0x121cdc: 0x24a50080
    ctx->pc = 0x121cdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x121ce0: 0x24c60080
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x121ce4: 0x8c87000c
    ctx->pc = 0x121ce4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121ce8: 0x1676024
    ctx->pc = 0x121ce8u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x121cec: 0x1580ffe3
    ctx->pc = 0x121CECu;
    {
        const bool branch_taken_0x121cec = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x121CF0u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121cec) {
            ctx->pc = 0x121C7Cu;
            goto label_121c7c;
        }
    }
    ctx->pc = 0x121CF4u;
    // 0x121cf4: 0x3e00008
    ctx->pc = 0x121CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121C7Cu: goto label_121c7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121CFCu;
}
