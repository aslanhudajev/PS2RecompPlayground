#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecSvrMain
// Address: 0x16d0a0 - 0x16d0bc
void ADXM_ExecSvrMain_0x16d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecSvrMain");


    ctx->pc = 0x16d0a0u;

    // 0x16d0a0: 0x27bdfff0
    ctx->pc = 0x16d0a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d0a4: 0xffbf0000
    ctx->pc = 0x16d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d0a8: 0xc05f8fc
    ctx->pc = 0x16D0A8u;
    SET_GPR_U32(ctx, 31, 0x16D0B0u);
    ctx->pc = 0x17E3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrMain_0x17e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0B0u; }
        else if (ctx->pc != 0x16D0B0u) { ctx->pc = 0x16D0B0u; }
    }
    if (ctx->pc != 0x16D0B0u) { return; }
    ctx->pc = 0x16D0B0u;
    // 0x16d0b0: 0xdfbf0000
    ctx->pc = 0x16d0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d0b4: 0x3e00008
    ctx->pc = 0x16D0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D0B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D0BCu;
}
