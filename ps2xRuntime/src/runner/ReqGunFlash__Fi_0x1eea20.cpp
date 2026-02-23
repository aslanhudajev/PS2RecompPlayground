#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReqGunFlash__Fi
// Address: 0x1eea20 - 0x1eeb18
void ReqGunFlash__Fi_0x1eea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReqGunFlash__Fi");


    ctx->pc = 0x1eea20u;

    // 0x1eea20: 0x27bdffe0
    ctx->pc = 0x1eea20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eea24: 0x7fbf0010
    ctx->pc = 0x1eea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eea28: 0x7fb00000
    ctx->pc = 0x1eea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eea2c: 0x70808628
    ctx->pc = 0x1eea2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eea30: 0x3c010050
    ctx->pc = 0x1eea30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eea34: 0x8424e504
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1eea38: 0x24030008
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eea3c: 0x10830023
    ctx->pc = 0x1EEA3Cu;
    {
        const bool branch_taken_0x1eea3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EEA40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1eea3c) {
            ctx->pc = 0x1EEACCu;
            goto label_1eeacc;
        }
    }
    ctx->pc = 0x1EEA44u;
    // 0x1eea44: 0x50830003
    ctx->pc = 0x1EEA44u;
    {
        const bool branch_taken_0x1eea44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1eea44) {
            ctx->pc = 0x1EEA48u;
            SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
            ctx->pc = 0x1EEA54u;
            goto label_1eea54;
        }
    }
    ctx->pc = 0x1EEA4Cu;
    // 0x1eea4c: 0x10000029
    ctx->pc = 0x1EEA4Cu;
    {
        const bool branch_taken_0x1eea4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEA50u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eea4c) {
            ctx->pc = 0x1EEAF4u;
            goto label_1eeaf4;
        }
    }
    ctx->pc = 0x1EEA54u;
label_1eea54:
    // 0x1eea54: 0xc07ce18
    ctx->pc = 0x1EEA54u;
    SET_GPR_U32(ctx, 31, 0x1EEA5Cu);
    ctx->pc = 0x1EEA58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA5Cu; }
        else if (ctx->pc != 0x1EEA5Cu) { ctx->pc = 0x1EEA5Cu; }
    }
    if (ctx->pc != 0x1EEA5Cu) { return; }
    ctx->pc = 0x1EEA5Cu;
    // 0x1eea5c: 0x1c400026
    ctx->pc = 0x1EEA5Cu;
    {
        const bool branch_taken_0x1eea5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1eea5c) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEA64u;
    // 0x1eea64: 0x8f838b68
    ctx->pc = 0x1eea64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x1eea68: 0x14600005
    ctx->pc = 0x1EEA68u;
    {
        const bool branch_taken_0x1eea68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EEA6Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x1eea68) {
            ctx->pc = 0x1EEA80u;
            goto label_1eea80;
        }
    }
    ctx->pc = 0x1EEA70u;
    // 0x1eea70: 0x8f838ce4
    ctx->pc = 0x1eea70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
    // 0x1eea74: 0x10600020
    ctx->pc = 0x1EEA74u;
    {
        const bool branch_taken_0x1eea74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eea74) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEA7Cu;
    // 0x1eea7c: 0x101900
    ctx->pc = 0x1eea7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
