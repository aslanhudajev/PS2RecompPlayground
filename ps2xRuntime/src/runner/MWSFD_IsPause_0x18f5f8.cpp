#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_IsPause
// Address: 0x18f5f8 - 0x18f638
void MWSFD_IsPause_0x18f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_IsPause");


    ctx->pc = 0x18f5f8u;

    // 0x18f5f8: 0x27bdfff0
    ctx->pc = 0x18f5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f5fc: 0xffbf0000
    ctx->pc = 0x18f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f600: 0xc0669fc
    ctx->pc = 0x18F600u;
    SET_GPR_U32(ctx, 31, 0x18F608u);
    ctx->pc = 0x18F604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19A7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetPaStat_0x19a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F608u; }
        else if (ctx->pc != 0x18F608u) { ctx->pc = 0x18F608u; }
    }
    if (ctx->pc != 0x18F608u) { return; }
    ctx->pc = 0x18F608u;
    // 0x18f608: 0x40282d
    ctx->pc = 0x18f608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f60c: 0x10a00006
    ctx->pc = 0x18F60Cu;
    {
        const bool branch_taken_0x18f60c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F610u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18f60c) {
            ctx->pc = 0x18F628u;
            goto label_18f628;
        }
    }
    ctx->pc = 0x18F614u;
    // 0x18f614: 0x10a20006
    ctx->pc = 0x18F614u;
    {
        const bool branch_taken_0x18f614 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x18F618u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18f614) {
            ctx->pc = 0x18F630u;
            goto label_18f630;
        }
    }
    ctx->pc = 0x18F61Cu;
    // 0x18f61c: 0x3c04002c
    ctx->pc = 0x18f61cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f620: 0xc063dda
    ctx->pc = 0x18F620u;
    SET_GPR_U32(ctx, 31, 0x18F628u);
    ctx->pc = 0x18F624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955664));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F628u; }
        else if (ctx->pc != 0x18F628u) { ctx->pc = 0x18F628u; }
    }
    if (ctx->pc != 0x18F628u) { return; }
    ctx->pc = 0x18F628u;
label_18f628:
    // 0x18f628: 0x102d
    ctx->pc = 0x18f628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f62c: 0xdfbf0000
    ctx->pc = 0x18f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f630:
    // 0x18f630: 0x3e00008
    ctx->pc = 0x18F630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F628u: goto label_18f628;
            case 0x18F630u: goto label_18f630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F638u;
}
