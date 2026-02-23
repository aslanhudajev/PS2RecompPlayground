#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingGetRead
// Address: 0x191d50 - 0x191d6c
void SFBUF_RingGetRead_0x191d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingGetRead");


    ctx->pc = 0x191d50u;

    // 0x191d50: 0x27bdfff0
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191d54: 0xffbf0000
    ctx->pc = 0x191d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191d58: 0xc06475c
    ctx->pc = 0x191D58u;
    SET_GPR_U32(ctx, 31, 0x191D60u);
    ctx->pc = 0x191D5Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x191D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_RingGetSub_0x191d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D60u; }
        else if (ctx->pc != 0x191D60u) { ctx->pc = 0x191D60u; }
    }
    if (ctx->pc != 0x191D60u) { return; }
    ctx->pc = 0x191D60u;
    // 0x191d60: 0xdfbf0000
    ctx->pc = 0x191d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191d64: 0x3e00008
    ctx->pc = 0x191D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191D68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191D6Cu;
}
