#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankCamPath__13EntryDatClassFi
// Address: 0x2196c0 - 0x2196f4
void entryBankCamPath__13EntryDatClassFi_0x2196c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankCamPath__13EntryDatClassFi");


    ctx->pc = 0x2196c0u;

    // 0x2196c0: 0x27bdfff0
    ctx->pc = 0x2196c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2196c4: 0x7fbf0000
    ctx->pc = 0x2196c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2196c8: 0x84831002
    ctx->pc = 0x2196c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x2196cc: 0x24020007
    ctx->pc = 0x2196ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2196d0: 0x31900
    ctx->pc = 0x2196d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2196d4: 0x831821
    ctx->pc = 0x2196d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2196d8: 0xac620000
    ctx->pc = 0x2196d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2196dc: 0xac650008
    ctx->pc = 0x2196dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2196e0: 0xc0864f0
    ctx->pc = 0x2196E0u;
    SET_GPR_U32(ctx, 31, 0x2196E8u);
    ctx->pc = 0x2196E4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196E8u; }
        else if (ctx->pc != 0x2196E8u) { ctx->pc = 0x2196E8u; }
    }
    if (ctx->pc != 0x2196E8u) { return; }
    ctx->pc = 0x2196E8u;
    // 0x2196e8: 0x7bbf0000
    ctx->pc = 0x2196e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2196ec: 0x3e00008
    ctx->pc = 0x2196ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2196F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2196F4u;
}
