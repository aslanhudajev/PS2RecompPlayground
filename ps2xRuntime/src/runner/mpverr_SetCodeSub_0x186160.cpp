#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpverr_SetCodeSub
// Address: 0x186160 - 0x186190
void mpverr_SetCodeSub_0x186160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpverr_SetCodeSub");


    ctx->pc = 0x186160u;

label_186160:
    // 0x186160: 0x27bdfff0
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_186164:
    // 0x186164: 0xffbf0000
    ctx->pc = 0x186164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_186168:
    // 0x186168: 0x10a00006
label_18616c:
    if (ctx->pc == 0x18616Cu) {
        ctx->pc = 0x18616Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x186170u;
        goto label_186170;
    }
    ctx->pc = 0x186168u;
    {
        const bool branch_taken_0x186168 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18616Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        if (branch_taken_0x186168) {
            ctx->pc = 0x186184u;
            goto label_186184;
        }
    }
    ctx->pc = 0x186170u;
label_186170:
    // 0x186170: 0x8c820000
    ctx->pc = 0x186170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186174:
    // 0x186174: 0x10400004
label_186178:
    if (ctx->pc == 0x186178u) {
        ctx->pc = 0x186178u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18617Cu;
        goto label_18617c;
    }
    ctx->pc = 0x186174u;
    {
        const bool branch_taken_0x186174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186178u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x186174) {
            ctx->pc = 0x186188u;
            goto label_186188;
        }
    }
    ctx->pc = 0x18617Cu;
label_18617c:
    // 0x18617c: 0x40f809
label_186180:
    if (ctx->pc == 0x186180u) {
        ctx->pc = 0x186180u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x186184u;
        goto label_186184;
    }
    ctx->pc = 0x18617Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186184u);
        ctx->pc = 0x186180u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186160u: goto label_186160;
            case 0x186164u: goto label_186164;
            case 0x186168u: goto label_186168;
            case 0x18616Cu: goto label_18616c;
            case 0x186170u: goto label_186170;
            case 0x186174u: goto label_186174;
            case 0x186178u: goto label_186178;
            case 0x18617Cu: goto label_18617c;
            case 0x186180u: goto label_186180;
            case 0x186184u: goto label_186184;
            case 0x186188u: goto label_186188;
            case 0x18618Cu: goto label_18618c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186184u; }
            if (ctx->pc != 0x186184u) { return; }
        }
    }
    ctx->pc = 0x186184u;
label_186184:
    // 0x186184: 0xdfbf0000
    ctx->pc = 0x186184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186188:
    // 0x186188: 0x3e00008
label_18618c:
    if (ctx->pc == 0x18618Cu) {
        ctx->pc = 0x18618Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186190u;
        goto label_fallthrough_0x186188;
    }
    ctx->pc = 0x186188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18618Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186160u: goto label_186160;
            case 0x186164u: goto label_186164;
            case 0x186168u: goto label_186168;
            case 0x18616Cu: goto label_18616c;
            case 0x186170u: goto label_186170;
            case 0x186174u: goto label_186174;
            case 0x186178u: goto label_186178;
            case 0x18617Cu: goto label_18617c;
            case 0x186180u: goto label_186180;
            case 0x186184u: goto label_186184;
            case 0x186188u: goto label_186188;
            case 0x18618Cu: goto label_18618c;
            default: break;
        }
        return;
    }
label_fallthrough_0x186188:
    ctx->pc = 0x186190u;
}
