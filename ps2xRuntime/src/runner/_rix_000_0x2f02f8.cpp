#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _rix_000
// Address: 0x2f02f8 - 0x2f036c
void _rix_000_0x2f02f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f02f8u;

    // 0x2f02f8: 0x8c850014
    ctx->pc = 0x2f02f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f02fc: 0x8c860018
    ctx->pc = 0x2f02fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0300: 0x8c870008
    ctx->pc = 0x2f0300u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f0304: 0x8c8e0000
    ctx->pc = 0x2f0304u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0308: 0x8c8d0004
    ctx->pc = 0x2f0308u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f030c: 0x8c8c0010
    ctx->pc = 0x2f030cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0310: 0xc5840
    ctx->pc = 0x2f0310u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f0314: 0x240fffff
    ctx->pc = 0x2f0314u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0318: 0x5b80000
    ctx->pc = 0x2f0318u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_2f031c:
    // 0x2f031c: 0x78a80000
    ctx->pc = 0x2f031cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0320: 0x20e7ffff
    ctx->pc = 0x2f0320u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0324: 0x78c90000
    ctx->pc = 0x2f0324u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0328: 0xac2821
    ctx->pc = 0x2f0328u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f032c: 0x712856e8
    ctx->pc = 0x2f032cu;
    { 
    __m128i val_rt = GPR_VEC(ctx, 8);
    __m128i val_rs = GPR_VEC(ctx, 9);
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
    // 0x2f0330: 0x700a4688
    ctx->pc = 0x2f0330u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f0334: 0x700a4ea8
    ctx->pc = 0x2f0334u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f0338: 0x7dc80000
    ctx->pc = 0x2f0338u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x2f033c: 0xcc3021
    ctx->pc = 0x2f033cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2f0340: 0x7dc90010
    ctx->pc = 0x2f0340u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x2f0344: 0x1ce0fff5
    ctx->pc = 0x2F0344u;
    {
        const bool branch_taken_0x2f0344 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0348u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        if (branch_taken_0x2f0344) {
            ctx->pc = 0x2F031Cu;
            goto label_2f031c;
        }
    }
    ctx->pc = 0x2F034Cu;
    // 0x2f034c: 0x24a50080
    ctx->pc = 0x2f034cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x2f0350: 0x24c60080
    ctx->pc = 0x2f0350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x2f0354: 0x8c87000c
    ctx->pc = 0x2f0354u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0358: 0x1e75024
    ctx->pc = 0x2f0358u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x2f035c: 0x1540ffef
    ctx->pc = 0x2F035Cu;
    {
        const bool branch_taken_0x2f035c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0360u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f035c) {
            ctx->pc = 0x2F031Cu;
            goto label_2f031c;
        }
    }
    ctx->pc = 0x2F0364u;
    // 0x2f0364: 0x3e00008
    ctx->pc = 0x2F0364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F031Cu: goto label_2f031c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F036Cu;
}
