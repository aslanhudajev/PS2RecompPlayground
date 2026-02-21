#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPTexName
// Address: 0x2c9c98 - 0x2c9ccc
void MBPsysSetPTexName_0x2c9c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9c98u;

    // 0x2c9c98: 0x27bdffe0
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9c9c: 0xffbf0010
    ctx->pc = 0x2c9c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9ca0: 0xffb00000
    ctx->pc = 0x2c9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9ca4: 0x80802d
    ctx->pc = 0x2c9ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ca8: 0xa0202d
    ctx->pc = 0x2c9ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cac: 0xc0b1bb4
    ctx->pc = 0x2C9CACu;
    SET_GPR_U32(ctx, 31, 0x2C9CB4u);
    ctx->pc = 0x2C9CB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CB4u; }
    }
    if (ctx->pc != 0x2C9CB4u) { return; }
    ctx->pc = 0x2C9CB4u;
    // 0x2c9cb4: 0x200202d
    ctx->pc = 0x2c9cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cb8: 0x40282d
    ctx->pc = 0x2c9cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cbc: 0xdfbf0010
    ctx->pc = 0x2c9cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9cc0: 0xdfb00000
    ctx->pc = 0x2c9cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9cc4: 0x80b2716
    ctx->pc = 0x2C9CC4u;
    ctx->pc = 0x2C9CC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C9C58u;
    MBPsysSetPTex_0x2c9c58(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9CCCu;
}
