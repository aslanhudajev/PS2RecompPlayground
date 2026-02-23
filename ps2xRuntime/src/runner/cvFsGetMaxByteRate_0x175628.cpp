#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetMaxByteRate
// Address: 0x175628 - 0x175680
void cvFsGetMaxByteRate_0x175628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetMaxByteRate");


    ctx->pc = 0x175628u;

label_175628:
    // 0x175628: 0x27bdfff0
    ctx->pc = 0x175628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17562c:
    // 0x17562c: 0x14800006
label_175630:
    if (ctx->pc == 0x175630u) {
        ctx->pc = 0x175630u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x175634u;
        goto label_175634;
    }
    ctx->pc = 0x17562Cu;
    {
        const bool branch_taken_0x17562c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175630u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17562c) {
            ctx->pc = 0x175648u;
            goto label_175648;
        }
    }
    ctx->pc = 0x175634u;
label_175634:
    // 0x175634: 0x3c04002c
    ctx->pc = 0x175634u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175638:
    // 0x175638: 0xc05d076
label_17563c:
    if (ctx->pc == 0x17563Cu) {
        ctx->pc = 0x17563Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945472));
        ctx->pc = 0x175640u;
        goto label_175640;
    }
    ctx->pc = 0x175638u;
    SET_GPR_U32(ctx, 31, 0x175640u);
    ctx->pc = 0x17563Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945472));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175640u; }
        else if (ctx->pc != 0x175640u) { ctx->pc = 0x175640u; }
    }
    if (ctx->pc != 0x175640u) { return; }
    ctx->pc = 0x175640u;
label_175640:
    // 0x175640: 0x1000000c
label_175644:
    if (ctx->pc == 0x175644u) {
        ctx->pc = 0x175644u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175648u;
        goto label_175648;
    }
    ctx->pc = 0x175640u;
    {
        const bool branch_taken_0x175640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175644u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175640) {
            ctx->pc = 0x175674u;
            goto label_175674;
        }
    }
    ctx->pc = 0x175648u;
label_175648:
    // 0x175648: 0x8c820000
    ctx->pc = 0x175648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17564c:
    // 0x17564c: 0x8c42004c
    ctx->pc = 0x17564cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_175650:
    // 0x175650: 0x50400005
label_175654:
    if (ctx->pc == 0x175654u) {
        ctx->pc = 0x175654u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175658u;
        goto label_175658;
    }
    ctx->pc = 0x175650u;
    {
        const bool branch_taken_0x175650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x175650) {
            ctx->pc = 0x175654u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x175668u;
            goto label_175668;
        }
    }
    ctx->pc = 0x175658u;
label_175658:
    // 0x175658: 0x40f809
label_17565c:
    if (ctx->pc == 0x17565Cu) {
        ctx->pc = 0x17565Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x175660u;
        goto label_175660;
    }
    ctx->pc = 0x175658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175660u);
        ctx->pc = 0x17565Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175628u: goto label_175628;
            case 0x17562Cu: goto label_17562c;
            case 0x175630u: goto label_175630;
            case 0x175634u: goto label_175634;
            case 0x175638u: goto label_175638;
            case 0x17563Cu: goto label_17563c;
            case 0x175640u: goto label_175640;
            case 0x175644u: goto label_175644;
            case 0x175648u: goto label_175648;
            case 0x17564Cu: goto label_17564c;
            case 0x175650u: goto label_175650;
            case 0x175654u: goto label_175654;
            case 0x175658u: goto label_175658;
            case 0x17565Cu: goto label_17565c;
            case 0x175660u: goto label_175660;
            case 0x175664u: goto label_175664;
            case 0x175668u: goto label_175668;
            case 0x17566Cu: goto label_17566c;
            case 0x175670u: goto label_175670;
            case 0x175674u: goto label_175674;
            case 0x175678u: goto label_175678;
            case 0x17567Cu: goto label_17567c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175660u; }
            if (ctx->pc != 0x175660u) { return; }
        }
    }
    ctx->pc = 0x175660u;
label_175660:
    // 0x175660: 0x10000005
label_175664:
    if (ctx->pc == 0x175664u) {
        ctx->pc = 0x175664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x175668u;
        goto label_175668;
    }
    ctx->pc = 0x175660u;
    {
        const bool branch_taken_0x175660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x175660) {
            ctx->pc = 0x175678u;
            goto label_175678;
        }
    }
    ctx->pc = 0x175668u;
label_175668:
    // 0x175668: 0xc05d076
label_17566c:
    if (ctx->pc == 0x17566Cu) {
        ctx->pc = 0x17566Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945512));
        ctx->pc = 0x175670u;
        goto label_175670;
    }
    ctx->pc = 0x175668u;
    SET_GPR_U32(ctx, 31, 0x175670u);
    ctx->pc = 0x17566Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175670u; }
        else if (ctx->pc != 0x175670u) { ctx->pc = 0x175670u; }
    }
    if (ctx->pc != 0x175670u) { return; }
    ctx->pc = 0x175670u;
label_175670:
    // 0x175670: 0x102d
    ctx->pc = 0x175670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175674:
    // 0x175674: 0xdfbf0000
    ctx->pc = 0x175674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175678:
    // 0x175678: 0x3e00008
label_17567c:
    if (ctx->pc == 0x17567Cu) {
        ctx->pc = 0x17567Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x175680u;
        goto label_fallthrough_0x175678;
    }
    ctx->pc = 0x175678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17567Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175628u: goto label_175628;
            case 0x17562Cu: goto label_17562c;
            case 0x175630u: goto label_175630;
            case 0x175634u: goto label_175634;
            case 0x175638u: goto label_175638;
            case 0x17563Cu: goto label_17563c;
            case 0x175640u: goto label_175640;
            case 0x175644u: goto label_175644;
            case 0x175648u: goto label_175648;
            case 0x17564Cu: goto label_17564c;
            case 0x175650u: goto label_175650;
            case 0x175654u: goto label_175654;
            case 0x175658u: goto label_175658;
            case 0x17565Cu: goto label_17565c;
            case 0x175660u: goto label_175660;
            case 0x175664u: goto label_175664;
            case 0x175668u: goto label_175668;
            case 0x17566Cu: goto label_17566c;
            case 0x175670u: goto label_175670;
            case 0x175674u: goto label_175674;
            case 0x175678u: goto label_175678;
            case 0x17567Cu: goto label_17567c;
            default: break;
        }
        return;
    }
label_fallthrough_0x175678:
    ctx->pc = 0x175680u;
}
