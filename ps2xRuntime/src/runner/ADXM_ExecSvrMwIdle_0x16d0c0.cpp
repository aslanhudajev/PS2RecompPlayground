#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecSvrMwIdle
// Address: 0x16d0c0 - 0x16d0dc
void ADXM_ExecSvrMwIdle_0x16d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecSvrMwIdle");


    ctx->pc = 0x16d0c0u;

    // 0x16d0c0: 0x27bdfff0
    ctx->pc = 0x16d0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d0c4: 0xffbf0000
    ctx->pc = 0x16d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d0c8: 0xc05f904
    ctx->pc = 0x16D0C8u;
    SET_GPR_U32(ctx, 31, 0x16D0D0u);
    ctx->pc = 0x17E410u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrMwIdle_0x17e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D0u; }
        else if (ctx->pc != 0x16D0D0u) { ctx->pc = 0x16D0D0u; }
    }
    if (ctx->pc != 0x16D0D0u) { return; }
    ctx->pc = 0x16D0D0u;
    // 0x16d0d0: 0xdfbf0000
    ctx->pc = 0x16d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d0d4: 0x3e00008
    ctx->pc = 0x16D0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D0D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D0DCu;
}
