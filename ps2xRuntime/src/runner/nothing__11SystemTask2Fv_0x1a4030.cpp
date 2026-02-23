#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nothing__11SystemTask2Fv
// Address: 0x1a4030 - 0x1a404c
void nothing__11SystemTask2Fv_0x1a4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nothing__11SystemTask2Fv");


    ctx->pc = 0x1a4030u;

    // 0x1a4030: 0x27bdfff0
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4034: 0x7fbf0000
    ctx->pc = 0x1a4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a4038: 0xc068fe0
    ctx->pc = 0x1A4038u;
    SET_GPR_U32(ctx, 31, 0x1A4040u);
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4040u; }
        else if (ctx->pc != 0x1A4040u) { ctx->pc = 0x1A4040u; }
    }
    if (ctx->pc != 0x1A4040u) { return; }
    ctx->pc = 0x1A4040u;
    // 0x1a4040: 0x7bbf0000
    ctx->pc = 0x1a4040u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4044: 0x3e00008
    ctx->pc = 0x1A4044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A404Cu;
}
