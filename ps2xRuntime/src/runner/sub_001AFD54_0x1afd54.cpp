#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFD54
// Address: 0x1afd54 - 0x1aff48
void sub_001AFD54_0x1afd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFD54");


    ctx->pc = 0x1afd54u;

    // 0x1afd54: 0x24010000
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1afd58: 0x14810007
    ctx->pc = 0x1AFD58u;
    {
        const bool branch_taken_0x1afd58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 1));
        ctx->pc = 0x1AFD5Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
        if (branch_taken_0x1afd58) {
            ctx->pc = 0x1AFD78u;
            goto label_1afd78;
        }
    }
    ctx->pc = 0x1AFD60u;
    // 0x1afd60: 0x4bede37d
    ctx->pc = 0x1afd60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1afd64: 0x4bedeb7d
    ctx->pc = 0x1afd64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1afd68: 0x4bedf37d
    ctx->pc = 0x1afd68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1afd6c: 0x4bedfb7d
    ctx->pc = 0x1afd6cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1afd70: 0x3e00008
    ctx->pc = 0x1AFD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD74u;
        ctx->vi[13] = ctx->vi[13] + -4;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFD78u;
label_1afd78:
    // 0x1afd78: 0xf89c0000
    ctx->pc = 0x1afd78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1afd7c: 0xf89d0010
    ctx->pc = 0x1afd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1afd80: 0xf89e0020
    ctx->pc = 0x1afd80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1afd84: 0xf89f0030
    ctx->pc = 0x1afd84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1afd88: 0x3e00008
    ctx->pc = 0x1AFD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFD90u;
    // 0x1afd90: 0x24010000
    ctx->pc = 0x1afd90u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1afd94: 0x10810018
    ctx->pc = 0x1AFD94u;
    {
        const bool branch_taken_0x1afd94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1AFD98u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
        if (branch_taken_0x1afd94) {
            ctx->pc = 0x1AFDF8u;
            goto label_1afdf8;
        }
    }
    ctx->pc = 0x1AFD9Cu;
    // 0x1afd9c: 0x27bdfff0
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afda0: 0xfbbc0000
    ctx->pc = 0x1afda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1afda4: 0x8fa80000
    ctx->pc = 0x1afda4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afda8: 0x8fa90004
    ctx->pc = 0x1afda8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afdac: 0x8faa0008
    ctx->pc = 0x1afdacu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afdb0: 0xac880000
    ctx->pc = 0x1afdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1afdb4: 0xac890004
    ctx->pc = 0x1afdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x1afdb8: 0xac8a0008
    ctx->pc = 0x1afdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x1afdbc: 0xfbbd0000
    ctx->pc = 0x1afdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1afdc0: 0x8fa80000
    ctx->pc = 0x1afdc0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afdc4: 0x8fa90004
    ctx->pc = 0x1afdc4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afdc8: 0x8faa0008
    ctx->pc = 0x1afdc8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afdcc: 0xac88000c
    ctx->pc = 0x1afdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x1afdd0: 0xac890010
    ctx->pc = 0x1afdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x1afdd4: 0xac8a0014
    ctx->pc = 0x1afdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x1afdd8: 0xfbbe0000
    ctx->pc = 0x1afdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1afddc: 0x8fa80000
    ctx->pc = 0x1afddcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afde0: 0x8fa90004
    ctx->pc = 0x1afde0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afde4: 0x8faa0008
    ctx->pc = 0x1afde4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afde8: 0xac880018
    ctx->pc = 0x1afde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x1afdec: 0xac89001c
    ctx->pc = 0x1afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 9));
    // 0x1afdf0: 0xac8a0020
    ctx->pc = 0x1afdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x1afdf4: 0x27bd0010
    ctx->pc = 0x1afdf4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
