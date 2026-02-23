#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpegRestartDMA
// Address: 0x19a238 - 0x19a258
void mpegRestartDMA_0x19a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpegRestartDMA");


    ctx->pc = 0x19a238u;

    // 0x19a238: 0x27bdfff0
    ctx->pc = 0x19a238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a23c: 0xffbf0000
    ctx->pc = 0x19a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a240: 0xc066682
    ctx->pc = 0x19A240u;
    SET_GPR_U32(ctx, 31, 0x19A248u);
    ctx->pc = 0x19A244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 15736));
    ctx->pc = 0x199A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA_0x199a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A248u; }
        else if (ctx->pc != 0x19A248u) { ctx->pc = 0x19A248u; }
    }
    if (ctx->pc != 0x19A248u) { return; }
    ctx->pc = 0x19A248u;
    // 0x19a248: 0xdfbf0000
    ctx->pc = 0x19a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a24c: 0x24020001
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a250: 0x3e00008
    ctx->pc = 0x19A250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A254u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A258u;
}
