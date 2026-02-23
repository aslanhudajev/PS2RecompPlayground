#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdFinish
// Address: 0x18eb70 - 0x18eb90
void mwPlySfdFinish_0x18eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdFinish");


    ctx->pc = 0x18eb70u;

    // 0x18eb70: 0x27bdfff0
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18eb74: 0xffbf0000
    ctx->pc = 0x18eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18eb78: 0xc064e62
    ctx->pc = 0x18EB78u;
    SET_GPR_U32(ctx, 31, 0x18EB80u);
    ctx->pc = 0x193988u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Finish_0x193988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB80u; }
        else if (ctx->pc != 0x18EB80u) { ctx->pc = 0x18EB80u; }
    }
    if (ctx->pc != 0x18EB80u) { return; }
    ctx->pc = 0x18EB80u;
    // 0x18eb80: 0xdfbf0000
    ctx->pc = 0x18eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eb84: 0x102d
    ctx->pc = 0x18eb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb88: 0x3e00008
    ctx->pc = 0x18EB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EB8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EB90u;
}
