#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setlocale
// Address: 0x142478 - 0x1424a4
void setlocale_0x142478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setlocale");


    ctx->pc = 0x142478u;

    // 0x142478: 0x80102d
    ctx->pc = 0x142478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14247c: 0x3c030022
    ctx->pc = 0x14247cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x142480: 0x27bdfff0
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142484: 0xa0302d
    ctx->pc = 0x142484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142488: 0x8c6471ec
    ctx->pc = 0x142488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 29164)));
    // 0x14248c: 0xffbf0000
    ctx->pc = 0x14248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142490: 0xc0508f8
    ctx->pc = 0x142490u;
    SET_GPR_U32(ctx, 31, 0x142498u);
    ctx->pc = 0x142494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1423E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setlocale_r_0x1423e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142498u; }
        else if (ctx->pc != 0x142498u) { ctx->pc = 0x142498u; }
    }
    if (ctx->pc != 0x142498u) { return; }
    ctx->pc = 0x142498u;
    // 0x142498: 0xdfbf0000
    ctx->pc = 0x142498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14249c: 0x3e00008
    ctx->pc = 0x14249Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1424A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1424A4u;
}
