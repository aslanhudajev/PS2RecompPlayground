#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetPrepDst
// Address: 0x194f20 - 0x194f80
void sfmps_SetPrepDst_0x194f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetPrepDst");


    ctx->pc = 0x194f20u;

    // 0x194f20: 0x27bdffc0
    ctx->pc = 0x194f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194f24: 0xffb00000
    ctx->pc = 0x194f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194f28: 0x80802d
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f2c: 0xffb20020
    ctx->pc = 0x194f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194f30: 0xffb10010
    ctx->pc = 0x194f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x194f34: 0xa0902d
    ctx->pc = 0x194f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f38: 0xffbf0030
    ctx->pc = 0x194f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194f3c: 0x26113058
    ctx->pc = 0x194f3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 12376));
    // 0x194f40: 0x240302d
    ctx->pc = 0x194f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f44: 0xc064a4e
    ctx->pc = 0x194F44u;
    SET_GPR_U32(ctx, 31, 0x194F4Cu);
    ctx->pc = 0x194F48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1716)));
    ctx->pc = 0x192938u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F4Cu; }
        else if (ctx->pc != 0x194F4Cu) { ctx->pc = 0x194F4Cu; }
    }
    if (ctx->pc != 0x194F4Cu) { return; }
    ctx->pc = 0x194F4Cu;
    // 0x194f4c: 0x8e2506b0
    ctx->pc = 0x194f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x194f50: 0x200202d
    ctx->pc = 0x194f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f54: 0xc064a4e
    ctx->pc = 0x194F54u;
    SET_GPR_U32(ctx, 31, 0x194F5Cu);
    ctx->pc = 0x194F58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192938u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F5Cu; }
        else if (ctx->pc != 0x194F5Cu) { ctx->pc = 0x194F5Cu; }
    }
    if (ctx->pc != 0x194F5Cu) { return; }
    ctx->pc = 0x194F5Cu;
    // 0x194f5c: 0x8e2506b8
    ctx->pc = 0x194f5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1720)));
    // 0x194f60: 0x200202d
    ctx->pc = 0x194f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f64: 0x240302d
    ctx->pc = 0x194f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f68: 0xdfbf0030
    ctx->pc = 0x194f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194f6c: 0xdfb20020
    ctx->pc = 0x194f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194f70: 0xdfb10010
    ctx->pc = 0x194f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194f74: 0xdfb00000
    ctx->pc = 0x194f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194f78: 0x8064a4e
    ctx->pc = 0x194F78u;
    ctx->pc = 0x194F7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x192938u;
    SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime); return;
    ctx->pc = 0x194F80u;
}
