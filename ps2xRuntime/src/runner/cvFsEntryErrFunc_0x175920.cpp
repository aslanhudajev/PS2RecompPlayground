#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsEntryErrFunc
// Address: 0x175920 - 0x175948
void cvFsEntryErrFunc_0x175920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsEntryErrFunc");


    ctx->pc = 0x175920u;

    // 0x175920: 0x14800005
    ctx->pc = 0x175920u;
    {
        const bool branch_taken_0x175920 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175924u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x175920) {
            ctx->pc = 0x175938u;
            goto label_175938;
        }
    }
    ctx->pc = 0x175928u;
    // 0x175928: 0x3c030024
    ctx->pc = 0x175928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17592c: 0xac408764
    ctx->pc = 0x17592cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936420), GPR_U32(ctx, 0));
    // 0x175930: 0x3e00008
    ctx->pc = 0x175930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175934u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936424), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175938u: goto label_175938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175938u;
label_175938:
    // 0x175938: 0x3c030024
    ctx->pc = 0x175938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17593c: 0xac448764
    ctx->pc = 0x17593cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936420), GPR_U32(ctx, 4));
    // 0x175940: 0x3e00008
    ctx->pc = 0x175940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175944u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936424), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175938u: goto label_175938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175948u;
}
