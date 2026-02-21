#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_111
// Address: 0x1225b0 - 0x1226c4
void _ri0_111_0x1225b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1225b0u;

    // 0x1225b0: 0x7000cce9
    ctx->pc = 0x1225b0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1225b4: 0x7019cbf6
    ctx->pc = 0x1225b4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1225b8: 0x7019c874
    ctx->pc = 0x1225b8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1225bc: 0x8c850014
    ctx->pc = 0x1225bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1225c0: 0x8c860018
    ctx->pc = 0x1225c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1225c4: 0x8c8e0000
    ctx->pc = 0x1225c4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1225c8: 0x8c8d0004
    ctx->pc = 0x1225c8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1225cc: 0x8c8c0010
    ctx->pc = 0x1225ccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1225d0: 0x24180001
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1225d4: 0x240b0001
    ctx->pc = 0x1225d4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
label_1225d8:
    // 0x1225d8: 0x8c870008
    ctx->pc = 0x1225d8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1225dc: 0xdca80000
    ctx->pc = 0x1225dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1225e0: 0xdcc90000
    ctx->pc = 0x1225e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1225e4: 0x71284389
    ctx->pc = 0x1225e4u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1225e8: 0x5b80000
    ctx->pc = 0x1225e8u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x1225ec: 0x710846e8
    ctx->pc = 0x1225ecu;
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
    // 0x1225f0: 0x70084e88
    ctx->pc = 0x1225f0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1225f4: 0xac2821
    ctx->pc = 0x1225f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1225f8: 0x356b8000
    ctx->pc = 0x1225f8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x1225fc: 0x7180000
    ctx->pc = 0x1225fcu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x122600: 0x700856e8
    ctx->pc = 0x122600u;
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
    // 0x122604: 0x700a4688
    ctx->pc = 0x122604u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122608: 0x10e0001c
    ctx->pc = 0x122608u;
    {
        const bool branch_taken_0x122608 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x12260Cu;
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        if (branch_taken_0x122608) {
            ctx->pc = 0x12267Cu;
            goto label_12267c;
        }
    }
    ctx->pc = 0x122610u;
label_122610:
    // 0x122610: 0xcc3021
    ctx->pc = 0x122610u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x122614: 0xdca80000
    ctx->pc = 0x122614u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122618: 0xdcc90000
    ctx->pc = 0x122618u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12261c: 0x71284389
    ctx->pc = 0x12261cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122620: 0x5b80000
    ctx->pc = 0x122620u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x122624: 0x710846e8
    ctx->pc = 0x122624u;
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
    // 0x122628: 0x70084e88
    ctx->pc = 0x122628u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x12262c: 0x20e7ffff
    ctx->pc = 0x12262cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x122630: 0xac2821
    ctx->pc = 0x122630u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x122634: 0x7180000
    ctx->pc = 0x122634u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x122638: 0x700856e8
    ctx->pc = 0x122638u;
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
    // 0x12263c: 0x700a4688
    ctx->pc = 0x12263cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x122640: 0x71285108
    ctx->pc = 0x122640u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122644: 0x714f4908
    ctx->pc = 0x122644u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x122648: 0x71407ca9
    ctx->pc = 0x122648u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x12264c: 0x71395108
    ctx->pc = 0x12264cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x122650: 0x700a50b6
    ctx->pc = 0x122650u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x122654: 0x79c80000
    ctx->pc = 0x122654u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122658: 0x71485108
    ctx->pc = 0x122658u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x12265c: 0x71404988
    ctx->pc = 0x12265cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x122660: 0x70094bf6
    ctx->pc = 0x122660u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x122664: 0x71495108
    ctx->pc = 0x122664u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x122668: 0xc4040
    ctx->pc = 0x122668u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 1));
    // 0x12266c: 0x700a5076
    ctx->pc = 0x12266cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x122670: 0x7dca0000
    ctx->pc = 0x122670u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x122674: 0x1ce0ffe6
    ctx->pc = 0x122674u;
    {
        const bool branch_taken_0x122674 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x122678u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x122674) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x12267Cu;
label_12267c:
    // 0x12267c: 0x700b53f7
    ctx->pc = 0x12267cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x122680: 0x24a50140
    ctx->pc = 0x122680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x122684: 0x8c87000c
    ctx->pc = 0x122684u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122688: 0x24c60140
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x12268c: 0x1475024
    ctx->pc = 0x12268cu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x122690: 0x1540ffdf
    ctx->pc = 0x122690u;
    {
        const bool branch_taken_0x122690 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x122694u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x122690) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x122698u;
    // 0x122698: 0x8c850014
    ctx->pc = 0x122698u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12269c: 0x8c860018
    ctx->pc = 0x12269cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1226a0: 0x8c8e0000
    ctx->pc = 0x1226a0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1226a4: 0x24a50040
    ctx->pc = 0x1226a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x1226a8: 0x24c60040
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x1226ac: 0x25ce0080
    ctx->pc = 0x1226acu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x1226b0: 0x316a0001
    ctx->pc = 0x1226b0u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x1226b4: 0x1540ffc8
    ctx->pc = 0x1226B4u;
    {
        const bool branch_taken_0x1226b4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x1226B8u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x1226b4) {
            ctx->pc = 0x1225D8u;
            goto label_1225d8;
        }
    }
    ctx->pc = 0x1226BCu;
    // 0x1226bc: 0x3e00008
    ctx->pc = 0x1226BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1225D8u: goto label_1225d8;
            case 0x122610u: goto label_122610;
            case 0x12267Cu: goto label_12267c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1226C4u;
}
