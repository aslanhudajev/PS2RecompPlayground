#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ri0_000
// Address: 0x15f210 - 0x15f2a4
void _ri0_000_0x15f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ri0_000");


    ctx->pc = 0x15f210u;

    // 0x15f210: 0x8c850014
    ctx->pc = 0x15f210u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f214: 0x8c860018
    ctx->pc = 0x15f214u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f218: 0x8c8e0000
    ctx->pc = 0x15f218u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f21c: 0x8c8d0004
    ctx->pc = 0x15f21cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f220: 0x8c8c0010
    ctx->pc = 0x15f220u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f224: 0xc5840
    ctx->pc = 0x15f224u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 12), 1));
    // 0x15f228: 0x5b80000
    ctx->pc = 0x15f228u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x15f22c: 0x2418ffff
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f230:
    // 0x15f230: 0x8c870008
    ctx->pc = 0x15f230u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f234: 0x240fffff
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f238:
    // 0x15f238: 0xdca80000
    ctx->pc = 0x15f238u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f23c: 0xdcc90000
    ctx->pc = 0x15f23cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f240: 0x71284389
    ctx->pc = 0x15f240u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f244: 0x71084ee8
    ctx->pc = 0x15f244u;
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
    SET_GPR_VEC(ctx, 9, result); 
}
    // 0x15f248: 0x70094688
    ctx->pc = 0x15f248u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x15f24c: 0x7dc80000
    ctx->pc = 0x15f24cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x15f250: 0x20e7ffff
    ctx->pc = 0x15f250u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f254: 0xac2821
    ctx->pc = 0x15f254u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x15f258: 0x1cb7021
    ctx->pc = 0x15f258u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x15f25c: 0x1ce0fff6
    ctx->pc = 0x15F25Cu;
    {
        const bool branch_taken_0x15f25c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F260u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        if (branch_taken_0x15f25c) {
            ctx->pc = 0x15F238u;
            goto label_15f238;
        }
    }
    ctx->pc = 0x15F264u;
    // 0x15f264: 0x24a50140
    ctx->pc = 0x15f264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x15f268: 0x24c60140
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x15f26c: 0x8c87000c
    ctx->pc = 0x15f26cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f270: 0x1e75024
    ctx->pc = 0x15f270u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x15f274: 0x1540fff0
    ctx->pc = 0x15F274u;
    {
        const bool branch_taken_0x15f274 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F278u;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f274) {
            ctx->pc = 0x15F238u;
            goto label_15f238;
        }
    }
    ctx->pc = 0x15F27Cu;
    // 0x15f27c: 0x8c850014
    ctx->pc = 0x15f27cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f280: 0x8c860018
    ctx->pc = 0x15f280u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f284: 0x8c8e0000
    ctx->pc = 0x15f284u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f288: 0x24a50040
    ctx->pc = 0x15f288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x15f28c: 0x24c60040
    ctx->pc = 0x15f28cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x15f290: 0x25ce0080
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x15f294: 0x1700ffe6
    ctx->pc = 0x15F294u;
    {
        const bool branch_taken_0x15f294 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F298u;
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f294) {
            ctx->pc = 0x15F230u;
            goto label_15f230;
        }
    }
    ctx->pc = 0x15F29Cu;
    // 0x15f29c: 0x3e00008
    ctx->pc = 0x15F29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F230u: goto label_15f230;
            case 0x15F238u: goto label_15f238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F2A4u;
}
