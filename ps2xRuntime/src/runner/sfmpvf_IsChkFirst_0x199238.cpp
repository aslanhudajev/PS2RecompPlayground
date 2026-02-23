#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpvf_IsChkFirst
// Address: 0x199238 - 0x199254
void sfmpvf_IsChkFirst_0x199238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpvf_IsChkFirst");


    ctx->pc = 0x199238u;

    // 0x199238: 0x54800003
    ctx->pc = 0x199238u;
    {
        const bool branch_taken_0x199238 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x199238) {
            ctx->pc = 0x19923Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x199248u;
            goto label_199248;
        }
    }
    ctx->pc = 0x199240u;
    // 0x199240: 0x3e00008
    ctx->pc = 0x199240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199248u: goto label_199248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199248u;
label_199248:
    // 0x199248: 0x8ca20008
    ctx->pc = 0x199248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19924c: 0x3e00008
    ctx->pc = 0x19924Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199250u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199248u: goto label_199248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199254u;
}
