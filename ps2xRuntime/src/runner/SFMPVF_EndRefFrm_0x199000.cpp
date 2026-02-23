#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_EndRefFrm
// Address: 0x199000 - 0x199028
void SFMPVF_EndRefFrm_0x199000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_EndRefFrm");


    ctx->pc = 0x199000u;

    // 0x199000: 0x10800007
    ctx->pc = 0x199000u;
    {
        const bool branch_taken_0x199000 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x199004u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x199000) {
            ctx->pc = 0x199020u;
            goto label_199020;
        }
    }
    ctx->pc = 0x199008u;
    // 0x199008: 0x8c830000
    ctx->pc = 0x199008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19900c: 0x54620004
    ctx->pc = 0x19900Cu;
    {
        const bool branch_taken_0x19900c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19900c) {
            ctx->pc = 0x199010u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x199020u;
            goto label_199020;
        }
    }
    ctx->pc = 0x199014u;
    // 0x199014: 0x24020002
    ctx->pc = 0x199014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x199018: 0x3e00008
    ctx->pc = 0x199018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19901Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199020u: goto label_199020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199020u;
label_199020:
    // 0x199020: 0x3e00008
    ctx->pc = 0x199020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199020u: goto label_199020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199028u;
}
