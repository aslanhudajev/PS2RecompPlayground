#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_001
// Address: 0x121b80 - 0x121c4c
void _ri0_001_0x121b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121b80u;

    // 0x121b80: 0x7000cce9
    ctx->pc = 0x121b80u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121b84: 0x7019cbf6
    ctx->pc = 0x121b84u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x121b88: 0x8c850014
    ctx->pc = 0x121b88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121b8c: 0x8c860018
    ctx->pc = 0x121b8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121b90: 0x8c8e0000
    ctx->pc = 0x121b90u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121b94: 0x8c8d0004
    ctx->pc = 0x121b94u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121b98: 0x8c8c0010
    ctx->pc = 0x121b98u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121b9c: 0x240b0001
    ctx->pc = 0x121b9cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ba0: 0xcc040
    ctx->pc = 0x121ba0u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 12), 1));
    // 0x121ba4: 0x5b80000
    ctx->pc = 0x121ba4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_121ba8:
    // 0x121ba8: 0x8c870008
    ctx->pc = 0x121ba8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121bac: 0xdca80000
    ctx->pc = 0x121bacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121bb0: 0xdcc90000
    ctx->pc = 0x121bb0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121bb4: 0x71284389
    ctx->pc = 0x121bb4u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121bb8: 0x710846e8
    ctx->pc = 0x121bb8u;
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
    // 0x121bbc: 0x356b8000
    ctx->pc = 0x121bbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)32768);
    // 0x121bc0: 0x10e00010
    ctx->pc = 0x121BC0u;
    {
        const bool branch_taken_0x121bc0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x121BC4u;
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        if (branch_taken_0x121bc0) {
            ctx->pc = 0x121C04u;
            goto label_121c04;
        }
    }
    ctx->pc = 0x121BC8u;
label_121bc8:
    // 0x121bc8: 0xac2821
    ctx->pc = 0x121bc8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x121bcc: 0xcc3021
    ctx->pc = 0x121bccu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x121bd0: 0xdca80000
    ctx->pc = 0x121bd0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121bd4: 0xdcc90000
    ctx->pc = 0x121bd4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121bd8: 0x71284389
    ctx->pc = 0x121bd8u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121bdc: 0x710846e8
    ctx->pc = 0x121bdcu;
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
    // 0x121be0: 0x70085688
    ctx->pc = 0x121be0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x121be4: 0x20e7ffff
    ctx->pc = 0x121be4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121be8: 0x714f4908
    ctx->pc = 0x121be8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x121bec: 0x71407ca9
    ctx->pc = 0x121becu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x121bf0: 0x71395108
    ctx->pc = 0x121bf0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x121bf4: 0x700a5076
    ctx->pc = 0x121bf4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x121bf8: 0x7dca0000
    ctx->pc = 0x121bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x121bfc: 0x1ce0fff2
    ctx->pc = 0x121BFCu;
    {
        const bool branch_taken_0x121bfc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121C00u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        if (branch_taken_0x121bfc) {
            ctx->pc = 0x121BC8u;
            goto label_121bc8;
        }
    }
    ctx->pc = 0x121C04u;
label_121c04:
    // 0x121c04: 0x700b53f7
    ctx->pc = 0x121c04u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x121c08: 0x24a50140
    ctx->pc = 0x121c08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x121c0c: 0x8c87000c
    ctx->pc = 0x121c0cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121c10: 0x24c60140
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x121c14: 0x1475024
    ctx->pc = 0x121c14u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x121c18: 0x1540ffeb
    ctx->pc = 0x121C18u;
    {
        const bool branch_taken_0x121c18 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x121C1Cu;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x121c18) {
            ctx->pc = 0x121BC8u;
            goto label_121bc8;
        }
    }
    ctx->pc = 0x121C20u;
    // 0x121c20: 0x8c850014
    ctx->pc = 0x121c20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121c24: 0x8c860018
    ctx->pc = 0x121c24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121c28: 0x8c8e0000
    ctx->pc = 0x121c28u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121c2c: 0x24a50040
    ctx->pc = 0x121c2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x121c30: 0x24c60040
    ctx->pc = 0x121c30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x121c34: 0x25ce0080
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x121c38: 0x316a0001
    ctx->pc = 0x121c38u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x121c3c: 0x1540ffda
    ctx->pc = 0x121C3Cu;
    {
        const bool branch_taken_0x121c3c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x121C40u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x121c3c) {
            ctx->pc = 0x121BA8u;
            goto label_121ba8;
        }
    }
    ctx->pc = 0x121C44u;
    // 0x121c44: 0x3e00008
    ctx->pc = 0x121C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121BA8u: goto label_121ba8;
            case 0x121BC8u: goto label_121bc8;
            case 0x121C04u: goto label_121c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121C4Cu;
}
