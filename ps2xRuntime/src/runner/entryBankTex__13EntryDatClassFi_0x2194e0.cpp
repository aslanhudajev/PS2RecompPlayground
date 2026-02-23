#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankTex__13EntryDatClassFi
// Address: 0x2194e0 - 0x219514
void entryBankTex__13EntryDatClassFi_0x2194e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankTex__13EntryDatClassFi");


    ctx->pc = 0x2194e0u;

    // 0x2194e0: 0x27bdfff0
    ctx->pc = 0x2194e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2194e4: 0x7fbf0000
    ctx->pc = 0x2194e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2194e8: 0x84831002
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x2194ec: 0x24020009
    ctx->pc = 0x2194ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2194f0: 0x31900
    ctx->pc = 0x2194f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2194f4: 0x831821
    ctx->pc = 0x2194f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2194f8: 0xac620000
    ctx->pc = 0x2194f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2194fc: 0xac650008
    ctx->pc = 0x2194fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219500: 0xc0864f0
    ctx->pc = 0x219500u;
    SET_GPR_U32(ctx, 31, 0x219508u);
    ctx->pc = 0x219504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219508u; }
        else if (ctx->pc != 0x219508u) { ctx->pc = 0x219508u; }
    }
    if (ctx->pc != 0x219508u) { return; }
    ctx->pc = 0x219508u;
    // 0x219508: 0x7bbf0000
    ctx->pc = 0x219508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21950c: 0x3e00008
    ctx->pc = 0x21950Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219514u;
}
