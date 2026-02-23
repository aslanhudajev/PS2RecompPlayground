#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitDcSiz
// Address: 0x18b9e8 - 0x18ba04
void mpvvlc_InitDcSiz_0x18b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitDcSiz");


    ctx->pc = 0x18b9e8u;

    // 0x18b9e8: 0x27bdfff0
    ctx->pc = 0x18b9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b9ec: 0xffbf0000
    ctx->pc = 0x18b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b9f0: 0xc062e82
    ctx->pc = 0x18B9F0u;
    SET_GPR_U32(ctx, 31, 0x18B9F8u);
    ctx->pc = 0x18BA08u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitDcSizY_0x18ba08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9F8u; }
        else if (ctx->pc != 0x18B9F8u) { ctx->pc = 0x18B9F8u; }
    }
    if (ctx->pc != 0x18B9F8u) { return; }
    ctx->pc = 0x18B9F8u;
    // 0x18b9f8: 0xdfbf0000
    ctx->pc = 0x18b9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9fc: 0x8062ee0
    ctx->pc = 0x18B9FCu;
    ctx->pc = 0x18BA00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18BB80u;
    mpvvlc_InitDcSizC_0x18bb80(rdram, ctx, runtime); return;
    ctx->pc = 0x18BA04u;
}
