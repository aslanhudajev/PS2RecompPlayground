#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _InitSys
// Address: 0x115068 - 0x11508c
void ps2__InitSys_0x115068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115068u;

    // 0x115068: 0x27bdfff0
    ctx->pc = 0x115068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11506c: 0xffbf0000
    ctx->pc = 0x11506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115070: 0xc04540a
    ctx->pc = 0x115070u;
    SET_GPR_U32(ctx, 31, 0x115078u);
    ctx->pc = 0x115028u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitSysCall_0x115028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115078u; }
    }
    if (ctx->pc != 0x115078u) { return; }
    ctx->pc = 0x115078u;
    // 0x115078: 0xc043b34
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 31, 0x115080u);
    ctx->pc = 0x10ECD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAlarm_0x10ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115080u; }
    }
    if (ctx->pc != 0x115080u) { return; }
    ctx->pc = 0x115080u;
    // 0x115080: 0xdfbf0000
    ctx->pc = 0x115080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115084: 0x804545a
    ctx->pc = 0x115084u;
    ctx->pc = 0x115088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x115168u;
    InitThread_0x115168(rdram, ctx, runtime); return;
    ctx->pc = 0x11508Cu;
}
