#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_Nfrm2Pts
// Address: 0x196da0 - 0x196dc4
void sfmpv_Nfrm2Pts_0x196da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_Nfrm2Pts");


    ctx->pc = 0x196da0u;

    // 0x196da0: 0xa0302d
    ctx->pc = 0x196da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196da4: 0x27bdfff0
    ctx->pc = 0x196da4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196da8: 0x3c050157
    ctx->pc = 0x196da8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)343 << 16));
    // 0x196dac: 0xffbf0000
    ctx->pc = 0x196dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196db0: 0xc063132
    ctx->pc = 0x196DB0u;
    SET_GPR_U32(ctx, 31, 0x196DB8u);
    ctx->pc = 0x196DB4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21152));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DB8u; }
        else if (ctx->pc != 0x196DB8u) { ctx->pc = 0x196DB8u; }
    }
    if (ctx->pc != 0x196DB8u) { return; }
    ctx->pc = 0x196DB8u;
    // 0x196db8: 0xdfbf0000
    ctx->pc = 0x196db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196dbc: 0x3e00008
    ctx->pc = 0x196DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196DC4u;
}
