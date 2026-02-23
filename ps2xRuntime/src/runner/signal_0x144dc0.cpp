#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: signal
// Address: 0x144dc0 - 0x144dec
void signal_0x144dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("signal");


    ctx->pc = 0x144dc0u;

    // 0x144dc0: 0x80102d
    ctx->pc = 0x144dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dc4: 0x3c030022
    ctx->pc = 0x144dc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x144dc8: 0x27bdfff0
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144dcc: 0xa0302d
    ctx->pc = 0x144dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dd0: 0x8c6471ec
    ctx->pc = 0x144dd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 29164)));
    // 0x144dd4: 0xffbf0000
    ctx->pc = 0x144dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144dd8: 0xc0512d8
    ctx->pc = 0x144DD8u;
    SET_GPR_U32(ctx, 31, 0x144DE0u);
    ctx->pc = 0x144DDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        _signal_r_0x144b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DE0u; }
        else if (ctx->pc != 0x144DE0u) { ctx->pc = 0x144DE0u; }
    }
    if (ctx->pc != 0x144DE0u) { return; }
    ctx->pc = 0x144DE0u;
    // 0x144de0: 0xdfbf0000
    ctx->pc = 0x144de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144de4: 0x3e00008
    ctx->pc = 0x144DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144DE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144DECu;
}
