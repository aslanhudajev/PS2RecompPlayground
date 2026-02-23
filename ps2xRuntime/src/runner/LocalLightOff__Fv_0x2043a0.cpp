#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LocalLightOff__Fv
// Address: 0x2043a0 - 0x2043bc
void LocalLightOff__Fv_0x2043a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LocalLightOff__Fv");


    ctx->pc = 0x2043a0u;

    // 0x2043a0: 0x27bdfff0
    ctx->pc = 0x2043a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2043a4: 0x7fbf0000
    ctx->pc = 0x2043a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2043a8: 0xc07c32c
    ctx->pc = 0x2043A8u;
    SET_GPR_U32(ctx, 31, 0x2043B0u);
    ctx->pc = 0x2043ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PopLight__13LightCtrlTaskFv_0x1f0cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043B0u; }
        else if (ctx->pc != 0x2043B0u) { ctx->pc = 0x2043B0u; }
    }
    if (ctx->pc != 0x2043B0u) { return; }
    ctx->pc = 0x2043B0u;
    // 0x2043b0: 0x7bbf0000
    ctx->pc = 0x2043b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2043b4: 0x3e00008
    ctx->pc = 0x2043B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2043B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2043BCu;
}
