#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclPutMatrix
// Address: 0x1c5dd0 - 0x1c6348
void nlPrtclPutMatrix_0x1c5dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclPutMatrix");


    ctx->pc = 0x1c5dd0u;

    // 0x1c5dd0: 0x27bdfe60
    ctx->pc = 0x1c5dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1c5dd4: 0x7fbf0070
    ctx->pc = 0x1c5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1c5dd8: 0x7fb60060
    ctx->pc = 0x1c5dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c5ddc: 0x7fb50050
    ctx->pc = 0x1c5ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c5de0: 0x7fb40040
    ctx->pc = 0x1c5de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c5de4: 0x7fb30030
    ctx->pc = 0x1c5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5de8: 0x7fb20020
    ctx->pc = 0x1c5de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5dec: 0x7fb10010
    ctx->pc = 0x1c5decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5df0: 0x7fb00000
    ctx->pc = 0x1c5df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5df4: 0x8c83000c
    ctx->pc = 0x1c5df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c5df8: 0x8c820044
    ctx->pc = 0x1c5df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1c5dfc: 0x70809628
    ctx->pc = 0x1c5dfcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c5e00: 0x3070000f
    ctx->pc = 0x1c5e00u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), 15));
    // 0x1c5e04: 0x34048000
    ctx->pc = 0x1c5e04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1c5e08: 0x649824
    ctx->pc = 0x1c5e08u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5e0c: 0x30560001
    ctx->pc = 0x1c5e0cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 1));
    // 0x1c5e10: 0x12600006
    ctx->pc = 0x1C5E10u;
    {
        const bool branch_taken_0x1c5e10 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E14u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), 12));
        if (branch_taken_0x1c5e10) {
            ctx->pc = 0x1C5E2Cu;
            goto label_1c5e2c;
        }
    }
    ctx->pc = 0x1C5E18u;
    // 0x1c5e18: 0x2402fff3
    ctx->pc = 0x1c5e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c5e1c: 0x2028024
    ctx->pc = 0x1c5e1cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c5e20: 0x7000b628
    ctx->pc = 0x1c5e20u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5e24: 0x36100013
    ctx->pc = 0x1c5e24u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 19));
    // 0x1c5e28: 0x70008e28
    ctx->pc = 0x1c5e28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c5e2c:
    // 0x1c5e2c: 0x27a20080
    ctx->pc = 0x1c5e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5e30: 0xf8540000
    ctx->pc = 0x1c5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x1c5e34: 0xf8550010
    ctx->pc = 0x1c5e34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x1c5e38: 0xf8560020
    ctx->pc = 0x1c5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x1c5e3c: 0xf8570030
    ctx->pc = 0x1c5e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x1c5e40: 0xf8580040
    ctx->pc = 0x1c5e40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x1c5e44: 0xf8590050
    ctx->pc = 0x1c5e44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x1c5e48: 0xf85a0060
    ctx->pc = 0x1c5e48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x1c5e4c: 0xf85b0070
    ctx->pc = 0x1c5e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x1c5e50: 0xf85c0080
    ctx->pc = 0x1c5e50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1c5e54: 0xf85d0090
    ctx->pc = 0x1c5e54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1c5e58: 0xf85e00a0
    ctx->pc = 0x1c5e58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1c5e5c: 0x14a00005
    ctx->pc = 0x1C5E5Cu;
    {
        const bool branch_taken_0x1c5e5c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E60u;
        WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[31]));
        if (branch_taken_0x1c5e5c) {
            ctx->pc = 0x1C5E74u;
            goto label_1c5e74;
        }
    }
    ctx->pc = 0x1C5E64u;
    // 0x1c5e64: 0xc071730
    ctx->pc = 0x1C5E64u;
    SET_GPR_U32(ctx, 31, 0x1C5E6Cu);
    ctx->pc = 0x1C5CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclCalcMatrix_0x1c5cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E6Cu; }
        else if (ctx->pc != 0x1C5E6Cu) { ctx->pc = 0x1C5E6Cu; }
    }
    if (ctx->pc != 0x1C5E6Cu) { return; }
    ctx->pc = 0x1C5E6Cu;
    // 0x1c5e6c: 0x10000004
    ctx->pc = 0x1C5E6Cu;
    {
        const bool branch_taken_0x1c5e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5e6c) {
            ctx->pc = 0x1C5E80u;
            goto label_1c5e80;
        }
    }
    ctx->pc = 0x1C5E74u;
