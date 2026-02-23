#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_IsrInit
// Address: 0x17eaf8 - 0x17eb20
void DCT_IsrInit_0x17eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_IsrInit");


    ctx->pc = 0x17eaf8u;

    // 0x17eaf8: 0x27bdfff0
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17eafc: 0xffbf0000
    ctx->pc = 0x17eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eb00: 0xc06016e
    ctx->pc = 0x17EB00u;
    SET_GPR_U32(ctx, 31, 0x17EB08u);
    ctx->pc = 0x1805B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_GetVerStr_0x1805b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB08u; }
        else if (ctx->pc != 0x17EB08u) { ctx->pc = 0x17EB08u; }
    }
    if (ctx->pc != 0x17EB08u) { return; }
    ctx->pc = 0x17EB08u;
    // 0x17eb08: 0x3c03002e
    ctx->pc = 0x17eb08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17eb0c: 0xc05fac8
    ctx->pc = 0x17EB0Cu;
    SET_GPR_U32(ctx, 31, 0x17EB14u);
    ctx->pc = 0x17EB10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17024), GPR_U32(ctx, 2));
    ctx->pc = 0x17EB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        initScaleTbl_0x17eb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB14u; }
        else if (ctx->pc != 0x17EB14u) { ctx->pc = 0x17EB14u; }
    }
    if (ctx->pc != 0x17EB14u) { return; }
    ctx->pc = 0x17EB14u;
    // 0x17eb14: 0xdfbf0000
    ctx->pc = 0x17eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb18: 0x805fb7a
    ctx->pc = 0x17EB18u;
    ctx->pc = 0x17EB1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17EDE8u;
    initSparseTbl_0x17ede8(rdram, ctx, runtime); return;
    ctx->pc = 0x17EB20u;
}
