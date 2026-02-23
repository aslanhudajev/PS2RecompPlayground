#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ChkSupply
// Address: 0x194ca0 - 0x194d9c
void sfmps_ChkSupply_0x194ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ChkSupply");


    ctx->pc = 0x194ca0u;

    // 0x194ca0: 0x27bdff80
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x194ca4: 0xffb00010
    ctx->pc = 0x194ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x194ca8: 0xffb40050
    ctx->pc = 0x194ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x194cac: 0x80802d
    ctx->pc = 0x194cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cb0: 0xffb20030
    ctx->pc = 0x194cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x194cb4: 0xc0a02d
    ctx->pc = 0x194cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cb8: 0xffbf0070
    ctx->pc = 0x194cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x194cbc: 0x26123058
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 12376));
    // 0x194cc0: 0xffb50060
    ctx->pc = 0x194cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x194cc4: 0xa0202d
    ctx->pc = 0x194cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cc8: 0xffb30040
    ctx->pc = 0x194cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x194ccc: 0x2a820004
    ctx->pc = 0x194cccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x194cd0: 0xffb10020
    ctx->pc = 0x194cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x194cd4: 0x8e150028
    ctx->pc = 0x194cd4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194cd8: 0x14400005
    ctx->pc = 0x194CD8u;
    {
        const bool branch_taken_0x194cd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194CDCu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 1708)));
        if (branch_taken_0x194cd8) {
            ctx->pc = 0x194CF0u;
            goto label_194cf0;
        }
    }
    ctx->pc = 0x194CE0u;
    // 0x194ce0: 0xc060864
    ctx->pc = 0x194CE0u;
    SET_GPR_U32(ctx, 31, 0x194CE8u);
    ctx->pc = 0x182190u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_CheckDelim_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CE8u; }
        else if (ctx->pc != 0x194CE8u) { ctx->pc = 0x194CE8u; }
    }
    if (ctx->pc != 0x194CE8u) { return; }
    ctx->pc = 0x194CE8u;
    // 0x194ce8: 0x10000002
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194CECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194CF4u;
            goto label_194cf4;
        }
    }
    ctx->pc = 0x194CF0u;
