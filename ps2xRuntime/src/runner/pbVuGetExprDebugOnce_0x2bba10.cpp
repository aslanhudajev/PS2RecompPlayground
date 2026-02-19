#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuGetExprDebugOnce
// Address: 0x2bba10 - 0x2bbb44
void pbVuGetExprDebugOnce_0x2bba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bba10u;

    // 0x2bba10: 0x27bdffd0
    ctx->pc = 0x2bba10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bba14: 0xffbf0020
    ctx->pc = 0x2bba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bba18: 0xffb10010
    ctx->pc = 0x2bba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bba1c: 0xffb00000
    ctx->pc = 0x2bba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bba20: 0x80802d
    ctx->pc = 0x2bba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bba24: 0x3c020037
    ctx->pc = 0x2bba24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bba28: 0x8c4420ac
    ctx->pc = 0x2bba28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bba2c: 0x8c820030
    ctx->pc = 0x2bba2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2bba30: 0x1040000e
    ctx->pc = 0x2BBA30u;
    {
        const bool branch_taken_0x2bba30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBA34u;
        SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
        if (branch_taken_0x2bba30) {
            ctx->pc = 0x2BBA6Cu;
            goto label_2bba6c;
        }
    }
    ctx->pc = 0x2BBA38u;
    // 0x2bba38: 0x8ca325d4
    ctx->pc = 0x2bba38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 9684)));
    // 0x2bba3c: 0x2402ffff
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bba40: 0x54620004
    ctx->pc = 0x2BBA40u;
    {
        const bool branch_taken_0x2bba40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bba40) {
            ctx->pc = 0x2BBA44u;
            SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
            ctx->pc = 0x2BBA54u;
            goto label_2bba54;
        }
    }
    ctx->pc = 0x2BBA48u;
    // 0x2bba48: 0x8c820028
    ctx->pc = 0x2bba48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2bba4c: 0xaca225d4
    ctx->pc = 0x2bba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9684), GPR_U32(ctx, 2));
    // 0x2bba50: 0x3c020037
    ctx->pc = 0x2bba50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bba54:
    // 0x2bba54: 0x8c4220ac
    ctx->pc = 0x2bba54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bba58: 0x8c430030
    ctx->pc = 0x2bba58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bba5c: 0xac430028
    ctx->pc = 0x2bba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2bba60: 0xac400030
    ctx->pc = 0x2bba60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2bba64: 0x10000032
    ctx->pc = 0x2BBA64u;
    {
        const bool branch_taken_0x2bba64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBA68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bba64) {
            ctx->pc = 0x2BBB30u;
            goto label_2bbb30;
        }
    }
    ctx->pc = 0x2BBA6Cu;
label_2bba6c:
    // 0x2bba6c: 0x8ca325d4
    ctx->pc = 0x2bba6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 9684)));
    // 0x2bba70: 0x2404ffff
    ctx->pc = 0x2bba70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bba74: 0x10640004
    ctx->pc = 0x2BBA74u;
    {
        const bool branch_taken_0x2bba74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x2BBA78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bba74) {
            ctx->pc = 0x2BBA88u;
            goto label_2bba88;
        }
    }
    ctx->pc = 0x2BBA7Cu;
    // 0x2bba7c: 0x8c4220ac
    ctx->pc = 0x2bba7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bba80: 0xac430028
    ctx->pc = 0x2bba80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2bba84: 0xaca425d4
    ctx->pc = 0x2bba84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9684), GPR_U32(ctx, 4));
