#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_BpicSkipped
// Address: 0x184810 - 0x184888
void MPVCMC_BpicSkipped_0x184810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_BpicSkipped");


    ctx->pc = 0x184810u;

label_184810:
    // 0x184810: 0x27bdffb0
    ctx->pc = 0x184810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_184814:
    // 0x184814: 0xffb10010
    ctx->pc = 0x184814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_184818:
    // 0x184818: 0xffb00000
    ctx->pc = 0x184818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18481c:
    // 0x18481c: 0x80882d
    ctx->pc = 0x18481cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184820:
    // 0x184820: 0xffbf0040
    ctx->pc = 0x184820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_184824:
    // 0x184824: 0xffb30030
    ctx->pc = 0x184824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_184828:
    // 0x184828: 0xffb20020
    ctx->pc = 0x184828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18482c:
    // 0x18482c: 0x8e32029c
    ctx->pc = 0x18482cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_184830:
    // 0x184830: 0x8e330240
    ctx->pc = 0x184830u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_184834:
    // 0x184834: 0x2452823
    ctx->pc = 0x184834u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_184838:
    // 0x184838: 0x24b00001
    ctx->pc = 0x184838u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 1));
label_18483c:
    // 0x18483c: 0x212102a
    ctx->pc = 0x18483cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_184840:
    // 0x184840: 0x10400009
label_184844:
    if (ctx->pc == 0x184844u) {
        ctx->pc = 0x184844u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
        ctx->pc = 0x184848u;
        goto label_184848;
    }
    ctx->pc = 0x184840u;
    {
        const bool branch_taken_0x184840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184844u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
        if (branch_taken_0x184840) {
            ctx->pc = 0x184868u;
            goto label_184868;
        }
    }
    ctx->pc = 0x184848u;
label_184848:
    // 0x184848: 0xae30029c
    ctx->pc = 0x184848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
label_18484c:
    // 0x18484c: 0x0
    ctx->pc = 0x18484cu;
    // NOP
label_184850:
    // 0x184850: 0x220202d
    ctx->pc = 0x184850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184854:
    // 0x184854: 0x260f809
label_184858:
    if (ctx->pc == 0x184858u) {
        ctx->pc = 0x184858u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x18485Cu;
        goto label_18485c;
    }
    ctx->pc = 0x184854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x18485Cu);
        ctx->pc = 0x184858u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184810u: goto label_184810;
            case 0x184814u: goto label_184814;
            case 0x184818u: goto label_184818;
            case 0x18481Cu: goto label_18481c;
            case 0x184820u: goto label_184820;
            case 0x184824u: goto label_184824;
            case 0x184828u: goto label_184828;
            case 0x18482Cu: goto label_18482c;
            case 0x184830u: goto label_184830;
            case 0x184834u: goto label_184834;
            case 0x184838u: goto label_184838;
            case 0x18483Cu: goto label_18483c;
            case 0x184840u: goto label_184840;
            case 0x184844u: goto label_184844;
            case 0x184848u: goto label_184848;
            case 0x18484Cu: goto label_18484c;
            case 0x184850u: goto label_184850;
            case 0x184854u: goto label_184854;
            case 0x184858u: goto label_184858;
            case 0x18485Cu: goto label_18485c;
            case 0x184860u: goto label_184860;
            case 0x184864u: goto label_184864;
            case 0x184868u: goto label_184868;
            case 0x18486Cu: goto label_18486c;
            case 0x184870u: goto label_184870;
            case 0x184874u: goto label_184874;
            case 0x184878u: goto label_184878;
            case 0x18487Cu: goto label_18487c;
            case 0x184880u: goto label_184880;
            case 0x184884u: goto label_184884;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18485Cu; }
            if (ctx->pc != 0x18485Cu) { return; }
        }
    }
    ctx->pc = 0x18485Cu;
label_18485c:
    // 0x18485c: 0x212102a
    ctx->pc = 0x18485cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_184860:
    // 0x184860: 0x5440fffb
label_184864:
    if (ctx->pc == 0x184864u) {
        ctx->pc = 0x184864u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
        ctx->pc = 0x184868u;
        goto label_184868;
    }
    ctx->pc = 0x184860u;
    {
        const bool branch_taken_0x184860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184860) {
            ctx->pc = 0x184864u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
            ctx->pc = 0x184850u;
            goto label_184850;
        }
    }
    ctx->pc = 0x184868u;
label_184868:
    // 0x184868: 0xae32029c
    ctx->pc = 0x184868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 18));
label_18486c:
    // 0x18486c: 0xdfbf0040
    ctx->pc = 0x18486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184870:
    // 0x184870: 0xdfb30030
    ctx->pc = 0x184870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_184874:
    // 0x184874: 0xdfb20020
    ctx->pc = 0x184874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184878:
    // 0x184878: 0xdfb10010
    ctx->pc = 0x184878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18487c:
    // 0x18487c: 0xdfb00000
    ctx->pc = 0x18487cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184880:
    // 0x184880: 0x3e00008
label_184884:
    if (ctx->pc == 0x184884u) {
        ctx->pc = 0x184884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x184888u;
        goto label_fallthrough_0x184880;
    }
    ctx->pc = 0x184880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184810u: goto label_184810;
            case 0x184814u: goto label_184814;
            case 0x184818u: goto label_184818;
            case 0x18481Cu: goto label_18481c;
            case 0x184820u: goto label_184820;
            case 0x184824u: goto label_184824;
            case 0x184828u: goto label_184828;
            case 0x18482Cu: goto label_18482c;
            case 0x184830u: goto label_184830;
            case 0x184834u: goto label_184834;
            case 0x184838u: goto label_184838;
            case 0x18483Cu: goto label_18483c;
            case 0x184840u: goto label_184840;
            case 0x184844u: goto label_184844;
            case 0x184848u: goto label_184848;
            case 0x18484Cu: goto label_18484c;
            case 0x184850u: goto label_184850;
            case 0x184854u: goto label_184854;
            case 0x184858u: goto label_184858;
            case 0x18485Cu: goto label_18485c;
            case 0x184860u: goto label_184860;
            case 0x184864u: goto label_184864;
            case 0x184868u: goto label_184868;
            case 0x18486Cu: goto label_18486c;
            case 0x184870u: goto label_184870;
            case 0x184874u: goto label_184874;
            case 0x184878u: goto label_184878;
            case 0x18487Cu: goto label_18487c;
            case 0x184880u: goto label_184880;
            case 0x184884u: goto label_184884;
            default: break;
        }
        return;
    }
label_fallthrough_0x184880:
    ctx->pc = 0x184888u;
}
