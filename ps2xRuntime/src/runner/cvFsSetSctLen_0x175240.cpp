#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsSetSctLen
// Address: 0x175240 - 0x175294
void cvFsSetSctLen_0x175240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsSetSctLen");


    ctx->pc = 0x175240u;

label_175240:
    // 0x175240: 0x27bdfff0
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_175244:
    // 0x175244: 0x14800006
label_175248:
    if (ctx->pc == 0x175248u) {
        ctx->pc = 0x175248u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17524Cu;
        goto label_17524c;
    }
    ctx->pc = 0x175244u;
    {
        const bool branch_taken_0x175244 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175248u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x175244) {
            ctx->pc = 0x175260u;
            goto label_175260;
        }
    }
    ctx->pc = 0x17524Cu;
label_17524c:
    // 0x17524c: 0x3c04002c
    ctx->pc = 0x17524cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175250:
    // 0x175250: 0xdfbf0000
    ctx->pc = 0x175250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175254:
    // 0x175254: 0x2484a910
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945040));
label_175258:
    // 0x175258: 0x805d076
label_17525c:
    if (ctx->pc == 0x17525Cu) {
        ctx->pc = 0x17525Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x175260u;
        goto label_175260;
    }
    ctx->pc = 0x175258u;
    ctx->pc = 0x17525Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x175260u;
label_175260:
    // 0x175260: 0x8c820000
    ctx->pc = 0x175260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175264:
    // 0x175264: 0x8c420034
    ctx->pc = 0x175264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_175268:
    // 0x175268: 0x14400005
label_17526c:
    if (ctx->pc == 0x17526Cu) {
        ctx->pc = 0x17526Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x175270u;
        goto label_175270;
    }
    ctx->pc = 0x175268u;
    {
        const bool branch_taken_0x175268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17526Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x175268) {
            ctx->pc = 0x175280u;
            goto label_175280;
        }
    }
    ctx->pc = 0x175270u;
label_175270:
    // 0x175270: 0x3c04002c
    ctx->pc = 0x175270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175274:
    // 0x175274: 0x2484a930
    ctx->pc = 0x175274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945072));
label_175278:
    // 0x175278: 0x805d076
label_17527c:
    if (ctx->pc == 0x17527Cu) {
        ctx->pc = 0x17527Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x175280u;
        goto label_175280;
    }
    ctx->pc = 0x175278u;
    ctx->pc = 0x17527Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x175280u;
label_175280:
    // 0x175280: 0x40f809
label_175284:
    if (ctx->pc == 0x175284u) {
        ctx->pc = 0x175284u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x175288u;
        goto label_175288;
    }
    ctx->pc = 0x175280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175288u);
        ctx->pc = 0x175284u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175240u: goto label_175240;
            case 0x175244u: goto label_175244;
            case 0x175248u: goto label_175248;
            case 0x17524Cu: goto label_17524c;
            case 0x175250u: goto label_175250;
            case 0x175254u: goto label_175254;
            case 0x175258u: goto label_175258;
            case 0x17525Cu: goto label_17525c;
            case 0x175260u: goto label_175260;
            case 0x175264u: goto label_175264;
            case 0x175268u: goto label_175268;
            case 0x17526Cu: goto label_17526c;
            case 0x175270u: goto label_175270;
            case 0x175274u: goto label_175274;
            case 0x175278u: goto label_175278;
            case 0x17527Cu: goto label_17527c;
            case 0x175280u: goto label_175280;
            case 0x175284u: goto label_175284;
            case 0x175288u: goto label_175288;
            case 0x17528Cu: goto label_17528c;
            case 0x175290u: goto label_175290;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175288u; }
            if (ctx->pc != 0x175288u) { return; }
        }
    }
    ctx->pc = 0x175288u;
label_175288:
    // 0x175288: 0xdfbf0000
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17528c:
    // 0x17528c: 0x3e00008
label_175290:
    if (ctx->pc == 0x175290u) {
        ctx->pc = 0x175290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x175294u;
        goto label_fallthrough_0x17528c;
    }
    ctx->pc = 0x17528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175240u: goto label_175240;
            case 0x175244u: goto label_175244;
            case 0x175248u: goto label_175248;
            case 0x17524Cu: goto label_17524c;
            case 0x175250u: goto label_175250;
            case 0x175254u: goto label_175254;
            case 0x175258u: goto label_175258;
            case 0x17525Cu: goto label_17525c;
            case 0x175260u: goto label_175260;
            case 0x175264u: goto label_175264;
            case 0x175268u: goto label_175268;
            case 0x17526Cu: goto label_17526c;
            case 0x175270u: goto label_175270;
            case 0x175274u: goto label_175274;
            case 0x175278u: goto label_175278;
            case 0x17527Cu: goto label_17527c;
            case 0x175280u: goto label_175280;
            case 0x175284u: goto label_175284;
            case 0x175288u: goto label_175288;
            case 0x17528Cu: goto label_17528c;
            case 0x175290u: goto label_175290;
            default: break;
        }
        return;
    }
label_fallthrough_0x17528c:
    ctx->pc = 0x175294u;
}
