#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingAddRead
// Address: 0x191e78 - 0x191e94
void SFBUF_RingAddRead_0x191e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingAddRead");


    ctx->pc = 0x191e78u;

    // 0x191e78: 0x27bdfff0
    ctx->pc = 0x191e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191e7c: 0xffbf0000
    ctx->pc = 0x191e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191e80: 0xc0647a6
    ctx->pc = 0x191E80u;
    SET_GPR_U32(ctx, 31, 0x191E88u);
    ctx->pc = 0x191E84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x191E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_RingAddSub_0x191e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E88u; }
        else if (ctx->pc != 0x191E88u) { ctx->pc = 0x191E88u; }
    }
    if (ctx->pc != 0x191E88u) { return; }
    ctx->pc = 0x191E88u;
    // 0x191e88: 0xdfbf0000
    ctx->pc = 0x191e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191e8c: 0x3e00008
    ctx->pc = 0x191E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191E90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191E94u;
}