label_194cf0:
    // 0x194cf0: 0x882d
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194cf4:
    // 0x194cf4: 0x3c020008
    ctx->pc = 0x194cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x194cf8: 0x16220009
    ctx->pc = 0x194CF8u;
    {
        const bool branch_taken_0x194cf8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x194CFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194cf8) {
            ctx->pc = 0x194D20u;
            goto label_194d20;
        }
    }
    ctx->pc = 0x194D00u;
    // 0x194d00: 0x8e4206bc
    ctx->pc = 0x194d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 1724)));
    // 0x194d04: 0x4410006
    ctx->pc = 0x194D04u;
    {
        const bool branch_taken_0x194d04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x194d04) {
            ctx->pc = 0x194D20u;
            goto label_194d20;
        }
    }
    ctx->pc = 0x194D0Cu;
    // 0x194d0c: 0xc0648a2
    ctx->pc = 0x194D0Cu;
    SET_GPR_U32(ctx, 31, 0x194D14u);
    ctx->pc = 0x194D10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192288u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRTot_0x192288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D14u; }
        else if (ctx->pc != 0x194D14u) { ctx->pc = 0x194D14u; }
    }
    if (ctx->pc != 0x194D14u) { return; }
    ctx->pc = 0x194D14u;
    // 0x194d14: 0x24420004
    ctx->pc = 0x194d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x194d18: 0xae4206bc
    ctx->pc = 0x194d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1724), GPR_U32(ctx, 2));
    // 0x194d1c: 0x200202d
    ctx->pc = 0x194d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194d20:
    // 0x194d20: 0xc065368
    ctx->pc = 0x194D20u;
    SET_GPR_U32(ctx, 31, 0x194D28u);
    ctx->pc = 0x194D24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_IsEffectiveEndcode_0x194da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D28u; }
        else if (ctx->pc != 0x194D28u) { ctx->pc = 0x194D28u; }
    }
    if (ctx->pc != 0x194D28u) { return; }
    ctx->pc = 0x194D28u;
    // 0x194d28: 0x1440000a
    ctx->pc = 0x194D28u;
    {
        const bool branch_taken_0x194d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194D2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194d28) {
            ctx->pc = 0x194D54u;
            goto label_194d54;
        }
    }
    ctx->pc = 0x194D30u;
    // 0x194d30: 0x295102a
    ctx->pc = 0x194d30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 21)));
    // 0x194d34: 0x1040000f
    ctx->pc = 0x194D34u;
    {
        const bool branch_taken_0x194d34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194D38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194d34) {
            ctx->pc = 0x194D74u;
            goto label_194d74;
        }
    }
    ctx->pc = 0x194D3Cu;
    // 0x194d3c: 0xc064a60
    ctx->pc = 0x194D3Cu;
    SET_GPR_U32(ctx, 31, 0x194D44u);
    ctx->pc = 0x194D40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D44u; }
        else if (ctx->pc != 0x194D44u) { ctx->pc = 0x194D44u; }
    }
    if (ctx->pc != 0x194D44u) { return; }
    ctx->pc = 0x194D44u;
    // 0x194d44: 0x24030001
    ctx->pc = 0x194d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194d48: 0x14430006
    ctx->pc = 0x194D48u;
    {
        const bool branch_taken_0x194d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x194D4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x194d48) {
            ctx->pc = 0x194D64u;
            goto label_194d64;
        }
    }
    ctx->pc = 0x194D50u;
    // 0x194d50: 0x200202d
    ctx->pc = 0x194d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194d54:
    // 0x194d54: 0xc0652ec
    ctx->pc = 0x194D54u;
    SET_GPR_U32(ctx, 31, 0x194D5Cu);
    ctx->pc = 0x194D58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x194BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SetTermDst_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194D5Cu; }
        else if (ctx->pc != 0x194D5Cu) { ctx->pc = 0x194D5Cu; }
    }
    if (ctx->pc != 0x194D5Cu) { return; }
    ctx->pc = 0x194D5Cu;
    // 0x194d5c: 0x10000006
    ctx->pc = 0x194D5Cu;
    {
        const bool branch_taken_0x194d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194D60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194d5c) {
            ctx->pc = 0x194D78u;
            goto label_194d78;
        }
    }
    ctx->pc = 0x194D64u;
label_194d64:
    // 0x194d64: 0x16220004
    ctx->pc = 0x194D64u;
    {
        const bool branch_taken_0x194d64 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x194D68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194d64) {
            ctx->pc = 0x194D78u;
            goto label_194d78;
        }
    }
    ctx->pc = 0x194D6Cu;
    // 0x194d6c: 0x10000002
    ctx->pc = 0x194D6Cu;
    {
        const bool branch_taken_0x194d6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194D70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194d6c) {
            ctx->pc = 0x194D78u;
            goto label_194d78;
        }
    }
    ctx->pc = 0x194D74u;
label_194d74:
    // 0x194d74: 0x24020001
    ctx->pc = 0x194d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194d78:
    // 0x194d78: 0xdfbf0070
    ctx->pc = 0x194d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194d7c: 0xdfb50060
    ctx->pc = 0x194d7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194d80: 0xdfb40050
    ctx->pc = 0x194d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194d84: 0xdfb30040
    ctx->pc = 0x194d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194d88: 0xdfb20030
    ctx->pc = 0x194d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194d8c: 0xdfb10020
    ctx->pc = 0x194d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194d90: 0xdfb00010
    ctx->pc = 0x194d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d94: 0x3e00008
    ctx->pc = 0x194D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194CF0u: goto label_194cf0;
            case 0x194CF4u: goto label_194cf4;
            case 0x194D20u: goto label_194d20;
            case 0x194D54u: goto label_194d54;
            case 0x194D64u: goto label_194d64;
            case 0x194D74u: goto label_194d74;
            case 0x194D78u: goto label_194d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194D9Cu;
}
