#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_Init
// Address: 0x1661f0 - 0x16622c
void ADXAMP_Init_0x1661f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_Init");


    ctx->pc = 0x1661f0u;

    // 0x1661f0: 0x27bdfff0
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1661f4: 0x8f828090
    ctx->pc = 0x1661f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1661f8: 0x14400007
    ctx->pc = 0x1661F8u;
    {
        const bool branch_taken_0x1661f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1661FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1661f8) {
            ctx->pc = 0x166218u;
            goto label_166218;
        }
    }
    ctx->pc = 0x166200u;
    // 0x166200: 0x3c040023
    ctx->pc = 0x166200u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x166204: 0x282d
    ctx->pc = 0x166204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166208: 0x2484ab50
    ctx->pc = 0x166208u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945616));
    // 0x16620c: 0xc050cfe
    ctx->pc = 0x16620Cu;
    SET_GPR_U32(ctx, 31, 0x166214u);
    ctx->pc = 0x166210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166214u; }
        else if (ctx->pc != 0x166214u) { ctx->pc = 0x166214u; }
    }
    if (ctx->pc != 0x166214u) { return; }
    ctx->pc = 0x166214u;
    // 0x166214: 0x8f828090
    ctx->pc = 0x166214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
label_166218:
    // 0x166218: 0x24420001
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16621c: 0xdfbf0000
    ctx->pc = 0x16621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166220: 0xaf828090
    ctx->pc = 0x166220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934672), GPR_U32(ctx, 2));
    // 0x166224: 0x3e00008
    ctx->pc = 0x166224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166228u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166218u: goto label_166218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16622Cu;
}
