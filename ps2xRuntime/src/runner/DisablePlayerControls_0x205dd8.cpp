#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisablePlayerControls
// Address: 0x205dd8 - 0x205e08
void DisablePlayerControls_0x205dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205dd8u;

    // 0x205dd8: 0x27bdfff0
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205ddc: 0xffbf0000
    ctx->pc = 0x205ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205de0: 0xc081748
    ctx->pc = 0x205DE0u;
    SET_GPR_U32(ctx, 31, 0x205DE8u);
    ctx->pc = 0x205D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayerControls_0x205d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DE8u; }
    }
    if (ctx->pc != 0x205DE8u) { return; }
    ctx->pc = 0x205DE8u;
    // 0x205de8: 0xc0816cc
    ctx->pc = 0x205DE8u;
    SET_GPR_U32(ctx, 31, 0x205DF0u);
    ctx->pc = 0x205DECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DF0u; }
    }
    if (ctx->pc != 0x205DF0u) { return; }
    ctx->pc = 0x205DF0u;
    // 0x205df0: 0x3c030031
    ctx->pc = 0x205df0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x205df4: 0x24020001
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x205df8: 0xac621b04
    ctx->pc = 0x205df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6916), GPR_U32(ctx, 2));
    // 0x205dfc: 0xdfbf0000
    ctx->pc = 0x205dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e00: 0x3e00008
    ctx->pc = 0x205E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205E08u;
}
