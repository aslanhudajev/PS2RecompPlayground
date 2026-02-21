#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0MemQWord
// Address: 0x2b3778 - 0x2b37ec
void pbGetVu0MemQWord_0x2b3778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3778u;

    // 0x2b3778: 0x52902
    ctx->pc = 0x2b3778u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 4));
    // 0x2b377c: 0x0
    ctx->pc = 0x2b377cu;
    // NOP
    // 0x2b3780: 0x0
    ctx->pc = 0x2b3780u;
    // NOP
    // 0x2b3784: 0x0
    ctx->pc = 0x2b3784u;
    // NOP
    // 0x2b3788: 0x0
    ctx->pc = 0x2b3788u;
    // NOP
    // 0x2b378c: 0x0
    ctx->pc = 0x2b378cu;
    // NOP
    // 0x2b3790: 0x0
    ctx->pc = 0x2b3790u;
    // NOP
    // 0x2b3794: 0x48c50801
    ctx->pc = 0x2b3794u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 5);
    // 0x2b3798: 0x0
    ctx->pc = 0x2b3798u;
    // NOP
    // 0x2b379c: 0x0
    ctx->pc = 0x2b379cu;
    // NOP
    // 0x2b37a0: 0x0
    ctx->pc = 0x2b37a0u;
    // NOP
    // 0x2b37a4: 0x0
    ctx->pc = 0x2b37a4u;
    // NOP
    // 0x2b37a8: 0x0
    ctx->pc = 0x2b37a8u;
    // NOP
    // 0x2b37ac: 0x0
    ctx->pc = 0x2b37acu;
    // NOP
    // 0x2b37b0: 0x4be20b7c
    ctx->pc = 0x2b37b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x2b37b4: 0x0
    ctx->pc = 0x2b37b4u;
    // NOP
    // 0x2b37b8: 0x0
    ctx->pc = 0x2b37b8u;
    // NOP
    // 0x2b37bc: 0x0
    ctx->pc = 0x2b37bcu;
    // NOP
    // 0x2b37c0: 0x0
    ctx->pc = 0x2b37c0u;
    // NOP
    // 0x2b37c4: 0x0
    ctx->pc = 0x2b37c4u;
    // NOP
    // 0x2b37c8: 0x0
    ctx->pc = 0x2b37c8u;
    // NOP
    // 0x2b37cc: 0xf8820000
    ctx->pc = 0x2b37ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b37d0: 0x0
    ctx->pc = 0x2b37d0u;
    // NOP
    // 0x2b37d4: 0x0
    ctx->pc = 0x2b37d4u;
    // NOP
    // 0x2b37d8: 0x0
    ctx->pc = 0x2b37d8u;
    // NOP
    // 0x2b37dc: 0x0
    ctx->pc = 0x2b37dcu;
    // NOP
    // 0x2b37e0: 0x0
    ctx->pc = 0x2b37e0u;
    // NOP
    // 0x2b37e4: 0x3e00008
    ctx->pc = 0x2B37E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B37ECu;
}
