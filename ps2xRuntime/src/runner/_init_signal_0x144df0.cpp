#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _init_signal
// Address: 0x144df0 - 0x144e14
void _init_signal_0x144df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_init_signal");


    ctx->pc = 0x144df0u;

    // 0x144df0: 0x3c020022
    ctx->pc = 0x144df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x144df4: 0x27bdfff0
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144df8: 0x8c4471ec
    ctx->pc = 0x144df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
    // 0x144dfc: 0xffbf0000
    ctx->pc = 0x144dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144e00: 0xc0512bc
    ctx->pc = 0x144E00u;
    SET_GPR_U32(ctx, 31, 0x144E08u);
    ctx->pc = 0x144AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x144af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E08u; }
        else if (ctx->pc != 0x144E08u) { ctx->pc = 0x144E08u; }
    }
    if (ctx->pc != 0x144E08u) { return; }
    ctx->pc = 0x144E08u;
    // 0x144e08: 0xdfbf0000
    ctx->pc = 0x144e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e0c: 0x3e00008
    ctx->pc = 0x144E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144E14u;
}
