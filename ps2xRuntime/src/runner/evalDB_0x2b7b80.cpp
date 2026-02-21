#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDB
// Address: 0x2b7b80 - 0x2b7d78
void evalDB_0x2b7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7b80u;

    // 0x2b7b80: 0x27bdff90
    ctx->pc = 0x2b7b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b7b84: 0xffbf0060
    ctx->pc = 0x2b7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b7b88: 0xffb50050
    ctx->pc = 0x2b7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b7b8c: 0xffb40040
    ctx->pc = 0x2b7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b7b90: 0xffb30030
    ctx->pc = 0x2b7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b7b94: 0xffb20020
    ctx->pc = 0x2b7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b7b98: 0xffb10010
    ctx->pc = 0x2b7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7b9c: 0xffb00000
    ctx->pc = 0x2b7b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7ba0: 0xa0882d
    ctx->pc = 0x2b7ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ba4: 0xc0a82d
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ba8: 0xe0902d
    ctx->pc = 0x2b7ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bac: 0x100982d
    ctx->pc = 0x2b7bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bb0: 0x14800009
    ctx->pc = 0x2B7BB0u;
    {
        const bool branch_taken_0x2b7bb0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7BB4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bb0) {
            ctx->pc = 0x2B7BD8u;
            goto label_2b7bd8;
        }
    }
    ctx->pc = 0x2B7BB8u;
    // 0x2b7bb8: 0x3c020037
    ctx->pc = 0x2b7bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b7bbc: 0x8c4320ac
    ctx->pc = 0x2b7bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7bc0: 0x8c62002c
    ctx->pc = 0x2b7bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2b7bc4: 0x14400005
    ctx->pc = 0x2B7BC4u;
    {
        const bool branch_taken_0x2b7bc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7BC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bc4) {
            ctx->pc = 0x2B7BDCu;
            goto label_2b7bdc;
        }
    }
    ctx->pc = 0x2B7BCCu;
    // 0x2b7bcc: 0x8c620004
    ctx->pc = 0x2b7bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b7bd0: 0x10000060
    ctx->pc = 0x2B7BD0u;
    {
        const bool branch_taken_0x2b7bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7BD4u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2b7bd0) {
            ctx->pc = 0x2B7D54u;
            goto label_2b7d54;
        }
    }
    ctx->pc = 0x2B7BD8u;
