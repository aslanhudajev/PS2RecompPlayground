#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegStopDMA
// Address: 0x11a700 - 0x11a724
void mpegStopDMA_0x11a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a700u;

    // 0x11a700: 0x27bdfff0
    ctx->pc = 0x11a700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a704: 0x3c040075
    ctx->pc = 0x11a704u;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a708: 0xffbf0000
    ctx->pc = 0x11a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a70c: 0xc04717a
    ctx->pc = 0x11A70Cu;
    SET_GPR_U32(ctx, 31, 0x11A714u);
    ctx->pc = 0x11A710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960656));
    ctx->pc = 0x11C5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x11c5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A714u; }
    }
    if (ctx->pc != 0x11A714u) { return; }
    ctx->pc = 0x11A714u;
    // 0x11a714: 0xdfbf0000
    ctx->pc = 0x11a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a718: 0x24020001
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a71c: 0x3e00008
    ctx->pc = 0x11A71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A720u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A724u;
}
