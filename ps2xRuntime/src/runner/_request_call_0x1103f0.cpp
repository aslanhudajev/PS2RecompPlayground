#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_call
// Address: 0x1103f0 - 0x11047c
void _request_call_0x1103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1103f0u;

    // 0x1103f0: 0x8c850034
    ctx->pc = 0x1103f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1103f4: 0x8ca60040
    ctx->pc = 0x1103f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1103f8: 0x8cc2000c
    ctx->pc = 0x1103f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1103fc: 0x54400003
    ctx->pc = 0x1103FCu;
    {
        const bool branch_taken_0x1103fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1103fc) {
            ctx->pc = 0x110400u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->pc = 0x11040Cu;
            goto label_11040c;
        }
    }
    ctx->pc = 0x110404u;
    // 0x110404: 0x10000002
    ctx->pc = 0x110404u;
    {
        const bool branch_taken_0x110404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110408u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x110404) {
            ctx->pc = 0x110410u;
            goto label_110410;
        }
    }
    ctx->pc = 0x11040Cu;
label_11040c:
    // 0x11040c: 0xac45003c
    ctx->pc = 0x11040cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_110410:
    // 0x110410: 0xacc50010
    ctx->pc = 0x110410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x110414: 0x8c820014
    ctx->pc = 0x110414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x110418: 0x8c83001c
    ctx->pc = 0x110418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11041c: 0xaca20020
    ctx->pc = 0x11041cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x110420: 0xaca3001c
    ctx->pc = 0x110420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x110424: 0x8c820020
    ctx->pc = 0x110424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110428: 0xaca20024
    ctx->pc = 0x110428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x11042c: 0x8c830024
    ctx->pc = 0x11042cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110430: 0xaca3000c
    ctx->pc = 0x110430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x110434: 0x8c820028
    ctx->pc = 0x110434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x110438: 0xaca20028
    ctx->pc = 0x110438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x11043c: 0x8c83002c
    ctx->pc = 0x11043cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x110440: 0xaca3002c
    ctx->pc = 0x110440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x110444: 0x8c820030
    ctx->pc = 0x110444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x110448: 0xaca20030
    ctx->pc = 0x110448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x11044c: 0x8c830010
    ctx->pc = 0x11044cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x110450: 0xaca30034
    ctx->pc = 0x110450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x110454: 0x8cc40000
    ctx->pc = 0x110454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110458: 0x4800006
    ctx->pc = 0x110458u;
    {
        const bool branch_taken_0x110458 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x110458) {
            ctx->pc = 0x110474u;
            goto label_110474;
        }
    }
    ctx->pc = 0x110460u;
    // 0x110460: 0x8cc20004
    ctx->pc = 0x110460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x110464: 0x14400003
    ctx->pc = 0x110464u;
    {
        const bool branch_taken_0x110464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x110464) {
            ctx->pc = 0x110474u;
            goto label_110474;
        }
    }
    ctx->pc = 0x11046Cu;
    // 0x11046c: 0x8045490
    ctx->pc = 0x11046Cu;
    ctx->pc = 0x115240u;
    iWakeupThread_0x115240(rdram, ctx, runtime); return;
    ctx->pc = 0x110474u;
label_110474:
    // 0x110474: 0x3e00008
    ctx->pc = 0x110474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11040Cu: goto label_11040c;
            case 0x110410u: goto label_110410;
            case 0x110474u: goto label_110474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11047Cu;
}