label_1c5e74:
    // 0x1c5e74: 0x70a02628
    ctx->pc = 0x1c5e74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c5e78: 0xc071768
    ctx->pc = 0x1C5E78u;
    SET_GPR_U32(ctx, 31, 0x1C5E80u);
    ctx->pc = 0x1C5E7Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C5DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclLoadMatrix_0x1c5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E80u; }
        else if (ctx->pc != 0x1C5E80u) { ctx->pc = 0x1C5E80u; }
    }
    if (ctx->pc != 0x1C5E80u) { return; }
    ctx->pc = 0x1C5E80u;
label_1c5e80:
    // 0x1c5e80: 0x16600016
    ctx->pc = 0x1C5E80u;
    {
        const bool branch_taken_0x1c5e80 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5E84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1c5e80) {
            ctx->pc = 0x1C5EDCu;
            goto label_1c5edc;
        }
    }
    ctx->pc = 0x1C5E88u;
    // 0x1c5e88: 0x3c020026
    ctx->pc = 0x1c5e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1c5e8c: 0x2442fbf0
    ctx->pc = 0x1c5e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966256));
    // 0x1c5e90: 0x78420000
    ctx->pc = 0x1c5e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5e94: 0x27a30160
    ctx->pc = 0x1c5e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c5e98: 0x7c620000
    ctx->pc = 0x1c5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c5e9c: 0x4be1033c
    ctx->pc = 0x1c5e9cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1c5ea0: 0x4be10b3d
    ctx->pc = 0x1c5ea0u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1c5ea4: 0x4be20b3d
    ctx->pc = 0x1c5ea4u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1c5ea8: 0x4be3133d
    ctx->pc = 0x1c5ea8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1c5eac: 0x4bf40b3c
    ctx->pc = 0x1c5eacu;
    ctx->vu0_vf[20] = ctx->vu0_vf[1];
    // 0x1c5eb0: 0x4be30d68
    ctx->pc = 0x1c5eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x1c5eb4: 0x4be2ada8
    ctx->pc = 0x1c5eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1c5eb8: 0x4be20de8
    ctx->pc = 0x1c5eb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x1c5ebc: 0xd8730000
    ctx->pc = 0x1c5ebcu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5ec0: 0x24020006
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5ec4: 0x16020078
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C5EC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C5ECCu;
    // 0x1c5ecc: 0x2442fbd0
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966224));
    // 0x1c5ed0: 0xd8540000
    ctx->pc = 0x1c5ed0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5ed4: 0x10000074
    ctx->pc = 0x1C5ED4u;
    {
        const bool branch_taken_0x1c5ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5ED8u;
        ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
        if (branch_taken_0x1c5ed4) {
            ctx->pc = 0x1C60A8u;
            goto label_1c60a8;
        }
    }
    ctx->pc = 0x1C5EDCu;
