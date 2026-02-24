#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispatchMpegCbNodata
// Address: 0x11f7d0 - 0x11f7f4
void _dispatchMpegCbNodata_0x11f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f7d0u;

    // 0x11f7d0: 0x27bdffd0
    ctx->pc = 0x11f7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f7d4: 0x24020001
    ctx->pc = 0x11f7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f7d8: 0xffbf0020
    ctx->pc = 0x11f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11f7dc: 0x3a0282d
    ctx->pc = 0x11f7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7e0: 0xc047de0
    ctx->pc = 0x11F7E0u;
    SET_GPR_U32(ctx, 31, 0x11F7E8u);
    ctx->pc = 0x11F7E4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F7E8u; }
    }
    if (ctx->pc != 0x11F7E8u) { return; }
    ctx->pc = 0x11F7E8u;
    // 0x11f7e8: 0xdfbf0020
    ctx->pc = 0x11f7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f7ec: 0x3e00008
    ctx->pc = 0x11F7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F7F4u;
}
