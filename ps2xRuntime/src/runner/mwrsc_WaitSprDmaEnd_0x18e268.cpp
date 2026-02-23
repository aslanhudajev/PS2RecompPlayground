#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwrsc_WaitSprDmaEnd
// Address: 0x18e268 - 0x18e288
void mwrsc_WaitSprDmaEnd_0x18e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwrsc_WaitSprDmaEnd");


    ctx->pc = 0x18e268u;

    // 0x18e268: 0x27bdfff0
    ctx->pc = 0x18e268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e26c: 0xffbf0000
    ctx->pc = 0x18e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e270: 0xc0638d6
    ctx->pc = 0x18E270u;
    SET_GPR_U32(ctx, 31, 0x18E278u);
    ctx->pc = 0x18E274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x18E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E278u; }
        else if (ctx->pc != 0x18E278u) { ctx->pc = 0x18E278u; }
    }
    if (ctx->pc != 0x18E278u) { return; }
    ctx->pc = 0x18E278u;
    // 0x18e278: 0xdfbf0000
    ctx->pc = 0x18e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e27c: 0x24040009
    ctx->pc = 0x18e27cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x18e280: 0x80638d6
    ctx->pc = 0x18E280u;
    ctx->pc = 0x18E284u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18E358u;
    MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime); return;
    ctx->pc = 0x18E288u;
}