label_1c5edc:
    // 0x1c5edc: 0x2442fc00
    ctx->pc = 0x1c5edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x1c5ee0: 0x78450000
    ctx->pc = 0x1c5ee0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5ee4: 0x27a60180
    ctx->pc = 0x1c5ee4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c5ee8: 0x27a40190
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c5eec: 0x3c010030
    ctx->pc = 0x1c5eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c5ef0: 0x3c020026
    ctx->pc = 0x1c5ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1c5ef4: 0x2443fc10
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x1c5ef8: 0x7cc50000
    ctx->pc = 0x1c5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c5efc: 0x78630000
    ctx->pc = 0x1c5efcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5f00: 0x3c023f00
    ctx->pc = 0x1c5f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1c5f04: 0x44821000
    ctx->pc = 0x1c5f04u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1c5f08: 0x3c02c4ff
    ctx->pc = 0x1c5f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50431 << 16));
    // 0x1c5f0c: 0x3442f000
    ctx->pc = 0x1c5f0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x1c5f10: 0x7c830000
    ctx->pc = 0x1c5f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1c5f14: 0x84245834
    ctx->pc = 0x1c5f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1c5f18: 0x44821800
    ctx->pc = 0x1c5f18u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1c5f1c: 0xc6400028
    ctx->pc = 0x1c5f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5f20: 0x3c010030
    ctx->pc = 0x1c5f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c5f24: 0x84235836
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1c5f28: 0x44840800
    ctx->pc = 0x1c5f28u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1c5f2c: 0x0
    ctx->pc = 0x1c5f2cu;
    // NOP
    // 0x1c5f30: 0x46800860
    ctx->pc = 0x1c5f30u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1c5f34: 0x3c010030
    ctx->pc = 0x1c5f34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c5f38: 0x84225838
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1c5f3c: 0x46011042
    ctx->pc = 0x1c5f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c5f40: 0x62001a
    ctx->pc = 0x1c5f40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1c5f44: 0x46011840
    ctx->pc = 0x1c5f44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1c5f48: 0x46000800
    ctx->pc = 0x1c5f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5f4c: 0x14400002
    ctx->pc = 0x1C5F4Cu;
    {
        const bool branch_taken_0x1c5f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5F50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        if (branch_taken_0x1c5f4c) {
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5F54u;
    // 0x1c5f54: 0x1cd
    ctx->pc = 0x1c5f54u;
    runtime->handleBreak(rdram, ctx);
label_1c5f58:
    // 0x1c5f58: 0x1812
    ctx->pc = 0x1c5f58u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1c5f5c: 0x3c023f00
    ctx->pc = 0x1c5f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1c5f60: 0x44821800
    ctx->pc = 0x1c5f60u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1c5f64: 0x44830000
    ctx->pc = 0x1c5f64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c5f68: 0x3c02c4ff
    ctx->pc = 0x1c5f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50431 << 16));
    // 0x1c5f6c: 0x46800060
    ctx->pc = 0x1c5f6cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1c5f70: 0x3442f000
    ctx->pc = 0x1c5f70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x1c5f74: 0x27a30174
    ctx->pc = 0x1c5f74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 372));
    // 0x1c5f78: 0x46011882
    ctx->pc = 0x1c5f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c5f7c: 0xc640002c
    ctx->pc = 0x1c5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5f80: 0x44820800
    ctx->pc = 0x1c5f80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1c5f84: 0x0
    ctx->pc = 0x1c5f84u;
    // NOP
    // 0x1c5f88: 0x46020840
    ctx->pc = 0x1c5f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c5f8c: 0x46010000
    ctx->pc = 0x1c5f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5f90: 0xe4600000
    ctx->pc = 0x1c5f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c5f94: 0x8e42000c
    ctx->pc = 0x1c5f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c5f98: 0x30424000
    ctx->pc = 0x1c5f98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x1c5f9c: 0x10400004
    ctx->pc = 0x1C5F9Cu;
    {
        const bool branch_taken_0x1c5f9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5f9c) {
            ctx->pc = 0x1C5FB0u;
            goto label_1c5fb0;
        }
    }
    ctx->pc = 0x1C5FA4u;
    // 0x1c5fa4: 0xc4600000
    ctx->pc = 0x1c5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5fa8: 0x46030001
    ctx->pc = 0x1c5fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c5fac: 0xe4600000
    ctx->pc = 0x1c5facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c5fb0:
    // 0x1c5fb0: 0x8f858a10
    ctx->pc = 0x1c5fb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1c5fb4: 0x24020001
    ctx->pc = 0x1c5fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fb8: 0x8ca30000
    ctx->pc = 0x1c5fb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5fbc: 0x14620011
    ctx->pc = 0x1C5FBCu;
    {
        const bool branch_taken_0x1c5fbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c5fbc) {
            ctx->pc = 0x1C6004u;
            goto label_1c6004;
        }
    }
    ctx->pc = 0x1C5FC4u;
    // 0x1c5fc4: 0x8f828a0c
    ctx->pc = 0x1c5fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1c5fc8: 0x30420001
    ctx->pc = 0x1c5fc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1c5fcc: 0x10400005
    ctx->pc = 0x1C5FCCu;
    {
        const bool branch_taken_0x1c5fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5fcc) {
            ctx->pc = 0x1C5FE4u;
            goto label_1c5fe4;
        }
    }
    ctx->pc = 0x1C5FD4u;
    // 0x1c5fd4: 0x94a20160
    ctx->pc = 0x1c5fd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x1c5fd8: 0x304201ff
    ctx->pc = 0x1c5fd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1c5fdc: 0x10000004
    ctx->pc = 0x1C5FDCu;
    {
        const bool branch_taken_0x1c5fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5FE0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x1c5fdc) {
            ctx->pc = 0x1C5FF0u;
            goto label_1c5ff0;
        }
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0x94a20070
    ctx->pc = 0x1c5fe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1c5fe8: 0x304201ff
    ctx->pc = 0x1c5fe8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1c5fec: 0x22140
    ctx->pc = 0x1c5fecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 5));
