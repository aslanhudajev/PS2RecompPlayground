#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_BiMakeMbTa
// Address: 0x183fa0 - 0x183fcc
void mpvcmc_BiMakeMbTa_0x183fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_BiMakeMbTa");


    ctx->pc = 0x183fa0u;

    // 0x183fa0: 0x27bdfff0
    ctx->pc = 0x183fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183fa4: 0x248301d0
    ctx->pc = 0x183fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 464));
    // 0x183fa8: 0xffbf0000
    ctx->pc = 0x183fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183fac: 0x8c8602a8
    ctx->pc = 0x183facu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x183fb0: 0x8c640020
    ctx->pc = 0x183fb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x183fb4: 0x24820180
    ctx->pc = 0x183fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 384));
    // 0x183fb8: 0xc060ff4
    ctx->pc = 0x183FB8u;
    SET_GPR_U32(ctx, 31, 0x183FC0u);
    ctx->pc = 0x183FBCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x183FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_BiMakeMbTaSub_0x183fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183FC0u; }
        else if (ctx->pc != 0x183FC0u) { ctx->pc = 0x183FC0u; }
    }
    if (ctx->pc != 0x183FC0u) { return; }
    ctx->pc = 0x183FC0u;
    // 0x183fc0: 0xdfbf0000
    ctx->pc = 0x183fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fc4: 0x3e00008
    ctx->pc = 0x183FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183FCCu;
}
