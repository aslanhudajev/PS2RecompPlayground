#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_AutoVchPlay
// Address: 0x194760 - 0x1947f0
void sfmps_AutoVchPlay_0x194760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_AutoVchPlay");


    ctx->pc = 0x194760u;

    // 0x194760: 0x27bdffa0
    ctx->pc = 0x194760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x194764: 0xffb20030
    ctx->pc = 0x194764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x194768: 0xffb10020
    ctx->pc = 0x194768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19476c: 0x80902d
    ctx->pc = 0x19476cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194770: 0xa0882d
    ctx->pc = 0x194770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194774: 0xffb30040
    ctx->pc = 0x194774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x194778: 0xffb00010
    ctx->pc = 0x194778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19477c: 0xffbf0050
    ctx->pc = 0x19477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x194780: 0xc0674c2
    ctx->pc = 0x194780u;
    SET_GPR_U32(ctx, 31, 0x194788u);
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 59));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194788u; }
        else if (ctx->pc != 0x194788u) { ctx->pc = 0x194788u; }
    }
    if (ctx->pc != 0x194788u) { return; }
    ctx->pc = 0x194788u;
    // 0x194788: 0x24130001
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19478c: 0x40802d
    ctx->pc = 0x19478cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194790: 0x1213000f
    ctx->pc = 0x194790u;
    {
        const bool branch_taken_0x194790 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 19));
        ctx->pc = 0x194794u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x194790) {
            ctx->pc = 0x1947D0u;
            goto label_1947d0;
        }
    }
    ctx->pc = 0x194798u;
    // 0x194798: 0x1440000e
    ctx->pc = 0x194798u;
    {
        const bool branch_taken_0x194798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19479Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194798) {
            ctx->pc = 0x1947D4u;
            goto label_1947d4;
        }
    }
    ctx->pc = 0x1947A0u;
    // 0x1947a0: 0x24020002
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1947a4: 0x5602000b
    ctx->pc = 0x1947A4u;
    {
        const bool branch_taken_0x1947a4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1947a4) {
            ctx->pc = 0x1947A8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1947D4u;
            goto label_1947d4;
        }
    }
    ctx->pc = 0x1947ACu;
    // 0x1947ac: 0x240202d
    ctx->pc = 0x1947acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947b0: 0x3a0282d
    ctx->pc = 0x1947b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947b4: 0xc065420
    ctx->pc = 0x1947B4u;
    SET_GPR_U32(ctx, 31, 0x1947BCu);
    ctx->pc = 0x1947B8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x195080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetStmNum_0x195080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947BCu; }
        else if (ctx->pc != 0x1947BCu) { ctx->pc = 0x1947BCu; }
    }
    if (ctx->pc != 0x1947BCu) { return; }
    ctx->pc = 0x1947BCu;
    // 0x1947bc: 0x8fa30004
    ctx->pc = 0x1947bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1947c0: 0x200102d
    ctx->pc = 0x1947c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947c4: 0x263182a
    ctx->pc = 0x1947c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1947c8: 0x10000002
    ctx->pc = 0x1947C8u;
    {
        const bool branch_taken_0x1947c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1947CCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
        if (branch_taken_0x1947c8) {
            ctx->pc = 0x1947D4u;
            goto label_1947d4;
        }
    }
    ctx->pc = 0x1947D0u;
label_1947d0:
    // 0x1947d0: 0x220102d
    ctx->pc = 0x1947d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1947d4:
    // 0x1947d4: 0xdfbf0050
    ctx->pc = 0x1947d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1947d8: 0xdfb30040
    ctx->pc = 0x1947d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1947dc: 0xdfb20030
    ctx->pc = 0x1947dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1947e0: 0xdfb10020
    ctx->pc = 0x1947e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1947e4: 0xdfb00010
    ctx->pc = 0x1947e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1947e8: 0x3e00008
    ctx->pc = 0x1947E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1947ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1947D0u: goto label_1947d0;
            case 0x1947D4u: goto label_1947d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1947F0u;
}
