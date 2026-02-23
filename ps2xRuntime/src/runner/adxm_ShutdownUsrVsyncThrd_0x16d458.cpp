#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ShutdownUsrVsyncThrd
// Address: 0x16d458 - 0x16d4c4
void adxm_ShutdownUsrVsyncThrd_0x16d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ShutdownUsrVsyncThrd");


    ctx->pc = 0x16d458u;

    // 0x16d458: 0x27bdffe0
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d45c: 0xdf8281a0
    ctx->pc = 0x16d45cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x16d460: 0xffbf0010
    ctx->pc = 0x16d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d464: 0x14400010
    ctx->pc = 0x16D464u;
    {
        const bool branch_taken_0x16d464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D468u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d464) {
            ctx->pc = 0x16D4A8u;
            goto label_16d4a8;
        }
    }
    ctx->pc = 0x16D46Cu;
    // 0x16d46c: 0x24100001
    ctx->pc = 0x16d46cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d470:
    // 0x16d470: 0xff908198
    ctx->pc = 0x16d470u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U64(ctx, 16));
    // 0x16d474: 0x24050001
    ctx->pc = 0x16d474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d478: 0x8f848174
    ctx->pc = 0x16d478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16d47c: 0xc0551dc
    ctx->pc = 0x16D47Cu;
    SET_GPR_U32(ctx, 31, 0x16D484u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D484u; }
        else if (ctx->pc != 0x16D484u) { ctx->pc = 0x16D484u; }
    }
    if (ctx->pc != 0x16D484u) { return; }
    ctx->pc = 0x16D484u;
    // 0x16d484: 0x8f848174
    ctx->pc = 0x16d484u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16d488: 0xc055204
    ctx->pc = 0x16D488u;
    SET_GPR_U32(ctx, 31, 0x16D490u);
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D490u; }
        else if (ctx->pc != 0x16D490u) { ctx->pc = 0x16D490u; }
    }
    if (ctx->pc != 0x16D490u) { return; }
    ctx->pc = 0x16D490u;
    // 0x16d490: 0x8f848174
    ctx->pc = 0x16d490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16d494: 0xc05521c
    ctx->pc = 0x16D494u;
    SET_GPR_U32(ctx, 31, 0x16D49Cu);
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D49Cu; }
        else if (ctx->pc != 0x16D49Cu) { ctx->pc = 0x16D49Cu; }
    }
    if (ctx->pc != 0x16D49Cu) { return; }
    ctx->pc = 0x16D49Cu;
    // 0x16d49c: 0xdf8381a0
    ctx->pc = 0x16d49cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x16d4a0: 0x1060fff3
    ctx->pc = 0x16D4A0u;
    {
        const bool branch_taken_0x16d4a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d4a0) {
            ctx->pc = 0x16D470u;
            goto label_16d470;
        }
    }
    ctx->pc = 0x16D4A8u;
label_16d4a8:
    // 0x16d4a8: 0xff8081a0
    ctx->pc = 0x16d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934944), GPR_U64(ctx, 0));
    // 0x16d4ac: 0xff808198
    ctx->pc = 0x16d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U64(ctx, 0));
    // 0x16d4b0: 0xdfbf0010
    ctx->pc = 0x16d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d4b4: 0xdfb00000
    ctx->pc = 0x16d4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d4b8: 0xaf808174
    ctx->pc = 0x16d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934900), GPR_U32(ctx, 0));
    // 0x16d4bc: 0x3e00008
    ctx->pc = 0x16D4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D4C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D470u: goto label_16d470;
            case 0x16D4A8u: goto label_16d4a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D4C4u;
}
