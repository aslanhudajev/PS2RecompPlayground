#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd4d0 - 0x1fd520
void entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd4d0u;

    // 0x1fd4d0: 0x3c010052
    ctx->pc = 0x1fd4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd4d4: 0x8c2294ac
    ctx->pc = 0x1fd4d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939820)));
    // 0x1fd4d8: 0x24430001
    ctx->pc = 0x1fd4d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fd4dc: 0x3c010052
    ctx->pc = 0x1fd4dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd4e0: 0xac2394ac
    ctx->pc = 0x1fd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939820), GPR_U32(ctx, 3));
    // 0x1fd4e4: 0x3c010052
    ctx->pc = 0x1fd4e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd4e8: 0x8c2294a0
    ctx->pc = 0x1fd4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939808)));
    // 0x1fd4ec: 0x8c420004
    ctx->pc = 0x1fd4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fd4f0: 0x62082a
    ctx->pc = 0x1fd4f0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1fd4f4: 0x10200008
    ctx->pc = 0x1FD4F4u;
    {
        const bool branch_taken_0x1fd4f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD4F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fd4f4) {
            ctx->pc = 0x1FD518u;
            goto label_1fd518;
        }
    }
    ctx->pc = 0x1FD4FCu;
    // 0x1fd4fc: 0x3c010052
    ctx->pc = 0x1fd4fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd500: 0x8c2394a4
    ctx->pc = 0x1fd500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939812)));
    // 0x1fd504: 0x24020001
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd508: 0x24630010
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fd50c: 0x3c010052
    ctx->pc = 0x1fd50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd510: 0xac2394a4
    ctx->pc = 0x1fd510u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939812), GPR_U32(ctx, 3));
    // 0x1fd514: 0xaca2000c
    ctx->pc = 0x1fd514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1fd518:
    // 0x1fd518: 0x3e00008
    ctx->pc = 0x1FD518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD518u: goto label_1fd518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD520u;
}
