#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_WaitVsync
// Address: 0x16d690 - 0x16d6ac
void ADXM_WaitVsync_0x16d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_WaitVsync");


    ctx->pc = 0x16d690u;

    // 0x16d690: 0x27bdfff0
    ctx->pc = 0x16d690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d694: 0xffbf0000
    ctx->pc = 0x16d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d698: 0xc05b586
    ctx->pc = 0x16D698u;
    SET_GPR_U32(ctx, 31, 0x16D6A0u);
    ctx->pc = 0x16D618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_ResumeIdleThrd_0x16d618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A0u; }
        else if (ctx->pc != 0x16D6A0u) { ctx->pc = 0x16D6A0u; }
    }
    if (ctx->pc != 0x16D6A0u) { return; }
    ctx->pc = 0x16D6A0u;
    // 0x16d6a0: 0xdfbf0000
    ctx->pc = 0x16d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6a4: 0x805b5a2
    ctx->pc = 0x16D6A4u;
    ctx->pc = 0x16D6A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16D688u;
    ADXPS2_SleepMainThrd_0x16d688(rdram, ctx, runtime); return;
    ctx->pc = 0x16D6ACu;
}
