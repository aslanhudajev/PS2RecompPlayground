#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_SetBlit
// Address: 0x2c30e8 - 0x2c311c
void MBOX_SetBlit_0x2c30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c30e8u;

    // 0x2c30e8: 0x27bdffe0
    ctx->pc = 0x2c30e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c30ec: 0xffbf0010
    ctx->pc = 0x2c30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c30f0: 0xffb00000
    ctx->pc = 0x2c30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c30f4: 0x80802d
    ctx->pc = 0x2c30f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30f8: 0xa0202d
    ctx->pc = 0x2c30f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30fc: 0x282d
    ctx->pc = 0x2c30fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3100: 0xc0b1ba8
    ctx->pc = 0x2C3100u;
    SET_GPR_U32(ctx, 31, 0x2C3108u);
    ctx->pc = 0x2C3104u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3108u; }
    }
    if (ctx->pc != 0x2C3108u) { return; }
    ctx->pc = 0x2C3108u;
    // 0x2c3108: 0xae020004
    ctx->pc = 0x2c3108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2c310c: 0xdfbf0010
    ctx->pc = 0x2c310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3110: 0xdfb00000
    ctx->pc = 0x2c3110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3114: 0x3e00008
    ctx->pc = 0x2C3114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C311Cu;
}