label_2bba88:
    // 0x2bba88: 0x3c110037
    ctx->pc = 0x2bba88u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2bba8c: 0x8e2520ac
    ctx->pc = 0x2bba8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8364)));
    // 0x2bba90: 0x8ca20034
    ctx->pc = 0x2bba90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2bba94: 0x10400025
    ctx->pc = 0x2BBA94u;
    {
        const bool branch_taken_0x2bba94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBA98u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bba94) {
            ctx->pc = 0x2BBB2Cu;
            goto label_2bbb2c;
        }
    }
    ctx->pc = 0x2BBA9Cu;
    // 0x2bba9c: 0x24020001
    ctx->pc = 0x2bba9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbaa0: 0x14620012
    ctx->pc = 0x2BBAA0u;
    {
        const bool branch_taken_0x2bbaa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BBAA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbaa0) {
            ctx->pc = 0x2BBAECu;
            goto label_2bbaec;
        }
    }
    ctx->pc = 0x2BBAA8u;
    // 0x2bbaa8: 0xc0ae584
    ctx->pc = 0x2BBAA8u;
    SET_GPR_U32(ctx, 31, 0x2BBAB0u);
    ctx->pc = 0x2BBAACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 56)));
    ctx->pc = 0x2B9610u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuGetSourceLineStr_0x2b9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAB0u; }
    }
    if (ctx->pc != 0x2BBAB0u) { return; }
    ctx->pc = 0x2BBAB0u;
    // 0x2bbab0: 0x8e2320ac
    ctx->pc = 0x2bbab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8364)));
    // 0x2bbab4: 0x8c650038
    ctx->pc = 0x2bbab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2bbab8: 0x24a60007
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 7));
    // 0x2bbabc: 0x2403ffff
    ctx->pc = 0x2bbabcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bbac0: 0x65182a
    ctx->pc = 0x2bbac0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x2bbac4: 0xa3300b
    ctx->pc = 0x2bbac4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
    // 0x2bbac8: 0x8e030000
    ctx->pc = 0x2bbac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbacc: 0x3c04003b
    ctx->pc = 0x2bbaccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bbad0: 0x24846040
    ctx->pc = 0x2bbad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24640));
    // 0x2bbad4: 0x630c3
    ctx->pc = 0x2bbad4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    // 0x2bbad8: 0x8c670004
    ctx->pc = 0x2bbad8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bbadc: 0xc0b4a34
    ctx->pc = 0x2BBADCu;
    SET_GPR_U32(ctx, 31, 0x2BBAE4u);
    ctx->pc = 0x2BBAE0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBAE4u; }
    }
    if (ctx->pc != 0x2BBAE4u) { return; }
    ctx->pc = 0x2BBAE4u;
    // 0x2bbae4: 0x1000000d
    ctx->pc = 0x2BBAE4u;
    {
        const bool branch_taken_0x2bbae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBAE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bbae4) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBAECu;
label_2bbaec:
    // 0x2bbaec: 0x1860000b
    ctx->pc = 0x2BBAECu;
    {
        const bool branch_taken_0x2bbaec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BBAF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bbaec) {
            ctx->pc = 0x2BBB1Cu;
            goto label_2bbb1c;
        }
    }
    ctx->pc = 0x2BBAF4u;
    // 0x2bbaf4: 0x2862000a
    ctx->pc = 0x2bbaf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
    // 0x2bbaf8: 0x10400007
    ctx->pc = 0x2BBAF8u;
    {
        const bool branch_taken_0x2bbaf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBAFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbaf8) {
            ctx->pc = 0x2BBB18u;
            goto label_2bbb18;
        }
    }
    ctx->pc = 0x2BBB00u;
    // 0x2bbb00: 0x3c020037
    ctx->pc = 0x2bbb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bbb04: 0x8c4220ac
    ctx->pc = 0x2bbb04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bbb08: 0x8c450034
    ctx->pc = 0x2bbb08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2bbb0c: 0x8c460038
    ctx->pc = 0x2bbb0cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2bbb10: 0xc0ae67e
    ctx->pc = 0x2BBB10u;
    SET_GPR_U32(ctx, 31, 0x2BBB18u);
    ctx->pc = 0x2BBB14u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->pc = 0x2B99F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        showVertList_0x2b99f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB18u; }
    }
    if (ctx->pc != 0x2BBB18u) { return; }
    ctx->pc = 0x2BBB18u;
label_2bbb18:
    // 0x2bbb18: 0x3c020037
    ctx->pc = 0x2bbb18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bbb1c:
    // 0x2bbb1c: 0x8c4220ac
    ctx->pc = 0x2bbb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bbb20: 0xac400034
    ctx->pc = 0x2bbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2bbb24: 0x10000002
    ctx->pc = 0x2BBB24u;
    {
        const bool branch_taken_0x2bbb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBB28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bbb24) {
            ctx->pc = 0x2BBB30u;
            goto label_2bbb30;
        }
    }
    ctx->pc = 0x2BBB2Cu;
label_2bbb2c:
    // 0x2bbb2c: 0x102d
    ctx->pc = 0x2bbb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbb30:
    // 0x2bbb30: 0xdfbf0020
    ctx->pc = 0x2bbb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbb34: 0xdfb10010
    ctx->pc = 0x2bbb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb38: 0xdfb00000
    ctx->pc = 0x2bbb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbb3c: 0x3e00008
    ctx->pc = 0x2BBB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBB40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BBA54u: goto label_2bba54;
            case 0x2BBA6Cu: goto label_2bba6c;
            case 0x2BBA88u: goto label_2bba88;
            case 0x2BBAECu: goto label_2bbaec;
            case 0x2BBB18u: goto label_2bbb18;
            case 0x2BBB1Cu: goto label_2bbb1c;
            case 0x2BBB2Cu: goto label_2bbb2c;
            case 0x2BBB30u: goto label_2bbb30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BBB44u;
}
