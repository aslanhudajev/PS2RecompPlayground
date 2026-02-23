#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B0728
// Address: 0x1b0728 - 0x1b0808
void sub_001B0728_0x1b0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B0728");


    ctx->pc = 0x1b0728u;

    // 0x1b0728: 0x27bdfff0
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b072c: 0xfbbf0000
    ctx->pc = 0x1b072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1b0730: 0x8c880000
    ctx->pc = 0x1b0730u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0734: 0x8c890004
    ctx->pc = 0x1b0734u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0738: 0x8c8a0008
    ctx->pc = 0x1b0738u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b073c: 0xafa80000
    ctx->pc = 0x1b073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b0740: 0xafa90004
    ctx->pc = 0x1b0740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0744: 0xafaa0008
    ctx->pc = 0x1b0744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0748: 0xdbbf0000
    ctx->pc = 0x1b0748u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b074c: 0x3e00008
    ctx->pc = 0x1B074Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0754u;
    // 0x1b0754: 0xd8830000
    ctx->pc = 0x1b0754u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0758: 0xd8840010
    ctx->pc = 0x1b0758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b075c: 0xd8850020
    ctx->pc = 0x1b075cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b0760: 0xd8860030
    ctx->pc = 0x1b0760u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b0764: 0x4be3e72c
    ctx->pc = 0x1b0764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1b0768: 0x4be4ef6c
    ctx->pc = 0x1b0768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1b076c: 0x4be5f7ac
    ctx->pc = 0x1b076cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1b0770: 0x4be6ffec
    ctx->pc = 0x1b0770u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[31], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1b0774: 0x3e00008
    ctx->pc = 0x1B0774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B077Cu;
    // 0x1b077c: 0x27bdffc0
    ctx->pc = 0x1b077cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0780: 0xfbbc0000
    ctx->pc = 0x1b0780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1b0784: 0xfbbd0010
    ctx->pc = 0x1b0784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1b0788: 0xfbbe0020
    ctx->pc = 0x1b0788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1b078c: 0xfbbf0030
    ctx->pc = 0x1b078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1b0790: 0x8fa80004
    ctx->pc = 0x1b0790u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b0794: 0x8fa90010
    ctx->pc = 0x1b0794u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0798: 0xafa80010
    ctx->pc = 0x1b0798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1b079c: 0xafa90004
    ctx->pc = 0x1b079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b07a0: 0x8fa80008
    ctx->pc = 0x1b07a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b07a4: 0x8fa90020
    ctx->pc = 0x1b07a4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b07a8: 0xafa80020
    ctx->pc = 0x1b07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x1b07ac: 0xafa90008
    ctx->pc = 0x1b07acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1b07b0: 0x8fa8000c
    ctx->pc = 0x1b07b0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1b07b4: 0x8fa90030
    ctx->pc = 0x1b07b4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b07b8: 0xafa80030
    ctx->pc = 0x1b07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1b07bc: 0xafa9000c
    ctx->pc = 0x1b07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1b07c0: 0x8fa80018
    ctx->pc = 0x1b07c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b07c4: 0x8fa90024
    ctx->pc = 0x1b07c4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b07c8: 0xafa80024
    ctx->pc = 0x1b07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x1b07cc: 0xafa90018
    ctx->pc = 0x1b07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1b07d0: 0x8fa8001c
    ctx->pc = 0x1b07d0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b07d4: 0x8fa90034
    ctx->pc = 0x1b07d4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1b07d8: 0xafa80034
    ctx->pc = 0x1b07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x1b07dc: 0xafa9001c
    ctx->pc = 0x1b07dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x1b07e0: 0x8fa8002c
    ctx->pc = 0x1b07e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b07e4: 0x8fa90038
    ctx->pc = 0x1b07e4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b07e8: 0xafa80038
    ctx->pc = 0x1b07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x1b07ec: 0xafa9002c
    ctx->pc = 0x1b07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x1b07f0: 0xdbbc0000
    ctx->pc = 0x1b07f0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b07f4: 0xdbbd0010
    ctx->pc = 0x1b07f4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b07f8: 0xdbbe0020
    ctx->pc = 0x1b07f8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b07fc: 0xdbbf0030
    ctx->pc = 0x1b07fcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0800: 0x3e00008
    ctx->pc = 0x1B0800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0808u;
}
