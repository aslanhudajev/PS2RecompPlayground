#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrMain
// Address: 0x17e3f0 - 0x17e40c
void SVM_ExecSvrMain_0x17e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrMain");


    ctx->pc = 0x17e3f0u;

    // 0x17e3f0: 0x27bdfff0
    ctx->pc = 0x17e3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e3f4: 0xffbf0000
    ctx->pc = 0x17e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e3f8: 0xc05f874
    ctx->pc = 0x17E3F8u;
    SET_GPR_U32(ctx, 31, 0x17E400u);
    ctx->pc = 0x17E3FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E400u; }
        else if (ctx->pc != 0x17E400u) { ctx->pc = 0x17E400u; }
    }
    if (ctx->pc != 0x17E400u) { return; }
    ctx->pc = 0x17E400u;
    // 0x17e400: 0xdfbf0000
    ctx->pc = 0x17e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e404: 0x3e00008
    ctx->pc = 0x17E404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E40Cu;
}
