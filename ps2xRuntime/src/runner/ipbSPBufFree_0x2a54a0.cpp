#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbSPBufFree
// Address: 0x2a54a0 - 0x2a54dc
void ipbSPBufFree_0x2a54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a54a0u;

    // 0x2a54a0: 0x27bdffd0
    ctx->pc = 0x2a54a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a54a4: 0xffbf0020
    ctx->pc = 0x2a54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a54a8: 0x3c020036
    ctx->pc = 0x2a54a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a54ac: 0x8c43dee0
    ctx->pc = 0x2a54acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a54b0: 0x8c620034
    ctx->pc = 0x2a54b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a54b4: 0x8c420004
    ctx->pc = 0x2a54b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a54b8: 0xac820000
    ctx->pc = 0x2a54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a54bc: 0x8c620034
    ctx->pc = 0x2a54bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a54c0: 0xac440004
    ctx->pc = 0x2a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2a54c4: 0x8c620034
    ctx->pc = 0x2a54c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a54c8: 0xc0c0d84
    ctx->pc = 0x2A54C8u;
    SET_GPR_U32(ctx, 31, 0x2A54D0u);
    ctx->pc = 0x2A54CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A54D0u; }
    }
    if (ctx->pc != 0x2A54D0u) { return; }
    ctx->pc = 0x2A54D0u;
    // 0x2a54d0: 0xdfbf0020
    ctx->pc = 0x2a54d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a54d4: 0x3e00008
    ctx->pc = 0x2A54D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A54D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A54DCu;
}
