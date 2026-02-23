#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: orgAddTrig0__11GunMgrClassFv
// Address: 0x1ee3f0 - 0x1ee460
void orgAddTrig0__11GunMgrClassFv_0x1ee3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("orgAddTrig0__11GunMgrClassFv");


    ctx->pc = 0x1ee3f0u;

    // 0x1ee3f0: 0x3c010050
    ctx->pc = 0x1ee3f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ee3f4: 0x8425e504
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1ee3f8: 0x2403000a
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee3fc: 0x14a30016
    ctx->pc = 0x1EE3FCu;
    {
        const bool branch_taken_0x1ee3fc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ee3fc) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE404u;
    // 0x1ee404: 0x8f858bcc
    ctx->pc = 0x1ee404u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1ee408: 0x24030001
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee40c: 0x14a30012
    ctx->pc = 0x1EE40Cu;
    {
        const bool branch_taken_0x1ee40c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ee40c) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE414u;
    // 0x1ee414: 0x8f838cb0
    ctx->pc = 0x1ee414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1ee418: 0x30630010
    ctx->pc = 0x1ee418u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x1ee41c: 0x1460000e
    ctx->pc = 0x1EE41Cu;
    {
        const bool branch_taken_0x1ee41c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee41c) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE424u;
    // 0x1ee424: 0x8f838b68
    ctx->pc = 0x1ee424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x1ee428: 0x14600003
    ctx->pc = 0x1EE428u;
    {
        const bool branch_taken_0x1ee428 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee428) {
            ctx->pc = 0x1EE438u;
            goto label_1ee438;
        }
    }
    ctx->pc = 0x1EE430u;
    // 0x1ee430: 0x10000009
    ctx->pc = 0x1EE430u;
    {
        const bool branch_taken_0x1ee430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee430) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0x908300cd
    ctx->pc = 0x1ee438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 205)));
    // 0x1ee43c: 0x24630001
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee440: 0xa08300cd
    ctx->pc = 0x1ee440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 205), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee444: 0x908300cd
    ctx->pc = 0x1ee444u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 205)));
    // 0x1ee448: 0x28610019
    ctx->pc = 0x1ee448u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 25));
    // 0x1ee44c: 0x14200002
    ctx->pc = 0x1EE44Cu;
    {
        const bool branch_taken_0x1ee44c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee44c) {
            ctx->pc = 0x1EE458u;
            goto label_1ee458;
        }
    }
    ctx->pc = 0x1EE454u;
    // 0x1ee454: 0xa08000cd
    ctx->pc = 0x1ee454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 205), (uint8_t)GPR_U32(ctx, 0));
label_1ee458:
    // 0x1ee458: 0x3e00008
    ctx->pc = 0x1EE458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE438u: goto label_1ee438;
            case 0x1EE458u: goto label_1ee458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE460u;
}
