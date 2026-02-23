#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _InitSys
// Address: 0x15ca18 - 0x15ca3c
void ps2__InitSys_0x15ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__InitSys");


    ctx->pc = 0x15ca18u;

    // 0x15ca18: 0x27bdfff0
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ca1c: 0xffbf0000
    ctx->pc = 0x15ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ca20: 0xc057274
    ctx->pc = 0x15CA20u;
    SET_GPR_U32(ctx, 31, 0x15CA28u);
    ctx->pc = 0x15C9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        supplement_crt0_0x15c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA28u; }
        else if (ctx->pc != 0x15CA28u) { ctx->pc = 0x15CA28u; }
    }
    if (ctx->pc != 0x15CA28u) { return; }
    ctx->pc = 0x15CA28u;
    // 0x15ca28: 0xc055564
    ctx->pc = 0x15CA28u;
    SET_GPR_U32(ctx, 31, 0x15CA30u);
    ctx->pc = 0x155590u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAlarm_0x155590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA30u; }
        else if (ctx->pc != 0x15CA30u) { ctx->pc = 0x15CA30u; }
    }
    if (ctx->pc != 0x15CA30u) { return; }
    ctx->pc = 0x15CA30u;
    // 0x15ca30: 0xdfbf0000
    ctx->pc = 0x15ca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca34: 0x80555d0
    ctx->pc = 0x15CA34u;
    ctx->pc = 0x15CA38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x155740u;
    InitThread_0x155740(rdram, ctx, runtime); return;
    ctx->pc = 0x15CA3Cu;
}
