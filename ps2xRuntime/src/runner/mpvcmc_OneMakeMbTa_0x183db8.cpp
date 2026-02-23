#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_OneMakeMbTa
// Address: 0x183db8 - 0x183de4
void mpvcmc_OneMakeMbTa_0x183db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_OneMakeMbTa");


    ctx->pc = 0x183db8u;

    // 0x183db8: 0x27bdfff0
    ctx->pc = 0x183db8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183dbc: 0x248301d0
    ctx->pc = 0x183dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 464));
    // 0x183dc0: 0xffbf0000
    ctx->pc = 0x183dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183dc4: 0x8c8602a8
    ctx->pc = 0x183dc4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x183dc8: 0x8c640020
    ctx->pc = 0x183dc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x183dcc: 0x24820180
    ctx->pc = 0x183dccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 384));
    // 0x183dd0: 0xc060f7a
    ctx->pc = 0x183DD0u;
    SET_GPR_U32(ctx, 31, 0x183DD8u);
    ctx->pc = 0x183DD4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x183DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneMakeMbTaSub_0x183de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DD8u; }
        else if (ctx->pc != 0x183DD8u) { ctx->pc = 0x183DD8u; }
    }
    if (ctx->pc != 0x183DD8u) { return; }
    ctx->pc = 0x183DD8u;
    // 0x183dd8: 0xdfbf0000
    ctx->pc = 0x183dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ddc: 0x3e00008
    ctx->pc = 0x183DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183DE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183DE4u;
}