label_1c5ff0:
    // 0x1c5ff0: 0x90a30072
    ctx->pc = 0x1c5ff0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 114)));
    // 0x1c5ff4: 0x90a20073
    ctx->pc = 0x1c5ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 115)));
    // 0x1c5ff8: 0x3066003f
    ctx->pc = 0x1c5ff8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 63));
    // 0x1c5ffc: 0x10000008
    ctx->pc = 0x1C5FFCu;
    {
        const bool branch_taken_0x1c5ffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6000u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 63));
        if (branch_taken_0x1c5ffc) {
            ctx->pc = 0x1C6020u;
            goto label_1c6020;
        }
    }
    ctx->pc = 0x1C6004u;
label_1c6004:
    // 0x1c6004: 0x94a40020
    ctx->pc = 0x1c6004u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1c6008: 0x90a30022
    ctx->pc = 0x1c6008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x1c600c: 0x90a20023
    ctx->pc = 0x1c600cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x1c6010: 0x308401ff
    ctx->pc = 0x1c6010u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1c6014: 0x42140
    ctx->pc = 0x1c6014u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c6018: 0x3066003f
    ctx->pc = 0x1c6018u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 63));
    // 0x1c601c: 0x3045003f
    ctx->pc = 0x1c601cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 63));
label_1c6020:
    // 0x1c6020: 0x6103c
    ctx->pc = 0x1c6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c6024: 0x4183c
    ctx->pc = 0x1c6024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c6028: 0x2103f
    ctx->pc = 0x1c6028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c602c: 0x3183f
    ctx->pc = 0x1c602cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c6030: 0x213b8
    ctx->pc = 0x1c6030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1c6034: 0x621825
    ctx->pc = 0x1c6034u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6038: 0x5103c
    ctx->pc = 0x1c6038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c603c: 0x2103f
    ctx->pc = 0x1c603cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6040: 0x21538
    ctx->pc = 0x1c6040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1c6044: 0x432025
    ctx->pc = 0x1c6044u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6048: 0x24020002
    ctx->pc = 0x1c6048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c604c: 0x2183c
    ctx->pc = 0x1c604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6050: 0x3c022800
    ctx->pc = 0x1c6050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10240 << 16));
    // 0x1c6054: 0x431025
    ctx->pc = 0x1c6054u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6058: 0x821825
    ctx->pc = 0x1c6058u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c605c: 0x3402ffff
    ctx->pc = 0x1c605cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1c6060: 0x21438
    ctx->pc = 0x1c6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c6064: 0x3444ffff
    ctx->pc = 0x1c6064u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1c6068: 0x641024
    ctx->pc = 0x1c6068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c606c: 0x2103c
    ctx->pc = 0x1c606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6070: 0x2103f
    ctx->pc = 0x1c6070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6074: 0xae420030
    ctx->pc = 0x1c6074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x1c6078: 0x3103e
    ctx->pc = 0x1c6078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c607c: 0x441024
    ctx->pc = 0x1c607cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c6080: 0x2103c
    ctx->pc = 0x1c6080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6084: 0x2103f
    ctx->pc = 0x1c6084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6088: 0xae420034
    ctx->pc = 0x1c6088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1c608c: 0x27a20180
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c6090: 0x27a30190
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c6094: 0x27a40170
    ctx->pc = 0x1c6094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c6098: 0xd8530000
    ctx->pc = 0x1c6098u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c609c: 0xd8740000
    ctx->pc = 0x1c609cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c60a0: 0xd8950000
    ctx->pc = 0x1c60a0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c60a4: 0x0
    ctx->pc = 0x1c60a4u;
    // NOP
