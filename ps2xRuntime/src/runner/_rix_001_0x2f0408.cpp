#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _rix_001
// Address: 0x2f0408 - 0x2f04bc
void _rix_001_0x2f0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0408u;

    // 0x2f0408: 0x7000cce9
    ctx->pc = 0x2f0408u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f040c: 0x7019cbf6
    ctx->pc = 0x2f040cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2f0410: 0x8c850014
    ctx->pc = 0x2f0410u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f0414: 0x8c860018
    ctx->pc = 0x2f0414u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2f0418: 0x8c870008
    ctx->pc = 0x2f0418u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f041c: 0x8c8e0000
    ctx->pc = 0x2f041cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0420: 0x8c8d0004
    ctx->pc = 0x2f0420u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0424: 0x8c980010
    ctx->pc = 0x2f0424u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0428: 0x78a80000
    ctx->pc = 0x2f0428u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f042c: 0x186040
    ctx->pc = 0x2f042cu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 24), 1));
    // 0x2f0430: 0x78c90000
    ctx->pc = 0x2f0430u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f0434: 0x5b80000
    ctx->pc = 0x2f0434u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x2f0438: 0x712856e8
    ctx->pc = 0x2f0438u;
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
    // 0x2f043c: 0x700a4688
    ctx->pc = 0x2f043cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2f0440: 0x240bffff
    ctx->pc = 0x2f0440u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0444: 0x10e00015
    ctx->pc = 0x2F0444u;
    {
        const bool branch_taken_0x2f0444 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0448u;
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        if (branch_taken_0x2f0444) {
            ctx->pc = 0x2F049Cu;
            goto label_2f049c;
        }
    }
    ctx->pc = 0x2F044Cu;
label_2f044c:
    // 0x2f044c: 0xb82821
    ctx->pc = 0x2f044cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x2f0450: 0xd83021
    ctx->pc = 0x2f0450u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2f0454: 0x78aa0000
    ctx->pc = 0x2f0454u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f0458: 0x78cf0000
    ctx->pc = 0x2f0458u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f045c: 0x71ea16e8
    ctx->pc = 0x2f045cu;
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
    // 0x2f0460: 0x70025688
    ctx->pc = 0x2f0460u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2f0464: 0x20e7ffff
    ctx->pc = 0x2f0464u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2f0468: 0x70027ea8
    ctx->pc = 0x2f0468u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2f046c: 0x710a1108
    ctx->pc = 0x2f046cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x2f0470: 0x712f1908
    ctx->pc = 0x2f0470u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x2f0474: 0x714044a9
    ctx->pc = 0x2f0474u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f0478: 0x71e04ca9
    ctx->pc = 0x2f0478u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x2f047c: 0x70591108
    ctx->pc = 0x2f047cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x2f0480: 0x70791908
    ctx->pc = 0x2f0480u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x2f0484: 0x70021076
    ctx->pc = 0x2f0484u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x2f0488: 0x70031876
    ctx->pc = 0x2f0488u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x2f048c: 0x7dc20000
    ctx->pc = 0x2f048cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2f0490: 0x7dc30010
    ctx->pc = 0x2f0490u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x2f0494: 0x1ce0ffed
    ctx->pc = 0x2F0494u;
    {
        const bool branch_taken_0x2f0494 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F0498u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        if (branch_taken_0x2f0494) {
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F049Cu;
label_2f049c:
    // 0x2f049c: 0x24a50080
    ctx->pc = 0x2f049cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x2f04a0: 0x24c60080
    ctx->pc = 0x2f04a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x2f04a4: 0x8c87000c
    ctx->pc = 0x2f04a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f04a8: 0x1675024
    ctx->pc = 0x2f04a8u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f04ac: 0x1540ffe7
    ctx->pc = 0x2F04ACu;
    {
        const bool branch_taken_0x2f04ac = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F04B0u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f04ac) {
            ctx->pc = 0x2F044Cu;
            goto label_2f044c;
        }
    }
    ctx->pc = 0x2F04B4u;
    // 0x2f04b4: 0x3e00008
    ctx->pc = 0x2F04B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F044Cu: goto label_2f044c;
            case 0x2F049Cu: goto label_2f049c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F04BCu;
}
