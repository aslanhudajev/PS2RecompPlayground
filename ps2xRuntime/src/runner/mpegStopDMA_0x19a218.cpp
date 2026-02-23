#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpegStopDMA
// Address: 0x19a218 - 0x19a238
void mpegStopDMA_0x19a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpegStopDMA");


    ctx->pc = 0x19a218u;

    // 0x19a218: 0x27bdfff0
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a21c: 0xffbf0000
    ctx->pc = 0x19a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a220: 0xc066642
    ctx->pc = 0x19A220u;
    SET_GPR_U32(ctx, 31, 0x19A228u);
    ctx->pc = 0x19A224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 15736));
    ctx->pc = 0x199908u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x199908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A228u; }
        else if (ctx->pc != 0x19A228u) { ctx->pc = 0x19A228u; }
    }
    if (ctx->pc != 0x19A228u) { return; }
    ctx->pc = 0x19A228u;
    // 0x19a228: 0xdfbf0000
    ctx->pc = 0x19a228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a22c: 0x24020001
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a230: 0x3e00008
    ctx->pc = 0x19A230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A238u;
}
