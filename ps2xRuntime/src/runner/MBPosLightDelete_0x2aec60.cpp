#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPosLightDelete
// Address: 0x2aec60 - 0x2aed50
void MBPosLightDelete_0x2aec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aec60u;

    // 0x2aec60: 0x3c020036
    ctx->pc = 0x2aec60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aec64: 0x10800020
    ctx->pc = 0x2AEC64u;
    {
        const bool branch_taken_0x2aec64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AEC68u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2aec64) {
            ctx->pc = 0x2AECE8u;
            goto label_2aece8;
        }
    }
    ctx->pc = 0x2AEC6Cu;
    // 0x2aec6c: 0x3083ffff
    ctx->pc = 0x2aec6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2aec70: 0x2c62000d
    ctx->pc = 0x2aec70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 13));
    // 0x2aec74: 0x14400003
    ctx->pc = 0x2AEC74u;
    {
        const bool branch_taken_0x2aec74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AEC78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2aec74) {
            ctx->pc = 0x2AEC84u;
            goto label_2aec84;
        }
    }
    ctx->pc = 0x2AEC7Cu;
label_2aec7c:
    // 0x2aec7c: 0x3e00008
    ctx->pc = 0x2AEC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEC7Cu: goto label_2aec7c;
            case 0x2AEC84u: goto label_2aec84;
            case 0x2AECB8u: goto label_2aecb8;
            case 0x2AECC0u: goto label_2aecc0;
            case 0x2AECE8u: goto label_2aece8;
            case 0x2AED10u: goto label_2aed10;
            case 0x2AED1Cu: goto label_2aed1c;
            case 0x2AED30u: goto label_2aed30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEC84u;
label_2aec84:
    // 0x2aec84: 0x621018
    ctx->pc = 0x2aec84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2aec88: 0x244202c0
    ctx->pc = 0x2aec88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 704));
    // 0x2aec8c: 0x8cc3001c
    ctx->pc = 0x2aec8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2aec90: 0x432821
    ctx->pc = 0x2aec90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aec94: 0x8ca2002c
    ctx->pc = 0x2aec94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2aec98: 0x1444fff8
    ctx->pc = 0x2AEC98u;
    {
        const bool branch_taken_0x2aec98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2aec98) {
            ctx->pc = 0x2AEC7Cu;
            goto label_2aec7c;
        }
    }
    ctx->pc = 0x2AECA0u;
    // 0x2aeca0: 0x8c6200e0
    ctx->pc = 0x2aeca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x2aeca4: 0x54450004
    ctx->pc = 0x2AECA4u;
    {
        const bool branch_taken_0x2aeca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x2aeca4) {
            ctx->pc = 0x2AECA8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->pc = 0x2AECB8u;
            goto label_2aecb8;
        }
    }
    ctx->pc = 0x2AECACu;
    // 0x2aecac: 0x8ca20028
    ctx->pc = 0x2aecacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2aecb0: 0x1000001f
    ctx->pc = 0x2AECB0u;
    {
        const bool branch_taken_0x2aecb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AECB4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
        if (branch_taken_0x2aecb0) {
            ctx->pc = 0x2AED30u;
            goto label_2aed30;
        }
    }
    ctx->pc = 0x2AECB8u;
label_2aecb8:
    // 0x2aecb8: 0x8c4300e0
    ctx->pc = 0x2aecb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2aecbc: 0x0
    ctx->pc = 0x2aecbcu;
    // NOP
