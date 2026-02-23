#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrUhigh
// Address: 0x17e3d0 - 0x17e3ec
void SVM_ExecSvrUhigh_0x17e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrUhigh");


    ctx->pc = 0x17e3d0u;

    // 0x17e3d0: 0x27bdfff0
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e3d4: 0xffbf0000
    ctx->pc = 0x17e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e3d8: 0xc05f874
    ctx->pc = 0x17E3D8u;
    SET_GPR_U32(ctx, 31, 0x17E3E0u);
    ctx->pc = 0x17E3DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3E0u; }
        else if (ctx->pc != 0x17E3E0u) { ctx->pc = 0x17E3E0u; }
    }
    if (ctx->pc != 0x17E3E0u) { return; }
    ctx->pc = 0x17E3E0u;
    // 0x17e3e0: 0xdfbf0000
    ctx->pc = 0x17e3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3e4: 0x3e00008
    ctx->pc = 0x17E3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E3ECu;
}
