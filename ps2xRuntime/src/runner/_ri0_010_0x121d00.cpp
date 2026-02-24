#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ri0_010
// Address: 0x121d00 - 0x121db8
void _ri0_010_0x121d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121d00u;

    // 0x121d00: 0x7000cce9
    ctx->pc = 0x121d00u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121d04: 0x7019cbf6
    ctx->pc = 0x121d04u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x121d08: 0x8c850014
    ctx->pc = 0x121d08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121d0c: 0x8c860018
    ctx->pc = 0x121d0cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121d10: 0x8c8e0000
    ctx->pc = 0x121d10u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121d14: 0x8c8d0004
    ctx->pc = 0x121d14u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121d18: 0x24180001
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x121d1c: 0x240cffff
    ctx->pc = 0x121d1cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121d20: 0x8c830010
    ctx->pc = 0x121d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121d24: 0x31040
    ctx->pc = 0x121d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_121d28:
    // 0x121d28: 0x8c870008
    ctx->pc = 0x121d28u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121d2c: 0x240bffff
    ctx->pc = 0x121d2cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_121d30:
    // 0x121d30: 0xdca80000
    ctx->pc = 0x121d30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121d34: 0xdcc90000
    ctx->pc = 0x121d34u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x121d38: 0x71284389
    ctx->pc = 0x121d38u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121d3c: 0x5b80000
    ctx->pc = 0x121d3cu;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x121d40: 0x710846e8
    ctx->pc = 0x121d40u;
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
    // 0x121d44: 0x70084e88
    ctx->pc = 0x121d44u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x121d48: 0x20e7ffff
    ctx->pc = 0x121d48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x121d4c: 0xa32821
    ctx->pc = 0x121d4cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x121d50: 0xc33021
    ctx->pc = 0x121d50u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121d54: 0x7180000
    ctx->pc = 0x121d54u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x121d58: 0x700856e8
    ctx->pc = 0x121d58u;
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
    // 0x121d5c: 0x700a4688
    ctx->pc = 0x121d5cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x121d60: 0x71285108
    ctx->pc = 0x121d60u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x121d64: 0x71595108
    ctx->pc = 0x121d64u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x121d68: 0x700a5076
    ctx->pc = 0x121d68u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x121d6c: 0x7dca0000
    ctx->pc = 0x121d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x121d70: 0x1ce0ffef
    ctx->pc = 0x121D70u;
    {
        const bool branch_taken_0x121d70 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x121D74u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x121d70) {
            ctx->pc = 0x121D30u;
            goto label_121d30;
        }
    }
    ctx->pc = 0x121D78u;
    // 0x121d78: 0x24a50140
    ctx->pc = 0x121d78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x121d7c: 0x24c60140
    ctx->pc = 0x121d7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x121d80: 0x8c87000c
    ctx->pc = 0x121d80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121d84: 0x1675024
    ctx->pc = 0x121d84u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x121d88: 0x1540ffe9
    ctx->pc = 0x121D88u;
    {
        const bool branch_taken_0x121d88 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x121D8Cu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121d88) {
            ctx->pc = 0x121D30u;
            goto label_121d30;
        }
    }
    ctx->pc = 0x121D90u;
    // 0x121d90: 0x8c850014
    ctx->pc = 0x121d90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x121d94: 0x8c860018
    ctx->pc = 0x121d94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121d98: 0x8c8e0000
    ctx->pc = 0x121d98u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121d9c: 0x24a50040
    ctx->pc = 0x121d9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x121da0: 0x24c60040
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x121da4: 0x25ce0080
    ctx->pc = 0x121da4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x121da8: 0x1580ffdf
    ctx->pc = 0x121DA8u;
    {
        const bool branch_taken_0x121da8 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x121DACu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121da8) {
            ctx->pc = 0x121D28u;
            goto label_121d28;
        }
    }
    ctx->pc = 0x121DB0u;
    // 0x121db0: 0x3e00008
    ctx->pc = 0x121DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121D28u: goto label_121d28;
            case 0x121D30u: goto label_121d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121DB8u;
}
