#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PullTrigger__Fi
// Address: 0x2025e0 - 0x20261c
void is_PullTrigger__Fi_0x2025e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PullTrigger__Fi");


    ctx->pc = 0x2025e0u;

    // 0x2025e0: 0x41040
    ctx->pc = 0x2025e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2025e4: 0x441021
    ctx->pc = 0x2025e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2025e8: 0x21880
    ctx->pc = 0x2025e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2025ec: 0x3c020050
    ctx->pc = 0x2025ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2025f0: 0x27bdfff0
    ctx->pc = 0x2025f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2025f4: 0x2442fecc
    ctx->pc = 0x2025f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966988));
    // 0x2025f8: 0x7fbf0000
    ctx->pc = 0x2025f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2025fc: 0x431021
    ctx->pc = 0x2025fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202600: 0x94450000
    ctx->pc = 0x202600u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202604: 0x24062000
    ctx->pc = 0x202604u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x202608: 0xc08088c
    ctx->pc = 0x202608u;
    SET_GPR_U32(ctx, 31, 0x202610u);
    ctx->pc = 0x20260Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x202230u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressButton__FiUiUiUi_0x202230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202610u; }
        else if (ctx->pc != 0x202610u) { ctx->pc = 0x202610u; }
    }
    if (ctx->pc != 0x202610u) { return; }
    ctx->pc = 0x202610u;
    // 0x202610: 0x7bbf0000
    ctx->pc = 0x202610u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202614: 0x3e00008
    ctx->pc = 0x202614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20261Cu;
}
