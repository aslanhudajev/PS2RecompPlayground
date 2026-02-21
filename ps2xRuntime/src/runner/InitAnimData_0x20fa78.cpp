#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAnimData
// Address: 0x20fa78 - 0x20fb24
void InitAnimData_0x20fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fa78u;

    // 0x20fa78: 0xac850000
    ctx->pc = 0x20fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x20fa7c: 0x2402ffff
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fa80: 0xa4820008
    ctx->pc = 0x20fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fa84: 0xa480000a
    ctx->pc = 0x20fa84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20fa88: 0x2402ffff
    ctx->pc = 0x20fa88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fa8c: 0xac82000c
    ctx->pc = 0x20fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x20fa90: 0x24820030
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 48));
    // 0x20fa94: 0xd8440000
    ctx->pc = 0x20fa94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fa98: 0x4be4212c
    ctx->pc = 0x20fa98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fa9c: 0xf8440000
    ctx->pc = 0x20fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20faa0: 0x24820020
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 32));
    // 0x20faa4: 0xd8440000
    ctx->pc = 0x20faa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20faa8: 0x4be4212c
    ctx->pc = 0x20faa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20faac: 0xf8440000
    ctx->pc = 0x20faacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20fab0: 0x24820010
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x20fab4: 0xd8440000
    ctx->pc = 0x20fab4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fab8: 0x4be4212c
    ctx->pc = 0x20fab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fabc: 0xf8440000
    ctx->pc = 0x20fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20fac0: 0x24820060
    ctx->pc = 0x20fac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 96));
    // 0x20fac4: 0xd8440000
    ctx->pc = 0x20fac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fac8: 0x4be4212c
    ctx->pc = 0x20fac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20facc: 0xf8440000
    ctx->pc = 0x20faccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20fad0: 0x24820050
    ctx->pc = 0x20fad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 80));
    // 0x20fad4: 0xd8440000
    ctx->pc = 0x20fad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fad8: 0x4be4212c
    ctx->pc = 0x20fad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fadc: 0xf8440000
    ctx->pc = 0x20fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20fae0: 0x24820040
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 64));
    // 0x20fae4: 0xd8440000
    ctx->pc = 0x20fae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fae8: 0x4be4212c
    ctx->pc = 0x20fae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20faec: 0xf8440000
    ctx->pc = 0x20faecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20faf0: 0x3c05003a
    ctx->pc = 0x20faf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20faf4: 0x24a524d0
    ctx->pc = 0x20faf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9424));
    // 0x20faf8: 0x24830090
    ctx->pc = 0x20faf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 144));
    // 0x20fafc: 0x78a20000
    ctx->pc = 0x20fafcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fb00: 0x7c620000
    ctx->pc = 0x20fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20fb04: 0x24830080
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 128));
    // 0x20fb08: 0x78a20000
    ctx->pc = 0x20fb08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fb0c: 0x7c620000
    ctx->pc = 0x20fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20fb10: 0x24840070
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 112));
    // 0x20fb14: 0x78a20000
    ctx->pc = 0x20fb14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fb18: 0x7c820000
    ctx->pc = 0x20fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x20fb1c: 0x3e00008
    ctx->pc = 0x20FB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FB24u;
}
