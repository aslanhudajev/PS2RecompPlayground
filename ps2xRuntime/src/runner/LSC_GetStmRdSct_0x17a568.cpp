#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetStmRdSct
// Address: 0x17a568 - 0x17a5ec
void LSC_GetStmRdSct_0x17a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetStmRdSct");


    ctx->pc = 0x17a568u;

    // 0x17a568: 0x27bdfff0
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a56c: 0x14800006
    ctx->pc = 0x17A56Cu;
    {
        const bool branch_taken_0x17a56c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A570u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a56c) {
            ctx->pc = 0x17A588u;
            goto label_17a588;
        }
    }
    ctx->pc = 0x17A574u;
    // 0x17a574: 0x3c04002c
    ctx->pc = 0x17a574u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a578: 0xc05e9c6
    ctx->pc = 0x17A578u;
    SET_GPR_U32(ctx, 31, 0x17A580u);
    ctx->pc = 0x17A57Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A580u; }
        else if (ctx->pc != 0x17A580u) { ctx->pc = 0x17A580u; }
    }
    if (ctx->pc != 0x17A580u) { return; }
    ctx->pc = 0x17A580u;
    // 0x17a580: 0x10000017
    ctx->pc = 0x17A580u;
    {
        const bool branch_taken_0x17a580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A584u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a580) {
            ctx->pc = 0x17A5E0u;
            goto label_17a5e0;
        }
    }
    ctx->pc = 0x17A588u;
label_17a588:
    // 0x17a588: 0x8c820038
    ctx->pc = 0x17a588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17a58c: 0x1045000a
    ctx->pc = 0x17A58Cu;
    {
        const bool branch_taken_0x17a58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x17A590u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a58c) {
            ctx->pc = 0x17A5B8u;
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A594u;
    // 0x17a594: 0x24860038
    ctx->pc = 0x17a594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 56));
    // 0x17a598: 0x24630001
    ctx->pc = 0x17a598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a59c: 0x0
    ctx->pc = 0x17a59cu;
    // NOP
label_17a5a0:
    // 0x17a5a0: 0x28620010
    ctx->pc = 0x17a5a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x17a5a4: 0x10400004
    ctx->pc = 0x17A5A4u;
    {
        const bool branch_taken_0x17a5a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A5A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 64));
        if (branch_taken_0x17a5a4) {
            ctx->pc = 0x17A5B8u;
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A5ACu;
    // 0x17a5ac: 0x8cc20000
    ctx->pc = 0x17a5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17a5b0: 0x5445fffb
    ctx->pc = 0x17A5B0u;
    {
        const bool branch_taken_0x17a5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x17a5b0) {
            ctx->pc = 0x17A5B4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x17A5A0u;
            goto label_17a5a0;
        }
    }
    ctx->pc = 0x17A5B8u;
label_17a5b8:
    // 0x17a5b8: 0x24020010
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a5bc: 0x14620006
    ctx->pc = 0x17A5BCu;
    {
        const bool branch_taken_0x17a5bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17A5C0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x17a5bc) {
            ctx->pc = 0x17A5D8u;
            goto label_17a5d8;
        }
    }
    ctx->pc = 0x17A5C4u;
    // 0x17a5c4: 0x3c04002c
    ctx->pc = 0x17a5c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a5c8: 0xc05e9c6
    ctx->pc = 0x17A5C8u;
    SET_GPR_U32(ctx, 31, 0x17A5D0u);
    ctx->pc = 0x17A5CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949592));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5D0u; }
        else if (ctx->pc != 0x17A5D0u) { ctx->pc = 0x17A5D0u; }
    }
    if (ctx->pc != 0x17A5D0u) { return; }
    ctx->pc = 0x17A5D0u;
    // 0x17a5d0: 0x10000003
    ctx->pc = 0x17A5D0u;
    {
        const bool branch_taken_0x17a5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A5D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a5d0) {
            ctx->pc = 0x17A5E0u;
            goto label_17a5e0;
        }
    }
    ctx->pc = 0x17A5D8u;
label_17a5d8:
    // 0x17a5d8: 0x831821
    ctx->pc = 0x17a5d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17a5dc: 0x8c620074
    ctx->pc = 0x17a5dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_17a5e0:
    // 0x17a5e0: 0xdfbf0000
    ctx->pc = 0x17a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a5e4: 0x3e00008
    ctx->pc = 0x17A5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A588u: goto label_17a588;
            case 0x17A5A0u: goto label_17a5a0;
            case 0x17A5B8u: goto label_17a5b8;
            case 0x17A5D8u: goto label_17a5d8;
            case 0x17A5E0u: goto label_17a5e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A5ECu;
}
