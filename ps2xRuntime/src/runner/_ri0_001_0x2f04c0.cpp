#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_001
// Address: 0x2f04c0 - 0x2f058c
void _ri0_001_0x2f04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f04c0u;

    // 0x2f04c0: 0x7000cce9
    ctx->pc = 0x2f04c0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f04c4: 0x7019cbf6
    ctx->pc = 0x2f04c4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2f04c8: 0x8c850014
    ctx->pc = 0x2f04c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f04cc: 0x8c860018
    ctx->pc = 0x2f04ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f04d0: 0x8c8e0000
    ctx->pc = 0x2f04d0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f04d4: 0x8c8d0004
    ctx->pc = 0x2f04d4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f04d8: 0x8c8c0010
    ctx->pc = 0x2f04d8u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f04dc: 0x240b0001
    ctx->pc = 0x2f04dcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f04e0: 0xcc040
    ctx->pc = 0x2f04e0u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f04e4: 0x5b80000
    ctx->pc = 0x2f04e4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_2f04e8:
    // 0x2f04e8: 0x8c870008
    ctx->pc = 0x2f04e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f04ec: 0xdca80000
    ctx->pc = 0x2f04ecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f04f0: 0xdcc90000
    ctx->pc = 0x2f04f0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f04f4: 0x71284389
    ctx->pc = 0x2f04f4u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f04f8: 0x710846e8
    ctx->pc = 0x2f04f8u;
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
    // 0x2f04fc: 0x356b8000
    ctx->pc = 0x2f04fcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x2f0500: 0x10e00010
    ctx->pc = 0x2F0500u;
    {
        const bool branch_taken_0x2f0500 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0504u;
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        if (branch_taken_0x2f0500) {
            ctx->pc = 0x2F0544u;
            goto label_2f0544;
        }
    }
    ctx->pc = 0x2F0508u;
label_2f0508:
    // 0x2f0508: 0xac2821
    ctx->pc = 0x2f0508u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f050c: 0xcc3021
    ctx->pc = 0x2f050cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2f0510: 0xdca80000
    ctx->pc = 0x2f0510u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0514: 0xdcc90000
    ctx->pc = 0x2f0514u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0518: 0x71284389
    ctx->pc = 0x2f0518u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f051c: 0x710846e8
    ctx->pc = 0x2f051cu;
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
    // 0x2f0520: 0x70085688
    ctx->pc = 0x2f0520u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f0524: 0x20e7ffff
    ctx->pc = 0x2f0524u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0528: 0x714f4908
    ctx->pc = 0x2f0528u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x2f052c: 0x71407ca9
    ctx->pc = 0x2f052cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0530: 0x71395108
    ctx->pc = 0x2f0530u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x2f0534: 0x700a5076
    ctx->pc = 0x2f0534u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0538: 0x7dca0000
    ctx->pc = 0x2f0538u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2f053c: 0x1ce0fff2
    ctx->pc = 0x2F053Cu;
    {
        const bool branch_taken_0x2f053c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0540u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        if (branch_taken_0x2f053c) {
            ctx->pc = 0x2F0508u;
            goto label_2f0508;
        }
    }
    ctx->pc = 0x2F0544u;
label_2f0544:
    // 0x2f0544: 0x700b53f7
    ctx->pc = 0x2f0544u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x2f0548: 0x24a50140
    ctx->pc = 0x2f0548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f054c: 0x8c87000c
    ctx->pc = 0x2f054cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0550: 0x24c60140
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f0554: 0x1475024
    ctx->pc = 0x2f0554u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f0558: 0x1540ffeb
    ctx->pc = 0x2F0558u;
    {
        const bool branch_taken_0x2f0558 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F055Cu;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x2f0558) {
            ctx->pc = 0x2F0508u;
            goto label_2f0508;
        }
    }
    ctx->pc = 0x2F0560u;
    // 0x2f0560: 0x8c850014
    ctx->pc = 0x2f0560u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0564: 0x8c860018
    ctx->pc = 0x2f0564u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0568: 0x8c8e0000
    ctx->pc = 0x2f0568u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f056c: 0x24a50040
    ctx->pc = 0x2f056cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f0570: 0x24c60040
    ctx->pc = 0x2f0570u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f0574: 0x25ce0080
    ctx->pc = 0x2f0574u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f0578: 0x316a0001
    ctx->pc = 0x2f0578u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x2f057c: 0x1540ffda
    ctx->pc = 0x2F057Cu;
    {
        const bool branch_taken_0x2f057c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0580u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x2f057c) {
            ctx->pc = 0x2F04E8u;
            goto label_2f04e8;
        }
    }
    ctx->pc = 0x2F0584u;
    // 0x2f0584: 0x3e00008
    ctx->pc = 0x2F0584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F04E8u: goto label_2f04e8;
            case 0x2F0508u: goto label_2f0508;
            case 0x2F0544u: goto label_2f0544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F058Cu;
}
