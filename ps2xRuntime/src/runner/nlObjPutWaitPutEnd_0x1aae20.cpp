#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutWaitPutEnd
// Address: 0x1aae20 - 0x1aae48
void nlObjPutWaitPutEnd_0x1aae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutWaitPutEnd");


    ctx->pc = 0x1aae20u;

    // 0x1aae20: 0x27bdfff0
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aae24: 0x7fbf0000
    ctx->pc = 0x1aae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1aae28: 0x70002628
    ctx->pc = 0x1aae28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aae2c: 0xc0694e8
    ctx->pc = 0x1AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE34u);
    ctx->pc = 0x1AAE30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE34u; }
        else if (ctx->pc != 0x1AAE34u) { ctx->pc = 0x1AAE34u; }
    }
    if (ctx->pc != 0x1AAE34u) { return; }
    ctx->pc = 0x1AAE34u;
    // 0x1aae34: 0xc0694bc
    ctx->pc = 0x1AAE34u;
    SET_GPR_U32(ctx, 31, 0x1AAE3Cu);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE3Cu; }
        else if (ctx->pc != 0x1AAE3Cu) { ctx->pc = 0x1AAE3Cu; }
    }
    if (ctx->pc != 0x1AAE3Cu) { return; }
    ctx->pc = 0x1AAE3Cu;
    // 0x1aae3c: 0x7bbf0000
    ctx->pc = 0x1aae3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae40: 0x3e00008
    ctx->pc = 0x1AAE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAE48u;
}
