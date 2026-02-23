#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_OpenFnameEx
// Address: 0x18f840 - 0x18f85c
void MWSTM_OpenFnameEx_0x18f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_OpenFnameEx");


    ctx->pc = 0x18f840u;

    // 0x18f840: 0x27bdfff0
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f844: 0xffbf0000
    ctx->pc = 0x18f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f848: 0xc05c268
    ctx->pc = 0x18F848u;
    SET_GPR_U32(ctx, 31, 0x18F850u);
    ctx->pc = 0x1709A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFnameEx_0x1709a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F850u; }
        else if (ctx->pc != 0x18F850u) { ctx->pc = 0x18F850u; }
    }
    if (ctx->pc != 0x18F850u) { return; }
    ctx->pc = 0x18F850u;
    // 0x18f850: 0xdfbf0000
    ctx->pc = 0x18f850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f854: 0x3e00008
    ctx->pc = 0x18F854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F85Cu;
}
