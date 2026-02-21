#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_000
// Address: 0x2f0370 - 0x2f0404
void _ri0_000_0x2f0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0370u;

    // 0x2f0370: 0x8c850014
    ctx->pc = 0x2f0370u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0374: 0x8c860018
    ctx->pc = 0x2f0374u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0378: 0x8c8e0000
    ctx->pc = 0x2f0378u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f037c: 0x8c8d0004
    ctx->pc = 0x2f037cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0380: 0x8c8c0010
    ctx->pc = 0x2f0380u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0384: 0xc5840
    ctx->pc = 0x2f0384u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f0388: 0x5b80000
    ctx->pc = 0x2f0388u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x2f038c: 0x2418ffff
    ctx->pc = 0x2f038cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0390:
    // 0x2f0390: 0x8c870008
    ctx->pc = 0x2f0390u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f0394: 0x240fffff
    ctx->pc = 0x2f0394u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0398:
    // 0x2f0398: 0xdca80000
    ctx->pc = 0x2f0398u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f039c: 0xdcc90000
    ctx->pc = 0x2f039cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f03a0: 0x71284389
    ctx->pc = 0x2f03a0u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f03a4: 0x71084ee8
    ctx->pc = 0x2f03a4u;
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
    // 0x2f03a8: 0x70094688
    ctx->pc = 0x2f03a8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x2f03ac: 0x7dc80000
    ctx->pc = 0x2f03acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x2f03b0: 0x20e7ffff
    ctx->pc = 0x2f03b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f03b4: 0xac2821
    ctx->pc = 0x2f03b4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f03b8: 0x1cb7021
    ctx->pc = 0x2f03b8u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x2f03bc: 0x1ce0fff6
    ctx->pc = 0x2F03BCu;
    {
        const bool branch_taken_0x2f03bc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F03C0u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        if (branch_taken_0x2f03bc) {
            ctx->pc = 0x2F0398u;
            goto label_2f0398;
        }
    }
    ctx->pc = 0x2F03C4u;
    // 0x2f03c4: 0x24a50140
    ctx->pc = 0x2f03c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f03c8: 0x24c60140
    ctx->pc = 0x2f03c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f03cc: 0x8c87000c
    ctx->pc = 0x2f03ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f03d0: 0x1e75024
    ctx->pc = 0x2f03d0u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x2f03d4: 0x1540fff0
    ctx->pc = 0x2F03D4u;
    {
        const bool branch_taken_0x2f03d4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F03D8u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f03d4) {
            ctx->pc = 0x2F0398u;
            goto label_2f0398;
        }
    }
    ctx->pc = 0x2F03DCu;
    // 0x2f03dc: 0x8c850014
    ctx->pc = 0x2f03dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f03e0: 0x8c860018
    ctx->pc = 0x2f03e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f03e4: 0x8c8e0000
    ctx->pc = 0x2f03e4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f03e8: 0x24a50040
    ctx->pc = 0x2f03e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f03ec: 0x24c60040
    ctx->pc = 0x2f03ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f03f0: 0x25ce0080
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f03f4: 0x1700ffe6
    ctx->pc = 0x2F03F4u;
    {
        const bool branch_taken_0x2f03f4 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F03F8u;
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f03f4) {
            ctx->pc = 0x2F0390u;
            goto label_2f0390;
        }
    }
    ctx->pc = 0x2F03FCu;
    // 0x2f03fc: 0x3e00008
    ctx->pc = 0x2F03FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0390u: goto label_2f0390;
            case 0x2F0398u: goto label_2f0398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F0404u;
}
