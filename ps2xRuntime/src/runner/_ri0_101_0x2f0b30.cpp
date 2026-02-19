#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_101
// Address: 0x2f0b30 - 0x2f0c14
void _ri0_101_0x2f0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0b30u;

    // 0x2f0b30: 0x7000cce9
    ctx->pc = 0x2f0b30u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0b34: 0x7019cbf6
    ctx->pc = 0x2f0b34u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2f0b38: 0x8c850014
    ctx->pc = 0x2f0b38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0b3c: 0x8c860018
    ctx->pc = 0x2f0b3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0b40: 0x8c8e0000
    ctx->pc = 0x2f0b40u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0b44: 0x8c8d0004
    ctx->pc = 0x2f0b44u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0b48: 0x8c8c0010
    ctx->pc = 0x2f0b48u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0b4c: 0x240b0001
    ctx->pc = 0x2f0b4cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0b50: 0xcc040
    ctx->pc = 0x2f0b50u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 12), 1));
    // 0x2f0b54: 0x5b80000
    ctx->pc = 0x2f0b54u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_2f0b58:
    // 0x2f0b58: 0x8c870008
    ctx->pc = 0x2f0b58u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f0b5c: 0xdca80000
    ctx->pc = 0x2f0b5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0b60: 0xdcc90000
    ctx->pc = 0x2f0b60u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0b64: 0x71284389
    ctx->pc = 0x2f0b64u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f0b68: 0x710846e8
    ctx->pc = 0x2f0b68u;
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
    // 0x2f0b6c: 0x356b8000
    ctx->pc = 0x2f0b6cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x2f0b70: 0x10e00016
    ctx->pc = 0x2F0B70u;
    {
        const bool branch_taken_0x2f0b70 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0B74u;
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        if (branch_taken_0x2f0b70) {
            ctx->pc = 0x2F0BCCu;
            goto label_2f0bcc;
        }
    }
    ctx->pc = 0x2F0B78u;
label_2f0b78:
    // 0x2f0b78: 0xac2821
    ctx->pc = 0x2f0b78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2f0b7c: 0xcc3021
    ctx->pc = 0x2f0b7cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2f0b80: 0xdca80000
    ctx->pc = 0x2f0b80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0b84: 0xdcc90000
    ctx->pc = 0x2f0b84u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0b88: 0x71284389
    ctx->pc = 0x2f0b88u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f0b8c: 0x710846e8
    ctx->pc = 0x2f0b8cu;
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
    // 0x2f0b90: 0x70085688
    ctx->pc = 0x2f0b90u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2f0b94: 0x20e7ffff
    ctx->pc = 0x2f0b94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0b98: 0x714f4908
    ctx->pc = 0x2f0b98u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x2f0b9c: 0x71407ca9
    ctx->pc = 0x2f0b9cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0ba0: 0x71395108
    ctx->pc = 0x2f0ba0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x2f0ba4: 0x700a5076
    ctx->pc = 0x2f0ba4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0ba8: 0x79c80000
    ctx->pc = 0x2f0ba8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2f0bac: 0x71485108
    ctx->pc = 0x2f0bacu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x2f0bb0: 0x71404988
    ctx->pc = 0x2f0bb0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0bb4: 0x70094bf6
    ctx->pc = 0x2f0bb4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x2f0bb8: 0x71495108
    ctx->pc = 0x2f0bb8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x2f0bbc: 0x700a5076
    ctx->pc = 0x2f0bbcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2f0bc0: 0x7dca0000
    ctx->pc = 0x2f0bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2f0bc4: 0x1ce0ffec
    ctx->pc = 0x2F0BC4u;
    {
        const bool branch_taken_0x2f0bc4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0BC8u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        if (branch_taken_0x2f0bc4) {
            ctx->pc = 0x2F0B78u;
            goto label_2f0b78;
        }
    }
    ctx->pc = 0x2F0BCCu;
label_2f0bcc:
    // 0x2f0bcc: 0x700b53f7
    ctx->pc = 0x2f0bccu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x2f0bd0: 0x24a50140
    ctx->pc = 0x2f0bd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f0bd4: 0x8c87000c
    ctx->pc = 0x2f0bd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f0bd8: 0x24c60140
    ctx->pc = 0x2f0bd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x2f0bdc: 0x1475024
    ctx->pc = 0x2f0bdcu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f0be0: 0x1540ffe5
    ctx->pc = 0x2F0BE0u;
    {
        const bool branch_taken_0x2f0be0 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0BE4u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x2f0be0) {
            ctx->pc = 0x2F0B78u;
            goto label_2f0b78;
        }
    }
    ctx->pc = 0x2F0BE8u;
    // 0x2f0be8: 0x8c850014
    ctx->pc = 0x2f0be8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0bec: 0x8c860018
    ctx->pc = 0x2f0becu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0bf0: 0x8c8e0000
    ctx->pc = 0x2f0bf0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0bf4: 0x24a50040
    ctx->pc = 0x2f0bf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2f0bf8: 0x24c60040
    ctx->pc = 0x2f0bf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f0bfc: 0x25ce0080
    ctx->pc = 0x2f0bfcu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x2f0c00: 0x316a0001
    ctx->pc = 0x2f0c00u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x2f0c04: 0x1540ffd4
    ctx->pc = 0x2F0C04u;
    {
        const bool branch_taken_0x2f0c04 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F0C08u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x2f0c04) {
            ctx->pc = 0x2F0B58u;
            goto label_2f0b58;
        }
    }
    ctx->pc = 0x2F0C0Cu;
    // 0x2f0c0c: 0x3e00008
    ctx->pc = 0x2F0C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0B58u: goto label_2f0b58;
            case 0x2F0B78u: goto label_2f0b78;
            case 0x2F0BCCu: goto label_2f0bcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F0C14u;
}
