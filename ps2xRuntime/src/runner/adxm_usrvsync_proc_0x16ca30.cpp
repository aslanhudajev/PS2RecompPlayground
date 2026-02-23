#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_usrvsync_proc
// Address: 0x16ca30 - 0x16ca94
void adxm_usrvsync_proc_0x16ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_usrvsync_proc");


    ctx->pc = 0x16ca30u;

    // 0x16ca30: 0x27bdfff0
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ca34: 0xdf828198
    ctx->pc = 0x16ca34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934936)));
    // 0x16ca38: 0x14400011
    ctx->pc = 0x16CA38u;
    {
        const bool branch_taken_0x16ca38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CA3Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16ca38) {
            ctx->pc = 0x16CA80u;
            goto label_16ca80;
        }
    }
    ctx->pc = 0x16CA40u;
label_16ca40:
    // 0x16ca40: 0xdf828148
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934856)));
    // 0x16ca44: 0x64420001
    ctx->pc = 0x16ca44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x16ca48: 0xff828148
    ctx->pc = 0x16ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934856), GPR_U64(ctx, 2));
    // 0x16ca4c: 0x8f838184
    ctx->pc = 0x16ca4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16ca50: 0x10600004
    ctx->pc = 0x16CA50u;
    {
        const bool branch_taken_0x16ca50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ca50) {
            ctx->pc = 0x16CA64u;
            goto label_16ca64;
        }
    }
    ctx->pc = 0x16CA58u;
    // 0x16ca58: 0x8f848184
    ctx->pc = 0x16ca58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16ca5c: 0xc05b358
    ctx->pc = 0x16CA5Cu;
    SET_GPR_U32(ctx, 31, 0x16CA64u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA64u; }
        else if (ctx->pc != 0x16CA64u) { ctx->pc = 0x16CA64u; }
    }
    if (ctx->pc != 0x16CA64u) { return; }
    ctx->pc = 0x16CA64u;
label_16ca64:
    // 0x16ca64: 0xc05f8d4
    ctx->pc = 0x16CA64u;
    SET_GPR_U32(ctx, 31, 0x16CA6Cu);
    ctx->pc = 0x17E350u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrVsync_0x17e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA6Cu; }
        else if (ctx->pc != 0x16CA6Cu) { ctx->pc = 0x16CA6Cu; }
    }
    if (ctx->pc != 0x16CA6Cu) { return; }
    ctx->pc = 0x16CA6Cu;
    // 0x16ca6c: 0xc05b33e
    ctx->pc = 0x16CA6Cu;
    SET_GPR_U32(ctx, 31, 0x16CA74u);
    ctx->pc = 0x16CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SleepThread_0x16ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA74u; }
        else if (ctx->pc != 0x16CA74u) { ctx->pc = 0x16CA74u; }
    }
    if (ctx->pc != 0x16CA74u) { return; }
    ctx->pc = 0x16CA74u;
    // 0x16ca74: 0xdf828198
    ctx->pc = 0x16ca74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934936)));
    // 0x16ca78: 0x1040fff1
    ctx->pc = 0x16CA78u;
    {
        const bool branch_taken_0x16ca78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ca78) {
            ctx->pc = 0x16CA40u;
            goto label_16ca40;
        }
    }
    ctx->pc = 0x16CA80u;
label_16ca80:
    // 0x16ca80: 0x24020001
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ca84: 0xdfbf0000
    ctx->pc = 0x16ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca88: 0xff8281a0
    ctx->pc = 0x16ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934944), GPR_U64(ctx, 2));
    // 0x16ca8c: 0x80551c8
    ctx->pc = 0x16CA8Cu;
    ctx->pc = 0x16CA90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x154720u;
    ExitDeleteThread_0x154720(rdram, ctx, runtime); return;
    ctx->pc = 0x16CA94u;
}
