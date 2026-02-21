#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadTowerDone
// Address: 0x226858 - 0x226878
void LoadTowerDone_0x226858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226858u;

    // 0x226858: 0x27bdfff0
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22685c: 0xffbf0000
    ctx->pc = 0x22685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226860: 0x24040001
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226864: 0xc09908c
    ctx->pc = 0x226864u;
    SET_GPR_U32(ctx, 31, 0x22686Cu);
    ctx->pc = 0x226868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22686Cu; }
    }
    if (ctx->pc != 0x22686Cu) { return; }
    ctx->pc = 0x22686Cu;
    // 0x22686c: 0xdfbf0000
    ctx->pc = 0x22686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226870: 0x3e00008
    ctx->pc = 0x226870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226874u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226878u;
}
