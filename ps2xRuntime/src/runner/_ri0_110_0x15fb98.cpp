#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ri0_110
// Address: 0x15fb98 - 0x15fc68
void _ri0_110_0x15fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ri0_110");


    ctx->pc = 0x15fb98u;

    // 0x15fb98: 0x7000cce9
    ctx->pc = 0x15fb98u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fb9c: 0x7019cbf6
    ctx->pc = 0x15fb9cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x15fba0: 0x8c850014
    ctx->pc = 0x15fba0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15fba4: 0x8c860018
    ctx->pc = 0x15fba4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15fba8: 0x8c8e0000
    ctx->pc = 0x15fba8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fbac: 0x8c8d0004
    ctx->pc = 0x15fbacu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15fbb0: 0x24180001
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fbb4: 0x240cffff
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fbb8: 0x8c830010
    ctx->pc = 0x15fbb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fbbc: 0x31040
    ctx->pc = 0x15fbbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_15fbc0:
    // 0x15fbc0: 0x8c870008
    ctx->pc = 0x15fbc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15fbc4: 0x240bffff
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fbc8:
    // 0x15fbc8: 0xdca80000
    ctx->pc = 0x15fbc8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15fbcc: 0xdcc90000
    ctx->pc = 0x15fbccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fbd0: 0x71284389
    ctx->pc = 0x15fbd0u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15fbd4: 0x5b80000
    ctx->pc = 0x15fbd4u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x15fbd8: 0x710846e8
    ctx->pc = 0x15fbd8u;
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
    // 0x15fbdc: 0x70084e88
    ctx->pc = 0x15fbdcu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x15fbe0: 0x20e7ffff
    ctx->pc = 0x15fbe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15fbe4: 0xa32821
    ctx->pc = 0x15fbe4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15fbe8: 0xc33021
    ctx->pc = 0x15fbe8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15fbec: 0x7180000
    ctx->pc = 0x15fbecu;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x15fbf0: 0x700856e8
    ctx->pc = 0x15fbf0u;
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
    // 0x15fbf4: 0x700a4688
    ctx->pc = 0x15fbf4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x15fbf8: 0x71285108
    ctx->pc = 0x15fbf8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15fbfc: 0x71595108
    ctx->pc = 0x15fbfcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x15fc00: 0x700a5076
    ctx->pc = 0x15fc00u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x15fc04: 0x79c80000
    ctx->pc = 0x15fc04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15fc08: 0x71485108
    ctx->pc = 0x15fc08u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x15fc0c: 0x71404988
    ctx->pc = 0x15fc0cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x15fc10: 0x70094bf6
    ctx->pc = 0x15fc10u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x15fc14: 0x71495108
    ctx->pc = 0x15fc14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x15fc18: 0x700a5076
    ctx->pc = 0x15fc18u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x15fc1c: 0x7dca0000
    ctx->pc = 0x15fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x15fc20: 0x1ce0ffe9
    ctx->pc = 0x15FC20u;
    {
        const bool branch_taken_0x15fc20 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15FC24u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x15fc20) {
            ctx->pc = 0x15FBC8u;
            goto label_15fbc8;
        }
    }
    ctx->pc = 0x15FC28u;
    // 0x15fc28: 0x24a50140
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x15fc2c: 0x24c60140
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x15fc30: 0x8c87000c
    ctx->pc = 0x15fc30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15fc34: 0x1675024
    ctx->pc = 0x15fc34u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x15fc38: 0x1540ffe3
    ctx->pc = 0x15FC38u;
    {
        const bool branch_taken_0x15fc38 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FC3Cu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fc38) {
            ctx->pc = 0x15FBC8u;
            goto label_15fbc8;
        }
    }
    ctx->pc = 0x15FC40u;
    // 0x15fc40: 0x8c850014
    ctx->pc = 0x15fc40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15fc44: 0x8c860018
    ctx->pc = 0x15fc44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15fc48: 0x8c8e0000
    ctx->pc = 0x15fc48u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fc4c: 0x24a50040
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x15fc50: 0x24c60040
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x15fc54: 0x25ce0080
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x15fc58: 0x1580ffd9
    ctx->pc = 0x15FC58u;
    {
        const bool branch_taken_0x15fc58 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FC5Cu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fc58) {
            ctx->pc = 0x15FBC0u;
            goto label_15fbc0;
        }
    }
    ctx->pc = 0x15FC60u;
    // 0x15fc60: 0x3e00008
    ctx->pc = 0x15FC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FBC0u: goto label_15fbc0;
            case 0x15FBC8u: goto label_15fbc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FC68u;
}
