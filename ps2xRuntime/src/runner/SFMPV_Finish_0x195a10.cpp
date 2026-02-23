#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_Finish
// Address: 0x195a10 - 0x195a30
void SFMPV_Finish_0x195a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_Finish");


    ctx->pc = 0x195a10u;

    // 0x195a10: 0x27bdfff0
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195a14: 0xffbf0000
    ctx->pc = 0x195a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195a18: 0xc0620a4
    ctx->pc = 0x195A18u;
    SET_GPR_U32(ctx, 31, 0x195A20u);
    ctx->pc = 0x188290u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_Finish_0x188290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A20u; }
        else if (ctx->pc != 0x195A20u) { ctx->pc = 0x195A20u; }
    }
    if (ctx->pc != 0x195A20u) { return; }
    ctx->pc = 0x195A20u;
    // 0x195a20: 0xdfbf0000
    ctx->pc = 0x195a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a24: 0x102d
    ctx->pc = 0x195a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a28: 0x3e00008
    ctx->pc = 0x195A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195A30u;
}
