#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: psysAttribErr
// Address: 0x2c9560 - 0x2c9584
void psysAttribErr_0x2c9560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9560u;

    // 0x2c9560: 0x27bdfff0
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9564: 0xffbf0000
    ctx->pc = 0x2c9564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9568: 0x3c04003b
    ctx->pc = 0x2c9568u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c956c: 0xc0b492e
    ctx->pc = 0x2C956Cu;
    SET_GPR_U32(ctx, 31, 0x2C9574u);
    ctx->pc = 0x2C9570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29752));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9574u; }
    }
    if (ctx->pc != 0x2C9574u) { return; }
    ctx->pc = 0x2C9574u;
    // 0x2c9574: 0x24020001
    ctx->pc = 0x2c9574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9578: 0xdfbf0000
    ctx->pc = 0x2c9578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c957c: 0x3e00008
    ctx->pc = 0x2C957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9584u;
}
