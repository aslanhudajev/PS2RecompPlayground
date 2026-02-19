#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iReleaseAlarm
// Address: 0x304368 - 0x304388
void iReleaseAlarm_0x304368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304368u;

    // 0x304368: 0x27bdfff0
    ctx->pc = 0x304368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30436c: 0xffbf0000
    ctx->pc = 0x30436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304370: 0xc0c0cf4
    ctx->pc = 0x304370u;
    SET_GPR_U32(ctx, 31, 0x304378u);
    ctx->pc = 0x3033D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iReleaseAlarm_0x3033d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304378u; }
    }
    if (ctx->pc != 0x304378u) { return; }
    ctx->pc = 0x304378u;
    // 0x304378: 0xf
    ctx->pc = 0x304378u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30437c: 0xdfbf0000
    ctx->pc = 0x30437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304380: 0x3e00008
    ctx->pc = 0x304380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304388u;
}
