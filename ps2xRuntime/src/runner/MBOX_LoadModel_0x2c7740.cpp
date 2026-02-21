#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_LoadModel
// Address: 0x2c7740 - 0x2c7768
void MBOX_LoadModel_0x2c7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7740u;

    // 0x2c7740: 0x27bdfff0
    ctx->pc = 0x2c7740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c7744: 0xffbf0000
    ctx->pc = 0x2c7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7748: 0x282d
    ctx->pc = 0x2c7748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c774c: 0x302d
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7750: 0x382d
    ctx->pc = 0x2c7750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7754: 0xc0b1d78
    ctx->pc = 0x2C7754u;
    SET_GPR_U32(ctx, 31, 0x2C775Cu);
    ctx->pc = 0x2C7758u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C75E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_LoadModelFixed_0x2c75e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C775Cu; }
    }
    if (ctx->pc != 0x2C775Cu) { return; }
    ctx->pc = 0x2C775Cu;
    // 0x2c775c: 0xdfbf0000
    ctx->pc = 0x2c775cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7760: 0x3e00008
    ctx->pc = 0x2C7760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7768u;
}
