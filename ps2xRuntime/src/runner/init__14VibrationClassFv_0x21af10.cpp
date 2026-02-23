#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__14VibrationClassFv
// Address: 0x21af10 - 0x21af2c
void init__14VibrationClassFv_0x21af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__14VibrationClassFv");


    ctx->pc = 0x21af10u;

    // 0x21af10: 0x27bdfff0
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21af14: 0x7fbf0000
    ctx->pc = 0x21af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21af18: 0xc086bd4
    ctx->pc = 0x21AF18u;
    SET_GPR_U32(ctx, 31, 0x21AF20u);
    ctx->pc = 0x21AF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        stop__14VibrationClassFv_0x21af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF20u; }
        else if (ctx->pc != 0x21AF20u) { ctx->pc = 0x21AF20u; }
    }
    if (ctx->pc != 0x21AF20u) { return; }
    ctx->pc = 0x21AF20u;
    // 0x21af20: 0x7bbf0000
    ctx->pc = 0x21af20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21af24: 0x3e00008
    ctx->pc = 0x21AF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AF2Cu;
}
