#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFF48
// Address: 0x1aff48 - 0x1b00e0
void sub_001AFF48_0x1aff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFF48");


    ctx->pc = 0x1aff48u;

    // 0x1aff48: 0x27bdfff0
    ctx->pc = 0x1aff48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aff4c: 0xfbbf0000
    ctx->pc = 0x1aff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1aff50: 0x8fa80000
    ctx->pc = 0x1aff50u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aff54: 0x8fa90004
    ctx->pc = 0x1aff54u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1aff58: 0x8faa0008
    ctx->pc = 0x1aff58u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aff5c: 0xac880000
    ctx->pc = 0x1aff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1aff60: 0xac890004
    ctx->pc = 0x1aff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x1aff64: 0xac8a0008
    ctx->pc = 0x1aff64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x1aff68: 0x3e00008
    ctx->pc = 0x1AFF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFFD8u: goto label_1affd8;
            case 0x1B0048u: goto label_1b0048;
            case 0x1B00D8u: goto label_1b00d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFF70u;
    // 0x1aff70: 0x24010000
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1aff74: 0x10810018
    ctx->pc = 0x1AFF74u;
    {
        const bool branch_taken_0x1aff74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1AFF78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x1aff74) {
            ctx->pc = 0x1AFFD8u;
            goto label_1affd8;
        }
    }
    ctx->pc = 0x1AFF7Cu;
    // 0x1aff7c: 0x8c880000
    ctx->pc = 0x1aff7cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aff80: 0x8c890004
    ctx->pc = 0x1aff80u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aff84: 0x8c8a0008
    ctx->pc = 0x1aff84u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aff88: 0x5825
    ctx->pc = 0x1aff88u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x1aff8c: 0xafa80000
    ctx->pc = 0x1aff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1aff90: 0xafa90004
    ctx->pc = 0x1aff90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1aff94: 0xafaa0008
    ctx->pc = 0x1aff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1aff98: 0xafab000c
    ctx->pc = 0x1aff98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1aff9c: 0xdbbc0000
    ctx->pc = 0x1aff9cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1affa0: 0x8c88000c
    ctx->pc = 0x1affa0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1affa4: 0x8c890010
    ctx->pc = 0x1affa4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1affa8: 0x8c8a0014
    ctx->pc = 0x1affa8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1affac: 0xafa80000
    ctx->pc = 0x1affacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1affb0: 0xafa90004
    ctx->pc = 0x1affb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1affb4: 0xafaa0008
    ctx->pc = 0x1affb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1affb8: 0xdbbd0000
    ctx->pc = 0x1affb8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1affbc: 0x8c880018
    ctx->pc = 0x1affbcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1affc0: 0x8c89001c
    ctx->pc = 0x1affc0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1affc4: 0x8c8a0020
    ctx->pc = 0x1affc4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1affc8: 0xafa80000
    ctx->pc = 0x1affc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1affcc: 0xafa90004
    ctx->pc = 0x1affccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1affd0: 0xafaa0008
    ctx->pc = 0x1affd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1affd4: 0xdbbe0000
    ctx->pc = 0x1affd4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1affd8:
    // 0x1affd8: 0x3e00008
    ctx->pc = 0x1AFFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFFDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFFD8u: goto label_1affd8;
            case 0x1B0048u: goto label_1b0048;
            case 0x1B00D8u: goto label_1b00d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFFE0u;
    // 0x1affe0: 0x24010000
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1affe4: 0x10810018
    ctx->pc = 0x1AFFE4u;
    {
        const bool branch_taken_0x1affe4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1AFFE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x1affe4) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1AFFECu;
    // 0x1affec: 0x8c880000
    ctx->pc = 0x1affecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afff0: 0x8c890004
    ctx->pc = 0x1afff0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afff4: 0x8c8a0008
    ctx->pc = 0x1afff4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1afff8: 0x5825
    ctx->pc = 0x1afff8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x1afffc: 0xafa80000
    ctx->pc = 0x1afffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b0000: 0xafa90004
    ctx->pc = 0x1b0000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0004: 0xafaa0008
    ctx->pc = 0x1b0004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0008: 0xafab000c
    ctx->pc = 0x1b0008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1b000c: 0xdbbc0000
    ctx->pc = 0x1b000cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0010: 0x8c880010
    ctx->pc = 0x1b0010u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b0014: 0x8c890014
    ctx->pc = 0x1b0014u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b0018: 0x8c8a0018
    ctx->pc = 0x1b0018u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b001c: 0xafa80000
    ctx->pc = 0x1b001cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b0020: 0xafa90004
    ctx->pc = 0x1b0020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0024: 0xafaa0008
    ctx->pc = 0x1b0024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0028: 0xdbbd0000
    ctx->pc = 0x1b0028u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b002c: 0x8c880020
    ctx->pc = 0x1b002cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b0030: 0x8c890024
    ctx->pc = 0x1b0030u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b0034: 0x8c8a0028
    ctx->pc = 0x1b0034u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b0038: 0xafa80000
    ctx->pc = 0x1b0038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b003c: 0xafa90004
    ctx->pc = 0x1b003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0040: 0xafaa0008
    ctx->pc = 0x1b0040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0044: 0xdbbe0000
    ctx->pc = 0x1b0044u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0048:
    // 0x1b0048: 0x3e00008
    ctx->pc = 0x1B0048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B004Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFFD8u: goto label_1affd8;
            case 0x1B0048u: goto label_1b0048;
            case 0x1B00D8u: goto label_1b00d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0050u;
    // 0x1b0050: 0x24010000
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b0054: 0x10810020
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 1));
        ctx->pc = 0x1B0058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B00D8u;
            goto label_1b00d8;
        }
    }
    ctx->pc = 0x1B005Cu;
    // 0x1b005c: 0x8c880000
    ctx->pc = 0x1b005cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0060: 0x8c890004
    ctx->pc = 0x1b0060u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b0064: 0x8c8a0008
    ctx->pc = 0x1b0064u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b0068: 0x5825
    ctx->pc = 0x1b0068u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x1b006c: 0xafa80000
    ctx->pc = 0x1b006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b0070: 0xafa90004
    ctx->pc = 0x1b0070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0074: 0xafaa0008
    ctx->pc = 0x1b0074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0078: 0xafab000c
    ctx->pc = 0x1b0078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1b007c: 0xdbbc0000
    ctx->pc = 0x1b007cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0080: 0x8c88000c
    ctx->pc = 0x1b0080u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b0084: 0x8c890010
    ctx->pc = 0x1b0084u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b0088: 0x8c8a0014
    ctx->pc = 0x1b0088u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b008c: 0xafa80000
    ctx->pc = 0x1b008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b0090: 0xafa90004
    ctx->pc = 0x1b0090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b0094: 0xafaa0008
    ctx->pc = 0x1b0094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b0098: 0xdbbd0000
    ctx->pc = 0x1b0098u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b009c: 0x8c880018
    ctx->pc = 0x1b009cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b00a0: 0x8c89001c
    ctx->pc = 0x1b00a0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b00a4: 0x8c8a0020
    ctx->pc = 0x1b00a4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b00a8: 0xafa80000
    ctx->pc = 0x1b00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b00ac: 0xafa90004
    ctx->pc = 0x1b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b00b0: 0xafaa0008
    ctx->pc = 0x1b00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b00b4: 0xdbbe0000
    ctx->pc = 0x1b00b4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b00b8: 0xfba00000
    ctx->pc = 0x1b00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b00bc: 0x8c880024
    ctx->pc = 0x1b00bcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b00c0: 0x8c890028
    ctx->pc = 0x1b00c0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b00c4: 0x8c8a002c
    ctx->pc = 0x1b00c4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b00c8: 0xafa80000
    ctx->pc = 0x1b00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1b00cc: 0xafa90004
    ctx->pc = 0x1b00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b00d0: 0xafaa0008
    ctx->pc = 0x1b00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1b00d4: 0xdbbf0000
    ctx->pc = 0x1b00d4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b00d8:
    // 0x1b00d8: 0x3e00008
    ctx->pc = 0x1B00D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B00DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFFD8u: goto label_1affd8;
            case 0x1B0048u: goto label_1b0048;
            case 0x1B00D8u: goto label_1b00d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B00E0u;
}
