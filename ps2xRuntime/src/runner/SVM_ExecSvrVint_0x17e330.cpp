#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrVint
// Address: 0x17e330 - 0x17e34c
void SVM_ExecSvrVint_0x17e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrVint");


    ctx->pc = 0x17e330u;

    // 0x17e330: 0x27bdfff0
    ctx->pc = 0x17e330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e334: 0xffbf0000
    ctx->pc = 0x17e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e338: 0xc05f874
    ctx->pc = 0x17E338u;
    SET_GPR_U32(ctx, 31, 0x17E340u);
    ctx->pc = 0x17E33Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E340u; }
        else if (ctx->pc != 0x17E340u) { ctx->pc = 0x17E340u; }
    }
    if (ctx->pc != 0x17E340u) { return; }
    ctx->pc = 0x17E340u;
    // 0x17e340: 0xdfbf0000
    ctx->pc = 0x17e340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e344: 0x3e00008
    ctx->pc = 0x17E344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E34Cu;
}
