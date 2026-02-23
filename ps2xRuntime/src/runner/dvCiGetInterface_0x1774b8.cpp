#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetInterface
// Address: 0x1774b8 - 0x1774e8
void dvCiGetInterface_0x1774b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetInterface");


    ctx->pc = 0x1774b8u;

    // 0x1774b8: 0x27bdfff0
    ctx->pc = 0x1774b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1774bc: 0x3c020024
    ctx->pc = 0x1774bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1774c0: 0xffbf0000
    ctx->pc = 0x1774c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1774c4: 0x202d
    ctx->pc = 0x1774c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774c8: 0x8c439360
    ctx->pc = 0x1774c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294939488)));
    // 0x1774cc: 0xc05e17c
    ctx->pc = 0x1774CCu;
    SET_GPR_U32(ctx, 31, 0x1774D4u);
    ctx->pc = 0x1785F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiSetRootDir_0x1785f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774D4u; }
        else if (ctx->pc != 0x1774D4u) { ctx->pc = 0x1774D4u; }
    }
    if (ctx->pc != 0x1774D4u) { return; }
    ctx->pc = 0x1774D4u;
    // 0x1774d4: 0x3c020024
    ctx->pc = 0x1774d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1774d8: 0xdfbf0000
    ctx->pc = 0x1774d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1774dc: 0x24429370
    ctx->pc = 0x1774dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x1774e0: 0x3e00008
    ctx->pc = 0x1774E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1774E8u;
}
