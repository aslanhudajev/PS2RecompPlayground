#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_DestroySj
// Address: 0x1917c0 - 0x1917fc
void SFBUF_DestroySj_0x1917c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_DestroySj");


    ctx->pc = 0x1917c0u;

    // 0x1917c0: 0x27bdffe0
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1917c4: 0x282d
    ctx->pc = 0x1917c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917c8: 0xffb00000
    ctx->pc = 0x1917c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1917cc: 0xffbf0010
    ctx->pc = 0x1917ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1917d0: 0xc064600
    ctx->pc = 0x1917D0u;
    SET_GPR_U32(ctx, 31, 0x1917D8u);
    ctx->pc = 0x1917D4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_DestroySjSub_0x191800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917D8u; }
        else if (ctx->pc != 0x1917D8u) { ctx->pc = 0x1917D8u; }
    }
    if (ctx->pc != 0x1917D8u) { return; }
    ctx->pc = 0x1917D8u;
    // 0x1917d8: 0x200202d
    ctx->pc = 0x1917d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917dc: 0xc064600
    ctx->pc = 0x1917DCu;
    SET_GPR_U32(ctx, 31, 0x1917E4u);
    ctx->pc = 0x1917E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x191800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_DestroySjSub_0x191800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917E4u; }
        else if (ctx->pc != 0x1917E4u) { ctx->pc = 0x1917E4u; }
    }
    if (ctx->pc != 0x1917E4u) { return; }
    ctx->pc = 0x1917E4u;
    // 0x1917e4: 0x200202d
    ctx->pc = 0x1917e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917e8: 0xdfbf0010
    ctx->pc = 0x1917e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1917ec: 0xdfb00000
    ctx->pc = 0x1917ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1917f0: 0x24050002
    ctx->pc = 0x1917f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1917f4: 0x8064600
    ctx->pc = 0x1917F4u;
    ctx->pc = 0x1917F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x191800u;
    sfbuf_DestroySjSub_0x191800(rdram, ctx, runtime); return;
    ctx->pc = 0x1917FCu;
}
