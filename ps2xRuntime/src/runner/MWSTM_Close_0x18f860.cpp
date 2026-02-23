#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_Close
// Address: 0x18f860 - 0x18f880
void MWSTM_Close_0x18f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_Close");


    ctx->pc = 0x18f860u;

    // 0x18f860: 0x27bdfff0
    ctx->pc = 0x18f860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f864: 0xffbf0000
    ctx->pc = 0x18f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f868: 0xc05c2ca
    ctx->pc = 0x18F868u;
    SET_GPR_U32(ctx, 31, 0x18F870u);
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F870u; }
        else if (ctx->pc != 0x18F870u) { ctx->pc = 0x18F870u; }
    }
    if (ctx->pc != 0x18F870u) { return; }
    ctx->pc = 0x18F870u;
    // 0x18f870: 0xdfbf0000
    ctx->pc = 0x18f870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f874: 0x102d
    ctx->pc = 0x18f874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f878: 0x3e00008
    ctx->pc = 0x18F878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F87Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F880u;
}
