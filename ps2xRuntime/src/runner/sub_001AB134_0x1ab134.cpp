#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AB134
// Address: 0x1ab134 - 0x1ab198
void sub_001AB134_0x1ab134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AB134");


    ctx->pc = 0x1ab134u;

    // 0x1ab134: 0x4a000070
    ctx->pc = 0x1ab134u;
    ctx->vi[1] = ctx->vi[0] + ctx->vi[0];
    // 0x1ab138: 0x48486801
    ctx->pc = 0x1ab138u;
    SET_GPR_U32(ctx, 8, ctx->vu0_vpu_stat3);
    // 0x1ab13c: 0xac880000
    ctx->pc = 0x1ab13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1ab140: 0xf8980010
    ctx->pc = 0x1ab140u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x1ab144: 0xf8990020
    ctx->pc = 0x1ab144u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x1ab148: 0xf89a0030
    ctx->pc = 0x1ab148u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x1ab14c: 0xf89b0040
    ctx->pc = 0x1ab14cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x1ab150: 0xf89c0050
    ctx->pc = 0x1ab150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1ab154: 0xf89d0060
    ctx->pc = 0x1ab154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1ab158: 0xf89e0070
    ctx->pc = 0x1ab158u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1ab15c: 0xf89f0080
    ctx->pc = 0x1ab15cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1ab160: 0x20840090
    ctx->pc = 0x1ab160u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)144, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_1ab164:
    // 0x1ab164: 0x4be10b7c
    ctx->pc = 0x1ab164u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = ps2_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab168: 0x4be20b7c
    ctx->pc = 0x1ab168u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab16c: 0x4be30b7c
    ctx->pc = 0x1ab16cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab170: 0x4be40b7c
    ctx->pc = 0x1ab170u;
    { uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vi[1] = (ctx->vi[1] + 1) & 0x3FF; }
    // 0x1ab174: 0x20a5ffff
    ctx->pc = 0x1ab174u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x1ab178: 0xf8810000
    ctx->pc = 0x1ab178u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ab17c: 0xf8820010
    ctx->pc = 0x1ab17cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ab180: 0xf8830020
    ctx->pc = 0x1ab180u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ab184: 0xf8840030
    ctx->pc = 0x1ab184u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ab188: 0x1405fff6
    ctx->pc = 0x1AB188u;
    {
        const bool branch_taken_0x1ab188 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 5));
        ctx->pc = 0x1AB18Cu;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        if (branch_taken_0x1ab188) {
            ctx->pc = 0x1AB164u;
            goto label_1ab164;
        }
    }
    ctx->pc = 0x1AB190u;
    // 0x1ab190: 0x3e00008
    ctx->pc = 0x1AB190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB164u: goto label_1ab164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB198u;
}
