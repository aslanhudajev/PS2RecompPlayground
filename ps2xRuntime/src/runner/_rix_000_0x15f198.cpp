#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _rix_000
// Address: 0x15f198 - 0x15f20c
void _rix_000_0x15f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_rix_000");


    ctx->pc = 0x15f198u;

    // 0x15f198: 0x8c850014
    ctx->pc = 0x15f198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f19c: 0x8c860018
    ctx->pc = 0x15f19cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f1a0: 0x8c870008
    ctx->pc = 0x15f1a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f1a4: 0x8c8e0000
    ctx->pc = 0x15f1a4u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f1a8: 0x8c8d0004
    ctx->pc = 0x15f1a8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f1ac: 0x8c8c0010
    ctx->pc = 0x15f1acu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f1b0: 0xc5840
    ctx->pc = 0x15f1b0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 12), 1));
    // 0x15f1b4: 0x240fffff
    ctx->pc = 0x15f1b4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f1b8: 0x5b80000
    ctx->pc = 0x15f1b8u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_15f1bc:
    // 0x15f1bc: 0x78a80000
    ctx->pc = 0x15f1bcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f1c0: 0x20e7ffff
    ctx->pc = 0x15f1c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f1c4: 0x78c90000
    ctx->pc = 0x15f1c4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f1c8: 0xac2821
    ctx->pc = 0x15f1c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x15f1cc: 0x712856e8
    ctx->pc = 0x15f1ccu;
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
    // 0x15f1d0: 0x700a4688
    ctx->pc = 0x15f1d0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x15f1d4: 0x700a4ea8
    ctx->pc = 0x15f1d4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x15f1d8: 0x7dc80000
    ctx->pc = 0x15f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x15f1dc: 0xcc3021
    ctx->pc = 0x15f1dcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x15f1e0: 0x7dc90010
    ctx->pc = 0x15f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x15f1e4: 0x1ce0fff5
    ctx->pc = 0x15F1E4u;
    {
        const bool branch_taken_0x15f1e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F1E8u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        if (branch_taken_0x15f1e4) {
            ctx->pc = 0x15F1BCu;
            goto label_15f1bc;
        }
    }
    ctx->pc = 0x15F1ECu;
    // 0x15f1ec: 0x24a50080
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x15f1f0: 0x24c60080
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x15f1f4: 0x8c87000c
    ctx->pc = 0x15f1f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f1f8: 0x1e75024
    ctx->pc = 0x15f1f8u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x15f1fc: 0x1540ffef
    ctx->pc = 0x15F1FCu;
    {
        const bool branch_taken_0x15f1fc = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F200u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f1fc) {
            ctx->pc = 0x15F1BCu;
            goto label_15f1bc;
        }
    }
    ctx->pc = 0x15F204u;
    // 0x15f204: 0x3e00008
    ctx->pc = 0x15F204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F1BCu: goto label_15f1bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F20Cu;
}
