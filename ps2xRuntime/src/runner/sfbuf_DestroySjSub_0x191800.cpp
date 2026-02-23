#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_DestroySjSub
// Address: 0x191800 - 0x19185c
void sfbuf_DestroySjSub_0x191800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_DestroySjSub");


    ctx->pc = 0x191800u;

label_191800:
    // 0x191800: 0x24020388
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
label_191804:
    // 0x191804: 0x27bdffe0
    ctx->pc = 0x191804u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_191808:
    // 0x191808: 0xa22818
    ctx->pc = 0x191808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_19180c:
    // 0x19180c: 0xffb00000
    ctx->pc = 0x19180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191810:
    // 0x191810: 0xffbf0010
    ctx->pc = 0x191810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_191814:
    // 0x191814: 0x24840d34
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3380));
label_191818:
    // 0x191818: 0x24030005
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_19181c:
    // 0x19181c: 0x852021
    ctx->pc = 0x19181cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_191820:
    // 0x191820: 0x8c820000
    ctx->pc = 0x191820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_191824:
    // 0x191824: 0x14430009
label_191828:
    if (ctx->pc == 0x191828u) {
        ctx->pc = 0x191828u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x19182Cu;
        goto label_19182c;
    }
    ctx->pc = 0x191824u;
    {
        const bool branch_taken_0x191824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x191828u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x191824) {
            ctx->pc = 0x19184Cu;
            goto label_19184c;
        }
    }
    ctx->pc = 0x19182Cu;
label_19182c:
    // 0x19182c: 0x8e040004
    ctx->pc = 0x19182cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191830:
    // 0x191830: 0x10800007
label_191834:
    if (ctx->pc == 0x191834u) {
        ctx->pc = 0x191834u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x191838u;
        goto label_191838;
    }
    ctx->pc = 0x191830u;
    {
        const bool branch_taken_0x191830 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x191834u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x191830) {
            ctx->pc = 0x191850u;
            goto label_191850;
        }
    }
    ctx->pc = 0x191838u;
label_191838:
    // 0x191838: 0x8c830000
    ctx->pc = 0x191838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19183c:
    // 0x19183c: 0x8c62000c
    ctx->pc = 0x19183cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_191840:
    // 0x191840: 0x40f809
label_191844:
    if (ctx->pc == 0x191844u) {
        ctx->pc = 0x191848u;
        goto label_191848;
    }
    ctx->pc = 0x191840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191848u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191800u: goto label_191800;
            case 0x191804u: goto label_191804;
            case 0x191808u: goto label_191808;
            case 0x19180Cu: goto label_19180c;
            case 0x191810u: goto label_191810;
            case 0x191814u: goto label_191814;
            case 0x191818u: goto label_191818;
            case 0x19181Cu: goto label_19181c;
            case 0x191820u: goto label_191820;
            case 0x191824u: goto label_191824;
            case 0x191828u: goto label_191828;
            case 0x19182Cu: goto label_19182c;
            case 0x191830u: goto label_191830;
            case 0x191834u: goto label_191834;
            case 0x191838u: goto label_191838;
            case 0x19183Cu: goto label_19183c;
            case 0x191840u: goto label_191840;
            case 0x191844u: goto label_191844;
            case 0x191848u: goto label_191848;
            case 0x19184Cu: goto label_19184c;
            case 0x191850u: goto label_191850;
            case 0x191854u: goto label_191854;
            case 0x191858u: goto label_191858;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191848u; }
            if (ctx->pc != 0x191848u) { return; }
        }
    }
    ctx->pc = 0x191848u;
label_191848:
    // 0x191848: 0xae000004
    ctx->pc = 0x191848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19184c:
    // 0x19184c: 0xdfbf0010
    ctx->pc = 0x19184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_191850:
    // 0x191850: 0xdfb00000
    ctx->pc = 0x191850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191854:
    // 0x191854: 0x3e00008
label_191858:
    if (ctx->pc == 0x191858u) {
        ctx->pc = 0x191858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19185Cu;
        goto label_fallthrough_0x191854;
    }
    ctx->pc = 0x191854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191800u: goto label_191800;
            case 0x191804u: goto label_191804;
            case 0x191808u: goto label_191808;
            case 0x19180Cu: goto label_19180c;
            case 0x191810u: goto label_191810;
            case 0x191814u: goto label_191814;
            case 0x191818u: goto label_191818;
            case 0x19181Cu: goto label_19181c;
            case 0x191820u: goto label_191820;
            case 0x191824u: goto label_191824;
            case 0x191828u: goto label_191828;
            case 0x19182Cu: goto label_19182c;
            case 0x191830u: goto label_191830;
            case 0x191834u: goto label_191834;
            case 0x191838u: goto label_191838;
            case 0x19183Cu: goto label_19183c;
            case 0x191840u: goto label_191840;
            case 0x191844u: goto label_191844;
            case 0x191848u: goto label_191848;
            case 0x19184Cu: goto label_19184c;
            case 0x191850u: goto label_191850;
            case 0x191854u: goto label_191854;
            case 0x191858u: goto label_191858;
            default: break;
        }
        return;
    }
label_fallthrough_0x191854:
    ctx->pc = 0x19185Cu;
}
