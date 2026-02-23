#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_Init
// Address: 0x167b68 - 0x167b94
void ADXB_Init_0x167b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Init");


    ctx->pc = 0x167b68u;

    // 0x167b68: 0x27bdfff0
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167b6c: 0xffbf0000
    ctx->pc = 0x167b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167b70: 0xc05cfa6
    ctx->pc = 0x167B70u;
    SET_GPR_U32(ctx, 31, 0x167B78u);
    ctx->pc = 0x173E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Init_0x173e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167B78u; }
        else if (ctx->pc != 0x167B78u) { ctx->pc = 0x167B78u; }
    }
    if (ctx->pc != 0x167B78u) { return; }
    ctx->pc = 0x167B78u;
    // 0x167b78: 0x3c040023
    ctx->pc = 0x167b78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x167b7c: 0xdfbf0000
    ctx->pc = 0x167b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167b80: 0x282d
    ctx->pc = 0x167b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b84: 0x2484aed0
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x167b88: 0x240605c0
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1472));
    // 0x167b8c: 0x8050cfe
    ctx->pc = 0x167B8Cu;
    ctx->pc = 0x167B90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x167B94u;
}
