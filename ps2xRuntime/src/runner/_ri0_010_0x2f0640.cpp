#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_010
// Address: 0x2f0640 - 0x2f06f8
void _ri0_010_0x2f0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0640u;

    // 0x2f0640: 0x7000cce9
    ctx->pc = 0x2f0640u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0644: 0x7019cbf6
    ctx->pc = 0x2f0644u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2f0648: 0x8c850014
    ctx->pc = 0x2f0648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f064c: 0x8c860018
    ctx->pc = 0x2f064cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0650: 0x8c8e0000
    ctx->pc = 0x2f0650u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0654: 0x8c8d0004
    ctx->pc = 0x2f0654u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0658: 0x24180001
    ctx->pc = 0x2f0658u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f065c: 0x240cffff
    ctx->pc = 0x2f065cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0660: 0x8c830010
    ctx->pc = 0x2f0660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0664: 0x31040
    ctx->pc = 0x2f0664u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_2f0668:
    // 0x2f0668: 0x8c870008
    ctx->pc = 0x2f0668u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f066c: 0x240bffff
    ctx->pc = 0x2f066cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0670:
    // 0x2f0670: 0xdca80000
    ctx->pc = 0x2f0670u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0674: 0xdcc90000
    ctx->pc = 0x2f0674u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0678: 0x71284389
    ctx->pc = 0x2f0678u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f067c: 0x5b80000
    ctx->pc = 0x2f067cu;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x2f0680: 0x710846e8
    ctx->pc = 0x2f0680u;
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
    // 0x2f0684: 0x70084e88
    ctx->pc = 0x2f0684u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f0688: 0x20e7ffff
    ctx->pc = 0x2f0688u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f068c: 0xa32821
    ctx->pc = 0x2f068cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f0690: 0xc33021
    ctx->pc = 0x2f0690u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f0694: 0x7180000
    ctx->pc = 0x2f0694u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x2f0698: 0x700856e8
    ctx->pc = 0x2f0698u;
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
    // 0x2f069c: 0x700a4688
    ctx->pc = 0x2f069cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f06a0: 0x71285108
    ctx->pc = 0x2f06a0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f06a4: 0x71595108
    ctx->pc = 0x2f06a4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x2f06a8: 0x700a5076
    ctx->pc = 0x2f06a8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f06ac: 0x7dca0000
    ctx->pc = 0x2f06acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2f06b0: 0x1ce0ffef
    ctx->pc = 0x2F06B0u;
    {
        const bool branch_taken_0x2f06b0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F06B4u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x2f06b0) {
            ctx->pc = 0x2F0670u;
            goto label_2f0670;
        }
    }
    ctx->pc = 0x2F06B8u;
    // 0x2f06b8: 0x24a50140
    ctx->pc = 0x2f06b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f06bc: 0x24c60140
    ctx->pc = 0x2f06bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f06c0: 0x8c87000c
    ctx->pc = 0x2f06c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f06c4: 0x1675024
    ctx->pc = 0x2f06c4u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f06c8: 0x1540ffe9
    ctx->pc = 0x2F06C8u;
    {
        const bool branch_taken_0x2f06c8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F06CCu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f06c8) {
            ctx->pc = 0x2F0670u;
            goto label_2f0670;
        }
    }
    ctx->pc = 0x2F06D0u;
    // 0x2f06d0: 0x8c850014
    ctx->pc = 0x2f06d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f06d4: 0x8c860018
    ctx->pc = 0x2f06d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f06d8: 0x8c8e0000
    ctx->pc = 0x2f06d8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f06dc: 0x24a50040
    ctx->pc = 0x2f06dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f06e0: 0x24c60040
    ctx->pc = 0x2f06e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f06e4: 0x25ce0080
    ctx->pc = 0x2f06e4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f06e8: 0x1580ffdf
    ctx->pc = 0x2F06E8u;
    {
        const bool branch_taken_0x2f06e8 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F06ECu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f06e8) {
            ctx->pc = 0x2F0668u;
            goto label_2f0668;
        }
    }
    ctx->pc = 0x2F06F0u;
    // 0x2f06f0: 0x3e00008
    ctx->pc = 0x2F06F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0668u: goto label_2f0668;
            case 0x2F0670u: goto label_2f0670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F06F8u;
}