label_1c60a8:
    // 0x1c60a8: 0xc6400020
    ctx->pc = 0x1c60a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60ac: 0x3c020026
    ctx->pc = 0x1c60acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1c60b0: 0x102100
    ctx->pc = 0x1c60b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c60b4: 0x2442f9d0
    ctx->pc = 0x1c60b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965712));
    // 0x1c60b8: 0x441821
    ctx->pc = 0x1c60b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c60bc: 0x3c020026
    ctx->pc = 0x1c60bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1c60c0: 0xe7a00140
    ctx->pc = 0x1c60c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1c60c4: 0xc6400024
    ctx->pc = 0x1c60c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60c8: 0x2442f9d8
    ctx->pc = 0x1c60c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965720));
    // 0x1c60cc: 0x441021
    ctx->pc = 0x1c60ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c60d0: 0xe7a00144
    ctx->pc = 0x1c60d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1c60d4: 0xafa00148
    ctx->pc = 0x1c60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x1c60d8: 0xafa0014c
    ctx->pc = 0x1c60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x1c60dc: 0xdc630000
    ctx->pc = 0x1c60dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c60e0: 0xffa30150
    ctx->pc = 0x1c60e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 3));
    // 0x1c60e4: 0xdc420000
    ctx->pc = 0x1c60e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c60e8: 0xc069558
    ctx->pc = 0x1C60E8u;
    SET_GPR_U32(ctx, 31, 0x1C60F0u);
    ctx->pc = 0x1C60ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 2));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60F0u; }
        else if (ctx->pc != 0x1C60F0u) { ctx->pc = 0x1C60F0u; }
    }
    if (ctx->pc != 0x1C60F0u) { return; }
    ctx->pc = 0x1C60F0u;
    // 0x1c60f0: 0x70409e28
    ctx->pc = 0x1c60f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c60f4: 0x16600003
    ctx->pc = 0x1C60F4u;
    {
        const bool branch_taken_0x1c60f4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c60f4) {
            ctx->pc = 0x1C6104u;
            goto label_1c6104;
        }
    }
    ctx->pc = 0x1C60FCu;
    // 0x1c60fc: 0xc0694bc
    ctx->pc = 0x1C60FCu;
    SET_GPR_U32(ctx, 31, 0x1C6104u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6104u; }
        else if (ctx->pc != 0x1C6104u) { ctx->pc = 0x1C6104u; }
    }
    if (ctx->pc != 0x1C6104u) { return; }
    ctx->pc = 0x1C6104u;
label_1c6104:
    // 0x1c6104: 0xc069528
    ctx->pc = 0x1C6104u;
    SET_GPR_U32(ctx, 31, 0x1C610Cu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C610Cu; }
        else if (ctx->pc != 0x1C610Cu) { ctx->pc = 0x1C610Cu; }
    }
    if (ctx->pc != 0x1C610Cu) { return; }
    ctx->pc = 0x1C610Cu;
    // 0x1c610c: 0x7040a628
    ctx->pc = 0x1c610cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6110: 0x7280ae28
    ctx->pc = 0x1c6110u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1c6114: 0x70001628
    ctx->pc = 0x1c6114u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6118: 0x3c031000
    ctx->pc = 0x1c6118u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1c611c: 0x3464d000
    ctx->pc = 0x1c611cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 53248));
