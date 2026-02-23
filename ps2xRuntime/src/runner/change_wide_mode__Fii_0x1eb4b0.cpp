#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: change_wide_mode__Fii
// Address: 0x1eb4b0 - 0x1eb560
void change_wide_mode__Fii_0x1eb4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("change_wide_mode__Fii");


    ctx->pc = 0x1eb4b0u;

    // 0x1eb4b0: 0x27bdfff0
    ctx->pc = 0x1eb4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb4b4: 0x7fbf0000
    ctx->pc = 0x1eb4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eb4b8: 0x24030004
    ctx->pc = 0x1eb4b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eb4bc: 0xaf838dcc
    ctx->pc = 0x1eb4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 3));
    // 0x1eb4c0: 0x24030001
    ctx->pc = 0x1eb4c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb4c4: 0xaf808dd4
    ctx->pc = 0x1eb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 0));
    // 0x1eb4c8: 0x14a00015
    ctx->pc = 0x1EB4C8u;
    {
        const bool branch_taken_0x1eb4c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB4CCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 3));
        if (branch_taken_0x1eb4c8) {
            ctx->pc = 0x1EB520u;
            goto label_1eb520;
        }
    }
    ctx->pc = 0x1EB4D0u;
    // 0x1eb4d0: 0x3c020050
    ctx->pc = 0x1eb4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb4d4: 0x43140
    ctx->pc = 0x1eb4d4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1eb4d8: 0x24420db0
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3504));
    // 0x1eb4dc: 0x52900
    ctx->pc = 0x1eb4dcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1eb4e0: 0x461021
    ctx->pc = 0x1eb4e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb4e4: 0x2403000a
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb4e8: 0xa21021
    ctx->pc = 0x1eb4e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1eb4ec: 0xac430000
    ctx->pc = 0x1eb4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1eb4f0: 0x3c020050
    ctx->pc = 0x1eb4f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb4f4: 0x24420db4
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3508));
    // 0x1eb4f8: 0x461021
    ctx->pc = 0x1eb4f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eb4fc: 0x2403003c
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eb500: 0xa21021
    ctx->pc = 0x1eb500u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1eb504: 0xc07b518
    ctx->pc = 0x1EB504u;
    SET_GPR_U32(ctx, 31, 0x1EB50Cu);
    ctx->pc = 0x1EB508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB50Cu; }
        else if (ctx->pc != 0x1EB50Cu) { ctx->pc = 0x1EB50Cu; }
    }
    if (ctx->pc != 0x1EB50Cu) { return; }
    ctx->pc = 0x1EB50Cu;
    // 0x1eb50c: 0x8c450000
    ctx->pc = 0x1eb50cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb510: 0xc07b660
    ctx->pc = 0x1EB510u;
    SET_GPR_U32(ctx, 31, 0x1EB518u);
    ctx->pc = 0x1EB514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB518u; }
        else if (ctx->pc != 0x1EB518u) { ctx->pc = 0x1EB518u; }
    }
    if (ctx->pc != 0x1EB518u) { return; }
    ctx->pc = 0x1EB518u;
    // 0x1eb518: 0x1000000e
    ctx->pc = 0x1EB518u;
    {
        const bool branch_taken_0x1eb518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB51Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb518) {
            ctx->pc = 0x1EB554u;
            goto label_1eb554;
        }
    }
    ctx->pc = 0x1EB520u;
label_1eb520:
    // 0x1eb520: 0x3c030050
    ctx->pc = 0x1eb520u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eb524: 0x43140
    ctx->pc = 0x1eb524u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1eb528: 0x24630db0
    ctx->pc = 0x1eb528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3504));
    // 0x1eb52c: 0x52100
    ctx->pc = 0x1eb52cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1eb530: 0x661821
    ctx->pc = 0x1eb530u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb534: 0x831821
    ctx->pc = 0x1eb534u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eb538: 0xac600000
    ctx->pc = 0x1eb538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eb53c: 0x3c030050
    ctx->pc = 0x1eb53cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eb540: 0x24630db4
    ctx->pc = 0x1eb540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3508));
    // 0x1eb544: 0x661821
    ctx->pc = 0x1eb544u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb548: 0x831821
    ctx->pc = 0x1eb548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eb54c: 0xac600000
    ctx->pc = 0x1eb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eb550: 0xaf808df8
    ctx->pc = 0x1eb550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1eb554:
    // 0x1eb554: 0x7bbf0000
    ctx->pc = 0x1eb554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb558: 0x3e00008
    ctx->pc = 0x1EB558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB55Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB520u: goto label_1eb520;
            case 0x1EB554u: goto label_1eb554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB560u;
}
