#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdPause
// Address: 0x18d4b8 - 0x18d588
void mwSfdPause_0x18d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdPause");


    ctx->pc = 0x18d4b8u;

    // 0x18d4b8: 0x27bdffa0
    ctx->pc = 0x18d4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18d4bc: 0x24020001
    ctx->pc = 0x18d4bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d4c0: 0xffb20030
    ctx->pc = 0x18d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18d4c4: 0xffb10020
    ctx->pc = 0x18d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18d4c8: 0x80902d
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4cc: 0xffbf0050
    ctx->pc = 0x18d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18d4d0: 0xa0882d
    ctx->pc = 0x18d4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4d4: 0xffb30040
    ctx->pc = 0x18d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18d4d8: 0xffb00010
    ctx->pc = 0x18d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18d4dc: 0x8e50000c
    ctx->pc = 0x18d4dcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18d4e0: 0x1602000f
    ctx->pc = 0x18D4E0u;
    {
        const bool branch_taken_0x18d4e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x18D4E4u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 48)));
        if (branch_taken_0x18d4e0) {
            ctx->pc = 0x18D520u;
            goto label_18d520;
        }
    }
    ctx->pc = 0x18D4E8u;
    // 0x18d4e8: 0x260202d
    ctx->pc = 0x18d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4ec: 0x24050006
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d4f0: 0xc06749e
    ctx->pc = 0x18D4F0u;
    SET_GPR_U32(ctx, 31, 0x18D4F8u);
    ctx->pc = 0x18D4F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D278u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetCond_0x19d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4F8u; }
        else if (ctx->pc != 0x18D4F8u) { ctx->pc = 0x18D4F8u; }
    }
    if (ctx->pc != 0x18D4F8u) { return; }
    ctx->pc = 0x18D4F8u;
    // 0x18d4f8: 0x14400007
    ctx->pc = 0x18D4F8u;
    {
        const bool branch_taken_0x18d4f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D4FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18d4f8) {
            ctx->pc = 0x18D518u;
            goto label_18d518;
        }
    }
    ctx->pc = 0x18D500u;
    // 0x18d500: 0x14500008
    ctx->pc = 0x18D500u;
    {
        const bool branch_taken_0x18d500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x18D504u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d500) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D508u;
    // 0x18d508: 0xc063762
    ctx->pc = 0x18D508u;
    SET_GPR_U32(ctx, 31, 0x18D510u);
    ctx->pc = 0x18DD88u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwlSfdSleepDecSvr_0x18dd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D510u; }
        else if (ctx->pc != 0x18D510u) { ctx->pc = 0x18D510u; }
    }
    if (ctx->pc != 0x18D510u) { return; }
    ctx->pc = 0x18D510u;
    // 0x18d510: 0x10000004
    ctx->pc = 0x18D510u;
    {
        const bool branch_taken_0x18d510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D514u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d510) {
            ctx->pc = 0x18D524u;
            goto label_18d524;
        }
    }
    ctx->pc = 0x18D518u;
label_18d518:
    // 0x18d518: 0xc063762
    ctx->pc = 0x18D518u;
    SET_GPR_U32(ctx, 31, 0x18D520u);
    ctx->pc = 0x18DD88u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwlSfdSleepDecSvr_0x18dd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D520u; }
        else if (ctx->pc != 0x18D520u) { ctx->pc = 0x18D520u; }
    }
    if (ctx->pc != 0x18D520u) { return; }
    ctx->pc = 0x18D520u;
label_18d520:
    // 0x18d520: 0x260202d
    ctx->pc = 0x18d520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d524:
    // 0x18d524: 0xc066a0e
    ctx->pc = 0x18D524u;
    SET_GPR_U32(ctx, 31, 0x18D52Cu);
    ctx->pc = 0x18D528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A838u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Pause_0x19a838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D52Cu; }
        else if (ctx->pc != 0x18D52Cu) { ctx->pc = 0x18D52Cu; }
    }
    if (ctx->pc != 0x18D52Cu) { return; }
    ctx->pc = 0x18D52Cu;
    // 0x18d52c: 0x5040000f
    ctx->pc = 0x18D52Cu;
    {
        const bool branch_taken_0x18d52c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d52c) {
            ctx->pc = 0x18D530u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 126), (uint8_t)GPR_U32(ctx, 17));
            ctx->pc = 0x18D56Cu;
            goto label_18d56c;
        }
    }
    ctx->pc = 0x18D534u;
    // 0x18d534: 0xc0633b4
    ctx->pc = 0x18D534u;
    SET_GPR_U32(ctx, 31, 0x18D53Cu);
    ctx->pc = 0x18D538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966986));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D53Cu; }
        else if (ctx->pc != 0x18D53Cu) { ctx->pc = 0x18D53Cu; }
    }
    if (ctx->pc != 0x18D53Cu) { return; }
    ctx->pc = 0x18D53Cu;
    // 0x18d53c: 0x3c03002c
    ctx->pc = 0x18d53cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x18d540: 0x24020001
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d544: 0x16220004
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x18D548u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294954552));
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D558u;
            goto label_18d558;
        }
    }
    ctx->pc = 0x18D54Cu;
    // 0x18d54c: 0x3c02002c
    ctx->pc = 0x18d54cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18d550: 0x10000003
    ctx->pc = 0x18D550u;
    {
        const bool branch_taken_0x18d550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D554u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294954592));
        if (branch_taken_0x18d550) {
            ctx->pc = 0x18D560u;
            goto label_18d560;
        }
    }
    ctx->pc = 0x18D558u;
label_18d558:
    // 0x18d558: 0x3c02002c
    ctx->pc = 0x18d558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18d55c: 0x2445ce68
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294954600));
label_18d560:
    // 0x18d560: 0xc063dda
    ctx->pc = 0x18D560u;
    SET_GPR_U32(ctx, 31, 0x18D568u);
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D568u; }
        else if (ctx->pc != 0x18D568u) { ctx->pc = 0x18D568u; }
    }
    if (ctx->pc != 0x18D568u) { return; }
    ctx->pc = 0x18D568u;
    // 0x18d568: 0xa251007e
    ctx->pc = 0x18d568u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 126), (uint8_t)GPR_U32(ctx, 17));
label_18d56c:
    // 0x18d56c: 0xdfbf0050
    ctx->pc = 0x18d56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d570: 0xdfb30040
    ctx->pc = 0x18d570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d574: 0xdfb20030
    ctx->pc = 0x18d574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d578: 0xdfb10020
    ctx->pc = 0x18d578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d57c: 0xdfb00010
    ctx->pc = 0x18d57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d580: 0x3e00008
    ctx->pc = 0x18D580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D518u: goto label_18d518;
            case 0x18D520u: goto label_18d520;
            case 0x18D524u: goto label_18d524;
            case 0x18D558u: goto label_18d558;
            case 0x18D560u: goto label_18d560;
            case 0x18D56Cu: goto label_18d56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D588u;
}
