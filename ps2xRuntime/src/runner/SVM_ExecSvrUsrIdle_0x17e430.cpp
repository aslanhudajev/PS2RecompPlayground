#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrUsrIdle
// Address: 0x17e430 - 0x17e44c
void SVM_ExecSvrUsrIdle_0x17e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrUsrIdle");


    ctx->pc = 0x17e430u;

    // 0x17e430: 0x27bdfff0
    ctx->pc = 0x17e430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e434: 0xffbf0000
    ctx->pc = 0x17e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e438: 0xc05f874
    ctx->pc = 0x17E438u;
    SET_GPR_U32(ctx, 31, 0x17E440u);
    ctx->pc = 0x17E43Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E440u; }
        else if (ctx->pc != 0x17E440u) { ctx->pc = 0x17E440u; }
    }
    if (ctx->pc != 0x17E440u) { return; }
    ctx->pc = 0x17E440u;
    // 0x17e440: 0xdfbf0000
    ctx->pc = 0x17e440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e444: 0x3e00008
    ctx->pc = 0x17E444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E44Cu;
}
