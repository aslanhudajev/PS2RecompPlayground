#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: skipExec__20SystemTaskLevelCheckFv
// Address: 0x219ce0 - 0x219d08
void skipExec__20SystemTaskLevelCheckFv_0x219ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("skipExec__20SystemTaskLevelCheckFv");


    ctx->pc = 0x219ce0u;

    // 0x219ce0: 0x27bdfff0
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219ce4: 0x3c020029
    ctx->pc = 0x219ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x219ce8: 0x7fbf0000
    ctx->pc = 0x219ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219cec: 0x2442be78
    ctx->pc = 0x219cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950520));
    // 0x219cf0: 0x8c420008
    ctx->pc = 0x219cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x219cf4: 0xc068b1c
    ctx->pc = 0x219CF4u;
    SET_GPR_U32(ctx, 31, 0x219CFCu);
    ctx->pc = 0x219CF8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1A2C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        RetryReturn_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219CFCu; }
        else if (ctx->pc != 0x219CFCu) { ctx->pc = 0x219CFCu; }
    }
    if (ctx->pc != 0x219CFCu) { return; }
    ctx->pc = 0x219CFCu;
    // 0x219cfc: 0x7bbf0000
    ctx->pc = 0x219cfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d00: 0x3e00008
    ctx->pc = 0x219D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219D08u;
}
