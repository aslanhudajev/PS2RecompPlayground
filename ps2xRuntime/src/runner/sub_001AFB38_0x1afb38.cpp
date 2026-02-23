#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFB38
// Address: 0x1afb38 - 0x1afc00
void sub_001AFB38_0x1afb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFB38");


    ctx->pc = 0x1afb38u;

    // 0x1afb38: 0x27bdfff0
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afb3c: 0x8c880000
    ctx->pc = 0x1afb3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afb40: 0x8c890004
    ctx->pc = 0x1afb40u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afb44: 0x8c8a0008
    ctx->pc = 0x1afb44u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1afb48: 0x3c0b3f80
    ctx->pc = 0x1afb48u;
    SET_GPR_U32(ctx, 11, ((uint32_t)16256 << 16));
    // 0x1afb4c: 0xafa80000
    ctx->pc = 0x1afb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1afb50: 0xafa90004
    ctx->pc = 0x1afb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1afb54: 0xafaa0008
    ctx->pc = 0x1afb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1afb58: 0xafab000c
    ctx->pc = 0x1afb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1afb5c: 0xdba10000
    ctx->pc = 0x1afb5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afb60: 0x4be1e1bc
    ctx->pc = 0x1afb60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1afb64: 0x4be1e8bd
    ctx->pc = 0x1afb64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afb68: 0x4be1f0be
    ctx->pc = 0x1afb68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afb6c: 0x4be1f88b
    ctx->pc = 0x1afb6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1afb70: 0xfba20000
    ctx->pc = 0x1afb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1afb74: 0x8fa80000
    ctx->pc = 0x1afb74u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afb78: 0x8fa90004
    ctx->pc = 0x1afb78u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afb7c: 0x8faa0008
    ctx->pc = 0x1afb7cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afb80: 0x8fab000c
    ctx->pc = 0x1afb80u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1afb84: 0xaca80000
    ctx->pc = 0x1afb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1afb88: 0xaca90004
    ctx->pc = 0x1afb88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x1afb8c: 0xacaa0008
    ctx->pc = 0x1afb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1afb90: 0xacab000c
    ctx->pc = 0x1afb90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
    // 0x1afb94: 0x3e00008
    ctx->pc = 0x1AFB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFB9Cu;
    // 0x1afb9c: 0x27bdfff0
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afba0: 0x8c880000
    ctx->pc = 0x1afba0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afba4: 0x8c890004
    ctx->pc = 0x1afba4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afba8: 0x8c8a0008
    ctx->pc = 0x1afba8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1afbac: 0x8c8b000c
    ctx->pc = 0x1afbacu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1afbb0: 0xafa80000
    ctx->pc = 0x1afbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1afbb4: 0xafa90004
    ctx->pc = 0x1afbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1afbb8: 0xafaa0008
    ctx->pc = 0x1afbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1afbbc: 0xafab000c
    ctx->pc = 0x1afbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1afbc0: 0xdba10000
    ctx->pc = 0x1afbc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afbc4: 0x4be1e1bc
    ctx->pc = 0x1afbc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1afbc8: 0x4be1e8bd
    ctx->pc = 0x1afbc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afbcc: 0x4be1f0be
    ctx->pc = 0x1afbccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afbd0: 0x4be1f88b
    ctx->pc = 0x1afbd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1afbd4: 0xfba20000
    ctx->pc = 0x1afbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1afbd8: 0x8fa80000
    ctx->pc = 0x1afbd8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afbdc: 0x8fa90004
    ctx->pc = 0x1afbdcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afbe0: 0x8faa0008
    ctx->pc = 0x1afbe0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afbe4: 0x8fab000c
    ctx->pc = 0x1afbe4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1afbe8: 0xaca80000
    ctx->pc = 0x1afbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1afbec: 0xaca90004
    ctx->pc = 0x1afbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x1afbf0: 0xacaa0008
    ctx->pc = 0x1afbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1afbf4: 0xacab000c
    ctx->pc = 0x1afbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
    // 0x1afbf8: 0x3e00008
    ctx->pc = 0x1AFBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFBFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFC00u;
}
