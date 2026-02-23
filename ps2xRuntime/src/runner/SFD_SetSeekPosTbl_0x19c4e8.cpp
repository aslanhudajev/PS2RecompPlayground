#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetSeekPosTbl
// Address: 0x19c4e8 - 0x19c540
void SFD_SetSeekPosTbl_0x19c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetSeekPosTbl");


    ctx->pc = 0x19c4e8u;

    // 0x19c4e8: 0x27bdffd0
    ctx->pc = 0x19c4e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c4ec: 0xffb00000
    ctx->pc = 0x19c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c4f0: 0xffb10010
    ctx->pc = 0x19c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c4f4: 0x80802d
    ctx->pc = 0x19c4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4f8: 0xffbf0020
    ctx->pc = 0x19c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c4fc: 0xc064f1e
    ctx->pc = 0x19C4FCu;
    SET_GPR_U32(ctx, 31, 0x19C504u);
    ctx->pc = 0x19C500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C504u; }
        else if (ctx->pc != 0x19C504u) { ctx->pc = 0x19C504u; }
    }
    if (ctx->pc != 0x19C504u) { return; }
    ctx->pc = 0x19C504u;
    // 0x19c504: 0x10400006
    ctx->pc = 0x19C504u;
    {
        const bool branch_taken_0x19c504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C508u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c504) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C50Cu;
    // 0x19c50c: 0x3c05ff00
    ctx->pc = 0x19c50cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c510: 0xc064ea0
    ctx->pc = 0x19C510u;
    SET_GPR_U32(ctx, 31, 0x19C518u);
    ctx->pc = 0x19C514u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 338));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C518u; }
        else if (ctx->pc != 0x19C518u) { ctx->pc = 0x19C518u; }
    }
    if (ctx->pc != 0x19C518u) { return; }
    ctx->pc = 0x19C518u;
    // 0x19c518: 0x10000005
    ctx->pc = 0x19C518u;
    {
        const bool branch_taken_0x19c518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C51Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19c518) {
            ctx->pc = 0x19C530u;
            goto label_19c530;
        }
    }
    ctx->pc = 0x19C520u;
label_19c520:
    // 0x19c520: 0x8e036758
    ctx->pc = 0x19c520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19c524: 0x102d
    ctx->pc = 0x19c524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c528: 0xac710dac
    ctx->pc = 0x19c528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3500), GPR_U32(ctx, 17));
    // 0x19c52c: 0xdfbf0020
    ctx->pc = 0x19c52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c530:
    // 0x19c530: 0xdfb10010
    ctx->pc = 0x19c530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c534: 0xdfb00000
    ctx->pc = 0x19c534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c538: 0x3e00008
    ctx->pc = 0x19C538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C53Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C520u: goto label_19c520;
            case 0x19C530u: goto label_19c530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C540u;
}
