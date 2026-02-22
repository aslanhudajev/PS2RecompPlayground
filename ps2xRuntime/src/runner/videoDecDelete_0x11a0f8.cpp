#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecDelete
// Address: 0x11a0f8 - 0x11a12c
void videoDecDelete_0x11a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0f8u;

    // 0x11a0f8: 0x27bdffe0
    ctx->pc = 0x11a0f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a0fc: 0xffb00000
    ctx->pc = 0x11a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a100: 0x80802d
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a104: 0xffbf0010
    ctx->pc = 0x11a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a108: 0xc047282
    ctx->pc = 0x11A108u;
    SET_GPR_U32(ctx, 31, 0x11A110u);
    ctx->pc = 0x11A10Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x11CA08u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete_0x11ca08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A110u; }
    }
    if (ctx->pc != 0x11A110u) { return; }
    ctx->pc = 0x11A110u;
    // 0x11a110: 0xc047d4e
    ctx->pc = 0x11A110u;
    SET_GPR_U32(ctx, 31, 0x11A118u);
    ctx->pc = 0x11A114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F538u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDelete_0x11f538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A118u; }
    }
    if (ctx->pc != 0x11A118u) { return; }
    ctx->pc = 0x11A118u;
    // 0x11a118: 0xdfbf0010
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a11c: 0x24020001
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a120: 0xdfb00000
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a124: 0x3e00008
    ctx->pc = 0x11A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A12Cu;
}
