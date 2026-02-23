#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetHnStat
// Address: 0x19d038 - 0x19d074
void SFD_GetHnStat_0x19d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetHnStat");


    ctx->pc = 0x19d038u;

    // 0x19d038: 0x27bdffe0
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d03c: 0xffb00000
    ctx->pc = 0x19d03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d040: 0xffbf0010
    ctx->pc = 0x19d040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d044: 0xc064f1e
    ctx->pc = 0x19D044u;
    SET_GPR_U32(ctx, 31, 0x19D04Cu);
    ctx->pc = 0x19D048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D04Cu; }
        else if (ctx->pc != 0x19D04Cu) { ctx->pc = 0x19D04Cu; }
    }
    if (ctx->pc != 0x19D04Cu) { return; }
    ctx->pc = 0x19D04Cu;
    // 0x19d04c: 0x10400004
    ctx->pc = 0x19D04Cu;
    {
        const bool branch_taken_0x19d04c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D050u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d04c) {
            ctx->pc = 0x19D060u;
            goto label_19d060;
        }
    }
    ctx->pc = 0x19D054u;
    // 0x19d054: 0x3c05ff00
    ctx->pc = 0x19d054u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19d058: 0xc064ea0
    ctx->pc = 0x19D058u;
    SET_GPR_U32(ctx, 31, 0x19D060u);
    ctx->pc = 0x19D05Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 273));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D060u; }
        else if (ctx->pc != 0x19D060u) { ctx->pc = 0x19D060u; }
    }
    if (ctx->pc != 0x19D060u) { return; }
    ctx->pc = 0x19D060u;
label_19d060:
    // 0x19d060: 0x8e020040
    ctx->pc = 0x19d060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19d064: 0xdfbf0010
    ctx->pc = 0x19d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d068: 0xdfb00000
    ctx->pc = 0x19d068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d06c: 0x3e00008
    ctx->pc = 0x19D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D060u: goto label_19d060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D074u;
}