label_1afdf8:
    // 0x1afdf8: 0x3e00008
    ctx->pc = 0x1AFDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFE00u;
    // 0x1afe00: 0x24010000
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1afe04: 0x10810018
    ctx->pc = 0x1AFE04u;
    {
        const bool branch_taken_0x1afe04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1AFE08u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
        if (branch_taken_0x1afe04) {
            ctx->pc = 0x1AFE68u;
            goto label_1afe68;
        }
    }
    ctx->pc = 0x1AFE0Cu;
    // 0x1afe0c: 0x27bdfff0
    ctx->pc = 0x1afe0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afe10: 0xfbbc0000
    ctx->pc = 0x1afe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1afe14: 0x8fa80000
    ctx->pc = 0x1afe14u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe18: 0x8fa90004
    ctx->pc = 0x1afe18u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afe1c: 0x8faa0008
    ctx->pc = 0x1afe1cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe20: 0xac880000
    ctx->pc = 0x1afe20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1afe24: 0xac890004
    ctx->pc = 0x1afe24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x1afe28: 0xac8a0008
    ctx->pc = 0x1afe28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x1afe2c: 0xfbbd0000
    ctx->pc = 0x1afe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1afe30: 0x8fa80000
    ctx->pc = 0x1afe30u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe34: 0x8fa90004
    ctx->pc = 0x1afe34u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afe38: 0x8faa0008
    ctx->pc = 0x1afe38u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe3c: 0xac880010
    ctx->pc = 0x1afe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1afe40: 0xac890014
    ctx->pc = 0x1afe40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x1afe44: 0xac8a0018
    ctx->pc = 0x1afe44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 10));
    // 0x1afe48: 0xfbbe0000
    ctx->pc = 0x1afe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1afe4c: 0x8fa80000
    ctx->pc = 0x1afe4cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe50: 0x8fa90004
    ctx->pc = 0x1afe50u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afe54: 0x8faa0008
    ctx->pc = 0x1afe54u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe58: 0xac880020
    ctx->pc = 0x1afe58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x1afe5c: 0xac890024
    ctx->pc = 0x1afe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 9));
    // 0x1afe60: 0xac8a0028
    ctx->pc = 0x1afe60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x1afe64: 0x27bd0010
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
label_1afe68:
    // 0x1afe68: 0x3e00008
    ctx->pc = 0x1AFE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFE70u;
    // 0x1afe70: 0x24010000
    ctx->pc = 0x1afe70u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1afe74: 0x1081001e
    ctx->pc = 0x1AFE74u;
    {
        const bool branch_taken_0x1afe74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1AFE78u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
        if (branch_taken_0x1afe74) {
            ctx->pc = 0x1AFEF0u;
            goto label_1afef0;
        }
    }
    ctx->pc = 0x1AFE7Cu;
    // 0x1afe7c: 0x27bdfff0
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afe80: 0xfbbc0000
    ctx->pc = 0x1afe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1afe84: 0x8fa80000
    ctx->pc = 0x1afe84u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe88: 0x8fa90004
    ctx->pc = 0x1afe88u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afe8c: 0x8faa0008
    ctx->pc = 0x1afe8cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe90: 0xac880000
    ctx->pc = 0x1afe90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1afe94: 0xac890004
    ctx->pc = 0x1afe94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x1afe98: 0xac8a0008
    ctx->pc = 0x1afe98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x1afe9c: 0xfbbd0000
    ctx->pc = 0x1afe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1afea0: 0x8fa80000
    ctx->pc = 0x1afea0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afea4: 0x8fa90004
    ctx->pc = 0x1afea4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afea8: 0x8faa0008
    ctx->pc = 0x1afea8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afeac: 0xac88000c
    ctx->pc = 0x1afeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x1afeb0: 0xac890010
    ctx->pc = 0x1afeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x1afeb4: 0xac8a0014
    ctx->pc = 0x1afeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x1afeb8: 0xfbbe0000
    ctx->pc = 0x1afeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1afebc: 0x8fa80000
    ctx->pc = 0x1afebcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afec0: 0x8fa90004
    ctx->pc = 0x1afec0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afec4: 0x8faa0008
    ctx->pc = 0x1afec4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afec8: 0xac880018
    ctx->pc = 0x1afec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x1afecc: 0xac89001c
    ctx->pc = 0x1afeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 9));
    // 0x1afed0: 0xac8a0020
    ctx->pc = 0x1afed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x1afed4: 0xfbbf0000
    ctx->pc = 0x1afed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1afed8: 0x8fa80000
    ctx->pc = 0x1afed8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afedc: 0x8fa90004
    ctx->pc = 0x1afedcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afee0: 0x8faa0008
    ctx->pc = 0x1afee0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afee4: 0xac880024
    ctx->pc = 0x1afee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1afee8: 0xac890028
    ctx->pc = 0x1afee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 9));
    // 0x1afeec: 0xac8a002c
    ctx->pc = 0x1afeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
label_1afef0:
    // 0x1afef0: 0x3e00008
    ctx->pc = 0x1AFEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFEF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFEF8u;
    // 0x1afef8: 0x24010000
    ctx->pc = 0x1afef8u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1afefc: 0x14810007
    ctx->pc = 0x1AFEFCu;
    {
        const bool branch_taken_0x1afefc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 1));
        ctx->pc = 0x1AFF00u;
        ctx->vi[13] = ctx->vi[13] + -4;
        if (branch_taken_0x1afefc) {
            ctx->pc = 0x1AFF1Cu;
            goto label_1aff1c;
        }
    }
    ctx->pc = 0x1AFF04u;
    // 0x1aff04: 0x4bfc6b7c
    ctx->pc = 0x1aff04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff08: 0x4bfd6b7c
    ctx->pc = 0x1aff08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff0c: 0x4bfe6b7c
    ctx->pc = 0x1aff0cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff10: 0x4bff6b7c
    ctx->pc = 0x1aff10u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff14: 0x3e00008
    ctx->pc = 0x1AFF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFF1Cu;
label_1aff1c:
    // 0x1aff1c: 0x27bdfff0
    ctx->pc = 0x1aff1cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aff20: 0x4be36b7c
    ctx->pc = 0x1aff20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = ps2_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff24: 0x4be46b7c
    ctx->pc = 0x1aff24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = ps2_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff28: 0x4be56b7c
    ctx->pc = 0x1aff28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = ps2_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff2c: 0x4be66b7c
    ctx->pc = 0x1aff2cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = ps2_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vi[13] = (ctx->vi[13] + 1) & 0x3FF; }
    // 0x1aff30: 0xf8830000
    ctx->pc = 0x1aff30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1aff34: 0xf8830010
    ctx->pc = 0x1aff34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1aff38: 0xf8830020
    ctx->pc = 0x1aff38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1aff3c: 0xf8830030
    ctx->pc = 0x1aff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1aff40: 0x3e00008
    ctx->pc = 0x1AFF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFF1Cu: goto label_1aff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFF48u;
}
