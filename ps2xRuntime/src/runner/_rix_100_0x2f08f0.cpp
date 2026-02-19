#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _rix_100
// Address: 0x2f08f0 - 0x2f0994
void _rix_100_0x2f08f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f08f0u;

    // 0x2f08f0: 0x8c850014
    ctx->pc = 0x2f08f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f08f4: 0x8c860018
    ctx->pc = 0x2f08f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f08f8: 0x8c870008
    ctx->pc = 0x2f08f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f08fc: 0x8c8e0000
    ctx->pc = 0x2f08fcu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0900: 0x8c8d0004
    ctx->pc = 0x2f0900u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0904: 0x8c890010
    ctx->pc = 0x2f0904u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0908: 0x94040
    ctx->pc = 0x2f0908u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 1));
    // 0x2f090c: 0x240bffff
    ctx->pc = 0x2f090cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0910: 0x5b80000
    ctx->pc = 0x2f0910u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_2f0914:
    // 0x2f0914: 0x78aa0000
    ctx->pc = 0x2f0914u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0918: 0x78cf0000
    ctx->pc = 0x2f0918u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f091c: 0x71ea16e8
    ctx->pc = 0x2f091cu;
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
    // 0x2f0920: 0x70025688
    ctx->pc = 0x2f0920u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2f0924: 0x70027ea8
    ctx->pc = 0x2f0924u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2f0928: 0x79c20000
    ctx->pc = 0x2f0928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2f092c: 0x79c30010
    ctx->pc = 0x2f092cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2f0930: 0x704a1108
    ctx->pc = 0x2f0930u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2f0934: 0x706f1908
    ctx->pc = 0x2f0934u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x2f0938: 0x70405188
    ctx->pc = 0x2f0938u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f093c: 0x700a53f6
    ctx->pc = 0x2f093cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x2f0940: 0x704a5108
    ctx->pc = 0x2f0940u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2f0944: 0x700a1076
    ctx->pc = 0x2f0944u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0948: 0x70605188
    ctx->pc = 0x2f0948u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f094c: 0x700a53f6
    ctx->pc = 0x2f094cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x2f0950: 0x706a5108
    ctx->pc = 0x2f0950u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x2f0954: 0x700a1876
    ctx->pc = 0x2f0954u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0958: 0x7dc20000
    ctx->pc = 0x2f0958u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2f095c: 0x7dc30010
    ctx->pc = 0x2f095cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x2f0960: 0x20e7ffff
    ctx->pc = 0x2f0960u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0964: 0xa92821
    ctx->pc = 0x2f0964u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2f0968: 0x1c87021
    ctx->pc = 0x2f0968u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x2f096c: 0x1ce0ffe9
    ctx->pc = 0x2F096Cu;
    {
        const bool branch_taken_0x2f096c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0970u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        if (branch_taken_0x2f096c) {
            ctx->pc = 0x2F0914u;
            goto label_2f0914;
        }
    }
    ctx->pc = 0x2F0974u;
    // 0x2f0974: 0x24a50080
    ctx->pc = 0x2f0974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x2f0978: 0x24c60080
    ctx->pc = 0x2f0978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x2f097c: 0x8c87000c
    ctx->pc = 0x2f097cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0980: 0x1676024
    ctx->pc = 0x2f0980u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f0984: 0x1580ffe3
    ctx->pc = 0x2F0984u;
    {
        const bool branch_taken_0x2f0984 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0988u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f0984) {
            ctx->pc = 0x2F0914u;
            goto label_2f0914;
        }
    }
    ctx->pc = 0x2F098Cu;
    // 0x2f098c: 0x3e00008
    ctx->pc = 0x2F098Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0914u: goto label_2f0914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F0994u;
}
