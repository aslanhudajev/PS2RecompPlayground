#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsStopTr
// Address: 0x174e28 - 0x174e7c
void cvFsStopTr_0x174e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsStopTr");


    ctx->pc = 0x174e28u;

label_174e28:
    // 0x174e28: 0x27bdfff0
    ctx->pc = 0x174e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_174e2c:
    // 0x174e2c: 0x14800006
label_174e30:
    if (ctx->pc == 0x174E30u) {
        ctx->pc = 0x174E30u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x174E34u;
        goto label_174e34;
    }
    ctx->pc = 0x174E2Cu;
    {
        const bool branch_taken_0x174e2c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174E30u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x174e2c) {
            ctx->pc = 0x174E48u;
            goto label_174e48;
        }
    }
    ctx->pc = 0x174E34u;
label_174e34:
    // 0x174e34: 0x3c04002c
    ctx->pc = 0x174e34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174e38:
    // 0x174e38: 0xdfbf0000
    ctx->pc = 0x174e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174e3c:
    // 0x174e3c: 0x2484a6d0
    ctx->pc = 0x174e3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944464));
label_174e40:
    // 0x174e40: 0x805d076
label_174e44:
    if (ctx->pc == 0x174E44u) {
        ctx->pc = 0x174E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174E48u;
        goto label_174e48;
    }
    ctx->pc = 0x174E40u;
    ctx->pc = 0x174E44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174E48u;
label_174e48:
    // 0x174e48: 0x8c820000
    ctx->pc = 0x174e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174e4c:
    // 0x174e4c: 0x8c420028
    ctx->pc = 0x174e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_174e50:
    // 0x174e50: 0x14400005
label_174e54:
    if (ctx->pc == 0x174E54u) {
        ctx->pc = 0x174E54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x174E58u;
        goto label_174e58;
    }
    ctx->pc = 0x174E50u;
    {
        const bool branch_taken_0x174e50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174E54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x174e50) {
            ctx->pc = 0x174E68u;
            goto label_174e68;
        }
    }
    ctx->pc = 0x174E58u;
label_174e58:
    // 0x174e58: 0x3c04002c
    ctx->pc = 0x174e58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174e5c:
    // 0x174e5c: 0x2484a6f0
    ctx->pc = 0x174e5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944496));
label_174e60:
    // 0x174e60: 0x805d076
label_174e64:
    if (ctx->pc == 0x174E64u) {
        ctx->pc = 0x174E64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174E68u;
        goto label_174e68;
    }
    ctx->pc = 0x174E60u;
    ctx->pc = 0x174E64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174E68u;
label_174e68:
    // 0x174e68: 0x40f809
label_174e6c:
    if (ctx->pc == 0x174E6Cu) {
        ctx->pc = 0x174E6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174E70u;
        goto label_174e70;
    }
    ctx->pc = 0x174E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174E70u);
        ctx->pc = 0x174E6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E28u: goto label_174e28;
            case 0x174E2Cu: goto label_174e2c;
            case 0x174E30u: goto label_174e30;
            case 0x174E34u: goto label_174e34;
            case 0x174E38u: goto label_174e38;
            case 0x174E3Cu: goto label_174e3c;
            case 0x174E40u: goto label_174e40;
            case 0x174E44u: goto label_174e44;
            case 0x174E48u: goto label_174e48;
            case 0x174E4Cu: goto label_174e4c;
            case 0x174E50u: goto label_174e50;
            case 0x174E54u: goto label_174e54;
            case 0x174E58u: goto label_174e58;
            case 0x174E5Cu: goto label_174e5c;
            case 0x174E60u: goto label_174e60;
            case 0x174E64u: goto label_174e64;
            case 0x174E68u: goto label_174e68;
            case 0x174E6Cu: goto label_174e6c;
            case 0x174E70u: goto label_174e70;
            case 0x174E74u: goto label_174e74;
            case 0x174E78u: goto label_174e78;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174E70u; }
            if (ctx->pc != 0x174E70u) { return; }
        }
    }
    ctx->pc = 0x174E70u;
label_174e70:
    // 0x174e70: 0xdfbf0000
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174e74:
    // 0x174e74: 0x3e00008
label_174e78:
    if (ctx->pc == 0x174E78u) {
        ctx->pc = 0x174E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x174E7Cu;
        goto label_fallthrough_0x174e74;
    }
    ctx->pc = 0x174E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E28u: goto label_174e28;
            case 0x174E2Cu: goto label_174e2c;
            case 0x174E30u: goto label_174e30;
            case 0x174E34u: goto label_174e34;
            case 0x174E38u: goto label_174e38;
            case 0x174E3Cu: goto label_174e3c;
            case 0x174E40u: goto label_174e40;
            case 0x174E44u: goto label_174e44;
            case 0x174E48u: goto label_174e48;
            case 0x174E4Cu: goto label_174e4c;
            case 0x174E50u: goto label_174e50;
            case 0x174E54u: goto label_174e54;
            case 0x174E58u: goto label_174e58;
            case 0x174E5Cu: goto label_174e5c;
            case 0x174E60u: goto label_174e60;
            case 0x174E64u: goto label_174e64;
            case 0x174E68u: goto label_174e68;
            case 0x174E6Cu: goto label_174e6c;
            case 0x174E70u: goto label_174e70;
            case 0x174E74u: goto label_174e74;
            case 0x174E78u: goto label_174e78;
            default: break;
        }
        return;
    }
label_fallthrough_0x174e74:
    ctx->pc = 0x174E7Cu;
}
