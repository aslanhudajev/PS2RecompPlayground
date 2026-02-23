#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ShutdownSafeThrd
// Address: 0x16d4c8 - 0x16d534
void adxm_ShutdownSafeThrd_0x16d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ShutdownSafeThrd");


    ctx->pc = 0x16d4c8u;

    // 0x16d4c8: 0x27bdffe0
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d4cc: 0xdf828190
    ctx->pc = 0x16d4ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934928)));
    // 0x16d4d0: 0xffbf0010
    ctx->pc = 0x16d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d4d4: 0x14400010
    ctx->pc = 0x16D4D4u;
    {
        const bool branch_taken_0x16d4d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D4D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d4d4) {
            ctx->pc = 0x16D518u;
            goto label_16d518;
        }
    }
    ctx->pc = 0x16D4DCu;
    // 0x16d4dc: 0x24100001
    ctx->pc = 0x16d4dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d4e0:
    // 0x16d4e0: 0xff908188
    ctx->pc = 0x16d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934920), GPR_U64(ctx, 16));
    // 0x16d4e4: 0x24050001
    ctx->pc = 0x16d4e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d4e8: 0x8f848170
    ctx->pc = 0x16d4e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16d4ec: 0xc0551dc
    ctx->pc = 0x16D4ECu;
    SET_GPR_U32(ctx, 31, 0x16D4F4u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4F4u; }
        else if (ctx->pc != 0x16D4F4u) { ctx->pc = 0x16D4F4u; }
    }
    if (ctx->pc != 0x16D4F4u) { return; }
    ctx->pc = 0x16D4F4u;
    // 0x16d4f4: 0x8f848170
    ctx->pc = 0x16d4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16d4f8: 0xc055204
    ctx->pc = 0x16D4F8u;
    SET_GPR_U32(ctx, 31, 0x16D500u);
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D500u; }
        else if (ctx->pc != 0x16D500u) { ctx->pc = 0x16D500u; }
    }
    if (ctx->pc != 0x16D500u) { return; }
    ctx->pc = 0x16D500u;
    // 0x16d500: 0x8f848170
    ctx->pc = 0x16d500u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16d504: 0xc05521c
    ctx->pc = 0x16D504u;
    SET_GPR_U32(ctx, 31, 0x16D50Cu);
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D50Cu; }
        else if (ctx->pc != 0x16D50Cu) { ctx->pc = 0x16D50Cu; }
    }
    if (ctx->pc != 0x16D50Cu) { return; }
    ctx->pc = 0x16D50Cu;
    // 0x16d50c: 0xdf838190
    ctx->pc = 0x16d50cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934928)));
    // 0x16d510: 0x1060fff3
    ctx->pc = 0x16D510u;
    {
        const bool branch_taken_0x16d510 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d510) {
            ctx->pc = 0x16D4E0u;
            goto label_16d4e0;
        }
    }
    ctx->pc = 0x16D518u;
label_16d518:
    // 0x16d518: 0xff808190
    ctx->pc = 0x16d518u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U64(ctx, 0));
    // 0x16d51c: 0xff808188
    ctx->pc = 0x16d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934920), GPR_U64(ctx, 0));
    // 0x16d520: 0xdfbf0010
    ctx->pc = 0x16d520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d524: 0xdfb00000
    ctx->pc = 0x16d524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d528: 0xaf808170
    ctx->pc = 0x16d528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934896), GPR_U32(ctx, 0));
    // 0x16d52c: 0x3e00008
    ctx->pc = 0x16D52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D4E0u: goto label_16d4e0;
            case 0x16D518u: goto label_16d518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D534u;
}
