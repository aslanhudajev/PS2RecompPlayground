#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrVsync1
// Address: 0x17e3b0 - 0x17e3d0
void SVM_ExecSvrVsync1_0x17e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrVsync1");


    ctx->pc = 0x17e3b0u;

    // 0x17e3b0: 0x27bdfff0
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e3b4: 0x24040002
    ctx->pc = 0x17e3b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e3b8: 0xffbf0000
    ctx->pc = 0x17e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e3bc: 0xc05f8a4
    ctx->pc = 0x17E3BCu;
    SET_GPR_U32(ctx, 31, 0x17E3C4u);
    ctx->pc = 0x17E3C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17E290u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFuncId_0x17e290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3C4u; }
        else if (ctx->pc != 0x17E3C4u) { ctx->pc = 0x17E3C4u; }
    }
    if (ctx->pc != 0x17E3C4u) { return; }
    ctx->pc = 0x17E3C4u;
    // 0x17e3c4: 0xdfbf0000
    ctx->pc = 0x17e3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3c8: 0x3e00008
    ctx->pc = 0x17E3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E3D0u;
}
