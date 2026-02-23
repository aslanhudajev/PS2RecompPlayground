#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ShutdownVsyncThrd
// Address: 0x16d3e8 - 0x16d454
void adxm_ShutdownVsyncThrd_0x16d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ShutdownVsyncThrd");


    ctx->pc = 0x16d3e8u;

    // 0x16d3e8: 0x27bdffe0
    ctx->pc = 0x16d3e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d3ec: 0xdf8281b0
    ctx->pc = 0x16d3ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x16d3f0: 0xffbf0010
    ctx->pc = 0x16d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d3f4: 0x14400010
    ctx->pc = 0x16D3F4u;
    {
        const bool branch_taken_0x16d3f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D3F8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d3f4) {
            ctx->pc = 0x16D438u;
            goto label_16d438;
        }
    }
    ctx->pc = 0x16D3FCu;
    // 0x16d3fc: 0x24100001
    ctx->pc = 0x16d3fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d400:
    // 0x16d400: 0xff9081a8
    ctx->pc = 0x16d400u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U64(ctx, 16));
    // 0x16d404: 0x24050001
    ctx->pc = 0x16d404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d408: 0x8f848178
    ctx->pc = 0x16d408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16d40c: 0xc0551dc
    ctx->pc = 0x16D40Cu;
    SET_GPR_U32(ctx, 31, 0x16D414u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D414u; }
        else if (ctx->pc != 0x16D414u) { ctx->pc = 0x16D414u; }
    }
    if (ctx->pc != 0x16D414u) { return; }
    ctx->pc = 0x16D414u;
    // 0x16d414: 0x8f848178
    ctx->pc = 0x16d414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16d418: 0xc055204
    ctx->pc = 0x16D418u;
    SET_GPR_U32(ctx, 31, 0x16D420u);
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D420u; }
        else if (ctx->pc != 0x16D420u) { ctx->pc = 0x16D420u; }
    }
    if (ctx->pc != 0x16D420u) { return; }
    ctx->pc = 0x16D420u;
    // 0x16d420: 0x8f848178
    ctx->pc = 0x16d420u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16d424: 0xc05521c
    ctx->pc = 0x16D424u;
    SET_GPR_U32(ctx, 31, 0x16D42Cu);
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D42Cu; }
        else if (ctx->pc != 0x16D42Cu) { ctx->pc = 0x16D42Cu; }
    }
    if (ctx->pc != 0x16D42Cu) { return; }
    ctx->pc = 0x16D42Cu;
    // 0x16d42c: 0xdf8381b0
    ctx->pc = 0x16d42cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934960)));
    // 0x16d430: 0x1060fff3
    ctx->pc = 0x16D430u;
    {
        const bool branch_taken_0x16d430 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d430) {
            ctx->pc = 0x16D400u;
            goto label_16d400;
        }
    }
    ctx->pc = 0x16D438u;
label_16d438:
    // 0x16d438: 0xff8081b0
    ctx->pc = 0x16d438u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934960), GPR_U64(ctx, 0));
    // 0x16d43c: 0xff8081a8
    ctx->pc = 0x16d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U64(ctx, 0));
    // 0x16d440: 0xdfbf0010
    ctx->pc = 0x16d440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d444: 0xdfb00000
    ctx->pc = 0x16d444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d448: 0xaf808178
    ctx->pc = 0x16d448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934904), GPR_U32(ctx, 0));
    // 0x16d44c: 0x3e00008
    ctx->pc = 0x16D44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D400u: goto label_16d400;
            case 0x16D438u: goto label_16d438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D454u;
}
