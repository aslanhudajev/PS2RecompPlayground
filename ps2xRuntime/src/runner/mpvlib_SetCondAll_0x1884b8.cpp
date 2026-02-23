#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_SetCondAll
// Address: 0x1884b8 - 0x188504
void mpvlib_SetCondAll_0x1884b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_SetCondAll");


    ctx->pc = 0x1884b8u;

    // 0x1884b8: 0x3c02002e
    ctx->pc = 0x1884b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1884bc: 0x24424290
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17040));
    // 0x1884c0: 0x8c470034
    ctx->pc = 0x1884c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1884c4: 0x18e0000d
    ctx->pc = 0x1884C4u;
    {
        const bool branch_taken_0x1884c4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1884C8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 56)));
        if (branch_taken_0x1884c4) {
            ctx->pc = 0x1884FCu;
            goto label_1884fc;
        }
    }
    ctx->pc = 0x1884CCu;
    // 0x1884cc: 0x41880
    ctx->pc = 0x1884ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1884d0: 0x24c20168
    ctx->pc = 0x1884d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 360));
    // 0x1884d4: 0x431821
    ctx->pc = 0x1884d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1884d8: 0x24040002
    ctx->pc = 0x1884d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1884dc: 0x0
    ctx->pc = 0x1884dcu;
    // NOP
label_1884e0:
    // 0x1884e0: 0x8cc20160
    ctx->pc = 0x1884e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x1884e4: 0x50440001
    ctx->pc = 0x1884E4u;
    {
        const bool branch_taken_0x1884e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x1884e4) {
            ctx->pc = 0x1884E8u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884ECu;
label_1884ec:
    // 0x1884ec: 0x24e7ffff
    ctx->pc = 0x1884ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1884f0: 0x24632000
    ctx->pc = 0x1884f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8192));
    // 0x1884f4: 0x14e0fffa
    ctx->pc = 0x1884F4u;
    {
        const bool branch_taken_0x1884f4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1884F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8192));
        if (branch_taken_0x1884f4) {
            ctx->pc = 0x1884E0u;
            goto label_1884e0;
        }
    }
    ctx->pc = 0x1884FCu;
label_1884fc:
    // 0x1884fc: 0x3e00008
    ctx->pc = 0x1884FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1884E0u: goto label_1884e0;
            case 0x1884ECu: goto label_1884ec;
            case 0x1884FCu: goto label_1884fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188504u;
}
