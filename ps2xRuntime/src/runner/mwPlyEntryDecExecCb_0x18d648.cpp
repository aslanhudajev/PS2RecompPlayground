#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyEntryDecExecCb
// Address: 0x18d648 - 0x18d668
void mwPlyEntryDecExecCb_0x18d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyEntryDecExecCb");


    ctx->pc = 0x18d648u;

    // 0x18d648: 0x10800005
    ctx->pc = 0x18D648u;
    {
        const bool branch_taken_0x18d648 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D64Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18d648) {
            ctx->pc = 0x18D660u;
            goto label_18d660;
        }
    }
    ctx->pc = 0x18D650u;
    // 0x18d650: 0xa0302d
    ctx->pc = 0x18d650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d654: 0x40202d
    ctx->pc = 0x18d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d658: 0x806741e
    ctx->pc = 0x18D658u;
    ctx->pc = 0x18D65Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18D660u;
label_18d660:
    // 0x18d660: 0x3e00008
    ctx->pc = 0x18D660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D660u: goto label_18d660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D668u;
}
