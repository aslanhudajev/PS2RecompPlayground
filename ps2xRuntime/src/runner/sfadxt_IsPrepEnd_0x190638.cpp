#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_IsPrepEnd
// Address: 0x190638 - 0x19065c
void sfadxt_IsPrepEnd_0x190638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_IsPrepEnd");


    ctx->pc = 0x190638u;

    // 0x190638: 0x27bdfff0
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19063c: 0xffbf0000
    ctx->pc = 0x19063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190640: 0xc05c992
    ctx->pc = 0x190640u;
    SET_GPR_U32(ctx, 31, 0x190648u);
    ctx->pc = 0x190644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x172648u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_IsReadyPlayStart_0x172648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190648u; }
        else if (ctx->pc != 0x190648u) { ctx->pc = 0x190648u; }
    }
    if (ctx->pc != 0x190648u) { return; }
    ctx->pc = 0x190648u;
    // 0x190648: 0x38420001
    ctx->pc = 0x190648u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x19064c: 0xdfbf0000
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190650: 0x2c420001
    ctx->pc = 0x190650u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x190654: 0x3e00008
    ctx->pc = 0x190654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19065Cu;
}
