#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingAddWrite
// Address: 0x191e58 - 0x191e74
void SFBUF_RingAddWrite_0x191e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingAddWrite");


    ctx->pc = 0x191e58u;

    // 0x191e58: 0x27bdfff0
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191e5c: 0xffbf0000
    ctx->pc = 0x191e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191e60: 0xc0647a6
    ctx->pc = 0x191E60u;
    SET_GPR_U32(ctx, 31, 0x191E68u);
    ctx->pc = 0x191E64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_RingAddSub_0x191e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E68u; }
        else if (ctx->pc != 0x191E68u) { ctx->pc = 0x191E68u; }
    }
    if (ctx->pc != 0x191E68u) { return; }
    ctx->pc = 0x191E68u;
    // 0x191e68: 0xdfbf0000
    ctx->pc = 0x191e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191e6c: 0x3e00008
    ctx->pc = 0x191E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191E74u;
}
