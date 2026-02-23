#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSprPutForce
// Address: 0x1ae7e0 - 0x1ae800
void nlSprPutForce_0x1ae7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSprPutForce");


    ctx->pc = 0x1ae7e0u;

    // 0x1ae7e0: 0x27bdfff0
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae7e4: 0x7fbf0000
    ctx->pc = 0x1ae7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ae7e8: 0xc06b750
    ctx->pc = 0x1AE7E8u;
    SET_GPR_U32(ctx, 31, 0x1AE7F0u);
    ctx->pc = 0x1ADD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutSub_0x1add40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7F0u; }
        else if (ctx->pc != 0x1AE7F0u) { ctx->pc = 0x1AE7F0u; }
    }
    if (ctx->pc != 0x1AE7F0u) { return; }
    ctx->pc = 0x1AE7F0u;
    // 0x1ae7f0: 0x7bbf0000
    ctx->pc = 0x1ae7f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae7f4: 0x70001628
    ctx->pc = 0x1ae7f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae7f8: 0x3e00008
    ctx->pc = 0x1AE7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE800u;
}