label_1c6120:
    // 0x1c6120: 0x8c830000
    ctx->pc = 0x1c6120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6124: 0x30630100
    ctx->pc = 0x1c6124u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1c6128: 0x0
    ctx->pc = 0x1c6128u;
    // NOP
    // 0x1c612c: 0x0
    ctx->pc = 0x1c612cu;
    // NOP
    // 0x1c6130: 0x0
    ctx->pc = 0x1c6130u;
    // NOP
    // 0x1c6134: 0x1460fffa
    ctx->pc = 0x1C6134u;
    {
        const bool branch_taken_0x1c6134 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6134) {
            ctx->pc = 0x1C6120u;
            goto label_1c6120;
        }
    }
    ctx->pc = 0x1C613Cu;
    // 0x1c613c: 0x12c00011
    ctx->pc = 0x1C613Cu;
    {
        const bool branch_taken_0x1c613c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6140u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x1c613c) {
            ctx->pc = 0x1C6184u;
            goto label_1c6184;
        }
    }
    ctx->pc = 0x1C6144u;
    // 0x1c6144: 0x8e420044
    ctx->pc = 0x1c6144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1c6148: 0x8e450040
    ctx->pc = 0x1c6148u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1c614c: 0x72802628
    ctx->pc = 0x1c614cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1c6150: 0xc06ba00
    ctx->pc = 0x1C6150u;
    SET_GPR_U32(ctx, 31, 0x1C6158u);
    ctx->pc = 0x1C6154u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1AE800u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlspr_set_texload_packet_0x1ae800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6158u; }
        else if (ctx->pc != 0x1C6158u) { ctx->pc = 0x1C6158u; }
    }
    if (ctx->pc != 0x1C6158u) { return; }
    ctx->pc = 0x1C6158u;
    // 0x1c6158: 0xc06952c
    ctx->pc = 0x1C6158u;
    SET_GPR_U32(ctx, 31, 0x1C6160u);
    ctx->pc = 0x1C615Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6160u; }
        else if (ctx->pc != 0x1C6160u) { ctx->pc = 0x1C6160u; }
    }
    if (ctx->pc != 0x1C6160u) { return; }
    ctx->pc = 0x1C6160u;
    // 0x1c6160: 0x70001628
    ctx->pc = 0x1c6160u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c6164:
    // 0x1c6164: 0x3c011001
    ctx->pc = 0x1c6164u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1c6168: 0x8c23d000
    ctx->pc = 0x1c6168u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1c616c: 0x30630100
    ctx->pc = 0x1c616cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1c6170: 0x0
    ctx->pc = 0x1c6170u;
    // NOP
    // 0x1c6174: 0x0
    ctx->pc = 0x1c6174u;
    // NOP
    // 0x1c6178: 0x1460fffa
    ctx->pc = 0x1C6178u;
    {
        const bool branch_taken_0x1c6178 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6178) {
            ctx->pc = 0x1C6164u;
            goto label_1c6164;
        }
    }
    ctx->pc = 0x1C6180u;
    // 0x1c6180: 0x3c031000
    ctx->pc = 0x1c6180u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_1c6184:
    // 0x1c6184: 0xae830000
    ctx->pc = 0x1c6184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1c6188: 0x3203c
    ctx->pc = 0x1c6188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c618c: 0xae800004
    ctx->pc = 0x1c618cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1c6190: 0x3c031300
    ctx->pc = 0x1c6190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4864 << 16));
    // 0x1c6194: 0xae830008
    ctx->pc = 0x1c6194u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1c6198: 0x3c035100
    ctx->pc = 0x1c6198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1c619c: 0xae83000c
    ctx->pc = 0x1c619cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x1c61a0: 0x34038000
    ctx->pc = 0x1c61a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1c61a4: 0x641825
    ctx->pc = 0x1c61a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c61a8: 0xfe830010
    ctx->pc = 0x1c61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x1c61ac: 0x2403000e
    ctx->pc = 0x1c61acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c61b0: 0xfe830018
    ctx->pc = 0x1c61b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
    // 0x1c61b4: 0x32030002
    ctx->pc = 0x1c61b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 2));
    // 0x1c61b8: 0x26b50020
    ctx->pc = 0x1c61b8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 32));
    // 0x1c61bc: 0x1060000f
    ctx->pc = 0x1C61BCu;
    {
        const bool branch_taken_0x1c61bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C61C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1c61bc) {
            ctx->pc = 0x1C61FCu;
            goto label_1c61fc;
        }
    }
    ctx->pc = 0x1C61C4u;
    // 0x1c61c4: 0x8e450030
    ctx->pc = 0x1c61c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c61c8: 0x24040006
    ctx->pc = 0x1c61c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c61cc: 0x24030014
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c61d0: 0x24420002
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c61d4: 0xaea50000
    ctx->pc = 0x1c61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x1c61d8: 0x8e450034
    ctx->pc = 0x1c61d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1c61dc: 0xaea50004
    ctx->pc = 0x1c61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
    // 0x1c61e0: 0xfea40008
    ctx->pc = 0x1c61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 4));
    // 0x1c61e4: 0x8e440038
    ctx->pc = 0x1c61e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c61e8: 0xaea40010
    ctx->pc = 0x1c61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 4));
    // 0x1c61ec: 0x8e44003c
    ctx->pc = 0x1c61ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1c61f0: 0xaea40014
    ctx->pc = 0x1c61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 4));
    // 0x1c61f4: 0xfea30018
    ctx->pc = 0x1c61f4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 3));
    // 0x1c61f8: 0x26b50020
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 32));
label_1c61fc:
    // 0x1c61fc: 0x8e43000c
    ctx->pc = 0x1c61fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6200: 0x30630010
    ctx->pc = 0x1c6200u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x1c6204: 0x10600004
    ctx->pc = 0x1C6204u;
    {
        const bool branch_taken_0x1c6204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6208u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x1c6204) {
            ctx->pc = 0x1C6218u;
            goto label_1c6218;
        }
    }
    ctx->pc = 0x1C620Cu;
    // 0x1c620c: 0x24030048
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6210: 0x10000002
    ctx->pc = 0x1C6210u;
    {
        const bool branch_taken_0x1c6210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6214u;
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
        if (branch_taken_0x1c6210) {
            ctx->pc = 0x1C621Cu;
            goto label_1c621c;
        }
    }
    ctx->pc = 0x1C6218u;
