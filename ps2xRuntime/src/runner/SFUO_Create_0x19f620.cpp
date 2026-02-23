#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFUO_Create
// Address: 0x19f620 - 0x19f644
void SFUO_Create_0x19f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFUO_Create");


    ctx->pc = 0x19f620u;

    // 0x19f620: 0x27bdfff0
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f624: 0x24856080
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 24704));
    // 0x19f628: 0xffbf0000
    ctx->pc = 0x19f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f62c: 0xc067d92
    ctx->pc = 0x19F62Cu;
    SET_GPR_U32(ctx, 31, 0x19F634u);
    ctx->pc = 0x19F630u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 26404)));
    ctx->pc = 0x19F648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_InitInf_0x19f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F634u; }
        else if (ctx->pc != 0x19F634u) { ctx->pc = 0x19F634u; }
    }
    if (ctx->pc != 0x19F634u) { return; }
    ctx->pc = 0x19F634u;
    // 0x19f634: 0xdfbf0000
    ctx->pc = 0x19f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f638: 0x102d
    ctx->pc = 0x19f638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f63c: 0x3e00008
    ctx->pc = 0x19F63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F640u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F644u;
}
