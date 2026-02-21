#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseDrawDisplay
// Address: 0x102b18 - 0x102b50
void initialiseDrawDisplay_0x102b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102b18u;

    // 0x102b18: 0x27bdfff0
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102b1c: 0xffbf0000
    ctx->pc = 0x102b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102b20: 0xc043192
    ctx->pc = 0x102B20u;
    SET_GPR_U32(ctx, 31, 0x102B28u);
    ctx->pc = 0x10C648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B28u; }
    }
    if (ctx->pc != 0x102B28u) { return; }
    ctx->pc = 0x102B28u;
    // 0x102b28: 0x3c050019
    ctx->pc = 0x102b28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)25 << 16));
    // 0x102b2c: 0xc04a90c
    ctx->pc = 0x102B2Cu;
    SET_GPR_U32(ctx, 31, 0x102B34u);
    ctx->pc = 0x102B30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x12A430u;
    {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B34u; }
    }
    if (ctx->pc != 0x102B34u) { return; }
    ctx->pc = 0x102B34u;
    // 0x102b34: 0xaf8282b8
    ctx->pc = 0x102b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935224), GPR_U32(ctx, 2));
    // 0x102b38: 0xc043502
    ctx->pc = 0x102B38u;
    SET_GPR_U32(ctx, 31, 0x102B40u);
    ctx->pc = 0x102B3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10D408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x10d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B40u; }
    }
    if (ctx->pc != 0x102B40u) { return; }
    ctx->pc = 0x102B40u;
    // 0x102b40: 0xdfbf0000
    ctx->pc = 0x102b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102b44: 0xaf828490
    ctx->pc = 0x102b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U32(ctx, 2));
    // 0x102b48: 0x8040b2e
    ctx->pc = 0x102B48u;
    ctx->pc = 0x102B4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x102CB8u;
    reInitialiseDrawDisplay_0x102cb8(rdram, ctx, runtime); return;
    ctx->pc = 0x102B50u;
}
