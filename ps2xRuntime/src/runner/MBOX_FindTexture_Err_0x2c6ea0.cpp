#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_FindTexture_Err
// Address: 0x2c6ea0 - 0x2c6ecc
void MBOX_FindTexture_Err_0x2c6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6ea0u;

    // 0x2c6ea0: 0x27bdfff0
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6ea4: 0xffbf0000
    ctx->pc = 0x2c6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6ea8: 0xc0402d
    ctx->pc = 0x2c6ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6eac: 0x3c020038
    ctx->pc = 0x2c6eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6eb0: 0x8c47c500
    ctx->pc = 0x2c6eb0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6eb4: 0x302d
    ctx->pc = 0x2c6eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6eb8: 0xc0b1b56
    ctx->pc = 0x2C6EB8u;
    SET_GPR_U32(ctx, 31, 0x2C6EC0u);
    ctx->pc = 0x2C6EBCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EC0u; }
    }
    if (ctx->pc != 0x2C6EC0u) { return; }
    ctx->pc = 0x2C6EC0u;
    // 0x2c6ec0: 0xdfbf0000
    ctx->pc = 0x2c6ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6ec4: 0x3e00008
    ctx->pc = 0x2C6EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6ECCu;
}
