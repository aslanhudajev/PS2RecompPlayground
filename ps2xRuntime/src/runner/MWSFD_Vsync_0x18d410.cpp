#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_Vsync
// Address: 0x18d410 - 0x18d448
void MWSFD_Vsync_0x18d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_Vsync");


    ctx->pc = 0x18d410u;

    // 0x18d410: 0x27bdffe0
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d414: 0xffb00000
    ctx->pc = 0x18d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d418: 0xffbf0010
    ctx->pc = 0x18d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d41c: 0xc063188
    ctx->pc = 0x18D41Cu;
    SET_GPR_U32(ctx, 31, 0x18D424u);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D424u; }
        else if (ctx->pc != 0x18D424u) { ctx->pc = 0x18D424u; }
    }
    if (ctx->pc != 0x18D424u) { return; }
    ctx->pc = 0x18D424u;
    // 0x18d424: 0xc0634f4
    ctx->pc = 0x18D424u;
    SET_GPR_U32(ctx, 31, 0x18D42Cu);
    ctx->pc = 0x18D428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdVsync_0x18d3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D42Cu; }
        else if (ctx->pc != 0x18D42Cu) { ctx->pc = 0x18D42Cu; }
    }
    if (ctx->pc != 0x18D42Cu) { return; }
    ctx->pc = 0x18D42Cu;
    // 0x18d42c: 0xc063190
    ctx->pc = 0x18D42Cu;
    SET_GPR_U32(ctx, 31, 0x18D434u);
    ctx->pc = 0x18D430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D434u; }
        else if (ctx->pc != 0x18D434u) { ctx->pc = 0x18D434u; }
    }
    if (ctx->pc != 0x18D434u) { return; }
    ctx->pc = 0x18D434u;
    // 0x18d434: 0xdfbf0010
    ctx->pc = 0x18d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d438: 0x102d
    ctx->pc = 0x18d438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d43c: 0xdfb00000
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d440: 0x3e00008
    ctx->pc = 0x18D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D448u;
}
