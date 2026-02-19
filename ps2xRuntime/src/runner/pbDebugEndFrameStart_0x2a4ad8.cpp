#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugEndFrameStart
// Address: 0x2a4ad8 - 0x2a4afc
void pbDebugEndFrameStart_0x2a4ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4ad8u;

    // 0x2a4ad8: 0x27bdfff0
    ctx->pc = 0x2a4ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4adc: 0xffbf0000
    ctx->pc = 0x2a4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4ae0: 0xc0a904c
    ctx->pc = 0x2A4AE0u;
    SET_GPR_U32(ctx, 31, 0x2A4AE8u);
    ctx->pc = 0x2A4130u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLightDebug_0x2a4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AE8u; }
    }
    if (ctx->pc != 0x2A4AE8u) { return; }
    ctx->pc = 0x2A4AE8u;
    // 0x2a4ae8: 0xc0af7e0
    ctx->pc = 0x2A4AE8u;
    SET_GPR_U32(ctx, 31, 0x2A4AF0u);
    ctx->pc = 0x2BDF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectBsearch_0x2bdf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4AF0u; }
    }
    if (ctx->pc != 0x2A4AF0u) { return; }
    ctx->pc = 0x2A4AF0u;
    // 0x2a4af0: 0xdfbf0000
    ctx->pc = 0x2a4af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4af4: 0x80a8e72
    ctx->pc = 0x2A4AF4u;
    ctx->pc = 0x2A4AF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2A39C8u;
    pbCalcDebugMode_0x2a39c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A4AFCu;
}
