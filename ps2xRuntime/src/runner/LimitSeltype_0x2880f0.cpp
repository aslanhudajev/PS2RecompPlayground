#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitSeltype
// Address: 0x2880f0 - 0x288164
void LimitSeltype_0x2880f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2880f0u;

    // 0x2880f0: 0x3c020031
    ctx->pc = 0x2880f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2880f4: 0x8c42f184
    ctx->pc = 0x2880f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2880f8: 0x10400008
    ctx->pc = 0x2880F8u;
    {
        const bool branch_taken_0x2880f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2880FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
        if (branch_taken_0x2880f8) {
            ctx->pc = 0x28811Cu;
            goto label_28811c;
        }
    }
    ctx->pc = 0x288100u;
    // 0x288100: 0x10400003
    ctx->pc = 0x288100u;
    {
        const bool branch_taken_0x288100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x288104u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x288100) {
            ctx->pc = 0x288110u;
            goto label_288110;
        }
    }
    ctx->pc = 0x288108u;
    // 0x288108: 0x10000014
    ctx->pc = 0x288108u;
    {
        const bool branch_taken_0x288108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28810Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x288108) {
            ctx->pc = 0x28815Cu;
            goto label_28815c;
        }
    }
    ctx->pc = 0x288110u;
label_288110:
    // 0x288110: 0x24020004
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x288114: 0x10000011
    ctx->pc = 0x288114u;
    {
        const bool branch_taken_0x288114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x288118u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x288114) {
            ctx->pc = 0x28815Cu;
            goto label_28815c;
        }
    }
    ctx->pc = 0x28811Cu;
label_28811c:
    // 0x28811c: 0x24070010
    ctx->pc = 0x28811cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x288120: 0x2408ffff
    ctx->pc = 0x288120u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288124: 0x28a20011
    ctx->pc = 0x288124u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
label_288128:
    // 0x288128: 0x2280a
    ctx->pc = 0x288128u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x28812c: 0x105102a
    ctx->pc = 0x28812cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x288130: 0xe2280a
    ctx->pc = 0x288130u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
    // 0x288134: 0x14a70007
    ctx->pc = 0x288134u;
    {
        const bool branch_taken_0x288134 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 7));
        ctx->pc = 0x288138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x288134) {
            ctx->pc = 0x288154u;
            goto label_288154;
        }
    }
    ctx->pc = 0x28813Cu;
    // 0x28813c: 0x948209a8
    ctx->pc = 0x28813cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2472)));
    // 0x288140: 0x30420100
    ctx->pc = 0x288140u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x288144: 0x14400003
    ctx->pc = 0x288144u;
    {
        const bool branch_taken_0x288144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x288144) {
            ctx->pc = 0x288154u;
            goto label_288154;
        }
    }
    ctx->pc = 0x28814Cu;
    // 0x28814c: 0x24c50010
    ctx->pc = 0x28814cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x288150: 0x182d
    ctx->pc = 0x288150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288154:
    // 0x288154: 0x1060fff4
    ctx->pc = 0x288154u;
    {
        const bool branch_taken_0x288154 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x288158u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
        if (branch_taken_0x288154) {
            ctx->pc = 0x288128u;
            goto label_288128;
        }
    }
    ctx->pc = 0x28815Cu;
label_28815c:
    // 0x28815c: 0x3e00008
    ctx->pc = 0x28815Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288160u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x288110u: goto label_288110;
            case 0x28811Cu: goto label_28811c;
            case 0x288128u: goto label_288128;
            case 0x288154u: goto label_288154;
            case 0x28815Cu: goto label_28815c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288164u;
}