label_2b7bd8:
    // 0x2b7bd8: 0x202d
    ctx->pc = 0x2b7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7bdc:
    // 0x2b7bdc: 0x24050020
    ctx->pc = 0x2b7bdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7be0: 0x302d
    ctx->pc = 0x2b7be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7be4: 0xc0ad0d6
    ctx->pc = 0x2B7BE4u;
    SET_GPR_U32(ctx, 31, 0x2B7BECu);
    ctx->pc = 0x2B7BE8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7BECu; }
    }
    if (ctx->pc != 0x2B7BECu) { return; }
    ctx->pc = 0x2B7BECu;
    // 0x2b7bec: 0x3c100037
    ctx->pc = 0x2b7becu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2b7bf0: 0x8e0220ac
    ctx->pc = 0x2b7bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7bf4: 0x3c04003b
    ctx->pc = 0x2b7bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7bf8: 0x24845250
    ctx->pc = 0x2b7bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21072));
    // 0x2b7bfc: 0xc0b4a34
    ctx->pc = 0x2B7BFCu;
    SET_GPR_U32(ctx, 31, 0x2B7C04u);
    ctx->pc = 0x2B7C00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C04u; }
    }
    if (ctx->pc != 0x2B7C04u) { return; }
    ctx->pc = 0x2B7C04u;
    // 0x2b7c04: 0x8e0220ac
    ctx->pc = 0x2b7c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7c08: 0x8c450004
    ctx->pc = 0x2b7c08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7c0c: 0x80a20000
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7c10: 0x10400007
    ctx->pc = 0x2B7C10u;
    {
        const bool branch_taken_0x2b7c10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b7c10) {
            ctx->pc = 0x2B7C30u;
            goto label_2b7c30;
        }
    }
    ctx->pc = 0x2B7C18u;
    // 0x2b7c18: 0x3c04003b
    ctx->pc = 0x2b7c18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7c1c: 0xc0b4a34
    ctx->pc = 0x2B7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7C24u);
    ctx->pc = 0x2B7C20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21056));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C24u; }
    }
    if (ctx->pc != 0x2B7C24u) { return; }
    ctx->pc = 0x2B7C24u;
    // 0x2b7c24: 0x8e0220ac
    ctx->pc = 0x2b7c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7c28: 0x8c420004
    ctx->pc = 0x2b7c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7c2c: 0xa0400000
    ctx->pc = 0x2b7c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b7c30:
    // 0x2b7c30: 0x52800006
    ctx->pc = 0x2B7C30u;
    {
        const bool branch_taken_0x2b7c30 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b7c30) {
            ctx->pc = 0x2B7C34u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2B7C4Cu;
            goto label_2b7c4c;
        }
    }
    ctx->pc = 0x2B7C38u;
    // 0x2b7c38: 0x3c04003b
    ctx->pc = 0x2b7c38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7c3c: 0x24845258
    ctx->pc = 0x2b7c3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21080));
    // 0x2b7c40: 0xc0b4a34
    ctx->pc = 0x2B7C40u;
    SET_GPR_U32(ctx, 31, 0x2B7C48u);
    ctx->pc = 0x2B7C44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C48u; }
    }
    if (ctx->pc != 0x2B7C48u) { return; }
    ctx->pc = 0x2B7C48u;
    // 0x2b7c48: 0x3c04003b
    ctx->pc = 0x2b7c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b7c4c:
    // 0x2b7c4c: 0xc0b4a34
    ctx->pc = 0x2B7C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7C54u);
    ctx->pc = 0x2B7C50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C54u; }
    }
    if (ctx->pc != 0x2B7C54u) { return; }
    ctx->pc = 0x2B7C54u;
    // 0x2b7c54: 0x3c100037
    ctx->pc = 0x2b7c54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2b7c58: 0x8e0320ac
    ctx->pc = 0x2b7c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7c5c: 0x8c620008
    ctx->pc = 0x2b7c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b7c60: 0x8c630024
    ctx->pc = 0x2b7c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b7c64: 0x431021
    ctx->pc = 0x2b7c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7c68: 0x80430000
    ctx->pc = 0x2b7c68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7c6c: 0x24020020
    ctx->pc = 0x2b7c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7c70: 0x2405002d
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b7c74: 0x202d
    ctx->pc = 0x2b7c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c78: 0x43280b
    ctx->pc = 0x2b7c78u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2b7c7c: 0x302d
    ctx->pc = 0x2b7c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c80: 0xc0ad0d6
    ctx->pc = 0x2B7C80u;
    SET_GPR_U32(ctx, 31, 0x2B7C88u);
    ctx->pc = 0x2B7C84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C88u; }
    }
    if (ctx->pc != 0x2B7C88u) { return; }
    ctx->pc = 0x2B7C88u;
    // 0x2b7c88: 0x220202d
    ctx->pc = 0x2b7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c8c: 0x2a0282d
    ctx->pc = 0x2b7c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c90: 0x240302d
    ctx->pc = 0x2b7c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c94: 0x260382d
    ctx->pc = 0x2b7c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c98: 0x24080020
    ctx->pc = 0x2b7c98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7c9c: 0x2409002d
    ctx->pc = 0x2b7c9cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b7ca0: 0xc0addd0
    ctx->pc = 0x2B7CA0u;
    SET_GPR_U32(ctx, 31, 0x2B7CA8u);
    ctx->pc = 0x2B7CA4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B7740u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBSectionStr_0x2b7740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7CA8u; }
    }
    if (ctx->pc != 0x2B7CA8u) { return; }
    ctx->pc = 0x2B7CA8u;
    // 0x2b7ca8: 0x3c04003b
    ctx->pc = 0x2b7ca8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7cac: 0x24845250
    ctx->pc = 0x2b7cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21072));
    // 0x2b7cb0: 0xc0b4a34
    ctx->pc = 0x2B7CB0u;
    SET_GPR_U32(ctx, 31, 0x2B7CB8u);
    ctx->pc = 0x2B7CB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7CB8u; }
    }
    if (ctx->pc != 0x2B7CB8u) { return; }
    ctx->pc = 0x2B7CB8u;
    // 0x2b7cb8: 0x12200004
    ctx->pc = 0x2B7CB8u;
    {
        const bool branch_taken_0x2b7cb8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7CBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
        if (branch_taken_0x2b7cb8) {
            ctx->pc = 0x2B7CCCu;
            goto label_2b7ccc;
        }
    }
    ctx->pc = 0x2B7CC0u;
    // 0x2b7cc0: 0x8c420000
    ctx->pc = 0x2b7cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7cc4: 0x10000002
    ctx->pc = 0x2B7CC4u;
    {
        const bool branch_taken_0x2b7cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7CC8u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x2b7cc4) {
            ctx->pc = 0x2B7CD0u;
            goto label_2b7cd0;
        }
    }
    ctx->pc = 0x2B7CCCu;
label_2b7ccc:
    // 0x2b7ccc: 0x2405ffff
    ctx->pc = 0x2b7cccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7cd0:
    // 0x2b7cd0: 0x12400005
    ctx->pc = 0x2B7CD0u;
    {
        const bool branch_taken_0x2b7cd0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7CD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7cd0) {
            ctx->pc = 0x2B7CE8u;
            goto label_2b7ce8;
        }
    }
    ctx->pc = 0x2B7CD8u;
    // 0x2b7cd8: 0x8c4220ac
    ctx->pc = 0x2b7cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7cdc: 0x8c420000
    ctx->pc = 0x2b7cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7ce0: 0x10000002
    ctx->pc = 0x2B7CE0u;
    {
        const bool branch_taken_0x2b7ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7CE4u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x2b7ce0) {
            ctx->pc = 0x2B7CECu;
            goto label_2b7cec;
        }
    }
    ctx->pc = 0x2B7CE8u;
