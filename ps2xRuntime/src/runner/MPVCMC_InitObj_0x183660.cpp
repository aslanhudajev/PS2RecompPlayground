#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_InitObj
// Address: 0x183660 - 0x18368c
void MPVCMC_InitObj_0x183660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_InitObj");


    ctx->pc = 0x183660u;

    // 0x183660: 0x27bdffe0
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183664: 0xffb00000
    ctx->pc = 0x183664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183668: 0x80802d
    ctx->pc = 0x183668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18366c: 0xffbf0010
    ctx->pc = 0x18366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183670: 0xc06214c
    ctx->pc = 0x183670u;
    SET_GPR_U32(ctx, 31, 0x183678u);
    ctx->pc = 0x183674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 196));
    ctx->pc = 0x188530u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVMC_Init_0x188530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183678u; }
        else if (ctx->pc != 0x183678u) { ctx->pc = 0x183678u; }
    }
    if (ctx->pc != 0x183678u) { return; }
    ctx->pc = 0x183678u;
    // 0x183678: 0x200202d
    ctx->pc = 0x183678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18367c: 0xdfbf0010
    ctx->pc = 0x18367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183680: 0xdfb00000
    ctx->pc = 0x183680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183684: 0x8060da4
    ctx->pc = 0x183684u;
    ctx->pc = 0x183688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x183690u;
    mpvcmc_InitMcOiTa_0x183690(rdram, ctx, runtime); return;
    ctx->pc = 0x18368Cu;
}
