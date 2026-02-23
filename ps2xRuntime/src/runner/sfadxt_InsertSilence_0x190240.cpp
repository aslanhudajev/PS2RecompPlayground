#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_InsertSilence
// Address: 0x190240 - 0x19025c
void sfadxt_InsertSilence_0x190240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_InsertSilence");


    ctx->pc = 0x190240u;

    // 0x190240: 0x27bdfff0
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190244: 0xffbf0000
    ctx->pc = 0x190244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190248: 0xc05ca8c
    ctx->pc = 0x190248u;
    SET_GPR_U32(ctx, 31, 0x190250u);
    ctx->pc = 0x19024Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x172A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_InsertSilence_0x172a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190250u; }
        else if (ctx->pc != 0x190250u) { ctx->pc = 0x190250u; }
    }
    if (ctx->pc != 0x190250u) { return; }
    ctx->pc = 0x190250u;
    // 0x190250: 0xdfbf0000
    ctx->pc = 0x190250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190254: 0x3e00008
    ctx->pc = 0x190254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19025Cu;
}
