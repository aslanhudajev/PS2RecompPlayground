#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrVsync
// Address: 0x17e370 - 0x17e38c
void SVM_ExecSvrVsync_0x17e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrVsync");


    ctx->pc = 0x17e370u;

    // 0x17e370: 0x27bdfff0
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e374: 0xffbf0000
    ctx->pc = 0x17e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e378: 0xc05f874
    ctx->pc = 0x17E378u;
    SET_GPR_U32(ctx, 31, 0x17E380u);
    ctx->pc = 0x17E37Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E380u; }
        else if (ctx->pc != 0x17E380u) { ctx->pc = 0x17E380u; }
    }
    if (ctx->pc != 0x17E380u) { return; }
    ctx->pc = 0x17E380u;
    // 0x17e380: 0xdfbf0000
    ctx->pc = 0x17e380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e384: 0x3e00008
    ctx->pc = 0x17E384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E388u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E38Cu;
}
