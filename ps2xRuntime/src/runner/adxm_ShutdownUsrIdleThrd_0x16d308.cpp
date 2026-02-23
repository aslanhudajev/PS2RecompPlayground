#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ShutdownUsrIdleThrd
// Address: 0x16d308 - 0x16d374
void adxm_ShutdownUsrIdleThrd_0x16d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ShutdownUsrIdleThrd");


    ctx->pc = 0x16d308u;

    // 0x16d308: 0x27bdffe0
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d30c: 0xdf8281d0
    ctx->pc = 0x16d30cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x16d310: 0xffbf0010
    ctx->pc = 0x16d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d314: 0x14400010
    ctx->pc = 0x16D314u;
    {
        const bool branch_taken_0x16d314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D318u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d314) {
            ctx->pc = 0x16D358u;
            goto label_16d358;
        }
    }
    ctx->pc = 0x16D31Cu;
    // 0x16d31c: 0x24100001
    ctx->pc = 0x16d31cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d320:
    // 0x16d320: 0xff9081c8
    ctx->pc = 0x16d320u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934984), GPR_U64(ctx, 16));
    // 0x16d324: 0x24050001
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d328: 0x8f848184
    ctx->pc = 0x16d328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d32c: 0xc0551dc
    ctx->pc = 0x16D32Cu;
    SET_GPR_U32(ctx, 31, 0x16D334u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D334u; }
        else if (ctx->pc != 0x16D334u) { ctx->pc = 0x16D334u; }
    }
    if (ctx->pc != 0x16D334u) { return; }
    ctx->pc = 0x16D334u;
    // 0x16d334: 0x8f848184
    ctx->pc = 0x16d334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d338: 0xc055204
    ctx->pc = 0x16D338u;
    SET_GPR_U32(ctx, 31, 0x16D340u);
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D340u; }
        else if (ctx->pc != 0x16D340u) { ctx->pc = 0x16D340u; }
    }
    if (ctx->pc != 0x16D340u) { return; }
    ctx->pc = 0x16D340u;
    // 0x16d340: 0x8f848184
    ctx->pc = 0x16d340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d344: 0xc05521c
    ctx->pc = 0x16D344u;
    SET_GPR_U32(ctx, 31, 0x16D34Cu);
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D34Cu; }
        else if (ctx->pc != 0x16D34Cu) { ctx->pc = 0x16D34Cu; }
    }
    if (ctx->pc != 0x16D34Cu) { return; }
    ctx->pc = 0x16D34Cu;
    // 0x16d34c: 0xdf8381d0
    ctx->pc = 0x16d34cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x16d350: 0x1060fff3
    ctx->pc = 0x16D350u;
    {
        const bool branch_taken_0x16d350 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d350) {
            ctx->pc = 0x16D320u;
            goto label_16d320;
        }
    }
    ctx->pc = 0x16D358u;
label_16d358:
    // 0x16d358: 0xff8081d0
    ctx->pc = 0x16d358u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U64(ctx, 0));
    // 0x16d35c: 0xff8081c8
    ctx->pc = 0x16d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934984), GPR_U64(ctx, 0));
    // 0x16d360: 0xdfbf0010
    ctx->pc = 0x16d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d364: 0xdfb00000
    ctx->pc = 0x16d364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d368: 0xaf808184
    ctx->pc = 0x16d368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 0));
    // 0x16d36c: 0x3e00008
    ctx->pc = 0x16D36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D320u: goto label_16d320;
            case 0x16D358u: goto label_16d358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D374u;
}
