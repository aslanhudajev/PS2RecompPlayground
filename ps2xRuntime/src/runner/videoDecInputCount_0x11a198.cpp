#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecInputCount
// Address: 0x11a198 - 0x11a1b4
void videoDecInputCount_0x11a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a198u;

    // 0x11a198: 0x27bdfff0
    ctx->pc = 0x11a198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a19c: 0xffbf0000
    ctx->pc = 0x11a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a1a0: 0xc0472a8
    ctx->pc = 0x11A1A0u;
    SET_GPR_U32(ctx, 31, 0x11A1A8u);
    ctx->pc = 0x11A1A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x11CAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufCount_0x11caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1A8u; }
    }
    if (ctx->pc != 0x11A1A8u) { return; }
    ctx->pc = 0x11A1A8u;
    // 0x11a1a8: 0xdfbf0000
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a1ac: 0x3e00008
    ctx->pc = 0x11A1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A1B4u;
}
