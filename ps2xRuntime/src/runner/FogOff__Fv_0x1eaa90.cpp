#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FogOff__Fv
// Address: 0x1eaa90 - 0x1eaad8
void FogOff__Fv_0x1eaa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FogOff__Fv");


    ctx->pc = 0x1eaa90u;

    // 0x1eaa90: 0x27bdfff0
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eaa94: 0x3c0200ff
    ctx->pc = 0x1eaa94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x1eaa98: 0x7fbf0000
    ctx->pc = 0x1eaa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eaa9c: 0xc06993c
    ctx->pc = 0x1EAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1EAAA4u);
    ctx->pc = 0x1EAAA0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1A64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFogTableColor_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAA4u; }
        else if (ctx->pc != 0x1EAAA4u) { ctx->pc = 0x1EAAA4u; }
    }
    if (ctx->pc != 0x1EAAA4u) { return; }
    ctx->pc = 0x1EAAA4u;
    // 0x1eaaa4: 0x44806000
    ctx->pc = 0x1eaaa4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1eaaa8: 0xc069960
    ctx->pc = 0x1EAAA8u;
    SET_GPR_U32(ctx, 31, 0x1EAAB0u);
    ctx->pc = 0x1EAAACu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1A6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFog_0x1a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAB0u; }
        else if (ctx->pc != 0x1EAAB0u) { ctx->pc = 0x1EAAB0u; }
    }
    if (ctx->pc != 0x1EAAB0u) { return; }
    ctx->pc = 0x1EAAB0u;
    // 0x1eaab0: 0x44806000
    ctx->pc = 0x1eaab0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1eaab4: 0x3c020027
    ctx->pc = 0x1eaab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eaab8: 0x2444c090
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x1eaabc: 0xc069988
    ctx->pc = 0x1EAABCu;
    SET_GPR_U32(ctx, 31, 0x1EAAC4u);
    ctx->pc = 0x1EAAC0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1A6620u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetLayerFog_0x1a6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAC4u; }
        else if (ctx->pc != 0x1EAAC4u) { ctx->pc = 0x1EAAC4u; }
    }
    if (ctx->pc != 0x1EAAC4u) { return; }
    ctx->pc = 0x1EAAC4u;
    // 0x1eaac4: 0xc0699a8
    ctx->pc = 0x1EAAC4u;
    SET_GPR_U32(ctx, 31, 0x1EAACCu);
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSendFog_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAACCu; }
        else if (ctx->pc != 0x1EAACCu) { ctx->pc = 0x1EAACCu; }
    }
    if (ctx->pc != 0x1EAACCu) { return; }
    ctx->pc = 0x1EAACCu;
    // 0x1eaacc: 0x7bbf0000
    ctx->pc = 0x1eaaccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaad0: 0x3e00008
    ctx->pc = 0x1EAAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAAD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAAD8u;
}
