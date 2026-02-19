#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitControls
// Address: 0x2040b0 - 0x2040e8
void InitControls_0x2040b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2040b0u;

    // 0x2040b0: 0x27bdfff0
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2040b4: 0xffbf0000
    ctx->pc = 0x2040b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2040b8: 0xc080e9e
    ctx->pc = 0x2040B8u;
    SET_GPR_U32(ctx, 31, 0x2040C0u);
    ctx->pc = 0x203A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_controls_0x203a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C0u; }
    }
    if (ctx->pc != 0x2040C0u) { return; }
    ctx->pc = 0x2040C0u;
    // 0x2040c0: 0xc081010
    ctx->pc = 0x2040C0u;
    SET_GPR_U32(ctx, 31, 0x2040C8u);
    ctx->pc = 0x204040u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearControls_0x204040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C8u; }
    }
    if (ctx->pc != 0x2040C8u) { return; }
    ctx->pc = 0x2040C8u;
    // 0x2040c8: 0xc0822e8
    ctx->pc = 0x2040C8u;
    SET_GPR_U32(ctx, 31, 0x2040D0u);
    ctx->pc = 0x208BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMemCard_0x208ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040D0u; }
    }
    if (ctx->pc != 0x2040D0u) { return; }
    ctx->pc = 0x2040D0u;
    // 0x2040d0: 0x3c030031
    ctx->pc = 0x2040d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2040d4: 0x24020001
    ctx->pc = 0x2040d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040d8: 0xac620f14
    ctx->pc = 0x2040d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3860), GPR_U32(ctx, 2));
    // 0x2040dc: 0xdfbf0000
    ctx->pc = 0x2040dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2040e0: 0x3e00008
    ctx->pc = 0x2040E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2040E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2040E8u;
}
