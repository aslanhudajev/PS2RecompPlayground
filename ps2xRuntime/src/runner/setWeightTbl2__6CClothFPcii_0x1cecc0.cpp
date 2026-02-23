#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setWeightTbl2__6CClothFPcii
// Address: 0x1cecc0 - 0x1cecfc
void setWeightTbl2__6CClothFPcii_0x1cecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setWeightTbl2__6CClothFPcii");


    ctx->pc = 0x1cecc0u;

    // 0x1cecc0: 0x3c03002c
    ctx->pc = 0x1cecc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cecc4: 0x64100
    ctx->pc = 0x1cecc4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cecc8: 0x2463e388
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960008));
    // 0x1ceccc: 0x681821
    ctx->pc = 0x1cecccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1cecd0: 0x8c660000
    ctx->pc = 0x1cecd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cecd4: 0x3c03002c
    ctx->pc = 0x1cecd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cecd8: 0x2463e38c
    ctx->pc = 0x1cecd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960012));
    // 0x1cecdc: 0xa63021
    ctx->pc = 0x1cecdcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cece0: 0x681821
    ctx->pc = 0x1cece0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1cece4: 0xac86002c
    ctx->pc = 0x1cece4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x1cece8: 0x8c630000
    ctx->pc = 0x1cece8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cecec: 0xa31821
    ctx->pc = 0x1cececu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cecf0: 0xac830028
    ctx->pc = 0x1cecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1cecf4: 0x3e00008
    ctx->pc = 0x1CECF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECF8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CECFCu;
}
