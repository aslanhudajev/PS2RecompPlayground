#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitMatrixBuf__Fv
// Address: 0x1e2920 - 0x1e2940
void InitMatrixBuf__Fv_0x1e2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitMatrixBuf__Fv");


    ctx->pc = 0x1e2920u;

    // 0x1e2920: 0x27bdfff0
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2924: 0x7fbf0000
    ctx->pc = 0x1e2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e2928: 0x70002628
    ctx->pc = 0x1e2928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e292c: 0xc069198
    ctx->pc = 0x1E292Cu;
    SET_GPR_U32(ctx, 31, 0x1E2934u);
    ctx->pc = 0x1E2930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1A4660u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitMatrix_0x1a4660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2934u; }
        else if (ctx->pc != 0x1E2934u) { ctx->pc = 0x1E2934u; }
    }
    if (ctx->pc != 0x1E2934u) { return; }
    ctx->pc = 0x1E2934u;
    // 0x1e2934: 0x7bbf0000
    ctx->pc = 0x1e2934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2938: 0x3e00008
    ctx->pc = 0x1E2938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E293Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2940u;
}