label_1eea80:
    // 0x1eea80: 0x702023
    ctx->pc = 0x1eea80u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1eea84: 0x418c0
    ctx->pc = 0x1eea84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1eea88: 0x641823
    ctx->pc = 0x1eea88u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eea8c: 0x320c0
    ctx->pc = 0x1eea8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eea90: 0x3c030050
    ctx->pc = 0x1eea90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eea94: 0x2463dd24
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958372));
    // 0x1eea98: 0x641821
    ctx->pc = 0x1eea98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eea9c: 0x8c640000
    ctx->pc = 0x1eea9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eeaa0: 0x24030008
    ctx->pc = 0x1eeaa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eeaa4: 0x10830007
    ctx->pc = 0x1EEAA4u;
    {
        const bool branch_taken_0x1eeaa4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EEAA8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eeaa4) {
            ctx->pc = 0x1EEAC4u;
            goto label_1eeac4;
        }
    }
    ctx->pc = 0x1EEAACu;
    // 0x1eeaac: 0x24030005
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eeab0: 0x10830003
    ctx->pc = 0x1EEAB0u;
    {
        const bool branch_taken_0x1eeab0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1eeab0) {
            ctx->pc = 0x1EEAC0u;
            goto label_1eeac0;
        }
    }
    ctx->pc = 0x1EEAB8u;
    // 0x1eeab8: 0x10000010
    ctx->pc = 0x1EEAB8u;
    {
        const bool branch_taken_0x1eeab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEABCu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
        if (branch_taken_0x1eeab8) {
            ctx->pc = 0x1EEAFCu;
            goto label_1eeafc;
        }
    }
    ctx->pc = 0x1EEAC0u;
label_1eeac0:
    // 0x1eeac0: 0x24030001
    ctx->pc = 0x1eeac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1eeac4:
    // 0x1eeac4: 0x1000000c
    ctx->pc = 0x1EEAC4u;
    {
        const bool branch_taken_0x1eeac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEAC8u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1eeac4) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEACCu;
label_1eeacc:
    // 0x1eeacc: 0x8f838cac
    ctx->pc = 0x1eeaccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x1eead0: 0x14700009
    ctx->pc = 0x1EEAD0u;
    {
        const bool branch_taken_0x1eead0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        if (branch_taken_0x1eead0) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEAD8u;
    // 0x1eead8: 0x3c020050
    ctx->pc = 0x1eead8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eeadc: 0xc07ce18
    ctx->pc = 0x1EEADCu;
    SET_GPR_U32(ctx, 31, 0x1EEAE4u);
    ctx->pc = 0x1EEAE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAE4u; }
        else if (ctx->pc != 0x1EEAE4u) { ctx->pc = 0x1EEAE4u; }
    }
    if (ctx->pc != 0x1EEAE4u) { return; }
    ctx->pc = 0x1EEAE4u;
    // 0x1eeae4: 0x1c400004
    ctx->pc = 0x1EEAE4u;
    {
        const bool branch_taken_0x1eeae4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EEAE8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eeae4) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEAECu;
    // 0x1eeaec: 0x10000002
    ctx->pc = 0x1EEAECu;
    {
        const bool branch_taken_0x1eeaec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEAF0u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1eeaec) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEAF4u;
label_1eeaf4:
    // 0x1eeaf4: 0xa7838b50
    ctx->pc = 0x1eeaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 3));
label_1eeaf8:
    // 0x1eeaf8: 0x97838bf4
    ctx->pc = 0x1eeaf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
label_1eeafc:
    // 0x1eeafc: 0x10600002
    ctx->pc = 0x1EEAFCu;
    {
        const bool branch_taken_0x1eeafc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eeafc) {
            ctx->pc = 0x1EEB08u;
            goto label_1eeb08;
        }
    }
    ctx->pc = 0x1EEB04u;
    // 0x1eeb04: 0xa7808b50
    ctx->pc = 0x1eeb04u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 0));
label_1eeb08:
    // 0x1eeb08: 0x7bbf0010
    ctx->pc = 0x1eeb08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeb0c: 0x7bb00000
    ctx->pc = 0x1eeb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eeb10: 0x3e00008
    ctx->pc = 0x1EEB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEB14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEA54u: goto label_1eea54;
            case 0x1EEA80u: goto label_1eea80;
            case 0x1EEAC0u: goto label_1eeac0;
            case 0x1EEAC4u: goto label_1eeac4;
            case 0x1EEACCu: goto label_1eeacc;
            case 0x1EEAF4u: goto label_1eeaf4;
            case 0x1EEAF8u: goto label_1eeaf8;
            case 0x1EEAFCu: goto label_1eeafc;
            case 0x1EEB08u: goto label_1eeb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEB18u;
}
