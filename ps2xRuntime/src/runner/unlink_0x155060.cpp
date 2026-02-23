#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: unlink
// Address: 0x155060 - 0x155088
void unlink_0x155060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("unlink");


    ctx->pc = 0x155060u;

    // 0x155060: 0x27bdfff0
    ctx->pc = 0x155060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155064: 0xffbf0000
    ctx->pc = 0x155064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155068: 0xc05058a
    ctx->pc = 0x155068u;
    SET_GPR_U32(ctx, 31, 0x155070u);
    ctx->pc = 0x141628u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x141628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155070u; }
        else if (ctx->pc != 0x155070u) { ctx->pc = 0x155070u; }
    }
    if (ctx->pc != 0x155070u) { return; }
    ctx->pc = 0x155070u;
    // 0x155070: 0x24030005
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x155074: 0xdfbf0000
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155078: 0xac430000
    ctx->pc = 0x155078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15507c: 0x2402ffff
    ctx->pc = 0x15507cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155080: 0x3e00008
    ctx->pc = 0x155080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155088u;
}
