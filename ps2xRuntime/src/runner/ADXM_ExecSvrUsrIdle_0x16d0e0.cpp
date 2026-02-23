#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecSvrUsrIdle
// Address: 0x16d0e0 - 0x16d0fc
void ADXM_ExecSvrUsrIdle_0x16d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecSvrUsrIdle");


    ctx->pc = 0x16d0e0u;

    // 0x16d0e0: 0x27bdfff0
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d0e4: 0xffbf0000
    ctx->pc = 0x16d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d0e8: 0xc05f90c
    ctx->pc = 0x16D0E8u;
    SET_GPR_U32(ctx, 31, 0x16D0F0u);
    ctx->pc = 0x17E430u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrUsrIdle_0x17e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0F0u; }
        else if (ctx->pc != 0x16D0F0u) { ctx->pc = 0x16D0F0u; }
    }
    if (ctx->pc != 0x16D0F0u) { return; }
    ctx->pc = 0x16D0F0u;
    // 0x16d0f0: 0xdfbf0000
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d0f4: 0x3e00008
    ctx->pc = 0x16D0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D0F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D0FCu;
}
