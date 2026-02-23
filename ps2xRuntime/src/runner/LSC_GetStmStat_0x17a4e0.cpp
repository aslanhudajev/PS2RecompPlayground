#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetStmStat
// Address: 0x17a4e0 - 0x17a564
void LSC_GetStmStat_0x17a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetStmStat");


    ctx->pc = 0x17a4e0u;

    // 0x17a4e0: 0x27bdfff0
    ctx->pc = 0x17a4e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a4e4: 0x14800006
    ctx->pc = 0x17A4E4u;
    {
        const bool branch_taken_0x17a4e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A4E8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a4e4) {
            ctx->pc = 0x17A500u;
            goto label_17a500;
        }
    }
    ctx->pc = 0x17A4ECu;
    // 0x17a4ec: 0x3c04002c
    ctx->pc = 0x17a4ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a4f0: 0xc05e9c6
    ctx->pc = 0x17A4F0u;
    SET_GPR_U32(ctx, 31, 0x17A4F8u);
    ctx->pc = 0x17A4F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4F8u; }
        else if (ctx->pc != 0x17A4F8u) { ctx->pc = 0x17A4F8u; }
    }
    if (ctx->pc != 0x17A4F8u) { return; }
    ctx->pc = 0x17A4F8u;
    // 0x17a4f8: 0x10000017
    ctx->pc = 0x17A4F8u;
    {
        const bool branch_taken_0x17a4f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A4FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a4f8) {
            ctx->pc = 0x17A558u;
            goto label_17a558;
        }
    }
    ctx->pc = 0x17A500u;
label_17a500:
    // 0x17a500: 0x8c820038
    ctx->pc = 0x17a500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17a504: 0x1045000a
    ctx->pc = 0x17A504u;
    {
        const bool branch_taken_0x17a504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x17A508u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a504) {
            ctx->pc = 0x17A530u;
            goto label_17a530;
        }
    }
    ctx->pc = 0x17A50Cu;
    // 0x17a50c: 0x24860038
    ctx->pc = 0x17a50cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x17a510: 0x24630001
    ctx->pc = 0x17a510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a514: 0x0
    ctx->pc = 0x17a514u;
    // NOP
label_17a518:
    // 0x17a518: 0x28620010
    ctx->pc = 0x17a518u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x17a51c: 0x10400004
    ctx->pc = 0x17A51Cu;
    {
        const bool branch_taken_0x17a51c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A520u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
        if (branch_taken_0x17a51c) {
            ctx->pc = 0x17A530u;
            goto label_17a530;
        }
    }
    ctx->pc = 0x17A524u;
    // 0x17a524: 0x8cc20000
    ctx->pc = 0x17a524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17a528: 0x5445fffb
    ctx->pc = 0x17A528u;
    {
        const bool branch_taken_0x17a528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x17a528) {
            ctx->pc = 0x17A52Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x17A518u;
            goto label_17a518;
        }
    }
    ctx->pc = 0x17A530u;
label_17a530:
    // 0x17a530: 0x24020010
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a534: 0x14620006
    ctx->pc = 0x17A534u;
    {
        const bool branch_taken_0x17a534 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17A538u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x17a534) {
            ctx->pc = 0x17A550u;
            goto label_17a550;
        }
    }
    ctx->pc = 0x17A53Cu;
    // 0x17a53c: 0x3c04002c
    ctx->pc = 0x17a53cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a540: 0xc05e9c6
    ctx->pc = 0x17A540u;
    SET_GPR_U32(ctx, 31, 0x17A548u);
    ctx->pc = 0x17A544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949592));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A548u; }
        else if (ctx->pc != 0x17A548u) { ctx->pc = 0x17A548u; }
    }
    if (ctx->pc != 0x17A548u) { return; }
    ctx->pc = 0x17A548u;
    // 0x17a548: 0x10000003
    ctx->pc = 0x17A548u;
    {
        const bool branch_taken_0x17a548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A54Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a548) {
            ctx->pc = 0x17A558u;
            goto label_17a558;
        }
    }
    ctx->pc = 0x17A550u;
label_17a550:
    // 0x17a550: 0x831821
    ctx->pc = 0x17a550u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17a554: 0x8c620070
    ctx->pc = 0x17a554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_17a558:
    // 0x17a558: 0xdfbf0000
    ctx->pc = 0x17a558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a55c: 0x3e00008
    ctx->pc = 0x17A55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A500u: goto label_17a500;
            case 0x17A518u: goto label_17a518;
            case 0x17A530u: goto label_17a530;
            case 0x17A550u: goto label_17a550;
            case 0x17A558u: goto label_17a558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A564u;
}