label_2aecc0:
    // 0x2aecc0: 0x1060ffee
    ctx->pc = 0x2AECC0u;
    {
        const bool branch_taken_0x2aecc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aecc0) {
            ctx->pc = 0x2AEC7Cu;
            goto label_2aec7c;
        }
    }
    ctx->pc = 0x2AECC8u;
    // 0x2aecc8: 0x8c620028
    ctx->pc = 0x2aecc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2aeccc: 0x5445fffc
    ctx->pc = 0x2AECCCu;
    {
        const bool branch_taken_0x2aeccc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x2aeccc) {
            ctx->pc = 0x2AECD0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->pc = 0x2AECC0u;
            goto label_2aecc0;
        }
    }
    ctx->pc = 0x2AECD4u;
    // 0x2aecd4: 0x1060ffe9
    ctx->pc = 0x2AECD4u;
    {
        const bool branch_taken_0x2aecd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aecd4) {
            ctx->pc = 0x2AEC7Cu;
            goto label_2aec7c;
        }
    }
    ctx->pc = 0x2AECDCu;
    // 0x2aecdc: 0x8ca20028
    ctx->pc = 0x2aecdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2aece0: 0x10000013
    ctx->pc = 0x2AECE0u;
    {
        const bool branch_taken_0x2aece0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AECE4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2aece0) {
            ctx->pc = 0x2AED30u;
            goto label_2aed30;
        }
    }
    ctx->pc = 0x2AECE8u;
label_2aece8:
    // 0x2aece8: 0x8cc4001c
    ctx->pc = 0x2aece8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2aecec: 0x8c8200e0
    ctx->pc = 0x2aececu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2aecf0: 0x1040ffe2
    ctx->pc = 0x2AECF0u;
    {
        const bool branch_taken_0x2aecf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AECF4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2aecf0) {
            ctx->pc = 0x2AEC7Cu;
            goto label_2aec7c;
        }
    }
    ctx->pc = 0x2AECF8u;
    // 0x2aecf8: 0x8c650028
    ctx->pc = 0x2aecf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2aecfc: 0x54a00007
    ctx->pc = 0x2AECFCu;
    {
        const bool branch_taken_0x2aecfc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2aecfc) {
            ctx->pc = 0x2AED00u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->pc = 0x2AED1Cu;
            goto label_2aed1c;
        }
    }
    ctx->pc = 0x2AED04u;
    // 0x2aed04: 0x60282d
    ctx->pc = 0x2aed04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed08: 0x10000009
    ctx->pc = 0x2AED08u;
    {
        const bool branch_taken_0x2aed08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AED0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x2aed08) {
            ctx->pc = 0x2AED30u;
            goto label_2aed30;
        }
    }
    ctx->pc = 0x2AED10u;
label_2aed10:
    // 0x2aed10: 0xa0182d
    ctx->pc = 0x2aed10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed14: 0x8ca50028
    ctx->pc = 0x2aed14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2aed18: 0x8ca20028
    ctx->pc = 0x2aed18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2aed1c:
    // 0x2aed1c: 0x0
    ctx->pc = 0x2aed1cu;
    // NOP
    // 0x2aed20: 0x0
    ctx->pc = 0x2aed20u;
    // NOP
    // 0x2aed24: 0x1440fffa
    ctx->pc = 0x2AED24u;
    {
        const bool branch_taken_0x2aed24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2aed24) {
            ctx->pc = 0x2AED10u;
            goto label_2aed10;
        }
    }
    ctx->pc = 0x2AED2Cu;
    // 0x2aed2c: 0xac600028
    ctx->pc = 0x2aed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_2aed30:
    // 0x2aed30: 0xaca0002c
    ctx->pc = 0x2aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x2aed34: 0x8cc2001c
    ctx->pc = 0x2aed34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2aed38: 0x8c4200e4
    ctx->pc = 0x2aed38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x2aed3c: 0xaca20028
    ctx->pc = 0x2aed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x2aed40: 0x8cc2001c
    ctx->pc = 0x2aed40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2aed44: 0xac4500e4
    ctx->pc = 0x2aed44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 5));
    // 0x2aed48: 0x3e00008
    ctx->pc = 0x2AED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEC7Cu: goto label_2aec7c;
            case 0x2AEC84u: goto label_2aec84;
            case 0x2AECB8u: goto label_2aecb8;
            case 0x2AECC0u: goto label_2aecc0;
            case 0x2AECE8u: goto label_2aece8;
            case 0x2AED10u: goto label_2aed10;
            case 0x2AED1Cu: goto label_2aed1c;
            case 0x2AED30u: goto label_2aed30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AED50u;
}
