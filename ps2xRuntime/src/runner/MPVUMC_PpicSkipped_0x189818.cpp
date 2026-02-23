#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_PpicSkipped
// Address: 0x189818 - 0x189894
void MPVUMC_PpicSkipped_0x189818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_PpicSkipped");


    ctx->pc = 0x189818u;

    // 0x189818: 0x27bdffa0
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18981c: 0xffb10020
    ctx->pc = 0x18981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x189820: 0x80882d
    ctx->pc = 0x189820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189824: 0xffb30040
    ctx->pc = 0x189824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x189828: 0xffb20030
    ctx->pc = 0x189828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18982c: 0x263301e0
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 480));
    // 0x189830: 0xffb00010
    ctx->pc = 0x189830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x189834: 0x263201d0
    ctx->pc = 0x189834u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 464));
    // 0x189838: 0x24b0ffff
    ctx->pc = 0x189838u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18983c: 0x1200000e
    ctx->pc = 0x18983Cu;
    {
        const bool branch_taken_0x18983c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x189840u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        if (branch_taken_0x18983c) {
            ctx->pc = 0x189878u;
            goto label_189878;
        }
    }
    ctx->pc = 0x189844u;
    // 0x189844: 0x8e25029c
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_189848:
    // 0x189848: 0x220202d
    ctx->pc = 0x189848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18984c: 0x3a0302d
    ctx->pc = 0x18984cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189850: 0x240382d
    ctx->pc = 0x189850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189854: 0xc0626fa
    ctx->pc = 0x189854u;
    SET_GPR_U32(ctx, 31, 0x18985Cu);
    ctx->pc = 0x189858u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x189BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_CalcOfs_0x189be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18985Cu; }
        else if (ctx->pc != 0x18985Cu) { ctx->pc = 0x18985Cu; }
    }
    if (ctx->pc != 0x18985Cu) { return; }
    ctx->pc = 0x18985Cu;
    // 0x18985c: 0x2610ffff
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x189860: 0x3a0202d
    ctx->pc = 0x189860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189864: 0x240282d
    ctx->pc = 0x189864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189868: 0xc062626
    ctx->pc = 0x189868u;
    SET_GPR_U32(ctx, 31, 0x189870u);
    ctx->pc = 0x18986Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189898u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvumc_PpicSkipMb_0x189898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189870u; }
        else if (ctx->pc != 0x189870u) { ctx->pc = 0x189870u; }
    }
    if (ctx->pc != 0x189870u) { return; }
    ctx->pc = 0x189870u;
    // 0x189870: 0x5600fff5
    ctx->pc = 0x189870u;
    {
        const bool branch_taken_0x189870 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x189870) {
            ctx->pc = 0x189874u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 668)));
            ctx->pc = 0x189848u;
            goto label_189848;
        }
    }
    ctx->pc = 0x189878u;
label_189878:
    // 0x189878: 0xdfbf0050
    ctx->pc = 0x189878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18987c: 0xdfb30040
    ctx->pc = 0x18987cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189880: 0xdfb20030
    ctx->pc = 0x189880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189884: 0xdfb10020
    ctx->pc = 0x189884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189888: 0xdfb00010
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18988c: 0x3e00008
    ctx->pc = 0x18988Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189848u: goto label_189848;
            case 0x189878u: goto label_189878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189894u;
}
