#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _rix_001
// Address: 0x15f2a8 - 0x15f35c
void _rix_001_0x15f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_rix_001");


    ctx->pc = 0x15f2a8u;

    // 0x15f2a8: 0x7000cce9
    ctx->pc = 0x15f2a8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f2ac: 0x7019cbf6
    ctx->pc = 0x15f2acu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x15f2b0: 0x8c850014
    ctx->pc = 0x15f2b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f2b4: 0x8c860018
    ctx->pc = 0x15f2b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f2b8: 0x8c870008
    ctx->pc = 0x15f2b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f2bc: 0x8c8e0000
    ctx->pc = 0x15f2bcu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f2c0: 0x8c8d0004
    ctx->pc = 0x15f2c0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f2c4: 0x8c980010
    ctx->pc = 0x15f2c4u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f2c8: 0x78a80000
    ctx->pc = 0x15f2c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f2cc: 0x186040
    ctx->pc = 0x15f2ccu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 24), 1));
    // 0x15f2d0: 0x78c90000
    ctx->pc = 0x15f2d0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f2d4: 0x5b80000
    ctx->pc = 0x15f2d4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x15f2d8: 0x712856e8
    ctx->pc = 0x15f2d8u;
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
    // 0x15f2dc: 0x700a4688
    ctx->pc = 0x15f2dcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x15f2e0: 0x240bffff
    ctx->pc = 0x15f2e0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f2e4: 0x10e00015
    ctx->pc = 0x15F2E4u;
    {
        const bool branch_taken_0x15f2e4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F2E8u;
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        if (branch_taken_0x15f2e4) {
            ctx->pc = 0x15F33Cu;
            goto label_15f33c;
        }
    }
    ctx->pc = 0x15F2ECu;
label_15f2ec:
    // 0x15f2ec: 0xb82821
    ctx->pc = 0x15f2ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x15f2f0: 0xd83021
    ctx->pc = 0x15f2f0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x15f2f4: 0x78aa0000
    ctx->pc = 0x15f2f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f2f8: 0x78cf0000
    ctx->pc = 0x15f2f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f2fc: 0x71ea16e8
    ctx->pc = 0x15f2fcu;
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
    // 0x15f300: 0x70025688
    ctx->pc = 0x15f300u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15f304: 0x20e7ffff
    ctx->pc = 0x15f304u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f308: 0x70027ea8
    ctx->pc = 0x15f308u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x15f30c: 0x710a1108
    ctx->pc = 0x15f30cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x15f310: 0x712f1908
    ctx->pc = 0x15f310u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x15f314: 0x714044a9
    ctx->pc = 0x15f314u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x15f318: 0x71e04ca9
    ctx->pc = 0x15f318u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x15f31c: 0x70591108
    ctx->pc = 0x15f31cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x15f320: 0x70791908
    ctx->pc = 0x15f320u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x15f324: 0x70021076
    ctx->pc = 0x15f324u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x15f328: 0x70031876
    ctx->pc = 0x15f328u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x15f32c: 0x7dc20000
    ctx->pc = 0x15f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x15f330: 0x7dc30010
    ctx->pc = 0x15f330u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x15f334: 0x1ce0ffed
    ctx->pc = 0x15F334u;
    {
        const bool branch_taken_0x15f334 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F338u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        if (branch_taken_0x15f334) {
            ctx->pc = 0x15F2ECu;
            goto label_15f2ec;
        }
    }
    ctx->pc = 0x15F33Cu;
label_15f33c:
    // 0x15f33c: 0x24a50080
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x15f340: 0x24c60080
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x15f344: 0x8c87000c
    ctx->pc = 0x15f344u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f348: 0x1675024
    ctx->pc = 0x15f348u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x15f34c: 0x1540ffe7
    ctx->pc = 0x15F34Cu;
    {
        const bool branch_taken_0x15f34c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F350u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f34c) {
            ctx->pc = 0x15F2ECu;
            goto label_15f2ec;
        }
    }
    ctx->pc = 0x15F354u;
    // 0x15f354: 0x3e00008
    ctx->pc = 0x15F354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F2ECu: goto label_15f2ec;
            case 0x15F33Cu: goto label_15f33c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F35Cu;
}
