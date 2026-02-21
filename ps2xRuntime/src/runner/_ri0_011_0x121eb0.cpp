#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_011
// Address: 0x121eb0 - 0x121fac
void _ri0_011_0x121eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121eb0u;

    // 0x121eb0: 0x7000cce9
    ctx->pc = 0x121eb0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121eb4: 0x7019cbf6
    ctx->pc = 0x121eb4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x121eb8: 0x7019c874
    ctx->pc = 0x121eb8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x121ebc: 0x8c850014
    ctx->pc = 0x121ebcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121ec0: 0x8c860018
    ctx->pc = 0x121ec0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121ec4: 0x8c8e0000
    ctx->pc = 0x121ec4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121ec8: 0x8c8d0004
    ctx->pc = 0x121ec8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121ecc: 0x8c8c0010
    ctx->pc = 0x121eccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121ed0: 0x24180001
    ctx->pc = 0x121ed0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ed4: 0x240b0001
    ctx->pc = 0x121ed4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
label_121ed8:
    // 0x121ed8: 0x8c870008
    ctx->pc = 0x121ed8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121edc: 0xdca80000
    ctx->pc = 0x121edcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121ee0: 0xdcc90000
    ctx->pc = 0x121ee0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121ee4: 0x71284389
    ctx->pc = 0x121ee4u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121ee8: 0x5b80000
    ctx->pc = 0x121ee8u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x121eec: 0x710846e8
    ctx->pc = 0x121eecu;
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
    // 0x121ef0: 0x70084e88
    ctx->pc = 0x121ef0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x121ef4: 0xac2821
    ctx->pc = 0x121ef4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x121ef8: 0x356b8000
    ctx->pc = 0x121ef8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x121efc: 0x7180000
    ctx->pc = 0x121efcu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x121f00: 0x700856e8
    ctx->pc = 0x121f00u;
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
    // 0x121f04: 0x700a4688
    ctx->pc = 0x121f04u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x121f08: 0x10e00016
    ctx->pc = 0x121F08u;
    {
        const bool branch_taken_0x121f08 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x121F0Cu;
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        if (branch_taken_0x121f08) {
            ctx->pc = 0x121F64u;
            goto label_121f64;
        }
    }
    ctx->pc = 0x121F10u;
label_121f10:
    // 0x121f10: 0xcc3021
    ctx->pc = 0x121f10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x121f14: 0xdca80000
    ctx->pc = 0x121f14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121f18: 0xdcc90000
    ctx->pc = 0x121f18u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121f1c: 0x71284389
    ctx->pc = 0x121f1cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121f20: 0x5b80000
    ctx->pc = 0x121f20u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x121f24: 0x710846e8
    ctx->pc = 0x121f24u;
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
    // 0x121f28: 0x70084e88
    ctx->pc = 0x121f28u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x121f2c: 0x20e7ffff
    ctx->pc = 0x121f2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121f30: 0xac2821
    ctx->pc = 0x121f30u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x121f34: 0x7180000
    ctx->pc = 0x121f34u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x121f38: 0x700856e8
    ctx->pc = 0x121f38u;
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
    // 0x121f3c: 0x700a4688
    ctx->pc = 0x121f3cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x121f40: 0x71285108
    ctx->pc = 0x121f40u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121f44: 0x714f4908
    ctx->pc = 0x121f44u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x121f48: 0x71407ca9
    ctx->pc = 0x121f48u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x121f4c: 0x71395108
    ctx->pc = 0x121f4cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x121f50: 0xc4040
    ctx->pc = 0x121f50u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 1));
    // 0x121f54: 0x700a50b6
    ctx->pc = 0x121f54u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x121f58: 0x7dca0000
    ctx->pc = 0x121f58u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x121f5c: 0x1ce0ffec
    ctx->pc = 0x121F5Cu;
    {
        const bool branch_taken_0x121f5c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121F60u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x121f5c) {
            ctx->pc = 0x121F10u;
            goto label_121f10;
        }
    }
    ctx->pc = 0x121F64u;
label_121f64:
    // 0x121f64: 0x700b53f7
    ctx->pc = 0x121f64u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x121f68: 0x24a50140
    ctx->pc = 0x121f68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x121f6c: 0x8c87000c
    ctx->pc = 0x121f6cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121f70: 0x24c60140
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x121f74: 0x1475024
    ctx->pc = 0x121f74u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x121f78: 0x1540ffe5
    ctx->pc = 0x121F78u;
    {
        const bool branch_taken_0x121f78 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x121F7Cu;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x121f78) {
            ctx->pc = 0x121F10u;
            goto label_121f10;
        }
    }
    ctx->pc = 0x121F80u;
    // 0x121f80: 0x8c850014
    ctx->pc = 0x121f80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121f84: 0x8c860018
    ctx->pc = 0x121f84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121f88: 0x8c8e0000
    ctx->pc = 0x121f88u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121f8c: 0x24a50040
    ctx->pc = 0x121f8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x121f90: 0x24c60040
    ctx->pc = 0x121f90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x121f94: 0x25ce0080
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x121f98: 0x316a0001
    ctx->pc = 0x121f98u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x121f9c: 0x1540ffce
    ctx->pc = 0x121F9Cu;
    {
        const bool branch_taken_0x121f9c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x121FA0u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x121f9c) {
            ctx->pc = 0x121ED8u;
            goto label_121ed8;
        }
    }
    ctx->pc = 0x121FA4u;
    // 0x121fa4: 0x3e00008
    ctx->pc = 0x121FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121ED8u: goto label_121ed8;
            case 0x121F10u: goto label_121f10;
            case 0x121F64u: goto label_121f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121FACu;
}
