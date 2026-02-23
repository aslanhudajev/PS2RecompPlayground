#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetVlcMotion
// Address: 0x18c408 - 0x18c468
void mpvvlc_SetVlcMotion_0x18c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetVlcMotion");


    ctx->pc = 0x18c408u;

    // 0x18c408: 0x27bdffe0
    ctx->pc = 0x18c408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c40c: 0x3c020024
    ctx->pc = 0x18c40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c410: 0xffb00000
    ctx->pc = 0x18c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c414: 0x3c050024
    ctx->pc = 0x18c414u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c418: 0x2490ff00
    ctx->pc = 0x18c418u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x18c41c: 0xffbf0010
    ctx->pc = 0x18c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c420: 0xac501a48
    ctx->pc = 0x18c420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6728), GPR_U32(ctx, 16));
    // 0x18c424: 0x200202d
    ctx->pc = 0x18c424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c428: 0x24a52038
    ctx->pc = 0x18c428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8248));
    // 0x18c42c: 0xc0601b2
    ctx->pc = 0x18C42Cu;
    SET_GPR_U32(ctx, 31, 0x18C434u);
    ctx->pc = 0x18C430u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C434u; }
        else if (ctx->pc != 0x18C434u) { ctx->pc = 0x18C434u; }
    }
    if (ctx->pc != 0x18C434u) { return; }
    ctx->pc = 0x18C434u;
    // 0x18c434: 0x2610ffc0
    ctx->pc = 0x18c434u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x18c438: 0x3c020024
    ctx->pc = 0x18c438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c43c: 0x3c050024
    ctx->pc = 0x18c43cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c440: 0xac501a4c
    ctx->pc = 0x18c440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6732), GPR_U32(ctx, 16));
    // 0x18c444: 0x200202d
    ctx->pc = 0x18c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c448: 0x24a52138
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8504));
    // 0x18c44c: 0xc0601b2
    ctx->pc = 0x18C44Cu;
    SET_GPR_U32(ctx, 31, 0x18C454u);
    ctx->pc = 0x18C450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C454u; }
        else if (ctx->pc != 0x18C454u) { ctx->pc = 0x18C454u; }
    }
    if (ctx->pc != 0x18C454u) { return; }
    ctx->pc = 0x18C454u;
    // 0x18c454: 0x200102d
    ctx->pc = 0x18c454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c458: 0xdfbf0010
    ctx->pc = 0x18c458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c45c: 0xdfb00000
    ctx->pc = 0x18c45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c460: 0x3e00008
    ctx->pc = 0x18C460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C464u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C468u;
}
