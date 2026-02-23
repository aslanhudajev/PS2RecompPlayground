#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__16ScrBlurCtrlClassFv
// Address: 0x2164a0 - 0x2164dc
void init__16ScrBlurCtrlClassFv_0x2164a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__16ScrBlurCtrlClassFv");


    ctx->pc = 0x2164a0u;

    // 0x2164a0: 0x27bdffe0
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2164a4: 0x7fbf0010
    ctx->pc = 0x2164a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2164a8: 0x7fb00000
    ctx->pc = 0x2164a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2164ac: 0xc06c2ac
    ctx->pc = 0x2164ACu;
    SET_GPR_U32(ctx, 31, 0x2164B4u);
    ctx->pc = 0x2164B0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurInit_0x1b0ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164B4u; }
        else if (ctx->pc != 0x2164B4u) { ctx->pc = 0x2164B4u; }
    }
    if (ctx->pc != 0x2164B4u) { return; }
    ctx->pc = 0x2164B4u;
    // 0x2164b4: 0xae000000
    ctx->pc = 0x2164b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2164b8: 0x3c0342e4
    ctx->pc = 0x2164b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17124 << 16));
    // 0x2164bc: 0xae000004
    ctx->pc = 0x2164bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2164c0: 0x34639999
    ctx->pc = 0x2164c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39321));
    // 0x2164c4: 0xae030008
    ctx->pc = 0x2164c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2164c8: 0xae000014
    ctx->pc = 0x2164c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2164cc: 0x7bbf0010
    ctx->pc = 0x2164ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164d0: 0x7bb00000
    ctx->pc = 0x2164d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2164d4: 0x3e00008
    ctx->pc = 0x2164D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2164D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2164DCu;
}
