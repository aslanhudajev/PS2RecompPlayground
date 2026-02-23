#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entrySndPack__13EntryDatClassFi
// Address: 0x219b40 - 0x219b74
void entrySndPack__13EntryDatClassFi_0x219b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entrySndPack__13EntryDatClassFi");


    ctx->pc = 0x219b40u;

    // 0x219b40: 0x27bdfff0
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219b44: 0x7fbf0000
    ctx->pc = 0x219b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219b48: 0x84831002
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219b4c: 0x2402001b
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x219b50: 0x31900
    ctx->pc = 0x219b50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219b54: 0x831821
    ctx->pc = 0x219b54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219b58: 0xac620000
    ctx->pc = 0x219b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219b5c: 0xac650008
    ctx->pc = 0x219b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219b60: 0xc0864f0
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B68u; }
        else if (ctx->pc != 0x219B68u) { ctx->pc = 0x219B68u; }
    }
    if (ctx->pc != 0x219B68u) { return; }
    ctx->pc = 0x219B68u;
    // 0x219b68: 0x7bbf0000
    ctx->pc = 0x219b68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b6c: 0x3e00008
    ctx->pc = 0x219B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219B74u;
}
