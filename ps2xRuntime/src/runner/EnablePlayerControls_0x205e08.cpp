#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnablePlayerControls
// Address: 0x205e08 - 0x205e28
void EnablePlayerControls_0x205e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205e08u;

    // 0x205e08: 0x27bdfff0
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205e0c: 0xffbf0000
    ctx->pc = 0x205e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205e10: 0xc081748
    ctx->pc = 0x205E10u;
    SET_GPR_U32(ctx, 31, 0x205E18u);
    ctx->pc = 0x205D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayerControls_0x205d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E18u; }
    }
    if (ctx->pc != 0x205E18u) { return; }
    ctx->pc = 0x205E18u;
    // 0x205e18: 0x24040004
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x205e1c: 0xdfbf0000
    ctx->pc = 0x205e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e20: 0x80816cc
    ctx->pc = 0x205E20u;
    ctx->pc = 0x205E24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x205B30u;
    ClearAllPlayerControls_0x205b30(rdram, ctx, runtime); return;
    ctx->pc = 0x205E28u;
}
