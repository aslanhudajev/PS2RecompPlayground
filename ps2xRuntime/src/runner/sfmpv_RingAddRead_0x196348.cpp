#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_RingAddRead
// Address: 0x196348 - 0x196368
void sfmpv_RingAddRead_0x196348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_RingAddRead");


    ctx->pc = 0x196348u;

    // 0x196348: 0x27bdfff0
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19634c: 0xa0302d
    ctx->pc = 0x19634cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196350: 0xffbf0000
    ctx->pc = 0x196350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196354: 0xc06479e
    ctx->pc = 0x196354u;
    SET_GPR_U32(ctx, 31, 0x19635Cu);
    ctx->pc = 0x196358u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 15844)));
    ctx->pc = 0x191E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingAddRead_0x191e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19635Cu; }
        else if (ctx->pc != 0x19635Cu) { ctx->pc = 0x19635Cu; }
    }
    if (ctx->pc != 0x19635Cu) { return; }
    ctx->pc = 0x19635Cu;
    // 0x19635c: 0xdfbf0000
    ctx->pc = 0x19635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196360: 0x3e00008
    ctx->pc = 0x196360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196368u;
}
