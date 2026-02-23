#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_RingAddRead
// Address: 0x1907f8 - 0x190818
void sfadxt_RingAddRead_0x1907f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_RingAddRead");


    ctx->pc = 0x1907f8u;

    // 0x1907f8: 0x27bdfff0
    ctx->pc = 0x1907f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1907fc: 0xa0302d
    ctx->pc = 0x1907fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190800: 0xffbf0000
    ctx->pc = 0x190800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190804: 0xc06479e
    ctx->pc = 0x190804u;
    SET_GPR_U32(ctx, 31, 0x19080Cu);
    ctx->pc = 0x190808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 17604)));
    ctx->pc = 0x191E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingAddRead_0x191e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19080Cu; }
        else if (ctx->pc != 0x19080Cu) { ctx->pc = 0x19080Cu; }
    }
    if (ctx->pc != 0x19080Cu) { return; }
    ctx->pc = 0x19080Cu;
    // 0x19080c: 0xdfbf0000
    ctx->pc = 0x19080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190810: 0x3e00008
    ctx->pc = 0x190810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190818u;
}
