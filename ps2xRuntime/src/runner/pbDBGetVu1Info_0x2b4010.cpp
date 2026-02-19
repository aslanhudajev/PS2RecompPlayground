#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBGetVu1Info
// Address: 0x2b4010 - 0x2b402c
void pbDBGetVu1Info_0x2b4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4010u;

    // 0x2b4010: 0x27bdfff0
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4014: 0xffbf0000
    ctx->pc = 0x2b4014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4018: 0xc0acf00
    ctx->pc = 0x2B4018u;
    SET_GPR_U32(ctx, 31, 0x2B4020u);
    ctx->pc = 0x2B401Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B3C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVuXInfo_0x2b3c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4020u; }
    }
    if (ctx->pc != 0x2B4020u) { return; }
    ctx->pc = 0x2B4020u;
    // 0x2b4020: 0xdfbf0000
    ctx->pc = 0x2b4020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4024: 0x3e00008
    ctx->pc = 0x2B4024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B402Cu;
}
