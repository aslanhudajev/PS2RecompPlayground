#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ri0_010
// Address: 0x15f4e0 - 0x15f598
void _ri0_010_0x15f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ri0_010");


    ctx->pc = 0x15f4e0u;

    // 0x15f4e0: 0x7000cce9
    ctx->pc = 0x15f4e0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f4e4: 0x7019cbf6
    ctx->pc = 0x15f4e4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x15f4e8: 0x8c850014
    ctx->pc = 0x15f4e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f4ec: 0x8c860018
    ctx->pc = 0x15f4ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f4f0: 0x8c8e0000
    ctx->pc = 0x15f4f0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f4f4: 0x8c8d0004
    ctx->pc = 0x15f4f4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f4f8: 0x24180001
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f4fc: 0x240cffff
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f500: 0x8c830010
    ctx->pc = 0x15f500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f504: 0x31040
    ctx->pc = 0x15f504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_15f508:
    // 0x15f508: 0x8c870008
    ctx->pc = 0x15f508u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f50c: 0x240bffff
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f510:
    // 0x15f510: 0xdca80000
    ctx->pc = 0x15f510u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f514: 0xdcc90000
    ctx->pc = 0x15f514u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f518: 0x71284389
    ctx->pc = 0x15f518u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f51c: 0x5b80000
    ctx->pc = 0x15f51cu;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
    // 0x15f520: 0x710846e8
    ctx->pc = 0x15f520u;
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
    // 0x15f524: 0x70084e88
    ctx->pc = 0x15f524u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x15f528: 0x20e7ffff
    ctx->pc = 0x15f528u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f52c: 0xa32821
    ctx->pc = 0x15f52cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15f530: 0xc33021
    ctx->pc = 0x15f530u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15f534: 0x7180000
    ctx->pc = 0x15f534u;
    ctx->sa = (GPR_U32(ctx, 24) + 0) & 0xF;
    // 0x15f538: 0x700856e8
    ctx->pc = 0x15f538u;
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
    // 0x15f53c: 0x700a4688
    ctx->pc = 0x15f53cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x15f540: 0x71285108
    ctx->pc = 0x15f540u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f544: 0x71595108
    ctx->pc = 0x15f544u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x15f548: 0x700a5076
    ctx->pc = 0x15f548u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x15f54c: 0x7dca0000
    ctx->pc = 0x15f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x15f550: 0x1ce0ffef
    ctx->pc = 0x15F550u;
    {
        const bool branch_taken_0x15f550 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F554u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x15f550) {
            ctx->pc = 0x15F510u;
            goto label_15f510;
        }
    }
    ctx->pc = 0x15F558u;
    // 0x15f558: 0x24a50140
    ctx->pc = 0x15f558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x15f55c: 0x24c60140
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x15f560: 0x8c87000c
    ctx->pc = 0x15f560u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f564: 0x1675024
    ctx->pc = 0x15f564u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x15f568: 0x1540ffe9
    ctx->pc = 0x15F568u;
    {
        const bool branch_taken_0x15f568 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F56Cu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f568) {
            ctx->pc = 0x15F510u;
            goto label_15f510;
        }
    }
    ctx->pc = 0x15F570u;
    // 0x15f570: 0x8c850014
    ctx->pc = 0x15f570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f574: 0x8c860018
    ctx->pc = 0x15f574u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f578: 0x8c8e0000
    ctx->pc = 0x15f578u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f57c: 0x24a50040
    ctx->pc = 0x15f57cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x15f580: 0x24c60040
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x15f584: 0x25ce0080
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x15f588: 0x1580ffdf
    ctx->pc = 0x15F588u;
    {
        const bool branch_taken_0x15f588 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F58Cu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f588) {
            ctx->pc = 0x15F508u;
            goto label_15f508;
        }
    }
    ctx->pc = 0x15F590u;
    // 0x15f590: 0x3e00008
    ctx->pc = 0x15F590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F508u: goto label_15f508;
            case 0x15F510u: goto label_15f510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F598u;
}
