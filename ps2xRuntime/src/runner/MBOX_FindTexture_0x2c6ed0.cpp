#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_FindTexture
// Address: 0x2c6ed0 - 0x2c6efc
void MBOX_FindTexture_0x2c6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6ed0u;

    // 0x2c6ed0: 0x27bdfff0
    ctx->pc = 0x2c6ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6ed4: 0xffbf0000
    ctx->pc = 0x2c6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6ed8: 0x3c020038
    ctx->pc = 0x2c6ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6edc: 0x8c47c500
    ctx->pc = 0x2c6edcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6ee0: 0x302d
    ctx->pc = 0x2c6ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ee4: 0x24e7ffff
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2c6ee8: 0xc0b1b56
    ctx->pc = 0x2C6EE8u;
    SET_GPR_U32(ctx, 31, 0x2C6EF0u);
    ctx->pc = 0x2C6EECu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF0u; }
    }
    if (ctx->pc != 0x2C6EF0u) { return; }
    ctx->pc = 0x2C6EF0u;
    // 0x2c6ef0: 0xdfbf0000
    ctx->pc = 0x2c6ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6ef4: 0x3e00008
    ctx->pc = 0x2C6EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6EFCu;
}
