#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__14TexBufMgrClassFii
// Address: 0x219da0 - 0x219dcc
void init__14TexBufMgrClassFii_0x219da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__14TexBufMgrClassFii");


    ctx->pc = 0x219da0u;

    // 0x219da0: 0x27bdfff0
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219da4: 0x2402ff00
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x219da8: 0xa21824
    ctx->pc = 0x219da8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x219dac: 0x7fbf0000
    ctx->pc = 0x219dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219db0: 0xc21024
    ctx->pc = 0x219db0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x219db4: 0xac830000
    ctx->pc = 0x219db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x219db8: 0xc086774
    ctx->pc = 0x219DB8u;
    SET_GPR_U32(ctx, 31, 0x219DC0u);
    ctx->pc = 0x219DBCu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x219DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__14TexBufMgrClassFv_0x219dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219DC0u; }
        else if (ctx->pc != 0x219DC0u) { ctx->pc = 0x219DC0u; }
    }
    if (ctx->pc != 0x219DC0u) { return; }
    ctx->pc = 0x219DC0u;
    // 0x219dc0: 0x7bbf0000
    ctx->pc = 0x219dc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219dc4: 0x3e00008
    ctx->pc = 0x219DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219DC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219DCCu;
}
