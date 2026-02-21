#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitStuff
// Address: 0x2c5d60 - 0x2c5d8c
void MBInitStuff_0x2c5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5d60u;

    // 0x2c5d60: 0x27bdfff0
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5d64: 0xffbf0000
    ctx->pc = 0x2c5d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5d68: 0x3c020038
    ctx->pc = 0x2c5d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5d6c: 0xc0abbf8
    ctx->pc = 0x2C5D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D74u);
    ctx->pc = 0x2C5D70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947240), GPR_U32(ctx, 0));
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D74u; }
    }
    if (ctx->pc != 0x2C5D74u) { return; }
    ctx->pc = 0x2C5D74u;
    // 0x2c5d74: 0x3c030038
    ctx->pc = 0x2c5d74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5d78: 0xc0b3d82
    ctx->pc = 0x2C5D78u;
    SET_GPR_U32(ctx, 31, 0x2C5D80u);
    ctx->pc = 0x2C5D7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947776), GPR_U32(ctx, 2));
    ctx->pc = 0x2CF608u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitStats_0x2cf608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D80u; }
    }
    if (ctx->pc != 0x2C5D80u) { return; }
    ctx->pc = 0x2C5D80u;
    // 0x2c5d80: 0xdfbf0000
    ctx->pc = 0x2c5d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5d84: 0x80b185c
    ctx->pc = 0x2C5D84u;
    ctx->pc = 0x2C5D88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2C6170u;
    init_sqrtinvtab_0x2c6170(rdram, ctx, runtime); return;
    ctx->pc = 0x2C5D8Cu;
}