label_2b7ce8:
    // 0x2b7ce8: 0x2406ffff
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7cec:
    // 0x2b7cec: 0x12600005
    ctx->pc = 0x2B7CECu;
    {
        const bool branch_taken_0x2b7cec = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7CF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7cec) {
            ctx->pc = 0x2B7D04u;
            goto label_2b7d04;
        }
    }
    ctx->pc = 0x2B7CF4u;
    // 0x2b7cf4: 0x8c4220ac
    ctx->pc = 0x2b7cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7cf8: 0x8c420000
    ctx->pc = 0x2b7cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7cfc: 0x10000002
    ctx->pc = 0x2B7CFCu;
    {
        const bool branch_taken_0x2b7cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7D00u;
        SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x2b7cfc) {
            ctx->pc = 0x2B7D08u;
            goto label_2b7d08;
        }
    }
    ctx->pc = 0x2B7D04u;
label_2b7d04:
    // 0x2b7d04: 0x2407ffff
    ctx->pc = 0x2b7d04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7d08:
    // 0x2b7d08: 0x12a00005
    ctx->pc = 0x2B7D08u;
    {
        const bool branch_taken_0x2b7d08 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7D0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7d08) {
            ctx->pc = 0x2B7D20u;
            goto label_2b7d20;
        }
    }
    ctx->pc = 0x2B7D10u;
    // 0x2b7d10: 0x8c4220ac
    ctx->pc = 0x2b7d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7d14: 0x8c420000
    ctx->pc = 0x2b7d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7d18: 0x10000002
    ctx->pc = 0x2B7D18u;
    {
        const bool branch_taken_0x2b7d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7D1Cu;
        SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x2b7d18) {
            ctx->pc = 0x2B7D24u;
            goto label_2b7d24;
        }
    }
    ctx->pc = 0x2B7D20u;
label_2b7d20:
    // 0x2b7d20: 0x2408ffff
    ctx->pc = 0x2b7d20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7d24:
    // 0x2b7d24: 0x3c04003b
    ctx->pc = 0x2b7d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7d28: 0xc0b4a34
    ctx->pc = 0x2B7D28u;
    SET_GPR_U32(ctx, 31, 0x2B7D30u);
    ctx->pc = 0x2B7D2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21088));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D30u; }
    }
    if (ctx->pc != 0x2B7D30u) { return; }
    ctx->pc = 0x2B7D30u;
    // 0x2b7d30: 0x3c04003b
    ctx->pc = 0x2b7d30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7d34: 0xc0b4a34
    ctx->pc = 0x2B7D34u;
    SET_GPR_U32(ctx, 31, 0x2B7D3Cu);
    ctx->pc = 0x2B7D38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D3Cu; }
    }
    if (ctx->pc != 0x2B7D3Cu) { return; }
    ctx->pc = 0x2B7D3Cu;
    // 0x2b7d3c: 0x3c020037
    ctx->pc = 0x2b7d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b7d40: 0x8c4320ac
    ctx->pc = 0x2b7d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7d44: 0x8c620024
    ctx->pc = 0x2b7d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b7d48: 0x8c630008
    ctx->pc = 0x2b7d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b7d4c: 0x431021
    ctx->pc = 0x2b7d4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7d50: 0xa0400001
    ctx->pc = 0x2b7d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2b7d54:
    // 0x2b7d54: 0xdfbf0060
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7d58: 0xdfb50050
    ctx->pc = 0x2b7d58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7d5c: 0xdfb40040
    ctx->pc = 0x2b7d5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7d60: 0xdfb30030
    ctx->pc = 0x2b7d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7d64: 0xdfb20020
    ctx->pc = 0x2b7d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d68: 0xdfb10010
    ctx->pc = 0x2b7d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7d6c: 0xdfb00000
    ctx->pc = 0x2b7d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d70: 0x3e00008
    ctx->pc = 0x2B7D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7BD8u: goto label_2b7bd8;
            case 0x2B7BDCu: goto label_2b7bdc;
            case 0x2B7C30u: goto label_2b7c30;
            case 0x2B7C4Cu: goto label_2b7c4c;
            case 0x2B7CCCu: goto label_2b7ccc;
            case 0x2B7CD0u: goto label_2b7cd0;
            case 0x2B7CE8u: goto label_2b7ce8;
            case 0x2B7CECu: goto label_2b7cec;
            case 0x2B7D04u: goto label_2b7d04;
            case 0x2B7D08u: goto label_2b7d08;
            case 0x2B7D20u: goto label_2b7d20;
            case 0x2B7D24u: goto label_2b7d24;
            case 0x2B7D54u: goto label_2b7d54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B7D78u;
}
