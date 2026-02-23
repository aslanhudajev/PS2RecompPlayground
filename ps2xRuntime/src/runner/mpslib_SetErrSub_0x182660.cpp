#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_SetErrSub
// Address: 0x182660 - 0x182690
void mpslib_SetErrSub_0x182660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_SetErrSub");


    ctx->pc = 0x182660u;

label_182660:
    // 0x182660: 0x27bdfff0
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_182664:
    // 0x182664: 0xffbf0000
    ctx->pc = 0x182664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182668:
    // 0x182668: 0x10a00006
label_18266c:
    if (ctx->pc == 0x18266Cu) {
        ctx->pc = 0x18266Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x182670u;
        goto label_182670;
    }
    ctx->pc = 0x182668u;
    {
        const bool branch_taken_0x182668 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18266Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        if (branch_taken_0x182668) {
            ctx->pc = 0x182684u;
            goto label_182684;
        }
    }
    ctx->pc = 0x182670u;
label_182670:
    // 0x182670: 0x8c820000
    ctx->pc = 0x182670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182674:
    // 0x182674: 0x10400004
label_182678:
    if (ctx->pc == 0x182678u) {
        ctx->pc = 0x182678u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18267Cu;
        goto label_18267c;
    }
    ctx->pc = 0x182674u;
    {
        const bool branch_taken_0x182674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182678u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x182674) {
            ctx->pc = 0x182688u;
            goto label_182688;
        }
    }
    ctx->pc = 0x18267Cu;
label_18267c:
    // 0x18267c: 0x40f809
label_182680:
    if (ctx->pc == 0x182680u) {
        ctx->pc = 0x182680u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x182684u;
        goto label_182684;
    }
    ctx->pc = 0x18267Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182684u);
        ctx->pc = 0x182680u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182660u: goto label_182660;
            case 0x182664u: goto label_182664;
            case 0x182668u: goto label_182668;
            case 0x18266Cu: goto label_18266c;
            case 0x182670u: goto label_182670;
            case 0x182674u: goto label_182674;
            case 0x182678u: goto label_182678;
            case 0x18267Cu: goto label_18267c;
            case 0x182680u: goto label_182680;
            case 0x182684u: goto label_182684;
            case 0x182688u: goto label_182688;
            case 0x18268Cu: goto label_18268c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182684u; }
            if (ctx->pc != 0x182684u) { return; }
        }
    }
    ctx->pc = 0x182684u;
label_182684:
    // 0x182684: 0xdfbf0000
    ctx->pc = 0x182684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182688:
    // 0x182688: 0x3e00008
label_18268c:
    if (ctx->pc == 0x18268Cu) {
        ctx->pc = 0x18268Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182690u;
        goto label_fallthrough_0x182688;
    }
    ctx->pc = 0x182688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18268Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182660u: goto label_182660;
            case 0x182664u: goto label_182664;
            case 0x182668u: goto label_182668;
            case 0x18266Cu: goto label_18266c;
            case 0x182670u: goto label_182670;
            case 0x182674u: goto label_182674;
            case 0x182678u: goto label_182678;
            case 0x18267Cu: goto label_18267c;
            case 0x182680u: goto label_182680;
            case 0x182684u: goto label_182684;
            case 0x182688u: goto label_182688;
            case 0x18268Cu: goto label_18268c;
            default: break;
        }
        return;
    }
label_fallthrough_0x182688:
    ctx->pc = 0x182690u;
}
