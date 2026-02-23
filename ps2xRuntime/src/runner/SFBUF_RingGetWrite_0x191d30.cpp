#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingGetWrite
// Address: 0x191d30 - 0x191d4c
void SFBUF_RingGetWrite_0x191d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingGetWrite");


    ctx->pc = 0x191d30u;

    // 0x191d30: 0x27bdfff0
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191d34: 0xffbf0000
    ctx->pc = 0x191d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191d38: 0xc06475c
    ctx->pc = 0x191D38u;
    SET_GPR_U32(ctx, 31, 0x191D40u);
    ctx->pc = 0x191D3Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_RingGetSub_0x191d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D40u; }
        else if (ctx->pc != 0x191D40u) { ctx->pc = 0x191D40u; }
    }
    if (ctx->pc != 0x191D40u) { return; }
    ctx->pc = 0x191D40u;
    // 0x191d40: 0xdfbf0000
    ctx->pc = 0x191d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191d44: 0x3e00008
    ctx->pc = 0x191D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191D4Cu;
}
