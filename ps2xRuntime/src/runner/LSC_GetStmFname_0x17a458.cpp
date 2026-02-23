#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetStmFname
// Address: 0x17a458 - 0x17a4e0
void LSC_GetStmFname_0x17a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetStmFname");


    ctx->pc = 0x17a458u;

    // 0x17a458: 0x27bdfff0
    ctx->pc = 0x17a458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a45c: 0x14800006
    ctx->pc = 0x17A45Cu;
    {
        const bool branch_taken_0x17a45c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A460u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a45c) {
            ctx->pc = 0x17A478u;
            goto label_17a478;
        }
    }
    ctx->pc = 0x17A464u;
    // 0x17a464: 0x3c04002c
    ctx->pc = 0x17a464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a468: 0xc05e9c6
    ctx->pc = 0x17A468u;
    SET_GPR_U32(ctx, 31, 0x17A470u);
    ctx->pc = 0x17A46Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A470u; }
        else if (ctx->pc != 0x17A470u) { ctx->pc = 0x17A470u; }
    }
    if (ctx->pc != 0x17A470u) { return; }
    ctx->pc = 0x17A470u;
    // 0x17a470: 0x10000018
    ctx->pc = 0x17A470u;
    {
        const bool branch_taken_0x17a470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A474u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a470) {
            ctx->pc = 0x17A4D4u;
            goto label_17a4d4;
        }
    }
    ctx->pc = 0x17A478u;
label_17a478:
    // 0x17a478: 0x8c820038
    ctx->pc = 0x17a478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17a47c: 0x1045000a
    ctx->pc = 0x17A47Cu;
    {
        const bool branch_taken_0x17a47c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x17A480u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a47c) {
            ctx->pc = 0x17A4A8u;
            goto label_17a4a8;
        }
    }
    ctx->pc = 0x17A484u;
    // 0x17a484: 0x24830038
    ctx->pc = 0x17a484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 56));
    // 0x17a488: 0x24c60001
    ctx->pc = 0x17a488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17a48c: 0x0
    ctx->pc = 0x17a48cu;
    // NOP
label_17a490:
    // 0x17a490: 0x28c20010
    ctx->pc = 0x17a490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 16));
    // 0x17a494: 0x10400004
    ctx->pc = 0x17A494u;
    {
        const bool branch_taken_0x17a494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A498u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x17a494) {
            ctx->pc = 0x17A4A8u;
            goto label_17a4a8;
        }
    }
    ctx->pc = 0x17A49Cu;
    // 0x17a49c: 0x8c620000
    ctx->pc = 0x17a49cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a4a0: 0x5445fffb
    ctx->pc = 0x17A4A0u;
    {
        const bool branch_taken_0x17a4a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x17a4a0) {
            ctx->pc = 0x17A4A4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x17A490u;
            goto label_17a490;
        }
    }
    ctx->pc = 0x17A4A8u;
label_17a4a8:
    // 0x17a4a8: 0x24020010
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a4ac: 0x14c20006
    ctx->pc = 0x17A4ACu;
    {
        const bool branch_taken_0x17a4ac = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x17A4B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 6));
        if (branch_taken_0x17a4ac) {
            ctx->pc = 0x17A4C8u;
            goto label_17a4c8;
        }
    }
    ctx->pc = 0x17A4B4u;
    // 0x17a4b4: 0x3c04002c
    ctx->pc = 0x17a4b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a4b8: 0xc05e9c6
    ctx->pc = 0x17A4B8u;
    SET_GPR_U32(ctx, 31, 0x17A4C0u);
    ctx->pc = 0x17A4BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949592));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4C0u; }
        else if (ctx->pc != 0x17A4C0u) { ctx->pc = 0x17A4C0u; }
    }
    if (ctx->pc != 0x17A4C0u) { return; }
    ctx->pc = 0x17A4C0u;
    // 0x17a4c0: 0x10000004
    ctx->pc = 0x17A4C0u;
    {
        const bool branch_taken_0x17a4c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A4C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a4c0) {
            ctx->pc = 0x17A4D4u;
            goto label_17a4d4;
        }
    }
    ctx->pc = 0x17A4C8u;
label_17a4c8:
    // 0x17a4c8: 0x24420038
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 56));
    // 0x17a4cc: 0x821021
    ctx->pc = 0x17a4ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17a4d0: 0x24420004
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_17a4d4:
    // 0x17a4d4: 0xdfbf0000
    ctx->pc = 0x17a4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a4d8: 0x3e00008
    ctx->pc = 0x17A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A478u: goto label_17a478;
            case 0x17A490u: goto label_17a490;
            case 0x17A4A8u: goto label_17a4a8;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4D4u: goto label_17a4d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A4E0u;
}
