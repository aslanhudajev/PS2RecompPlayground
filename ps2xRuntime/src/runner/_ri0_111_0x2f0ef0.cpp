#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_111
// Address: 0x2f0ef0 - 0x2f1004
void _ri0_111_0x2f0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0ef0u;

    // 0x2f0ef0: 0x7000cce9
    ctx->pc = 0x2f0ef0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0ef4: 0x7019cbf6
    ctx->pc = 0x2f0ef4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2f0ef8: 0x7019c874
    ctx->pc = 0x2f0ef8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x2f0efc: 0x8c850014
    ctx->pc = 0x2f0efcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0f00: 0x8c860018
    ctx->pc = 0x2f0f00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0f04: 0x8c8e0000
    ctx->pc = 0x2f0f04u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0f08: 0x8c8d0004
    ctx->pc = 0x2f0f08u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0f0c: 0x8c8c0010
    ctx->pc = 0x2f0f0cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0f10: 0x24180001
    ctx->pc = 0x2f0f10u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0f14: 0x240b0001
    ctx->pc = 0x2f0f14u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
label_2f0f18:
    // 0x2f0f18: 0x8c870008
    ctx->pc = 0x2f0f18u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f0f1c: 0xdca80000
    ctx->pc = 0x2f0f1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0f20: 0xdcc90000
    ctx->pc = 0x2f0f20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0f24: 0x71284389
    ctx->pc = 0x2f0f24u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f0f28: 0x5b80000
    ctx->pc = 0x2f0f28u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x2f0f2c: 0x710846e8
    ctx->pc = 0x2f0f2cu;
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
    // 0x2f0f30: 0x70084e88
    ctx->pc = 0x2f0f30u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f0f34: 0xac2821
    ctx->pc = 0x2f0f34u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f0f38: 0x356b8000
    ctx->pc = 0x2f0f38u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x2f0f3c: 0x7180000
    ctx->pc = 0x2f0f3cu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x2f0f40: 0x700856e8
    ctx->pc = 0x2f0f40u;
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
    // 0x2f0f44: 0x700a4688
    ctx->pc = 0x2f0f44u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f0f48: 0x10e0001c
    ctx->pc = 0x2F0F48u;
    {
        const bool branch_taken_0x2f0f48 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0F4Cu;
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        if (branch_taken_0x2f0f48) {
            ctx->pc = 0x2F0FBCu;
            goto label_2f0fbc;
        }
    }
    ctx->pc = 0x2F0F50u;
label_2f0f50:
    // 0x2f0f50: 0xcc3021
    ctx->pc = 0x2f0f50u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2f0f54: 0xdca80000
    ctx->pc = 0x2f0f54u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0f58: 0xdcc90000
    ctx->pc = 0x2f0f58u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0f5c: 0x71284389
    ctx->pc = 0x2f0f5cu;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f0f60: 0x5b80000
    ctx->pc = 0x2f0f60u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x2f0f64: 0x710846e8
    ctx->pc = 0x2f0f64u;
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
    // 0x2f0f68: 0x70084e88
    ctx->pc = 0x2f0f68u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f0f6c: 0x20e7ffff
    ctx->pc = 0x2f0f6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0f70: 0xac2821
    ctx->pc = 0x2f0f70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f0f74: 0x7180000
    ctx->pc = 0x2f0f74u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x2f0f78: 0x700856e8
    ctx->pc = 0x2f0f78u;
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
    // 0x2f0f7c: 0x700a4688
    ctx->pc = 0x2f0f7cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f0f80: 0x71285108
    ctx->pc = 0x2f0f80u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f0f84: 0x714f4908
    ctx->pc = 0x2f0f84u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x2f0f88: 0x71407ca9
    ctx->pc = 0x2f0f88u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0f8c: 0x71395108
    ctx->pc = 0x2f0f8cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x2f0f90: 0x700a50b6
    ctx->pc = 0x2f0f90u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x2f0f94: 0x79c80000
    ctx->pc = 0x2f0f94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2f0f98: 0x71485108
    ctx->pc = 0x2f0f98u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x2f0f9c: 0x71404988
    ctx->pc = 0x2f0f9cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0fa0: 0x70094bf6
    ctx->pc = 0x2f0fa0u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x2f0fa4: 0x71495108
    ctx->pc = 0x2f0fa4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x2f0fa8: 0xc4040
    ctx->pc = 0x2f0fa8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f0fac: 0x700a5076
    ctx->pc = 0x2f0facu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0fb0: 0x7dca0000
    ctx->pc = 0x2f0fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2f0fb4: 0x1ce0ffe6
    ctx->pc = 0x2F0FB4u;
    {
        const bool branch_taken_0x2f0fb4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0FB8u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x2f0fb4) {
            ctx->pc = 0x2F0F50u;
            goto label_2f0f50;
        }
    }
    ctx->pc = 0x2F0FBCu;
label_2f0fbc:
    // 0x2f0fbc: 0x700b53f7
    ctx->pc = 0x2f0fbcu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x2f0fc0: 0x24a50140
    ctx->pc = 0x2f0fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f0fc4: 0x8c87000c
    ctx->pc = 0x2f0fc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0fc8: 0x24c60140
    ctx->pc = 0x2f0fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f0fcc: 0x1475024
    ctx->pc = 0x2f0fccu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f0fd0: 0x1540ffdf
    ctx->pc = 0x2F0FD0u;
    {
        const bool branch_taken_0x2f0fd0 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0FD4u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x2f0fd0) {
            ctx->pc = 0x2F0F50u;
            goto label_2f0f50;
        }
    }
    ctx->pc = 0x2F0FD8u;
    // 0x2f0fd8: 0x8c850014
    ctx->pc = 0x2f0fd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0fdc: 0x8c860018
    ctx->pc = 0x2f0fdcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0fe0: 0x8c8e0000
    ctx->pc = 0x2f0fe0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0fe4: 0x24a50040
    ctx->pc = 0x2f0fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f0fe8: 0x24c60040
    ctx->pc = 0x2f0fe8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f0fec: 0x25ce0080
    ctx->pc = 0x2f0fecu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f0ff0: 0x316a0001
    ctx->pc = 0x2f0ff0u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x2f0ff4: 0x1540ffc8
    ctx->pc = 0x2F0FF4u;
    {
        const bool branch_taken_0x2f0ff4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0FF8u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x2f0ff4) {
            ctx->pc = 0x2F0F18u;
            goto label_2f0f18;
        }
    }
    ctx->pc = 0x2F0FFCu;
    // 0x2f0ffc: 0x3e00008
    ctx->pc = 0x2F0FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0F18u: goto label_2f0f18;
            case 0x2F0F50u: goto label_2f0f50;
            case 0x2F0FBCu: goto label_2f0fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F1004u;
}
