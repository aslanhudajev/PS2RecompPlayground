#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispatchMpegCbNodata
// Address: 0x2ee120 - 0x2ee144
void _dispatchMpegCbNodata_0x2ee120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee120u;

    // 0x2ee120: 0x27bdffd0
    ctx->pc = 0x2ee120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee124: 0x24020001
    ctx->pc = 0x2ee124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee128: 0xffbf0020
    ctx->pc = 0x2ee128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ee12c: 0x3a0282d
    ctx->pc = 0x2ee12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee130: 0xc0bb834
    ctx->pc = 0x2EE130u;
    SET_GPR_U32(ctx, 31, 0x2EE138u);
    ctx->pc = 0x2EE134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE138u; }
    }
    if (ctx->pc != 0x2EE138u) { return; }
    ctx->pc = 0x2EE138u;
    // 0x2ee138: 0xdfbf0020
    ctx->pc = 0x2ee138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee13c: 0x3e00008
    ctx->pc = 0x2EE13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE144u;
}
