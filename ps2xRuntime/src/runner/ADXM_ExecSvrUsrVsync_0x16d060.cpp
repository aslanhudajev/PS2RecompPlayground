#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecSvrUsrVsync
// Address: 0x16d060 - 0x16d07c
void ADXM_ExecSvrUsrVsync_0x16d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecSvrUsrVsync");


    ctx->pc = 0x16d060u;

    // 0x16d060: 0x27bdfff0
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d064: 0xffbf0000
    ctx->pc = 0x16d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d068: 0xc05f8d4
    ctx->pc = 0x16D068u;
    SET_GPR_U32(ctx, 31, 0x16D070u);
    ctx->pc = 0x17E350u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrVsync_0x17e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D070u; }
        else if (ctx->pc != 0x16D070u) { ctx->pc = 0x16D070u; }
    }
    if (ctx->pc != 0x16D070u) { return; }
    ctx->pc = 0x16D070u;
    // 0x16d070: 0xdfbf0000
    ctx->pc = 0x16d070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d074: 0x3e00008
    ctx->pc = 0x16D074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D07Cu;
}
