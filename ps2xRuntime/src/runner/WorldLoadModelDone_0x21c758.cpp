#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldLoadModelDone
// Address: 0x21c758 - 0x21c774
void WorldLoadModelDone_0x21c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c758u;

    // 0x21c758: 0x27bdfff0
    ctx->pc = 0x21c758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c75c: 0xffbf0000
    ctx->pc = 0x21c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c760: 0xc0b1e3e
    ctx->pc = 0x21C760u;
    SET_GPR_U32(ctx, 31, 0x21C768u);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C768u; }
    }
    if (ctx->pc != 0x21C768u) { return; }
    ctx->pc = 0x21C768u;
    // 0x21c768: 0xdfbf0000
    ctx->pc = 0x21c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c76c: 0x3e00008
    ctx->pc = 0x21C76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C774u;
}
