#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: voiceStop__13SoundMgrClassFv
// Address: 0x2181b0 - 0x2181cc
void voiceStop__13SoundMgrClassFv_0x2181b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("voiceStop__13SoundMgrClassFv");


    ctx->pc = 0x2181b0u;

    // 0x2181b0: 0x27bdfff0
    ctx->pc = 0x2181b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2181b4: 0x7fbf0000
    ctx->pc = 0x2181b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2181b8: 0xc05c73a
    ctx->pc = 0x2181B8u;
    SET_GPR_U32(ctx, 31, 0x2181C0u);
    ctx->pc = 0x2181BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181C0u; }
        else if (ctx->pc != 0x2181C0u) { ctx->pc = 0x2181C0u; }
    }
    if (ctx->pc != 0x2181C0u) { return; }
    ctx->pc = 0x2181C0u;
    // 0x2181c0: 0x7bbf0000
    ctx->pc = 0x2181c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181c4: 0x3e00008
    ctx->pc = 0x2181C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2181C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2181CCu;
}