label_1c6218:
    // 0x1c6218: 0xfea30000
    ctx->pc = 0x1c6218u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_1c621c:
    // 0x1c621c: 0x24030042
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 66));
    // 0x1c6220: 0xfea30008
    ctx->pc = 0x1c6220u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x1c6224: 0x3c030007
    ctx->pc = 0x1c6224u;
    SET_GPR_U32(ctx, 3, ((uint32_t)7 << 16));
    // 0x1c6228: 0x34631001
    ctx->pc = 0x1c6228u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4097));
    // 0x1c622c: 0xfea30010
    ctx->pc = 0x1c622cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 3));
    // 0x1c6230: 0x24030047
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1c6234: 0xfea30018
    ctx->pc = 0x1c6234u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 3));
    // 0x1c6238: 0x34438000
    ctx->pc = 0x1c6238u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1c623c: 0xa6830010
    ctx->pc = 0x1c623cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6240: 0x27a30140
    ctx->pc = 0x1c6240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6244: 0x27a40150
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c6248: 0xd8710000
    ctx->pc = 0x1c6248u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c624c: 0xd8920000
    ctx->pc = 0x1c624cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6250: 0x4bef1b3c
    ctx->pc = 0x1c6250u;
    ctx->vu0_vf[15] = ctx->vu0_vf[3];
    // 0x1c6254: 0x4b0fc33c
    ctx->pc = 0x1c6254u;
    ctx->vu0_vf[15] = ctx->vu0_vf[24];
    // 0x1c6258: 0x4a8fcb3c
    ctx->pc = 0x1c6258u;
    ctx->vu0_vf[15] = ctx->vu0_vf[25];
    // 0x1c625c: 0x3c030030
    ctx->pc = 0x1c625cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1c6260: 0x246355f0
    ctx->pc = 0x1c6260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22000));
    // 0x1c6264: 0xd8640000
    ctx->pc = 0x1c6264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6268: 0xd8650010
    ctx->pc = 0x1c6268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c626c: 0x4b8f8bea
    ctx->pc = 0x1c626cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1c6270: 0x4bef79fd
    ctx->pc = 0x1c6270u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[15], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = ps2_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1c6274: 0x4a91046c
    ctx->pc = 0x1c6274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x1c6278: 0x4bf121bc
    ctx->pc = 0x1c6278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c627c: 0x4bf12c49
    ctx->pc = 0x1c627cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = ps2_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c6280: 0x24030008
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c6284: 0x1223000f
    ctx->pc = 0x1C6284u;
    {
        const bool branch_taken_0x1c6284 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C6288u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1c6284) {
            ctx->pc = 0x1C62C4u;
            goto label_1c62c4;
        }
    }
    ctx->pc = 0x1C628Cu;
    // 0x1c628c: 0x24030004
    ctx->pc = 0x1c628cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6290: 0x12230009
    ctx->pc = 0x1C6290u;
    {
        const bool branch_taken_0x1c6290 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c6290) {
            ctx->pc = 0x1C62B8u;
            goto label_1c62b8;
        }
    }
    ctx->pc = 0x1C6298u;
    // 0x1c6298: 0x12200003
    ctx->pc = 0x1C6298u;
    {
        const bool branch_taken_0x1c6298 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6298) {
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C62A0u;
    // 0x1c62a0: 0x10000007
    ctx->pc = 0x1C62A0u;
    {
        const bool branch_taken_0x1c62a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c62a0) {
            ctx->pc = 0x1C62C0u;
            goto label_1c62c0;
        }
    }
    ctx->pc = 0x1C62A8u;
label_1c62a8:
    // 0x1c62a8: 0x4bf08b3c
    ctx->pc = 0x1c62a8u;
    ctx->vu0_vf[16] = ctx->vu0_vf[17];
    // 0x1c62ac: 0x4b10033c
    ctx->pc = 0x1c62acu;
    ctx->vu0_vf[16] = ctx->vu0_vf[0];
    // 0x1c62b0: 0x10000003
    ctx->pc = 0x1C62B0u;
    {
        const bool branch_taken_0x1c62b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C62B4u;
        ctx->vu0_vf[17] = ctx->vu0_vf[0];
        if (branch_taken_0x1c62b0) {
            ctx->pc = 0x1C62C0u;
            goto label_1c62c0;
        }
    }
    ctx->pc = 0x1C62B8u;
label_1c62b8:
    // 0x1c62b8: 0x4bf08b3c
    ctx->pc = 0x1c62b8u;
    ctx->vu0_vf[16] = ctx->vu0_vf[17];
    // 0x1c62bc: 0x4a90046c
    ctx->pc = 0x1c62bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_1c62c0:
    // 0x1c62c0: 0x24470002
    ctx->pc = 0x1c62c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2));
