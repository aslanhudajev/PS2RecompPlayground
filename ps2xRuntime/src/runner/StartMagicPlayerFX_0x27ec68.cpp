#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartMagicPlayerFX
// Address: 0x27ec68 - 0x27ec94
void StartMagicPlayerFX_0x27ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ec68u;

    // 0x27ec68: 0x27bdfff0
    ctx->pc = 0x27ec68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ec6c: 0xffbf0000
    ctx->pc = 0x27ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ec70: 0x80282d
    ctx->pc = 0x27ec70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec74: 0x24040022
    ctx->pc = 0x27ec74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x27ec78: 0x44806000
    ctx->pc = 0x27ec78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27ec7c: 0x302d
    ctx->pc = 0x27ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec80: 0xc09f5fa
    ctx->pc = 0x27EC80u;
    SET_GPR_U32(ctx, 31, 0x27EC88u);
    ctx->pc = 0x27EC84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC88u; }
    }
    if (ctx->pc != 0x27EC88u) { return; }
    ctx->pc = 0x27EC88u;
    // 0x27ec88: 0xdfbf0000
    ctx->pc = 0x27ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ec8c: 0x3e00008
    ctx->pc = 0x27EC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EC90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EC94u;
}
