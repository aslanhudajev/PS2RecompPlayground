#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegRestartDMA
// Address: 0x2de668 - 0x2de68c
void mpegRestartDMA_0x2de668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de668u;

    // 0x2de668: 0x27bdfff0
    ctx->pc = 0x2de668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de66c: 0xffbf0000
    ctx->pc = 0x2de66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de670: 0x3c04003a
    ctx->pc = 0x2de670u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de674: 0xc0b7e36
    ctx->pc = 0x2DE674u;
    SET_GPR_U32(ctx, 31, 0x2DE67Cu);
    ctx->pc = 0x2DE678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10888));
    ctx->pc = 0x2DF8D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA_0x2df8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE67Cu; }
    }
    if (ctx->pc != 0x2DE67Cu) { return; }
    ctx->pc = 0x2DE67Cu;
    // 0x2de67c: 0x24020001
    ctx->pc = 0x2de67cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de680: 0xdfbf0000
    ctx->pc = 0x2de680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de684: 0x3e00008
    ctx->pc = 0x2DE684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE68Cu;
}
