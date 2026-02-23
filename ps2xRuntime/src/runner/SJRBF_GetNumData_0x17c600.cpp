#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_GetNumData
// Address: 0x17c600 - 0x17c64c
void SJRBF_GetNumData_0x17c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_GetNumData");


    ctx->pc = 0x17c600u;

label_17c600:
    // 0x17c600: 0x27bdfff0
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c604:
    // 0x17c604: 0x24020001
    ctx->pc = 0x17c604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17c608:
    // 0x17c608: 0x14a20003
label_17c60c:
    if (ctx->pc == 0x17C60Cu) {
        ctx->pc = 0x17C60Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17C610u;
        goto label_17c610;
    }
    ctx->pc = 0x17C608u;
    {
        const bool branch_taken_0x17c608 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x17C60Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17c608) {
            ctx->pc = 0x17C618u;
            goto label_17c618;
        }
    }
    ctx->pc = 0x17C610u;
label_17c610:
    // 0x17c610: 0x1000000b
label_17c614:
    if (ctx->pc == 0x17C614u) {
        ctx->pc = 0x17C614u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x17C618u;
        goto label_17c618;
    }
    ctx->pc = 0x17C610u;
    {
        const bool branch_taken_0x17c610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C614u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x17c610) {
            ctx->pc = 0x17C640u;
            goto label_17c640;
        }
    }
    ctx->pc = 0x17C618u;
label_17c618:
    // 0x17c618: 0x54a00003
label_17c61c:
    if (ctx->pc == 0x17C61Cu) {
        ctx->pc = 0x17C61Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = 0x17C620u;
        goto label_17c620;
    }
    ctx->pc = 0x17C618u;
    {
        const bool branch_taken_0x17c618 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x17c618) {
            ctx->pc = 0x17C61Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->pc = 0x17C628u;
            goto label_17c628;
        }
    }
    ctx->pc = 0x17C620u;
label_17c620:
    // 0x17c620: 0x10000007
label_17c624:
    if (ctx->pc == 0x17C624u) {
        ctx->pc = 0x17C624u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x17C628u;
        goto label_17c628;
    }
    ctx->pc = 0x17C620u;
    {
        const bool branch_taken_0x17c620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C624u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x17c620) {
            ctx->pc = 0x17C640u;
            goto label_17c640;
        }
    }
    ctx->pc = 0x17C628u;
label_17c628:
    // 0x17c628: 0x50400005
label_17c62c:
    if (ctx->pc == 0x17C62Cu) {
        ctx->pc = 0x17C62Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C630u;
        goto label_17c630;
    }
    ctx->pc = 0x17C628u;
    {
        const bool branch_taken_0x17c628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c628) {
            ctx->pc = 0x17C62Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17C640u;
            goto label_17c640;
        }
    }
    ctx->pc = 0x17C630u;
label_17c630:
    // 0x17c630: 0x8c84002c
    ctx->pc = 0x17c630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_17c634:
    // 0x17c634: 0x40f809
label_17c638:
    if (ctx->pc == 0x17C638u) {
        ctx->pc = 0x17C638u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C63Cu;
        goto label_17c63c;
    }
    ctx->pc = 0x17C634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C63Cu);
        ctx->pc = 0x17C638u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C600u: goto label_17c600;
            case 0x17C604u: goto label_17c604;
            case 0x17C608u: goto label_17c608;
            case 0x17C60Cu: goto label_17c60c;
            case 0x17C610u: goto label_17c610;
            case 0x17C614u: goto label_17c614;
            case 0x17C618u: goto label_17c618;
            case 0x17C61Cu: goto label_17c61c;
            case 0x17C620u: goto label_17c620;
            case 0x17C624u: goto label_17c624;
            case 0x17C628u: goto label_17c628;
            case 0x17C62Cu: goto label_17c62c;
            case 0x17C630u: goto label_17c630;
            case 0x17C634u: goto label_17c634;
            case 0x17C638u: goto label_17c638;
            case 0x17C63Cu: goto label_17c63c;
            case 0x17C640u: goto label_17c640;
            case 0x17C644u: goto label_17c644;
            case 0x17C648u: goto label_17c648;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C63Cu; }
            if (ctx->pc != 0x17C63Cu) { return; }
        }
    }
    ctx->pc = 0x17C63Cu;
label_17c63c:
    // 0x17c63c: 0x102d
    ctx->pc = 0x17c63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c640:
    // 0x17c640: 0xdfbf0000
    ctx->pc = 0x17c640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c644:
    // 0x17c644: 0x3e00008
label_17c648:
    if (ctx->pc == 0x17C648u) {
        ctx->pc = 0x17C648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17C64Cu;
        goto label_fallthrough_0x17c644;
    }
    ctx->pc = 0x17C644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C600u: goto label_17c600;
            case 0x17C604u: goto label_17c604;
            case 0x17C608u: goto label_17c608;
            case 0x17C60Cu: goto label_17c60c;
            case 0x17C610u: goto label_17c610;
            case 0x17C614u: goto label_17c614;
            case 0x17C618u: goto label_17c618;
            case 0x17C61Cu: goto label_17c61c;
            case 0x17C620u: goto label_17c620;
            case 0x17C624u: goto label_17c624;
            case 0x17C628u: goto label_17c628;
            case 0x17C62Cu: goto label_17c62c;
            case 0x17C630u: goto label_17c630;
            case 0x17C634u: goto label_17c634;
            case 0x17C638u: goto label_17c638;
            case 0x17C63Cu: goto label_17c63c;
            case 0x17C640u: goto label_17c640;
            case 0x17C644u: goto label_17c644;
            case 0x17C648u: goto label_17c648;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c644:
    ctx->pc = 0x17C64Cu;
}