label_1c62c4:
    // 0x1c62c4: 0x72402628
    ctx->pc = 0x1c62c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1c62c8: 0x72802e28
    ctx->pc = 0x1c62c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1c62cc: 0x26a60020
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 32));
    // 0x1c62d0: 0xc071996
    ctx->pc = 0x1C62D0u;
    SET_GPR_U32(ctx, 31, 0x1C62D8u);
    ctx->pc = 0x1C62D4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C6658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6658_0x1c6658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62D8u; }
        else if (ctx->pc != 0x1C62D8u) { ctx->pc = 0x1C62D8u; }
    }
    if (ctx->pc != 0x1C62D8u) { return; }
    ctx->pc = 0x1C62D8u;
    // 0x1c62d8: 0x16600005
    ctx->pc = 0x1C62D8u;
    {
        const bool branch_taken_0x1c62d8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C62DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x1c62d8) {
            ctx->pc = 0x1C62F0u;
            goto label_1c62f0;
        }
    }
    ctx->pc = 0x1C62E0u;
    // 0x1c62e0: 0x70002628
    ctx->pc = 0x1c62e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c62e4: 0xc0694e8
    ctx->pc = 0x1C62E4u;
    SET_GPR_U32(ctx, 31, 0x1C62ECu);
    ctx->pc = 0x1C62E8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62ECu; }
        else if (ctx->pc != 0x1C62ECu) { ctx->pc = 0x1C62ECu; }
    }
    if (ctx->pc != 0x1C62ECu) { return; }
    ctx->pc = 0x1C62ECu;
    // 0x1c62ec: 0x27a30080
    ctx->pc = 0x1c62ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 128));
label_1c62f0:
    // 0x1c62f0: 0xd8740000
    ctx->pc = 0x1c62f0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c62f4: 0xd8750010
    ctx->pc = 0x1c62f4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c62f8: 0xd8760020
    ctx->pc = 0x1c62f8u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c62fc: 0xd8770030
    ctx->pc = 0x1c62fcu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c6300: 0xd8780040
    ctx->pc = 0x1c6300u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1c6304: 0xd8790050
    ctx->pc = 0x1c6304u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1c6308: 0xd87a0060
    ctx->pc = 0x1c6308u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c630c: 0xd87b0070
    ctx->pc = 0x1c630cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1c6310: 0xd87c0080
    ctx->pc = 0x1c6310u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1c6314: 0xd87d0090
    ctx->pc = 0x1c6314u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1c6318: 0xd87e00a0
    ctx->pc = 0x1c6318u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1c631c: 0xd87f00b0
    ctx->pc = 0x1c631cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1c6320: 0x7bbf0070
    ctx->pc = 0x1c6320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6324: 0x7bb60060
    ctx->pc = 0x1c6324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6328: 0x7bb50050
    ctx->pc = 0x1c6328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c632c: 0x7bb40040
    ctx->pc = 0x1c632cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6330: 0x7bb30030
    ctx->pc = 0x1c6330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6334: 0x7bb20020
    ctx->pc = 0x1c6334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6338: 0x7bb10010
    ctx->pc = 0x1c6338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c633c: 0x7bb00000
    ctx->pc = 0x1c633cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6340: 0x3e00008
    ctx->pc = 0x1C6340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5E2Cu: goto label_1c5e2c;
            case 0x1C5E74u: goto label_1c5e74;
            case 0x1C5E80u: goto label_1c5e80;
            case 0x1C5EDCu: goto label_1c5edc;
            case 0x1C5F58u: goto label_1c5f58;
            case 0x1C5FB0u: goto label_1c5fb0;
            case 0x1C5FE4u: goto label_1c5fe4;
            case 0x1C5FF0u: goto label_1c5ff0;
            case 0x1C6004u: goto label_1c6004;
            case 0x1C6020u: goto label_1c6020;
            case 0x1C60A8u: goto label_1c60a8;
            case 0x1C6104u: goto label_1c6104;
            case 0x1C6120u: goto label_1c6120;
            case 0x1C6164u: goto label_1c6164;
            case 0x1C6184u: goto label_1c6184;
            case 0x1C61FCu: goto label_1c61fc;
            case 0x1C6218u: goto label_1c6218;
            case 0x1C621Cu: goto label_1c621c;
            case 0x1C62A8u: goto label_1c62a8;
            case 0x1C62B8u: goto label_1c62b8;
            case 0x1C62C0u: goto label_1c62c0;
            case 0x1C62C4u: goto label_1c62c4;
            case 0x1C62F0u: goto label_1c62f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6348u;
}
