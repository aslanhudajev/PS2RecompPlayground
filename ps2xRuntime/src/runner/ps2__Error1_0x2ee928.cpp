#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Error1
// Address: 0x2ee928 - 0x2ee954
void ps2__Error1_0x2ee928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee928u;

    // 0x2ee928: 0xa0302d
    ctx->pc = 0x2ee928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee92c: 0x27bdfef0
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ee930: 0x80282d
    ctx->pc = 0x2ee930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee934: 0xffbf0100
    ctx->pc = 0x2ee934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2ee938: 0xc0b6252
    ctx->pc = 0x2EE938u;
    SET_GPR_U32(ctx, 31, 0x2EE940u);
    ctx->pc = 0x2EE93Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE940u; }
    }
    if (ctx->pc != 0x2EE940u) { return; }
    ctx->pc = 0x2EE940u;
    // 0x2ee940: 0xc0bba56
    ctx->pc = 0x2EE940u;
    SET_GPR_U32(ctx, 31, 0x2EE948u);
    ctx->pc = 0x2EE944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE948u; }
    }
    if (ctx->pc != 0x2EE948u) { return; }
    ctx->pc = 0x2EE948u;
    // 0x2ee948: 0xdfbf0100
    ctx->pc = 0x2ee948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ee94c: 0x3e00008
    ctx->pc = 0x2EE94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE954u;
}
