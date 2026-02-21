#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_call
// Address: 0x306218 - 0x3062a4
void _request_call_0x306218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x306218u;

    // 0x306218: 0x8c850034
    ctx->pc = 0x306218u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x30621c: 0x8ca60040
    ctx->pc = 0x30621cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x306220: 0x8cc2000c
    ctx->pc = 0x306220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x306224: 0x54400003
    ctx->pc = 0x306224u;
    {
        const bool branch_taken_0x306224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x306224) {
            ctx->pc = 0x306228u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->pc = 0x306234u;
            goto label_306234;
        }
    }
    ctx->pc = 0x30622Cu;
    // 0x30622c: 0x10000002
    ctx->pc = 0x30622Cu;
    {
        const bool branch_taken_0x30622c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x306230u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x30622c) {
            ctx->pc = 0x306238u;
            goto label_306238;
        }
    }
    ctx->pc = 0x306234u;
label_306234:
    // 0x306234: 0xac45003c
    ctx->pc = 0x306234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_306238:
    // 0x306238: 0xacc50010
    ctx->pc = 0x306238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x30623c: 0x8c820014
    ctx->pc = 0x30623cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x306240: 0x8c83001c
    ctx->pc = 0x306240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x306244: 0xaca20020
    ctx->pc = 0x306244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x306248: 0xaca3001c
    ctx->pc = 0x306248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x30624c: 0x8c820020
    ctx->pc = 0x30624cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x306250: 0xaca20024
    ctx->pc = 0x306250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x306254: 0x8c830024
    ctx->pc = 0x306254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x306258: 0xaca3000c
    ctx->pc = 0x306258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30625c: 0x8c820028
    ctx->pc = 0x30625cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x306260: 0xaca20028
    ctx->pc = 0x306260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x306264: 0x8c83002c
    ctx->pc = 0x306264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x306268: 0xaca3002c
    ctx->pc = 0x306268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x30626c: 0x8c820030
    ctx->pc = 0x30626cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x306270: 0xaca20030
    ctx->pc = 0x306270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x306274: 0x8c830010
    ctx->pc = 0x306274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x306278: 0xaca30034
    ctx->pc = 0x306278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x30627c: 0x8cc40000
    ctx->pc = 0x30627cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x306280: 0x4800006
    ctx->pc = 0x306280u;
    {
        const bool branch_taken_0x306280 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x306280) {
            ctx->pc = 0x30629Cu;
            goto label_30629c;
        }
    }
    ctx->pc = 0x306288u;
    // 0x306288: 0x8cc20004
    ctx->pc = 0x306288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30628c: 0x14400003
    ctx->pc = 0x30628Cu;
    {
        const bool branch_taken_0x30628c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30628c) {
            ctx->pc = 0x30629Cu;
            goto label_30629c;
        }
    }
    ctx->pc = 0x306294u;
    // 0x306294: 0x80c2174
    ctx->pc = 0x306294u;
    ctx->pc = 0x3085D0u;
    iWakeupThread_0x3085d0(rdram, ctx, runtime); return;
    ctx->pc = 0x30629Cu;
label_30629c:
    // 0x30629c: 0x3e00008
    ctx->pc = 0x30629Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x306234u: goto label_306234;
            case 0x306238u: goto label_306238;
            case 0x30629Cu: goto label_30629c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3062A4u;
}
