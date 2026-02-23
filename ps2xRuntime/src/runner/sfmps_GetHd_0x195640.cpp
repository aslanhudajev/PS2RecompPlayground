#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_GetHd
// Address: 0x195640 - 0x195684
void sfmps_GetHd_0x195640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_GetHd");


    ctx->pc = 0x195640u;

    // 0x195640: 0x27bdffe0
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195644: 0xffb00000
    ctx->pc = 0x195644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195648: 0xffbf0010
    ctx->pc = 0x195648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19564c: 0x80802d
    ctx->pc = 0x19564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195650: 0x8e026758
    ctx->pc = 0x195650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x195654: 0x10400007
    ctx->pc = 0x195654u;
    {
        const bool branch_taken_0x195654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195658u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195654) {
            ctx->pc = 0x195674u;
            goto label_195674;
        }
    }
    ctx->pc = 0x19565Cu;
    // 0x19565c: 0xc0655a2
    ctx->pc = 0x19565Cu;
    SET_GPR_U32(ctx, 31, 0x195664u);
    ctx->pc = 0x195660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195688u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPS_GetConcatCnt_0x195688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195664u; }
        else if (ctx->pc != 0x195664u) { ctx->pc = 0x195664u; }
    }
    if (ctx->pc != 0x195664u) { return; }
    ctx->pc = 0x195664u;
    // 0x195664: 0x1c400003
    ctx->pc = 0x195664u;
    {
        const bool branch_taken_0x195664 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x195668u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195664) {
            ctx->pc = 0x195674u;
            goto label_195674;
        }
    }
    ctx->pc = 0x19566Cu;
    // 0x19566c: 0x8e026758
    ctx->pc = 0x19566cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x195670: 0x244208a0
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2208));
label_195674:
    // 0x195674: 0xdfbf0010
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195678: 0xdfb00000
    ctx->pc = 0x195678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19567c: 0x3e00008
    ctx->pc = 0x19567Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195674u: goto label_195674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195684u;
}
