#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DestroySub
// Address: 0x198920 - 0x19893c
void sfmpv_DestroySub_0x198920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DestroySub");


    ctx->pc = 0x198920u;

    // 0x198920: 0x27bdfff0
    ctx->pc = 0x198920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198924: 0xffbf0000
    ctx->pc = 0x198924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198928: 0xc0620f0
    ctx->pc = 0x198928u;
    SET_GPR_U32(ctx, 31, 0x198930u);
    ctx->pc = 0x1883C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_Destroy_0x1883c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198930u; }
        else if (ctx->pc != 0x198930u) { ctx->pc = 0x198930u; }
    }
    if (ctx->pc != 0x198930u) { return; }
    ctx->pc = 0x198930u;
    // 0x198930: 0xdfbf0000
    ctx->pc = 0x198930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198934: 0x3e00008
    ctx->pc = 0x198934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19893Cu;
}
