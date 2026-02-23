#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: skipExec__11SystemTask2Fv
// Address: 0x1a4050 - 0x1a4078
void skipExec__11SystemTask2Fv_0x1a4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("skipExec__11SystemTask2Fv");


    ctx->pc = 0x1a4050u;

    // 0x1a4050: 0x27bdfff0
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4054: 0x3c020026
    ctx->pc = 0x1a4054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a4058: 0x7fbf0000
    ctx->pc = 0x1a4058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a405c: 0x2442e040
    ctx->pc = 0x1a405cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959168));
    // 0x1a4060: 0x8c420008
    ctx->pc = 0x1a4060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a4064: 0xc068b1c
    ctx->pc = 0x1A4064u;
    SET_GPR_U32(ctx, 31, 0x1A406Cu);
    ctx->pc = 0x1A4068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1A2C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        RetryReturn_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A406Cu; }
        else if (ctx->pc != 0x1A406Cu) { ctx->pc = 0x1A406Cu; }
    }
    if (ctx->pc != 0x1A406Cu) { return; }
    ctx->pc = 0x1A406Cu;
    // 0x1a406c: 0x7bbf0000
    ctx->pc = 0x1a406cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4070: 0x3e00008
    ctx->pc = 0x1A4070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4074u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4078u;
}
