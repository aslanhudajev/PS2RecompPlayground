#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetTime
// Address: 0x19df40 - 0x19df84
void SFTIM_GetTime_0x19df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetTime");


    ctx->pc = 0x19df40u;

    // 0x19df40: 0x27bdfff0
    ctx->pc = 0x19df40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19df44: 0x24870a94
    ctx->pc = 0x19df44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 2708));
    // 0x19df48: 0xffbf0000
    ctx->pc = 0x19df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19df4c: 0x2402fffb
    ctx->pc = 0x19df4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x19df50: 0x8ce30238
    ctx->pc = 0x19df50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 568)));
    // 0x19df54: 0x54620005
    ctx->pc = 0x19DF54u;
    {
        const bool branch_taken_0x19df54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19df54) {
            ctx->pc = 0x19DF58u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x19DF6Cu;
            goto label_19df6c;
        }
    }
    ctx->pc = 0x19DF5Cu;
    // 0x19df5c: 0xc0677fc
    ctx->pc = 0x19DF5Cu;
    SET_GPR_U32(ctx, 31, 0x19DF64u);
    ctx->pc = 0x19DFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetNowTime_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF64u; }
        else if (ctx->pc != 0x19DF64u) { ctx->pc = 0x19DF64u; }
    }
    if (ctx->pc != 0x19DF64u) { return; }
    ctx->pc = 0x19DF64u;
    // 0x19df64: 0x10000005
    ctx->pc = 0x19DF64u;
    {
        const bool branch_taken_0x19df64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DF68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19df64) {
            ctx->pc = 0x19DF7Cu;
            goto label_19df7c;
        }
    }
    ctx->pc = 0x19DF6Cu;
label_19df6c:
    // 0x19df6c: 0x102d
    ctx->pc = 0x19df6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df70: 0x8ce3023c
    ctx->pc = 0x19df70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 572)));
    // 0x19df74: 0xacc30000
    ctx->pc = 0x19df74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x19df78: 0xdfbf0000
    ctx->pc = 0x19df78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19df7c:
    // 0x19df7c: 0x3e00008
    ctx->pc = 0x19DF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DF6Cu: goto label_19df6c;
            case 0x19DF7Cu: goto label_19df7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DF84u;
}
