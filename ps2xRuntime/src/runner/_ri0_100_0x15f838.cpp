#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ri0_100
// Address: 0x15f838 - 0x15f8e4
void _ri0_100_0x15f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ri0_100");


    ctx->pc = 0x15f838u;

    // 0x15f838: 0x8c850014
    ctx->pc = 0x15f838u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f83c: 0x8c860018
    ctx->pc = 0x15f83cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f840: 0x8c8e0000
    ctx->pc = 0x15f840u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f844: 0x8c8d0004
    ctx->pc = 0x15f844u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f848: 0x240cffff
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f84c: 0x8c830010
    ctx->pc = 0x15f84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f850: 0x31040
    ctx->pc = 0x15f850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x15f854: 0x5b80000
    ctx->pc = 0x15f854u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_15f858:
    // 0x15f858: 0x8c870008
    ctx->pc = 0x15f858u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f85c: 0x240bffff
    ctx->pc = 0x15f85cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f860:
    // 0x15f860: 0xdca80000
    ctx->pc = 0x15f860u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f864: 0xdcc90000
    ctx->pc = 0x15f864u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f868: 0x71284389
    ctx->pc = 0x15f868u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f86c: 0x710846e8
    ctx->pc = 0x15f86cu;
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
    // 0x15f870: 0x70084e88
    ctx->pc = 0x15f870u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x15f874: 0x20e7ffff
    ctx->pc = 0x15f874u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f878: 0xa32821
    ctx->pc = 0x15f878u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15f87c: 0xc33021
    ctx->pc = 0x15f87cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15f880: 0x79c80000
    ctx->pc = 0x15f880u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15f884: 0x71285108
    ctx->pc = 0x15f884u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f888: 0x71404988
    ctx->pc = 0x15f888u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x15f88c: 0x70094bf6
    ctx->pc = 0x15f88cu;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x15f890: 0x71495108
    ctx->pc = 0x15f890u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x15f894: 0x700a5076
    ctx->pc = 0x15f894u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x15f898: 0x7dca0000
    ctx->pc = 0x15f898u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x15f89c: 0x1ce0fff0
    ctx->pc = 0x15F89Cu;
    {
        const bool branch_taken_0x15f89c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F8A0u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x15f89c) {
            ctx->pc = 0x15F860u;
            goto label_15f860;
        }
    }
    ctx->pc = 0x15F8A4u;
    // 0x15f8a4: 0x24a50140
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x15f8a8: 0x24c60140
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x15f8ac: 0x8c87000c
    ctx->pc = 0x15f8acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f8b0: 0x1675024
    ctx->pc = 0x15f8b0u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x15f8b4: 0x1540ffea
    ctx->pc = 0x15F8B4u;
    {
        const bool branch_taken_0x15f8b4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F8B8u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f8b4) {
            ctx->pc = 0x15F860u;
            goto label_15f860;
        }
    }
    ctx->pc = 0x15F8BCu;
    // 0x15f8bc: 0x8c850014
    ctx->pc = 0x15f8bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f8c0: 0x8c860018
    ctx->pc = 0x15f8c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f8c4: 0x8c8e0000
    ctx->pc = 0x15f8c4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f8c8: 0x24a50040
    ctx->pc = 0x15f8c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x15f8cc: 0x24c60040
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x15f8d0: 0x25ce0080
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x15f8d4: 0x1580ffe0
    ctx->pc = 0x15F8D4u;
    {
        const bool branch_taken_0x15f8d4 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F8D8u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f8d4) {
            ctx->pc = 0x15F858u;
            goto label_15f858;
        }
    }
    ctx->pc = 0x15F8DCu;
    // 0x15f8dc: 0x3e00008
    ctx->pc = 0x15F8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F858u: goto label_15f858;
            case 0x15F860u: goto label_15f860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F8E4u;
}
