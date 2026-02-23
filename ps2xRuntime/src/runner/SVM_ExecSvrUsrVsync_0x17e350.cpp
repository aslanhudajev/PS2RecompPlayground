#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrUsrVsync
// Address: 0x17e350 - 0x17e36c
void SVM_ExecSvrUsrVsync_0x17e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrUsrVsync");


    ctx->pc = 0x17e350u;

    // 0x17e350: 0x27bdfff0
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e354: 0xffbf0000
    ctx->pc = 0x17e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e358: 0xc05f874
    ctx->pc = 0x17E358u;
    SET_GPR_U32(ctx, 31, 0x17E360u);
    ctx->pc = 0x17E35Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17E1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrFunc_0x17e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E360u; }
        else if (ctx->pc != 0x17E360u) { ctx->pc = 0x17E360u; }
    }
    if (ctx->pc != 0x17E360u) { return; }
    ctx->pc = 0x17E360u;
    // 0x17e360: 0xdfbf0000
    ctx->pc = 0x17e360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e364: 0x3e00008
    ctx->pc = 0x17E364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E36Cu;
}
