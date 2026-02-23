#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrMwIdle
// Address: 0x17e410 - 0x17e42c
void SVM_ExecSvrMwIdle_0x17e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrMwIdle");


    ctx->pc = 0x17e410u;

    // 0x17e410: 0x27bdfff0
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e414: 0xffbf0000
    ctx->pc = 0x17e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e418: 0xc05f874
    ctx->pc = 0x17E418u;
    SET_GPR_U32(ctx, 31, 0x17E420u);
    ctx->pc = 0x17E41Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E420u; }
        else if (ctx->pc != 0x17E420u) { ctx->pc = 0x17E420u; }
    }
    if (ctx->pc != 0x17E420u) { return; }
    ctx->pc = 0x17E420u;
    // 0x17e420: 0xdfbf0000
    ctx->pc = 0x17e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e424: 0x3e00008
    ctx->pc = 0x17E424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E42Cu;
}
