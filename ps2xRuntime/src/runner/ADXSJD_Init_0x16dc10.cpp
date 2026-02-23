#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_Init
// Address: 0x16dc10 - 0x16dc3c
void ADXSJD_Init_0x16dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Init");


    ctx->pc = 0x16dc10u;

    // 0x16dc10: 0x27bdfff0
    ctx->pc = 0x16dc10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dc14: 0xffbf0000
    ctx->pc = 0x16dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dc18: 0xc059eda
    ctx->pc = 0x16DC18u;
    SET_GPR_U32(ctx, 31, 0x16DC20u);
    ctx->pc = 0x167B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Init_0x167b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC20u; }
        else if (ctx->pc != 0x16DC20u) { ctx->pc = 0x16DC20u; }
    }
    if (ctx->pc != 0x16DC20u) { return; }
    ctx->pc = 0x16DC20u;
    // 0x16dc20: 0x3c040023
    ctx->pc = 0x16dc20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16dc24: 0xdfbf0000
    ctx->pc = 0x16dc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dc28: 0x282d
    ctx->pc = 0x16dc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc2c: 0x248456e0
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22240));
    // 0x16dc30: 0x240604e0
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1248));
    // 0x16dc34: 0x8050cfe
    ctx->pc = 0x16DC34u;
    ctx->pc = 0x16DC38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16DC3Cu;
}
