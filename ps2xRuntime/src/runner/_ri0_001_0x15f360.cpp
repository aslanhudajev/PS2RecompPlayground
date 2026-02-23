#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ri0_001
// Address: 0x15f360 - 0x15f42c
void _ri0_001_0x15f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ri0_001");


    ctx->pc = 0x15f360u;

    // 0x15f360: 0x7000cce9
    ctx->pc = 0x15f360u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f364: 0x7019cbf6
    ctx->pc = 0x15f364u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x15f368: 0x8c850014
    ctx->pc = 0x15f368u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f36c: 0x8c860018
    ctx->pc = 0x15f36cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f370: 0x8c8e0000
    ctx->pc = 0x15f370u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f374: 0x8c8d0004
    ctx->pc = 0x15f374u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15f378: 0x8c8c0010
    ctx->pc = 0x15f378u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f37c: 0x240b0001
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f380: 0xcc040
    ctx->pc = 0x15f380u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 12), 1));
    // 0x15f384: 0x5b80000
    ctx->pc = 0x15f384u;
    ctx->sa = (GPR_U32(ctx, 13) + 0) & 0xF;
label_15f388:
    // 0x15f388: 0x8c870008
    ctx->pc = 0x15f388u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f38c: 0xdca80000
    ctx->pc = 0x15f38cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f390: 0xdcc90000
    ctx->pc = 0x15f390u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f394: 0x71284389
    ctx->pc = 0x15f394u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f398: 0x710846e8
    ctx->pc = 0x15f398u;
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
    // 0x15f39c: 0x356b8000
    ctx->pc = 0x15f39cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 32768));
    // 0x15f3a0: 0x10e00010
    ctx->pc = 0x15F3A0u;
    {
        const bool branch_taken_0x15f3a0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F3A4u;
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        if (branch_taken_0x15f3a0) {
            ctx->pc = 0x15F3E4u;
            goto label_15f3e4;
        }
    }
    ctx->pc = 0x15F3A8u;
label_15f3a8:
    // 0x15f3a8: 0xac2821
    ctx->pc = 0x15f3a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x15f3ac: 0xcc3021
    ctx->pc = 0x15f3acu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x15f3b0: 0xdca80000
    ctx->pc = 0x15f3b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f3b4: 0xdcc90000
    ctx->pc = 0x15f3b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f3b8: 0x71284389
    ctx->pc = 0x15f3b8u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15f3bc: 0x710846e8
    ctx->pc = 0x15f3bcu;
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
    // 0x15f3c0: 0x70085688
    ctx->pc = 0x15f3c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x15f3c4: 0x20e7ffff
    ctx->pc = 0x15f3c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x15f3c8: 0x714f4908
    ctx->pc = 0x15f3c8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x15f3cc: 0x71407ca9
    ctx->pc = 0x15f3ccu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x15f3d0: 0x71395108
    ctx->pc = 0x15f3d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x15f3d4: 0x700a5076
    ctx->pc = 0x15f3d4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x15f3d8: 0x7dca0000
    ctx->pc = 0x15f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x15f3dc: 0x1ce0fff2
    ctx->pc = 0x15F3DCu;
    {
        const bool branch_taken_0x15f3dc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x15F3E0u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        if (branch_taken_0x15f3dc) {
            ctx->pc = 0x15F3A8u;
            goto label_15f3a8;
        }
    }
    ctx->pc = 0x15F3E4u;
label_15f3e4:
    // 0x15f3e4: 0x700b53f7
    ctx->pc = 0x15f3e4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x15f3e8: 0x24a50140
    ctx->pc = 0x15f3e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 320));
    // 0x15f3ec: 0x8c87000c
    ctx->pc = 0x15f3ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f3f0: 0x24c60140
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 320));
    // 0x15f3f4: 0x1475024
    ctx->pc = 0x15f3f4u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x15f3f8: 0x1540ffeb
    ctx->pc = 0x15F3F8u;
    {
        const bool branch_taken_0x15f3f8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F3FCu;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 32767));
        if (branch_taken_0x15f3f8) {
            ctx->pc = 0x15F3A8u;
            goto label_15f3a8;
        }
    }
    ctx->pc = 0x15F400u;
    // 0x15f400: 0x8c850014
    ctx->pc = 0x15f400u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15f404: 0x8c860018
    ctx->pc = 0x15f404u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15f408: 0x8c8e0000
    ctx->pc = 0x15f408u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f40c: 0x24a50040
    ctx->pc = 0x15f40cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x15f410: 0x24c60040
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
    // 0x15f414: 0x25ce0080
    ctx->pc = 0x15f414u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 128));
    // 0x15f418: 0x316a0001
    ctx->pc = 0x15f418u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 11), 1));
    // 0x15f41c: 0x1540ffda
    ctx->pc = 0x15F41Cu;
    {
        const bool branch_taken_0x15f41c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x15F420u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 65534));
        if (branch_taken_0x15f41c) {
            ctx->pc = 0x15F388u;
            goto label_15f388;
        }
    }
    ctx->pc = 0x15F424u;
    // 0x15f424: 0x3e00008
    ctx->pc = 0x15F424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F388u: goto label_15f388;
            case 0x15F3A8u: goto label_15f3a8;
            case 0x15F3E4u: goto label_15f3e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F42Cu;
}
