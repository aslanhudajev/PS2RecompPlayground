#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_ExecServer
// Address: 0x19ac70 - 0x19acd0
void SFD_ExecServer_0x19ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_ExecServer");


    ctx->pc = 0x19ac70u;

    // 0x19ac70: 0x27bdffd0
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ac74: 0x3c020026
    ctx->pc = 0x19ac74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19ac78: 0xffbf0020
    ctx->pc = 0x19ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ac7c: 0x2442ddc0
    ctx->pc = 0x19ac7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19ac80: 0xffb10010
    ctx->pc = 0x19ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ac84: 0xffb00000
    ctx->pc = 0x19ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ac88: 0x8c440178
    ctx->pc = 0x19ac88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x19ac8c: 0x8c420174
    ctx->pc = 0x19ac8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19ac90: 0x18400008
    ctx->pc = 0x19AC90u;
    {
        const bool branch_taken_0x19ac90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19AC94u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ac90) {
            ctx->pc = 0x19ACB4u;
            goto label_19acb4;
        }
    }
    ctx->pc = 0x19AC98u;
    // 0x19ac98: 0x40802d
    ctx->pc = 0x19ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac9c: 0x0
    ctx->pc = 0x19ac9cu;
    // NOP
label_19aca0:
    // 0x19aca0: 0x220202d
    ctx->pc = 0x19aca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aca4: 0xc066b34
    ctx->pc = 0x19ACA4u;
    SET_GPR_U32(ctx, 31, 0x19ACACu);
    ctx->pc = 0x19ACA8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x19ACD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ExecOne_0x19acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACACu; }
        else if (ctx->pc != 0x19ACACu) { ctx->pc = 0x19ACACu; }
    }
    if (ctx->pc != 0x19ACACu) { return; }
    ctx->pc = 0x19ACACu;
    // 0x19acac: 0x1600fffc
    ctx->pc = 0x19ACACu;
    {
        const bool branch_taken_0x19acac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x19ACB0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 26664));
        if (branch_taken_0x19acac) {
            ctx->pc = 0x19ACA0u;
            goto label_19aca0;
        }
    }
    ctx->pc = 0x19ACB4u;
label_19acb4:
    // 0x19acb4: 0xc066d78
    ctx->pc = 0x19ACB4u;
    SET_GPR_U32(ctx, 31, 0x19ACBCu);
    ctx->pc = 0x19B5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_DecideSvrStat_0x19b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACBCu; }
        else if (ctx->pc != 0x19ACBCu) { ctx->pc = 0x19ACBCu; }
    }
    if (ctx->pc != 0x19ACBCu) { return; }
    ctx->pc = 0x19ACBCu;
    // 0x19acbc: 0xdfbf0020
    ctx->pc = 0x19acbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19acc0: 0xdfb10010
    ctx->pc = 0x19acc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19acc4: 0xdfb00000
    ctx->pc = 0x19acc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19acc8: 0x3e00008
    ctx->pc = 0x19ACC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ACA0u: goto label_19aca0;
            case 0x19ACB4u: goto label_19acb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19ACD0u;
}
