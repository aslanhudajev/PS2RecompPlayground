#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_IntraTa
// Address: 0x183818 - 0x183850
void MPVCMC_IntraTa_0x183818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_IntraTa");


    ctx->pc = 0x183818u;

    // 0x183818: 0x27bdfff0
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18381c: 0x80302d
    ctx->pc = 0x18381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183820: 0xffbf0000
    ctx->pc = 0x183820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183824: 0x24c301d0
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 464));
    // 0x183828: 0x24c402e0
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 736));
    // 0x18382c: 0x8c650020
    ctx->pc = 0x18382cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x183830: 0x8cc70038
    ctx->pc = 0x183830u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x183834: 0x24a20180
    ctx->pc = 0x183834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 384));
    // 0x183838: 0x24c6012c
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 300));
    // 0x18383c: 0xc060e14
    ctx->pc = 0x18383Cu;
    SET_GPR_U32(ctx, 31, 0x183844u);
    ctx->pc = 0x183840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x183850u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OutputIntra6blk_0x183850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183844u; }
        else if (ctx->pc != 0x183844u) { ctx->pc = 0x183844u; }
    }
    if (ctx->pc != 0x183844u) { return; }
    ctx->pc = 0x183844u;
    // 0x183844: 0xdfbf0000
    ctx->pc = 0x183844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183848: 0x3e00008
    ctx->pc = 0x183848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18384Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183850u;
}
