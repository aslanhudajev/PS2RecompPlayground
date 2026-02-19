#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_100
// Address: 0x2f0998 - 0x2f0a44
void _ri0_100_0x2f0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0998u;

    // 0x2f0998: 0x8c850014
    ctx->pc = 0x2f0998u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f099c: 0x8c860018
    ctx->pc = 0x2f099cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f09a0: 0x8c8e0000
    ctx->pc = 0x2f09a0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f09a4: 0x8c8d0004
    ctx->pc = 0x2f09a4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f09a8: 0x240cffff
    ctx->pc = 0x2f09a8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f09ac: 0x8c830010
    ctx->pc = 0x2f09acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f09b0: 0x31040
    ctx->pc = 0x2f09b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2f09b4: 0x5b80000
    ctx->pc = 0x2f09b4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_2f09b8:
    // 0x2f09b8: 0x8c870008
    ctx->pc = 0x2f09b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f09bc: 0x240bffff
    ctx->pc = 0x2f09bcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f09c0:
    // 0x2f09c0: 0xdca80000
    ctx->pc = 0x2f09c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f09c4: 0xdcc90000
    ctx->pc = 0x2f09c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f09c8: 0x71284389
    ctx->pc = 0x2f09c8u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f09cc: 0x710846e8
    ctx->pc = 0x2f09ccu;
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
    // 0x2f09d0: 0x70084e88
    ctx->pc = 0x2f09d0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f09d4: 0x20e7ffff
    ctx->pc = 0x2f09d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f09d8: 0xa32821
    ctx->pc = 0x2f09d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f09dc: 0xc33021
    ctx->pc = 0x2f09dcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f09e0: 0x79c80000
    ctx->pc = 0x2f09e0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2f09e4: 0x71285108
    ctx->pc = 0x2f09e4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f09e8: 0x71404988
    ctx->pc = 0x2f09e8u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f09ec: 0x70094bf6
    ctx->pc = 0x2f09ecu;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x2f09f0: 0x71495108
    ctx->pc = 0x2f09f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x2f09f4: 0x700a5076
    ctx->pc = 0x2f09f4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f09f8: 0x7dca0000
    ctx->pc = 0x2f09f8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2f09fc: 0x1ce0fff0
    ctx->pc = 0x2F09FCu;
    {
        const bool branch_taken_0x2f09fc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0A00u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x2f09fc) {
            ctx->pc = 0x2F09C0u;
            goto label_2f09c0;
        }
    }
    ctx->pc = 0x2F0A04u;
    // 0x2f0a04: 0x24a50140
    ctx->pc = 0x2f0a04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f0a08: 0x24c60140
    ctx->pc = 0x2f0a08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f0a0c: 0x8c87000c
    ctx->pc = 0x2f0a0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0a10: 0x1675024
    ctx->pc = 0x2f0a10u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f0a14: 0x1540ffea
    ctx->pc = 0x2F0A14u;
    {
        const bool branch_taken_0x2f0a14 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0A18u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a14) {
            ctx->pc = 0x2F09C0u;
            goto label_2f09c0;
        }
    }
    ctx->pc = 0x2F0A1Cu;
    // 0x2f0a1c: 0x8c850014
    ctx->pc = 0x2f0a1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0a20: 0x8c860018
    ctx->pc = 0x2f0a20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0a24: 0x8c8e0000
    ctx->pc = 0x2f0a24u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0a28: 0x24a50040
    ctx->pc = 0x2f0a28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f0a2c: 0x24c60040
    ctx->pc = 0x2f0a2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f0a30: 0x25ce0080
    ctx->pc = 0x2f0a30u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f0a34: 0x1580ffe0
    ctx->pc = 0x2F0A34u;
    {
        const bool branch_taken_0x2f0a34 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0A38u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a34) {
            ctx->pc = 0x2F09B8u;
            goto label_2f09b8;
        }
    }
    ctx->pc = 0x2F0A3Cu;
    // 0x2f0a3c: 0x3e00008
    ctx->pc = 0x2F0A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F09B8u: goto label_2f09b8;
            case 0x2F09C0u: goto label_2f09c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F0A44u;
}
